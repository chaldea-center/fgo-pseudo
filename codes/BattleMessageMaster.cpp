void BattleMessageMaster___ctor(BattleMessageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_59382BA & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_BattleMessageMaster__BattleMessageEntity__string___ctor__);
    byte_59382BA = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    417,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_BattleMessageMaster__BattleMessageEntity__string___ctor__);
}


BattleActionData_DisplayMessageData_array *BattleMessageMaster__GetDisplayMessageArray(
        BattleMessageMaster_o *this,
        int32_t id,
        ParseBattleMessage_o *parser,
        int32_t actorId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v9; // x20
  BattleMessageEntity_array *Entities; // x0
  __int64 v11; // x1
  BattleData_o *Data; // x0
  const MethodInfo *v13; // x4
  il2cpp_array_size_t max_length; // x8
  BattleMessageEntity_array *v15; // x21
  BattleActionData_DisplayMessageData_o *v16; // x22
  unsigned __int64 v17; // x25
  BattleMessageEntity_o *v18; // x24
  BattleActionData_DisplayMessageData_o *v19; // x23
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0

  if ( (byte_59382BE & 1) == 0 )
  {
    sub_21FFC50(&BattleActionData_DisplayMessageData_TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_LastOrDefault_BattleActionData_DisplayMessageData___);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleActionData_DisplayMessageData__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleActionData_DisplayMessageData__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleActionData_DisplayMessageData___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_BattleActionData_DisplayMessageData__TypeInfo);
    byte_59382BE = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_BattleActionData_DisplayMessageData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_BattleActionData_DisplayMessageData___ctor__);
  if ( !parser )
    goto LABEL_18;
  Data = ParseBattleMessage__get_Data(parser, 0);
  Entities = BattleMessageMaster__GetEntities(this, id, Data, actorId, v13);
  if ( !Entities )
    goto LABEL_18;
  max_length = Entities->max_length;
  v15 = Entities;
  if ( (int)max_length >= 1 )
  {
    v16 = 0;
    v17 = 0;
    while ( 1 )
    {
      if ( v17 >= (unsigned int)max_length )
        sub_21FFED4(Entities);
      v18 = v15->m_Items[v17];
      v19 = (BattleActionData_DisplayMessageData_o *)sub_21FFEBC(BattleActionData_DisplayMessageData_TypeInfo);
      BattleActionData_DisplayMessageData___ctor(v19, v18, parser, v16, 0);
      if ( !v9 )
        break;
      items = v9->fields._items;
      v27 = Method_System_Collections_Generic_List_BattleActionData_DisplayMessageData__Add__;
      ++v9->fields._version;
      if ( !items )
        break;
      size = v9->fields._size;
      v16 = v19;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v9,
          (Il2CppObject *)v19,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
      }
      else
      {
        v29 = &items->obj.klass + size;
        v9->fields._size = size + 1;
        v29[4] = (Il2CppClass *)v19;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v29 + 4), (int32_t)v19, v20, v21, v22, v23, v24, v25);
      }
      LODWORD(max_length) = v15->max_length;
      if ( (__int64)++v17 >= (int)max_length )
        goto LABEL_14;
    }
LABEL_18:
    sub_21FFECC(Entities, v11);
  }
LABEL_14:
  Entities = (BattleMessageEntity_array *)System_Linq_Enumerable__LastOrDefault_object_(
                                            (System_Collections_Generic_IEnumerable_TSource__o *)v9,
                                            (const MethodInfo_3852770 *)Method_System_Linq_Enumerable_LastOrDefault_BattleActionData_DisplayMessageData___);
  if ( Entities )
    BattleActionData_DisplayMessageData__ResetIntervalTime((BattleActionData_DisplayMessageData_o *)Entities, 0);
  if ( !v9 )
    goto LABEL_18;
  return (BattleActionData_DisplayMessageData_array *)System_Collections_Generic_List_object___ToArray(
                                                        v9,
                                                        (const MethodInfo_445164C *)Method_System_Collections_Generic_List_BattleActionData_DisplayMessageData__ToArray__);
}


BattleMessageEntity_array *BattleMessageMaster__GetEntities(
        BattleMessageMaster_o *this,
        int32_t id,
        BattleData_o *battleData,
        int32_t actorId,
        const MethodInfo *method)
{
  __int64 v9; // x23
  System_Linq_IOrderedEnumerable_TSource__o *v10; // x0
  __int64 v11; // x1
  BattleServantData_o *ServantData; // x21
  System_Collections_Generic_List_object__o *v13; // x19
  __int64 v14; // x1
  BattleMessageMaster___c_c *v15; // x0
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x22
  struct BattleMessageMaster___c_StaticFields *static_fields; // x8
  System_Func_object__object__o *_9__3_0; // x24
  Il2CppObject *v19; // x25
  struct BattleMessageMaster___c_StaticFields *v20; // x0
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x22
  System_Func_object__bool__o *v28; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0
  __int64 v30; // x1
  BattleMessageMaster___c_c *v31; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x22
  struct BattleMessageMaster___c_StaticFields *v33; // x9
  System_Func_object__int__o *_9__3_2; // x23
  Il2CppObject *v35; // x24
  struct BattleMessageMaster___c_StaticFields *v36; // x0
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  System_Linq_IOrderedEnumerable_TSource__o *v43; // x0
  __int64 v44; // x1
  BattleMessageMaster___c_c *v45; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v46; // x22
  struct BattleMessageMaster___c_StaticFields *v47; // x9
  System_Func_object__int__o *_9__3_3; // x23
  Il2CppObject *v49; // x24
  struct BattleMessageMaster___c_StaticFields *v50; // x0
  System_String_o *v51; // x2
  System_String_o *v52; // x3
  int32_t v53; // w4
  int32_t v54; // w5
  bool v55; // w6
  bool v56; // w7
  System_Linq_IOrderedEnumerable_TSource__c *klass; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v58; // x22
  __int64 v59; // x9
  int32_t *p_offset; // x10
  __int64 v61; // x0
  __int64 v62; // x0
  __int64 v63; // x1
  __int64 v64; // x22
  int v65; // w27
  __int64 v66; // x8
  __int64 v67; // x9
  int *v68; // x10
  __int64 v69; // x0
  __int64 v70; // x0
  __int64 v71; // x8
  __int64 v72; // x9
  int *v73; // x10
  __int64 v74; // x0
  __int64 v75; // x0
  __int64 v76; // x1
  System_String_o *v77; // x2
  System_String_o *v78; // x3
  int32_t v79; // w4
  int32_t v80; // w5
  bool v81; // w6
  bool v82; // w7
  __int64 v83; // x23
  __int64 IsOpenInBattle; // x0
  struct System_Object_array *items; // x8
  _QWORD *v86; // x9
  __int64 size; // x10
  Il2CppClass **v88; // x0
  __int64 v89; // x8
  __int64 v90; // x9
  int *v91; // x10
  __int64 v92; // x0
  __int64 v94; // [xsp+18h] [xbp-68h]

  if ( (byte_59382BD & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_OrderBy_BattleMessageEntity__int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Select_BattleMessageEntity__BattleMessageEntity___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ThenByDescending_BattleMessageEntity__int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_BattleMessageEntity___);
    sub_21FFC50(&System_Func_BattleMessageEntity__BattleMessageEntity__TypeInfo);
    sub_21FFC50(&System_Func_BattleMessageEntity__bool__TypeInfo);
    sub_21FFC50(&System_Func_BattleMessageEntity__int__TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerable_BattleMessageEntity__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_BattleMessageEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleMessageEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleMessageEntity__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleMessageEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_BattleMessageEntity__TypeInfo);
    sub_21FFC50(&Method_BattleMessageMaster___c__GetEntities_b__3_0__);
    sub_21FFC50(&Method_BattleMessageMaster___c__GetEntities_b__3_2__);
    sub_21FFC50(&Method_BattleMessageMaster___c__GetEntities_b__3_3__);
    sub_21FFC50(&Method_BattleMessageMaster___c__DisplayClass3_0__GetEntities_b__1__);
    sub_21FFC50(&BattleMessageMaster___c__DisplayClass3_0_TypeInfo);
    sub_21FFC50(&BattleMessageMaster___c_TypeInfo);
    byte_59382BD = 1;
  }
  v9 = sub_21FFEBC(BattleMessageMaster___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_71;
  *(_DWORD *)(v9 + 16) = id;
  if ( !battleData )
    goto LABEL_71;
  ServantData = BattleData__getServantData(battleData, actorId, 0);
  v13 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_BattleMessageEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_BattleMessageEntity___ctor__);
  v15 = BattleMessageMaster___c_TypeInfo;
  list = this->fields.list;
  if ( !*(&BattleMessageMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleMessageMaster___c_TypeInfo, v14);
    v15 = BattleMessageMaster___c_TypeInfo;
  }
  static_fields = v15->static_fields;
  _9__3_0 = (System_Func_object__object__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !*(&v15->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v15, v14);
      static_fields = BattleMessageMaster___c_TypeInfo->static_fields;
    }
    v19 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Func_object__object__o *)sub_21FFEBC(System_Func_BattleMessageEntity__BattleMessageEntity__TypeInfo);
    System_Func_object__object____ctor(_9__3_0, v19, Method_BattleMessageMaster___c__GetEntities_b__3_0__, 0);
    v20 = BattleMessageMaster___c_TypeInfo->static_fields;
    v20->__9__3_0 = (struct System_Func_BattleMessageEntity__BattleMessageEntity__o *)_9__3_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v20->__9__3_0, (int32_t)_9__3_0, v21, v22, v23, v24, v25, v26);
  }
  v27 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__3_0,
                                                               (const MethodInfo_385DD00 *)Method_System_Linq_Enumerable_Select_BattleMessageEntity__BattleMessageEntity___);
  v28 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_BattleMessageEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v28,
    (Il2CppObject *)v9,
    Method_BattleMessageMaster___c__DisplayClass3_0__GetEntities_b__1__,
    0);
  v29 = System_Linq_Enumerable__Where_object_(
          v27,
          (System_Func_TSource__bool__o *)v28,
          (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_BattleMessageEntity___);
  v31 = BattleMessageMaster___c_TypeInfo;
  v32 = v29;
  if ( !*(&BattleMessageMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleMessageMaster___c_TypeInfo, v30);
    v31 = BattleMessageMaster___c_TypeInfo;
  }
  v33 = v31->static_fields;
  _9__3_2 = (System_Func_object__int__o *)v33->__9__3_2;
  if ( !_9__3_2 )
  {
    if ( !*(&v31->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v31, v30);
      v33 = BattleMessageMaster___c_TypeInfo->static_fields;
    }
    v35 = (Il2CppObject *)v33->__9;
    _9__3_2 = (System_Func_object__int__o *)sub_21FFEBC(System_Func_BattleMessageEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__3_2, v35, Method_BattleMessageMaster___c__GetEntities_b__3_2__, 0);
    v36 = BattleMessageMaster___c_TypeInfo->static_fields;
    v36->__9__3_2 = (struct System_Func_BattleMessageEntity__int__o *)_9__3_2;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v36->__9__3_2, (int32_t)_9__3_2, v37, v38, v39, v40, v41, v42);
  }
  v43 = System_Linq_Enumerable__OrderBy_object__int_(
          v32,
          (System_Func_TSource__TKey__o *)_9__3_2,
          (const MethodInfo_38556D8 *)Method_System_Linq_Enumerable_OrderBy_BattleMessageEntity__int___);
  v45 = BattleMessageMaster___c_TypeInfo;
  v46 = v43;
  if ( !*(&BattleMessageMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleMessageMaster___c_TypeInfo, v44);
    v45 = BattleMessageMaster___c_TypeInfo;
  }
  v47 = v45->static_fields;
  _9__3_3 = (System_Func_object__int__o *)v47->__9__3_3;
  if ( !_9__3_3 )
  {
    if ( !*(&v45->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v45, v44);
      v47 = BattleMessageMaster___c_TypeInfo->static_fields;
    }
    v49 = (Il2CppObject *)v47->__9;
    _9__3_3 = (System_Func_object__int__o *)sub_21FFEBC(System_Func_BattleMessageEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__3_3, v49, Method_BattleMessageMaster___c__GetEntities_b__3_3__, 0);
    v50 = BattleMessageMaster___c_TypeInfo->static_fields;
    v50->__9__3_3 = (struct System_Func_BattleMessageEntity__int__o *)_9__3_3;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v50->__9__3_3, (int32_t)_9__3_3, v51, v52, v53, v54, v55, v56);
  }
  v10 = System_Linq_Enumerable__ThenByDescending_object__int_(
          v46,
          (System_Func_TSource__TKey__o *)_9__3_3,
          (const MethodInfo_3867EF4 *)Method_System_Linq_Enumerable_ThenByDescending_BattleMessageEntity__int___);
  if ( !v10 )
    goto LABEL_71;
  klass = v10->klass;
  v58 = v10;
  v59 = *(unsigned __int16 *)&v10->klass->_2.rank;
  if ( *(_WORD *)&v10->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleMessageEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleMessageEntity__TypeInfo )
    {
      --v59;
      p_offset += 4;
      if ( !v59 )
        goto LABEL_28;
    }
    v61 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_28:
    v61 = sub_2237E2C(v10, System_Collections_Generic_IEnumerable_BattleMessageEntity__TypeInfo, 0);
  }
  v62 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))v61)(v58, *(_QWORD *)(v61 + 8));
  v94 = v62;
  if ( !v62 )
    sub_21FFECC(v62, v63);
  v64 = v62;
  v65 = -1;
  while ( 1 )
  {
    v66 = *(_QWORD *)v64;
    v67 = *(unsigned __int16 *)(*(_QWORD *)v64 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v64 + 302LL) )
    {
      v68 = (int *)(*(_QWORD *)(v66 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v68 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v67;
        v68 += 4;
        if ( !v67 )
          goto LABEL_36;
      }
      v69 = v66 + 16LL * *v68 + 312;
    }
    else
    {
LABEL_36:
      v69 = sub_2237E2C(v64, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v70 = (*(__int64 (__fastcall **)(__int64, _QWORD))v69)(v64, *(_QWORD *)(v69 + 8));
    if ( (v70 & 1) == 0 )
      break;
    if ( !v94 )
      sub_21FFECC(v70, v11);
    v71 = *(_QWORD *)v94;
    v72 = *(unsigned __int16 *)(*(_QWORD *)v94 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v94 + 302LL) )
    {
      v73 = (int *)(*(_QWORD *)(v71 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleMessageEntity__c **)v73 - 1) != System_Collections_Generic_IEnumerator_BattleMessageEntity__TypeInfo )
      {
        --v72;
        v73 += 4;
        if ( !v72 )
          goto LABEL_44;
      }
      v74 = v71 + 16LL * *v73 + 312;
    }
    else
    {
LABEL_44:
      v74 = sub_2237E2C(v94, System_Collections_Generic_IEnumerator_BattleMessageEntity__TypeInfo, 0);
    }
    v75 = (*(__int64 (__fastcall **)(__int64, _QWORD))v74)(v94, *(_QWORD *)(v74 + 8));
    v83 = v75;
    if ( !v75 )
      sub_21FFECC(0, v76);
    if ( v65 != *(_DWORD *)(v75 + 20)
      && ((IsOpenInBattle = *(unsigned int *)(v75 + 28), (int)IsOpenInBattle < 1)
       || (IsOpenInBattle = CommonReleaseExtension__IsOpenInBattle(IsOpenInBattle, battleData, ServantData, 0, 0, 0),
           (IsOpenInBattle & 1) != 0)) )
    {
      if ( !v13
        || (items = v13->fields._items,
            v86 = Method_System_Collections_Generic_List_BattleMessageEntity__Add__,
            ++v13->fields._version,
            !items) )
      {
        sub_21FFECC(IsOpenInBattle, v76);
      }
      size = v13->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v13,
          (Il2CppObject *)v83,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v86[4] + 192LL) + 112LL));
      }
      else
      {
        v88 = &items->obj.klass + size;
        v13->fields._size = size + 1;
        v88[4] = (Il2CppClass *)v83;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v88 + 4), v83, v77, v78, v79, v80, v81, v82);
      }
      v64 = v94;
      v65 = *(_DWORD *)(v83 + 20);
    }
    else
    {
      v64 = v94;
    }
  }
  if ( v94 )
  {
    v89 = *(_QWORD *)v94;
    v90 = *(unsigned __int16 *)(*(_QWORD *)v94 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v94 + 302LL) )
    {
      v91 = (int *)(*(_QWORD *)(v89 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v91 - 1) != System_IDisposable_TypeInfo )
      {
        --v90;
        v91 += 4;
        if ( !v90 )
          goto LABEL_66;
      }
      v92 = v89 + 16LL * *v91 + 312;
    }
    else
    {
LABEL_66:
      v92 = sub_2237E2C(v94, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v92)(v94, *(_QWORD *)(v92 + 8));
  }
  v10 = 0;
  if ( !v13 )
LABEL_71:
    sub_21FFECC(v10, v11);
  return (BattleMessageEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        v13,
                                        (const MethodInfo_445164C *)Method_System_Collections_Generic_List_BattleMessageEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
BattleMessageEntity_o *BattleMessageMaster__GetEntity(
        BattleMessageMaster_o *this,
        int32_t id,
        int32_t idx,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_59382BB & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_BattleMessageMaster__BattleMessageEntity__string__GetEntity__);
    byte_59382BB = 1;
  }
  PK = (Il2CppObject *)BattleMessageEntity__CreatePK(id, idx, priority, *(const MethodInfo **)&priority);
  return (BattleMessageEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_3EE2044 *)Method_DataMasterBase_BattleMessageMaster__BattleMessageEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool BattleMessageMaster__TryGetEntity(
        BattleMessageMaster_o *this,
        BattleMessageEntity_o **entity,
        int32_t id,
        int32_t idx,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_59382BC & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_BattleMessageMaster__BattleMessageEntity__string__TryGetEntity__);
    byte_59382BC = 1;
  }
  PK = (Il2CppObject *)BattleMessageEntity__CreatePK(id, idx, priority, *(const MethodInfo **)&idx);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_BattleMessageMaster__BattleMessageEntity__string__TryGetEntity__);
}


void BattleMessageMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_59382BF & 1) == 0 )
  {
    sub_21FFC50(&BattleMessageMaster___c_TypeInfo);
    byte_59382BF = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(BattleMessageMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleMessageMaster___c_TypeInfo->static_fields->__9 = (struct BattleMessageMaster___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)BattleMessageMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleMessageMaster___c___ctor(BattleMessageMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


BattleMessageEntity_o *BattleMessageMaster___c___GetEntities_b__3_0(
        BattleMessageMaster___c_o *this,
        BattleMessageEntity_o *ent,
        const MethodInfo *method)
{
  return ent;
}


int32_t BattleMessageMaster___c___GetEntities_b__3_2(
        BattleMessageMaster___c_o *this,
        BattleMessageEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_21FFECC(this, 0);
  return ent->fields.idx;
}


int32_t BattleMessageMaster___c___GetEntities_b__3_3(
        BattleMessageMaster___c_o *this,
        BattleMessageEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_21FFECC(this, 0);
  return ent->fields.priority;
}


void BattleMessageMaster___c__DisplayClass3_0___ctor(
        BattleMessageMaster___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleMessageMaster___c__DisplayClass3_0___GetEntities_b__1(
        BattleMessageMaster___c__DisplayClass3_0_o *this,
        BattleMessageEntity_o *ent,
        const MethodInfo *method)
{
  return ent && ent->fields.id == this->fields.id;
}