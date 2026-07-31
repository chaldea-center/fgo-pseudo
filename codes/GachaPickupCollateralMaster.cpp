void GachaPickupCollateralMaster___ctor(GachaPickupCollateralMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5938A93 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_GachaPickupCollateralMaster__GachaPickupCollateralEntity__string___ctor__);
    byte_5938A93 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    511,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_GachaPickupCollateralMaster__GachaPickupCollateralEntity__string___ctor__);
}


GachaPickupCollateralEntity_o *GachaPickupCollateralMaster__GetEntity(
        GachaPickupCollateralMaster_o *this,
        int32_t gachaPickupCollateralGroupId,
        int32_t type,
        int32_t rarity,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_5938A94 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_GachaPickupCollateralMaster__GachaPickupCollateralEntity__string__GetEntity__);
    byte_5938A94 = 1;
  }
  PK = (Il2CppObject *)GachaPickupCollateralEntity__CreatePK(gachaPickupCollateralGroupId, type, rarity, 0);
  return (GachaPickupCollateralEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            PK,
                                            (const MethodInfo_3EE2044 *)Method_DataMasterBase_GachaPickupCollateralMaster__GachaPickupCollateralEntity__string__GetEntity__);
}


bool GachaPickupCollateralMaster__TryGetEntity(
        GachaPickupCollateralMaster_o *this,
        GachaPickupCollateralEntity_o **entity,
        int32_t gachaPickupCollateralGroupId,
        int32_t type,
        int32_t rarity,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_5938A95 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_GachaPickupCollateralMaster__GachaPickupCollateralEntity__string__TryGetEntity__);
    byte_5938A95 = 1;
  }
  PK = (Il2CppObject *)GachaPickupCollateralEntity__CreatePK(gachaPickupCollateralGroupId, type, rarity, 0);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_GachaPickupCollateralMaster__GachaPickupCollateralEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool GachaPickupCollateralMaster__TryGetEntityFromGroupId(
        GachaPickupCollateralMaster_o *this,
        GachaPickupCollateralEntity_o **gachaPickupCollateralEntity,
        int32_t groupId,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v11; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v14; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v17; // x9
  int *p_offset; // x10
  __int64 v19; // x0
  __int64 v20; // x0
  __int64 v21; // x1
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  __int64 v23; // x9
  int *v24; // x10
  __int64 v25; // x0
  GachaPickupCollateralEntity_o *v26; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  bool v33; // w20
  System_Collections_Generic_IEnumerator_T__c *v34; // x8
  __int64 v35; // x9
  int *v36; // x10
  __int64 v37; // x0
  System_Collections_Generic_IEnumerator_T__o *v39; // [xsp+18h] [xbp-38h]

  if ( (byte_5938A92 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_GachaPickupCollateralEntity__GetEnumerator__);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_GachaPickupCollateralEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    byte_5938A92 = 1;
  }
  *gachaPickupCollateralEntity = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)gachaPickupCollateralEntity,
    0,
    *(System_String_o **)&groupId,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_21FFECC(0, v11);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E61068 *)Method_System_Collections_ObjectModel_Collection_GachaPickupCollateralEntity__GetEnumerator__);
  v39 = Enumerator;
  if ( !Enumerator )
    sub_21FFECC(0, v14);
  for ( i = Enumerator; ; i = v39 )
  {
    klass = i->klass;
    v17 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v17;
        p_offset += 4;
        if ( !v17 )
          goto LABEL_10;
      }
      v19 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v19 = sub_2237E2C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v20 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
            i,
            *(_QWORD *)(v19 + 8));
    if ( (v20 & 1) == 0 )
    {
      v33 = 0;
      goto LABEL_26;
    }
    if ( !v39 )
      sub_21FFECC(v20, v21);
    v22 = v39->klass;
    v23 = *(unsigned __int16 *)&v39->klass->_2.rank;
    if ( *(_WORD *)&v39->klass->_2.rank )
    {
      v24 = &v22->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_GachaPickupCollateralEntity__c **)v24 - 1) != System_Collections_Generic_IEnumerator_GachaPickupCollateralEntity__TypeInfo )
      {
        --v23;
        v24 += 4;
        if ( !v23 )
          goto LABEL_18;
      }
      v25 = (__int64)&v22->vtable[*v24];
    }
    else
    {
LABEL_18:
      v25 = sub_2237E2C(v39, System_Collections_Generic_IEnumerator_GachaPickupCollateralEntity__TypeInfo, 0);
    }
    v26 = (GachaPickupCollateralEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(
                                             v39,
                                             *(_QWORD *)(v25 + 8));
    if ( v26 )
    {
      if ( v26->fields.gachaPickupCollateralGroupId == groupId )
        break;
    }
  }
  *gachaPickupCollateralEntity = v26;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)gachaPickupCollateralEntity,
    (int32_t)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  v33 = 1;
LABEL_26:
  if ( v39 )
  {
    v34 = v39->klass;
    v35 = *(unsigned __int16 *)&v39->klass->_2.rank;
    if ( *(_WORD *)&v39->klass->_2.rank )
    {
      v36 = &v34->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v36 - 1) != System_IDisposable_TypeInfo )
      {
        --v35;
        v36 += 4;
        if ( !v35 )
          goto LABEL_31;
      }
      v37 = (__int64)&v34->vtable[*v36];
    }
    else
    {
LABEL_31:
      v37 = sub_2237E2C(v39, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v37)(v39, *(_QWORD *)(v37 + 8));
  }
  return v33;
}