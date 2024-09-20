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
  if ( (byte_4A5C9EE & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_string__string___Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_string__string___MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_string__string___get_Current__);
    this = (EventMissionProgressRequest_o *)sub_1B885B0(&Method_System_Collections_Generic_List_ValueTuple_string__string___GetEnumerator__);
    byte_4A5C9EE = 1;
  }
  v7 = 0u;
  v8 = 0u;
  if ( !arg
    || (this = (EventMissionProgressRequest_o *)EventMissionProgressRequest_Argument__ConvertToJsonFieldAndStringList(
                                                  arg,
                                                  (const MethodInfo *)arg)) == 0LL )
  {
    sub_1B8880C(this, arg);
  }
  System_Collections_Generic_List_ValueTuple_object__object____GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v7,
    (System_Collections_Generic_List_T__o *)this,
    (const MethodInfo_34AD828 *)Method_System_Collections_Generic_List_ValueTuple_string__string___GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_ValueTuple_object__object____MoveNext(
            (System_Collections_Generic_List_Enumerator_T__o *)&v7,
            (const MethodInfo_326F2E4 *)Method_System_Collections_Generic_List_Enumerator_ValueTuple_string__string___MoveNext__) )
    RequestBase__addField_41126952(v4, (System_String_o *)v8, *((System_String_o **)&v8 + 1), v5);
  System_Collections_Generic_List_Enumerator_ValueTuple_object__object____Dispose(
    (System_Collections_Generic_List_Enumerator_T__o *)&v7,
    (const MethodInfo_326F2E0 *)Method_System_Collections_Generic_List_Enumerator_ValueTuple_string__string___Dispose__);
  RequestBase__beginRequest(v4, v6);
}


System_String_o *__fastcall EventMissionProgressRequest__getURL(
        EventMissionProgressRequest_o *this,
        const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4A5C9ED & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_19135/*"eventMission/progress"*/);
    byte_4A5C9ED = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61707032(BaseUrl, (System_String_o *)StringLiteral_19135/*"eventMission/progress"*/, 0LL);
}


void __fastcall EventMissionProgressRequest_Argument___ctor(
        EventMissionProgressRequest_Argument_o *this,
        int64_t deemedTime,
        System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *progressDataList,
        const MethodInfo *method)
{
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A5C9EF & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__TypeInfo);
    byte_4A5C9EF = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.deemedTime = deemedTime;
  if ( !progressDataList )
  {
    progressDataList = (System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *)sub_1B887FC(System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      (System_Collections_Generic_List_object__o *)progressDataList,
      (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___ctor__);
  }
  this->fields.progressDataList = progressDataList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.progressDataList, (int32_t)progressDataList, v7, v8);
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
  const MethodInfo_384D2F4 *v10; // x4
  Il2CppObject *v11; // x0
  int32_t v12; // w3
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  ServantStatusBattleListViewItem_o *v16; // x0
  struct System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *progressDataList; // x21
  System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__c *klass; // x8
  __int64 v19; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  unsigned int v22; // w0
  struct System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *v23; // x23
  unsigned int *v24; // x21
  unsigned __int64 v25; // x22
  System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__c *v26; // x8
  __int64 v27; // x9
  int32_t *v28; // x10
  __int64 v29; // x0
  struct System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *v30; // x23
  System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__c *v31; // x8
  __int64 v32; // x9
  int32_t *v33; // x10
  __int64 v34; // x0
  _DWORD *v35; // x24
  System_Collections_Generic_Dictionary_object__object__o *v36; // x23
  __int64 v37; // x3
  __int64 v38; // x4
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  Il2CppObject *v42; // x0
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
  __int64 v55; // x0
  __int64 v56; // x1
  int32_t v57; // w2
  int32_t v58; // w3
  unsigned int *v59; // x0
  Il2CppObject *v60; // x2
  const MethodInfo_384D2F4 *v61; // x4
  int32_t v62; // w3
  struct System_Object_array *v63; // x8
  _QWORD *v64; // x9
  __int64 v65; // x10
  ServantStatusBattleListViewItem_o *v66; // x0
  __int64 v68; // x0
  System_Collections_Generic_List_T__o *v69; // [xsp+0h] [xbp-90h]
  int v70; // [xsp+Ch] [xbp-84h] BYREF
  int v71; // [xsp+10h] [xbp-80h] BYREF
  int v72; // [xsp+14h] [xbp-7Ch] BYREF
  System_ValueTuple_object__object__o v73; // [xsp+18h] [xbp-78h] BYREF
  int64_t deemedTime; // [xsp+28h] [xbp-68h] BYREF
  System_ValueTuple_object__object__o v75; // 0:x0.16
  System_ValueTuple_object__object__o v76; // 0:x0.16
  System_ValueTuple_object__object__o v77; // 0:x1.16

  if ( (byte_4A5C9F0 & 1) == 0 )
  {
    sub_1B885B0(&System_Collections_Generic_Dictionary_string__object____TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&long_TypeInfo);
    sub_1B885B0(&JsonManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ValueTuple_string__string___Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ValueTuple_string__string____ctor__);
    sub_1B885B0(&System_Collections_Generic_List_ValueTuple_string__string___TypeInfo);
    sub_1B885B0(&Method_System_ValueTuple_string__string___ctor__);
    sub_1B885B0(&StringLiteral_21461/*"missionConditionDetailId"*/);
    sub_1B885B0(&StringLiteral_19132/*"eventId"*/);
    sub_1B885B0(&StringLiteral_18529/*"deemedTime"*/);
    sub_1B885B0(&StringLiteral_23853/*"targetId"*/);
    sub_1B885B0(&StringLiteral_21466/*"missionTargetId"*/);
    sub_1B885B0(&StringLiteral_22619/*"progress"*/);
    sub_1B885B0(&StringLiteral_16663/*"addCount"*/);
    byte_4A5C9F0 = 1;
  }
  v3 = (System_Collections_Generic_List_T__o *)sub_1B887FC(System_Collections_Generic_List_ValueTuple_string__string___TypeInfo);
  System_Collections_Generic_List_ValueTuple_object__object_____ctor(
    v3,
    (const MethodInfo_34AC450 *)Method_System_Collections_Generic_List_ValueTuple_string__string____ctor__);
  deemedTime = this->fields.deemedTime;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &deemedTime, v4, v5, v6);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v8 = JsonManager__toJson(v7, 0, 0, 0LL);
  v75.fields.Item2 = (Il2CppObject *)StringLiteral_18529/*"deemedTime"*/;
  v9 = (Il2CppObject *)v8;
  v75.fields.Item1 = (Il2CppObject *)&v73;
  v73.fields.Item1 = 0LL;
  v73.fields.Item2 = 0LL;
  System_ValueTuple_object__object____ctor(
    v75,
    v9,
    (Il2CppObject *)Method_System_ValueTuple_string__string___ctor__,
    v10);
  if ( !v3 )
    goto LABEL_39;
  v77 = v73;
  items = v3->fields._items;
  v14 = Method_System_Collections_Generic_List_ValueTuple_string__string___Add__;
  ++v3->fields._version;
  if ( !items )
    goto LABEL_39;
  size = v3->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_ValueTuple_object__object____AddWithResize(
      v3,
      v77,
      *(const MethodInfo_34ACCD0 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
  }
  else
  {
    v16 = (ServantStatusBattleListViewItem_o *)(&items->obj + size);
    v3->fields._size = size + 1;
    v16->fields.sortValue0 = (int64_t)v77.fields.Item1;
    v16 = (ServantStatusBattleListViewItem_o *)((char *)v16 + 32);
    v16->monitor = v77.fields.Item2;
    sub_1B88554(v16, 0, (int32_t)v77.fields.Item2, v12);
  }
  progressDataList = this->fields.progressDataList;
  if ( !progressDataList )
    goto LABEL_39;
  klass = progressDataList->klass;
  v19 = *(unsigned __int16 *)(&progressDataList->klass->_2.bitflags2 + 3);
  v69 = v3;
  if ( *(_WORD *)(&progressDataList->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__c **)p_offset
            - 1) != System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__TypeInfo )
    {
      --v19;
      p_offset += 4;
      if ( !v19 )
        goto LABEL_15;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_15:
    p_method = sub_1BDA590(
                 progressDataList,
                 System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__TypeInfo,
                 0LL);
  }
  v22 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *, _QWORD))p_method)(
          progressDataList,
          *(_QWORD *)(p_method + 8));
  v11 = (Il2CppObject *)sub_1B88658(System_Collections_Generic_Dictionary_string__object____TypeInfo, v22);
  v23 = this->fields.progressDataList;
  if ( !v23 )
    goto LABEL_39;
  v24 = (unsigned int *)v11;
  v25 = 0LL;
  while ( 1 )
  {
    v26 = v23->klass;
    v27 = *(unsigned __int16 *)(&v23->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v23->klass->_2.bitflags2 + 3) )
    {
      v28 = &v26->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__c **)v28
              - 1) != System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__TypeInfo )
      {
        --v27;
        v28 += 4;
        if ( !v27 )
          goto LABEL_23;
      }
      v29 = (__int64)&v26->vtable[*v28].method;
    }
    else
    {
LABEL_23:
      v29 = sub_1BDA590(
              v23,
              System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__TypeInfo,
              0LL);
    }
    v11 = (Il2CppObject *)(*(__int64 (__fastcall **)(struct System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *, _QWORD))v29)(
                            v23,
                            *(_QWORD *)(v29 + 8));
    if ( (__int64)v25 >= (int)v11 )
      break;
    v30 = this->fields.progressDataList;
    if ( v30 )
    {
      v31 = v30->klass;
      v32 = *(unsigned __int16 *)(&v30->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v30->klass->_2.bitflags2 + 3) )
      {
        v33 = &v31->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__c **)v33
                - 1) != System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__TypeInfo )
        {
          --v32;
          v33 += 4;
          if ( !v32 )
            goto LABEL_31;
        }
        v34 = (__int64)&v31->vtable[*v33].method;
      }
      else
      {
LABEL_31:
        v34 = sub_1BDA590(
                this->fields.progressDataList,
                System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__TypeInfo,
                0LL);
      }
      v35 = (_DWORD *)(*(__int64 (__fastcall **)(struct System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *, _QWORD, _QWORD))v34)(
                        v30,
                        (unsigned int)v25,
                        *(_QWORD *)(v34 + 8));
      v36 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_string__object__TypeInfo);
      System_Collections_Generic_Dictionary_object__object____ctor(
        v36,
        (const MethodInfo_31C6818 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
      if ( v35 )
      {
        LODWORD(v73.fields.Item1) = v35[4];
        v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v73, v77.fields.Item2, v37, v38);
        if ( v36 )
        {
          System_Collections_Generic_Dictionary_object__object___set_Item(
            v36,
            (Il2CppObject *)StringLiteral_21466/*"missionTargetId"*/,
            v11,
            (const MethodInfo_31C71B4 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
          LODWORD(deemedTime) = v35[5];
          v42 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &deemedTime, v39, v40, v41);
          System_Collections_Generic_Dictionary_object__object___set_Item(
            v36,
            (Il2CppObject *)StringLiteral_21461/*"missionConditionDetailId"*/,
            v42,
            (const MethodInfo_31C71B4 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
          v72 = v35[6];
          v46 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v72, v43, v44, v45);
          System_Collections_Generic_Dictionary_object__object___set_Item(
            v36,
            (Il2CppObject *)StringLiteral_23853/*"targetId"*/,
            v46,
            (const MethodInfo_31C71B4 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
          v71 = v35[7];
          v50 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v71, v47, v48, v49);
          System_Collections_Generic_Dictionary_object__object___set_Item(
            v36,
            (Il2CppObject *)StringLiteral_19132/*"eventId"*/,
            v50,
            (const MethodInfo_31C71B4 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
          v70 = v35[8];
          v54 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v70, v51, v52, v53);
          System_Collections_Generic_Dictionary_object__object___set_Item(
            v36,
            (Il2CppObject *)StringLiteral_16663/*"addCount"*/,
            v54,
            (const MethodInfo_31C71B4 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
          if ( v24 )
          {
            v55 = sub_1B886EC(v36, *(_QWORD *)(*(_QWORD *)v24 + 64LL));
            if ( !v55 )
            {
              v68 = sub_1B88830(0LL);
              sub_1B886D8(v68, 0LL);
            }
            if ( v25 >= v24[6] )
              sub_1B88814(v55, v56);
            v59 = &v24[2 * v25];
            *((_QWORD *)v59 + 4) = v36;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v59 + 8), (int32_t)v36, v57, v58);
            v23 = this->fields.progressDataList;
            ++v25;
            if ( v23 )
              continue;
          }
        }
      }
    }
    goto LABEL_39;
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v60 = (Il2CppObject *)JsonManager__toJson((Il2CppObject *)v24, 0, 0, 0LL);
  v76.fields.Item1 = (Il2CppObject *)&v73;
  v76.fields.Item2 = (Il2CppObject *)StringLiteral_22619/*"progress"*/;
  v73 = (System_ValueTuple_object__object__o)0LL;
  System_ValueTuple_object__object____ctor(
    v76,
    v60,
    (Il2CppObject *)Method_System_ValueTuple_string__string___ctor__,
    v61);
  v77 = v73;
  v63 = v69->fields._items;
  v64 = Method_System_Collections_Generic_List_ValueTuple_string__string___Add__;
  ++v69->fields._version;
  if ( !v63 )
LABEL_39:
    sub_1B8880C(v11, v77.fields.Item1);
  v65 = v69->fields._size;
  if ( (unsigned int)v65 >= v63->max_length )
  {
    System_Collections_Generic_List_ValueTuple_object__object____AddWithResize(
      v69,
      v77,
      *(const MethodInfo_34ACCD0 **)(*(_QWORD *)(v64[4] + 192LL) + 112LL));
  }
  else
  {
    v66 = (ServantStatusBattleListViewItem_o *)(&v63->obj + v65);
    v69->fields._size = v65 + 1;
    v66->fields.sortValue0 = (int64_t)v77.fields.Item1;
    v66 = (ServantStatusBattleListViewItem_o *)((char *)v66 + 32);
    v66->monitor = v77.fields.Item2;
    sub_1B88554(v66, 0, (int32_t)v77.fields.Item2, v62);
  }
  return (System_Collections_Generic_List_ValueTuple_string__string___o *)v69;
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