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
  if ( (byte_4C394CF & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_string__string___Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_string__string___MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_string__string___get_Current__);
    this = (EventMissionProgressRequest_o *)sub_1C32C20(&Method_System_Collections_Generic_List_ValueTuple_string__string___GetEnumerator__);
    byte_4C394CF = 1;
  }
  v5 = 0u;
  v6 = 0u;
  if ( !arg
    || (this = (EventMissionProgressRequest_o *)EventMissionProgressRequest_Argument__ConvertToJsonFieldAndStringList(
                                                  arg,
                                                  (const MethodInfo *)arg)) == 0 )
  {
    sub_1C32E7C(this);
  }
  System_Collections_Generic_List_ValueTuple_object__object____GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v5,
    (System_Collections_Generic_List_T__o *)this,
    (const MethodInfo_37486A0 *)Method_System_Collections_Generic_List_ValueTuple_string__string___GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_ValueTuple_object__object____MoveNext(
            (System_Collections_Generic_List_Enumerator_T__o *)&v5,
            (const MethodInfo_351A4FC *)Method_System_Collections_Generic_List_Enumerator_ValueTuple_string__string___MoveNext__) )
    RequestBase__addField_44145196(v4, (System_String_o *)v6, *((System_String_o **)&v6 + 1), 0);
  System_Collections_Generic_List_Enumerator_ValueTuple_object__object____Dispose(
    (System_Collections_Generic_List_Enumerator_T__o *)&v5,
    (const MethodInfo_351A4F8 *)Method_System_Collections_Generic_List_Enumerator_ValueTuple_string__string___Dispose__);
  RequestBase__beginRequest(v4, 0);
}


System_String_o *EventMissionProgressRequest__getURL(EventMissionProgressRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4C394CE & 1) == 0 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&StringLiteral_19146/*"eventMission/progress"*/);
    byte_4C394CE = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_63518544(BaseUrl, (System_String_o *)StringLiteral_19146/*"eventMission/progress"*/, 0);
}


void EventMissionProgressRequest_Argument___ctor(
        EventMissionProgressRequest_Argument_o *this,
        int64_t deemedTime,
        System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *progressDataList,
        const MethodInfo *method)
{
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C394D0 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__TypeInfo);
    byte_4C394D0 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.deemedTime = deemedTime;
  if ( !progressDataList )
  {
    progressDataList = (System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *)sub_1C32E6C(System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      (System_Collections_Generic_List_object__o *)progressDataList,
      (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___ctor__);
  }
  this->fields.progressDataList = progressDataList;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.progressDataList, (int32_t)progressDataList, v7, v8);
}


System_Collections_Generic_List_ValueTuple_string__string___o *EventMissionProgressRequest_Argument__ConvertToJsonFieldAndStringList(
        EventMissionProgressRequest_Argument_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_T__o *v3; // x23
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  __int64 v7; // x5
  __int64 v8; // x6
  __int64 v9; // x7
  Il2CppObject *v10; // x21
  System_String_o *v11; // x0
  Il2CppObject *v12; // x2
  const MethodInfo_3AF85D0 *v13; // x4
  Il2CppObject *v14; // x0
  const MethodInfo *v15; // x3
  System_ValueTuple_object__object__o v16; // x1 OVERLAPPED
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  CGThumbnailListItem_o *v20; // x0
  struct System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *progressDataList; // x21
  System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__c *klass; // x8
  __int64 v23; // x9
  int32_t *p_offset; // x10
  __int64 v25; // x0
  unsigned int v26; // w0
  struct System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *v27; // x23
  unsigned int *v28; // x21
  unsigned __int64 v29; // x22
  System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__c *v30; // x8
  __int64 v31; // x9
  int32_t *v32; // x10
  __int64 v33; // x0
  struct System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *v34; // x23
  System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__c *v35; // x8
  __int64 v36; // x9
  int32_t *v37; // x10
  __int64 v38; // x0
  _DWORD *v39; // x24
  System_Collections_Generic_Dictionary_object__object__o *v40; // x23
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  __int64 v44; // x5
  __int64 v45; // x6
  __int64 v46; // x7
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  __int64 v50; // x5
  __int64 v51; // x6
  __int64 v52; // x7
  Il2CppObject *v53; // x0
  __int64 v54; // x2
  __int64 v55; // x3
  __int64 v56; // x4
  __int64 v57; // x5
  __int64 v58; // x6
  __int64 v59; // x7
  Il2CppObject *v60; // x0
  __int64 v61; // x2
  __int64 v62; // x3
  __int64 v63; // x4
  __int64 v64; // x5
  __int64 v65; // x6
  __int64 v66; // x7
  Il2CppObject *v67; // x0
  __int64 v68; // x2
  __int64 v69; // x3
  __int64 v70; // x4
  __int64 v71; // x5
  __int64 v72; // x6
  __int64 v73; // x7
  Il2CppObject *v74; // x0
  __int64 v75; // x0
  int32_t v76; // w2
  const MethodInfo *v77; // x3
  unsigned int *v78; // x0
  Il2CppObject *v79; // x2
  const MethodInfo_3AF85D0 *v80; // x4
  const MethodInfo *v81; // x3
  System_ValueTuple_object__object__o v82; // x1 OVERLAPPED
  struct System_Object_array *v83; // x8
  _QWORD *v84; // x9
  __int64 v85; // x10
  CGThumbnailListItem_o *v86; // x0
  __int64 v88; // x0
  System_Collections_Generic_List_T__o *v89; // [xsp+0h] [xbp-90h]
  int v90; // [xsp+Ch] [xbp-84h] BYREF
  int v91; // [xsp+10h] [xbp-80h] BYREF
  int v92; // [xsp+14h] [xbp-7Ch] BYREF
  System_ValueTuple_object__object__o v93; // [xsp+18h] [xbp-78h] BYREF
  int64_t deemedTime; // [xsp+28h] [xbp-68h] BYREF
  System_ValueTuple_object__object__o v95; // 0:x0.16
  System_ValueTuple_object__object__o v96; // 0:x0.16

  if ( (byte_4C394D1 & 1) == 0 )
  {
    sub_1C32C20(&System_Collections_Generic_Dictionary_string__object____TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    sub_1C32C20(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__TypeInfo);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&long_TypeInfo);
    sub_1C32C20(&JsonManager_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_ValueTuple_string__string___Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ValueTuple_string__string____ctor__);
    sub_1C32C20(&System_Collections_Generic_List_ValueTuple_string__string___TypeInfo);
    sub_1C32C20(&Method_System_ValueTuple_string__string___ctor__);
    sub_1C32C20(&StringLiteral_21603/*"missionConditionDetailId"*/);
    sub_1C32C20(&StringLiteral_19143/*"eventId"*/);
    sub_1C32C20(&StringLiteral_18530/*"deemedTime"*/);
    sub_1C32C20(&StringLiteral_23993/*"targetId"*/);
    sub_1C32C20(&StringLiteral_21608/*"missionTargetId"*/);
    sub_1C32C20(&StringLiteral_22791/*"progress"*/);
    sub_1C32C20(&StringLiteral_16667/*"addCount"*/);
    byte_4C394D1 = 1;
  }
  v3 = (System_Collections_Generic_List_T__o *)sub_1C32E6C(System_Collections_Generic_List_ValueTuple_string__string___TypeInfo);
  System_Collections_Generic_List_ValueTuple_object__object_____ctor(
    v3,
    (const MethodInfo_37472C8 *)Method_System_Collections_Generic_List_ValueTuple_string__string____ctor__);
  deemedTime = this->fields.deemedTime;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &deemedTime, v4, v5, v6, v7, v8, v9);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v11 = JsonManager__toJson(v10, 0, 0, 0);
  v95.fields.Item2 = (Il2CppObject *)StringLiteral_18530/*"deemedTime"*/;
  v12 = (Il2CppObject *)v11;
  v95.fields.Item1 = (Il2CppObject *)&v93;
  v93.fields.Item1 = 0;
  v93.fields.Item2 = 0;
  System_ValueTuple_object__object____ctor(
    v95,
    v12,
    (Il2CppObject *)Method_System_ValueTuple_string__string___ctor__,
    v13);
  if ( !v3 )
    goto LABEL_39;
  v16 = v93;
  items = v3->fields._items;
  v18 = Method_System_Collections_Generic_List_ValueTuple_string__string___Add__;
  ++v3->fields._version;
  if ( !items )
    goto LABEL_39;
  size = v3->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_ValueTuple_object__object____AddWithResize(
      v3,
      v16,
      *(const MethodInfo_3747B48 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    v20 = (CGThumbnailListItem_o *)(&items->obj + size);
    v3->fields._size = size + 1;
    v20->fields.sortValue0 = (int64_t)v16.fields.Item1;
    v20 = (CGThumbnailListItem_o *)((char *)v20 + 32);
    v20->monitor = v16.fields.Item2;
    sub_1C32BC4(v20, 0, (int32_t)v16.fields.Item2, v15);
  }
  progressDataList = this->fields.progressDataList;
  if ( !progressDataList )
    goto LABEL_39;
  klass = progressDataList->klass;
  v23 = *(unsigned __int16 *)&progressDataList->klass->_2.rank;
  v89 = v3;
  if ( *(_WORD *)&progressDataList->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__c **)p_offset
            - 1) != System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__TypeInfo )
    {
      --v23;
      p_offset += 4;
      if ( !v23 )
        goto LABEL_15;
    }
    v25 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_15:
    v25 = sub_1C83438(
            progressDataList,
            System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__TypeInfo,
            0);
  }
  v26 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *, _QWORD))v25)(
          progressDataList,
          *(_QWORD *)(v25 + 8));
  v14 = (Il2CppObject *)sub_1C32CC8(System_Collections_Generic_Dictionary_string__object____TypeInfo, v26);
  v27 = this->fields.progressDataList;
  if ( !v27 )
    goto LABEL_39;
  v28 = (unsigned int *)v14;
  v29 = 0;
  while ( 1 )
  {
    v30 = v27->klass;
    v31 = *(unsigned __int16 *)&v27->klass->_2.rank;
    if ( *(_WORD *)&v27->klass->_2.rank )
    {
      v32 = &v30->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__c **)v32
              - 1) != System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__TypeInfo )
      {
        --v31;
        v32 += 4;
        if ( !v31 )
          goto LABEL_23;
      }
      v33 = (__int64)&v30->vtable[*v32];
    }
    else
    {
LABEL_23:
      v33 = sub_1C83438(
              v27,
              System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__TypeInfo,
              0);
    }
    v14 = (Il2CppObject *)(*(__int64 (__fastcall **)(struct System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *, _QWORD))v33)(
                            v27,
                            *(_QWORD *)(v33 + 8));
    if ( (__int64)v29 >= (int)v14 )
      break;
    v34 = this->fields.progressDataList;
    if ( v34 )
    {
      v35 = v34->klass;
      v36 = *(unsigned __int16 *)&v34->klass->_2.rank;
      if ( *(_WORD *)&v34->klass->_2.rank )
      {
        v37 = &v35->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__c **)v37
                - 1) != System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__TypeInfo )
        {
          --v36;
          v37 += 4;
          if ( !v36 )
            goto LABEL_31;
        }
        v38 = (__int64)&v35->vtable[*v37];
      }
      else
      {
LABEL_31:
        v38 = sub_1C83438(
                this->fields.progressDataList,
                System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__TypeInfo,
                0);
      }
      v39 = (_DWORD *)(*(__int64 (__fastcall **)(struct System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *, _QWORD, _QWORD))v38)(
                        v34,
                        (unsigned int)v29,
                        *(_QWORD *)(v38 + 8));
      v40 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_string__object__TypeInfo);
      System_Collections_Generic_Dictionary_object__object____ctor(
        v40,
        (const MethodInfo_3458418 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
      if ( v39 )
      {
        LODWORD(v93.fields.Item1) = v39[4];
        v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v93, v41, v42, v43, v44, v45, v46);
        if ( v40 )
        {
          System_Collections_Generic_Dictionary_object__object___set_Item(
            v40,
            (Il2CppObject *)StringLiteral_21608/*"missionTargetId"*/,
            v14,
            (const MethodInfo_3458DB4 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
          LODWORD(deemedTime) = v39[5];
          v53 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &deemedTime, v47, v48, v49, v50, v51, v52);
          System_Collections_Generic_Dictionary_object__object___set_Item(
            v40,
            (Il2CppObject *)StringLiteral_21603/*"missionConditionDetailId"*/,
            v53,
            (const MethodInfo_3458DB4 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
          v92 = v39[6];
          v60 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v92, v54, v55, v56, v57, v58, v59);
          System_Collections_Generic_Dictionary_object__object___set_Item(
            v40,
            (Il2CppObject *)StringLiteral_23993/*"targetId"*/,
            v60,
            (const MethodInfo_3458DB4 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
          v91 = v39[7];
          v67 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v91, v61, v62, v63, v64, v65, v66);
          System_Collections_Generic_Dictionary_object__object___set_Item(
            v40,
            (Il2CppObject *)StringLiteral_19143/*"eventId"*/,
            v67,
            (const MethodInfo_3458DB4 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
          v90 = v39[8];
          v74 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v90, v68, v69, v70, v71, v72, v73);
          System_Collections_Generic_Dictionary_object__object___set_Item(
            v40,
            (Il2CppObject *)StringLiteral_16667/*"addCount"*/,
            v74,
            (const MethodInfo_3458DB4 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
          if ( v28 )
          {
            v75 = sub_1C32D5C(v40, *(_QWORD *)(*(_QWORD *)v28 + 64LL));
            if ( !v75 )
            {
              v88 = sub_1C32EA0(0);
              sub_1C32D48(v88, 0);
            }
            if ( v29 >= v28[6] )
              sub_1C32E84(v75);
            v78 = &v28[2 * v29];
            *((_QWORD *)v78 + 4) = v40;
            sub_1C32BC4((CGThumbnailListItem_o *)(v78 + 8), (int32_t)v40, v76, v77);
            v27 = this->fields.progressDataList;
            ++v29;
            if ( v27 )
              continue;
          }
        }
      }
    }
    goto LABEL_39;
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v79 = (Il2CppObject *)JsonManager__toJson((Il2CppObject *)v28, 0, 0, 0);
  v96.fields.Item1 = (Il2CppObject *)&v93;
  v96.fields.Item2 = (Il2CppObject *)StringLiteral_22791/*"progress"*/;
  v93 = (System_ValueTuple_object__object__o)0LL;
  System_ValueTuple_object__object____ctor(
    v96,
    v79,
    (Il2CppObject *)Method_System_ValueTuple_string__string___ctor__,
    v80);
  v82 = v93;
  v83 = v89->fields._items;
  v84 = Method_System_Collections_Generic_List_ValueTuple_string__string___Add__;
  ++v89->fields._version;
  if ( !v83 )
LABEL_39:
    sub_1C32E7C(v14);
  v85 = v89->fields._size;
  if ( (unsigned int)v85 >= LODWORD(v83->max_length) )
  {
    System_Collections_Generic_List_ValueTuple_object__object____AddWithResize(
      v89,
      v82,
      *(const MethodInfo_3747B48 **)(*(_QWORD *)(v84[4] + 192LL) + 112LL));
  }
  else
  {
    v86 = (CGThumbnailListItem_o *)(&v83->obj + v85);
    v89->fields._size = v85 + 1;
    v86->fields.sortValue0 = (int64_t)v82.fields.Item1;
    v86 = (CGThumbnailListItem_o *)((char *)v86 + 32);
    v86->monitor = v82.fields.Item2;
    sub_1C32BC4(v86, 0, (int32_t)v82.fields.Item2, v81);
  }
  return (System_Collections_Generic_List_ValueTuple_string__string___o *)v89;
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