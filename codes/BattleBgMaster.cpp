void __fastcall BattleBgMaster___ctor(BattleBgMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5ADDA & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_BattleBgMaster__BattleBgEntity__string___ctor__);
    byte_4A5ADDA = 1;
  }
  *(&this->fields.revision + 1) = 1;
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    129,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_BattleBgMaster__BattleBgEntity__string___ctor__);
}


System_String_o *__fastcall BattleBgMaster__GetBgAssetPath(
        BattleBgMaster_o *this,
        int32_t bgId,
        int32_t bgType,
        const MethodInfo *method)
{
  int32_t Item1; // w19

  if ( (byte_4A5ADDE & 1) == 0 )
  {
    sub_1B885B0(&BattleDataDefine_TypeInfo);
    byte_4A5ADDE = 1;
  }
  Item1 = BattleBgMaster__GetBgResourceIdType(this, bgId, bgType, method).fields.Item1;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
  return BattleDataDefine__MakeBgPath(Item1, 0LL);
}


System_Int32_array *__fastcall BattleBgMaster__GetBgIndividuality(
        BattleBgMaster_o *this,
        int32_t bgId,
        int32_t bgType,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  __int64 v8; // x1
  bool v9; // w8
  System_Int32_array *result; // x0
  BattleBgEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5ADDB & 1) == 0 )
  {
    sub_1B885B0(&int___TypeInfo);
    byte_4A5ADDB = 1;
  }
  entity = 0LL;
  v9 = BattleBgMaster__TryGetEntity(this, &entity, bgId, bgType, v4);
  result = 0LL;
  if ( v9 )
  {
    if ( !entity )
      sub_1B8880C(0LL, v8);
    result = entity->fields.individuality;
    if ( !result )
      return (System_Int32_array *)sub_1B88658(int___TypeInfo, 0LL);
  }
  return result;
}


System_ValueTuple_int__int__o __fastcall BattleBgMaster__GetBgResourceIdType(
        BattleBgMaster_o *this,
        int32_t bgId,
        int32_t bgType,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  _BOOL8 v8; // x0
  __int64 v9; // x1
  int resourceId; // w1
  int32_t resourceType; // w2
  const MethodInfo_3847E54 *v12; // x3
  BattleBgEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  System_ValueTuple_int__int__o v15; // [xsp+18h] [xbp-28h] BYREF
  System_ValueTuple_int__int__o v16; // 0:x0.8

  if ( (byte_4A5ADDD & 1) == 0 )
  {
    sub_1B885B0(&Method_System_ValueTuple_int__int___ctor__);
    byte_4A5ADDD = 1;
  }
  entity = 0LL;
  v8 = BattleBgMaster__TryGetEntity(this, &entity, bgId, bgType, v4);
  if ( !v8 )
    goto LABEL_7;
  if ( !entity )
    sub_1B8880C(v8, v9);
  resourceId = entity->fields.resourceId;
  if ( resourceId > 0 )
  {
    resourceType = entity->fields.resourceType;
    v12 = (const MethodInfo_3847E54 *)Method_System_ValueTuple_int__int___ctor__;
    v16 = (System_ValueTuple_int__int__o)&v15;
    v15 = 0LL;
  }
  else
  {
LABEL_7:
    v12 = (const MethodInfo_3847E54 *)Method_System_ValueTuple_int__int___ctor__;
    v15 = 0LL;
    v16 = (System_ValueTuple_int__int__o)&v15;
    resourceId = bgId;
    resourceType = bgType;
  }
  System_ValueTuple_int__int____ctor(v16, resourceId, resourceType, v12);
  return v15;
}


int32_t __fastcall BattleBgMaster__GetBgShadowImageId(
        BattleBgMaster_o *this,
        int32_t bgId,
        int32_t bgType,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  _BOOL8 v6; // x0
  __int64 v7; // x1
  int32_t *p_imageId; // x8
  BattleBgEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  entity = 0LL;
  v6 = BattleBgMaster__TryGetEntity(this, &entity, bgId, bgType, v4);
  if ( v6 )
  {
    if ( !entity )
      sub_1B8880C(v6, v7);
    p_imageId = &entity->fields.imageId;
  }
  else
  {
    p_imageId = &this->fields.revision + 1;
  }
  return *p_imageId;
}


int32_t __fastcall BattleBgMaster__GetBgSpecialShadowEffectId(
        BattleBgMaster_o *this,
        int32_t bgId,
        int32_t bgType,
        int32_t defId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  BattleBgEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  entity = 0LL;
  if ( BattleBgMaster__TryGetEntity(this, &entity, bgId, bgType, method) )
  {
    if ( !entity )
      sub_1B8880C(0LL, v6);
    return BattleBgEntity__GetSpecialShadowEffectId(entity, defId, v7);
  }
  return defId;
}


System_Int32_array *__fastcall BattleBgMaster__GetBgSpecialShadowEffectIdArray(
        BattleBgMaster_o *this,
        const MethodInfo *method)
{
  return *(System_Int32_array **)&this->fields.DefaultBgShadowImageId;
}


// local variable allocation has failed, the output may be wrong!
BattleBgEntity_o *__fastcall BattleBgMaster__GetEntity(
        BattleBgMaster_o *this,
        int32_t id,
        int32_t type,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5ADD8 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_BattleBgMaster__BattleBgEntity__string__GetEntity__);
    byte_4A5ADD8 = 1;
  }
  PK = (Il2CppObject *)BattleBgEntity__CreatePK(id, type, *(const MethodInfo **)&type);
  return (BattleBgEntity_o *)DataMasterBase_object__object__object___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                               PK,
                               (const MethodInfo_311DC8C *)Method_DataMasterBase_BattleBgMaster__BattleBgEntity__string__GetEntity__);
}


int32_t __fastcall BattleBgMaster__GetInvalidOverwrite(
        BattleBgMaster_o *this,
        int32_t bgId,
        int32_t bgType,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  const MethodInfo *v5; // x1
  BattleBgEntity_o *entity; // [xsp+8h] [xbp-8h] BYREF

  entity = 0LL;
  if ( !BattleBgMaster__TryGetEntity(this, &entity, bgId, bgType, v4) )
    return 0;
  if ( !entity )
    sub_1B8880C(0LL, v5);
  return BattleBgEntity__GetInvalidOverwrite(entity, v5);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleBgMaster__TryGetEntity(
        BattleBgMaster_o *this,
        BattleBgEntity_o **entity,
        int32_t id,
        int32_t type,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A5ADD9 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_BattleBgMaster__BattleBgEntity__string__TryGetEntity__);
    byte_4A5ADD9 = 1;
  }
  PK = (Il2CppObject *)BattleBgEntity__CreatePK(id, type, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_BattleBgMaster__BattleBgEntity__string__TryGetEntity__);
}


bool __fastcall BattleBgMaster__preProcess(BattleBgMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x21
  __int64 v4; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v6; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v12; // x8
  __int64 v13; // x9
  int32_t *v14; // x10
  __int64 v15; // x0
  BattleBgEntity_o *v16; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x2
  __int64 methodPtr_low; // x9
  __int64 SpecialShadowEffectId; // x0
  __int64 v21; // x1
  int32_t v22; // w22
  _BOOL8 v23; // x0
  __int64 v24; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  __int64 v29; // x9
  int32_t *v30; // x10
  __int64 v31; // x0
  System_Int32_array *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3

  if ( (byte_4A5ADDC & 1) == 0 )
  {
    sub_1B885B0(&BattleBgEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    byte_4A5ADDC = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_40;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v6);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v9 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v9;
        p_offset += 4;
        if ( !v9 )
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
    v12 = Enumerator->klass;
    v13 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v14 = &v12->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v14 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v13;
        v14 += 4;
        if ( !v13 )
          goto LABEL_16;
      }
      v15 = (__int64)&v12->vtable[*v14].method;
    }
    else
    {
LABEL_16:
      v15 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v16 = (BattleBgEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
                                Enumerator,
                                *(_QWORD *)(v15 + 8));
    if ( !v16 )
      goto LABEL_37;
    methodPtr_low = LOBYTE(BattleBgEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v16->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (BattleBgEntity_c *)v16->klass->_2.typeHierarchy[methodPtr_low - 1] != BattleBgEntity_TypeInfo )
    {
      sub_1B88ACC(v16);
LABEL_37:
      sub_1B8880C(v16, v17);
    }
    SpecialShadowEffectId = BattleBgEntity__GetSpecialShadowEffectId(v16, 0, v18);
    v22 = SpecialShadowEffectId;
    if ( (int)SpecialShadowEffectId >= 1 )
    {
      if ( !v3 )
        sub_1B8880C(SpecialShadowEffectId, v21);
      v23 = System_Collections_Generic_List_int___Contains(
              v3,
              SpecialShadowEffectId,
              (const MethodInfo_34E0B88 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( !v23 )
      {
        items = v3->fields._items;
        v26 = Method_System_Collections_Generic_List_int__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1B8880C(v23, v24);
        size = v3->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v3,
            v22,
            *(const MethodInfo_34E0810 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
        }
        else
        {
          v3->fields._size = size + 1;
          items->m_Items[size + 1] = v22;
        }
      }
    }
  }
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
        goto LABEL_32;
    }
    v31 = (__int64)&v28->vtable[*v30].method;
  }
  else
  {
LABEL_32:
    v31 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(
                                                             Enumerator,
                                                             *(_QWORD *)(v31 + 8));
  if ( !v3 )
LABEL_40:
    sub_1B8880C(list, v4);
  v32 = System_Collections_Generic_List_int___ToArray(
          v3,
          (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
  *(_QWORD *)&this->fields.DefaultBgShadowImageId = v32;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.DefaultBgShadowImageId, (int32_t)v32, v33, v34);
  return 1;
}