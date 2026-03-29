void GachaBehaviorMaster___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  int32_t v7; // w1
  struct GachaBehaviorMaster_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  int32_t v15; // w1
  struct GachaBehaviorMaster_StaticFields *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  int32_t v23; // w1
  struct GachaBehaviorMaster_StaticFields *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  int32_t v31; // w1
  struct GachaBehaviorMaster_StaticFields *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  int32_t v39; // w1
  struct GachaBehaviorMaster_StaticFields *v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  int32_t v47; // w1
  struct GachaBehaviorMaster_StaticFields *v48; // x0
  int32_t v49; // w2
  int32_t v50; // w3
  System_String_o *v51; // x4
  int32_t v52; // w5
  int64_t v53; // x6
  System_String_o *v54; // x7
  int32_t v55; // w1
  struct GachaBehaviorMaster_StaticFields *v56; // x0
  int32_t v57; // w2
  int32_t v58; // w3
  System_String_o *v59; // x4
  int32_t v60; // w5
  int64_t v61; // x6
  System_String_o *v62; // x7

  if ( (byte_4D30D77 & 1) == 0 )
  {
    sub_1C93AD4(&GachaBehaviorMaster_TypeInfo);
    sub_1C93AD4(&StringLiteral_11267/*"RankupBeforeClassImageId"*/);
    sub_1C93AD4(&StringLiteral_11264/*"RankupAfterClassImageId"*/);
    sub_1C93AD4(&StringLiteral_11266/*"RankupAnimation"*/);
    sub_1C93AD4(&StringLiteral_11275/*"RarityAnimation"*/);
    sub_1C93AD4(&StringLiteral_11268/*"RankupBeforeRarity"*/);
    sub_1C93AD4(&StringLiteral_11265/*"RankupAfterRarity"*/);
    sub_1C93AD4(&StringLiteral_7104/*"GetAnimation"*/);
    sub_1C93AD4(&StringLiteral_7705/*"InitializeAnimation"*/);
    byte_4D30D77 = 1;
  }
  GachaBehaviorMaster_TypeInfo->static_fields->SCRIPT_KEY_RANKUP_ANIMATION = (struct System_String_o *)StringLiteral_11266/*"RankupAnimation"*/;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)GachaBehaviorMaster_TypeInfo->static_fields,
    StringLiteral_11266/*"RankupAnimation"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v7 = StringLiteral_11267/*"RankupBeforeClassImageId"*/;
  static_fields = GachaBehaviorMaster_TypeInfo->static_fields;
  static_fields->SCRIPT_KEY_RANKUP_BEFORE_CLASS_IMAGE_ID = (struct System_String_o *)StringLiteral_11267/*"RankupBeforeClassImageId"*/;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&static_fields->SCRIPT_KEY_RANKUP_BEFORE_CLASS_IMAGE_ID,
    v7,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v15 = StringLiteral_11268/*"RankupBeforeRarity"*/;
  v16 = GachaBehaviorMaster_TypeInfo->static_fields;
  v16->SCRIPT_KEY_RANKUP_BEFORE_RARITY = (struct System_String_o *)StringLiteral_11268/*"RankupBeforeRarity"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v16->SCRIPT_KEY_RANKUP_BEFORE_RARITY, v15, v17, v18, v19, v20, v21, v22);
  v23 = StringLiteral_11264/*"RankupAfterClassImageId"*/;
  v24 = GachaBehaviorMaster_TypeInfo->static_fields;
  v24->SCRIPT_KEY_RANKUP_AFTER_CLASS_IMAGE_ID = (struct System_String_o *)StringLiteral_11264/*"RankupAfterClassImageId"*/;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&v24->SCRIPT_KEY_RANKUP_AFTER_CLASS_IMAGE_ID,
    v23,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v31 = StringLiteral_11265/*"RankupAfterRarity"*/;
  v32 = GachaBehaviorMaster_TypeInfo->static_fields;
  v32->SCRIPT_KEY_RANKUP_AFTER_RARITY = (struct System_String_o *)StringLiteral_11265/*"RankupAfterRarity"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v32->SCRIPT_KEY_RANKUP_AFTER_RARITY, v31, v33, v34, v35, v36, v37, v38);
  v39 = StringLiteral_11275/*"RarityAnimation"*/;
  v40 = GachaBehaviorMaster_TypeInfo->static_fields;
  v40->SCRIPT_KEY_RARITY_ANIMATION = (struct System_String_o *)StringLiteral_11275/*"RarityAnimation"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v40->SCRIPT_KEY_RARITY_ANIMATION, v39, v41, v42, v43, v44, v45, v46);
  v47 = StringLiteral_7104/*"GetAnimation"*/;
  v48 = GachaBehaviorMaster_TypeInfo->static_fields;
  v48->SCRIPT_KEY_GET_ANIMATION = (struct System_String_o *)StringLiteral_7104/*"GetAnimation"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v48->SCRIPT_KEY_GET_ANIMATION, v47, v49, v50, v51, v52, v53, v54);
  v55 = StringLiteral_7705/*"InitializeAnimation"*/;
  v56 = GachaBehaviorMaster_TypeInfo->static_fields;
  v56->SCRIPT_KEY_INITIALIZE_ANIMATION = (struct System_String_o *)StringLiteral_7705/*"InitializeAnimation"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v56->SCRIPT_KEY_INITIALIZE_ANIMATION, v55, v57, v58, v59, v60, v61, v62);
}


void GachaBehaviorMaster___ctor(GachaBehaviorMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D30D75 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_GachaBehaviorMaster__GachaBehaviorEntity__string___ctor__);
    byte_4D30D75 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    321,
    (const MethodInfo_3465C5C *)Method_DataMasterBase_GachaBehaviorMaster__GachaBehaviorEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
GachaBehaviorEntity_o *GachaBehaviorMaster__GetEntity(
        GachaBehaviorMaster_o *this,
        int32_t gachaId,
        int32_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4D30D73 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_GachaBehaviorMaster__GachaBehaviorEntity__string__GetEntity__);
    byte_4D30D73 = 1;
  }
  PK = (Il2CppObject *)GachaBehaviorEntity__CreatePK(gachaId, svtId, *(const MethodInfo **)&svtId);
  return (GachaBehaviorEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_34681D4 *)Method_DataMasterBase_GachaBehaviorMaster__GachaBehaviorEntity__string__GetEntity__);
}


System_Collections_Generic_List_GachaBehaviorEntity__o *GachaBehaviorMaster__GetGachaBehaviors(
        GachaBehaviorMaster_o *this,
        int32_t gachaId,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x20
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v10; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v13; // x9
  int32_t *p_offset; // x10
  __int64 v15; // x0
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  __int64 v17; // x9
  int32_t *v18; // x10
  __int64 v19; // x0
  __int64 v20; // x0
  __int64 v21; // x1
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  __int64 v28; // x8
  int v29; // w9
  struct System_Object_array *items; // x9
  _QWORD *v31; // x10
  __int64 size; // x11
  Il2CppClass **v33; // x0
  System_Collections_Generic_IEnumerator_T__c *v34; // x8
  __int64 v35; // x9
  int32_t *v36; // x10
  __int64 v37; // x0

  if ( (byte_4D30D76 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_GachaBehaviorEntity__GetEnumerator__);
    sub_1C93AD4(&System_IDisposable_TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerator_GachaBehaviorEntity__TypeInfo);
    sub_1C93AD4(&System_Collections_IEnumerator_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GachaBehaviorEntity__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GachaBehaviorEntity___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_GachaBehaviorEntity__TypeInfo);
    byte_4D30D76 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_GachaBehaviorEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_GachaBehaviorEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C93D2C(0, v8);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33FC384 *)Method_System_Collections_ObjectModel_Collection_GachaBehaviorEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C93D2C(0, v10);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v13 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v13;
        p_offset += 4;
        if ( !v13 )
          goto LABEL_9;
      }
      v15 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v15 = sub_1C69E5C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
            Enumerator,
            *(_QWORD *)(v15 + 8))
        & 1) == 0 )
      break;
    v16 = Enumerator->klass;
    v17 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v18 = &v16->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_GachaBehaviorEntity__c **)v18 - 1) != System_Collections_Generic_IEnumerator_GachaBehaviorEntity__TypeInfo )
      {
        --v17;
        v18 += 4;
        if ( !v17 )
          goto LABEL_16;
      }
      v19 = (__int64)&v16->vtable[*v18];
    }
    else
    {
LABEL_16:
      v19 = sub_1C69E5C(Enumerator, System_Collections_Generic_IEnumerator_GachaBehaviorEntity__TypeInfo, 0);
    }
    v20 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
            Enumerator,
            *(_QWORD *)(v19 + 8));
    v28 = v20;
    if ( !v20 )
      sub_1C93D2C(0, v21);
    v29 = *(_DWORD *)(v20 + 16);
    if ( (!v29 || v29 == gachaId) && *(_DWORD *)(v20 + 20) == svtId )
    {
      if ( !v7 )
        sub_1C93D2C(v20, v21);
      items = v7->fields._items;
      v31 = Method_System_Collections_Generic_List_GachaBehaviorEntity__Add__;
      ++v7->fields._version;
      if ( !items )
        sub_1C93D2C(v20, v21);
      size = v7->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v7,
          (Il2CppObject *)v20,
          *(const MethodInfo_387999C **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
      }
      else
      {
        v33 = &items->obj.klass + size;
        v7->fields._size = size + 1;
        v33[4] = (Il2CppClass *)v28;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v33 + 4), v28, v22, v23, v24, v25, v26, v27);
      }
    }
  }
  v34 = Enumerator->klass;
  v35 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
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
    v37 = sub_1C69E5C(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v37)(Enumerator, *(_QWORD *)(v37 + 8));
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

  if ( (byte_4D30D74 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_GachaBehaviorMaster__GachaBehaviorEntity__string__TryGetEntity__);
    byte_4D30D74 = 1;
  }
  PK = (Il2CppObject *)GachaBehaviorEntity__CreatePK(gachaId, svtId, *(const MethodInfo **)&gachaId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3468220 *)Method_DataMasterBase_GachaBehaviorMaster__GachaBehaviorEntity__string__TryGetEntity__);
}