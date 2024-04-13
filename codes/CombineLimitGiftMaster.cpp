void __fastcall CombineLimitGiftMaster___ctor(CombineLimitGiftMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E99BA & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_CombineLimitGiftMaster__CombineLimitGiftEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42E99BA = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    421,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_CombineLimitGiftMaster__CombineLimitGiftEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall CombineLimitGiftMaster__GetCombineLimitGiftId(
        CombineLimitGiftMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v26; // x1
  __int64 v27; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x23
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v30; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v33; // x8
  unsigned __int64 v34; // x10
  int32_t *v35; // x11
  __int64 v36; // x0
  _DWORD *v37; // x0
  __int64 v38; // x9
  int32_t v39; // w20
  int v40; // w8
  System_Collections_Generic_IEnumerator_T__c *v41; // x8
  unsigned __int64 v42; // x10
  int32_t *v43; // x11
  __int64 v44; // x0
  int v45; // w22
  __int64 v46; // x1
  __int64 v47; // x3
  System_Collections_Generic_IEnumerator_T__o *v48; // x21
  System_Collections_Generic_IEnumerator_T__c *v49; // x8
  unsigned __int64 v50; // x10
  int32_t *v51; // x11
  __int64 v52; // x0
  System_Collections_Generic_IEnumerator_T__c *v53; // x8
  unsigned __int64 v54; // x10
  int32_t *v55; // x11
  __int64 v56; // x0
  _DWORD *v57; // x0
  __int64 v58; // x9
  int v59; // w9
  int v60; // w25
  System_Collections_Generic_IEnumerator_T__c *v61; // x8
  unsigned __int64 v62; // x10
  int32_t *v63; // x11
  __int64 v64; // x0
  int v65; // w9
  int v67[4]; // [xsp+8h] [xbp-58h]
  int v68; // [xsp+18h] [xbp-48h]

  if ( (byte_42E99BB & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      svtId,
      limitCount,
      method);
    sub_B5D5C4(&CombineLimitGiftEntity_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantExceedMaster___, v10, v11, v12);
    sub_B5D5C4(&DataManager_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v19, v20, v21);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v22, v23, v24);
    byte_42E99BB = 1;
  }
  v68 = 0;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_75;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v26);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v30 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v30;
        p_offset += 4;
        if ( v30 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v27);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v33 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v34 = 0LL;
      v35 = &v33->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v35 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v34;
        v35 += 4;
        if ( v34 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v36 = (__int64)&v33->vtable[*v35].method;
    }
    else
    {
LABEL_16:
      v36 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v27);
    }
    v37 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v36)(
                      Enumerator,
                      *(_QWORD *)(v36 + 8));
    if ( v37 )
    {
      v38 = *(&CombineLimitGiftEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)v37 + 300LL) < (unsigned int)v38
        || *(CombineLimitGiftEntity_c **)(*(_QWORD *)(*(_QWORD *)v37 + 200LL) + 8 * v38 - 8) != CombineLimitGiftEntity_TypeInfo )
      {
        v57 = (_DWORD *)sub_B5D990(v37);
LABEL_74:
        list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)sub_B5D990(v57);
LABEL_75:
        sub_B5D69C(list, *(_QWORD *)&svtId);
      }
      if ( v37[4] == svtId && v37[6] == limitCount )
      {
        v39 = v37[7];
        v40 = 180;
        goto LABEL_25;
      }
    }
  }
  v40 = 76;
  v39 = 0;
LABEL_25:
  v67[0] = v40;
  v68 = 1;
  v41 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v42 = 0LL;
    v43 = &v41->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v43 - 1) != System_IDisposable_TypeInfo )
    {
      ++v42;
      v43 += 4;
      if ( v42 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v44 = (__int64)&v41->vtable[*v43].method;
  }
  else
  {
LABEL_29:
    v44 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v27);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v44)(Enumerator, *(_QWORD *)(v44 + 8));
  if ( v67[0] == 76 )
  {
    v68 = 0;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantExceedMaster___);
    if ( !list )
      goto LABEL_75;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)ServantExceedMaster__GetRarity(
                                                                                         (ServantExceedMaster_o *)list,
                                                                                         svtId,
                                                                                         0LL);
    if ( !this->fields.list )
      goto LABEL_75;
    v45 = (int)list;
    v48 = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    if ( !v48 )
      sub_B5D69C(0LL, v46);
    while ( 1 )
    {
      v49 = v48->klass;
      if ( *(_WORD *)&v48->klass->_2.bitflags1 )
      {
        v50 = 0LL;
        v51 = &v49->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)v51 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v50;
          v51 += 4;
          if ( v50 >= *(unsigned __int16 *)&v48->klass->_2.bitflags1 )
            goto LABEL_43;
        }
        v52 = (__int64)&v49->vtable[*v51].method;
      }
      else
      {
LABEL_43:
        v52 = sub_AF54C0(v48, System_Collections_IEnumerator_TypeInfo, 0LL, v47);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v52)(
              v48,
              *(_QWORD *)(v52 + 8)) & 1) == 0 )
        break;
      v53 = v48->klass;
      if ( *(_WORD *)&v48->klass->_2.bitflags1 )
      {
        v54 = 0LL;
        v55 = &v53->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v55 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
        {
          ++v54;
          v55 += 4;
          if ( v54 >= *(unsigned __int16 *)&v48->klass->_2.bitflags1 )
            goto LABEL_50;
        }
        v56 = (__int64)&v53->vtable[*v55].method;
      }
      else
      {
LABEL_50:
        v56 = sub_AF54C0(v48, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v47);
      }
      v57 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v56)(
                        v48,
                        *(_QWORD *)(v56 + 8));
      if ( v57 )
      {
        v58 = *(&CombineLimitGiftEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)v57 + 300LL) < (unsigned int)v58
          || *(CombineLimitGiftEntity_c **)(*(_QWORD *)(*(_QWORD *)v57 + 200LL) + 8 * v58 - 8) != CombineLimitGiftEntity_TypeInfo )
        {
          goto LABEL_74;
        }
        if ( !v57[4] && v57[5] == v45 && v57[6] == limitCount )
        {
          v39 = v57[7];
          v59 = 180;
          goto LABEL_60;
        }
      }
    }
    v59 = 178;
LABEL_60:
    v67[0] = v59;
    v60 = ++v68;
    v61 = v48->klass;
    if ( *(_WORD *)&v48->klass->_2.bitflags1 )
    {
      v62 = 0LL;
      v63 = &v61->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v63 - 1) != System_IDisposable_TypeInfo )
      {
        ++v62;
        v63 += 4;
        if ( v62 >= *(unsigned __int16 *)&v48->klass->_2.bitflags1 )
          goto LABEL_64;
      }
      v64 = (__int64)&v61->vtable[*v63].method;
    }
    else
    {
LABEL_64:
      v64 = sub_AF54C0(v48, System_IDisposable_TypeInfo, 0LL, v47);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v64)(v48, *(_QWORD *)(v64 + 8));
    if ( !v60 )
      return 0;
    v65 = v67[v60 - 1];
    if ( v65 == 178 )
    {
      v39 = 0;
    }
    else if ( v65 != 180 )
    {
      return 0;
    }
    v68 = v60 - 1;
    return v39;
  }
  v68 = 0;
  return v39;
}


// local variable allocation has failed, the output may be wrong!
CombineLimitGiftEntity_o *__fastcall CombineLimitGiftMaster__GetEntity(
        CombineLimitGiftMaster_o *this,
        int32_t svtId,
        int32_t rarity,
        int32_t limitCount,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42E99B8 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_CombineLimitGiftMaster__CombineLimitGiftEntity__string__GetEntity__,
      svtId,
      rarity,
      *(_QWORD *)&limitCount);
    byte_42E99B8 = 1;
  }
  PK = CombineLimitGiftEntity__CreatePK(svtId, rarity, limitCount, *(const MethodInfo **)&limitCount);
  return (CombineLimitGiftEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                       (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                       PK,
                                       (const MethodInfo_23FB260 *)Method_DataMasterBase_CombineLimitGiftMaster__CombineLimitGiftEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CombineLimitGiftMaster__TryGetEntity(
        CombineLimitGiftMaster_o *this,
        CombineLimitGiftEntity_o **entity,
        int32_t id,
        int32_t rarity,
        int32_t limitCount,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42E99B9 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_CombineLimitGiftMaster__CombineLimitGiftEntity__string__TryGetEntity__,
      (_DWORD)entity,
      id,
      *(_QWORD *)&rarity);
    byte_42E99B9 = 1;
  }
  PK = CombineLimitGiftEntity__CreatePK(id, rarity, limitCount, *(const MethodInfo **)&rarity);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_CombineLimitGiftMaster__CombineLimitGiftEntity__string__TryGetEntity__);
}