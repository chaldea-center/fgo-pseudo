void __fastcall DialogMessageMaster___cctor(const MethodInfo *method)
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
  int64_t v12; // x1
  struct DialogMessageMaster_StaticFields *static_fields; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4B1606A & 1) == 0 )
  {
    sub_1BCA7E0(&DialogMessageMaster_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_18804/*"dialogMessage_{0}_{1}"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_23100/*"remindDialogMessage_{0}_{1}"*/, v10, v11);
    byte_4B1606A = 1;
  }
  DialogMessageMaster_TypeInfo->static_fields->SAVE_KEY = (struct System_String_o *)StringLiteral_18804/*"dialogMessage_{0}_{1}"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)DialogMessageMaster_TypeInfo->static_fields,
    StringLiteral_18804/*"dialogMessage_{0}_{1}"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v12 = StringLiteral_23100/*"remindDialogMessage_{0}_{1}"*/;
  static_fields = DialogMessageMaster_TypeInfo->static_fields;
  static_fields->SAVE_REMIND_KEY = (struct System_String_o *)StringLiteral_23100/*"remindDialogMessage_{0}_{1}"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->SAVE_REMIND_KEY, v12, v14, v15, v16, v17, v18, v19);
}


void __fastcall DialogMessageMaster___ctor(DialogMessageMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16064 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_DialogMessageMaster__DialogMessageEntity__int___ctor__, method, v2);
    byte_4B16064 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    228,
    (const MethodInfo_31B2E00 *)Method_DataMasterBase_DialogMessageMaster__DialogMessageEntity__int___ctor__);
}


void __fastcall DialogMessageMaster__DeleteContinueData(DialogMessageMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
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
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v17; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v20; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  __int64 v24; // x9
  int32_t *v25; // x10
  __int64 v26; // x0
  __int64 v27; // x0
  __int64 v28; // x1
  __int64 methodPtr_low; // x10
  _DWORD *v30; // x28
  DialogMessageMaster_c *v31; // x0
  System_String_o *SAVE_KEY; // x20
  Il2CppObject *v33; // x21
  Il2CppObject *v34; // x2
  System_String_o *v35; // x0
  System_String_o *SAVE_REMIND_KEY; // x20
  Il2CppObject *v37; // x21
  Il2CppObject *v38; // x2
  System_String_o *v39; // x0
  System_Collections_Generic_IEnumerator_T__c *v40; // x8
  __int64 v41; // x9
  int32_t *v42; // x10
  __int64 v43; // x0
  int v44; // [xsp+8h] [xbp-68h] BYREF
  int v45; // [xsp+Ch] [xbp-64h] BYREF
  int v46; // [xsp+18h] [xbp-58h] BYREF
  int v47; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_4B16065 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method, v2);
    sub_1BCA7E0(&DialogMessageEntity_TypeInfo, v4, v5);
    sub_1BCA7E0(&DialogMessageMaster_TypeInfo, v6, v7);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v8, v9);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v10, v11);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v12, v13);
    sub_1BCA7E0(&int_TypeInfo, v14, v15);
    byte_4B16065 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BCAA3C(0LL, method);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v17);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v20 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v20;
        p_offset += 4;
        if ( !v20 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v23 = Enumerator->klass;
    v24 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v25 = &v23->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v25 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v24;
        v25 += 4;
        if ( !v24 )
          goto LABEL_16;
      }
      v26 = (__int64)&v23->vtable[*v25].method;
    }
    else
    {
LABEL_16:
      v26 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v27 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(
            Enumerator,
            *(_QWORD *)(v26 + 8));
    if ( v27
      && (methodPtr_low = LOBYTE(DialogMessageEntity_TypeInfo->vtable._0_Equals.methodPtr),
          *(unsigned __int8 *)(*(_QWORD *)v27 + 304LL) >= (unsigned int)methodPtr_low) )
    {
      if ( *(DialogMessageEntity_c **)(*(_QWORD *)(*(_QWORD *)v27 + 200LL) + 8 * methodPtr_low - 8) == DialogMessageEntity_TypeInfo )
        v30 = (_DWORD *)v27;
      else
        v30 = 0LL;
    }
    else
    {
      v30 = 0LL;
    }
    v31 = DialogMessageMaster_TypeInfo;
    if ( !DialogMessageMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DialogMessageMaster_TypeInfo, v28);
      v31 = DialogMessageMaster_TypeInfo;
    }
    if ( !v30 )
      sub_1BCAA3C(v31, v28);
    SAVE_KEY = v31->static_fields->SAVE_KEY;
    v47 = v30[4];
    v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v47);
    v46 = v30[17];
    v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v46);
    v35 = System_String__Format_62415592(SAVE_KEY, v33, v34, 0LL);
    UnityEngine_PlayerPrefs__DeleteKey(v35, 0LL);
    SAVE_REMIND_KEY = DialogMessageMaster_TypeInfo->static_fields->SAVE_REMIND_KEY;
    v45 = v30[4];
    v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v45);
    v44 = v30[19];
    v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v44);
    v39 = System_String__Format_62415592(SAVE_REMIND_KEY, v37, v38, 0LL);
    UnityEngine_PlayerPrefs__DeleteKey(v39, 0LL);
  }
  v40 = Enumerator->klass;
  v41 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v42 = &v40->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v42 - 1) != System_IDisposable_TypeInfo )
    {
      --v41;
      v42 += 4;
      if ( !v41 )
        goto LABEL_32;
    }
    v43 = (__int64)&v40->vtable[*v42].method;
  }
  else
  {
LABEL_32:
    v43 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v43)(Enumerator, *(_QWORD *)(v43 + 8));
}


// local variable allocation has failed, the output may be wrong!
DialogMessageEntity_array *__fastcall DialogMessageMaster__GetDialogList(
        DialogMessageMaster_o *this,
        int32_t openType,
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
  System_Collections_Generic_List_object__o *v32; // x19
  __int64 v33; // x1
  int64_t Time; // x23
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  DialogMessageEntity_o *v38; // x0
  const MethodInfo *v39; // x1
  __int64 v40; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v42; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v45; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v48; // x8
  __int64 v49; // x9
  int32_t *v50; // x10
  __int64 v51; // x0
  DialogMessageEntity_o *v52; // x0
  const MethodInfo *v53; // x2
  DialogMessageEntity_o *v54; // x24
  __int64 methodPtr_low; // x10
  const MethodInfo *v56; // x2
  int32_t v57; // w1
  int32_t v58; // w2
  int32_t v59; // w3
  int32_t v60; // w4
  const MethodInfo *v61; // x5
  _BOOL8 IsOpenCondition; // x0
  __int64 v63; // x1
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  struct System_Object_array *items; // x8
  _QWORD *v71; // x9
  __int64 size; // x10
  Il2CppClass **v73; // x0
  System_Collections_Generic_IEnumerator_T__c *v74; // x8
  __int64 v75; // x9
  int32_t *v76; // x10
  __int64 v77; // x0
  __int64 v78; // x2
  __int64 v79; // x3
  DialogMessageMaster___c_c *v80; // x8
  System_Comparison_T__o *_9__6_0; // x20
  Il2CppObject *v82; // x21
  struct DialogMessageMaster___c_StaticFields *static_fields; // x0
  int64_t v84; // x2
  int32_t v85; // w3
  System_String_o *v86; // x4
  BattleSetupInfo_o *v87; // x5
  FollowerInfo_o *v88; // x6
  PartyListViewItem_o *v89; // x7

  if ( (byte_4B16066 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&openType,
      method);
    sub_1BCA7E0(&System_Comparison_DialogMessageEntity__TypeInfo, v6, v7);
    sub_1BCA7E0(&DialogMessageEntity_TypeInfo, v8, v9);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v10, v11);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v12, v13);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_DialogMessageEntity__Add__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_DialogMessageEntity__Sort__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_DialogMessageEntity__ToArray__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_DialogMessageEntity___ctor__, v22, v23);
    sub_1BCA7E0(&System_Collections_Generic_List_DialogMessageEntity__TypeInfo, v24, v25);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v26, v27);
    sub_1BCA7E0(&Method_DialogMessageMaster___c__GetDialogList_b__6_0__, v28, v29);
    sub_1BCA7E0(&DialogMessageMaster___c_TypeInfo, v30, v31);
    byte_4B16066 = 1;
  }
  v32 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_DialogMessageEntity__TypeInfo,
                                                       *(_QWORD *)&openType,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v32,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_DialogMessageEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v33);
  Time = NetworkManager__getTime(0LL);
  v38 = (DialogMessageEntity_o *)sub_1BCAA2C(DialogMessageEntity_TypeInfo, v35, v36, v37);
  DialogMessageEntity___ctor(v38, v39);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_46;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v42);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v45 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v45;
        p_offset += 4;
        if ( !v45 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v48 = Enumerator->klass;
    v49 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v50 = &v48->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v50 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v49;
        v50 += 4;
        if ( !v49 )
          goto LABEL_18;
      }
      v51 = (__int64)&v48->vtable[*v50].method;
    }
    else
    {
LABEL_18:
      v51 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v52 = (DialogMessageEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v51)(
                                     Enumerator,
                                     *(_QWORD *)(v51 + 8));
    v54 = v52;
    if ( v52 )
    {
      methodPtr_low = LOBYTE(DialogMessageEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v52->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (DialogMessageEntity_c *)v52->klass->_2.typeHierarchy[methodPtr_low - 1] == DialogMessageEntity_TypeInfo
        && v52->fields.dialogOpenType == openType
        && DialogMessageEntity__IsOpenTime(v52, Time, v53)
        && !DialogMessageMaster__IsSavedAsSeen(this, v54, v56) )
      {
        IsOpenCondition = DialogMessageEntity__IsOpenCondition(v54, v57, v58, v59, v60, v61);
        if ( IsOpenCondition )
        {
          if ( !v32 )
            sub_1BCAA3C(IsOpenCondition, v63);
          items = v32->fields._items;
          v71 = Method_System_Collections_Generic_List_DialogMessageEntity__Add__;
          ++v32->fields._version;
          if ( !items )
            sub_1BCAA3C(IsOpenCondition, v63);
          size = v32->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v32,
              (Il2CppObject *)v54,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
          }
          else
          {
            v73 = &items->obj.klass + size;
            v32->fields._size = size + 1;
            v73[4] = (Il2CppClass *)v54;
            sub_1BCA784((PartyOrganizationUtility_o *)(v73 + 4), (int64_t)v54, v64, v65, v66, v67, v68, v69);
          }
        }
      }
    }
  }
  v74 = Enumerator->klass;
  v75 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v76 = &v74->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v76 - 1) != System_IDisposable_TypeInfo )
    {
      --v75;
      v76 += 4;
      if ( !v75 )
        goto LABEL_36;
    }
    v77 = (__int64)&v74->vtable[*v76].method;
  }
  else
  {
LABEL_36:
    v77 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v77)(
                                                             Enumerator,
                                                             *(_QWORD *)(v77 + 8));
  v80 = DialogMessageMaster___c_TypeInfo;
  if ( !DialogMessageMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DialogMessageMaster___c_TypeInfo, v40);
    v80 = DialogMessageMaster___c_TypeInfo;
  }
  _9__6_0 = (System_Comparison_T__o *)v80->static_fields->__9__6_0;
  if ( !_9__6_0 )
  {
    if ( !v80->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v80, v40);
      v80 = DialogMessageMaster___c_TypeInfo;
    }
    v82 = (Il2CppObject *)v80->static_fields->__9;
    _9__6_0 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_DialogMessageEntity__TypeInfo, v40, v78, v79);
    System_Comparison_object____ctor(_9__6_0, v82, Method_DialogMessageMaster___c__GetDialogList_b__6_0__, 0LL);
    static_fields = DialogMessageMaster___c_TypeInfo->static_fields;
    static_fields->__9__6_0 = (struct System_Comparison_DialogMessageEntity__o *)_9__6_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__6_0, (int64_t)_9__6_0, v84, v85, v86, v87, v88, v89);
  }
  if ( !v32 )
LABEL_46:
    sub_1BCAA3C(list, v40);
  System_Collections_Generic_List_object___Sort_56244000(
    v32,
    _9__6_0,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_DialogMessageEntity__Sort__);
  return (DialogMessageEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        v32,
                                        (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_DialogMessageEntity__ToArray__);
}


bool __fastcall DialogMessageMaster__IsSavedAsSeen(
        DialogMessageMaster_o *this,
        DialogMessageEntity_o *entity,
        const MethodInfo *method)
{
  DialogMessageMaster_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  int32_t frequencyType; // w8
  DialogMessageMaster_c *v12; // x0
  System_String_o *v13; // x20
  Il2CppObject *v14; // x21
  Il2CppObject *v15; // x0
  System_String_o *v16; // x0
  System_Collections_Generic_List_int__o *seenList; // x0
  DialogMessageMaster_c *v18; // x0
  System_String_o *SAVE_KEY; // x20
  Il2CppObject *v20; // x21
  Il2CppObject *v21; // x0
  System_String_o *v22; // x0
  __int64 v23; // x1
  int32_t Int; // w20
  DialogMessageEntity_o *Time; // x0
  const MethodInfo *v26; // x4
  bool IsOpenTimeInSpecifiedTimeRange; // w0
  __int64 v28; // x1
  DialogMessageMaster_c *v29; // x0
  System_String_o *v30; // x20
  Il2CppObject *v31; // x21
  Il2CppObject *v32; // x0
  System_String_o *v33; // x0
  __int64 v34; // x1
  DialogMessageMaster_c *v35; // x0
  System_String_o *SAVE_REMIND_KEY; // x20
  Il2CppObject *v37; // x21
  Il2CppObject *v38; // x0
  System_String_o *v39; // x0
  __int64 v40; // x1
  DialogMessageMaster_c *v41; // x0
  System_String_o *v42; // x20
  Il2CppObject *v43; // x21
  System_Int32_c *v44; // x0
  int32_t *p_openedAt; // x1
  DialogMessageMaster_c *v46; // x0
  System_String_o *v47; // x20
  Il2CppObject *v48; // x21
  Il2CppObject *v49; // x0
  System_String_o *v50; // x0
  Il2CppObject *v51; // x0
  System_String_o *v52; // x0
  int32_t remindAt; // [xsp+0h] [xbp-40h] BYREF
  int32_t v55; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t openedAt; // [xsp+8h] [xbp-38h] BYREF
  int32_t id; // [xsp+Ch] [xbp-34h] BYREF

  v4 = this;
  if ( (byte_4B16069 & 1) == 0 )
  {
    sub_1BCA7E0(&DialogMessageMaster_TypeInfo, entity, method);
    sub_1BCA7E0(&int_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Contains__, v7, v8);
    this = (DialogMessageMaster_o *)sub_1BCA7E0(&NetworkManager_TypeInfo, v9, v10);
    byte_4B16069 = 1;
  }
  if ( !entity )
    sub_1BCAA3C(this, entity);
  frequencyType = entity->fields.frequencyType;
  if ( frequencyType == 7 )
  {
    v18 = DialogMessageMaster_TypeInfo;
    if ( !DialogMessageMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DialogMessageMaster_TypeInfo, entity);
      v18 = DialogMessageMaster_TypeInfo;
    }
    SAVE_KEY = v18->static_fields->SAVE_KEY;
    id = entity->fields.id;
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id);
    openedAt = entity->fields.openedAt;
    v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &openedAt);
    v22 = System_String__Format_62415592(SAVE_KEY, v20, v21, 0LL);
    Int = UnityEngine_PlayerPrefs__GetInt(v22, 0, 0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v23);
    Time = (DialogMessageEntity_o *)NetworkManager__getTime(0LL);
    IsOpenTimeInSpecifiedTimeRange = DialogMessageEntity__IsOpenTimeInSpecifiedTimeRange(
                                       Time,
                                       entity->fields.remindAt,
                                       entity->fields.closedAt,
                                       (int64_t)Time,
                                       v26);
    if ( Int < 1 )
    {
      if ( !IsOpenTimeInSpecifiedTimeRange )
        goto LABEL_34;
      v35 = DialogMessageMaster_TypeInfo;
      if ( !DialogMessageMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DialogMessageMaster_TypeInfo, v28);
        v35 = DialogMessageMaster_TypeInfo;
      }
      SAVE_REMIND_KEY = v35->static_fields->SAVE_REMIND_KEY;
      id = entity->fields.id;
      v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id);
      openedAt = entity->fields.remindAt;
      v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &openedAt);
      v39 = System_String__Format_62415592(SAVE_REMIND_KEY, v37, v38, 0LL);
      if ( UnityEngine_PlayerPrefs__GetInt(v39, 0, 0LL) > 0 )
        goto LABEL_34;
      v41 = DialogMessageMaster_TypeInfo;
      if ( !DialogMessageMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DialogMessageMaster_TypeInfo, v40);
        v41 = DialogMessageMaster_TypeInfo;
      }
      v42 = v41->static_fields->SAVE_REMIND_KEY;
      id = entity->fields.id;
      v43 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id);
      v44 = int_TypeInfo;
      p_openedAt = &openedAt;
      openedAt = entity->fields.remindAt;
    }
    else
    {
      if ( !IsOpenTimeInSpecifiedTimeRange )
        goto LABEL_22;
      v29 = DialogMessageMaster_TypeInfo;
      if ( !DialogMessageMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DialogMessageMaster_TypeInfo, v28);
        v29 = DialogMessageMaster_TypeInfo;
      }
      v30 = v29->static_fields->SAVE_REMIND_KEY;
      id = entity->fields.id;
      v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id);
      openedAt = entity->fields.remindAt;
      v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &openedAt);
      v33 = System_String__Format_62415592(v30, v31, v32, 0LL);
      if ( UnityEngine_PlayerPrefs__GetInt(v33, 0, 0LL) > 0 )
      {
LABEL_22:
        LOBYTE(seenList) = 1;
        return (char)seenList;
      }
      v46 = DialogMessageMaster_TypeInfo;
      if ( !DialogMessageMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DialogMessageMaster_TypeInfo, v34);
        v46 = DialogMessageMaster_TypeInfo;
      }
      v47 = v46->static_fields->SAVE_KEY;
      id = entity->fields.id;
      v48 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id);
      openedAt = entity->fields.openedAt;
      v49 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &openedAt);
      v50 = System_String__Format_62415592(v47, v48, v49, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v50, 0LL);
      v42 = DialogMessageMaster_TypeInfo->static_fields->SAVE_REMIND_KEY;
      v55 = entity->fields.id;
      v43 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v55);
      v44 = int_TypeInfo;
      p_openedAt = &remindAt;
      remindAt = entity->fields.remindAt;
    }
    v51 = (Il2CppObject *)j_il2cpp_value_box_0(v44, p_openedAt);
    v52 = System_String__Format_62415592(v42, v43, v51, 0LL);
    UnityEngine_PlayerPrefs__SetInt(v52, 1, 0LL);
LABEL_34:
    LOBYTE(seenList) = 0;
    return (char)seenList;
  }
  if ( frequencyType != 3 )
  {
    if ( frequencyType != 1 )
      goto LABEL_34;
    v12 = DialogMessageMaster_TypeInfo;
    if ( !DialogMessageMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DialogMessageMaster_TypeInfo, entity);
      v12 = DialogMessageMaster_TypeInfo;
    }
    v13 = v12->static_fields->SAVE_KEY;
    id = entity->fields.id;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id);
    openedAt = entity->fields.openedAt;
    v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &openedAt);
    v16 = System_String__Format_62415592(v13, v14, v15, 0LL);
    if ( UnityEngine_PlayerPrefs__GetInt(v16, 0, 0LL) < 1 )
      goto LABEL_34;
    goto LABEL_22;
  }
  seenList = v4->fields.seenList;
  if ( seenList )
    LOBYTE(seenList) = System_Collections_Generic_List_int___Contains(
                         seenList,
                         entity->fields.id,
                         (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__);
  return (char)seenList;
}


void __fastcall DialogMessageMaster__SaveAsSeen(
        DialogMessageMaster_o *this,
        DialogMessageEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v3; // x3
  DialogMessageEntity_o *v4; // x19
  DialogMessageMaster_o *v5; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  int32_t frequencyType; // w8
  DialogMessageMaster_c *v15; // x0
  System_String_o *SAVE_KEY; // x20
  Il2CppObject *v17; // x21
  Il2CppObject *v18; // x0
  System_String_o *v19; // x0
  PartyOrganizationUtility_o *p_seenList; // x20
  DialogMessageMaster_o *seenList; // t1
  System_Collections_Generic_List_int__o *v22; // x21
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  __int64 v29; // x8
  _QWORD *v30; // x9
  __int64 MasterName_k__BackingField_low; // x10
  int32_t openedAt; // [xsp+8h] [xbp-28h] BYREF
  int32_t id; // [xsp+Ch] [xbp-24h] BYREF

  v4 = entity;
  v5 = this;
  if ( (byte_4B16068 & 1) == 0 )
  {
    sub_1BCA7E0(&DialogMessageMaster_TypeInfo, entity, method);
    sub_1BCA7E0(&int_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v10, v11);
    this = (DialogMessageMaster_o *)sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v12, v13);
    byte_4B16068 = 1;
  }
  if ( !v4 )
    goto LABEL_17;
  frequencyType = v4->fields.frequencyType;
  if ( frequencyType != 7 )
  {
    if ( frequencyType != 3 )
    {
      if ( frequencyType != 1 )
        return;
      goto LABEL_7;
    }
    seenList = (DialogMessageMaster_o *)v5->fields.seenList;
    p_seenList = (PartyOrganizationUtility_o *)&v5->fields.seenList;
    this = seenList;
    if ( seenList
      || (v22 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                            System_Collections_Generic_List_int__TypeInfo,
                                                            entity,
                                                            method,
                                                            v3),
          System_Collections_Generic_List_int____ctor(
            v22,
            (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__),
          p_seenList->klass = (PartyOrganizationUtility_c *)v22,
          sub_1BCA784(p_seenList, (int64_t)v22, v23, v24, v25, v26, v27, v28),
          (this = (DialogMessageMaster_o *)p_seenList->klass) != 0LL) )
    {
      entity = (DialogMessageEntity_o *)(unsigned int)v4->fields.id;
      v29 = *(_QWORD *)&this->fields._MasterKind_k__BackingField;
      v30 = Method_System_Collections_Generic_List_int__Add__;
      ++HIDWORD(this->fields._MasterName_k__BackingField);
      if ( v29 )
      {
        MasterName_k__BackingField_low = SLODWORD(this->fields._MasterName_k__BackingField);
        if ( (unsigned int)MasterName_k__BackingField_low >= *(_DWORD *)(v29 + 24) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            (System_Collections_Generic_List_int__o *)this,
            (int32_t)entity,
            *(const MethodInfo_3584C38 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
        }
        else
        {
          LODWORD(this->fields._MasterName_k__BackingField) = MasterName_k__BackingField_low + 1;
          *(_DWORD *)(v29 + 4 * MasterName_k__BackingField_low + 32) = (_DWORD)entity;
        }
        return;
      }
    }
LABEL_17:
    sub_1BCAA3C(this, entity);
  }
LABEL_7:
  v15 = DialogMessageMaster_TypeInfo;
  if ( !DialogMessageMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DialogMessageMaster_TypeInfo, entity);
    v15 = DialogMessageMaster_TypeInfo;
  }
  SAVE_KEY = v15->static_fields->SAVE_KEY;
  id = v4->fields.id;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id);
  openedAt = v4->fields.openedAt;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &openedAt);
  v19 = System_String__Format_62415592(SAVE_KEY, v17, v18, 0LL);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall DialogMessageMaster__ShowChain(
        DialogMessageMaster_o *this,
        DialogMessageEntity_array *entitys,
        int32_t idx,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x19
  __int64 v14; // x0
  __int64 v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  __int64 v28; // x22
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x8
  __int64 v38; // x9
  int v39; // w10
  DialogMessageEntity_o *v40; // x20
  System_Action_o *v41; // x21
  const MethodInfo *v42; // x2

  if ( (byte_4B16067 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, entitys, *(_QWORD *)&idx);
    sub_1BCA7E0(&Method_DialogMessageMaster___c__DisplayClass8_0__ShowChain_b__0__, v9, v10);
    sub_1BCA7E0(&DialogMessageMaster___c__DisplayClass8_0_TypeInfo, v11, v12);
    byte_4B16067 = 1;
  }
  v13 = sub_1BCAA2C(DialogMessageMaster___c__DisplayClass8_0_TypeInfo, entitys, *(_QWORD *)&idx, callBack);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_11;
  *(_QWORD *)(v13 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v13 + 16), (int64_t)this, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v13 + 24) = entitys;
  sub_1BCA784((PartyOrganizationUtility_o *)(v13 + 24), (int64_t)entitys, v22, v23, v24, v25, v26, v27);
  *(_QWORD *)(v13 + 40) = callBack;
  v28 = v13 + 40;
  *(_DWORD *)(v13 + 32) = idx;
  sub_1BCA784((PartyOrganizationUtility_o *)(v13 + 40), (int64_t)callBack, v29, v30, v31, v32, v33, v34);
  v37 = *(_QWORD *)(v13 + 24);
  if ( !v37 )
    goto LABEL_11;
  v38 = *(int *)(v13 + 32);
  v39 = *(_DWORD *)(v37 + 24);
  if ( (int)v38 < v39 )
  {
    if ( (unsigned int)v38 >= v39 )
      sub_1BCAA44(v14, v15);
    v40 = *(DialogMessageEntity_o **)(v37 + 8 * v38 + 32);
    v41 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v15, v35, v36);
    System_Action___ctor(
      v41,
      (Il2CppObject *)v13,
      Method_DialogMessageMaster___c__DisplayClass8_0__ShowChain_b__0__,
      0LL);
    if ( v40 )
    {
      DialogMessageEntity__Open(v40, v41, v42);
      return;
    }
LABEL_11:
    sub_1BCAA3C(v14, v15);
  }
  if ( !*(_QWORD *)v28 )
    goto LABEL_11;
  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v28 + 24LL))(
    *(_QWORD *)(*(_QWORD *)v28 + 64LL),
    *(_QWORD *)(*(_QWORD *)v28 + 40LL));
}


void __fastcall DialogMessageMaster___c___cctor(const MethodInfo *method)
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

  if ( (byte_4B1606B & 1) == 0 )
  {
    sub_1BCA7E0(&DialogMessageMaster___c_TypeInfo, v1, v2);
    byte_4B1606B = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(DialogMessageMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  DialogMessageMaster___c_TypeInfo->static_fields->__9 = (struct DialogMessageMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)DialogMessageMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, a);
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
    sub_1BCAA44(this, method);
  this = (DialogMessageMaster___c__DisplayClass8_0_o *)this->fields.__4__this;
  if ( !this
    || (DialogMessageMaster__SaveAsSeen((DialogMessageMaster_o *)this, entitys->m_Items[idx], v2),
        (this = (DialogMessageMaster___c__DisplayClass8_0_o *)v5->fields.__4__this) == 0LL) )
  {
LABEL_6:
    sub_1BCAA3C(this, method);
  }
  DialogMessageMaster__ShowChain(
    (DialogMessageMaster_o *)this,
    v5->fields.entitys,
    v5->fields.idx + 1,
    v5->fields.callBack,
    v6);
}