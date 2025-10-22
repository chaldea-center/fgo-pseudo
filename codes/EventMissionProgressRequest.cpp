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
  if ( (byte_4C58894 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_string__string___Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_string__string___MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_string__string___get_Current__);
    this = (EventMissionProgressRequest_o *)sub_1C3E564(&Method_System_Collections_Generic_List_ValueTuple_string__string___GetEnumerator__);
    byte_4C58894 = 1;
  }
  v5 = 0u;
  v6 = 0u;
  if ( !arg
    || (this = (EventMissionProgressRequest_o *)EventMissionProgressRequest_Argument__ConvertToJsonFieldAndStringList(
                                                  arg,
                                                  (const MethodInfo *)arg)) == 0 )
  {
    sub_1C3E7C0(this, arg);
  }
  System_Collections_Generic_List_ValueTuple_object__object____GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v5,
    (System_Collections_Generic_List_T__o *)this,
    (const MethodInfo_3765344 *)Method_System_Collections_Generic_List_ValueTuple_string__string___GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_ValueTuple_object__object____MoveNext(
            (System_Collections_Generic_List_Enumerator_T__o *)&v5,
            (const MethodInfo_35371A0 *)Method_System_Collections_Generic_List_Enumerator_ValueTuple_string__string___MoveNext__) )
    RequestBase__addField_44302832(v4, (System_String_o *)v6, *((System_String_o **)&v6 + 1), 0);
  System_Collections_Generic_List_Enumerator_ValueTuple_object__object____Dispose(
    (System_Collections_Generic_List_Enumerator_T__o *)&v5,
    (const MethodInfo_353719C *)Method_System_Collections_Generic_List_Enumerator_ValueTuple_string__string___Dispose__);
  RequestBase__beginRequest(v4, 0);
}


System_String_o *EventMissionProgressRequest__getURL(EventMissionProgressRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4C58893 & 1) == 0 )
  {
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&StringLiteral_19167/*"eventMission/progress"*/);
    byte_4C58893 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_63636468(BaseUrl, (System_String_o *)StringLiteral_19167/*"eventMission/progress"*/, 0);
}


void EventMissionProgressRequest_Argument___ctor(
        EventMissionProgressRequest_Argument_o *this,
        int64_t deemedTime,
        System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *progressDataList,
        const MethodInfo *method)
{
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C58895 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__TypeInfo);
    byte_4C58895 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.deemedTime = deemedTime;
  if ( !progressDataList )
  {
    progressDataList = (System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *)sub_1C3E7B0(System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      (System_Collections_Generic_List_object__o *)progressDataList,
      (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___ctor__);
  }
  this->fields.progressDataList = progressDataList;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.progressDataList, (int32_t)progressDataList, v7, v8);
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
  const MethodInfo_3B15274 *v13; // x4
  Il2CppObject *v14; // x0
  System_ValueTuple_object__object__o v15; // x1 OVERLAPPED
  const MethodInfo *v16; // x3
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
  __int64 v41; // x3
  __int64 v42; // x4
  __int64 v43; // x5
  __int64 v44; // x6
  __int64 v45; // x7
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 v48; // x4
  __int64 v49; // x5
  __int64 v50; // x6
  __int64 v51; // x7
  Il2CppObject *v52; // x0
  __int64 v53; // x2
  __int64 v54; // x3
  __int64 v55; // x4
  __int64 v56; // x5
  __int64 v57; // x6
  __int64 v58; // x7
  Il2CppObject *v59; // x0
  __int64 v60; // x2
  __int64 v61; // x3
  __int64 v62; // x4
  __int64 v63; // x5
  __int64 v64; // x6
  __int64 v65; // x7
  Il2CppObject *v66; // x0
  __int64 v67; // x2
  __int64 v68; // x3
  __int64 v69; // x4
  __int64 v70; // x5
  __int64 v71; // x6
  __int64 v72; // x7
  Il2CppObject *v73; // x0
  __int64 v74; // x0
  __int64 v75; // x1
  int32_t v76; // w2
  const MethodInfo *v77; // x3
  unsigned int *v78; // x0
  Il2CppObject *v79; // x2
  const MethodInfo_3B15274 *v80; // x4
  const MethodInfo *v81; // x3
  struct System_Object_array *v82; // x8
  _QWORD *v83; // x9
  __int64 v84; // x10
  CGThumbnailListItem_o *v85; // x0
  __int64 v87; // x0
  System_Collections_Generic_List_T__o *v88; // [xsp+0h] [xbp-90h]
  int v89; // [xsp+Ch] [xbp-84h] BYREF
  int v90; // [xsp+10h] [xbp-80h] BYREF
  int v91; // [xsp+14h] [xbp-7Ch] BYREF
  System_ValueTuple_object__object__o v92; // [xsp+18h] [xbp-78h] BYREF
  int64_t deemedTime; // [xsp+28h] [xbp-68h] BYREF
  System_ValueTuple_object__object__o v94; // 0:x0.16
  System_ValueTuple_object__object__o v95; // 0:x0.16

  if ( (byte_4C58896 & 1) == 0 )
  {
    sub_1C3E564(&System_Collections_Generic_Dictionary_string__object____TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    sub_1C3E564(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__TypeInfo);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&long_TypeInfo);
    sub_1C3E564(&JsonManager_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_ValueTuple_string__string___Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ValueTuple_string__string____ctor__);
    sub_1C3E564(&System_Collections_Generic_List_ValueTuple_string__string___TypeInfo);
    sub_1C3E564(&Method_System_ValueTuple_string__string___ctor__);
    sub_1C3E564(&StringLiteral_21624/*"missionConditionDetailId"*/);
    sub_1C3E564(&StringLiteral_19164/*"eventId"*/);
    sub_1C3E564(&StringLiteral_18551/*"deemedTime"*/);
    sub_1C3E564(&StringLiteral_24017/*"targetId"*/);
    sub_1C3E564(&StringLiteral_21629/*"missionTargetId"*/);
    sub_1C3E564(&StringLiteral_22814/*"progress"*/);
    sub_1C3E564(&StringLiteral_16679/*"addCount"*/);
    byte_4C58896 = 1;
  }
  v3 = (System_Collections_Generic_List_T__o *)sub_1C3E7B0(System_Collections_Generic_List_ValueTuple_string__string___TypeInfo);
  System_Collections_Generic_List_ValueTuple_object__object_____ctor(
    v3,
    (const MethodInfo_3763F6C *)Method_System_Collections_Generic_List_ValueTuple_string__string____ctor__);
  deemedTime = this->fields.deemedTime;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &deemedTime, v4, v5, v6, v7, v8, v9);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v11 = JsonManager__toJson(v10, 0, 0, 0);
  v94.fields.Item2 = (Il2CppObject *)StringLiteral_18551/*"deemedTime"*/;
  v12 = (Il2CppObject *)v11;
  v94.fields.Item1 = (Il2CppObject *)&v92;
  v92.fields.Item1 = 0;
  v92.fields.Item2 = 0;
  System_ValueTuple_object__object____ctor(
    v94,
    v12,
    (Il2CppObject *)Method_System_ValueTuple_string__string___ctor__,
    v13);
  if ( !v3 )
    goto LABEL_39;
  v15 = v92;
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
      v15,
      *(const MethodInfo_37647EC **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    v20 = (CGThumbnailListItem_o *)(&items->obj + size);
    v3->fields._size = size + 1;
    v20->fields.sortValue0 = (int64_t)v15.fields.Item1;
    v20 = (CGThumbnailListItem_o *)((char *)v20 + 32);
    v20->monitor = v15.fields.Item2;
    sub_1C3E508(v20, 0, (int32_t)v15.fields.Item2, v16);
  }
  progressDataList = this->fields.progressDataList;
  if ( !progressDataList )
    goto LABEL_39;
  klass = progressDataList->klass;
  v23 = *(unsigned __int16 *)&progressDataList->klass->_2.rank;
  v88 = v3;
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
    v25 = sub_1C8ED7C(
            progressDataList,
            System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__TypeInfo,
            0);
  }
  v26 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *, _QWORD))v25)(
          progressDataList,
          *(_QWORD *)(v25 + 8));
  v14 = (Il2CppObject *)sub_1C3E60C(System_Collections_Generic_Dictionary_string__object____TypeInfo, v26);
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
      v33 = sub_1C8ED7C(
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
        v38 = sub_1C8ED7C(
                this->fields.progressDataList,
                System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__TypeInfo,
                0);
      }
      v39 = (_DWORD *)(*(__int64 (__fastcall **)(struct System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *, _QWORD, _QWORD))v38)(
                        v34,
                        (unsigned int)v29,
                        *(_QWORD *)(v38 + 8));
      v40 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C3E7B0(System_Collections_Generic_Dictionary_string__object__TypeInfo);
      System_Collections_Generic_Dictionary_object__object____ctor(
        v40,
        (const MethodInfo_3474E30 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
      if ( v39 )
      {
        LODWORD(v92.fields.Item1) = v39[4];
        v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v92, v15.fields.Item2, v41, v42, v43, v44, v45);
        if ( v40 )
        {
          System_Collections_Generic_Dictionary_object__object___set_Item(
            v40,
            (Il2CppObject *)StringLiteral_21629/*"missionTargetId"*/,
            v14,
            (const MethodInfo_34757CC *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
          LODWORD(deemedTime) = v39[5];
          v52 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &deemedTime, v46, v47, v48, v49, v50, v51);
          System_Collections_Generic_Dictionary_object__object___set_Item(
            v40,
            (Il2CppObject *)StringLiteral_21624/*"missionConditionDetailId"*/,
            v52,
            (const MethodInfo_34757CC *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
          v91 = v39[6];
          v59 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v91, v53, v54, v55, v56, v57, v58);
          System_Collections_Generic_Dictionary_object__object___set_Item(
            v40,
            (Il2CppObject *)StringLiteral_24017/*"targetId"*/,
            v59,
            (const MethodInfo_34757CC *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
          v90 = v39[7];
          v66 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v90, v60, v61, v62, v63, v64, v65);
          System_Collections_Generic_Dictionary_object__object___set_Item(
            v40,
            (Il2CppObject *)StringLiteral_19164/*"eventId"*/,
            v66,
            (const MethodInfo_34757CC *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
          v89 = v39[8];
          v73 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v89, v67, v68, v69, v70, v71, v72);
          System_Collections_Generic_Dictionary_object__object___set_Item(
            v40,
            (Il2CppObject *)StringLiteral_16679/*"addCount"*/,
            v73,
            (const MethodInfo_34757CC *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
          if ( v28 )
          {
            v74 = sub_1C3E6A0(v40, *(_QWORD *)(*(_QWORD *)v28 + 64LL));
            if ( !v74 )
            {
              v87 = sub_1C3E7E4(0);
              sub_1C3E68C(v87, 0);
            }
            if ( v29 >= v28[6] )
              sub_1C3E7C8(v74, v75);
            v78 = &v28[2 * v29];
            *((_QWORD *)v78 + 4) = v40;
            sub_1C3E508((CGThumbnailListItem_o *)(v78 + 8), (int32_t)v40, v76, v77);
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
  v95.fields.Item1 = (Il2CppObject *)&v92;
  v95.fields.Item2 = (Il2CppObject *)StringLiteral_22814/*"progress"*/;
  v92 = (System_ValueTuple_object__object__o)0LL;
  System_ValueTuple_object__object____ctor(
    v95,
    v79,
    (Il2CppObject *)Method_System_ValueTuple_string__string___ctor__,
    v80);
  v15 = v92;
  v82 = v88->fields._items;
  v83 = Method_System_Collections_Generic_List_ValueTuple_string__string___Add__;
  ++v88->fields._version;
  if ( !v82 )
LABEL_39:
    sub_1C3E7C0(v14, v15.fields.Item1);
  v84 = v88->fields._size;
  if ( (unsigned int)v84 >= LODWORD(v82->max_length) )
  {
    System_Collections_Generic_List_ValueTuple_object__object____AddWithResize(
      v88,
      v15,
      *(const MethodInfo_37647EC **)(*(_QWORD *)(v83[4] + 192LL) + 112LL));
  }
  else
  {
    v85 = (CGThumbnailListItem_o *)(&v82->obj + v84);
    v88->fields._size = v84 + 1;
    v85->fields.sortValue0 = (int64_t)v15.fields.Item1;
    v85 = (CGThumbnailListItem_o *)((char *)v85 + 32);
    v85->monitor = v15.fields.Item2;
    sub_1C3E508(v85, 0, (int32_t)v15.fields.Item2, v81);
  }
  return (System_Collections_Generic_List_ValueTuple_string__string___o *)v88;
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