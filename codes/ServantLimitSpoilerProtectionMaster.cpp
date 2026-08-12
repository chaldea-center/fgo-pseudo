void ServantLimitSpoilerProtectionMaster___cctor(const MethodInfo *method)
{
  if ( (byte_5971264 & 1) == 0 )
  {
    sub_2213A60(&ServantLimitSpoilerProtectionMaster_TypeInfo);
    byte_5971264 = 1;
  }
  ServantLimitSpoilerProtectionMaster_TypeInfo->static_fields->LIMIT_COUNT_THIRD_STAGE = 3;
}


void ServantLimitSpoilerProtectionMaster___ctor(ServantLimitSpoilerProtectionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_597125E & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_ServantLimitSpoilerProtectionMaster__ServantLimitSpoilerProtectionEntity__string___ctor__);
    byte_597125E = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    320,
    (const MethodInfo_3F1339C *)Method_DataMasterBase_ServantLimitSpoilerProtectionMaster__ServantLimitSpoilerProtectionEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
int32_t ServantLimitSpoilerProtectionMaster__AdjustLimitCount(
        ServantLimitSpoilerProtectionMaster_o *this,
        int32_t limitCount,
        const MethodInfo *method)
{
  int LIMIT_COUNT_THIRD_STAGE; // w19
  ServantLimitSpoilerProtectionMaster_c *v4; // x0

  LIMIT_COUNT_THIRD_STAGE = limitCount;
  if ( (byte_5971260 & 1) == 0 )
  {
    sub_2213A60(&ServantLimitSpoilerProtectionMaster_TypeInfo);
    byte_5971260 = 1;
  }
  v4 = ServantLimitSpoilerProtectionMaster_TypeInfo;
  if ( !*(&ServantLimitSpoilerProtectionMaster_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantLimitSpoilerProtectionMaster_TypeInfo, *(_QWORD *)&limitCount);
    v4 = ServantLimitSpoilerProtectionMaster_TypeInfo;
  }
  if ( LIMIT_COUNT_THIRD_STAGE <= 10 && v4->static_fields->LIMIT_COUNT_THIRD_STAGE < LIMIT_COUNT_THIRD_STAGE )
  {
    LIMIT_COUNT_THIRD_STAGE = v4->static_fields->LIMIT_COUNT_THIRD_STAGE;
    if ( !*(&v4->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v4, *(_QWORD *)&limitCount);
      return ServantLimitSpoilerProtectionMaster_TypeInfo->static_fields->LIMIT_COUNT_THIRD_STAGE;
    }
  }
  return LIMIT_COUNT_THIRD_STAGE;
}


int32_t ServantLimitSpoilerProtectionMaster__ChangeLimitCountBySpoilerProtection(
        ServantLimitSpoilerProtectionMaster_o *this,
        CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v5; // x19
  __int64 v6; // x20
  bool FriendCostume; // w0
  __int64 v9; // x1
  BalanceConfig_c *v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x4
  BalanceConfig_c *v13; // x0
  __int64 v14; // x1
  BalanceConfig_c *v15; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x1.16

  v5 = *(_QWORD *)&svtId.fields.fakeValue;
  v6 = *(_QWORD *)&svtId.fields.currentCryptoKey;
  if ( (byte_597125F & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&OptionManager_TypeInfo);
    byte_597125F = 1;
  }
  if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, *(_QWORD *)&svtId.fields.currentCryptoKey);
  FriendCostume = OptionManager__GetFriendCostume(0);
  if ( limitCount >= 11 && !FriendCostume )
  {
    v10 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v9);
      v10 = BalanceConfig_TypeInfo;
    }
    limitCount = v10->static_fields->ServantLimitMax;
  }
  if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v9);
  if ( !OptionManager__GetFriendImageLimitCount(0) )
  {
    v13 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v11);
      v13 = BalanceConfig_TypeInfo;
    }
    limitCount -= limitCount == v13->static_fields->ServantLimitMax;
  }
  do
  {
    *(_QWORD *)&v17.fields.currentCryptoKey = v6;
    *(_QWORD *)&v17.fields.fakeValue = v5;
    if ( ServantLimitSpoilerProtectionMaster__IsSpoilerLimitCount(this, v17, limitCount, v12) )
      break;
    if ( limitCount >= 11 )
    {
      v15 = BalanceConfig_TypeInfo;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v14);
        v15 = BalanceConfig_TypeInfo;
      }
      limitCount = v15->static_fields->ServantLimitMax;
    }
    else
    {
      --limitCount;
    }
  }
  while ( limitCount > 1 );
  return limitCount;
}


bool ServantLimitSpoilerProtectionMaster__CheckLimitCount(
        ServantLimitSpoilerProtectionMaster_o *this,
        int32_t svtId,
        int32_t selectedLimitCount,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  __int64 v8; // x1
  Il2CppObject *Master_object; // x0
  __int64 v10; // x1
  ServantLimitSpoilerProtectionEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5971263 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    byte_5971263 = 1;
  }
  entity = 0;
  if ( ServantLimitSpoilerProtectionMaster__TryGetEntity(this, &entity, svtId, selectedLimitCount, v4) )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v8);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
    if ( !entity || !Master_object )
      sub_2213CDC(Master_object, v10);
    return CommonReleaseMaster__IsOpen(
             (CommonReleaseMaster_o *)Master_object,
             *(_DWORD *)((char *)off_18 + (_QWORD)entity),
             0,
             0,
             0);
  }
  else
  {
    return 1;
  }
}


// local variable allocation has failed, the output may be wrong!
ServantLimitSpoilerProtectionEntity_o *ServantLimitSpoilerProtectionMaster__GetEntity(
        ServantLimitSpoilerProtectionMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_597125C & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_ServantLimitSpoilerProtectionMaster__ServantLimitSpoilerProtectionEntity__string__GetEntity__);
    byte_597125C = 1;
  }
  PK = (Il2CppObject *)ServantLimitSpoilerProtectionEntity__CreatePK(
                         svtId,
                         limitCount,
                         *(const MethodInfo **)&limitCount);
  return (ServantLimitSpoilerProtectionEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                    PK,
                                                    (const MethodInfo_3F157EC *)Method_DataMasterBase_ServantLimitSpoilerProtectionMaster__ServantLimitSpoilerProtectionEntity__string__GetEntity__);
}


System_Int32_array *ServantLimitSpoilerProtectionMaster__GetSpoilerProtectionData(
        ServantLimitSpoilerProtectionMaster_o *this,
        CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x22
  System_Collections_Generic_List_int__o *v8; // x19
  __int64 v9; // x1
  __int64 list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v12; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x23
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v15; // x9
  int *p_offset; // x10
  __int64 v17; // x0
  System_Collections_Generic_IEnumerator_T__c *v18; // x8
  __int64 v19; // x9
  int *v20; // x10
  __int64 v21; // x0
  __int64 v22; // x1
  _DWORD *v23; // x23
  int v24; // w28
  __int64 v25; // x0
  __int64 v26; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  System_Collections_Generic_IEnumerator_T__c *v30; // x8
  __int64 v31; // x9
  int *v32; // x10
  __int64 v33; // x0
  System_Collections_Generic_IEnumerator_T__o *v35; // [xsp+18h] [xbp-58h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16

  v5 = *(_QWORD *)&svtId.fields.fakeValue;
  v6 = *(_QWORD *)&svtId.fields.currentCryptoKey;
  if ( (byte_5971261 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_ServantLimitSpoilerProtectionEntity__GetEnumerator__);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_ServantLimitSpoilerProtectionEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5971261 = 1;
  }
  v8 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (__int64)this->fields.list;
  if ( !list )
    goto LABEL_45;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)list,
                 (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_ServantLimitSpoilerProtectionEntity__GetEnumerator__);
  v35 = Enumerator;
  if ( !Enumerator )
    sub_2213CDC(Enumerator, v12);
  for ( i = Enumerator; ; i = v35 )
  {
    klass = i->klass;
    v15 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v15;
        p_offset += 4;
        if ( !v15 )
          goto LABEL_10;
      }
      v17 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v17 = sub_224BC3C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    list = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
             i,
             *(_QWORD *)(v17 + 8));
    if ( (list & 1) == 0 )
      break;
    if ( !v35 )
      sub_2213CDC(list, v9);
    v18 = v35->klass;
    v19 = *(unsigned __int16 *)&v35->klass->_2.rank;
    if ( *(_WORD *)&v35->klass->_2.rank )
    {
      v20 = &v18->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ServantLimitSpoilerProtectionEntity__c **)v20 - 1) != System_Collections_Generic_IEnumerator_ServantLimitSpoilerProtectionEntity__TypeInfo )
      {
        --v19;
        v20 += 4;
        if ( !v19 )
          goto LABEL_18;
      }
      v21 = (__int64)&v18->vtable[*v20];
    }
    else
    {
LABEL_18:
      v21 = sub_224BC3C(v35, System_Collections_Generic_IEnumerator_ServantLimitSpoilerProtectionEntity__TypeInfo, 0);
    }
    v23 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(
                      v35,
                      *(_QWORD *)(v21 + 8));
    if ( !v23 )
      sub_2213CDC(0, v22);
    v24 = v23[4];
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v22);
    *(_QWORD *)&v36.fields.currentCryptoKey = v6;
    *(_QWORD *)&v36.fields.fakeValue = v5;
    v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v36, 0);
    if ( v24 == (_DWORD)v25 && v23[5] == limitCount )
    {
      if ( !v8
        || (items = v8->fields._items,
            v26 = (unsigned int)v23[6],
            v28 = Method_System_Collections_Generic_List_int__Add__,
            ++v8->fields._version,
            !items) )
      {
        sub_2213CDC(v25, v26);
      }
      size = v8->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v8,
          v26,
          *(const MethodInfo_4467270 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
      }
      else
      {
        v8->fields._size = size + 1;
        items->m_Items[size] = v26;
      }
    }
  }
  if ( v35 )
  {
    v30 = v35->klass;
    v31 = *(unsigned __int16 *)&v35->klass->_2.rank;
    if ( *(_WORD *)&v35->klass->_2.rank )
    {
      v32 = &v30->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v32 - 1) != System_IDisposable_TypeInfo )
      {
        --v31;
        v32 += 4;
        if ( !v31 )
          goto LABEL_37;
      }
      v33 = (__int64)&v30->vtable[*v32];
    }
    else
    {
LABEL_37:
      v33 = sub_224BC3C(v35, System_IDisposable_TypeInfo, 0);
    }
    list = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v33)(
             v35,
             *(_QWORD *)(v33 + 8));
  }
  if ( !v8 )
LABEL_45:
    sub_2213CDC(list, v9);
  return System_Collections_Generic_List_int___ToArray(
           v8,
           (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
}


bool ServantLimitSpoilerProtectionMaster__IsSpoilerLimitCount(
        ServantLimitSpoilerProtectionMaster_o *this,
        CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x21
  System_Int32_array *SpoilerProtectionData; // x0
  __int64 v9; // x1
  System_Int32_array *v10; // x19
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v12; // x21
  int32_t v13; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x1.16

  v5 = *(_QWORD *)&svtId.fields.fakeValue;
  v6 = *(_QWORD *)&svtId.fields.currentCryptoKey;
  if ( (byte_5971262 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5971262 = 1;
  }
  *(_QWORD *)&v15.fields.currentCryptoKey = v6;
  *(_QWORD *)&v15.fields.fakeValue = v5;
  SpoilerProtectionData = ServantLimitSpoilerProtectionMaster__GetSpoilerProtectionData(this, v15, limitCount, method);
  if ( !SpoilerProtectionData )
    goto LABEL_16;
  v10 = SpoilerProtectionData;
  if ( SpoilerProtectionData->max_length )
  {
    max_length = SpoilerProtectionData->max_length;
    if ( (int)max_length >= 1 )
    {
      v12 = 0;
      while ( 1 )
      {
        if ( v12 >= (unsigned int)max_length )
          sub_2213CE4(SpoilerProtectionData);
        v13 = v10->m_Items[v12];
        SpoilerProtectionData = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !SpoilerProtectionData )
          break;
        SpoilerProtectionData = (System_Int32_array *)DataManager__GetMasterData_object_(
                                                        (DataManager_o *)SpoilerProtectionData,
                                                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
        if ( !SpoilerProtectionData )
          break;
        SpoilerProtectionData = (System_Int32_array *)CommonReleaseMaster__IsOpen(
                                                        (CommonReleaseMaster_o *)SpoilerProtectionData,
                                                        v13,
                                                        0,
                                                        0,
                                                        0);
        if ( ((unsigned __int8)SpoilerProtectionData & 1) == 0 )
        {
          LODWORD(max_length) = v10->max_length;
          if ( (__int64)++v12 < (int)max_length )
            continue;
        }
        return (unsigned __int8)SpoilerProtectionData & 1;
      }
LABEL_16:
      sub_2213CDC(SpoilerProtectionData, v9);
    }
    LOBYTE(SpoilerProtectionData) = 0;
  }
  else
  {
    LOBYTE(SpoilerProtectionData) = 1;
  }
  return (unsigned __int8)SpoilerProtectionData & 1;
}


// local variable allocation has failed, the output may be wrong!
bool ServantLimitSpoilerProtectionMaster__TryGetEntity(
        ServantLimitSpoilerProtectionMaster_o *this,
        ServantLimitSpoilerProtectionEntity_o **entity,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_597125D & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_ServantLimitSpoilerProtectionMaster__ServantLimitSpoilerProtectionEntity__string__TryGetEntity__);
    byte_597125D = 1;
  }
  PK = (Il2CppObject *)ServantLimitSpoilerProtectionEntity__CreatePK(svtId, limitCount, *(const MethodInfo **)&svtId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3F15838 *)Method_DataMasterBase_ServantLimitSpoilerProtectionMaster__ServantLimitSpoilerProtectionEntity__string__TryGetEntity__);
}