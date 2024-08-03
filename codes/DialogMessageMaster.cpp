void __fastcall DialogMessageMaster___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t v6; // w1
  struct DialogMessageMaster_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_49FC28F & 1) == 0 )
  {
    sub_1B640C8(&DialogMessageMaster_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_18539/*"dialogMessage_{0}_{1}"*/, v4);
    sub_1B640C8(&StringLiteral_22761/*"remindDialogMessage_{0}_{1}"*/, v5);
    byte_49FC28F = 1;
  }
  DialogMessageMaster_TypeInfo->static_fields->SAVE_KEY = (struct System_String_o *)StringLiteral_18539/*"dialogMessage_{0}_{1}"*/;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)DialogMessageMaster_TypeInfo->static_fields,
    StringLiteral_18539/*"dialogMessage_{0}_{1}"*/,
    v2,
    v3);
  v6 = StringLiteral_22761/*"remindDialogMessage_{0}_{1}"*/;
  static_fields = DialogMessageMaster_TypeInfo->static_fields;
  static_fields->SAVE_REMIND_KEY = (struct System_String_o *)StringLiteral_22761/*"remindDialogMessage_{0}_{1}"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->SAVE_REMIND_KEY, v6, v8, v9);
}


void __fastcall DialogMessageMaster___ctor(DialogMessageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FC288 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_DialogMessageMaster__DialogMessageEntity__int___ctor__, method);
    byte_49FC288 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    228,
    (const MethodInfo_30D3E64 *)Method_DataMasterBase_DialogMessageMaster__DialogMessageEntity__int___ctor__);
}


void __fastcall DialogMessageMaster__DeleteContinueData(DialogMessageMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v15; // x8
  __int64 v16; // x9
  int32_t *v17; // x10
  __int64 v18; // x0
  __int64 v19; // x0
  __int64 methodPtr_low; // x10
  _DWORD *v21; // x28
  DialogMessageMaster_c *v22; // x0
  System_String_o *SAVE_KEY; // x20
  Il2CppObject *v24; // x21
  Il2CppObject *v25; // x2
  System_String_o *v26; // x0
  System_String_o *SAVE_REMIND_KEY; // x20
  Il2CppObject *v28; // x21
  Il2CppObject *v29; // x2
  System_String_o *v30; // x0
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  __int64 v32; // x9
  int32_t *v33; // x10
  __int64 v34; // x0
  int v35; // [xsp+8h] [xbp-68h] BYREF
  int v36; // [xsp+Ch] [xbp-64h] BYREF
  int v37; // [xsp+18h] [xbp-58h] BYREF
  int v38; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_49FC289 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_1B640C8(&DialogMessageEntity_TypeInfo, v3);
    sub_1B640C8(&DialogMessageMaster_TypeInfo, v4);
    sub_1B640C8(&System_IDisposable_TypeInfo, v5);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_1B640C8(&int_TypeInfo, v8);
    byte_49FC289 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B64324(0LL);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30710E0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B64324(0LL);
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
      p_method = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v17 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
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
      v18 = sub_1BB60A8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v19 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
            Enumerator,
            *(_QWORD *)(v18 + 8));
    if ( v19
      && (methodPtr_low = LOBYTE(DialogMessageEntity_TypeInfo->vtable._0_Equals.methodPtr),
          *(unsigned __int8 *)(*(_QWORD *)v19 + 304LL) >= (unsigned int)methodPtr_low) )
    {
      if ( *(DialogMessageEntity_c **)(*(_QWORD *)(*(_QWORD *)v19 + 200LL) + 8 * methodPtr_low - 8) == DialogMessageEntity_TypeInfo )
        v21 = (_DWORD *)v19;
      else
        v21 = 0LL;
    }
    else
    {
      v21 = 0LL;
    }
    v22 = DialogMessageMaster_TypeInfo;
    if ( !DialogMessageMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DialogMessageMaster_TypeInfo);
      v22 = DialogMessageMaster_TypeInfo;
    }
    if ( !v21 )
      sub_1B64324(v22);
    SAVE_KEY = v22->static_fields->SAVE_KEY;
    v38 = v21[4];
    v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v38);
    v37 = v21[17];
    v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v37);
    v26 = System_String__Format_61389768(SAVE_KEY, v24, v25, 0LL);
    UnityEngine_PlayerPrefs__DeleteKey(v26, 0LL);
    SAVE_REMIND_KEY = DialogMessageMaster_TypeInfo->static_fields->SAVE_REMIND_KEY;
    v36 = v21[4];
    v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v36);
    v35 = v21[19];
    v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v35);
    v30 = System_String__Format_61389768(SAVE_REMIND_KEY, v28, v29, 0LL);
    UnityEngine_PlayerPrefs__DeleteKey(v30, 0LL);
  }
  v31 = Enumerator->klass;
  v32 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v33 = &v31->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v33 - 1) != System_IDisposable_TypeInfo )
    {
      --v32;
      v33 += 4;
      if ( !v32 )
        goto LABEL_32;
    }
    v34 = (__int64)&v31->vtable[*v33].method;
  }
  else
  {
LABEL_32:
    v34 = sub_1BB60A8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(Enumerator, *(_QWORD *)(v34 + 8));
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
  __int64 v20; // x1
  __int64 v21; // x2
  DialogMessageEntity_o *v22; // x0
  const MethodInfo *v23; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
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
  __int64 methodPtr_low; // x10
  const MethodInfo *v38; // x2
  int32_t v39; // w1
  int32_t v40; // w2
  int32_t v41; // w3
  int32_t v42; // w4
  const MethodInfo *v43; // x5
  _BOOL8 IsOpenCondition; // x0
  int32_t v45; // w2
  int32_t v46; // w3
  struct System_Object_array *items; // x8
  _QWORD *v48; // x9
  __int64 size; // x10
  Il2CppClass **v50; // x0
  System_Collections_Generic_IEnumerator_T__c *v51; // x8
  __int64 v52; // x9
  int32_t *v53; // x10
  __int64 v54; // x0
  __int64 v55; // x1
  __int64 v56; // x2
  DialogMessageMaster___c_c *v57; // x8
  System_Comparison_T__o *_9__6_0; // x20
  Il2CppObject *v59; // x21
  struct DialogMessageMaster___c_StaticFields *static_fields; // x0
  int32_t v61; // w2
  int32_t v62; // w3

  if ( (byte_49FC28A & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&openType);
    sub_1B640C8(&System_Comparison_DialogMessageEntity__TypeInfo, v5);
    sub_1B640C8(&DialogMessageEntity_TypeInfo, v6);
    sub_1B640C8(&System_IDisposable_TypeInfo, v7);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v8);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_DialogMessageEntity__Add__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_DialogMessageEntity__Sort__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_DialogMessageEntity__ToArray__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_DialogMessageEntity___ctor__, v13);
    sub_1B640C8(&System_Collections_Generic_List_DialogMessageEntity__TypeInfo, v14);
    sub_1B640C8(&NetworkManager_TypeInfo, v15);
    sub_1B640C8(&Method_DialogMessageMaster___c__GetDialogList_b__6_0__, v16);
    sub_1B640C8(&DialogMessageMaster___c_TypeInfo, v17);
    byte_49FC28A = 1;
  }
  v18 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_DialogMessageEntity__TypeInfo,
                                                       *(_QWORD *)&openType,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_DialogMessageEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  v22 = (DialogMessageEntity_o *)sub_1B64314(DialogMessageEntity_TypeInfo, v20, v21);
  DialogMessageEntity___ctor(v22, v23);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_46;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30710E0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B64324(0LL);
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
      p_method = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v32 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
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
      v33 = sub_1BB60A8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v34 = (DialogMessageEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v33)(
                                     Enumerator,
                                     *(_QWORD *)(v33 + 8));
    v36 = v34;
    if ( v34 )
    {
      methodPtr_low = LOBYTE(DialogMessageEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v34->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (DialogMessageEntity_c *)v34->klass->_2.typeHierarchy[methodPtr_low - 1] == DialogMessageEntity_TypeInfo
        && v34->fields.dialogOpenType == openType
        && DialogMessageEntity__IsOpenTime(v34, Time, v35)
        && !DialogMessageMaster__IsSavedAsSeen(this, v36, v38) )
      {
        IsOpenCondition = DialogMessageEntity__IsOpenCondition(v36, v39, v40, v41, v42, v43);
        if ( IsOpenCondition )
        {
          if ( !v18 )
            sub_1B64324(IsOpenCondition);
          items = v18->fields._items;
          v48 = Method_System_Collections_Generic_List_DialogMessageEntity__Add__;
          ++v18->fields._version;
          if ( !items )
            sub_1B64324(IsOpenCondition);
          size = v18->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v18,
              (Il2CppObject *)v36,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
          }
          else
          {
            v50 = &items->obj.klass + size;
            v18->fields._size = size + 1;
            v50[4] = (Il2CppClass *)v36;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v50 + 4), (int32_t)v36, v45, v46);
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
        goto LABEL_36;
    }
    v54 = (__int64)&v51->vtable[*v53].method;
  }
  else
  {
LABEL_36:
    v54 = sub_1BB60A8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v54)(
                                                             Enumerator,
                                                             *(_QWORD *)(v54 + 8));
  v57 = DialogMessageMaster___c_TypeInfo;
  if ( !DialogMessageMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DialogMessageMaster___c_TypeInfo);
    v57 = DialogMessageMaster___c_TypeInfo;
  }
  _9__6_0 = (System_Comparison_T__o *)v57->static_fields->__9__6_0;
  if ( !_9__6_0 )
  {
    if ( !v57->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v57);
      v57 = DialogMessageMaster___c_TypeInfo;
    }
    v59 = (Il2CppObject *)v57->static_fields->__9;
    _9__6_0 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_DialogMessageEntity__TypeInfo, v55, v56);
    System_Comparison_object____ctor(_9__6_0, v59, Method_DialogMessageMaster___c__GetDialogList_b__6_0__, 0LL);
    static_fields = DialogMessageMaster___c_TypeInfo->static_fields;
    static_fields->__9__6_0 = (struct System_Comparison_DialogMessageEntity__o *)_9__6_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__6_0, (int32_t)_9__6_0, v61, v62);
  }
  if ( !v18 )
LABEL_46:
    sub_1B64324(list);
  System_Collections_Generic_List_object___Sort_55243320(
    v18,
    _9__6_0,
    (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_DialogMessageEntity__Sort__);
  return (DialogMessageEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        v18,
                                        (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_DialogMessageEntity__ToArray__);
}


bool __fastcall DialogMessageMaster__IsSavedAsSeen(
        DialogMessageMaster_o *this,
        DialogMessageEntity_o *entity,
        const MethodInfo *method)
{
  DialogMessageMaster_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t frequencyType; // w8
  DialogMessageMaster_c *v9; // x0
  System_String_o *v10; // x20
  Il2CppObject *v11; // x21
  Il2CppObject *v12; // x0
  System_String_o *v13; // x0
  System_Collections_Generic_List_int__o *seenList; // x0
  DialogMessageMaster_c *v15; // x0
  System_String_o *SAVE_KEY; // x20
  Il2CppObject *v17; // x21
  Il2CppObject *v18; // x0
  System_String_o *v19; // x0
  int32_t Int; // w20
  DialogMessageEntity_o *Time; // x0
  const MethodInfo *v22; // x4
  bool IsOpenTimeInSpecifiedTimeRange; // w0
  DialogMessageMaster_c *v24; // x0
  System_String_o *v25; // x20
  Il2CppObject *v26; // x21
  Il2CppObject *v27; // x0
  System_String_o *v28; // x0
  DialogMessageMaster_c *v29; // x0
  System_String_o *SAVE_REMIND_KEY; // x20
  Il2CppObject *v31; // x21
  Il2CppObject *v32; // x0
  System_String_o *v33; // x0
  DialogMessageMaster_c *v34; // x0
  System_String_o *v35; // x20
  Il2CppObject *v36; // x21
  System_Int32_c *v37; // x0
  int32_t *p_openedAt; // x1
  DialogMessageMaster_c *v39; // x0
  System_String_o *v40; // x20
  Il2CppObject *v41; // x21
  Il2CppObject *v42; // x0
  System_String_o *v43; // x0
  Il2CppObject *v44; // x0
  System_String_o *v45; // x0
  int32_t remindAt; // [xsp+0h] [xbp-40h] BYREF
  int32_t v48; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t openedAt; // [xsp+8h] [xbp-38h] BYREF
  int32_t id; // [xsp+Ch] [xbp-34h] BYREF

  v4 = this;
  if ( (byte_49FC28E & 1) == 0 )
  {
    sub_1B640C8(&DialogMessageMaster_TypeInfo, entity);
    sub_1B640C8(&int_TypeInfo, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Contains__, v6);
    this = (DialogMessageMaster_o *)sub_1B640C8(&NetworkManager_TypeInfo, v7);
    byte_49FC28E = 1;
  }
  if ( !entity )
    sub_1B64324(this);
  frequencyType = entity->fields.frequencyType;
  if ( frequencyType == 7 )
  {
    v15 = DialogMessageMaster_TypeInfo;
    if ( !DialogMessageMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DialogMessageMaster_TypeInfo);
      v15 = DialogMessageMaster_TypeInfo;
    }
    SAVE_KEY = v15->static_fields->SAVE_KEY;
    id = entity->fields.id;
    v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id);
    openedAt = entity->fields.openedAt;
    v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &openedAt);
    v19 = System_String__Format_61389768(SAVE_KEY, v17, v18, 0LL);
    Int = UnityEngine_PlayerPrefs__GetInt(v19, 0, 0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Time = (DialogMessageEntity_o *)NetworkManager__getTime(0LL);
    IsOpenTimeInSpecifiedTimeRange = DialogMessageEntity__IsOpenTimeInSpecifiedTimeRange(
                                       Time,
                                       entity->fields.remindAt,
                                       entity->fields.closedAt,
                                       (int64_t)Time,
                                       v22);
    if ( Int < 1 )
    {
      if ( !IsOpenTimeInSpecifiedTimeRange )
        goto LABEL_34;
      v29 = DialogMessageMaster_TypeInfo;
      if ( !DialogMessageMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DialogMessageMaster_TypeInfo);
        v29 = DialogMessageMaster_TypeInfo;
      }
      SAVE_REMIND_KEY = v29->static_fields->SAVE_REMIND_KEY;
      id = entity->fields.id;
      v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id);
      openedAt = entity->fields.remindAt;
      v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &openedAt);
      v33 = System_String__Format_61389768(SAVE_REMIND_KEY, v31, v32, 0LL);
      if ( UnityEngine_PlayerPrefs__GetInt(v33, 0, 0LL) > 0 )
        goto LABEL_34;
      v34 = DialogMessageMaster_TypeInfo;
      if ( !DialogMessageMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DialogMessageMaster_TypeInfo);
        v34 = DialogMessageMaster_TypeInfo;
      }
      v35 = v34->static_fields->SAVE_REMIND_KEY;
      id = entity->fields.id;
      v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id);
      v37 = int_TypeInfo;
      p_openedAt = &openedAt;
      openedAt = entity->fields.remindAt;
    }
    else
    {
      if ( !IsOpenTimeInSpecifiedTimeRange )
        goto LABEL_22;
      v24 = DialogMessageMaster_TypeInfo;
      if ( !DialogMessageMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DialogMessageMaster_TypeInfo);
        v24 = DialogMessageMaster_TypeInfo;
      }
      v25 = v24->static_fields->SAVE_REMIND_KEY;
      id = entity->fields.id;
      v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id);
      openedAt = entity->fields.remindAt;
      v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &openedAt);
      v28 = System_String__Format_61389768(v25, v26, v27, 0LL);
      if ( UnityEngine_PlayerPrefs__GetInt(v28, 0, 0LL) > 0 )
      {
LABEL_22:
        LOBYTE(seenList) = 1;
        return (char)seenList;
      }
      v39 = DialogMessageMaster_TypeInfo;
      if ( !DialogMessageMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DialogMessageMaster_TypeInfo);
        v39 = DialogMessageMaster_TypeInfo;
      }
      v40 = v39->static_fields->SAVE_KEY;
      id = entity->fields.id;
      v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id);
      openedAt = entity->fields.openedAt;
      v42 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &openedAt);
      v43 = System_String__Format_61389768(v40, v41, v42, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v43, 0LL);
      v35 = DialogMessageMaster_TypeInfo->static_fields->SAVE_REMIND_KEY;
      v48 = entity->fields.id;
      v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v48);
      v37 = int_TypeInfo;
      p_openedAt = &remindAt;
      remindAt = entity->fields.remindAt;
    }
    v44 = (Il2CppObject *)j_il2cpp_value_box_0(v37, p_openedAt);
    v45 = System_String__Format_61389768(v35, v36, v44, 0LL);
    UnityEngine_PlayerPrefs__SetInt(v45, 1, 0LL);
LABEL_34:
    LOBYTE(seenList) = 0;
    return (char)seenList;
  }
  if ( frequencyType != 3 )
  {
    if ( frequencyType != 1 )
      goto LABEL_34;
    v9 = DialogMessageMaster_TypeInfo;
    if ( !DialogMessageMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DialogMessageMaster_TypeInfo);
      v9 = DialogMessageMaster_TypeInfo;
    }
    v10 = v9->static_fields->SAVE_KEY;
    id = entity->fields.id;
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id);
    openedAt = entity->fields.openedAt;
    v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &openedAt);
    v13 = System_String__Format_61389768(v10, v11, v12, 0LL);
    if ( UnityEngine_PlayerPrefs__GetInt(v13, 0, 0LL) < 1 )
      goto LABEL_34;
    goto LABEL_22;
  }
  seenList = v4->fields.seenList;
  if ( seenList )
    LOBYTE(seenList) = System_Collections_Generic_List_int___Contains(
                         seenList,
                         entity->fields.id,
                         (const MethodInfo_3490254 *)Method_System_Collections_Generic_List_int__Contains__);
  return (char)seenList;
}


void __fastcall DialogMessageMaster__SaveAsSeen(
        DialogMessageMaster_o *this,
        DialogMessageEntity_o *entity,
        const MethodInfo *method)
{
  DialogMessageMaster_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t frequencyType; // w8
  DialogMessageMaster_c *v10; // x0
  System_String_o *SAVE_KEY; // x20
  Il2CppObject *v12; // x21
  Il2CppObject *v13; // x0
  System_String_o *v14; // x0
  ServantStatusBattleListViewItem_o *p_seenList; // x20
  DialogMessageMaster_o *seenList; // t1
  System_Collections_Generic_List_int__o *v17; // x21
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t id; // w1
  __int64 v21; // x8
  _QWORD *v22; // x9
  __int64 MasterName_k__BackingField_low; // x10
  int32_t openedAt; // [xsp+8h] [xbp-28h] BYREF
  int32_t v25; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_49FC28D & 1) == 0 )
  {
    sub_1B640C8(&DialogMessageMaster_TypeInfo, entity);
    sub_1B640C8(&int_TypeInfo, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v7);
    this = (DialogMessageMaster_o *)sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v8);
    byte_49FC28D = 1;
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
    seenList = (DialogMessageMaster_o *)v4->fields.seenList;
    p_seenList = (ServantStatusBattleListViewItem_o *)&v4->fields.seenList;
    this = seenList;
    if ( seenList
      || (v17 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                            System_Collections_Generic_List_int__TypeInfo,
                                                            entity,
                                                            method),
          System_Collections_Generic_List_int____ctor(
            v17,
            (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__),
          p_seenList->klass = (ServantStatusBattleListViewItem_c *)v17,
          sub_1B6406C(p_seenList, (int32_t)v17, v18, v19),
          (this = (DialogMessageMaster_o *)p_seenList->klass) != 0LL) )
    {
      id = entity->fields.id;
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
            id,
            *(const MethodInfo_348FEDC **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
        }
        else
        {
          LODWORD(this->fields._MasterName_k__BackingField) = MasterName_k__BackingField_low + 1;
          *(_DWORD *)(v21 + 4 * MasterName_k__BackingField_low + 32) = id;
        }
        return;
      }
    }
LABEL_17:
    sub_1B64324(this);
  }
LABEL_7:
  v10 = DialogMessageMaster_TypeInfo;
  if ( !DialogMessageMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DialogMessageMaster_TypeInfo);
    v10 = DialogMessageMaster_TypeInfo;
  }
  SAVE_KEY = v10->static_fields->SAVE_KEY;
  v25 = entity->fields.id;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25);
  openedAt = entity->fields.openedAt;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &openedAt);
  v14 = System_String__Format_61389768(SAVE_KEY, v12, v13, 0LL);
  UnityEngine_PlayerPrefs__SetInt(v14, 1, 0LL);
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
  void *list; // x0
  int32_t Count; // w23
  __int64 v24; // x1
  __int64 v25; // x2
  System_Collections_Generic_List_object__o *v26; // x22
  int64_t Time; // x0
  __int64 v28; // x1
  const MethodInfo *v29; // x2
  int64_t v30; // x24
  int32_t v31; // w25
  Il2CppObject *Item; // x0
  DialogMessageEntity_o *v33; // x26
  __int64 methodPtr_low; // x10
  int32_t v35; // w3
  int32_t v36; // w4
  const MethodInfo *v37; // x5
  int32_t v38; // w3
  struct System_Object_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  Il2CppClass **v42; // x0
  System_Comparison_T__o *v43; // x21
  Il2CppObject *v44; // x23
  struct DialogMessageMaster___c_StaticFields *static_fields; // x0
  int32_t v46; // w2
  int32_t v47; // w3
  System_Object_array *v48; // x1
  const MethodInfo *v49; // x4

  if ( (byte_49FC28B & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&opType);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v11);
    sub_1B640C8(&System_Comparison_DialogMessageEntity__TypeInfo, v12);
    sub_1B640C8(&DialogMessageEntity_TypeInfo, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_DialogMessageEntity__Add__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_DialogMessageEntity__Sort__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_DialogMessageEntity__ToArray__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_DialogMessageEntity___ctor__, v17);
    sub_1B640C8(&System_Collections_Generic_List_DialogMessageEntity__TypeInfo, v18);
    sub_1B640C8(&NetworkManager_TypeInfo, v19);
    sub_1B640C8(&Method_DialogMessageMaster___c__ShowAvailables_b__7_0__, v20);
    sub_1B640C8(&DialogMessageMaster___c_TypeInfo, v21);
    byte_49FC28B = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_30;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v26 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_DialogMessageEntity__TypeInfo,
                                                       v24,
                                                       v25);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_DialogMessageEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( Count >= 1 )
  {
    v30 = Time;
    v31 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v31,
               (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v33 = (DialogMessageEntity_o *)Item;
        methodPtr_low = LOBYTE(DialogMessageEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (DialogMessageEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == DialogMessageEntity_TypeInfo
          && LODWORD(Item[1].monitor) == opType
          && DialogMessageEntity__IsOpenTime((DialogMessageEntity_o *)Item, v30, v29)
          && !DialogMessageMaster__IsSavedAsSeen(this, v33, v29) )
        {
          list = (void *)DialogMessageEntity__IsOpenCondition(v33, v28, (int32_t)v29, v35, v36, v37);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            if ( !v26 )
              break;
            items = v26->fields._items;
            v40 = Method_System_Collections_Generic_List_DialogMessageEntity__Add__;
            ++v26->fields._version;
            if ( !items )
              break;
            size = v26->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v26,
                (Il2CppObject *)v33,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
            }
            else
            {
              v42 = &items->obj.klass + size;
              v26->fields._size = size + 1;
              v42[4] = (Il2CppClass *)v33;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v42 + 4), (int32_t)v33, (int32_t)v29, v38);
            }
          }
        }
      }
      if ( Count == ++v31 )
        goto LABEL_22;
    }
LABEL_30:
    sub_1B64324(list);
  }
LABEL_22:
  list = DialogMessageMaster___c_TypeInfo;
  if ( !DialogMessageMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DialogMessageMaster___c_TypeInfo);
    list = DialogMessageMaster___c_TypeInfo;
  }
  v43 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 16LL);
  if ( !v43 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = DialogMessageMaster___c_TypeInfo;
    }
    v44 = (Il2CppObject *)**((_QWORD **)list + 23);
    v43 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_DialogMessageEntity__TypeInfo, v28, v29);
    System_Comparison_object____ctor(v43, v44, Method_DialogMessageMaster___c__ShowAvailables_b__7_0__, 0LL);
    static_fields = DialogMessageMaster___c_TypeInfo->static_fields;
    static_fields->__9__7_0 = (struct System_Comparison_DialogMessageEntity__o *)v43;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__7_0, (int32_t)v43, v46, v47);
  }
  if ( !v26 )
    goto LABEL_30;
  System_Collections_Generic_List_object___Sort_55243320(
    v26,
    v43,
    (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_DialogMessageEntity__Sort__);
  v48 = System_Collections_Generic_List_object___ToArray(
          v26,
          (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_DialogMessageEntity__ToArray__);
  DialogMessageMaster__ShowChain(this, (DialogMessageEntity_array *)v48, 0, callback, v49);
}


// local variable allocation has failed, the output may be wrong!
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
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w2
  int32_t v16; // w3
  __int64 v17; // x22
  int32_t v18; // w2
  int32_t v19; // w3
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x8
  __int64 v23; // x9
  int v24; // w10
  DialogMessageEntity_o *v25; // x20
  System_Action_o *v26; // x21
  const MethodInfo *v27; // x2

  if ( (byte_49FC28C & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, entitys);
    sub_1B640C8(&Method_DialogMessageMaster___c__DisplayClass8_0__ShowChain_b__0__, v9);
    sub_1B640C8(&DialogMessageMaster___c__DisplayClass8_0_TypeInfo, v10);
    byte_49FC28C = 1;
  }
  v11 = sub_1B64314(DialogMessageMaster___c__DisplayClass8_0_TypeInfo, entitys, *(_QWORD *)&idx);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_11;
  *(_QWORD *)(v11 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v11 + 16), (int32_t)this, v13, v14);
  *(_QWORD *)(v11 + 24) = entitys;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v11 + 24), (int32_t)entitys, v15, v16);
  *(_QWORD *)(v11 + 40) = callBack;
  v17 = v11 + 40;
  *(_DWORD *)(v11 + 32) = idx;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v11 + 40), (int32_t)callBack, v18, v19);
  v22 = *(_QWORD *)(v11 + 24);
  if ( !v22 )
    goto LABEL_11;
  v23 = *(int *)(v11 + 32);
  v24 = *(_DWORD *)(v22 + 24);
  if ( (int)v23 < v24 )
  {
    if ( (unsigned int)v23 >= v24 )
      sub_1B6432C(v12, v20);
    v25 = *(DialogMessageEntity_o **)(v22 + 8 * v23 + 32);
    v26 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v20, v21);
    System_Action___ctor(
      v26,
      (Il2CppObject *)v11,
      Method_DialogMessageMaster___c__DisplayClass8_0__ShowChain_b__0__,
      0LL);
    if ( v25 )
    {
      DialogMessageEntity__Open(v25, v26, v27);
      return;
    }
LABEL_11:
    sub_1B64324(v12);
  }
  if ( !*(_QWORD *)v17 )
    goto LABEL_11;
  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v17 + 24LL))(
    *(_QWORD *)(*(_QWORD *)v17 + 64LL),
    *(_QWORD *)(*(_QWORD *)v17 + 40LL));
}


void __fastcall DialogMessageMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FC290 & 1) == 0 )
  {
    sub_1B640C8(&DialogMessageMaster___c_TypeInfo, v1);
    byte_49FC290 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(DialogMessageMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  DialogMessageMaster___c_TypeInfo->static_fields->__9 = (struct DialogMessageMaster___c_o *)v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)DialogMessageMaster___c_TypeInfo->static_fields, (int32_t)v3, v4, v5);
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
    sub_1B64324(this);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall DialogMessageMaster___c___ShowAvailables_b__7_0(
        DialogMessageMaster___c_o *this,
        DialogMessageEntity_o *a,
        DialogMessageEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1B64324(this);
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
    sub_1B6432C(this, method);
  this = (DialogMessageMaster___c__DisplayClass8_0_o *)this->fields.__4__this;
  if ( !this
    || (DialogMessageMaster__SaveAsSeen((DialogMessageMaster_o *)this, entitys->m_Items[idx], v2),
        (this = (DialogMessageMaster___c__DisplayClass8_0_o *)v5->fields.__4__this) == 0LL) )
  {
LABEL_6:
    sub_1B64324(this);
  }
  DialogMessageMaster__ShowChain(
    (DialogMessageMaster_o *)this,
    v5->fields.entitys,
    v5->fields.idx + 1,
    v5->fields.callBack,
    v6);
}