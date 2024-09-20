void __fastcall DialogMessageMaster___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  int32_t v3; // w1
  struct DialogMessageMaster_StaticFields *static_fields; // x0
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_4A5AFDD & 1) == 0 )
  {
    sub_1B885B0(&DialogMessageMaster_TypeInfo);
    sub_1B885B0(&StringLiteral_18610/*"dialogMessage_{0}_{1}"*/);
    sub_1B885B0(&StringLiteral_22855/*"remindDialogMessage_{0}_{1}"*/);
    byte_4A5AFDD = 1;
  }
  DialogMessageMaster_TypeInfo->static_fields->SAVE_KEY = (struct System_String_o *)StringLiteral_18610/*"dialogMessage_{0}_{1}"*/;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)DialogMessageMaster_TypeInfo->static_fields,
    StringLiteral_18610/*"dialogMessage_{0}_{1}"*/,
    v1,
    v2);
  v3 = StringLiteral_22855/*"remindDialogMessage_{0}_{1}"*/;
  static_fields = DialogMessageMaster_TypeInfo->static_fields;
  static_fields->SAVE_REMIND_KEY = (struct System_String_o *)StringLiteral_22855/*"remindDialogMessage_{0}_{1}"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->SAVE_REMIND_KEY, v3, v5, v6);
}


void __fastcall DialogMessageMaster___ctor(DialogMessageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5AFD6 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_DialogMessageMaster__DialogMessageEntity__int___ctor__);
    byte_4A5AFD6 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    228,
    (const MethodInfo_311D8F4 *)Method_DataMasterBase_DialogMessageMaster__DialogMessageEntity__int___ctor__);
}


void __fastcall DialogMessageMaster__DeleteContinueData(DialogMessageMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v4; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v7; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v10; // x8
  __int64 v11; // x9
  int32_t *v12; // x10
  __int64 v13; // x0
  __int64 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  __int64 methodPtr_low; // x10
  _DWORD *v20; // x28
  DialogMessageMaster_c *v21; // x0
  System_String_o *SAVE_KEY; // x20
  Il2CppObject *v23; // x21
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  Il2CppObject *v27; // x2
  System_String_o *v28; // x0
  System_String_o *SAVE_REMIND_KEY; // x20
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  Il2CppObject *v33; // x21
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  Il2CppObject *v37; // x2
  System_String_o *v38; // x0
  System_Collections_Generic_IEnumerator_T__c *v39; // x8
  __int64 v40; // x9
  int32_t *v41; // x10
  __int64 v42; // x0
  int v43; // [xsp+8h] [xbp-68h] BYREF
  int v44; // [xsp+Ch] [xbp-64h] BYREF
  int v45; // [xsp+18h] [xbp-58h] BYREF
  int v46; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_4A5AFD7 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&DialogMessageEntity_TypeInfo);
    sub_1B885B0(&DialogMessageMaster_TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    byte_4A5AFD7 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B8880C(0LL, method);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v4);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v7 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v7;
        p_offset += 4;
        if ( !v7 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v10 = Enumerator->klass;
    v11 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v12 = &v10->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v12 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v11;
        v12 += 4;
        if ( !v11 )
          goto LABEL_16;
      }
      v13 = (__int64)&v10->vtable[*v12].method;
    }
    else
    {
LABEL_16:
      v13 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v14 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v13)(
            Enumerator,
            *(_QWORD *)(v13 + 8));
    if ( v14
      && (methodPtr_low = LOBYTE(DialogMessageEntity_TypeInfo->vtable._0_Equals.methodPtr),
          *(unsigned __int8 *)(*(_QWORD *)v14 + 304LL) >= (unsigned int)methodPtr_low) )
    {
      if ( *(DialogMessageEntity_c **)(*(_QWORD *)(*(_QWORD *)v14 + 200LL) + 8 * methodPtr_low - 8) == DialogMessageEntity_TypeInfo )
        v20 = (_DWORD *)v14;
      else
        v20 = 0LL;
    }
    else
    {
      v20 = 0LL;
    }
    v21 = DialogMessageMaster_TypeInfo;
    if ( !DialogMessageMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DialogMessageMaster_TypeInfo);
      v21 = DialogMessageMaster_TypeInfo;
    }
    if ( !v20 )
      sub_1B8880C(v21, v15);
    SAVE_KEY = v21->static_fields->SAVE_KEY;
    v46 = v20[4];
    v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v46, v16, v17, v18);
    v45 = v20[17];
    v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v45, v24, v25, v26);
    v28 = System_String__Format_61721404(SAVE_KEY, v23, v27, 0LL);
    UnityEngine_PlayerPrefs__DeleteKey(v28, 0LL);
    SAVE_REMIND_KEY = DialogMessageMaster_TypeInfo->static_fields->SAVE_REMIND_KEY;
    v44 = v20[4];
    v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v44, v30, v31, v32);
    v43 = v20[19];
    v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v43, v34, v35, v36);
    v38 = System_String__Format_61721404(SAVE_REMIND_KEY, v33, v37, 0LL);
    UnityEngine_PlayerPrefs__DeleteKey(v38, 0LL);
  }
  v39 = Enumerator->klass;
  v40 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v41 = &v39->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v41 - 1) != System_IDisposable_TypeInfo )
    {
      --v40;
      v41 += 4;
      if ( !v40 )
        goto LABEL_32;
    }
    v42 = (__int64)&v39->vtable[*v41].method;
  }
  else
  {
LABEL_32:
    v42 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v42)(Enumerator, *(_QWORD *)(v42 + 8));
}


DialogMessageEntity_array *__fastcall DialogMessageMaster__GetDialogList(
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
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  __int64 v18; // x9
  int32_t *v19; // x10
  __int64 v20; // x0
  DialogMessageEntity_o *v21; // x0
  const MethodInfo *v22; // x2
  DialogMessageEntity_o *v23; // x24
  __int64 methodPtr_low; // x10
  const MethodInfo *v25; // x2
  int32_t v26; // w1
  int32_t v27; // w2
  int32_t v28; // w3
  int32_t v29; // w4
  const MethodInfo *v30; // x5
  _BOOL8 IsOpenCondition; // x0
  __int64 v32; // x1
  int32_t v33; // w2
  int32_t v34; // w3
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x0
  System_Collections_Generic_IEnumerator_T__c *v39; // x8
  __int64 v40; // x9
  int32_t *v41; // x10
  __int64 v42; // x0
  DialogMessageMaster___c_c *v43; // x8
  System_Comparison_T__o *_9__6_0; // x20
  Il2CppObject *v45; // x21
  struct DialogMessageMaster___c_StaticFields *static_fields; // x0
  int32_t v47; // w2
  int32_t v48; // w3

  if ( (byte_4A5AFD8 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&System_Comparison_DialogMessageEntity__TypeInfo);
    sub_1B885B0(&DialogMessageEntity_TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_DialogMessageEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_DialogMessageEntity__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_DialogMessageEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_DialogMessageEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_DialogMessageEntity__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_DialogMessageMaster___c__GetDialogList_b__6_0__);
    sub_1B885B0(&DialogMessageMaster___c_TypeInfo);
    byte_4A5AFD8 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_DialogMessageEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_DialogMessageEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  v7 = (DialogMessageEntity_o *)sub_1B887FC(DialogMessageEntity_TypeInfo);
  DialogMessageEntity___ctor(v7, v8);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_46;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v11);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v14 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        p_offset += 4;
        if ( !v14 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v17 = Enumerator->klass;
    v18 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v19 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_18;
      }
      v20 = (__int64)&v17->vtable[*v19].method;
    }
    else
    {
LABEL_18:
      v20 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v21 = (DialogMessageEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
                                     Enumerator,
                                     *(_QWORD *)(v20 + 8));
    v23 = v21;
    if ( v21 )
    {
      methodPtr_low = LOBYTE(DialogMessageEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v21->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (DialogMessageEntity_c *)v21->klass->_2.typeHierarchy[methodPtr_low - 1] == DialogMessageEntity_TypeInfo
        && v21->fields.dialogOpenType == openType
        && DialogMessageEntity__IsOpenTime(v21, Time, v22)
        && !DialogMessageMaster__IsSavedAsSeen(this, v23, v25) )
      {
        IsOpenCondition = DialogMessageEntity__IsOpenCondition(v23, v26, v27, v28, v29, v30);
        if ( IsOpenCondition )
        {
          if ( !v5 )
            sub_1B8880C(IsOpenCondition, v32);
          items = v5->fields._items;
          v36 = Method_System_Collections_Generic_List_DialogMessageEntity__Add__;
          ++v5->fields._version;
          if ( !items )
            sub_1B8880C(IsOpenCondition, v32);
          size = v5->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)v23,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
          }
          else
          {
            v38 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v38[4] = (Il2CppClass *)v23;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v38 + 4), (int32_t)v23, v33, v34);
          }
        }
      }
    }
  }
  v39 = Enumerator->klass;
  v40 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v41 = &v39->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v41 - 1) != System_IDisposable_TypeInfo )
    {
      --v40;
      v41 += 4;
      if ( !v40 )
        goto LABEL_36;
    }
    v42 = (__int64)&v39->vtable[*v41].method;
  }
  else
  {
LABEL_36:
    v42 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v42)(
                                                             Enumerator,
                                                             *(_QWORD *)(v42 + 8));
  v43 = DialogMessageMaster___c_TypeInfo;
  if ( !DialogMessageMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DialogMessageMaster___c_TypeInfo);
    v43 = DialogMessageMaster___c_TypeInfo;
  }
  _9__6_0 = (System_Comparison_T__o *)v43->static_fields->__9__6_0;
  if ( !_9__6_0 )
  {
    if ( !v43->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v43);
      v43 = DialogMessageMaster___c_TypeInfo;
    }
    v45 = (Il2CppObject *)v43->static_fields->__9;
    _9__6_0 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_DialogMessageEntity__TypeInfo);
    System_Comparison_object____ctor(_9__6_0, v45, Method_DialogMessageMaster___c__GetDialogList_b__6_0__, 0LL);
    static_fields = DialogMessageMaster___c_TypeInfo->static_fields;
    static_fields->__9__6_0 = (struct System_Comparison_DialogMessageEntity__o *)_9__6_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__6_0, (int32_t)_9__6_0, v47, v48);
  }
  if ( !v5 )
LABEL_46:
    sub_1B8880C(list, v9);
  System_Collections_Generic_List_object___Sort_55571192(
    v5,
    _9__6_0,
    (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_DialogMessageEntity__Sort__);
  return (DialogMessageEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        v5,
                                        (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_DialogMessageEntity__ToArray__);
}


bool __fastcall DialogMessageMaster__IsSavedAsSeen(
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
  if ( (byte_4A5AFDC & 1) == 0 )
  {
    sub_1B885B0(&DialogMessageMaster_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Contains__);
    this = (DialogMessageMaster_o *)sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5AFDC = 1;
  }
  if ( !entity )
    sub_1B8880C(this, entity);
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
    v24 = System_String__Format_61721404(SAVE_KEY, v19, v23, 0LL);
    Int = UnityEngine_PlayerPrefs__GetInt(v24, 0, 0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Time = (DialogMessageEntity_o *)NetworkManager__getTime(0LL);
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
      v50 = System_String__Format_61721404(SAVE_REMIND_KEY, v45, v49, 0LL);
      if ( UnityEngine_PlayerPrefs__GetInt(v50, 0, 0LL) > 0 )
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
      v39 = System_String__Format_61721404(v33, v34, v38, 0LL);
      if ( UnityEngine_PlayerPrefs__GetInt(v39, 0, 0LL) > 0 )
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
      v69 = System_String__Format_61721404(v63, v64, v68, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v69, 0LL);
      v55 = DialogMessageMaster_TypeInfo->static_fields->SAVE_REMIND_KEY;
      v77 = entity->fields.id;
      v59 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v77, v70, v71, v72);
      v60 = int_TypeInfo;
      p_openedAt = &remindAt;
      remindAt = entity->fields.remindAt;
    }
    v73 = (Il2CppObject *)j_il2cpp_value_box_0(v60, p_openedAt, v56, v57, v58);
    v74 = System_String__Format_61721404(v55, v59, v73, 0LL);
    UnityEngine_PlayerPrefs__SetInt(v74, 1, 0LL);
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
    v15 = System_String__Format_61721404(v9, v10, v14, 0LL);
    if ( UnityEngine_PlayerPrefs__GetInt(v15, 0, 0LL) < 1 )
      goto LABEL_34;
    goto LABEL_22;
  }
  seenList = v6->fields.seenList;
  if ( seenList )
    LOBYTE(seenList) = System_Collections_Generic_List_int___Contains(
                         seenList,
                         entity->fields.id,
                         (const MethodInfo_34E0B88 *)Method_System_Collections_Generic_List_int__Contains__);
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
  int32_t frequencyType; // w8
  DialogMessageMaster_c *v8; // x0
  System_String_o *SAVE_KEY; // x20
  Il2CppObject *v10; // x21
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  Il2CppObject *v14; // x0
  System_String_o *v15; // x0
  ServantStatusBattleListViewItem_o *p_seenList; // x20
  DialogMessageMaster_o *seenList; // t1
  System_Collections_Generic_List_int__o *v18; // x21
  int32_t v19; // w2
  int32_t v20; // w3
  __int64 v21; // x8
  _QWORD *v22; // x9
  __int64 MasterName_k__BackingField_low; // x10
  int32_t openedAt; // [xsp+8h] [xbp-28h] BYREF
  int32_t id; // [xsp+Ch] [xbp-24h] BYREF

  v5 = entity;
  v6 = this;
  if ( (byte_4A5AFDB & 1) == 0 )
  {
    sub_1B885B0(&DialogMessageMaster_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    this = (DialogMessageMaster_o *)sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    byte_4A5AFDB = 1;
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
    p_seenList = (ServantStatusBattleListViewItem_o *)&v6->fields.seenList;
    this = seenList;
    if ( seenList
      || (v18 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo),
          System_Collections_Generic_List_int____ctor(
            v18,
            (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__),
          p_seenList->klass = (ServantStatusBattleListViewItem_c *)v18,
          sub_1B88554(p_seenList, (int32_t)v18, v19, v20),
          (this = (DialogMessageMaster_o *)p_seenList->klass) != 0LL) )
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
            *(const MethodInfo_34E0810 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
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
    sub_1B8880C(this, entity);
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
  v15 = System_String__Format_61721404(SAVE_KEY, v10, v14, 0LL);
  UnityEngine_PlayerPrefs__SetInt(v15, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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
  void *list; // x0
  int32_t Count; // w23
  System_Collections_Generic_List_object__o *v13; // x22
  int64_t Time; // x0
  int64_t v15; // x24
  int32_t v16; // w25
  Il2CppObject *Item; // x0
  const MethodInfo *v18; // x2
  DialogMessageEntity_o *v19; // x26
  __int64 methodPtr_low; // x10
  const MethodInfo *v21; // x2
  int32_t v22; // w2
  int32_t v23; // w3
  int32_t v24; // w4
  const MethodInfo *v25; // x5
  int32_t v26; // w2
  int32_t v27; // w3
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x0
  System_Comparison_T__o *v32; // x21
  Il2CppObject *v33; // x23
  struct DialogMessageMaster___c_StaticFields *static_fields; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  System_Object_array *v37; // x1
  const MethodInfo *v38; // x4

  if ( (byte_4A5AFD9 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&System_Comparison_DialogMessageEntity__TypeInfo);
    sub_1B885B0(&DialogMessageEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_DialogMessageEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_DialogMessageEntity__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_DialogMessageEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_DialogMessageEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_DialogMessageEntity__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_DialogMessageMaster___c__ShowAvailables_b__7_0__);
    sub_1B885B0(&DialogMessageMaster___c_TypeInfo);
    byte_4A5AFD9 = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_30;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v13 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_DialogMessageEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_DialogMessageEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( Count >= 1 )
  {
    v15 = Time;
    v16 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v16,
               (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v19 = (DialogMessageEntity_o *)Item;
        methodPtr_low = LOBYTE(DialogMessageEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (DialogMessageEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == DialogMessageEntity_TypeInfo
          && LODWORD(Item[1].monitor) == opType
          && DialogMessageEntity__IsOpenTime((DialogMessageEntity_o *)Item, v15, v18)
          && !DialogMessageMaster__IsSavedAsSeen(this, v19, v21) )
        {
          list = (void *)DialogMessageEntity__IsOpenCondition(v19, opType, v22, v23, v24, v25);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            if ( !v13 )
              break;
            items = v13->fields._items;
            v29 = Method_System_Collections_Generic_List_DialogMessageEntity__Add__;
            ++v13->fields._version;
            if ( !items )
              break;
            size = v13->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v13,
                (Il2CppObject *)v19,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
            }
            else
            {
              v31 = &items->obj.klass + size;
              v13->fields._size = size + 1;
              v31[4] = (Il2CppClass *)v19;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v31 + 4), (int32_t)v19, v26, v27);
            }
          }
        }
      }
      if ( Count == ++v16 )
        goto LABEL_22;
    }
LABEL_30:
    sub_1B8880C(list, *(_QWORD *)&opType);
  }
LABEL_22:
  list = DialogMessageMaster___c_TypeInfo;
  if ( !DialogMessageMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DialogMessageMaster___c_TypeInfo);
    list = DialogMessageMaster___c_TypeInfo;
  }
  v32 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 16LL);
  if ( !v32 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = DialogMessageMaster___c_TypeInfo;
    }
    v33 = (Il2CppObject *)**((_QWORD **)list + 23);
    v32 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_DialogMessageEntity__TypeInfo);
    System_Comparison_object____ctor(v32, v33, Method_DialogMessageMaster___c__ShowAvailables_b__7_0__, 0LL);
    static_fields = DialogMessageMaster___c_TypeInfo->static_fields;
    static_fields->__9__7_0 = (struct System_Comparison_DialogMessageEntity__o *)v32;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__7_0, (int32_t)v32, v35, v36);
  }
  if ( !v13 )
    goto LABEL_30;
  System_Collections_Generic_List_object___Sort_55571192(
    v13,
    v32,
    (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_DialogMessageEntity__Sort__);
  v37 = System_Collections_Generic_List_object___ToArray(
          v13,
          (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_DialogMessageEntity__ToArray__);
  DialogMessageMaster__ShowChain(this, (DialogMessageEntity_array *)v37, 0, callback, v38);
}


void __fastcall DialogMessageMaster__ShowChain(
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
  int32_t v14; // w2
  int32_t v15; // w3
  __int64 v16; // x22
  int32_t v17; // w2
  int32_t v18; // w3
  __int64 v19; // x8
  __int64 v20; // x9
  int v21; // w10
  DialogMessageEntity_o *v22; // x20
  System_Action_o *v23; // x21
  const MethodInfo *v24; // x2

  if ( (byte_4A5AFDA & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_DialogMessageMaster___c__DisplayClass8_0__ShowChain_b__0__);
    sub_1B885B0(&DialogMessageMaster___c__DisplayClass8_0_TypeInfo);
    byte_4A5AFDA = 1;
  }
  v9 = sub_1B887FC(DialogMessageMaster___c__DisplayClass8_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_11;
  *(_QWORD *)(v9 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)this, v12, v13);
  *(_QWORD *)(v9 + 24) = entitys;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 24), (int32_t)entitys, v14, v15);
  *(_QWORD *)(v9 + 40) = callBack;
  v16 = v9 + 40;
  *(_DWORD *)(v9 + 32) = idx;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 40), (int32_t)callBack, v17, v18);
  v19 = *(_QWORD *)(v9 + 24);
  if ( !v19 )
    goto LABEL_11;
  v20 = *(int *)(v9 + 32);
  v21 = *(_DWORD *)(v19 + 24);
  if ( (int)v20 < v21 )
  {
    if ( (unsigned int)v20 >= v21 )
      sub_1B88814(v10, v11);
    v22 = *(DialogMessageEntity_o **)(v19 + 8 * v20 + 32);
    v23 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      v23,
      (Il2CppObject *)v9,
      Method_DialogMessageMaster___c__DisplayClass8_0__ShowChain_b__0__,
      0LL);
    if ( v22 )
    {
      DialogMessageEntity__Open(v22, v23, v24);
      return;
    }
LABEL_11:
    sub_1B8880C(v10, v11);
  }
  if ( !*(_QWORD *)v16 )
    goto LABEL_11;
  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v16 + 24LL))(
    *(_QWORD *)(*(_QWORD *)v16 + 64LL),
    *(_QWORD *)(*(_QWORD *)v16 + 40LL));
}


void __fastcall DialogMessageMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5AFDE & 1) == 0 )
  {
    sub_1B885B0(&DialogMessageMaster___c_TypeInfo);
    byte_4A5AFDE = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(DialogMessageMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  DialogMessageMaster___c_TypeInfo->static_fields->__9 = (struct DialogMessageMaster___c_o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)DialogMessageMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1B8880C(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall DialogMessageMaster___c___ShowAvailables_b__7_0(
        DialogMessageMaster___c_o *this,
        DialogMessageEntity_o *a,
        DialogMessageEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1B8880C(this, a);
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
    sub_1B88814(this, method);
  this = (DialogMessageMaster___c__DisplayClass8_0_o *)this->fields.__4__this;
  if ( !this
    || (DialogMessageMaster__SaveAsSeen((DialogMessageMaster_o *)this, entitys->m_Items[idx], v2),
        (this = (DialogMessageMaster___c__DisplayClass8_0_o *)v5->fields.__4__this) == 0LL) )
  {
LABEL_6:
    sub_1B8880C(this, method);
  }
  DialogMessageMaster__ShowChain(
    (DialogMessageMaster_o *)this,
    v5->fields.entitys,
    v5->fields.idx + 1,
    v5->fields.callBack,
    v6);
}