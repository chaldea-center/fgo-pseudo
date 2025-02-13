void __fastcall EventMissionProgressRequest__beginRequest(
        EventMissionProgressRequest_o *this,
        EventMissionProgressRequest_Argument_o *arg,
        const MethodInfo *method)
{
  RequestBase_o *v4; // x19
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x1
  __int128 v7; // [xsp+0h] [xbp-40h] BYREF
  __int128 v8; // [xsp+10h] [xbp-30h]

  v4 = (RequestBase_o *)this;
  if ( (byte_4BDDE8F & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_string__string___Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_string__string___MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_string__string___get_Current__);
    this = (EventMissionProgressRequest_o *)sub_1C21E38(&Method_System_Collections_Generic_List_ValueTuple_string__string___GetEnumerator__);
    byte_4BDDE8F = 1;
  }
  v7 = 0u;
  v8 = 0u;
  if ( !arg
    || (this = (EventMissionProgressRequest_o *)EventMissionProgressRequest_Argument__ConvertToJsonFieldAndStringList(
                                                  arg,
                                                  (const MethodInfo *)arg)) == 0LL )
  {
    sub_1C22094(this, arg);
  }
  System_Collections_Generic_List_ValueTuple_object__object____GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v7,
    (System_Collections_Generic_List_T__o *)this,
    (const MethodInfo_35FF0A8 *)Method_System_Collections_Generic_List_ValueTuple_string__string___GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_ValueTuple_object__object____MoveNext(
            (System_Collections_Generic_List_Enumerator_T__o *)&v7,
            (const MethodInfo_33BF1C4 *)Method_System_Collections_Generic_List_Enumerator_ValueTuple_string__string___MoveNext__) )
    RequestBase__addField_42414744(v4, (System_String_o *)v8, *((System_String_o **)&v8 + 1), v5);
  System_Collections_Generic_List_Enumerator_ValueTuple_object__object____Dispose(
    (System_Collections_Generic_List_Enumerator_T__o *)&v7,
    (const MethodInfo_33BF1C0 *)Method_System_Collections_Generic_List_Enumerator_ValueTuple_string__string___Dispose__);
  RequestBase__beginRequest(v4, v6);
}


System_String_o *__fastcall EventMissionProgressRequest__getURL(
        EventMissionProgressRequest_o *this,
        const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4BDDE8E & 1) == 0 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&StringLiteral_19463/*"eventMission/progress"*/);
    byte_4BDDE8E = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_63115476(BaseUrl, (System_String_o *)StringLiteral_19463/*"eventMission/progress"*/, 0LL);
}


void __fastcall EventMissionProgressRequest_Argument___ctor(
        EventMissionProgressRequest_Argument_o *this,
        int64_t deemedTime,
        System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *progressDataList,
        const MethodInfo *method)
{
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  if ( (byte_4BDDE90 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__TypeInfo);
    byte_4BDDE90 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.deemedTime = deemedTime;
  if ( !progressDataList )
  {
    progressDataList = (System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *)sub_1C22084(System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      (System_Collections_Generic_List_object__o *)progressDataList,
      (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___ctor__);
  }
  this->fields.progressDataList = progressDataList;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.progressDataList,
    (int64_t)progressDataList,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
}


System_Collections_Generic_List_ValueTuple_string__string___o *__fastcall EventMissionProgressRequest_Argument__ConvertToJsonFieldAndStringList(
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
  const MethodInfo_39A64B8 *v10; // x4
  Il2CppObject *v11; // x0
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  PartyOrganizationUtility_o *v20; // x0
  struct System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *progressDataList; // x21
  System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__c *klass; // x8
  __int64 v23; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
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
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  Il2CppObject *v46; // x0
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  Il2CppObject *v50; // x0
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  Il2CppObject *v54; // x0
  __int64 v55; // x2
  __int64 v56; // x3
  __int64 v57; // x4
  Il2CppObject *v58; // x0
  __int64 v59; // x0
  __int64 v60; // x1
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  unsigned int *v67; // x0
  Il2CppObject *v68; // x2
  const MethodInfo_39A64B8 *v69; // x4
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  struct System_Object_array *v75; // x8
  _QWORD *v76; // x9
  __int64 v77; // x10
  PartyOrganizationUtility_o *v78; // x0
  __int64 v80; // x0
  System_Collections_Generic_List_T__o *v81; // [xsp+0h] [xbp-90h]
  int v82; // [xsp+Ch] [xbp-84h] BYREF
  int v83; // [xsp+10h] [xbp-80h] BYREF
  int v84; // [xsp+14h] [xbp-7Ch] BYREF
  System_ValueTuple_object__object__o v85; // [xsp+18h] [xbp-78h] BYREF
  int64_t deemedTime; // [xsp+28h] [xbp-68h] BYREF
  System_ValueTuple_object__object__o v87; // 0:x0.16
  System_ValueTuple_object__object__o v88; // 0:x0.16
  System_ValueTuple_object__object__o v89; // 0:x1.16

  if ( (byte_4BDDE91 & 1) == 0 )
  {
    sub_1C21E38(&System_Collections_Generic_Dictionary_string__object____TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    sub_1C21E38(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__TypeInfo);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&long_TypeInfo);
    sub_1C21E38(&JsonManager_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_ValueTuple_string__string___Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ValueTuple_string__string____ctor__);
    sub_1C21E38(&System_Collections_Generic_List_ValueTuple_string__string___TypeInfo);
    sub_1C21E38(&Method_System_ValueTuple_string__string___ctor__);
    sub_1C21E38(&StringLiteral_21847/*"missionConditionDetailId"*/);
    sub_1C21E38(&StringLiteral_19460/*"eventId"*/);
    sub_1C21E38(&StringLiteral_18843/*"deemedTime"*/);
    sub_1C21E38(&StringLiteral_24283/*"targetId"*/);
    sub_1C21E38(&StringLiteral_21852/*"missionTargetId"*/);
    sub_1C21E38(&StringLiteral_23032/*"progress"*/);
    sub_1C21E38(&StringLiteral_16944/*"addCount"*/);
    byte_4BDDE91 = 1;
  }
  v3 = (System_Collections_Generic_List_T__o *)sub_1C22084(System_Collections_Generic_List_ValueTuple_string__string___TypeInfo);
  System_Collections_Generic_List_ValueTuple_object__object_____ctor(
    v3,
    (const MethodInfo_35FDCD0 *)Method_System_Collections_Generic_List_ValueTuple_string__string____ctor__);
  deemedTime = this->fields.deemedTime;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &deemedTime, v4, v5, v6);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v8 = JsonManager__toJson(v7, 0, 0, 0LL);
  v87.fields.Item2 = (Il2CppObject *)StringLiteral_18843/*"deemedTime"*/;
  v9 = (Il2CppObject *)v8;
  v87.fields.Item1 = (Il2CppObject *)&v85;
  v85.fields.Item1 = 0LL;
  v85.fields.Item2 = 0LL;
  System_ValueTuple_object__object____ctor(
    v87,
    v9,
    (Il2CppObject *)Method_System_ValueTuple_string__string___ctor__,
    v10);
  if ( !v3 )
    goto LABEL_39;
  v89 = v85;
  items = v3->fields._items;
  v18 = Method_System_Collections_Generic_List_ValueTuple_string__string___Add__;
  ++v3->fields._version;
  if ( !items )
    goto LABEL_39;
  size = v3->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_ValueTuple_object__object____AddWithResize(
      v3,
      v89,
      *(const MethodInfo_35FE550 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    v20 = (PartyOrganizationUtility_o *)(&items->obj + size);
    v3->fields._size = size + 1;
    *(_QWORD *)&v20->fields._SelectedNormalFollowerClassId_k__BackingField = v89.fields.Item1;
    v20 = (PartyOrganizationUtility_o *)((char *)v20 + 32);
    v20->monitor = v89.fields.Item2;
    sub_1C21DDC(v20, 0LL, (int64_t)v89.fields.Item2, v12, v13, v14, v15, v16);
  }
  progressDataList = this->fields.progressDataList;
  if ( !progressDataList )
    goto LABEL_39;
  klass = progressDataList->klass;
  v23 = *(unsigned __int16 *)(&progressDataList->klass->_2.bitflags2 + 3);
  v81 = v3;
  if ( *(_WORD *)(&progressDataList->klass->_2.bitflags2 + 3) )
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
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_15:
    p_method = sub_1C73E18(
                 progressDataList,
                 System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__TypeInfo,
                 0LL);
  }
  v26 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *, _QWORD))p_method)(
          progressDataList,
          *(_QWORD *)(p_method + 8));
  v11 = (Il2CppObject *)sub_1C21EE0(System_Collections_Generic_Dictionary_string__object____TypeInfo, v26);
  v27 = this->fields.progressDataList;
  if ( !v27 )
    goto LABEL_39;
  v28 = (unsigned int *)v11;
  v29 = 0LL;
  while ( 1 )
  {
    v30 = v27->klass;
    v31 = *(unsigned __int16 *)(&v27->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v27->klass->_2.bitflags2 + 3) )
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
      v33 = (__int64)&v30->vtable[*v32].method;
    }
    else
    {
LABEL_23:
      v33 = sub_1C73E18(
              v27,
              System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__TypeInfo,
              0LL);
    }
    v11 = (Il2CppObject *)(*(__int64 (__fastcall **)(struct System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *, _QWORD))v33)(
                            v27,
                            *(_QWORD *)(v33 + 8));
    if ( (__int64)v29 >= (int)v11 )
      break;
    v34 = this->fields.progressDataList;
    if ( v34 )
    {
      v35 = v34->klass;
      v36 = *(unsigned __int16 *)(&v34->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v34->klass->_2.bitflags2 + 3) )
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
        v38 = (__int64)&v35->vtable[*v37].method;
      }
      else
      {
LABEL_31:
        v38 = sub_1C73E18(
                this->fields.progressDataList,
                System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__TypeInfo,
                0LL);
      }
      v39 = (_DWORD *)(*(__int64 (__fastcall **)(struct System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *, _QWORD, _QWORD))v38)(
                        v34,
                        (unsigned int)v29,
                        *(_QWORD *)(v38 + 8));
      v40 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C22084(System_Collections_Generic_Dictionary_string__object__TypeInfo);
      System_Collections_Generic_Dictionary_object__object____ctor(
        v40,
        (const MethodInfo_3315CD0 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
      if ( v39 )
      {
        LODWORD(v85.fields.Item1) = v39[4];
        v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v85, v89.fields.Item2, v41, v42);
        if ( v40 )
        {
          System_Collections_Generic_Dictionary_object__object___set_Item(
            v40,
            (Il2CppObject *)StringLiteral_21852/*"missionTargetId"*/,
            v11,
            (const MethodInfo_331666C *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
          LODWORD(deemedTime) = v39[5];
          v46 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &deemedTime, v43, v44, v45);
          System_Collections_Generic_Dictionary_object__object___set_Item(
            v40,
            (Il2CppObject *)StringLiteral_21847/*"missionConditionDetailId"*/,
            v46,
            (const MethodInfo_331666C *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
          v84 = v39[6];
          v50 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v84, v47, v48, v49);
          System_Collections_Generic_Dictionary_object__object___set_Item(
            v40,
            (Il2CppObject *)StringLiteral_24283/*"targetId"*/,
            v50,
            (const MethodInfo_331666C *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
          v83 = v39[7];
          v54 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v83, v51, v52, v53);
          System_Collections_Generic_Dictionary_object__object___set_Item(
            v40,
            (Il2CppObject *)StringLiteral_19460/*"eventId"*/,
            v54,
            (const MethodInfo_331666C *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
          v82 = v39[8];
          v58 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v82, v55, v56, v57);
          System_Collections_Generic_Dictionary_object__object___set_Item(
            v40,
            (Il2CppObject *)StringLiteral_16944/*"addCount"*/,
            v58,
            (const MethodInfo_331666C *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
          if ( v28 )
          {
            v59 = sub_1C21F74(v40, *(_QWORD *)(*(_QWORD *)v28 + 64LL));
            if ( !v59 )
            {
              v80 = sub_1C220B8(0LL);
              sub_1C21F60(v80, 0LL);
            }
            if ( v29 >= v28[6] )
              sub_1C2209C(v59, v60);
            v67 = &v28[2 * v29];
            *((_QWORD *)v67 + 4) = v40;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v67 + 8), (int64_t)v40, v61, v62, v63, v64, v65, v66);
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
  v68 = (Il2CppObject *)JsonManager__toJson((Il2CppObject *)v28, 0, 0, 0LL);
  v88.fields.Item1 = (Il2CppObject *)&v85;
  v88.fields.Item2 = (Il2CppObject *)StringLiteral_23032/*"progress"*/;
  v85 = (System_ValueTuple_object__object__o)0LL;
  System_ValueTuple_object__object____ctor(
    v88,
    v68,
    (Il2CppObject *)Method_System_ValueTuple_string__string___ctor__,
    v69);
  v89 = v85;
  v75 = v81->fields._items;
  v76 = Method_System_Collections_Generic_List_ValueTuple_string__string___Add__;
  ++v81->fields._version;
  if ( !v75 )
LABEL_39:
    sub_1C22094(v11, v89.fields.Item1);
  v77 = v81->fields._size;
  if ( (unsigned int)v77 >= v75->max_length )
  {
    System_Collections_Generic_List_ValueTuple_object__object____AddWithResize(
      v81,
      v89,
      *(const MethodInfo_35FE550 **)(*(_QWORD *)(v76[4] + 192LL) + 112LL));
  }
  else
  {
    v78 = (PartyOrganizationUtility_o *)(&v75->obj + v77);
    v81->fields._size = v77 + 1;
    *(_QWORD *)&v78->fields._SelectedNormalFollowerClassId_k__BackingField = v89.fields.Item1;
    v78 = (PartyOrganizationUtility_o *)((char *)v78 + 32);
    v78->monitor = v89.fields.Item2;
    sub_1C21DDC(v78, 0LL, (int64_t)v89.fields.Item2, v70, v71, v72, v73, v74);
  }
  return (System_Collections_Generic_List_ValueTuple_string__string___o *)v81;
}


void __fastcall EventMissionProgressRequest_Argument_ProgressData___ctor(
        EventMissionProgressRequest_Argument_ProgressData_o *this,
        int32_t missionTargetId,
        int32_t missionConditionDetailId,
        int32_t targetId,
        int32_t eventId,
        int32_t addCount,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.missionTargetId = missionTargetId;
  this->fields.missionConditionDetailId = missionConditionDetailId;
  this->fields.targetId = targetId;
  this->fields.eventId = eventId;
  this->fields.addCount = addCount;
}