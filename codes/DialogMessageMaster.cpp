void DialogMessageMaster___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  int32_t v3; // w1
  struct DialogMessageMaster_StaticFields *static_fields; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C2712C & 1) == 0 )
  {
    sub_1C2D490(&DialogMessageMaster_TypeInfo);
    sub_1C2D490(&StringLiteral_18602/*"dialogMessage_{0}_{1}"*/);
    sub_1C2D490(&StringLiteral_23008/*"remindDialogMessage_{0}_{1}"*/);
    byte_4C2712C = 1;
  }
  DialogMessageMaster_TypeInfo->static_fields->SAVE_KEY = (struct System_String_o *)StringLiteral_18602/*"dialogMessage_{0}_{1}"*/;
  sub_1C2D434((CGThumbnailListItem_o *)DialogMessageMaster_TypeInfo->static_fields, StringLiteral_18602/*"dialogMessage_{0}_{1}"*/, v1, v2);
  v3 = StringLiteral_23008/*"remindDialogMessage_{0}_{1}"*/;
  static_fields = DialogMessageMaster_TypeInfo->static_fields;
  static_fields->SAVE_REMIND_KEY = (struct System_String_o *)StringLiteral_23008/*"remindDialogMessage_{0}_{1}"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&static_fields->SAVE_REMIND_KEY, v3, v5, v6);
}


void DialogMessageMaster___ctor(DialogMessageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C27126 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_DialogMessageMaster__DialogMessageEntity__int___ctor__);
    byte_4C27126 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    234,
    (const MethodInfo_3385A74 *)Method_DataMasterBase_DialogMessageMaster__DialogMessageEntity__int___ctor__);
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
  _DWORD *v18; // x20
  DialogMessageMaster_c *v19; // x0
  System_String_o *SAVE_KEY; // x21
  Il2CppObject *v21; // x22
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  Il2CppObject *v25; // x2
  System_String_o *v26; // x0
  System_String_o *SAVE_REMIND_KEY; // x21
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  Il2CppObject *v31; // x22
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  Il2CppObject *v35; // x2
  System_String_o *v36; // x0
  System_Collections_Generic_IEnumerator_T__c *v37; // x8
  __int64 v38; // x9
  int32_t *v39; // x10
  __int64 v40; // x0
  int v41; // [xsp+10h] [xbp-60h] BYREF
  int v42; // [xsp+14h] [xbp-5Ch] BYREF
  int v43; // [xsp+18h] [xbp-58h] BYREF
  int v44; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_4C27127 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_DialogMessageEntity__GetEnumerator__);
    sub_1C2D490(&DialogMessageMaster_TypeInfo);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerator_DialogMessageEntity__TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    byte_4C27127 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C2D6EC(0, method);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33217E0 *)Method_System_Collections_ObjectModel_Collection_DialogMessageEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C2D6EC(0, v4);
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
      v9 = sub_1C7DCA8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
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
      v13 = sub_1C7DCA8(Enumerator, System_Collections_Generic_IEnumerator_DialogMessageEntity__TypeInfo, 0);
    }
    v18 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v13)(
                      Enumerator,
                      *(_QWORD *)(v13 + 8));
    v19 = DialogMessageMaster_TypeInfo;
    if ( !DialogMessageMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DialogMessageMaster_TypeInfo);
      v19 = DialogMessageMaster_TypeInfo;
    }
    if ( !v18 )
      sub_1C2D6EC(v19, v14);
    SAVE_KEY = v19->static_fields->SAVE_KEY;
    v44 = v18[4];
    v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v44, v15, v16, v17);
    v43 = v18[17];
    v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v43, v22, v23, v24);
    v26 = System_String__Format_63499156(SAVE_KEY, v21, v25, 0);
    UnityEngine_PlayerPrefs__DeleteKey(v26, 0);
    SAVE_REMIND_KEY = DialogMessageMaster_TypeInfo->static_fields->SAVE_REMIND_KEY;
    v42 = v18[4];
    v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v42, v28, v29, v30);
    v41 = v18[19];
    v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v41, v32, v33, v34);
    v36 = System_String__Format_63499156(SAVE_REMIND_KEY, v31, v35, 0);
    UnityEngine_PlayerPrefs__DeleteKey(v36, 0);
  }
  v37 = Enumerator->klass;
  v38 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v39 = &v37->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v39 - 1) != System_IDisposable_TypeInfo )
    {
      --v38;
      v39 += 4;
      if ( !v38 )
        goto LABEL_26;
    }
    v40 = (__int64)&v37->vtable[*v39];
  }
  else
  {
LABEL_26:
    v40 = sub_1C7DCA8(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v40)(Enumerator, *(_QWORD *)(v40 + 8));
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

  if ( (byte_4C27128 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_DialogMessageEntity__GetEnumerator__);
    sub_1C2D490(&System_Comparison_DialogMessageEntity__TypeInfo);
    sub_1C2D490(&DialogMessageEntity_TypeInfo);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerator_DialogMessageEntity__TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_DialogMessageEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_DialogMessageEntity__Sort__);
    sub_1C2D490(&Method_System_Collections_Generic_List_DialogMessageEntity__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_DialogMessageEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_DialogMessageEntity__TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&Method_DialogMessageMaster___c__GetDialogList_b__6_0__);
    sub_1C2D490(&DialogMessageMaster___c_TypeInfo);
    byte_4C27128 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_DialogMessageEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_DialogMessageEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  v7 = (DialogMessageEntity_o *)sub_1C2D6DC(DialogMessageEntity_TypeInfo);
  DialogMessageEntity___ctor(v7, v8);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_44;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33217E0 *)Method_System_Collections_ObjectModel_Collection_DialogMessageEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C2D6EC(0, v11);
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
      v16 = sub_1C7DCA8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
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
      v20 = sub_1C7DCA8(Enumerator, System_Collections_Generic_IEnumerator_DialogMessageEntity__TypeInfo, 0);
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
            sub_1C2D6EC(IsOpenCondition, v31);
          items = v5->fields._items;
          v35 = Method_System_Collections_Generic_List_DialogMessageEntity__Add__;
          ++v5->fields._version;
          if ( !items )
            sub_1C2D6EC(IsOpenCondition, v31);
          size = v5->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)v23,
              *(const MethodInfo_3789B84 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
          }
          else
          {
            v37 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v37[4] = (Il2CppClass *)v23;
            sub_1C2D434((CGThumbnailListItem_o *)(v37 + 4), (int32_t)v23, v32, v33);
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
    v41 = sub_1C7DCA8(Enumerator, System_IDisposable_TypeInfo, 0);
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
    _9__6_0 = (System_Comparison_T__o *)sub_1C2D6DC(System_Comparison_DialogMessageEntity__TypeInfo);
    System_Comparison_object____ctor(_9__6_0, v44, Method_DialogMessageMaster___c__GetDialogList_b__6_0__, 0);
    static_fields = DialogMessageMaster___c_TypeInfo->static_fields;
    static_fields->__9__6_0 = (struct System_Comparison_DialogMessageEntity__o *)_9__6_0;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__6_0, (int32_t)_9__6_0, v46, v47);
  }
  if ( !v5 )
LABEL_44:
    sub_1C2D6EC(list, v9);
  System_Collections_Generic_List_object___Sort_58242632(
    v5,
    _9__6_0,
    (const MethodInfo_378B648 *)Method_System_Collections_Generic_List_DialogMessageEntity__Sort__);
  return (DialogMessageEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        v5,
                                        (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_DialogMessageEntity__ToArray__);
}


bool DialogMessageMaster__IsSavedAsSeen(
        DialogMessageMaster_o *this,
        DialogMessageEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  DialogMessageMaster_o *v6; // x20
  int32_t frequencyType; // w8
  DialogMessageMaster_c *v8; // x0
  System_String_o *v9; // x20
  Il2CppObject *v10; // x21
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  Il2CppObject *v14; // x0
  System_String_o *v15; // x0
  System_Collections_Generic_List_int__o *seenList; // x0
  DialogMessageMaster_c *v17; // x0
  System_String_o *SAVE_KEY; // x20
  Il2CppObject *v19; // x21
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  Il2CppObject *v23; // x0
  System_String_o *v24; // x0
  int32_t Int; // w20
  DialogMessageEntity_o *Time; // x0
  const MethodInfo *v27; // x4
  bool IsOpenTimeInSpecifiedTimeRange; // w0
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  DialogMessageMaster_c *v32; // x0
  System_String_o *v33; // x20
  Il2CppObject *v34; // x21
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  Il2CppObject *v38; // x0
  System_String_o *v39; // x0
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  DialogMessageMaster_c *v43; // x0
  System_String_o *SAVE_REMIND_KEY; // x20
  Il2CppObject *v45; // x21
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 v48; // x4
  Il2CppObject *v49; // x0
  System_String_o *v50; // x0
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  DialogMessageMaster_c *v54; // x0
  System_String_o *v55; // x20
  __int64 v56; // x2
  __int64 v57; // x3
  __int64 v58; // x4
  Il2CppObject *v59; // x21
  System_Int32_c *v60; // x0
  int32_t *p_openedAt; // x1
  DialogMessageMaster_c *v62; // x0
  System_String_o *v63; // x20
  Il2CppObject *v64; // x21
  __int64 v65; // x2
  __int64 v66; // x3
  __int64 v67; // x4
  Il2CppObject *v68; // x0
  System_String_o *v69; // x0
  __int64 v70; // x2
  __int64 v71; // x3
  __int64 v72; // x4
  Il2CppObject *v73; // x0
  System_String_o *v74; // x0
  int32_t remindAt; // [xsp+0h] [xbp-40h] BYREF
  int32_t v77; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t openedAt; // [xsp+8h] [xbp-38h] BYREF
  int32_t id; // [xsp+Ch] [xbp-34h] BYREF

  v6 = this;
  if ( (byte_4C2712B & 1) == 0 )
  {
    sub_1C2D490(&DialogMessageMaster_TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Contains__);
    this = (DialogMessageMaster_o *)sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C2712B = 1;
  }
  if ( !entity )
    sub_1C2D6EC(this, entity);
  frequencyType = entity->fields.frequencyType;
  if ( frequencyType == 7 )
  {
    v17 = DialogMessageMaster_TypeInfo;
    if ( !DialogMessageMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DialogMessageMaster_TypeInfo);
      v17 = DialogMessageMaster_TypeInfo;
    }
    SAVE_KEY = v17->static_fields->SAVE_KEY;
    id = entity->fields.id;
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id, method, v3, v4);
    openedAt = entity->fields.openedAt;
    v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &openedAt, v20, v21, v22);
    v24 = System_String__Format_63499156(SAVE_KEY, v19, v23, 0);
    Int = UnityEngine_PlayerPrefs__GetInt(v24, 0, 0);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Time = (DialogMessageEntity_o *)NetworkManager__getTime(0);
    IsOpenTimeInSpecifiedTimeRange = DialogMessageEntity__IsOpenTimeInSpecifiedTimeRange(
                                       Time,
                                       entity->fields.remindAt,
                                       entity->fields.closedAt,
                                       (int64_t)Time,
                                       v27);
    if ( Int < 1 )
    {
      if ( !IsOpenTimeInSpecifiedTimeRange )
        goto LABEL_34;
      v43 = DialogMessageMaster_TypeInfo;
      if ( !DialogMessageMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DialogMessageMaster_TypeInfo);
        v43 = DialogMessageMaster_TypeInfo;
      }
      SAVE_REMIND_KEY = v43->static_fields->SAVE_REMIND_KEY;
      id = entity->fields.id;
      v45 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id, v29, v30, v31);
      openedAt = entity->fields.remindAt;
      v49 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &openedAt, v46, v47, v48);
      v50 = System_String__Format_63499156(SAVE_REMIND_KEY, v45, v49, 0);
      if ( UnityEngine_PlayerPrefs__GetInt(v50, 0, 0) > 0 )
        goto LABEL_34;
      v54 = DialogMessageMaster_TypeInfo;
      if ( !DialogMessageMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DialogMessageMaster_TypeInfo);
        v54 = DialogMessageMaster_TypeInfo;
      }
      v55 = v54->static_fields->SAVE_REMIND_KEY;
      id = entity->fields.id;
      v59 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id, v51, v52, v53);
      v60 = int_TypeInfo;
      p_openedAt = &openedAt;
      openedAt = entity->fields.remindAt;
    }
    else
    {
      if ( !IsOpenTimeInSpecifiedTimeRange )
        goto LABEL_22;
      v32 = DialogMessageMaster_TypeInfo;
      if ( !DialogMessageMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DialogMessageMaster_TypeInfo);
        v32 = DialogMessageMaster_TypeInfo;
      }
      v33 = v32->static_fields->SAVE_REMIND_KEY;
      id = entity->fields.id;
      v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id, v29, v30, v31);
      openedAt = entity->fields.remindAt;
      v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &openedAt, v35, v36, v37);
      v39 = System_String__Format_63499156(v33, v34, v38, 0);
      if ( UnityEngine_PlayerPrefs__GetInt(v39, 0, 0) > 0 )
      {
LABEL_22:
        LOBYTE(seenList) = 1;
        return (char)seenList;
      }
      v62 = DialogMessageMaster_TypeInfo;
      if ( !DialogMessageMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DialogMessageMaster_TypeInfo);
        v62 = DialogMessageMaster_TypeInfo;
      }
      v63 = v62->static_fields->SAVE_KEY;
      id = entity->fields.id;
      v64 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id, v40, v41, v42);
      openedAt = entity->fields.openedAt;
      v68 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &openedAt, v65, v66, v67);
      v69 = System_String__Format_63499156(v63, v64, v68, 0);
      UnityEngine_PlayerPrefs__DeleteKey(v69, 0);
      v55 = DialogMessageMaster_TypeInfo->static_fields->SAVE_REMIND_KEY;
      v77 = entity->fields.id;
      v59 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v77, v70, v71, v72);
      v60 = int_TypeInfo;
      p_openedAt = &remindAt;
      remindAt = entity->fields.remindAt;
    }
    v73 = (Il2CppObject *)j_il2cpp_value_box_0(v60, p_openedAt, v56, v57, v58);
    v74 = System_String__Format_63499156(v55, v59, v73, 0);
    UnityEngine_PlayerPrefs__SetInt(v74, 1, 0);
LABEL_34:
    LOBYTE(seenList) = 0;
    return (char)seenList;
  }
  if ( frequencyType != 3 )
  {
    if ( frequencyType != 1 )
      goto LABEL_34;
    v8 = DialogMessageMaster_TypeInfo;
    if ( !DialogMessageMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DialogMessageMaster_TypeInfo);
      v8 = DialogMessageMaster_TypeInfo;
    }
    v9 = v8->static_fields->SAVE_KEY;
    id = entity->fields.id;
    v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id, method, v3, v4);
    openedAt = entity->fields.openedAt;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &openedAt, v11, v12, v13);
    v15 = System_String__Format_63499156(v9, v10, v14, 0);
    if ( UnityEngine_PlayerPrefs__GetInt(v15, 0, 0) < 1 )
      goto LABEL_34;
    goto LABEL_22;
  }
  seenList = v6->fields.seenList;
  if ( seenList )
    LOBYTE(seenList) = System_Collections_Generic_List_int___Contains(
                         seenList,
                         entity->fields.id,
                         (const MethodInfo_376CED8 *)Method_System_Collections_Generic_List_int__Contains__);
  return (char)seenList;
}


void DialogMessageMaster__SaveAsSeen(
        DialogMessageMaster_o *this,
        DialogMessageEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  DialogMessageEntity_o *v5; // x19
  DialogMessageMaster_o *v6; // x20
  int32_t frequencyType; // w8
  DialogMessageMaster_c *v8; // x0
  System_String_o *SAVE_KEY; // x20
  Il2CppObject *v10; // x21
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  Il2CppObject *v14; // x0
  System_String_o *v15; // x0
  CGThumbnailListItem_o *p_seenList; // x20
  DialogMessageMaster_o *seenList; // t1
  System_Collections_Generic_List_int__o *v18; // x21
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  __int64 v21; // x8
  _QWORD *v22; // x9
  __int64 MasterName_k__BackingField_low; // x10
  int32_t openedAt; // [xsp+8h] [xbp-28h] BYREF
  int32_t id; // [xsp+Ch] [xbp-24h] BYREF

  v5 = entity;
  v6 = this;
  if ( (byte_4C2712A & 1) == 0 )
  {
    sub_1C2D490(&DialogMessageMaster_TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    this = (DialogMessageMaster_o *)sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    byte_4C2712A = 1;
  }
  if ( !v5 )
    goto LABEL_17;
  frequencyType = v5->fields.frequencyType;
  if ( frequencyType != 7 )
  {
    if ( frequencyType != 3 )
    {
      if ( frequencyType != 1 )
        return;
      goto LABEL_7;
    }
    seenList = (DialogMessageMaster_o *)v6->fields.seenList;
    p_seenList = (CGThumbnailListItem_o *)&v6->fields.seenList;
    this = seenList;
    if ( seenList
      || (v18 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo),
          System_Collections_Generic_List_int____ctor(
            v18,
            (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__),
          p_seenList->klass = (CGThumbnailListItem_c *)v18,
          sub_1C2D434(p_seenList, (int32_t)v18, v19, v20),
          (this = (DialogMessageMaster_o *)p_seenList->klass) != 0) )
    {
      entity = (DialogMessageEntity_o *)(unsigned int)v5->fields.id;
      v21 = *(_QWORD *)&this->fields._MasterKind_k__BackingField;
      v22 = Method_System_Collections_Generic_List_int__Add__;
      ++HIDWORD(this->fields._MasterName_k__BackingField);
      if ( v21 )
      {
        MasterName_k__BackingField_low = SLODWORD(this->fields._MasterName_k__BackingField);
        if ( (unsigned int)MasterName_k__BackingField_low >= *(_DWORD *)(v21 + 24) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            (System_Collections_Generic_List_int__o *)this,
            (int32_t)entity,
            *(const MethodInfo_376CB60 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
        }
        else
        {
          LODWORD(this->fields._MasterName_k__BackingField) = MasterName_k__BackingField_low + 1;
          *(_DWORD *)(v21 + 4 * MasterName_k__BackingField_low + 32) = (_DWORD)entity;
        }
        return;
      }
    }
LABEL_17:
    sub_1C2D6EC(this, entity);
  }
LABEL_7:
  v8 = DialogMessageMaster_TypeInfo;
  if ( !DialogMessageMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DialogMessageMaster_TypeInfo);
    v8 = DialogMessageMaster_TypeInfo;
  }
  SAVE_KEY = v8->static_fields->SAVE_KEY;
  id = v5->fields.id;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id, method, v3, v4);
  openedAt = v5->fields.openedAt;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &openedAt, v11, v12, v13);
  v15 = System_String__Format_63499156(SAVE_KEY, v10, v14, 0);
  UnityEngine_PlayerPrefs__SetInt(v15, 1, 0);
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
  __int64 v19; // x2
  __int64 v20; // x8
  __int64 v21; // x9
  int v22; // w10
  DialogMessageEntity_o *v23; // x20
  System_Action_o *v24; // x21
  const MethodInfo *v25; // x2

  if ( (byte_4C27129 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_DialogMessageMaster___c__DisplayClass8_0__ShowChain_b__0__);
    sub_1C2D490(&DialogMessageMaster___c__DisplayClass8_0_TypeInfo);
    byte_4C27129 = 1;
  }
  v9 = sub_1C2D6DC(DialogMessageMaster___c__DisplayClass8_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_11;
  *(_QWORD *)(v9 + 16) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v9 + 16), (int32_t)this, v12, v13);
  *(_QWORD *)(v9 + 24) = entitys;
  sub_1C2D434((CGThumbnailListItem_o *)(v9 + 24), (int32_t)entitys, v14, v15);
  *(_QWORD *)(v9 + 40) = callBack;
  v16 = v9 + 40;
  *(_DWORD *)(v9 + 32) = idx;
  sub_1C2D434((CGThumbnailListItem_o *)(v9 + 40), (int32_t)callBack, v17, v18);
  v20 = *(_QWORD *)(v9 + 24);
  if ( !v20 )
    goto LABEL_11;
  v21 = *(int *)(v9 + 32);
  v22 = *(_DWORD *)(v20 + 24);
  if ( (int)v21 < v22 )
  {
    if ( (unsigned int)v21 >= v22 )
      sub_1C2D6F4(v10, v11, v19);
    v23 = *(DialogMessageEntity_o **)(v20 + 8 * v21 + 32);
    v24 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(v24, (Il2CppObject *)v9, Method_DialogMessageMaster___c__DisplayClass8_0__ShowChain_b__0__, 0);
    if ( v23 )
    {
      DialogMessageEntity__Open(v23, v24, v25);
      return;
    }
LABEL_11:
    sub_1C2D6EC(v10, v11);
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

  if ( (byte_4C2712D & 1) == 0 )
  {
    sub_1C2D490(&DialogMessageMaster___c_TypeInfo);
    byte_4C2712D = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(DialogMessageMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  DialogMessageMaster___c_TypeInfo->static_fields->__9 = (struct DialogMessageMaster___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)DialogMessageMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C2D6EC(this, a);
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
    sub_1C2D6F4(this, method, v2);
  this = (DialogMessageMaster___c__DisplayClass8_0_o *)this->fields.__4__this;
  if ( !this
    || (DialogMessageMaster__SaveAsSeen((DialogMessageMaster_o *)this, entitys->m_Items[idx], v2),
        (this = (DialogMessageMaster___c__DisplayClass8_0_o *)v5->fields.__4__this) == 0) )
  {
LABEL_6:
    sub_1C2D6EC(this, method);
  }
  DialogMessageMaster__ShowChain(
    (DialogMessageMaster_o *)this,
    v5->fields.entitys,
    v5->fields.idx + 1,
    v5->fields.callBack,
    v6);
}