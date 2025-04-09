void __fastcall DialogMessageMaster___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t v6; // w1
  struct DialogMessageMaster_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_49BACD7 & 1) == 0 )
  {
    sub_1B4CF90(&DialogMessageMaster_TypeInfo, v1);
    sub_1B4CF90(&StringLiteral_18304/*"dialogMessage_{0}_{1}"*/, v4);
    sub_1B4CF90(&StringLiteral_22580/*"remindDialogMessage_{0}_{1}"*/, v5);
    byte_49BACD7 = 1;
  }
  DialogMessageMaster_TypeInfo->static_fields->SAVE_KEY = (struct System_String_o *)StringLiteral_18304/*"dialogMessage_{0}_{1}"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)DialogMessageMaster_TypeInfo->static_fields, StringLiteral_18304/*"dialogMessage_{0}_{1}"*/, v2, v3);
  v6 = StringLiteral_22580/*"remindDialogMessage_{0}_{1}"*/;
  static_fields = DialogMessageMaster_TypeInfo->static_fields;
  static_fields->SAVE_REMIND_KEY = (struct System_String_o *)StringLiteral_22580/*"remindDialogMessage_{0}_{1}"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->SAVE_REMIND_KEY, v6, v8, v9);
}


void __fastcall DialogMessageMaster___ctor(DialogMessageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49BACD1 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_DialogMessageMaster__DialogMessageEntity__int___ctor__, method);
    byte_49BACD1 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    234,
    (const MethodInfo_319B678 *)Method_DataMasterBase_DialogMessageMaster__DialogMessageEntity__int___ctor__);
}


void __fastcall DialogMessageMaster__DeleteContinueData(DialogMessageMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v9; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v15; // x8
  __int64 v16; // x9
  int32_t *v17; // x10
  __int64 v18; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  _DWORD *v23; // x20
  DialogMessageMaster_c *v24; // x0
  System_String_o *SAVE_KEY; // x21
  Il2CppObject *v26; // x22
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  Il2CppObject *v30; // x2
  System_String_o *v31; // x0
  System_String_o *SAVE_REMIND_KEY; // x21
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  Il2CppObject *v36; // x22
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  Il2CppObject *v40; // x2
  System_String_o *v41; // x0
  System_Collections_Generic_IEnumerator_T__c *v42; // x8
  __int64 v43; // x9
  int32_t *v44; // x10
  __int64 v45; // x0
  int v46; // [xsp+10h] [xbp-60h] BYREF
  int v47; // [xsp+14h] [xbp-5Ch] BYREF
  int v48; // [xsp+18h] [xbp-58h] BYREF
  int v49; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_49BACD2 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_DialogMessageEntity__GetEnumerator__, method);
    sub_1B4CF90(&DialogMessageMaster_TypeInfo, v3);
    sub_1B4CF90(&System_IDisposable_TypeInfo, v4);
    sub_1B4CF90(&System_Collections_Generic_IEnumerator_DialogMessageEntity__TypeInfo, v5);
    sub_1B4CF90(&System_Collections_IEnumerator_TypeInfo, v6);
    sub_1B4CF90(&int_TypeInfo, v7);
    byte_49BACD2 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B4D1EC(0LL, method);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_313B4BC *)Method_System_Collections_ObjectModel_Collection_DialogMessageEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1B4D1EC(0LL, v9);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v12 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        p_offset += 4;
        if ( !v12 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1B9D724(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v15 = Enumerator->klass;
    v16 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v17 = &v15->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DialogMessageEntity__c **)v17 - 1) != System_Collections_Generic_IEnumerator_DialogMessageEntity__TypeInfo )
      {
        --v16;
        v17 += 4;
        if ( !v16 )
          goto LABEL_16;
      }
      v18 = (__int64)&v15->vtable[*v17].method;
    }
    else
    {
LABEL_16:
      v18 = sub_1B9D724(Enumerator, System_Collections_Generic_IEnumerator_DialogMessageEntity__TypeInfo, 0LL);
    }
    v23 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
                      Enumerator,
                      *(_QWORD *)(v18 + 8));
    v24 = DialogMessageMaster_TypeInfo;
    if ( !DialogMessageMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DialogMessageMaster_TypeInfo);
      v24 = DialogMessageMaster_TypeInfo;
    }
    if ( !v23 )
      sub_1B4D1EC(v24, v19);
    SAVE_KEY = v24->static_fields->SAVE_KEY;
    v49 = v23[4];
    v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v49, v20, v21, v22);
    v48 = v23[17];
    v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v48, v27, v28, v29);
    v31 = System_String__Format_61134760(SAVE_KEY, v26, v30, 0LL);
    UnityEngine_PlayerPrefs__DeleteKey(v31, 0LL);
    SAVE_REMIND_KEY = DialogMessageMaster_TypeInfo->static_fields->SAVE_REMIND_KEY;
    v47 = v23[4];
    v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v47, v33, v34, v35);
    v46 = v23[19];
    v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v46, v37, v38, v39);
    v41 = System_String__Format_61134760(SAVE_REMIND_KEY, v36, v40, 0LL);
    UnityEngine_PlayerPrefs__DeleteKey(v41, 0LL);
  }
  v42 = Enumerator->klass;
  v43 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v44 = &v42->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v44 - 1) != System_IDisposable_TypeInfo )
    {
      --v43;
      v44 += 4;
      if ( !v43 )
        goto LABEL_26;
    }
    v45 = (__int64)&v42->vtable[*v44].method;
  }
  else
  {
LABEL_26:
    v45 = sub_1B9D724(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v45)(Enumerator, *(_QWORD *)(v45 + 8));
}


// local variable allocation has failed, the output may be wrong!
DialogMessageEntity_array *__fastcall DialogMessageMaster__GetDialogList(
        DialogMessageMaster_o *this,
        int32_t openType,
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
  System_Collections_Generic_List_object__o *v18; // x19
  int64_t Time; // x23
  DialogMessageEntity_o *v20; // x0
  const MethodInfo *v21; // x1
  __int64 v22; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v24; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v27; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v30; // x8
  __int64 v31; // x9
  int32_t *v32; // x10
  __int64 v33; // x0
  DialogMessageEntity_o *v34; // x0
  const MethodInfo *v35; // x2
  DialogMessageEntity_o *v36; // x24
  const MethodInfo *v37; // x2
  int32_t v38; // w1
  int32_t v39; // w2
  int32_t v40; // w3
  int32_t v41; // w4
  const MethodInfo *v42; // x5
  _BOOL8 IsOpenCondition; // x0
  __int64 v44; // x1
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  struct System_Object_array *items; // x8
  _QWORD *v48; // x9
  __int64 size; // x10
  Il2CppClass **v50; // x0
  System_Collections_Generic_IEnumerator_T__c *v51; // x8
  __int64 v52; // x9
  int32_t *v53; // x10
  __int64 v54; // x0
  DialogMessageMaster___c_c *v55; // x8
  System_Comparison_T__o *_9__6_0; // x20
  Il2CppObject *v57; // x21
  struct DialogMessageMaster___c_StaticFields *static_fields; // x0
  int32_t v59; // w2
  const MethodInfo *v60; // x3

  if ( (byte_49BACD3 & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_System_Collections_ObjectModel_Collection_DialogMessageEntity__GetEnumerator__,
      *(_QWORD *)&openType);
    sub_1B4CF90(&System_Comparison_DialogMessageEntity__TypeInfo, v5);
    sub_1B4CF90(&DialogMessageEntity_TypeInfo, v6);
    sub_1B4CF90(&System_IDisposable_TypeInfo, v7);
    sub_1B4CF90(&System_Collections_Generic_IEnumerator_DialogMessageEntity__TypeInfo, v8);
    sub_1B4CF90(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_List_DialogMessageEntity__Add__, v10);
    sub_1B4CF90(&Method_System_Collections_Generic_List_DialogMessageEntity__Sort__, v11);
    sub_1B4CF90(&Method_System_Collections_Generic_List_DialogMessageEntity__ToArray__, v12);
    sub_1B4CF90(&Method_System_Collections_Generic_List_DialogMessageEntity___ctor__, v13);
    sub_1B4CF90(&System_Collections_Generic_List_DialogMessageEntity__TypeInfo, v14);
    sub_1B4CF90(&NetworkManager_TypeInfo, v15);
    sub_1B4CF90(&Method_DialogMessageMaster___c__GetDialogList_b__6_0__, v16);
    sub_1B4CF90(&DialogMessageMaster___c_TypeInfo, v17);
    byte_49BACD3 = 1;
  }
  v18 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_DialogMessageEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_DialogMessageEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  v20 = (DialogMessageEntity_o *)sub_1B4D1DC(DialogMessageEntity_TypeInfo);
  DialogMessageEntity___ctor(v20, v21);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_44;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_313B4BC *)Method_System_Collections_ObjectModel_Collection_DialogMessageEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1B4D1EC(0LL, v24);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v27 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v27;
        p_offset += 4;
        if ( !v27 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_1B9D724(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v30 = Enumerator->klass;
    v31 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v32 = &v30->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DialogMessageEntity__c **)v32 - 1) != System_Collections_Generic_IEnumerator_DialogMessageEntity__TypeInfo )
      {
        --v31;
        v32 += 4;
        if ( !v31 )
          goto LABEL_18;
      }
      v33 = (__int64)&v30->vtable[*v32].method;
    }
    else
    {
LABEL_18:
      v33 = sub_1B9D724(Enumerator, System_Collections_Generic_IEnumerator_DialogMessageEntity__TypeInfo, 0LL);
    }
    v34 = (DialogMessageEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v33)(
                                     Enumerator,
                                     *(_QWORD *)(v33 + 8));
    v36 = v34;
    if ( v34 )
    {
      if ( v34->fields.dialogOpenType == openType
        && DialogMessageEntity__IsOpenTime(v34, Time, v35)
        && !DialogMessageMaster__IsSavedAsSeen(this, v36, v37) )
      {
        IsOpenCondition = DialogMessageEntity__IsOpenCondition(v36, v38, v39, v40, v41, v42);
        if ( IsOpenCondition )
        {
          if ( !v18 )
            sub_1B4D1EC(IsOpenCondition, v44);
          items = v18->fields._items;
          v48 = Method_System_Collections_Generic_List_DialogMessageEntity__Add__;
          ++v18->fields._version;
          if ( !items )
            sub_1B4D1EC(IsOpenCondition, v44);
          size = v18->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v18,
              (Il2CppObject *)v36,
              *(const MethodInfo_35801DC **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
          }
          else
          {
            v50 = &items->obj.klass + size;
            v18->fields._size = size + 1;
            v50[4] = (Il2CppClass *)v36;
            sub_1B4CF34((CGThumbnailListItem_o *)(v50 + 4), (int32_t)v36, v45, v46);
          }
        }
      }
    }
  }
  v51 = Enumerator->klass;
  v52 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v53 = &v51->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v53 - 1) != System_IDisposable_TypeInfo )
    {
      --v52;
      v53 += 4;
      if ( !v52 )
        goto LABEL_34;
    }
    v54 = (__int64)&v51->vtable[*v53].method;
  }
  else
  {
LABEL_34:
    v54 = sub_1B9D724(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v54)(
                                                             Enumerator,
                                                             *(_QWORD *)(v54 + 8));
  v55 = DialogMessageMaster___c_TypeInfo;
  if ( !DialogMessageMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DialogMessageMaster___c_TypeInfo);
    v55 = DialogMessageMaster___c_TypeInfo;
  }
  _9__6_0 = (System_Comparison_T__o *)v55->static_fields->__9__6_0;
  if ( !_9__6_0 )
  {
    if ( !v55->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v55);
      v55 = DialogMessageMaster___c_TypeInfo;
    }
    v57 = (Il2CppObject *)v55->static_fields->__9;
    _9__6_0 = (System_Comparison_T__o *)sub_1B4D1DC(System_Comparison_DialogMessageEntity__TypeInfo);
    System_Comparison_object____ctor(_9__6_0, v57, Method_DialogMessageMaster___c__GetDialogList_b__6_0__, 0LL);
    static_fields = DialogMessageMaster___c_TypeInfo->static_fields;
    static_fields->__9__6_0 = (struct System_Comparison_DialogMessageEntity__o *)_9__6_0;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__6_0, (int32_t)_9__6_0, v59, v60);
  }
  if ( !v18 )
LABEL_44:
    sub_1B4D1EC(list, v22);
  System_Collections_Generic_List_object___Sort_56106144(
    v18,
    _9__6_0,
    (const MethodInfo_3581CA0 *)Method_System_Collections_Generic_List_DialogMessageEntity__Sort__);
  return (DialogMessageEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        v18,
                                        (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_DialogMessageEntity__ToArray__);
}


bool __fastcall DialogMessageMaster__IsSavedAsSeen(
        DialogMessageMaster_o *this,
        DialogMessageEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  DialogMessageMaster_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int32_t frequencyType; // w8
  DialogMessageMaster_c *v11; // x0
  System_String_o *v12; // x20
  Il2CppObject *v13; // x21
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  Il2CppObject *v17; // x0
  System_String_o *v18; // x0
  System_Collections_Generic_List_int__o *seenList; // x0
  DialogMessageMaster_c *v20; // x0
  System_String_o *SAVE_KEY; // x20
  Il2CppObject *v22; // x21
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  Il2CppObject *v26; // x0
  System_String_o *v27; // x0
  int32_t Int; // w20
  DialogMessageEntity_o *Time; // x0
  const MethodInfo *v30; // x4
  bool IsOpenTimeInSpecifiedTimeRange; // w0
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  DialogMessageMaster_c *v35; // x0
  System_String_o *v36; // x20
  Il2CppObject *v37; // x21
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  Il2CppObject *v41; // x0
  System_String_o *v42; // x0
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  DialogMessageMaster_c *v46; // x0
  System_String_o *SAVE_REMIND_KEY; // x20
  Il2CppObject *v48; // x21
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  Il2CppObject *v52; // x0
  System_String_o *v53; // x0
  __int64 v54; // x2
  __int64 v55; // x3
  __int64 v56; // x4
  DialogMessageMaster_c *v57; // x0
  System_String_o *v58; // x20
  __int64 v59; // x2
  __int64 v60; // x3
  __int64 v61; // x4
  Il2CppObject *v62; // x21
  System_Int32_c *v63; // x0
  int32_t *p_openedAt; // x1
  DialogMessageMaster_c *v65; // x0
  System_String_o *v66; // x20
  Il2CppObject *v67; // x21
  __int64 v68; // x2
  __int64 v69; // x3
  __int64 v70; // x4
  Il2CppObject *v71; // x0
  System_String_o *v72; // x0
  __int64 v73; // x2
  __int64 v74; // x3
  __int64 v75; // x4
  Il2CppObject *v76; // x0
  System_String_o *v77; // x0
  int32_t remindAt; // [xsp+0h] [xbp-40h] BYREF
  int32_t v80; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t openedAt; // [xsp+8h] [xbp-38h] BYREF
  int32_t id; // [xsp+Ch] [xbp-34h] BYREF

  v6 = this;
  if ( (byte_49BACD6 & 1) == 0 )
  {
    sub_1B4CF90(&DialogMessageMaster_TypeInfo, entity);
    sub_1B4CF90(&int_TypeInfo, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__Contains__, v8);
    this = (DialogMessageMaster_o *)sub_1B4CF90(&NetworkManager_TypeInfo, v9);
    byte_49BACD6 = 1;
  }
  if ( !entity )
    sub_1B4D1EC(this, entity);
  frequencyType = entity->fields.frequencyType;
  if ( frequencyType == 7 )
  {
    v20 = DialogMessageMaster_TypeInfo;
    if ( !DialogMessageMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DialogMessageMaster_TypeInfo);
      v20 = DialogMessageMaster_TypeInfo;
    }
    SAVE_KEY = v20->static_fields->SAVE_KEY;
    id = entity->fields.id;
    v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id, method, v3, v4);
    openedAt = entity->fields.openedAt;
    v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &openedAt, v23, v24, v25);
    v27 = System_String__Format_61134760(SAVE_KEY, v22, v26, 0LL);
    Int = UnityEngine_PlayerPrefs__GetInt(v27, 0, 0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Time = (DialogMessageEntity_o *)NetworkManager__getTime(0LL);
    IsOpenTimeInSpecifiedTimeRange = DialogMessageEntity__IsOpenTimeInSpecifiedTimeRange(
                                       Time,
                                       entity->fields.remindAt,
                                       entity->fields.closedAt,
                                       (int64_t)Time,
                                       v30);
    if ( Int < 1 )
    {
      if ( !IsOpenTimeInSpecifiedTimeRange )
        goto LABEL_34;
      v46 = DialogMessageMaster_TypeInfo;
      if ( !DialogMessageMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DialogMessageMaster_TypeInfo);
        v46 = DialogMessageMaster_TypeInfo;
      }
      SAVE_REMIND_KEY = v46->static_fields->SAVE_REMIND_KEY;
      id = entity->fields.id;
      v48 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id, v32, v33, v34);
      openedAt = entity->fields.remindAt;
      v52 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &openedAt, v49, v50, v51);
      v53 = System_String__Format_61134760(SAVE_REMIND_KEY, v48, v52, 0LL);
      if ( UnityEngine_PlayerPrefs__GetInt(v53, 0, 0LL) > 0 )
        goto LABEL_34;
      v57 = DialogMessageMaster_TypeInfo;
      if ( !DialogMessageMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DialogMessageMaster_TypeInfo);
        v57 = DialogMessageMaster_TypeInfo;
      }
      v58 = v57->static_fields->SAVE_REMIND_KEY;
      id = entity->fields.id;
      v62 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id, v54, v55, v56);
      v63 = int_TypeInfo;
      p_openedAt = &openedAt;
      openedAt = entity->fields.remindAt;
    }
    else
    {
      if ( !IsOpenTimeInSpecifiedTimeRange )
        goto LABEL_22;
      v35 = DialogMessageMaster_TypeInfo;
      if ( !DialogMessageMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DialogMessageMaster_TypeInfo);
        v35 = DialogMessageMaster_TypeInfo;
      }
      v36 = v35->static_fields->SAVE_REMIND_KEY;
      id = entity->fields.id;
      v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id, v32, v33, v34);
      openedAt = entity->fields.remindAt;
      v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &openedAt, v38, v39, v40);
      v42 = System_String__Format_61134760(v36, v37, v41, 0LL);
      if ( UnityEngine_PlayerPrefs__GetInt(v42, 0, 0LL) > 0 )
      {
LABEL_22:
        LOBYTE(seenList) = 1;
        return (char)seenList;
      }
      v65 = DialogMessageMaster_TypeInfo;
      if ( !DialogMessageMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DialogMessageMaster_TypeInfo);
        v65 = DialogMessageMaster_TypeInfo;
      }
      v66 = v65->static_fields->SAVE_KEY;
      id = entity->fields.id;
      v67 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id, v43, v44, v45);
      openedAt = entity->fields.openedAt;
      v71 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &openedAt, v68, v69, v70);
      v72 = System_String__Format_61134760(v66, v67, v71, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v72, 0LL);
      v58 = DialogMessageMaster_TypeInfo->static_fields->SAVE_REMIND_KEY;
      v80 = entity->fields.id;
      v62 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v80, v73, v74, v75);
      v63 = int_TypeInfo;
      p_openedAt = &remindAt;
      remindAt = entity->fields.remindAt;
    }
    v76 = (Il2CppObject *)j_il2cpp_value_box_0(v63, p_openedAt, v59, v60, v61);
    v77 = System_String__Format_61134760(v58, v62, v76, 0LL);
    UnityEngine_PlayerPrefs__SetInt(v77, 1, 0LL);
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
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id, method, v3, v4);
    openedAt = entity->fields.openedAt;
    v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &openedAt, v14, v15, v16);
    v18 = System_String__Format_61134760(v12, v13, v17, 0LL);
    if ( UnityEngine_PlayerPrefs__GetInt(v18, 0, 0LL) < 1 )
      goto LABEL_34;
    goto LABEL_22;
  }
  seenList = v6->fields.seenList;
  if ( seenList )
    LOBYTE(seenList) = System_Collections_Generic_List_int___Contains(
                         seenList,
                         entity->fields.id,
                         (const MethodInfo_3563530 *)Method_System_Collections_Generic_List_int__Contains__);
  return (char)seenList;
}


void __fastcall DialogMessageMaster__SaveAsSeen(
        DialogMessageMaster_o *this,
        DialogMessageEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  DialogMessageEntity_o *v5; // x19
  DialogMessageMaster_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  int32_t frequencyType; // w8
  DialogMessageMaster_c *v12; // x0
  System_String_o *SAVE_KEY; // x20
  Il2CppObject *v14; // x21
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  Il2CppObject *v18; // x0
  System_String_o *v19; // x0
  CGThumbnailListItem_o *p_seenList; // x20
  DialogMessageMaster_o *seenList; // t1
  System_Collections_Generic_List_int__o *v22; // x21
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  __int64 v25; // x8
  _QWORD *v26; // x9
  __int64 MasterName_k__BackingField_low; // x10
  int32_t openedAt; // [xsp+8h] [xbp-28h] BYREF
  int32_t id; // [xsp+Ch] [xbp-24h] BYREF

  v5 = entity;
  v6 = this;
  if ( (byte_49BACD5 & 1) == 0 )
  {
    sub_1B4CF90(&DialogMessageMaster_TypeInfo, entity);
    sub_1B4CF90(&int_TypeInfo, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int___ctor__, v9);
    this = (DialogMessageMaster_o *)sub_1B4CF90(&System_Collections_Generic_List_int__TypeInfo, v10);
    byte_49BACD5 = 1;
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
      || (v22 = (System_Collections_Generic_List_int__o *)sub_1B4D1DC(System_Collections_Generic_List_int__TypeInfo),
          System_Collections_Generic_List_int____ctor(
            v22,
            (const MethodInfo_3562964 *)Method_System_Collections_Generic_List_int___ctor__),
          p_seenList->klass = (CGThumbnailListItem_c *)v22,
          sub_1B4CF34(p_seenList, (int32_t)v22, v23, v24),
          (this = (DialogMessageMaster_o *)p_seenList->klass) != 0LL) )
    {
      entity = (DialogMessageEntity_o *)(unsigned int)v5->fields.id;
      v25 = *(_QWORD *)&this->fields._MasterKind_k__BackingField;
      v26 = Method_System_Collections_Generic_List_int__Add__;
      ++HIDWORD(this->fields._MasterName_k__BackingField);
      if ( v25 )
      {
        MasterName_k__BackingField_low = SLODWORD(this->fields._MasterName_k__BackingField);
        if ( (unsigned int)MasterName_k__BackingField_low >= *(_DWORD *)(v25 + 24) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            (System_Collections_Generic_List_int__o *)this,
            (int32_t)entity,
            *(const MethodInfo_35631B8 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
        }
        else
        {
          LODWORD(this->fields._MasterName_k__BackingField) = MasterName_k__BackingField_low + 1;
          *(_DWORD *)(v25 + 4 * MasterName_k__BackingField_low + 32) = (_DWORD)entity;
        }
        return;
      }
    }
LABEL_17:
    sub_1B4D1EC(this, entity);
  }
LABEL_7:
  v12 = DialogMessageMaster_TypeInfo;
  if ( !DialogMessageMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DialogMessageMaster_TypeInfo);
    v12 = DialogMessageMaster_TypeInfo;
  }
  SAVE_KEY = v12->static_fields->SAVE_KEY;
  id = v5->fields.id;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id, method, v3, v4);
  openedAt = v5->fields.openedAt;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &openedAt, v15, v16, v17);
  v19 = System_String__Format_61134760(SAVE_KEY, v14, v18, 0LL);
  UnityEngine_PlayerPrefs__SetInt(v19, 1, 0LL);
}


void __fastcall DialogMessageMaster__ShowAvailables(
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


void __fastcall DialogMessageMaster__ShowChain(
        DialogMessageMaster_o *this,
        DialogMessageEntity_array *entitys,
        int32_t idx,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x19
  __int64 v12; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  __int64 v18; // x22
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  __int64 v21; // x8
  __int64 v22; // x9
  int v23; // w10
  DialogMessageEntity_o *v24; // x20
  System_Action_o *v25; // x21
  const MethodInfo *v26; // x2

  if ( (byte_49BACD4 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, entitys);
    sub_1B4CF90(&Method_DialogMessageMaster___c__DisplayClass8_0__ShowChain_b__0__, v9);
    sub_1B4CF90(&DialogMessageMaster___c__DisplayClass8_0_TypeInfo, v10);
    byte_49BACD4 = 1;
  }
  v11 = sub_1B4D1DC(DialogMessageMaster___c__DisplayClass8_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_11;
  *(_QWORD *)(v11 + 16) = this;
  sub_1B4CF34((CGThumbnailListItem_o *)(v11 + 16), (int32_t)this, v14, v15);
  *(_QWORD *)(v11 + 24) = entitys;
  sub_1B4CF34((CGThumbnailListItem_o *)(v11 + 24), (int32_t)entitys, v16, v17);
  *(_QWORD *)(v11 + 40) = callBack;
  v18 = v11 + 40;
  *(_DWORD *)(v11 + 32) = idx;
  sub_1B4CF34((CGThumbnailListItem_o *)(v11 + 40), (int32_t)callBack, v19, v20);
  v21 = *(_QWORD *)(v11 + 24);
  if ( !v21 )
    goto LABEL_11;
  v22 = *(int *)(v11 + 32);
  v23 = *(_DWORD *)(v21 + 24);
  if ( (int)v22 < v23 )
  {
    if ( (unsigned int)v22 >= v23 )
      sub_1B4D1F4(v12, v13);
    v24 = *(DialogMessageEntity_o **)(v21 + 8 * v22 + 32);
    v25 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
    System_Action___ctor(
      v25,
      (Il2CppObject *)v11,
      Method_DialogMessageMaster___c__DisplayClass8_0__ShowChain_b__0__,
      0LL);
    if ( v24 )
    {
      DialogMessageEntity__Open(v24, v25, v26);
      return;
    }
LABEL_11:
    sub_1B4D1EC(v12, v13);
  }
  if ( !*(_QWORD *)v18 )
    goto LABEL_11;
  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v18 + 24LL))(
    *(_QWORD *)(*(_QWORD *)v18 + 64LL),
    *(_QWORD *)(*(_QWORD *)v18 + 40LL));
}


void __fastcall DialogMessageMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_49BACD8 & 1) == 0 )
  {
    sub_1B4CF90(&DialogMessageMaster___c_TypeInfo, v1);
    byte_49BACD8 = 1;
  }
  v2 = (Il2CppObject *)sub_1B4D1DC(DialogMessageMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  DialogMessageMaster___c_TypeInfo->static_fields->__9 = (struct DialogMessageMaster___c_o *)v2;
  sub_1B4CF34((CGThumbnailListItem_o *)DialogMessageMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall DialogMessageMaster___c___ctor(DialogMessageMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall DialogMessageMaster___c___GetDialogList_b__6_0(
        DialogMessageMaster___c_o *this,
        DialogMessageEntity_o *a,
        DialogMessageEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1B4D1EC(this, a);
  return b->fields.priority - a->fields.priority;
}


void __fastcall DialogMessageMaster___c__DisplayClass8_0___ctor(
        DialogMessageMaster___c__DisplayClass8_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall DialogMessageMaster___c__DisplayClass8_0___ShowChain_b__0(
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
  if ( (unsigned int)idx >= entitys->max_length )
    sub_1B4D1F4(this, method);
  this = (DialogMessageMaster___c__DisplayClass8_0_o *)this->fields.__4__this;
  if ( !this
    || (DialogMessageMaster__SaveAsSeen((DialogMessageMaster_o *)this, entitys->m_Items[idx], v2),
        (this = (DialogMessageMaster___c__DisplayClass8_0_o *)v5->fields.__4__this) == 0LL) )
  {
LABEL_6:
    sub_1B4D1EC(this, method);
  }
  DialogMessageMaster__ShowChain(
    (DialogMessageMaster_o *)this,
    v5->fields.entitys,
    v5->fields.idx + 1,
    v5->fields.callBack,
    v6);
}