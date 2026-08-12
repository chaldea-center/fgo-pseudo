void GachaBehaviorMaster___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  int32_t v8; // w1
  struct GachaBehaviorMaster_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  int32_t v16; // w1
  struct GachaBehaviorMaster_StaticFields *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  int32_t v24; // w1
  struct GachaBehaviorMaster_StaticFields *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  int32_t v32; // w1
  struct GachaBehaviorMaster_StaticFields *v33; // x0
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  int32_t v40; // w1
  struct GachaBehaviorMaster_StaticFields *v41; // x0
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  int32_t v48; // w1
  struct GachaBehaviorMaster_StaticFields *v49; // x0
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  int32_t v56; // w1
  struct GachaBehaviorMaster_StaticFields *v57; // x0
  System_String_o *v58; // x2
  System_String_o *v59; // x3
  int32_t v60; // w4
  int32_t v61; // w5
  bool v62; // w6
  bool v63; // w7

  if ( (byte_5970C05 & 1) == 0 )
  {
    sub_2213A60(&GachaBehaviorMaster_TypeInfo);
    sub_2213A60(&StringLiteral_11670/*"RankupBeforeClassImageId"*/);
    sub_2213A60(&StringLiteral_11667/*"RankupAfterClassImageId"*/);
    sub_2213A60(&StringLiteral_11669/*"RankupAnimation"*/);
    sub_2213A60(&StringLiteral_11678/*"RarityAnimation"*/);
    sub_2213A60(&StringLiteral_11671/*"RankupBeforeRarity"*/);
    sub_2213A60(&StringLiteral_11668/*"RankupAfterRarity"*/);
    sub_2213A60(&StringLiteral_7363/*"GetAnimation"*/);
    sub_2213A60(&StringLiteral_7991/*"InitializeAnimation"*/);
    byte_5970C05 = 1;
  }
  v7 = StringLiteral_11669/*"RankupAnimation"*/;
  GachaBehaviorMaster_TypeInfo->static_fields->SCRIPT_KEY_RANKUP_ANIMATION = (struct System_String_o *)StringLiteral_11669/*"RankupAnimation"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)GachaBehaviorMaster_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v8 = StringLiteral_11670/*"RankupBeforeClassImageId"*/;
  static_fields = GachaBehaviorMaster_TypeInfo->static_fields;
  static_fields->SCRIPT_KEY_RANKUP_BEFORE_CLASS_IMAGE_ID = (struct System_String_o *)StringLiteral_11670/*"RankupBeforeClassImageId"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->SCRIPT_KEY_RANKUP_BEFORE_CLASS_IMAGE_ID,
    v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = StringLiteral_11671/*"RankupBeforeRarity"*/;
  v17 = GachaBehaviorMaster_TypeInfo->static_fields;
  v17->SCRIPT_KEY_RANKUP_BEFORE_RARITY = (struct System_String_o *)StringLiteral_11671/*"RankupBeforeRarity"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v17->SCRIPT_KEY_RANKUP_BEFORE_RARITY,
    v16,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = StringLiteral_11667/*"RankupAfterClassImageId"*/;
  v25 = GachaBehaviorMaster_TypeInfo->static_fields;
  v25->SCRIPT_KEY_RANKUP_AFTER_CLASS_IMAGE_ID = (struct System_String_o *)StringLiteral_11667/*"RankupAfterClassImageId"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v25->SCRIPT_KEY_RANKUP_AFTER_CLASS_IMAGE_ID,
    v24,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  v32 = StringLiteral_11668/*"RankupAfterRarity"*/;
  v33 = GachaBehaviorMaster_TypeInfo->static_fields;
  v33->SCRIPT_KEY_RANKUP_AFTER_RARITY = (struct System_String_o *)StringLiteral_11668/*"RankupAfterRarity"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v33->SCRIPT_KEY_RANKUP_AFTER_RARITY,
    v32,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  v40 = StringLiteral_11678/*"RarityAnimation"*/;
  v41 = GachaBehaviorMaster_TypeInfo->static_fields;
  v41->SCRIPT_KEY_RARITY_ANIMATION = (struct System_String_o *)StringLiteral_11678/*"RarityAnimation"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v41->SCRIPT_KEY_RARITY_ANIMATION, v40, v42, v43, v44, v45, v46, v47);
  v48 = StringLiteral_7363/*"GetAnimation"*/;
  v49 = GachaBehaviorMaster_TypeInfo->static_fields;
  v49->SCRIPT_KEY_GET_ANIMATION = (struct System_String_o *)StringLiteral_7363/*"GetAnimation"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v49->SCRIPT_KEY_GET_ANIMATION, v48, v50, v51, v52, v53, v54, v55);
  v56 = StringLiteral_7991/*"InitializeAnimation"*/;
  v57 = GachaBehaviorMaster_TypeInfo->static_fields;
  v57->SCRIPT_KEY_INITIALIZE_ANIMATION = (struct System_String_o *)StringLiteral_7991/*"InitializeAnimation"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v57->SCRIPT_KEY_INITIALIZE_ANIMATION,
    v56,
    v58,
    v59,
    v60,
    v61,
    v62,
    v63);
}


void GachaBehaviorMaster___ctor(GachaBehaviorMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5970C03 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_GachaBehaviorMaster__GachaBehaviorEntity__string___ctor__);
    byte_5970C03 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    323,
    (const MethodInfo_3F1339C *)Method_DataMasterBase_GachaBehaviorMaster__GachaBehaviorEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
GachaBehaviorEntity_o *GachaBehaviorMaster__GetEntity(
        GachaBehaviorMaster_o *this,
        int32_t gachaId,
        int32_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_5970C01 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_GachaBehaviorMaster__GachaBehaviorEntity__string__GetEntity__);
    byte_5970C01 = 1;
  }
  PK = (Il2CppObject *)GachaBehaviorEntity__CreatePK(gachaId, svtId, *(const MethodInfo **)&svtId);
  return (GachaBehaviorEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_3F157EC *)Method_DataMasterBase_GachaBehaviorMaster__GachaBehaviorEntity__string__GetEntity__);
}


System_Collections_Generic_List_GachaBehaviorEntity__o *GachaBehaviorMaster__GetGachaBehaviors(
        GachaBehaviorMaster_o *this,
        int32_t gachaId,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x19
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v11; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x22
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v14; // x9
  int *p_offset; // x10
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x1
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  __int64 v20; // x9
  int *v21; // x10
  __int64 v22; // x0
  __int64 v23; // x0
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  __int64 v30; // x1
  int v31; // w8
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0
  System_Collections_Generic_IEnumerator_T__c *v36; // x8
  __int64 v37; // x9
  int *v38; // x10
  __int64 v39; // x0
  System_Collections_Generic_IEnumerator_T__o *v41; // [xsp+18h] [xbp-48h]

  if ( (byte_5970C04 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_GachaBehaviorEntity__GetEnumerator__);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_GachaBehaviorEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_GachaBehaviorEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GachaBehaviorEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_GachaBehaviorEntity__TypeInfo);
    byte_5970C04 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_GachaBehaviorEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_GachaBehaviorEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_2213CDC(0, v8);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_GachaBehaviorEntity__GetEnumerator__);
  v41 = Enumerator;
  if ( !Enumerator )
    sub_2213CDC(Enumerator, v11);
  for ( i = Enumerator; ; i = v41 )
  {
    klass = i->klass;
    v14 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        p_offset += 4;
        if ( !v14 )
          goto LABEL_10;
      }
      v16 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v16 = sub_224BC3C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v17 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
            i,
            *(_QWORD *)(v16 + 8));
    if ( (v17 & 1) == 0 )
      break;
    if ( !v41 )
      sub_2213CDC(v17, v18);
    v19 = v41->klass;
    v20 = *(unsigned __int16 *)&v41->klass->_2.rank;
    if ( *(_WORD *)&v41->klass->_2.rank )
    {
      v21 = &v19->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_GachaBehaviorEntity__c **)v21 - 1) != System_Collections_Generic_IEnumerator_GachaBehaviorEntity__TypeInfo )
      {
        --v20;
        v21 += 4;
        if ( !v20 )
          goto LABEL_18;
      }
      v22 = (__int64)&v19->vtable[*v21];
    }
    else
    {
LABEL_18:
      v22 = sub_224BC3C(v41, System_Collections_Generic_IEnumerator_GachaBehaviorEntity__TypeInfo, 0);
    }
    v23 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
            v41,
            *(_QWORD *)(v22 + 8));
    v30 = v23;
    if ( !v23 )
      sub_2213CDC(0, 0);
    v31 = *(_DWORD *)(v23 + 16);
    if ( (!v31 || v31 == gachaId) && *(_DWORD *)(v23 + 20) == svtId )
    {
      if ( !v7
        || (items = v7->fields._items,
            v33 = Method_System_Collections_Generic_List_GachaBehaviorEntity__Add__,
            ++v7->fields._version,
            !items) )
      {
        sub_2213CDC(v23, v23);
      }
      size = v7->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v7,
          (Il2CppObject *)v23,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
      }
      else
      {
        v35 = &items->obj.klass + size;
        v7->fields._size = size + 1;
        v35[4] = (Il2CppClass *)v30;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v35 + 4), v30, v24, v25, v26, v27, v28, v29);
      }
    }
  }
  if ( v41 )
  {
    v36 = v41->klass;
    v37 = *(unsigned __int16 *)&v41->klass->_2.rank;
    if ( *(_WORD *)&v41->klass->_2.rank )
    {
      v38 = &v36->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
      {
        --v37;
        v38 += 4;
        if ( !v37 )
          goto LABEL_36;
      }
      v39 = (__int64)&v36->vtable[*v38];
    }
    else
    {
LABEL_36:
      v39 = sub_224BC3C(v41, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v39)(v41, *(_QWORD *)(v39 + 8));
  }
  return (System_Collections_Generic_List_GachaBehaviorEntity__o *)v7;
}


// local variable allocation has failed, the output may be wrong!
bool GachaBehaviorMaster__TryGetEntity(
        GachaBehaviorMaster_o *this,
        GachaBehaviorEntity_o **entity,
        int32_t gachaId,
        int32_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_5970C02 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_GachaBehaviorMaster__GachaBehaviorEntity__string__TryGetEntity__);
    byte_5970C02 = 1;
  }
  PK = (Il2CppObject *)GachaBehaviorEntity__CreatePK(gachaId, svtId, *(const MethodInfo **)&gachaId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3F15838 *)Method_DataMasterBase_GachaBehaviorMaster__GachaBehaviorEntity__string__TryGetEntity__);
}