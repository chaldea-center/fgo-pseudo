void EventMissionProgressRequest___ctor(EventMissionProgressRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


void EventMissionProgressRequest__beginRequest(
        EventMissionProgressRequest_o *this,
        EventMissionProgressRequest_Argument_o *arg,
        const MethodInfo *method)
{
  RequestBase_o *v4; // x19
  __int128 v5; // [xsp+0h] [xbp-40h] BYREF
  __int128 v6; // [xsp+10h] [xbp-30h]

  v4 = (RequestBase_o *)this;
  if ( (byte_4CB7E0E & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_string__string___Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_string__string___MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_string__string___get_Current__);
    this = (EventMissionProgressRequest_o *)sub_1C6BA08(&Method_System_Collections_Generic_List_ValueTuple_string__string___GetEnumerator__);
    byte_4CB7E0E = 1;
  }
  v5 = 0u;
  v6 = 0u;
  if ( !arg
    || (this = (EventMissionProgressRequest_o *)EventMissionProgressRequest_Argument__ConvertToJsonFieldAndStringList(
                                                  arg,
                                                  (const MethodInfo *)arg)) == 0 )
  {
    sub_1C6BC60(this, arg);
  }
  System_Collections_Generic_List_ValueTuple_object__object____GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v5,
    (System_Collections_Generic_List_T__o *)this,
    (const MethodInfo_37B0858 *)Method_System_Collections_Generic_List_ValueTuple_string__string___GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_ValueTuple_object__object____MoveNext(
            (System_Collections_Generic_List_Enumerator_T__o *)&v5,
            (const MethodInfo_357DA78 *)Method_System_Collections_Generic_List_Enumerator_ValueTuple_string__string___MoveNext__) )
    RequestBase__addField_44471996(v4, (System_String_o *)v6, *((System_String_o **)&v6 + 1), 0);
  System_Collections_Generic_List_Enumerator_ValueTuple_object__object____Dispose(
    (System_Collections_Generic_List_Enumerator_T__o *)&v5,
    (const MethodInfo_357DA74 *)Method_System_Collections_Generic_List_Enumerator_ValueTuple_string__string___Dispose__);
  RequestBase__beginRequest(v4, 0);
}


System_String_o *EventMissionProgressRequest__getURL(EventMissionProgressRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4CB7E0D & 1) == 0 )
  {
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_19198/*"eventMission/progress"*/);
    byte_4CB7E0D = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_63966792(BaseUrl, (System_String_o *)StringLiteral_19198/*"eventMission/progress"*/, 0);
}


void EventMissionProgressRequest_Argument___ctor(
        EventMissionProgressRequest_Argument_o *this,
        int64_t deemedTime,
        System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *progressDataList,
        const MethodInfo *method)
{
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4CB7E0F & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__TypeInfo);
    byte_4CB7E0F = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.deemedTime = deemedTime;
  if ( !progressDataList )
  {
    progressDataList = (System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *)sub_1C6BC54(System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      (System_Collections_Generic_List_object__o *)progressDataList,
      (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___ctor__);
  }
  this->fields.progressDataList = progressDataList;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.progressDataList, (int32_t)progressDataList, v7, v8);
}


System_Collections_Generic_List_ValueTuple_string__string___o *EventMissionProgressRequest_Argument__ConvertToJsonFieldAndStringList(
        EventMissionProgressRequest_Argument_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_T__o *v3; // x23
  Il2CppObject *v4; // x21
  System_String_o *v5; // x0
  Il2CppObject *v6; // x2
  const MethodInfo_3B66FE4 *v7; // x4
  Il2CppObject *v8; // x0
  System_ValueTuple_object__object__o v9; // x1 OVERLAPPED
  const MethodInfo *v10; // x3
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  CGThumbnailListItem_o *v14; // x0
  struct System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *progressDataList; // x21
  System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__c *klass; // x8
  __int64 v17; // x9
  int32_t *p_offset; // x10
  __int64 v19; // x0
  unsigned int v20; // w0
  struct System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x23
  unsigned int *v22; // x21
  unsigned __int64 v23; // x22
  System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__c *v24; // x8
  __int64 v25; // x9
  int32_t *v26; // x10
  __int64 v27; // x0
  struct System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *v28; // x23
  System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__c *v29; // x8
  __int64 v30; // x9
  int32_t *v31; // x10
  __int64 v32; // x0
  _DWORD *v33; // x24
  System_Collections_Generic_Dictionary_object__object__o *v34; // x23
  Il2CppObject *v35; // x0
  Il2CppObject *v36; // x0
  Il2CppObject *v37; // x0
  Il2CppObject *v38; // x0
  __int64 v39; // x0
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  unsigned int *v42; // x0
  Il2CppObject *v43; // x2
  const MethodInfo_3B66FE4 *v44; // x4
  const MethodInfo *v45; // x3
  struct System_Object_array *v46; // x8
  _QWORD *v47; // x9
  __int64 v48; // x10
  CGThumbnailListItem_o *v49; // x0
  __int64 v51; // x0
  System_Collections_Generic_List_T__o *v52; // [xsp+0h] [xbp-90h]
  int v53; // [xsp+Ch] [xbp-84h] BYREF
  int v54; // [xsp+10h] [xbp-80h] BYREF
  int v55; // [xsp+14h] [xbp-7Ch] BYREF
  System_ValueTuple_object__object__o v56; // [xsp+18h] [xbp-78h] BYREF
  int64_t deemedTime; // [xsp+28h] [xbp-68h] BYREF
  System_ValueTuple_object__object__o v58; // 0:x0.16
  System_ValueTuple_object__object__o v59; // 0:x0.16

  if ( (byte_4CB7E10 & 1) == 0 )
  {
    sub_1C6BA08(&System_Collections_Generic_Dictionary_string__object____TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    sub_1C6BA08(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__TypeInfo);
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&long_TypeInfo);
    sub_1C6BA08(&JsonManager_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ValueTuple_string__string___Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ValueTuple_string__string____ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_ValueTuple_string__string___TypeInfo);
    sub_1C6BA08(&Method_System_ValueTuple_string__string___ctor__);
    sub_1C6BA08(&StringLiteral_21691/*"missionConditionDetailId"*/);
    sub_1C6BA08(&StringLiteral_19195/*"eventId"*/);
    sub_1C6BA08(&StringLiteral_18561/*"deemedTime"*/);
    sub_1C6BA08(&StringLiteral_24093/*"targetId"*/);
    sub_1C6BA08(&StringLiteral_21696/*"missionTargetId"*/);
    sub_1C6BA08(&StringLiteral_22886/*"progress"*/);
    sub_1C6BA08(&StringLiteral_16670/*"addCount"*/);
    byte_4CB7E10 = 1;
  }
  v3 = (System_Collections_Generic_List_T__o *)sub_1C6BC54(System_Collections_Generic_List_ValueTuple_string__string___TypeInfo);
  System_Collections_Generic_List_ValueTuple_object__object_____ctor(
    v3,
    (const MethodInfo_37AF480 *)Method_System_Collections_Generic_List_ValueTuple_string__string____ctor__);
  deemedTime = this->fields.deemedTime;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &deemedTime);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v5 = JsonManager__toJson(v4, 0, 0, 0);
  v58.fields.Item2 = (Il2CppObject *)StringLiteral_18561/*"deemedTime"*/;
  v6 = (Il2CppObject *)v5;
  v58.fields.Item1 = (Il2CppObject *)&v56;
  v56.fields.Item1 = 0;
  v56.fields.Item2 = 0;
  System_ValueTuple_object__object____ctor(
    v58,
    v6,
    (Il2CppObject *)Method_System_ValueTuple_string__string___ctor__,
    v7);
  if ( !v3 )
    goto LABEL_39;
  v9 = v56;
  items = v3->fields._items;
  v12 = Method_System_Collections_Generic_List_ValueTuple_string__string___Add__;
  ++v3->fields._version;
  if ( !items )
    goto LABEL_39;
  size = v3->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_ValueTuple_object__object____AddWithResize(
      v3,
      v9,
      *(const MethodInfo_37AFD00 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = (CGThumbnailListItem_o *)(&items->obj + size);
    v3->fields._size = size + 1;
    v14->fields.sortValue0 = (int64_t)v9.fields.Item1;
    v14 = (CGThumbnailListItem_o *)((char *)v14 + 32);
    v14->monitor = v9.fields.Item2;
    sub_1C6B9AC(v14, 0, (int32_t)v9.fields.Item2, v10);
  }
  progressDataList = this->fields.progressDataList;
  if ( !progressDataList )
    goto LABEL_39;
  klass = progressDataList->klass;
  v17 = *(unsigned __int16 *)&progressDataList->klass->_2.rank;
  v52 = v3;
  if ( *(_WORD *)&progressDataList->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__c **)p_offset
            - 1) != System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__TypeInfo )
    {
      --v17;
      p_offset += 4;
      if ( !v17 )
        goto LABEL_15;
    }
    v19 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_15:
    v19 = sub_1C41D90(
            progressDataList,
            System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__TypeInfo,
            0);
  }
  v20 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *, _QWORD))v19)(
          progressDataList,
          *(_QWORD *)(v19 + 8));
  v8 = (Il2CppObject *)sub_1C6BAB0(System_Collections_Generic_Dictionary_string__object____TypeInfo, v20);
  v21 = this->fields.progressDataList;
  if ( !v21 )
    goto LABEL_39;
  v22 = (unsigned int *)v8;
  v23 = 0;
  while ( 1 )
  {
    v24 = v21->klass;
    v25 = *(unsigned __int16 *)&v21->klass->_2.rank;
    if ( *(_WORD *)&v21->klass->_2.rank )
    {
      v26 = &v24->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__c **)v26
              - 1) != System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__TypeInfo )
      {
        --v25;
        v26 += 4;
        if ( !v25 )
          goto LABEL_23;
      }
      v27 = (__int64)&v24->vtable[*v26];
    }
    else
    {
LABEL_23:
      v27 = sub_1C41D90(
              v21,
              System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__TypeInfo,
              0);
    }
    v8 = (Il2CppObject *)(*(__int64 (__fastcall **)(struct System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *, _QWORD))v27)(
                           v21,
                           *(_QWORD *)(v27 + 8));
    if ( (__int64)v23 >= (int)v8 )
      break;
    v28 = this->fields.progressDataList;
    if ( v28 )
    {
      v29 = v28->klass;
      v30 = *(unsigned __int16 *)&v28->klass->_2.rank;
      if ( *(_WORD *)&v28->klass->_2.rank )
      {
        v31 = &v29->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__c **)v31
                - 1) != System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__TypeInfo )
        {
          --v30;
          v31 += 4;
          if ( !v30 )
            goto LABEL_31;
        }
        v32 = (__int64)&v29->vtable[*v31];
      }
      else
      {
LABEL_31:
        v32 = sub_1C41D90(
                this->fields.progressDataList,
                System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__TypeInfo,
                0);
      }
      v33 = (_DWORD *)(*(__int64 (__fastcall **)(struct System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *, _QWORD, _QWORD))v32)(
                        v28,
                        (unsigned int)v23,
                        *(_QWORD *)(v32 + 8));
      v34 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C6BC54(System_Collections_Generic_Dictionary_string__object__TypeInfo);
      System_Collections_Generic_Dictionary_object__object____ctor(
        v34,
        (const MethodInfo_34BAF8C *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
      if ( v33 )
      {
        LODWORD(v56.fields.Item1) = v33[4];
        v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v56);
        if ( v34 )
        {
          System_Collections_Generic_Dictionary_object__object___set_Item(
            v34,
            (Il2CppObject *)StringLiteral_21696/*"missionTargetId"*/,
            v8,
            (const MethodInfo_34BB928 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
          LODWORD(deemedTime) = v33[5];
          v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &deemedTime);
          System_Collections_Generic_Dictionary_object__object___set_Item(
            v34,
            (Il2CppObject *)StringLiteral_21691/*"missionConditionDetailId"*/,
            v35,
            (const MethodInfo_34BB928 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
          v55 = v33[6];
          v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v55);
          System_Collections_Generic_Dictionary_object__object___set_Item(
            v34,
            (Il2CppObject *)StringLiteral_24093/*"targetId"*/,
            v36,
            (const MethodInfo_34BB928 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
          v54 = v33[7];
          v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v54);
          System_Collections_Generic_Dictionary_object__object___set_Item(
            v34,
            (Il2CppObject *)StringLiteral_19195/*"eventId"*/,
            v37,
            (const MethodInfo_34BB928 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
          v53 = v33[8];
          v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v53);
          System_Collections_Generic_Dictionary_object__object___set_Item(
            v34,
            (Il2CppObject *)StringLiteral_16670/*"addCount"*/,
            v38,
            (const MethodInfo_34BB928 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
          if ( v22 )
          {
            v39 = sub_1C6BB44(v34, *(_QWORD *)(*(_QWORD *)v22 + 64LL));
            if ( !v39 )
            {
              v51 = sub_1C6BC84(0);
              sub_1C6BB30(v51, 0);
            }
            if ( v23 >= v22[6] )
              sub_1C6BC68(v39);
            v42 = &v22[2 * v23];
            *((_QWORD *)v42 + 4) = v34;
            sub_1C6B9AC((CGThumbnailListItem_o *)(v42 + 8), (int32_t)v34, v40, v41);
            v21 = this->fields.progressDataList;
            ++v23;
            if ( v21 )
              continue;
          }
        }
      }
    }
    goto LABEL_39;
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v43 = (Il2CppObject *)JsonManager__toJson((Il2CppObject *)v22, 0, 0, 0);
  v59.fields.Item1 = (Il2CppObject *)&v56;
  v59.fields.Item2 = (Il2CppObject *)StringLiteral_22886/*"progress"*/;
  v56 = (System_ValueTuple_object__object__o)0LL;
  System_ValueTuple_object__object____ctor(
    v59,
    v43,
    (Il2CppObject *)Method_System_ValueTuple_string__string___ctor__,
    v44);
  v9 = v56;
  v46 = v52->fields._items;
  v47 = Method_System_Collections_Generic_List_ValueTuple_string__string___Add__;
  ++v52->fields._version;
  if ( !v46 )
LABEL_39:
    sub_1C6BC60(v8, v9.fields.Item1);
  v48 = v52->fields._size;
  if ( (unsigned int)v48 >= LODWORD(v46->max_length) )
  {
    System_Collections_Generic_List_ValueTuple_object__object____AddWithResize(
      v52,
      v9,
      *(const MethodInfo_37AFD00 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
  }
  else
  {
    v49 = (CGThumbnailListItem_o *)(&v46->obj + v48);
    v52->fields._size = v48 + 1;
    v49->fields.sortValue0 = (int64_t)v9.fields.Item1;
    v49 = (CGThumbnailListItem_o *)((char *)v49 + 32);
    v49->monitor = v9.fields.Item2;
    sub_1C6B9AC(v49, 0, (int32_t)v9.fields.Item2, v45);
  }
  return (System_Collections_Generic_List_ValueTuple_string__string___o *)v52;
}


void EventMissionProgressRequest_Argument_ProgressData___ctor(
        EventMissionProgressRequest_Argument_ProgressData_o *this,
        int32_t missionTargetId,
        int32_t missionConditionDetailId,
        int32_t targetId,
        int32_t eventId,
        int32_t addCount,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.missionTargetId = missionTargetId;
  this->fields.missionConditionDetailId = missionConditionDetailId;
  this->fields.targetId = targetId;
  this->fields.eventId = eventId;
  this->fields.addCount = addCount;
}