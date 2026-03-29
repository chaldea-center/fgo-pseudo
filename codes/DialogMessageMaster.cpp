void DialogMessageMaster___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  int32_t v7; // w1
  struct DialogMessageMaster_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  if ( (byte_4D30850 & 1) == 0 )
  {
    sub_1C93AD4(&DialogMessageMaster_TypeInfo);
    sub_1C93AD4(&StringLiteral_18769/*"dialogMessage_{0}_{1}"*/);
    sub_1C93AD4(&StringLiteral_23315/*"remindDialogMessage_{0}_{1}"*/);
    byte_4D30850 = 1;
  }
  DialogMessageMaster_TypeInfo->static_fields->SAVE_KEY = (struct System_String_o *)StringLiteral_18769/*"dialogMessage_{0}_{1}"*/;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)DialogMessageMaster_TypeInfo->static_fields,
    StringLiteral_18769/*"dialogMessage_{0}_{1}"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v7 = StringLiteral_23315/*"remindDialogMessage_{0}_{1}"*/;
  static_fields = DialogMessageMaster_TypeInfo->static_fields;
  static_fields->SAVE_REMIND_KEY = (struct System_String_o *)StringLiteral_23315/*"remindDialogMessage_{0}_{1}"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->SAVE_REMIND_KEY, v7, v9, v10, v11, v12, v13, v14);
}


void DialogMessageMaster___ctor(DialogMessageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D3084A & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_DialogMessageMaster__DialogMessageEntity__int___ctor__);
    byte_4D3084A = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    234,
    (const MethodInfo_3460CFC *)Method_DataMasterBase_DialogMessageMaster__DialogMessageEntity__int___ctor__);
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
  _DWORD *v15; // x20
  DialogMessageMaster_c *v16; // x0
  System_String_o *SAVE_KEY; // x21
  Il2CppObject *v18; // x22
  Il2CppObject *v19; // x2
  System_String_o *v20; // x0
  System_String_o *SAVE_REMIND_KEY; // x21
  Il2CppObject *v22; // x22
  Il2CppObject *v23; // x2
  System_String_o *v24; // x0
  System_Collections_Generic_IEnumerator_T__c *v25; // x8
  __int64 v26; // x9
  int32_t *v27; // x10
  __int64 v28; // x0
  int v29; // [xsp+10h] [xbp-60h] BYREF
  int v30; // [xsp+14h] [xbp-5Ch] BYREF
  int v31; // [xsp+18h] [xbp-58h] BYREF
  int v32; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_4D3084B & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_DialogMessageEntity__GetEnumerator__);
    sub_1C93AD4(&DialogMessageMaster_TypeInfo);
    sub_1C93AD4(&System_IDisposable_TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerator_DialogMessageEntity__TypeInfo);
    sub_1C93AD4(&System_Collections_IEnumerator_TypeInfo);
    sub_1C93AD4(&int_TypeInfo);
    byte_4D3084B = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C93D2C(0, method);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33FC384 *)Method_System_Collections_ObjectModel_Collection_DialogMessageEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C93D2C(0, v4);
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
      v9 = sub_1C69E5C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
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
      v13 = sub_1C69E5C(Enumerator, System_Collections_Generic_IEnumerator_DialogMessageEntity__TypeInfo, 0);
    }
    v15 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v13)(
                      Enumerator,
                      *(_QWORD *)(v13 + 8));
    v16 = DialogMessageMaster_TypeInfo;
    if ( !DialogMessageMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DialogMessageMaster_TypeInfo);
      v16 = DialogMessageMaster_TypeInfo;
    }
    if ( !v15 )
      sub_1C93D2C(v16, v14);
    SAVE_KEY = v16->static_fields->SAVE_KEY;
    v32 = v15[4];
    v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v32);
    v31 = v15[17];
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31);
    v20 = System_String__Format_64467032(SAVE_KEY, v18, v19, 0);
    UnityEngine_PlayerPrefs__DeleteKey(v20, 0);
    SAVE_REMIND_KEY = DialogMessageMaster_TypeInfo->static_fields->SAVE_REMIND_KEY;
    v30 = v15[4];
    v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30);
    v29 = v15[19];
    v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29);
    v24 = System_String__Format_64467032(SAVE_REMIND_KEY, v22, v23, 0);
    UnityEngine_PlayerPrefs__DeleteKey(v24, 0);
  }
  v25 = Enumerator->klass;
  v26 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v27 = &v25->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v27 - 1) != System_IDisposable_TypeInfo )
    {
      --v26;
      v27 += 4;
      if ( !v26 )
        goto LABEL_26;
    }
    v28 = (__int64)&v25->vtable[*v27];
  }
  else
  {
LABEL_26:
    v28 = sub_1C69E5C(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v28)(Enumerator, *(_QWORD *)(v28 + 8));
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
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  struct System_Object_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  Il2CppClass **v41; // x0
  System_Collections_Generic_IEnumerator_T__c *v42; // x8
  __int64 v43; // x9
  int32_t *v44; // x10
  __int64 v45; // x0
  DialogMessageMaster___c_c *v46; // x8
  System_Comparison_T__o *_9__6_0; // x20
  Il2CppObject *v48; // x21
  struct DialogMessageMaster___c_StaticFields *static_fields; // x0
  int32_t v50; // w2
  int32_t v51; // w3
  System_String_o *v52; // x4
  int32_t v53; // w5
  int64_t v54; // x6
  System_String_o *v55; // x7

  if ( (byte_4D3084C & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_DialogMessageEntity__GetEnumerator__);
    sub_1C93AD4(&System_Comparison_DialogMessageEntity__TypeInfo);
    sub_1C93AD4(&DialogMessageEntity_TypeInfo);
    sub_1C93AD4(&System_IDisposable_TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerator_DialogMessageEntity__TypeInfo);
    sub_1C93AD4(&System_Collections_IEnumerator_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_DialogMessageEntity__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_DialogMessageEntity__Sort__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_DialogMessageEntity__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_DialogMessageEntity___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_DialogMessageEntity__TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&Method_DialogMessageMaster___c__GetDialogList_b__6_0__);
    sub_1C93AD4(&DialogMessageMaster___c_TypeInfo);
    byte_4D3084C = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_DialogMessageEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_DialogMessageEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  v7 = (DialogMessageEntity_o *)sub_1C93D20(DialogMessageEntity_TypeInfo);
  DialogMessageEntity___ctor(v7, v8);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_44;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33FC384 *)Method_System_Collections_ObjectModel_Collection_DialogMessageEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C93D2C(0, v11);
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
      v16 = sub_1C69E5C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
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
      v20 = sub_1C69E5C(Enumerator, System_Collections_Generic_IEnumerator_DialogMessageEntity__TypeInfo, 0);
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
            sub_1C93D2C(IsOpenCondition, v31);
          items = v5->fields._items;
          v39 = Method_System_Collections_Generic_List_DialogMessageEntity__Add__;
          ++v5->fields._version;
          if ( !items )
            sub_1C93D2C(IsOpenCondition, v31);
          size = v5->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)v23,
              *(const MethodInfo_387999C **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
          }
          else
          {
            v41 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v41[4] = (Il2CppClass *)v23;
            sub_1C93A78((GrandQuestFolderBoardItem_o *)(v41 + 4), (int32_t)v23, v32, v33, v34, v35, v36, v37);
          }
        }
      }
    }
  }
  v42 = Enumerator->klass;
  v43 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v44 = &v42->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v44 - 1) != System_IDisposable_TypeInfo )
    {
      --v43;
      v44 += 4;
      if ( !v43 )
        goto LABEL_34;
    }
    v45 = (__int64)&v42->vtable[*v44];
  }
  else
  {
LABEL_34:
    v45 = sub_1C69E5C(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v45)(
                                                             Enumerator,
                                                             *(_QWORD *)(v45 + 8));
  v46 = DialogMessageMaster___c_TypeInfo;
  if ( !DialogMessageMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DialogMessageMaster___c_TypeInfo);
    v46 = DialogMessageMaster___c_TypeInfo;
  }
  _9__6_0 = (System_Comparison_T__o *)v46->static_fields->__9__6_0;
  if ( !_9__6_0 )
  {
    if ( !v46->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v46);
      v46 = DialogMessageMaster___c_TypeInfo;
    }
    v48 = (Il2CppObject *)v46->static_fields->__9;
    _9__6_0 = (System_Comparison_T__o *)sub_1C93D20(System_Comparison_DialogMessageEntity__TypeInfo);
    System_Comparison_object____ctor(_9__6_0, v48, Method_DialogMessageMaster___c__GetDialogList_b__6_0__, 0);
    static_fields = DialogMessageMaster___c_TypeInfo->static_fields;
    static_fields->__9__6_0 = (struct System_Comparison_DialogMessageEntity__o *)_9__6_0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->__9__6_0, (int32_t)_9__6_0, v50, v51, v52, v53, v54, v55);
  }
  if ( !v5 )
LABEL_44:
    sub_1C93D2C(list, v9);
  System_Collections_Generic_List_object___Sort_59225184(
    v5,
    _9__6_0,
    (const MethodInfo_387B460 *)Method_System_Collections_Generic_List_DialogMessageEntity__Sort__);
  return (DialogMessageEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        v5,
                                        (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_DialogMessageEntity__ToArray__);
}


bool DialogMessageMaster__IsSavedAsSeen(
        DialogMessageMaster_o *this,
        DialogMessageEntity_o *entity,
        const MethodInfo *method)
{
  DialogMessageMaster_o *v4; // x20
  int32_t frequencyType; // w8
  DialogMessageMaster_c *v6; // x0
  System_String_o *v7; // x20
  Il2CppObject *v8; // x21
  Il2CppObject *v9; // x0
  System_String_o *v10; // x0
  System_Collections_Generic_List_int__o *seenList; // x0
  DialogMessageMaster_c *v12; // x0
  System_String_o *SAVE_KEY; // x20
  Il2CppObject *v14; // x21
  Il2CppObject *v15; // x0
  System_String_o *v16; // x0
  int32_t Int; // w20
  DialogMessageEntity_o *Time; // x0
  const MethodInfo *v19; // x4
  bool IsOpenTimeInSpecifiedTimeRange; // w0
  DialogMessageMaster_c *v21; // x0
  System_String_o *v22; // x20
  Il2CppObject *v23; // x21
  Il2CppObject *v24; // x0
  System_String_o *v25; // x0
  DialogMessageMaster_c *v26; // x0
  System_String_o *SAVE_REMIND_KEY; // x20
  Il2CppObject *v28; // x21
  Il2CppObject *v29; // x0
  System_String_o *v30; // x0
  DialogMessageMaster_c *v31; // x0
  System_String_o *v32; // x20
  Il2CppObject *v33; // x21
  System_Int32_c *v34; // x0
  int32_t *p_openedAt; // x1
  DialogMessageMaster_c *v36; // x0
  System_String_o *v37; // x20
  Il2CppObject *v38; // x21
  Il2CppObject *v39; // x0
  System_String_o *v40; // x0
  Il2CppObject *v41; // x0
  System_String_o *v42; // x0
  int32_t remindAt; // [xsp+0h] [xbp-40h] BYREF
  int32_t v45; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t openedAt; // [xsp+8h] [xbp-38h] BYREF
  int32_t id; // [xsp+Ch] [xbp-34h] BYREF

  v4 = this;
  if ( (byte_4D3084F & 1) == 0 )
  {
    sub_1C93AD4(&DialogMessageMaster_TypeInfo);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Contains__);
    this = (DialogMessageMaster_o *)sub_1C93AD4(&NetworkManager_TypeInfo);
    byte_4D3084F = 1;
  }
  if ( !entity )
    sub_1C93D2C(this, entity);
  frequencyType = entity->fields.frequencyType;
  if ( frequencyType == 7 )
  {
    v12 = DialogMessageMaster_TypeInfo;
    if ( !DialogMessageMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DialogMessageMaster_TypeInfo);
      v12 = DialogMessageMaster_TypeInfo;
    }
    SAVE_KEY = v12->static_fields->SAVE_KEY;
    id = entity->fields.id;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id);
    openedAt = entity->fields.openedAt;
    v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &openedAt);
    v16 = System_String__Format_64467032(SAVE_KEY, v14, v15, 0);
    Int = UnityEngine_PlayerPrefs__GetInt(v16, 0, 0);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Time = (DialogMessageEntity_o *)NetworkManager__getTime(0);
    IsOpenTimeInSpecifiedTimeRange = DialogMessageEntity__IsOpenTimeInSpecifiedTimeRange(
                                       Time,
                                       entity->fields.remindAt,
                                       entity->fields.closedAt,
                                       (int64_t)Time,
                                       v19);
    if ( Int < 1 )
    {
      if ( !IsOpenTimeInSpecifiedTimeRange )
        goto LABEL_34;
      v26 = DialogMessageMaster_TypeInfo;
      if ( !DialogMessageMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DialogMessageMaster_TypeInfo);
        v26 = DialogMessageMaster_TypeInfo;
      }
      SAVE_REMIND_KEY = v26->static_fields->SAVE_REMIND_KEY;
      id = entity->fields.id;
      v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id);
      openedAt = entity->fields.remindAt;
      v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &openedAt);
      v30 = System_String__Format_64467032(SAVE_REMIND_KEY, v28, v29, 0);
      if ( UnityEngine_PlayerPrefs__GetInt(v30, 0, 0) > 0 )
        goto LABEL_34;
      v31 = DialogMessageMaster_TypeInfo;
      if ( !DialogMessageMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DialogMessageMaster_TypeInfo);
        v31 = DialogMessageMaster_TypeInfo;
      }
      v32 = v31->static_fields->SAVE_REMIND_KEY;
      id = entity->fields.id;
      v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id);
      v34 = int_TypeInfo;
      p_openedAt = &openedAt;
      openedAt = entity->fields.remindAt;
    }
    else
    {
      if ( !IsOpenTimeInSpecifiedTimeRange )
        goto LABEL_22;
      v21 = DialogMessageMaster_TypeInfo;
      if ( !DialogMessageMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DialogMessageMaster_TypeInfo);
        v21 = DialogMessageMaster_TypeInfo;
      }
      v22 = v21->static_fields->SAVE_REMIND_KEY;
      id = entity->fields.id;
      v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id);
      openedAt = entity->fields.remindAt;
      v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &openedAt);
      v25 = System_String__Format_64467032(v22, v23, v24, 0);
      if ( UnityEngine_PlayerPrefs__GetInt(v25, 0, 0) > 0 )
      {
LABEL_22:
        LOBYTE(seenList) = 1;
        return (char)seenList;
      }
      v36 = DialogMessageMaster_TypeInfo;
      if ( !DialogMessageMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DialogMessageMaster_TypeInfo);
        v36 = DialogMessageMaster_TypeInfo;
      }
      v37 = v36->static_fields->SAVE_KEY;
      id = entity->fields.id;
      v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id);
      openedAt = entity->fields.openedAt;
      v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &openedAt);
      v40 = System_String__Format_64467032(v37, v38, v39, 0);
      UnityEngine_PlayerPrefs__DeleteKey(v40, 0);
      v32 = DialogMessageMaster_TypeInfo->static_fields->SAVE_REMIND_KEY;
      v45 = entity->fields.id;
      v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v45);
      v34 = int_TypeInfo;
      p_openedAt = &remindAt;
      remindAt = entity->fields.remindAt;
    }
    v41 = (Il2CppObject *)j_il2cpp_value_box_0(v34, p_openedAt);
    v42 = System_String__Format_64467032(v32, v33, v41, 0);
    UnityEngine_PlayerPrefs__SetInt(v42, 1, 0);
LABEL_34:
    LOBYTE(seenList) = 0;
    return (char)seenList;
  }
  if ( frequencyType != 3 )
  {
    if ( frequencyType != 1 )
      goto LABEL_34;
    v6 = DialogMessageMaster_TypeInfo;
    if ( !DialogMessageMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DialogMessageMaster_TypeInfo);
      v6 = DialogMessageMaster_TypeInfo;
    }
    v7 = v6->static_fields->SAVE_KEY;
    id = entity->fields.id;
    v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id);
    openedAt = entity->fields.openedAt;
    v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &openedAt);
    v10 = System_String__Format_64467032(v7, v8, v9, 0);
    if ( UnityEngine_PlayerPrefs__GetInt(v10, 0, 0) < 1 )
      goto LABEL_34;
    goto LABEL_22;
  }
  seenList = v4->fields.seenList;
  if ( seenList )
    LOBYTE(seenList) = System_Collections_Generic_List_int___Contains(
                         seenList,
                         entity->fields.id,
                         (const MethodInfo_385CCF0 *)Method_System_Collections_Generic_List_int__Contains__);
  return (char)seenList;
}


void DialogMessageMaster__SaveAsSeen(
        DialogMessageMaster_o *this,
        DialogMessageEntity_o *entity,
        const MethodInfo *method)
{
  DialogMessageEntity_o *v3; // x19
  DialogMessageMaster_o *v4; // x20
  int32_t frequencyType; // w8
  DialogMessageMaster_c *v6; // x0
  System_String_o *SAVE_KEY; // x20
  Il2CppObject *v8; // x21
  Il2CppObject *v9; // x0
  System_String_o *v10; // x0
  GrandQuestFolderBoardItem_o *p_seenList; // x20
  DialogMessageMaster_o *seenList; // t1
  System_Collections_Generic_List_int__o *v13; // x21
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  __int64 v20; // x8
  _QWORD *v21; // x9
  __int64 MasterName_k__BackingField_low; // x10
  int32_t openedAt; // [xsp+8h] [xbp-28h] BYREF
  int32_t id; // [xsp+Ch] [xbp-24h] BYREF

  v3 = entity;
  v4 = this;
  if ( (byte_4D3084E & 1) == 0 )
  {
    sub_1C93AD4(&DialogMessageMaster_TypeInfo);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int___ctor__);
    this = (DialogMessageMaster_o *)sub_1C93AD4(&System_Collections_Generic_List_int__TypeInfo);
    byte_4D3084E = 1;
  }
  if ( !v3 )
    goto LABEL_17;
  frequencyType = v3->fields.frequencyType;
  if ( frequencyType != 7 )
  {
    if ( frequencyType != 3 )
    {
      if ( frequencyType != 1 )
        return;
      goto LABEL_7;
    }
    seenList = (DialogMessageMaster_o *)v4->fields.seenList;
    p_seenList = (GrandQuestFolderBoardItem_o *)&v4->fields.seenList;
    this = seenList;
    if ( seenList
      || (v13 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo),
          System_Collections_Generic_List_int____ctor(
            v13,
            (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__),
          p_seenList->klass = (GrandQuestFolderBoardItem_c *)v13,
          sub_1C93A78(p_seenList, (int32_t)v13, v14, v15, v16, v17, v18, v19),
          (this = (DialogMessageMaster_o *)p_seenList->klass) != 0) )
    {
      entity = (DialogMessageEntity_o *)(unsigned int)v3->fields.id;
      v20 = *(_QWORD *)&this->fields._MasterKind_k__BackingField;
      v21 = Method_System_Collections_Generic_List_int__Add__;
      ++HIDWORD(this->fields._MasterName_k__BackingField);
      if ( v20 )
      {
        MasterName_k__BackingField_low = SLODWORD(this->fields._MasterName_k__BackingField);
        if ( (unsigned int)MasterName_k__BackingField_low >= *(_DWORD *)(v20 + 24) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            (System_Collections_Generic_List_int__o *)this,
            (int32_t)entity,
            *(const MethodInfo_385C978 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          LODWORD(this->fields._MasterName_k__BackingField) = MasterName_k__BackingField_low + 1;
          *(_DWORD *)(v20 + 4 * MasterName_k__BackingField_low + 32) = (_DWORD)entity;
        }
        return;
      }
    }
LABEL_17:
    sub_1C93D2C(this, entity);
  }
LABEL_7:
  v6 = DialogMessageMaster_TypeInfo;
  if ( !DialogMessageMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DialogMessageMaster_TypeInfo);
    v6 = DialogMessageMaster_TypeInfo;
  }
  SAVE_KEY = v6->static_fields->SAVE_KEY;
  id = v3->fields.id;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id);
  openedAt = v3->fields.openedAt;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &openedAt);
  v10 = System_String__Format_64467032(SAVE_KEY, v8, v9, 0);
  UnityEngine_PlayerPrefs__SetInt(v10, 1, 0);
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
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  __int64 v24; // x22
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  __int64 v31; // x8
  __int64 v32; // x9
  int v33; // w10
  DialogMessageEntity_o *v34; // x20
  System_Action_o *v35; // x21
  const MethodInfo *v36; // x2

  if ( (byte_4D3084D & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_DialogMessageMaster___c__DisplayClass8_0__ShowChain_b__0__);
    sub_1C93AD4(&DialogMessageMaster___c__DisplayClass8_0_TypeInfo);
    byte_4D3084D = 1;
  }
  v9 = sub_1C93D20(DialogMessageMaster___c__DisplayClass8_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_11;
  *(_QWORD *)(v9 + 16) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v9 + 16), (int32_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = entitys;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v9 + 24), (int32_t)entitys, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)(v9 + 40) = callBack;
  v24 = v9 + 40;
  *(_DWORD *)(v9 + 32) = idx;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v9 + 40), (int32_t)callBack, v25, v26, v27, v28, v29, v30);
  v31 = *(_QWORD *)(v9 + 24);
  if ( !v31 )
    goto LABEL_11;
  v32 = *(int *)(v9 + 32);
  v33 = *(_DWORD *)(v31 + 24);
  if ( (int)v32 < v33 )
  {
    if ( (unsigned int)v32 >= v33 )
      sub_1C93D34(v10);
    v34 = *(DialogMessageEntity_o **)(v31 + 8 * v32 + 32);
    v35 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(v35, (Il2CppObject *)v9, Method_DialogMessageMaster___c__DisplayClass8_0__ShowChain_b__0__, 0);
    if ( v34 )
    {
      DialogMessageEntity__Open(v34, v35, v36);
      return;
    }
LABEL_11:
    sub_1C93D2C(v10, v11);
  }
  if ( !*(_QWORD *)v24 )
    goto LABEL_11;
  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v24 + 24LL))(
    *(_QWORD *)(*(_QWORD *)v24 + 64LL),
    *(_QWORD *)(*(_QWORD *)v24 + 40LL));
}


void DialogMessageMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D30851 & 1) == 0 )
  {
    sub_1C93AD4(&DialogMessageMaster___c_TypeInfo);
    byte_4D30851 = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(DialogMessageMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  DialogMessageMaster___c_TypeInfo->static_fields->__9 = (struct DialogMessageMaster___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)DialogMessageMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_1C93D2C(this, a);
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
    sub_1C93D34(this);
  this = (DialogMessageMaster___c__DisplayClass8_0_o *)this->fields.__4__this;
  if ( !this
    || (DialogMessageMaster__SaveAsSeen((DialogMessageMaster_o *)this, entitys->m_Items[idx], v2),
        (this = (DialogMessageMaster___c__DisplayClass8_0_o *)v5->fields.__4__this) == 0) )
  {
LABEL_6:
    sub_1C93D2C(this, method);
  }
  DialogMessageMaster__ShowChain(
    (DialogMessageMaster_o *)this,
    v5->fields.entitys,
    v5->fields.idx + 1,
    v5->fields.callBack,
    v6);
}