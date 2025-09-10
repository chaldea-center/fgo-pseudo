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
  if ( (byte_4C28DC6 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_string__string___Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_string__string___MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_string__string___get_Current__);
    this = (EventMissionProgressRequest_o *)sub_1C2D490(&Method_System_Collections_Generic_List_ValueTuple_string__string___GetEnumerator__);
    byte_4C28DC6 = 1;
  }
  v5 = 0u;
  v6 = 0u;
  if ( !arg
    || (this = (EventMissionProgressRequest_o *)EventMissionProgressRequest_Argument__ConvertToJsonFieldAndStringList(
                                                  arg,
                                                  (const MethodInfo *)arg)) == 0 )
  {
    sub_1C2D6EC(this, arg);
  }
  System_Collections_Generic_List_ValueTuple_object__object____GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v5,
    (System_Collections_Generic_List_T__o *)this,
    (const MethodInfo_3739A68 *)Method_System_Collections_Generic_List_ValueTuple_string__string___GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_ValueTuple_object__object____MoveNext(
            (System_Collections_Generic_List_Enumerator_T__o *)&v5,
            (const MethodInfo_350BA5C *)Method_System_Collections_Generic_List_Enumerator_ValueTuple_string__string___MoveNext__) )
    RequestBase__addField_44009064(v4, (System_String_o *)v6, *((System_String_o **)&v6 + 1), 0);
  System_Collections_Generic_List_Enumerator_ValueTuple_object__object____Dispose(
    (System_Collections_Generic_List_Enumerator_T__o *)&v5,
    (const MethodInfo_350BA58 *)Method_System_Collections_Generic_List_Enumerator_ValueTuple_string__string___Dispose__);
  RequestBase__beginRequest(v4, 0);
}


System_String_o *EventMissionProgressRequest__getURL(EventMissionProgressRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4C28DC5 & 1) == 0 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&StringLiteral_19136/*"eventMission/progress"*/);
    byte_4C28DC5 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_63457864(BaseUrl, (System_String_o *)StringLiteral_19136/*"eventMission/progress"*/, 0);
}


void EventMissionProgressRequest_Argument___ctor(
        EventMissionProgressRequest_Argument_o *this,
        int64_t deemedTime,
        System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *progressDataList,
        const MethodInfo *method)
{
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C28DC7 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__TypeInfo);
    byte_4C28DC7 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.deemedTime = deemedTime;
  if ( !progressDataList )
  {
    progressDataList = (System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *)sub_1C2D6DC(System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      (System_Collections_Generic_List_object__o *)progressDataList,
      (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___ctor__);
  }
  this->fields.progressDataList = progressDataList;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.progressDataList, (int32_t)progressDataList, v7, v8);
}


System_Collections_Generic_List_ValueTuple_string__string___o *EventMissionProgressRequest_Argument__ConvertToJsonFieldAndStringList(
        EventMissionProgressRequest_Argument_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_T__o *v3; // x23
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  Il2CppObject *v7; // x21
  System_String_o *v8; // x0
  Il2CppObject *v9; // x2
  const MethodInfo_3AE98C8 *v10; // x4
  Il2CppObject *v11; // x0
  System_ValueTuple_object__object__o v12; // x1 OVERLAPPED
  const MethodInfo *v13; // x3
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  CGThumbnailListItem_o *v17; // x0
  struct System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *progressDataList; // x21
  System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__c *klass; // x8
  __int64 v20; // x9
  int32_t *p_offset; // x10
  __int64 v22; // x0
  unsigned int v23; // w0
  struct System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x23
  unsigned int *v25; // x21
  unsigned __int64 v26; // x22
  System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__c *v27; // x8
  __int64 v28; // x9
  int32_t *v29; // x10
  __int64 v30; // x0
  struct System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *v31; // x23
  System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__c *v32; // x8
  __int64 v33; // x9
  int32_t *v34; // x10
  __int64 v35; // x0
  _DWORD *v36; // x24
  System_Collections_Generic_Dictionary_object__object__o *v37; // x23
  __int64 v38; // x3
  __int64 v39; // x4
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  Il2CppObject *v43; // x0
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  Il2CppObject *v47; // x0
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x4
  Il2CppObject *v51; // x0
  __int64 v52; // x2
  __int64 v53; // x3
  __int64 v54; // x4
  Il2CppObject *v55; // x0
  __int64 v56; // x0
  __int64 v57; // x1
  __int64 v58; // x2
  const MethodInfo *v59; // x3
  unsigned int *v60; // x0
  Il2CppObject *v61; // x2
  const MethodInfo_3AE98C8 *v62; // x4
  const MethodInfo *v63; // x3
  struct System_Object_array *v64; // x8
  _QWORD *v65; // x9
  __int64 v66; // x10
  CGThumbnailListItem_o *v67; // x0
  __int64 v69; // x0
  System_Collections_Generic_List_T__o *v70; // [xsp+0h] [xbp-90h]
  int v71; // [xsp+Ch] [xbp-84h] BYREF
  int v72; // [xsp+10h] [xbp-80h] BYREF
  int v73; // [xsp+14h] [xbp-7Ch] BYREF
  System_ValueTuple_object__object__o v74; // [xsp+18h] [xbp-78h] BYREF
  int64_t deemedTime; // [xsp+28h] [xbp-68h] BYREF
  System_ValueTuple_object__object__o v76; // 0:x0.16
  System_ValueTuple_object__object__o v77; // 0:x0.16

  if ( (byte_4C28DC8 & 1) == 0 )
  {
    sub_1C2D490(&System_Collections_Generic_Dictionary_string__object____TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    sub_1C2D490(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&long_TypeInfo);
    sub_1C2D490(&JsonManager_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_ValueTuple_string__string___Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ValueTuple_string__string____ctor__);
    sub_1C2D490(&System_Collections_Generic_List_ValueTuple_string__string___TypeInfo);
    sub_1C2D490(&Method_System_ValueTuple_string__string___ctor__);
    sub_1C2D490(&StringLiteral_21588/*"missionConditionDetailId"*/);
    sub_1C2D490(&StringLiteral_19133/*"eventId"*/);
    sub_1C2D490(&StringLiteral_18525/*"deemedTime"*/);
    sub_1C2D490(&StringLiteral_23975/*"targetId"*/);
    sub_1C2D490(&StringLiteral_21593/*"missionTargetId"*/);
    sub_1C2D490(&StringLiteral_22774/*"progress"*/);
    sub_1C2D490(&StringLiteral_16665/*"addCount"*/);
    byte_4C28DC8 = 1;
  }
  v3 = (System_Collections_Generic_List_T__o *)sub_1C2D6DC(System_Collections_Generic_List_ValueTuple_string__string___TypeInfo);
  System_Collections_Generic_List_ValueTuple_object__object_____ctor(
    v3,
    (const MethodInfo_3738690 *)Method_System_Collections_Generic_List_ValueTuple_string__string____ctor__);
  deemedTime = this->fields.deemedTime;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &deemedTime, v4, v5, v6);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v8 = JsonManager__toJson(v7, 0, 0, 0);
  v76.fields.Item2 = (Il2CppObject *)StringLiteral_18525/*"deemedTime"*/;
  v9 = (Il2CppObject *)v8;
  v76.fields.Item1 = (Il2CppObject *)&v74;
  v74.fields.Item1 = 0;
  v74.fields.Item2 = 0;
  System_ValueTuple_object__object____ctor(
    v76,
    v9,
    (Il2CppObject *)Method_System_ValueTuple_string__string___ctor__,
    v10);
  if ( !v3 )
    goto LABEL_39;
  v12 = v74;
  items = v3->fields._items;
  v15 = Method_System_Collections_Generic_List_ValueTuple_string__string___Add__;
  ++v3->fields._version;
  if ( !items )
    goto LABEL_39;
  size = v3->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_ValueTuple_object__object____AddWithResize(
      v3,
      v12,
      *(const MethodInfo_3738F10 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
  }
  else
  {
    v17 = (CGThumbnailListItem_o *)(&items->obj + size);
    v3->fields._size = size + 1;
    v17->fields.sortValue0 = (int64_t)v12.fields.Item1;
    v17 = (CGThumbnailListItem_o *)((char *)v17 + 32);
    v17->monitor = v12.fields.Item2;
    sub_1C2D434(v17, 0, (int32_t)v12.fields.Item2, v13);
  }
  progressDataList = this->fields.progressDataList;
  if ( !progressDataList )
    goto LABEL_39;
  klass = progressDataList->klass;
  v20 = *(unsigned __int16 *)&progressDataList->klass->_2.rank;
  v70 = v3;
  if ( *(_WORD *)&progressDataList->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__c **)p_offset
            - 1) != System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__TypeInfo )
    {
      --v20;
      p_offset += 4;
      if ( !v20 )
        goto LABEL_15;
    }
    v22 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_15:
    v22 = sub_1C7DCA8(
            progressDataList,
            System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__TypeInfo,
            0);
  }
  v23 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *, _QWORD))v22)(
          progressDataList,
          *(_QWORD *)(v22 + 8));
  v11 = (Il2CppObject *)sub_1C2D538(System_Collections_Generic_Dictionary_string__object____TypeInfo, v23);
  v24 = this->fields.progressDataList;
  if ( !v24 )
    goto LABEL_39;
  v25 = (unsigned int *)v11;
  v26 = 0;
  while ( 1 )
  {
    v27 = v24->klass;
    v28 = *(unsigned __int16 *)&v24->klass->_2.rank;
    if ( *(_WORD *)&v24->klass->_2.rank )
    {
      v29 = &v27->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__c **)v29
              - 1) != System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__TypeInfo )
      {
        --v28;
        v29 += 4;
        if ( !v28 )
          goto LABEL_23;
      }
      v30 = (__int64)&v27->vtable[*v29];
    }
    else
    {
LABEL_23:
      v30 = sub_1C7DCA8(
              v24,
              System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__TypeInfo,
              0);
    }
    v11 = (Il2CppObject *)(*(__int64 (__fastcall **)(struct System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *, _QWORD))v30)(
                            v24,
                            *(_QWORD *)(v30 + 8));
    if ( (__int64)v26 >= (int)v11 )
      break;
    v31 = this->fields.progressDataList;
    if ( v31 )
    {
      v32 = v31->klass;
      v33 = *(unsigned __int16 *)&v31->klass->_2.rank;
      if ( *(_WORD *)&v31->klass->_2.rank )
      {
        v34 = &v32->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__c **)v34
                - 1) != System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__TypeInfo )
        {
          --v33;
          v34 += 4;
          if ( !v33 )
            goto LABEL_31;
        }
        v35 = (__int64)&v32->vtable[*v34];
      }
      else
      {
LABEL_31:
        v35 = sub_1C7DCA8(
                this->fields.progressDataList,
                System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__TypeInfo,
                0);
      }
      v36 = (_DWORD *)(*(__int64 (__fastcall **)(struct System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *, _QWORD, _QWORD))v35)(
                        v31,
                        (unsigned int)v26,
                        *(_QWORD *)(v35 + 8));
      v37 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C2D6DC(System_Collections_Generic_Dictionary_string__object__TypeInfo);
      System_Collections_Generic_Dictionary_object__object____ctor(
        v37,
        (const MethodInfo_3449978 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
      if ( v36 )
      {
        LODWORD(v74.fields.Item1) = v36[4];
        v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v74, v12.fields.Item2, v38, v39);
        if ( v37 )
        {
          System_Collections_Generic_Dictionary_object__object___set_Item(
            v37,
            (Il2CppObject *)StringLiteral_21593/*"missionTargetId"*/,
            v11,
            (const MethodInfo_344A314 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
          LODWORD(deemedTime) = v36[5];
          v43 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &deemedTime, v40, v41, v42);
          System_Collections_Generic_Dictionary_object__object___set_Item(
            v37,
            (Il2CppObject *)StringLiteral_21588/*"missionConditionDetailId"*/,
            v43,
            (const MethodInfo_344A314 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
          v73 = v36[6];
          v47 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v73, v44, v45, v46);
          System_Collections_Generic_Dictionary_object__object___set_Item(
            v37,
            (Il2CppObject *)StringLiteral_23975/*"targetId"*/,
            v47,
            (const MethodInfo_344A314 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
          v72 = v36[7];
          v51 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v72, v48, v49, v50);
          System_Collections_Generic_Dictionary_object__object___set_Item(
            v37,
            (Il2CppObject *)StringLiteral_19133/*"eventId"*/,
            v51,
            (const MethodInfo_344A314 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
          v71 = v36[8];
          v55 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v71, v52, v53, v54);
          System_Collections_Generic_Dictionary_object__object___set_Item(
            v37,
            (Il2CppObject *)StringLiteral_16665/*"addCount"*/,
            v55,
            (const MethodInfo_344A314 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
          if ( v25 )
          {
            v56 = sub_1C2D5CC(v37, *(_QWORD *)(*(_QWORD *)v25 + 64LL));
            if ( !v56 )
            {
              v69 = sub_1C2D710(0);
              sub_1C2D5B8(v69, 0);
            }
            if ( v26 >= v25[6] )
              sub_1C2D6F4(v56, v57, v58);
            v60 = &v25[2 * v26];
            *((_QWORD *)v60 + 4) = v37;
            sub_1C2D434((CGThumbnailListItem_o *)(v60 + 8), (int32_t)v37, v58, v59);
            v24 = this->fields.progressDataList;
            ++v26;
            if ( v24 )
              continue;
          }
        }
      }
    }
    goto LABEL_39;
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v61 = (Il2CppObject *)JsonManager__toJson((Il2CppObject *)v25, 0, 0, 0);
  v77.fields.Item1 = (Il2CppObject *)&v74;
  v77.fields.Item2 = (Il2CppObject *)StringLiteral_22774/*"progress"*/;
  v74 = (System_ValueTuple_object__object__o)0LL;
  System_ValueTuple_object__object____ctor(
    v77,
    v61,
    (Il2CppObject *)Method_System_ValueTuple_string__string___ctor__,
    v62);
  v12 = v74;
  v64 = v70->fields._items;
  v65 = Method_System_Collections_Generic_List_ValueTuple_string__string___Add__;
  ++v70->fields._version;
  if ( !v64 )
LABEL_39:
    sub_1C2D6EC(v11, v12.fields.Item1);
  v66 = v70->fields._size;
  if ( (unsigned int)v66 >= LODWORD(v64->max_length) )
  {
    System_Collections_Generic_List_ValueTuple_object__object____AddWithResize(
      v70,
      v12,
      *(const MethodInfo_3738F10 **)(*(_QWORD *)(v65[4] + 192LL) + 112LL));
  }
  else
  {
    v67 = (CGThumbnailListItem_o *)(&v64->obj + v66);
    v70->fields._size = v66 + 1;
    v67->fields.sortValue0 = (int64_t)v12.fields.Item1;
    v67 = (CGThumbnailListItem_o *)((char *)v67 + 32);
    v67->monitor = v12.fields.Item2;
    sub_1C2D434(v67, 0, (int32_t)v12.fields.Item2, v63);
  }
  return (System_Collections_Generic_List_ValueTuple_string__string___o *)v70;
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