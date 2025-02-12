void __fastcall ServantLimitImageMaster___ctor(ServantLimitImageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BB4F7D & 1) == 0 )
  {
    sub_1C13D24(&Method_DataMasterBase_ServantLimitImageMaster__ServantLimitImageEntity__string___ctor__, method);
    byte_4BB4F7D = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    357,
    (const MethodInfo_323ADB8 *)Method_DataMasterBase_ServantLimitImageMaster__ServantLimitImageEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantLimitImageEntity_o *__fastcall ServantLimitImageMaster__GetEntity(
        ServantLimitImageMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4BB4F7B & 1) == 0 )
  {
    sub_1C13D24(
      &Method_DataMasterBase_ServantLimitImageMaster__ServantLimitImageEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_4BB4F7B = 1;
  }
  PK = (Il2CppObject *)ServantLimitImageEntity__CreatePK(svtId, limitCount, priority, *(const MethodInfo **)&priority);
  return (ServantLimitImageEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        PK,
                                        (const MethodInfo_323D0DC *)Method_DataMasterBase_ServantLimitImageMaster__ServantLimitImageEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantLimitImageMaster__GetLimitCountSealQuestToSvtId(
        ServantLimitImageMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  Il2CppObject *Master_object; // x0
  __int64 v11; // x1
  CommonReleaseMaster_o *v12; // x21
  __int64 v13; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v16; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  __int64 v20; // x9
  int32_t *v21; // x10
  __int64 v22; // x0
  __int64 v23; // x0
  __int64 v24; // x1
  __int64 v25; // x22
  unsigned int v26; // w8
  int32_t v27; // w21
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  __int64 v29; // x9
  int32_t *v30; // x10
  __int64 v31; // x0

  if ( (byte_4BB4F80 & 1) == 0 )
  {
    sub_1C13D24(
      &Method_System_Collections_ObjectModel_Collection_ServantLimitImageEntity__GetEnumerator__,
      *(_QWORD *)&questId);
    sub_1C13D24(&Method_DataManager_GetMaster_CommonReleaseMaster___, v5);
    sub_1C13D24(&DataManager_TypeInfo, v6);
    sub_1C13D24(&System_IDisposable_TypeInfo, v7);
    sub_1C13D24(&System_Collections_Generic_IEnumerator_ServantLimitImageEntity__TypeInfo, v8);
    sub_1C13D24(&System_Collections_IEnumerator_TypeInfo, v9);
    byte_4BB4F80 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !this->fields.list )
    sub_1C13F80(Master_object, v11);
  v12 = (CommonReleaseMaster_o *)Master_object;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
                 (const MethodInfo_31D2F00 *)Method_System_Collections_ObjectModel_Collection_ServantLimitImageEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C13F80(0LL, v13);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v16 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v16;
        p_offset += 4;
        if ( !v16 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_1C65D04(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v19 = Enumerator->klass;
    v20 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v21 = &v19->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ServantLimitImageEntity__c **)v21 - 1) != System_Collections_Generic_IEnumerator_ServantLimitImageEntity__TypeInfo )
      {
        --v20;
        v21 += 4;
        if ( !v20 )
          goto LABEL_18;
      }
      v22 = (__int64)&v19->vtable[*v21].method;
    }
    else
    {
LABEL_18:
      v22 = sub_1C65D04(Enumerator, System_Collections_Generic_IEnumerator_ServantLimitImageEntity__TypeInfo, 0LL);
    }
    v23 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
            Enumerator,
            *(_QWORD *)(v22 + 8));
    v25 = v23;
    if ( !v23 )
      sub_1C13F80(0LL, v24);
    v26 = *(_DWORD *)(v23 + 32);
    if ( v26 <= 0x2E && ((1LL << v26) & 0x400002000002LL) != 0 )
    {
      if ( *(_DWORD *)(v23 + 36) == questId )
        goto LABEL_28;
    }
    else if ( v26 == 113 )
    {
      if ( !v12 )
        sub_1C13F80(v23, v24);
      if ( CommonReleaseMaster__IsQuestContain(v12, questId, *(_DWORD *)(v23 + 36), 0LL) )
      {
LABEL_28:
        v27 = *(_DWORD *)(v25 + 16);
        goto LABEL_30;
      }
    }
  }
  v27 = 0;
LABEL_30:
  v28 = Enumerator->klass;
  v29 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v30 = &v28->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v30 - 1) != System_IDisposable_TypeInfo )
    {
      --v29;
      v30 += 4;
      if ( !v29 )
        goto LABEL_34;
    }
    v31 = (__int64)&v28->vtable[*v30].method;
  }
  else
  {
LABEL_34:
    v31 = sub_1C65D04(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(Enumerator, *(_QWORD *)(v31 + 8));
  return v27;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantLimitImageMaster__GetLimitCountSealedDialogMessage(
        ServantLimitImageMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *LimitCountSealedServantName; // x19
  System_String_o *v10; // x0
  System_String_o *v11; // x20
  System_String_o *v12; // x21
  int32_t v14; // [xsp+Ch] [xbp-34h] BYREF

  v14 = svtId;
  if ( (byte_4BB4F81 & 1) == 0 )
  {
    sub_1C13D24(&LocalizationManager_TypeInfo, *(_QWORD *)&svtId);
    sub_1C13D24(&StringLiteral_8412/*"LIMITUP_MAX_TXT"*/, v7);
    sub_1C13D24(&StringLiteral_8411/*"LIMITUP_CHECK_WARNING_SLIDER"*/, v8);
    byte_4BB4F81 = 1;
  }
  LimitCountSealedServantName = (Il2CppObject *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                  this,
                                                  svtId,
                                                  limitCount,
                                                  method);
  v10 = System_Int32__ToString((int32_t)&v14, 0LL);
  v11 = System_String__Concat_62967944((System_String_o *)StringLiteral_8412/*"LIMITUP_MAX_TXT"*/, v10, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v12 = LocalizationManager__Get(v11, 0LL);
  if ( System_String__op_Equality(v12, v11, 0LL) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v12 = LocalizationManager__Get((System_String_o *)StringLiteral_8411/*"LIMITUP_CHECK_WARNING_SLIDER"*/, 0LL);
  }
  return System_String__Format(v12, LimitCountSealedServantName, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantLimitImageMaster__GetLimitCountSealedServantName(
        ServantLimitImageMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_String_o *v10; // x22
  Il2CppObject *Master_object; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x3
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BB4F82 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMaster_ServantMaster___, *(_QWORD *)&svtId);
    sub_1C13D24(&DataManager_TypeInfo, v7);
    sub_1C13D24(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v8);
    sub_1C13D24(&StringLiteral_1/*""*/, v9);
    byte_4BB4F82 = 1;
  }
  entity = 0LL;
  v10 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Master_object )
    goto LABEL_10;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &entity,
         svtId,
         (const MethodInfo_3238670 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
  {
    Master_object = (Il2CppObject *)ServantLimitImageMaster__GetServantLimitCountSealAfter(this, svtId, limitCount, v13);
    if ( entity )
      return ServantEntity__getName((ServantEntity_o *)entity, (int32_t)Master_object, -1, 0LL);
LABEL_10:
    sub_1C13F80(Master_object, v12);
  }
  return v10;
}


int32_t __fastcall ServantLimitImageMaster__GetServantImageLimitSealAfter(
        ServantLimitImageMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  int v4; // w20
  int32_t ServantLimitCountSealAfter; // w0

  if ( limitCount >= 11 )
    v4 = limitCount;
  else
    v4 = limitCount + 1;
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(this, svtId, v4, method);
  if ( ServantLimitCountSealAfter == v4 )
    return limitCount;
  else
    return ServantLimitCountSealAfter - (limitCount < 11);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantLimitImageMaster__GetServantLimitCountSealAfter(
        ServantLimitImageMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
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
  System_Collections_Generic_List_object__o *v23; // x20
  __int64 v24; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v26; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v29; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v32; // x8
  __int64 v33; // x9
  int32_t *v34; // x10
  __int64 v35; // x0
  __int64 v36; // x0
  __int64 v37; // x1
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  int64_t v44; // x8
  struct System_Object_array *items; // x9
  _QWORD *v46; // x10
  __int64 size; // x11
  Il2CppClass **v48; // x0
  System_Collections_Generic_IEnumerator_T__c *v49; // x8
  __int64 v50; // x9
  int32_t *v51; // x10
  __int64 v52; // x0
  ServantLimitImageMaster___c_c *v53; // x0
  System_Comparison_T__o *_9__4_0; // x21
  Il2CppObject *v55; // x22
  struct ServantLimitImageMaster___c_StaticFields *static_fields; // x0
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  _BOOL8 v63; // x0
  __int64 v64; // x1
  Il2CppObject *current; // x26
  int32_t klass_high; // w20
  int32_t v67; // w22
  int64_t monitor_low; // x21
  System_Collections_Generic_List_Enumerator_object__o v70; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4BB4F7E & 1) == 0 )
  {
    sub_1C13D24(
      &Method_System_Collections_ObjectModel_Collection_ServantLimitImageEntity__GetEnumerator__,
      *(_QWORD *)&svtId);
    sub_1C13D24(&System_Comparison_ServantLimitImageEntity__TypeInfo, v7);
    sub_1C13D24(&CondType_TypeInfo, v8);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_ServantLimitImageEntity__Dispose__, v9);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_ServantLimitImageEntity__MoveNext__, v10);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_ServantLimitImageEntity__get_Current__, v11);
    sub_1C13D24(&System_IDisposable_TypeInfo, v12);
    sub_1C13D24(&System_Collections_Generic_IEnumerator_ServantLimitImageEntity__TypeInfo, v13);
    sub_1C13D24(&System_Collections_IEnumerator_TypeInfo, v14);
    sub_1C13D24(&Method_System_Collections_Generic_List_ServantLimitImageEntity__Add__, v15);
    sub_1C13D24(&Method_System_Collections_Generic_List_ServantLimitImageEntity__GetEnumerator__, v16);
    sub_1C13D24(&Method_System_Collections_Generic_List_ServantLimitImageEntity__Sort__, v17);
    sub_1C13D24(&Method_System_Collections_Generic_List_ServantLimitImageEntity___ctor__, v18);
    sub_1C13D24(&Method_System_Collections_Generic_List_ServantLimitImageEntity__get_Count__, v19);
    sub_1C13D24(&System_Collections_Generic_List_ServantLimitImageEntity__TypeInfo, v20);
    sub_1C13D24(&Method_ServantLimitImageMaster___c__GetServantLimitCountSealAfter_b__4_0__, v21);
    sub_1C13D24(&ServantLimitImageMaster___c_TypeInfo, v22);
    byte_4BB4F7E = 1;
  }
  memset(&v70, 0, sizeof(v70));
  v23 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_ServantLimitImageEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_ServantLimitImageEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_53;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_31D2F00 *)Method_System_Collections_ObjectModel_Collection_ServantLimitImageEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C13F80(0LL, v26);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v29 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v29;
        p_offset += 4;
        if ( !v29 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C65D04(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v32 = Enumerator->klass;
    v33 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v34 = &v32->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ServantLimitImageEntity__c **)v34 - 1) != System_Collections_Generic_IEnumerator_ServantLimitImageEntity__TypeInfo )
      {
        --v33;
        v34 += 4;
        if ( !v33 )
          goto LABEL_16;
      }
      v35 = (__int64)&v32->vtable[*v34].method;
    }
    else
    {
LABEL_16:
      v35 = sub_1C65D04(Enumerator, System_Collections_Generic_IEnumerator_ServantLimitImageEntity__TypeInfo, 0LL);
    }
    v36 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v35)(
            Enumerator,
            *(_QWORD *)(v35 + 8));
    v44 = v36;
    if ( !v36 )
      sub_1C13F80(0LL, v37);
    if ( *(_DWORD *)(v36 + 16) == svtId && *(_DWORD *)(v36 + 20) == limitCount )
    {
      if ( !v23 )
        sub_1C13F80(v36, v37);
      items = v23->fields._items;
      v46 = Method_System_Collections_Generic_List_ServantLimitImageEntity__Add__;
      ++v23->fields._version;
      if ( !items )
        sub_1C13F80(v36, v37);
      size = v23->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v23,
          (Il2CppObject *)v36,
          *(const MethodInfo_362D1CC **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
      }
      else
      {
        v48 = &items->obj.klass + size;
        v23->fields._size = size + 1;
        v48[4] = (Il2CppClass *)v44;
        sub_1C13CC8((PartyOrganizationUtility_o *)(v48 + 4), v44, v38, v39, v40, v41, v42, v43);
      }
    }
  }
  v49 = Enumerator->klass;
  v50 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v51 = &v49->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v51 - 1) != System_IDisposable_TypeInfo )
    {
      --v50;
      v51 += 4;
      if ( !v50 )
        goto LABEL_30;
    }
    v52 = (__int64)&v49->vtable[*v51].method;
  }
  else
  {
LABEL_30:
    v52 = sub_1C65D04(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v52)(
                                                             Enumerator,
                                                             *(_QWORD *)(v52 + 8));
  if ( !v23 )
LABEL_53:
    sub_1C13F80(list, v24);
  if ( v23->fields._size > 0 )
  {
    v53 = ServantLimitImageMaster___c_TypeInfo;
    if ( !ServantLimitImageMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantLimitImageMaster___c_TypeInfo);
      v53 = ServantLimitImageMaster___c_TypeInfo;
    }
    _9__4_0 = (System_Comparison_T__o *)v53->static_fields->__9__4_0;
    if ( !_9__4_0 )
    {
      if ( !v53->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v53);
        v53 = ServantLimitImageMaster___c_TypeInfo;
      }
      v55 = (Il2CppObject *)v53->static_fields->__9;
      _9__4_0 = (System_Comparison_T__o *)sub_1C13F70(System_Comparison_ServantLimitImageEntity__TypeInfo);
      System_Comparison_object____ctor(
        _9__4_0,
        v55,
        Method_ServantLimitImageMaster___c__GetServantLimitCountSealAfter_b__4_0__,
        0LL);
      static_fields = ServantLimitImageMaster___c_TypeInfo->static_fields;
      static_fields->__9__4_0 = (struct System_Comparison_ServantLimitImageEntity__o *)_9__4_0;
      sub_1C13CC8(
        (PartyOrganizationUtility_o *)&static_fields->__9__4_0,
        (int64_t)_9__4_0,
        v57,
        v58,
        v59,
        v60,
        v61,
        v62);
    }
    System_Collections_Generic_List_object___Sort_56814736(
      v23,
      _9__4_0,
      (const MethodInfo_362EC90 *)Method_System_Collections_Generic_List_ServantLimitImageEntity__Sort__);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v70,
      v23,
      (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_ServantLimitImageEntity__GetEnumerator__);
    while ( 1 )
    {
      v63 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v70,
              (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_ServantLimitImageEntity__MoveNext__);
      if ( !v63 )
        break;
      current = v70.fields._current;
      if ( !v70.fields._current )
        sub_1C13F80(v63, v64);
      v67 = (int32_t)v70.fields._current[2].klass;
      klass_high = HIDWORD(v70.fields._current[2].klass);
      monitor_low = SLODWORD(v70.fields._current[2].monitor);
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( !CondType__IsOpen(v67, klass_high, monitor_low, 0, 0LL, 0LL) )
        limitCount = HIDWORD(current[1].monitor);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v70,
      (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_ServantLimitImageEntity__Dispose__);
  }
  return limitCount;
}


System_String_o *__fastcall ServantLimitImageMaster__GetServantStatusExplanationText(
        ServantLimitImageMaster_o *this,
        System_String_o *key,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_String_o *v6; // x0
  System_String_o *v7; // x20
  System_String_o *v8; // x21
  int32_t v10; // [xsp+Ch] [xbp-24h] BYREF

  v10 = svtId;
  if ( (byte_4BB4F83 & 1) == 0 )
  {
    sub_1C13D24(&LocalizationManager_TypeInfo, key);
    sub_1C13D24(&StringLiteral_16374/*"^c"*/, v5);
    byte_4BB4F83 = 1;
  }
  v6 = System_Int32__ToString((int32_t)&v10, 0LL);
  v7 = System_String__Concat_62979204(key, (System_String_o *)StringLiteral_16374/*"^c"*/, v6, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = LocalizationManager__Get(v7, 0LL);
  if ( System_String__op_Equality(v8, v7, 0LL) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    return LocalizationManager__Get(key, 0LL);
  }
  return v8;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantLimitImageMaster__IsCommonReleaseMultiClear(
        ServantLimitImageMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  Il2CppObject *Master_object; // x0
  __int64 v11; // x1
  CommonReleaseMaster_o *v12; // x21
  __int64 v13; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v16; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  __int64 v20; // x9
  int32_t *v21; // x10
  __int64 v22; // x0
  __int64 v23; // x0
  __int64 v24; // x1
  __int64 v25; // x22
  bool IsOpen; // w21
  char v27; // w22
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  __int64 v29; // x9
  int32_t *v30; // x10
  __int64 v31; // x0

  if ( (byte_4BB4F84 & 1) == 0 )
  {
    sub_1C13D24(
      &Method_System_Collections_ObjectModel_Collection_ServantLimitImageEntity__GetEnumerator__,
      *(_QWORD *)&questId);
    sub_1C13D24(&Method_DataManager_GetMaster_CommonReleaseMaster___, v5);
    sub_1C13D24(&DataManager_TypeInfo, v6);
    sub_1C13D24(&System_IDisposable_TypeInfo, v7);
    sub_1C13D24(&System_Collections_Generic_IEnumerator_ServantLimitImageEntity__TypeInfo, v8);
    sub_1C13D24(&System_Collections_IEnumerator_TypeInfo, v9);
    byte_4BB4F84 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !this->fields.list )
    sub_1C13F80(Master_object, v11);
  v12 = (CommonReleaseMaster_o *)Master_object;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
                 (const MethodInfo_31D2F00 *)Method_System_Collections_ObjectModel_Collection_ServantLimitImageEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C13F80(0LL, v13);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v16 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v16;
        p_offset += 4;
        if ( !v16 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_1C65D04(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v19 = Enumerator->klass;
    v20 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v21 = &v19->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ServantLimitImageEntity__c **)v21 - 1) != System_Collections_Generic_IEnumerator_ServantLimitImageEntity__TypeInfo )
      {
        --v20;
        v21 += 4;
        if ( !v20 )
          goto LABEL_18;
      }
      v22 = (__int64)&v19->vtable[*v21].method;
    }
    else
    {
LABEL_18:
      v22 = sub_1C65D04(Enumerator, System_Collections_Generic_IEnumerator_ServantLimitImageEntity__TypeInfo, 0LL);
    }
    v23 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
            Enumerator,
            *(_QWORD *)(v22 + 8));
    v25 = v23;
    if ( !v23 )
      sub_1C13F80(0LL, v24);
    if ( *(_DWORD *)(v23 + 32) == 113 )
    {
      if ( !v12 )
        sub_1C13F80(v23, v24);
      if ( CommonReleaseMaster__IsQuestContain(v12, questId, *(_DWORD *)(v23 + 36), 0LL) )
      {
        IsOpen = CommonReleaseMaster__IsOpen(v12, *(_DWORD *)(v25 + 36), 0LL, 0, 0LL);
        v27 = 1;
        goto LABEL_26;
      }
    }
  }
  v27 = 0;
  IsOpen = 0;
LABEL_26:
  v28 = Enumerator->klass;
  v29 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v30 = &v28->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v30 - 1) != System_IDisposable_TypeInfo )
    {
      --v29;
      v30 += 4;
      if ( !v29 )
        goto LABEL_30;
    }
    v31 = (__int64)&v28->vtable[*v30].method;
  }
  else
  {
LABEL_30:
    v31 = sub_1C65D04(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(Enumerator, *(_QWORD *)(v31 + 8));
  return v27 & IsOpen;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantLimitImageMaster__IsLimitCountSealQuest(
        ServantLimitImageMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  Il2CppObject *Master_object; // x0
  __int64 v11; // x1
  CommonReleaseMaster_o *v12; // x21
  __int64 v13; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v16; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  __int64 v20; // x9
  int32_t *v21; // x10
  __int64 v22; // x0
  __int64 v23; // x0
  __int64 v24; // x1
  unsigned int v25; // w9
  bool v26; // w21
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  __int64 v28; // x9
  int32_t *v29; // x10
  __int64 v30; // x0

  if ( (byte_4BB4F7F & 1) == 0 )
  {
    sub_1C13D24(
      &Method_System_Collections_ObjectModel_Collection_ServantLimitImageEntity__GetEnumerator__,
      *(_QWORD *)&questId);
    sub_1C13D24(&Method_DataManager_GetMaster_CommonReleaseMaster___, v5);
    sub_1C13D24(&DataManager_TypeInfo, v6);
    sub_1C13D24(&System_IDisposable_TypeInfo, v7);
    sub_1C13D24(&System_Collections_Generic_IEnumerator_ServantLimitImageEntity__TypeInfo, v8);
    sub_1C13D24(&System_Collections_IEnumerator_TypeInfo, v9);
    byte_4BB4F7F = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !this->fields.list )
    sub_1C13F80(Master_object, v11);
  v12 = (CommonReleaseMaster_o *)Master_object;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
                 (const MethodInfo_31D2F00 *)Method_System_Collections_ObjectModel_Collection_ServantLimitImageEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C13F80(0LL, v13);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v16 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v16;
        p_offset += 4;
        if ( !v16 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_1C65D04(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v19 = Enumerator->klass;
    v20 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v21 = &v19->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ServantLimitImageEntity__c **)v21 - 1) != System_Collections_Generic_IEnumerator_ServantLimitImageEntity__TypeInfo )
      {
        --v20;
        v21 += 4;
        if ( !v20 )
          goto LABEL_18;
      }
      v22 = (__int64)&v19->vtable[*v21].method;
    }
    else
    {
LABEL_18:
      v22 = sub_1C65D04(Enumerator, System_Collections_Generic_IEnumerator_ServantLimitImageEntity__TypeInfo, 0LL);
    }
    v23 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
            Enumerator,
            *(_QWORD *)(v22 + 8));
    if ( !v23 )
      sub_1C13F80(0LL, v24);
    v25 = *(_DWORD *)(v23 + 32);
    if ( v25 <= 0x2E && ((1LL << v25) & 0x400002000002LL) != 0 )
    {
      if ( *(_DWORD *)(v23 + 36) == questId )
        goto LABEL_28;
    }
    else if ( v25 == 113 )
    {
      if ( !v12 )
        sub_1C13F80(v23, v24);
      if ( CommonReleaseMaster__IsQuestContain(v12, questId, *(_DWORD *)(v23 + 36), 0LL) )
      {
LABEL_28:
        v26 = 1;
        goto LABEL_30;
      }
    }
  }
  v26 = 0;
LABEL_30:
  v27 = Enumerator->klass;
  v28 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v29 = &v27->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v29 - 1) != System_IDisposable_TypeInfo )
    {
      --v28;
      v29 += 4;
      if ( !v28 )
        goto LABEL_34;
    }
    v30 = (__int64)&v27->vtable[*v29].method;
  }
  else
  {
LABEL_34:
    v30 = sub_1C65D04(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(Enumerator, *(_QWORD *)(v30 + 8));
  return v26;
}


bool __fastcall ServantLimitImageMaster__IsServantLimitCountSeal(
        ServantLimitImageMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  return ServantLimitImageMaster__GetServantLimitCountSealAfter(this, svtId, limitCount, method) != limitCount;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantLimitImageMaster__TryGetEntity(
        ServantLimitImageMaster_o *this,
        ServantLimitImageEntity_o **entity,
        int32_t svtId,
        int32_t limitCount,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4BB4F7C & 1) == 0 )
  {
    sub_1C13D24(&Method_DataMasterBase_ServantLimitImageMaster__ServantLimitImageEntity__string__TryGetEntity__, entity);
    byte_4BB4F7C = 1;
  }
  PK = (Il2CppObject *)ServantLimitImageEntity__CreatePK(svtId, limitCount, priority, *(const MethodInfo **)&limitCount);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_323D128 *)Method_DataMasterBase_ServantLimitImageMaster__ServantLimitImageEntity__string__TryGetEntity__);
}


void __fastcall ServantLimitImageMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BB4F85 & 1) == 0 )
  {
    sub_1C13D24(&ServantLimitImageMaster___c_TypeInfo, v1);
    byte_4BB4F85 = 1;
  }
  v2 = (Il2CppObject *)sub_1C13F70(ServantLimitImageMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ServantLimitImageMaster___c_TypeInfo->static_fields->__9 = (struct ServantLimitImageMaster___c_o *)v2;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)ServantLimitImageMaster___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
}


void __fastcall ServantLimitImageMaster___c___ctor(ServantLimitImageMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall ServantLimitImageMaster___c___GetServantLimitCountSealAfter_b__4_0(
        ServantLimitImageMaster___c_o *this,
        ServantLimitImageEntity_o *x,
        ServantLimitImageEntity_o *y,
        const MethodInfo *method)
{
  if ( !y || !x )
    sub_1C13F80(this, x);
  return y->fields.priority - x->fields.priority;
}