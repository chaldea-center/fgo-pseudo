void __fastcall AssumedBattleAssetLoadManager___ctor(AssumedBattleAssetLoadManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x20
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4BC9D12 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_AssumedBattleAssetSearcherBase___ctor__, method);
    sub_1C1ABD4(&System_Collections_Generic_List_AssumedBattleAssetSearcherBase__TypeInfo, v3);
    byte_4BC9D12 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_AssumedBattleAssetSearcherBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_AssumedBattleAssetSearcherBase___ctor__);
  this->fields.assetSearcherList = (struct System_Collections_Generic_List_AssumedBattleAssetSearcherBase__o *)v4;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.assetSearcherList, (int64_t)v4, v5, v6, v7, v8, v9, v10);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


BattleEntity_o *__fastcall AssumedBattleAssetLoadManager__GetBattleEntity(
        AssumedBattleAssetLoadManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1

  if ( (byte_4BC9D0C & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMaster_BattleMaster___, method);
    sub_1C1ABD4(&DataManager_TypeInfo, v2);
    sub_1C1ABD4(&Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__, v3);
    byte_4BC9D0C = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_BattleMaster___);
  if ( !Master_object )
    sub_1C1AE30(0LL, v5);
  return (BattleEntity_o *)DataMasterBase_object__object__long___GetSingleEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                             (const MethodInfo_324AC80 *)Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
}


System_Collections_Generic_List_string__o *__fastcall AssumedBattleAssetLoadManager__GetEffectPathListFromAnalyzedParam(
        AssumedBattleAssetLoadManager_o *this,
        AssumedBattleAssetLoadManager_AnalyzedResultParam_o *resultParam,
        const MethodInfo *method)
{
  __int64 v4; // x1
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
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v20; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v21; // x21
  struct System_Collections_Generic_HashSet_int__o *EffectIdHashSet; // x20
  AssumedBattleAssetLoadManager___c_c *v23; // x0
  System_Func_int__bool__o *_9__16_0; // x22
  Il2CppObject *v25; // x23
  struct AssumedBattleAssetLoadManager___c_StaticFields *static_fields; // x0
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  DataMasterBase_TMaster__TEntity__PKType__c *klass; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v34; // x20
  __int64 v35; // x9
  int *p_offset; // x10
  __int64 v37; // x0
  __int64 v38; // x1
  __int64 v39; // x20
  __int64 v40; // x8
  __int64 v41; // x9
  int *v42; // x10
  __int64 v43; // x0
  __int64 v44; // x8
  __int64 v45; // x9
  int *v46; // x10
  __int64 v47; // x0
  __int64 v48; // x0
  Il2CppObject *Entity; // x0
  __int64 v50; // x1
  System_String_o *monitor; // x22
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v53; // x1
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  Il2CppObject *v60; // x1
  struct System_Object_array *items; // x8
  _QWORD *v62; // x9
  __int64 size; // x10
  Il2CppClass **v64; // x0
  __int64 v65; // x8
  __int64 v66; // x9
  int *v67; // x10
  __int64 v68; // x0
  System_String_o *name; // [xsp+8h] [xbp-68h] BYREF
  System_String_o *path; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_4BC9D11 & 1) == 0 )
  {
    sub_1C1ABD4(&BattleEffectUtility_TypeInfo, resultParam);
    sub_1C1ABD4(&Method_DataManager_GetMaster_EffectMaster___, v4);
    sub_1C1ABD4(&DataManager_TypeInfo, v5);
    sub_1C1ABD4(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__, v6);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_Where_int___, v7);
    sub_1C1ABD4(&System_Func_int__bool__TypeInfo, v8);
    sub_1C1ABD4(&System_IDisposable_TypeInfo, v9);
    sub_1C1ABD4(&System_Collections_Generic_IEnumerable_int__TypeInfo, v10);
    sub_1C1ABD4(&System_Collections_Generic_IEnumerator_int__TypeInfo, v11);
    sub_1C1ABD4(&System_Collections_IEnumerator_TypeInfo, v12);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string__Add__, v13);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string___ctor__, v14);
    sub_1C1ABD4(&System_Collections_Generic_List_string__TypeInfo, v15);
    sub_1C1ABD4(&Method_AssumedBattleAssetLoadManager___c__GetEffectPathListFromAnalyzedParam_b__16_0__, v16);
    sub_1C1ABD4(&AssumedBattleAssetLoadManager___c_TypeInfo, v17);
    byte_4BC9D11 = 1;
  }
  path = 0LL;
  name = 0LL;
  v18 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_EffectMaster___);
  if ( !resultParam )
    goto LABEL_55;
  v21 = Master_object;
  EffectIdHashSet = resultParam->fields.EffectIdHashSet;
  v23 = AssumedBattleAssetLoadManager___c_TypeInfo;
  if ( !AssumedBattleAssetLoadManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssumedBattleAssetLoadManager___c_TypeInfo);
    v23 = AssumedBattleAssetLoadManager___c_TypeInfo;
  }
  _9__16_0 = v23->static_fields->__9__16_0;
  if ( !_9__16_0 )
  {
    if ( !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      v23 = AssumedBattleAssetLoadManager___c_TypeInfo;
    }
    v25 = (Il2CppObject *)v23->static_fields->__9;
    _9__16_0 = (System_Func_int__bool__o *)sub_1C1AE20(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      _9__16_0,
      v25,
      Method_AssumedBattleAssetLoadManager___c__GetEffectPathListFromAnalyzedParam_b__16_0__,
      0LL);
    static_fields = AssumedBattleAssetLoadManager___c_TypeInfo->static_fields;
    static_fields->__9__16_0 = _9__16_0;
    sub_1C1AB78(
      (PartyOrganizationUtility_o *)&static_fields->__9__16_0,
      (int64_t)_9__16_0,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Linq_Enumerable__Where_int_(
                                                                  (System_Collections_Generic_IEnumerable_TSource__o *)EffectIdHashSet,
                                                                  (System_Func_TSource__bool__o *)_9__16_0,
                                                                  (const MethodInfo_2FDEAB0 *)Method_System_Linq_Enumerable_Where_int___);
  if ( !Master_object )
LABEL_55:
    sub_1C1AE30(Master_object, v20);
  klass = Master_object->klass;
  v34 = Master_object;
  v35 = *(unsigned __int16 *)(&Master_object->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Master_object->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
    {
      --v35;
      p_offset += 4;
      if ( !v35 )
        goto LABEL_17;
    }
    v37 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_17:
    v37 = sub_1C6CBB4(Master_object, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL);
  }
  v39 = (*(__int64 (__fastcall **)(DataMasterBase_TMaster__TEntity__PKType__o *, _QWORD))v37)(v34, *(_QWORD *)(v37 + 8));
  if ( !v39 )
    sub_1C1AE30(0LL, v38);
  while ( 1 )
  {
    v40 = *(_QWORD *)v39;
    v41 = *(unsigned __int16 *)(*(_QWORD *)v39 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v39 + 302LL) )
    {
      v42 = (int *)(*(_QWORD *)(v40 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v42 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v41;
        v42 += 4;
        if ( !v41 )
          goto LABEL_24;
      }
      v43 = v40 + 16LL * *v42 + 312;
    }
    else
    {
LABEL_24:
      v43 = sub_1C6CBB4(v39, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v43)(v39, *(_QWORD *)(v43 + 8)) & 1) == 0 )
      break;
    v44 = *(_QWORD *)v39;
    v45 = *(unsigned __int16 *)(*(_QWORD *)v39 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v39 + 302LL) )
    {
      v46 = (int *)(*(_QWORD *)(v44 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_int__c **)v46 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
      {
        --v45;
        v46 += 4;
        if ( !v45 )
          goto LABEL_31;
      }
      v47 = v44 + 16LL * *v46 + 312;
    }
    else
    {
LABEL_31:
      v47 = sub_1C6CBB4(v39, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL);
    }
    v48 = (*(__int64 (__fastcall **)(__int64, _QWORD))v47)(v39, *(_QWORD *)(v47 + 8));
    if ( !v21 )
      sub_1C1AE30(v48, (unsigned int)v48);
    Entity = DataMasterBase_object__object__int___GetEntity(
               v21,
               v48,
               (const MethodInfo_3248678 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
    if ( !Entity )
      sub_1C1AE30(0LL, v50);
    if ( HIDWORD(Entity[1].klass) == 5 )
    {
      monitor = (System_String_o *)Entity[2].monitor;
      if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
      BattleEffectUtility__GetBattleCommonEffectPathAndName(monitor, &path, &name, 0LL);
      IsNullOrEmpty = System_String__IsNullOrEmpty(path, 0LL);
      if ( !IsNullOrEmpty )
      {
        if ( !v18 )
          sub_1C1AE30(IsNullOrEmpty, v53);
        v60 = (Il2CppObject *)path;
        items = v18->fields._items;
        v62 = Method_System_Collections_Generic_List_string__Add__;
        ++v18->fields._version;
        if ( !items )
          sub_1C1AE30(IsNullOrEmpty, v60);
        size = v18->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v18,
            v60,
            *(const MethodInfo_363C890 **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
        }
        else
        {
          v64 = &items->obj.klass + size;
          v18->fields._size = size + 1;
          v64[4] = (Il2CppClass *)v60;
          sub_1C1AB78((PartyOrganizationUtility_o *)(v64 + 4), (int64_t)v60, v54, v55, v56, v57, v58, v59);
        }
      }
    }
  }
  v65 = *(_QWORD *)v39;
  v66 = *(unsigned __int16 *)(*(_QWORD *)v39 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v39 + 302LL) )
  {
    v67 = (int *)(*(_QWORD *)(v65 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v67 - 1) != System_IDisposable_TypeInfo )
    {
      --v66;
      v67 += 4;
      if ( !v66 )
        goto LABEL_48;
    }
    v68 = v65 + 16LL * *v67 + 312;
  }
  else
  {
LABEL_48:
    v68 = sub_1C6CBB4(v39, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v68)(v39, *(_QWORD *)(v68 + 8));
  return (System_Collections_Generic_List_string__o *)v18;
}


void __fastcall AssumedBattleAssetLoadManager__Init(
        AssumedBattleAssetLoadManager_o *this,
        BattlePerformance_o *perf,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._Perf_k__BackingField = perf;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields, (int64_t)perf, (int64_t)method, v3, v4, v5, v6, v7);
}


bool __fastcall AssumedBattleAssetLoadManager__IsPreloading(
        AssumedBattleAssetLoadManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  AssumedBattleAssetLoadManager___c_c *v6; // x0
  System_Collections_Generic_List_T__o *assetSearcherList; // x19
  System_Func_object__bool__o *_9__10_0; // x20
  Il2CppObject *v9; // x21
  struct AssumedBattleAssetLoadManager___c_StaticFields *static_fields; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4BC9D0D & 1) == 0 )
  {
    sub_1C1ABD4(&Method_BasicHelper_Any_AssumedBattleAssetSearcherBase___, method);
    sub_1C1ABD4(&System_Func_AssumedBattleAssetSearcherBase__bool__TypeInfo, v3);
    sub_1C1ABD4(&Method_AssumedBattleAssetLoadManager___c__IsPreloading_b__10_0__, v4);
    sub_1C1ABD4(&AssumedBattleAssetLoadManager___c_TypeInfo, v5);
    byte_4BC9D0D = 1;
  }
  v6 = AssumedBattleAssetLoadManager___c_TypeInfo;
  assetSearcherList = (System_Collections_Generic_List_T__o *)this->fields.assetSearcherList;
  if ( !AssumedBattleAssetLoadManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssumedBattleAssetLoadManager___c_TypeInfo);
    v6 = AssumedBattleAssetLoadManager___c_TypeInfo;
  }
  _9__10_0 = (System_Func_object__bool__o *)v6->static_fields->__9__10_0;
  if ( !_9__10_0 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = AssumedBattleAssetLoadManager___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v6->static_fields->__9;
    _9__10_0 = (System_Func_object__bool__o *)sub_1C1AE20(System_Func_AssumedBattleAssetSearcherBase__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__10_0,
      v9,
      Method_AssumedBattleAssetLoadManager___c__IsPreloading_b__10_0__,
      0LL);
    static_fields = AssumedBattleAssetLoadManager___c_TypeInfo->static_fields;
    static_fields->__9__10_0 = (struct System_Func_AssumedBattleAssetSearcherBase__bool__o *)_9__10_0;
    sub_1C1AB78(
      (PartyOrganizationUtility_o *)&static_fields->__9__10_0,
      (int64_t)_9__10_0,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  return BasicHelper__Any_object_(
           assetSearcherList,
           (System_Func_T__bool__o *)_9__10_0,
           (const MethodInfo_2F8A3FC *)Method_BasicHelper_Any_AssumedBattleAssetSearcherBase___);
}


void __fastcall AssumedBattleAssetLoadManager__Preload(
        AssumedBattleAssetLoadManager_o *this,
        AssumedBattleAssetSearcherBase_o *assetSearcher,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  AssumedBattleAssetLoadManager_o *v9; // x20
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  struct BattlePerformance_o *Perf_k__BackingField; // x8
  _QWORD *v19; // x9
  __int64 assetSearcherList_low; // x10
  BattlePerformance_c **v21; // x8

  v9 = this;
  if ( (byte_4BC9D0E & 1) == 0 )
  {
    this = (AssumedBattleAssetLoadManager_o *)sub_1C1ABD4(
                                                &Method_System_Collections_Generic_List_AssumedBattleAssetSearcherBase__Add__,
                                                assetSearcher);
    byte_4BC9D0E = 1;
  }
  if ( !assetSearcher )
    goto LABEL_11;
  assetSearcher->fields.manager = v9;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&assetSearcher->fields.manager,
    (int64_t)v9,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  AssumedBattleAssetLoadManager__PreloadLocal(v9, assetSearcher, v10);
  if ( !AssumedBattleAssetSearcherBase__HasAnyPreloadedAssetPaths(assetSearcher, v11) )
    return;
  this = (AssumedBattleAssetLoadManager_o *)v9->fields.assetSearcherList;
  if ( !this
    || (Perf_k__BackingField = this->fields._Perf_k__BackingField,
        v19 = Method_System_Collections_Generic_List_AssumedBattleAssetSearcherBase__Add__,
        ++HIDWORD(this->fields.assetSearcherList),
        !Perf_k__BackingField) )
  {
LABEL_11:
    sub_1C1AE30(this, assetSearcher);
  }
  assetSearcherList_low = SLODWORD(this->fields.assetSearcherList);
  if ( (unsigned int)assetSearcherList_low >= LODWORD(Perf_k__BackingField->fields.m_CancellationTokenSource) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)assetSearcher,
      *(const MethodInfo_363C890 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
  }
  else
  {
    v21 = &Perf_k__BackingField->klass + assetSearcherList_low;
    LODWORD(this->fields.assetSearcherList) = assetSearcherList_low + 1;
    v21[4] = (BattlePerformance_c *)assetSearcher;
    sub_1C1AB78((PartyOrganizationUtility_o *)(v21 + 4), (int64_t)assetSearcher, v12, v13, v14, v15, v16, v17);
  }
}


void __fastcall AssumedBattleAssetLoadManager__PreloadLocal(
        AssumedBattleAssetLoadManager_o *this,
        AssumedBattleAssetSearcherBase_o *assetSearcher,
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
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x20
  System_Collections_Generic_List_TSource__o *v25; // x0
  __int64 v26; // x1
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  AssumedBattleAssetSearcherBase_o **v33; // x21
  __int64 v34; // x1
  __int64 v35; // x22
  const MethodInfo *v36; // x2
  System_Collections_Generic_List_string__o *EffectPathListFromAnalyzedParam; // x0
  __int64 v38; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x24
  System_Collections_Generic_List_object__o *v40; // x23
  AssumedBattleAssetLoadManager___c_c *v41; // x8
  System_Func_int__bool__o *_9__14_1; // x25
  Il2CppObject *v43; // x26
  struct AssumedBattleAssetLoadManager___c_StaticFields *static_fields; // x0
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v51; // x24
  System_Func_T__TResult__o *v52; // x25
  System_Collections_Generic_IEnumerable_T__o *v53; // x0
  System_Collections_Generic_List_object__o *v54; // x22
  int v55; // w8
  AssetLoader_LoadEndDataHandler_o *v56; // x25
  AssetLoader_LoadEndDataHandler_o **v57; // x24
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  _BOOL8 v64; // x0
  __int64 v65; // x1
  struct BattlePerformance_o *Perf_k__BackingField; // x8
  BattleDataDefine_c *v67; // x0
  Il2CppObject *current; // x23
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper_k__BackingField; // x26
  AssetLoader_LoadEndDataHandler_o *v70; // x25
  _BOOL8 Wrapper__LoadAssetStorage; // x0
  __int64 v72; // x1
  const MethodInfo *v73; // x2
  System_Action_o **v74; // x22
  _BOOL8 v75; // x0
  __int64 v76; // x1
  struct BattlePerformance_o *v77; // x8
  Il2CppObject *v78; // x23
  System_Action_o *v79; // x25
  AssetStorageLoadWrapper_o *v80; // x24
  int64_t v81; // x2
  int32_t v82; // w3
  System_String_o *v83; // x4
  BattleSetupInfo_o *v84; // x5
  FollowerInfo_o *v85; // x6
  PartyListViewItem_o *v86; // x7
  __int64 v87; // x1
  const MethodInfo *v88; // x2
  System_Collections_Generic_List_Enumerator_object__o v89; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v90; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4BC9D10 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, assetSearcher);
    sub_1C1ABD4(&Method_BattleDataDefine_AddUniqueCameraPath__, v5);
    sub_1C1ABD4(&BattleDataDefine_TypeInfo, v6);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_Select_int__string___, v7);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_ToList_string___, v8);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_Where_int___, v9);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v10);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v11);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v12);
    sub_1C1ABD4(&System_Func_int__string__TypeInfo, v13);
    sub_1C1ABD4(&System_Func_int__bool__TypeInfo, v14);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string__AddRange__, v15);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string__GetEnumerator__, v16);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string__get_Count__, v17);
    sub_1C1ABD4(&AssetLoader_LoadEndDataHandler_TypeInfo, v18);
    sub_1C1ABD4(&Method_AssumedBattleAssetLoadManager___c__PreloadLocal_b__14_1__, v19);
    sub_1C1ABD4(&Method_AssumedBattleAssetLoadManager___c__DisplayClass14_0__PreloadLocal_b__0__, v20);
    sub_1C1ABD4(&Method_AssumedBattleAssetLoadManager___c__DisplayClass14_0__PreloadLocal_b__2__, v21);
    sub_1C1ABD4(&AssumedBattleAssetLoadManager___c__DisplayClass14_0_TypeInfo, v22);
    sub_1C1ABD4(&AssumedBattleAssetLoadManager___c_TypeInfo, v23);
    byte_4BC9D10 = 1;
  }
  memset(&v90, 0, sizeof(v90));
  v24 = sub_1C1AE20(AssumedBattleAssetLoadManager___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v24, 0LL);
  if ( !v24 )
    goto LABEL_47;
  *(_QWORD *)(v24 + 24) = assetSearcher;
  v33 = (AssumedBattleAssetSearcherBase_o **)(v24 + 24);
  sub_1C1AB78((PartyOrganizationUtility_o *)(v24 + 24), (int64_t)assetSearcher, v27, v28, v29, v30, v31, v32);
  if ( !*(_QWORD *)(v24 + 24) )
    sub_1C1AE30(0LL, v34);
  v35 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v24 + 24) + 376LL))(
          *(_QWORD *)(v24 + 24),
          *(_QWORD *)(**(_QWORD **)(v24 + 24) + 384LL));
  EffectPathListFromAnalyzedParam = AssumedBattleAssetLoadManager__GetEffectPathListFromAnalyzedParam(
                                      (AssumedBattleAssetLoadManager_o *)v35,
                                      (AssumedBattleAssetLoadManager_AnalyzedResultParam_o *)v35,
                                      v36);
  if ( !v35 )
    sub_1C1AE30(EffectPathListFromAnalyzedParam, v38);
  v39 = *(System_Collections_Generic_IEnumerable_TSource__o **)(v35 + 32);
  v40 = (System_Collections_Generic_List_object__o *)EffectPathListFromAnalyzedParam;
  v41 = AssumedBattleAssetLoadManager___c_TypeInfo;
  if ( !AssumedBattleAssetLoadManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssumedBattleAssetLoadManager___c_TypeInfo);
    v41 = AssumedBattleAssetLoadManager___c_TypeInfo;
  }
  _9__14_1 = v41->static_fields->__9__14_1;
  if ( !_9__14_1 )
  {
    if ( !v41->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v41);
      v41 = AssumedBattleAssetLoadManager___c_TypeInfo;
    }
    v43 = (Il2CppObject *)v41->static_fields->__9;
    _9__14_1 = (System_Func_int__bool__o *)sub_1C1AE20(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(_9__14_1, v43, Method_AssumedBattleAssetLoadManager___c__PreloadLocal_b__14_1__, 0LL);
    static_fields = AssumedBattleAssetLoadManager___c_TypeInfo->static_fields;
    static_fields->__9__14_1 = _9__14_1;
    sub_1C1AB78(
      (PartyOrganizationUtility_o *)&static_fields->__9__14_1,
      (int64_t)_9__14_1,
      v45,
      v46,
      v47,
      v48,
      v49,
      v50);
  }
  v51 = System_Linq_Enumerable__Where_int_(
          v39,
          (System_Func_TSource__bool__o *)_9__14_1,
          (const MethodInfo_2FDEAB0 *)Method_System_Linq_Enumerable_Where_int___);
  v52 = (System_Func_T__TResult__o *)sub_1C1AE20(System_Func_int__string__TypeInfo);
  System_Func_int__object____ctor(v52, 0LL, Method_BattleDataDefine_AddUniqueCameraPath__, 0LL);
  v53 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_int__object_(
                                                         v51,
                                                         (System_Func_TSource__TResult__o *)v52,
                                                         (const MethodInfo_2FCE570 *)Method_System_Linq_Enumerable_Select_int__string___);
  if ( !v40 )
    sub_1C1AE30(v53, v53);
  System_Collections_Generic_List_object___AddRange(
    v40,
    v53,
    (const MethodInfo_363CA9C *)Method_System_Collections_Generic_List_string__AddRange__);
  v25 = System_Linq_Enumerable__ToList_object_(
          *(System_Collections_Generic_IEnumerable_TSource__o **)(v35 + 24),
          (const MethodInfo_2FDCC54 *)Method_System_Linq_Enumerable_ToList_string___);
  v54 = (System_Collections_Generic_List_object__o *)v25;
  if ( !v25 )
    goto LABEL_47;
  v55 = v25->fields._size + v40->fields._size;
  *(_DWORD *)(v24 + 16) = v55;
  if ( v55 < 1 )
    return;
  if ( !*v33 )
LABEL_47:
    sub_1C1AE30(v25, v26);
  (*v33)->fields._LoadStatus_k__BackingField = 1;
  *(_DWORD *)(v24 + 20) = 0;
  v56 = (AssetLoader_LoadEndDataHandler_o *)sub_1C1AE20(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v56,
    (Il2CppObject *)v24,
    Method_AssumedBattleAssetLoadManager___c__DisplayClass14_0__PreloadLocal_b__0__,
    0LL);
  *(_QWORD *)(v24 + 32) = v56;
  v57 = (AssetLoader_LoadEndDataHandler_o **)(v24 + 32);
  sub_1C1AB78((PartyOrganizationUtility_o *)(v24 + 32), (int64_t)v56, v58, v59, v60, v61, v62, v63);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v89,
    v40,
    (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v90 = v89;
  while ( 1 )
  {
    v64 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v90,
            (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    if ( !v64 )
      break;
    Perf_k__BackingField = this->fields._Perf_k__BackingField;
    if ( !Perf_k__BackingField )
      sub_1C1AE30(v64, v65);
    v67 = BattleDataDefine_TypeInfo;
    current = v90.fields._current;
    assetStorageLoadWrapper_k__BackingField = Perf_k__BackingField->fields._assetStorageLoadWrapper_k__BackingField;
    v70 = *v57;
    if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    if ( !assetStorageLoadWrapper_k__BackingField )
      sub_1C1AE30(v67, v65);
    Wrapper__LoadAssetStorage = AssetStorageLoadWrapper__LoadAssetStorage(
                                  assetStorageLoadWrapper_k__BackingField,
                                  (System_String_o *)current,
                                  v70,
                                  BattleDataDefine_TypeInfo->static_fields->ASSET_PARALLEL_LOAD_MAX,
                                  0LL);
    if ( Wrapper__LoadAssetStorage )
    {
      if ( !*v33 )
        sub_1C1AE30(0LL, v72);
      AssumedBattleAssetSearcherBase__AppendPreloadedAssetPath(*v33, (System_String_o *)current, v73);
    }
    else
    {
      if ( !*v57 )
        sub_1C1AE30(Wrapper__LoadAssetStorage, v72);
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))(*v57)->fields.m_target)(
        (*v57)->fields.original_method_info,
        0LL,
        *(_QWORD *)&(*v57)->fields.extra_arg);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v90,
    (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v89,
    v54,
    (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v74 = (System_Action_o **)(v24 + 40);
  v90 = v89;
  while ( 1 )
  {
    v75 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v90,
            (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    if ( !v75 )
      break;
    v77 = this->fields._Perf_k__BackingField;
    if ( !v77 )
      sub_1C1AE30(v75, v76);
    v78 = v90.fields._current;
    v79 = *v74;
    v80 = v77->fields._assetStorageLoadWrapper_k__BackingField;
    if ( !*v74 )
    {
      v79 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
      System_Action___ctor(
        v79,
        (Il2CppObject *)v24,
        Method_AssumedBattleAssetLoadManager___c__DisplayClass14_0__PreloadLocal_b__2__,
        0LL);
      *v74 = v79;
      sub_1C1AB78((PartyOrganizationUtility_o *)(v24 + 40), (int64_t)v79, v81, v82, v83, v84, v85, v86);
    }
    if ( !v80 )
      sub_1C1AE30(v75, v76);
    AssetStorageLoadWrapper__LoadAudioAssetStorage(v80, (System_String_o *)v78, v79, 1, 0LL);
    if ( !*v33 )
      sub_1C1AE30(0LL, v87);
    AssumedBattleAssetSearcherBase__AppendPreloadedAudioAssetPath(*v33, (System_String_o *)v78, v88);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v90,
    (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
}


void __fastcall AssumedBattleAssetLoadManager__ReleaseAll(
        AssumedBattleAssetLoadManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *assetSearcherList; // x20
  System_Action_object__o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  struct System_Collections_Generic_List_AssumedBattleAssetSearcherBase__o *v10; // x8
  int32_t size; // w2
  int v12; // w9

  if ( (byte_4BC9D0F & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_AssumedBattleAssetSearcherBase__TypeInfo, method);
    sub_1C1ABD4(&Method_AssumedBattleAssetLoadManager_ReleaseLocal__, v3);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_AssumedBattleAssetSearcherBase__Clear__, v4);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_AssumedBattleAssetSearcherBase__ForEach__, v5);
    byte_4BC9D0F = 1;
  }
  assetSearcherList = (System_Collections_Generic_List_object__o *)this->fields.assetSearcherList;
  v7 = (System_Action_object__o *)sub_1C1AE20(System_Action_AssumedBattleAssetSearcherBase__TypeInfo);
  System_Action_object____ctor(v7, (Il2CppObject *)this, Method_AssumedBattleAssetLoadManager_ReleaseLocal__, 0LL);
  if ( !assetSearcherList
    || (System_Collections_Generic_List_object___ForEach(
          assetSearcherList,
          (System_Action_T__o *)v7,
          (const MethodInfo_363D2D0 *)Method_System_Collections_Generic_List_AssumedBattleAssetSearcherBase__ForEach__),
        (v10 = this->fields.assetSearcherList) == 0LL) )
  {
    sub_1C1AE30(v8, v9);
  }
  size = v10->fields._size;
  v12 = v10->fields._version + 1;
  v10->fields._size = 0;
  v10->fields._version = v12;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v10->fields._items, 0, size, 0LL);
}


void __fastcall AssumedBattleAssetLoadManager__ReleaseLocal(
        AssumedBattleAssetLoadManager_o *this,
        AssumedBattleAssetSearcherBase_o *assetSearcher,
        const MethodInfo *method)
{
  AssumedBattleAssetLoadManager_o *v3; // x19
  struct System_Collections_Generic_List_AssumedBattleAssetSearcherBase__o *assetSearcherList; // x8
  AssumedBattleAssetLoadManager_o *v6; // x21
  unsigned __int64 v7; // x22
  struct BattlePerformance_o *Perf_k__BackingField; // x8
  struct System_Collections_Generic_List_AssumedBattleAssetSearcherBase__o *v9; // x8
  AssumedBattleAssetLoadManager_o *v10; // x20
  unsigned __int64 v11; // x21
  struct BattlePerformance_o *v12; // x8

  if ( !assetSearcher )
    goto LABEL_17;
  v3 = this;
  this = (AssumedBattleAssetLoadManager_o *)AssumedBattleAssetSearcherBase__GetPreloadedAssetPathsAsArray(
                                              assetSearcher,
                                              (const MethodInfo *)assetSearcher);
  if ( !this )
    goto LABEL_17;
  assetSearcherList = this->fields.assetSearcherList;
  v6 = this;
  if ( (int)assetSearcherList >= 1 )
  {
    v7 = 0LL;
    while ( v7 < (unsigned int)assetSearcherList )
    {
      Perf_k__BackingField = v3->fields._Perf_k__BackingField;
      if ( !Perf_k__BackingField )
        goto LABEL_17;
      this = (AssumedBattleAssetLoadManager_o *)Perf_k__BackingField->fields._assetStorageLoadWrapper_k__BackingField;
      if ( !this )
        goto LABEL_17;
      AssetStorageLoadWrapper__ReleaseAssetStorage(
        (AssetStorageLoadWrapper_o *)this,
        *((System_String_o **)&v6[1].klass + v7),
        0LL);
      LODWORD(assetSearcherList) = v6->fields.assetSearcherList;
      if ( (__int64)++v7 >= (int)assetSearcherList )
        goto LABEL_9;
    }
LABEL_18:
    sub_1C1AE38(this, assetSearcher);
  }
LABEL_9:
  this = (AssumedBattleAssetLoadManager_o *)AssumedBattleAssetSearcherBase__GetPreloadedAudioAssetPathsAsArray(
                                              assetSearcher,
                                              (const MethodInfo *)assetSearcher);
  if ( !this )
LABEL_17:
    sub_1C1AE30(this, assetSearcher);
  v9 = this->fields.assetSearcherList;
  v10 = this;
  if ( (int)v9 >= 1 )
  {
    v11 = 0LL;
    while ( v11 < (unsigned int)v9 )
    {
      v12 = v3->fields._Perf_k__BackingField;
      if ( !v12 )
        goto LABEL_17;
      this = (AssumedBattleAssetLoadManager_o *)v12->fields._assetStorageLoadWrapper_k__BackingField;
      if ( !this )
        goto LABEL_17;
      AssetStorageLoadWrapper__ReleaseAudioAssetStorage(
        (AssetStorageLoadWrapper_o *)this,
        *((System_String_o **)&v10[1].klass + v11),
        0LL);
      LODWORD(v9) = v10->fields.assetSearcherList;
      if ( (__int64)++v11 >= (int)v9 )
        return;
    }
    goto LABEL_18;
  }
}


void __fastcall AssumedBattleAssetLoadManager__Release_object_(
        AssumedBattleAssetLoadManager_o *this,
        const MethodInfo_2F819C8 *method)
{
  const MethodInfo_2FC80C8 **rgctx_data; // x8
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_IEnumerable_T__o *v7; // x21
  long double v8; // q0
  Il2CppClass *_2_System_Action_T; // x8
  System_Action_object__o *v10; // x22
  long double inited; // q0
  System_Collections_Generic_List_T__o *assetSearcherList; // x20
  Il2CppClass *_6_AssumedBattleAssetLoadManager___c__12_T; // x0
  Il2CppClass *v14; // x0
  System_Func_object__bool__o *v15; // x21
  Il2CppClass *v16; // x0
  Il2CppClass *v17; // x0
  Il2CppObject *v18; // x22
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  long double v25; // q0
  Il2CppClass *v26; // x0
  Il2CppClass *v27; // x0

  rgctx_data = (const MethodInfo_2FC80C8 **)method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C1ABD4(&Method_AssumedBattleAssetLoadManager_ReleaseLocal__, method);
    sub_1C1ABD4(&Method_BasicHelper_RemoveElements_AssumedBattleAssetSearcherBase___, v5);
    sub_1C1ABD4(&System_Func_AssumedBattleAssetSearcherBase__bool__TypeInfo, v6);
    rgctx_data = (const MethodInfo_2FC80C8 **)method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1C6CB0C(method);
      rgctx_data = (const MethodInfo_2FC80C8 **)method->rgctx_data;
    }
  }
  v7 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__OfType_object_(
                                                        (System_Collections_IEnumerable_o *)this->fields.assetSearcherList,
                                                        *rgctx_data);
  _2_System_Action_T = method->rgctx_data->_2_System_Action_T_;
  if ( (BYTE5(_2_System_Action_T->vtable[0].methodPtr) & 1) == 0 )
    _2_System_Action_T = (Il2CppClass *)sub_1C6CAB0(v8);
  v10 = (System_Action_object__o *)sub_1C1AE20(_2_System_Action_T);
  System_Action_object____ctor(
    v10,
    (Il2CppObject *)this,
    Method_AssumedBattleAssetLoadManager_ReleaseLocal__,
    (const MethodInfo_32B92F0 *)method->rgctx_data->_3_System_Action_T___ctor);
  BasicHelper__ForEach_object_(
    v7,
    (System_Action_T__o *)v10,
    (const MethodInfo_2F8C3EC *)method->rgctx_data->_4_BasicHelper_ForEach_T_);
  assetSearcherList = (System_Collections_Generic_List_T__o *)this->fields.assetSearcherList;
  _6_AssumedBattleAssetLoadManager___c__12_T = method->rgctx_data->_6_AssumedBattleAssetLoadManager___c__12_T_;
  if ( (BYTE5(_6_AssumedBattleAssetLoadManager___c__12_T->vtable[0].methodPtr) & 1) == 0 )
    _6_AssumedBattleAssetLoadManager___c__12_T = (Il2CppClass *)sub_1C6CAB0(inited);
  if ( !_6_AssumedBattleAssetLoadManager___c__12_T->_2.cctor_finished )
    inited = j_il2cpp_runtime_class_init_0(_6_AssumedBattleAssetLoadManager___c__12_T);
  v14 = method->rgctx_data->_6_AssumedBattleAssetLoadManager___c__12_T_;
  if ( (BYTE5(v14->vtable[0].methodPtr) & 1) == 0 )
    v14 = (Il2CppClass *)sub_1C6CAB0(inited);
  v15 = (System_Func_object__bool__o *)*((_QWORD *)v14->static_fields + 1);
  if ( !v15 )
  {
    v16 = method->rgctx_data->_6_AssumedBattleAssetLoadManager___c__12_T_;
    if ( (BYTE5(v16->vtable[0].methodPtr) & 1) == 0 )
      v16 = (Il2CppClass *)sub_1C6CAB0(inited);
    if ( !v16->_2.cctor_finished )
      inited = j_il2cpp_runtime_class_init_0(v16);
    v17 = method->rgctx_data->_6_AssumedBattleAssetLoadManager___c__12_T_;
    if ( (BYTE5(v17->vtable[0].methodPtr) & 1) == 0 )
      v17 = (Il2CppClass *)sub_1C6CAB0(inited);
    v18 = *(Il2CppObject **)v17->static_fields;
    v15 = (System_Func_object__bool__o *)sub_1C1AE20(System_Func_AssumedBattleAssetSearcherBase__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v15,
      v18,
      (intptr_t)method->rgctx_data->_7_AssumedBattleAssetLoadManager___c__12_T___Release_b__12_0,
      0LL);
    v26 = method->rgctx_data->_6_AssumedBattleAssetLoadManager___c__12_T_;
    if ( (BYTE5(v26->vtable[0].methodPtr) & 1) == 0 )
      v26 = (Il2CppClass *)sub_1C6CAB0(v25);
    *((_QWORD *)v26->static_fields + 1) = v15;
    v27 = method->rgctx_data->_6_AssumedBattleAssetLoadManager___c__12_T_;
    if ( (BYTE5(v27->vtable[0].methodPtr) & 1) == 0 )
      v27 = (Il2CppClass *)sub_1C6CAB0(v25);
    sub_1C1AB78(
      (PartyOrganizationUtility_o *)((char *)v27->static_fields + 8),
      (int64_t)v15,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
  }
  BasicHelper__RemoveElements_object_(
    assetSearcherList,
    (System_Func_T__bool__o *)v15,
    (const MethodInfo_2F8EB3C *)Method_BasicHelper_RemoveElements_AssumedBattleAssetSearcherBase___);
}


AssetStorageLoadWrapper_o *__fastcall AssumedBattleAssetLoadManager__get_AssetStorageLoadWrapper(
        AssumedBattleAssetLoadManager_o *this,
        const MethodInfo *method)
{
  struct BattlePerformance_o *Perf_k__BackingField; // x8

  Perf_k__BackingField = this->fields._Perf_k__BackingField;
  if ( !Perf_k__BackingField )
    sub_1C1AE30(this, method);
  return Perf_k__BackingField->fields._assetStorageLoadWrapper_k__BackingField;
}


BattlePerformance_o *__fastcall AssumedBattleAssetLoadManager__get_Perf(
        AssumedBattleAssetLoadManager_o *this,
        const MethodInfo *method)
{
  return this->fields._Perf_k__BackingField;
}


void __fastcall AssumedBattleAssetLoadManager__set_Perf(
        AssumedBattleAssetLoadManager_o *this,
        BattlePerformance_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._Perf_k__BackingField = value;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields, (int64_t)value, (int64_t)method, v3, v4, v5, v6, v7);
}


void __fastcall AssumedBattleAssetLoadManager_AnalyzedResultParam___ctor(
        AssumedBattleAssetLoadManager_AnalyzedResultParam_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_HashSet_int__o *v6; // x20
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  System_Collections_Generic_HashSet_T__o *v13; // x20
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  System_Collections_Generic_HashSet_int__o *v20; // x20
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7

  if ( (byte_4BC9D13 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_HashSet_string___ctor__, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_HashSet_int___ctor__, v3);
    sub_1C1ABD4(&System_Collections_Generic_HashSet_int__TypeInfo, v4);
    sub_1C1ABD4(&System_Collections_Generic_HashSet_string__TypeInfo, v5);
    byte_4BC9D13 = 1;
  }
  v6 = (System_Collections_Generic_HashSet_int__o *)sub_1C1AE20(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v6,
    (const MethodInfo_34EFAF4 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  this->fields.EffectIdHashSet = v6;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields, (int64_t)v6, v7, v8, v9, v10, v11, v12);
  v13 = (System_Collections_Generic_HashSet_T__o *)sub_1C1AE20(System_Collections_Generic_HashSet_string__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v13,
    (const MethodInfo_34F5F18 *)Method_System_Collections_Generic_HashSet_string___ctor__);
  this->fields.AudioAssetNameHashSet = (struct System_Collections_Generic_HashSet_string__o *)v13;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.AudioAssetNameHashSet,
    (int64_t)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v20 = (System_Collections_Generic_HashSet_int__o *)sub_1C1AE20(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v20,
    (const MethodInfo_34EFAF4 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  this->fields.cameraIdHashSet = v20;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.cameraIdHashSet, (int64_t)v20, v21, v22, v23, v24, v25, v26);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall AssumedBattleAssetLoadManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BC9D14 & 1) == 0 )
  {
    sub_1C1ABD4(&AssumedBattleAssetLoadManager___c_TypeInfo, v1);
    byte_4BC9D14 = 1;
  }
  v2 = (Il2CppObject *)sub_1C1AE20(AssumedBattleAssetLoadManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  AssumedBattleAssetLoadManager___c_TypeInfo->static_fields->__9 = (struct AssumedBattleAssetLoadManager___c_o *)v2;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)AssumedBattleAssetLoadManager___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
}


void __fastcall AssumedBattleAssetLoadManager___c___ctor(
        AssumedBattleAssetLoadManager___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall AssumedBattleAssetLoadManager___c___GetEffectPathListFromAnalyzedParam_b__16_0(
        AssumedBattleAssetLoadManager___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return x > 0;
}


bool __fastcall AssumedBattleAssetLoadManager___c___IsPreloading_b__10_0(
        AssumedBattleAssetLoadManager___c_o *this,
        AssumedBattleAssetSearcherBase_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C1AE30(this, 0LL);
  return x->fields._LoadStatus_k__BackingField == 1;
}


bool __fastcall AssumedBattleAssetLoadManager___c___PreloadLocal_b__14_1(
        AssumedBattleAssetLoadManager___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return x > 0;
}


void __fastcall AssumedBattleAssetLoadManager___c__12_object____cctor(const MethodInfo_3161A80 *method)
{
  __int64 klass; // x0
  __int64 v3; // x0
  Il2CppObject *v4; // x20
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  __int64 v11; // x0
  __int64 v12; // x0
  __int64 v13; // x0
  __int64 v14; // x0

  klass = (__int64)method->klass;
  if ( (*(_BYTE *)(klass + 309) & 1) == 0 )
    klass = sub_1C6CAB0();
  v3 = **(_QWORD **)(klass + 192);
  if ( (*(_BYTE *)(v3 + 309) & 1) == 0 )
    v3 = sub_1C6CAB0();
  v4 = (Il2CppObject *)sub_1C1AE20(v3);
  if ( (BYTE5(method->klass->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_1C6CAB0();
  System_Object___ctor(v4, 0LL);
  v11 = (__int64)method->klass;
  if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
    v11 = sub_1C6CAB0();
  v12 = *(_QWORD *)(*(_QWORD *)(v11 + 192) + 16LL);
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1C6CAB0();
  **(_QWORD **)(v12 + 184) = v4;
  v13 = (__int64)method->klass;
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v13 = sub_1C6CAB0();
  v14 = *(_QWORD *)(*(_QWORD *)(v13 + 192) + 16LL);
  if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    v14 = sub_1C6CAB0();
  sub_1C1AB78(*(PartyOrganizationUtility_o **)(v14 + 184), (int64_t)v4, v5, v6, v7, v8, v9, v10);
}


void __fastcall AssumedBattleAssetLoadManager___c__12_object____ctor(
        AssumedBattleAssetLoadManager___c__12_T__o *this,
        const MethodInfo_3161B3C *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall AssumedBattleAssetLoadManager___c__12_object____Release_b__12_0(
        AssumedBattleAssetLoadManager___c__12_T__o *this,
        AssumedBattleAssetSearcherBase_o *x,
        const MethodInfo_3161B44 *method)
{
  __int64 _3_T; // x8

  _3_T = (__int64)method->klass->rgctx_data->_3_T;
  if ( (*(_BYTE *)(_3_T + 309) & 1) == 0 )
    _3_T = sub_1C6CAB0();
  return sub_1C1AD10(x, _3_T) != 0;
}


void __fastcall AssumedBattleAssetLoadManager___c__DisplayClass14_0___ctor(
        AssumedBattleAssetLoadManager___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall AssumedBattleAssetLoadManager___c__DisplayClass14_0___PreloadLocal_b__0(
        AssumedBattleAssetLoadManager___c__DisplayClass14_0_o *this,
        AssetData_o *_,
        const MethodInfo *method)
{
  int32_t loadCountMax; // w9
  int32_t v4; // w8
  struct AssumedBattleAssetSearcherBase_o *assetSearcher; // x8

  loadCountMax = this->fields.loadCountMax;
  v4 = this->fields.loadCount + 1;
  this->fields.loadCount = v4;
  if ( loadCountMax <= v4 )
  {
    assetSearcher = this->fields.assetSearcher;
    if ( !assetSearcher )
      sub_1C1AE30(this, _);
    assetSearcher->fields._LoadStatus_k__BackingField = 2;
  }
}


void __fastcall AssumedBattleAssetLoadManager___c__DisplayClass14_0___PreloadLocal_b__2(
        AssumedBattleAssetLoadManager___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  struct AssetLoader_LoadEndDataHandler_o *onLoadFinished; // x8

  onLoadFinished = this->fields.onLoadFinished;
  if ( !onLoadFinished )
    sub_1C1AE30(this, method);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))onLoadFinished->fields.m_target)(
    onLoadFinished->fields.original_method_info,
    0LL,
    *(_QWORD *)&onLoadFinished->fields.extra_arg);
}