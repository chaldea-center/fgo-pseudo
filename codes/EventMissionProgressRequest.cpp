void __fastcall EventMissionProgressRequest___ctor(EventMissionProgressRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall EventMissionProgressRequest__beginRequest(
        EventMissionProgressRequest_o *this,
        EventMissionProgressRequest_Argument_o *arg,
        const MethodInfo *method)
{
  RequestBase_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int128 v8; // [xsp+0h] [xbp-40h] BYREF
  __int128 v9; // [xsp+10h] [xbp-30h]

  v4 = (RequestBase_o *)this;
  if ( (byte_4A0A409 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_string__string___Dispose__, arg);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_string__string___MoveNext__, v5);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_string__string___get_Current__, v6);
    this = (EventMissionProgressRequest_o *)sub_1B686D4(
                                              &Method_System_Collections_Generic_List_ValueTuple_string__string___GetEnumerator__,
                                              v7);
    byte_4A0A409 = 1;
  }
  v8 = 0u;
  v9 = 0u;
  if ( !arg
    || (this = (EventMissionProgressRequest_o *)EventMissionProgressRequest_Argument__ConvertToJsonFieldAndStringList(
                                                  arg,
                                                  (const MethodInfo *)arg)) == 0LL )
  {
    sub_1B68930(this, arg);
  }
  System_Collections_Generic_List_ValueTuple_object__object____GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    (System_Collections_Generic_List_T__o *)this,
    (const MethodInfo_3443E1C *)Method_System_Collections_Generic_List_ValueTuple_string__string___GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_ValueTuple_object__object____MoveNext(
            (System_Collections_Generic_List_Enumerator_T__o *)&v8,
            (const MethodInfo_3231800 *)Method_System_Collections_Generic_List_Enumerator_ValueTuple_string__string___MoveNext__) )
    RequestBase__addField_40920848(v4, (System_String_o *)v9, *((System_String_o **)&v9 + 1), 0LL);
  System_Collections_Generic_List_Enumerator_ValueTuple_object__object____Dispose(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    (const MethodInfo_32317FC *)Method_System_Collections_Generic_List_Enumerator_ValueTuple_string__string___Dispose__);
  RequestBase__beginRequest(v4, 0LL);
}


System_String_o *__fastcall EventMissionProgressRequest__getURL(
        EventMissionProgressRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4A0A408 & 1) == 0 )
  {
    sub_1B686D4(&NetworkManager_TypeInfo, method);
    sub_1B686D4(&StringLiteral_19067/*"eventMission/progress"*/, v2);
    byte_4A0A408 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61419468(BaseUrl, (System_String_o *)StringLiteral_19067/*"eventMission/progress"*/, 0LL);
}


void __fastcall EventMissionProgressRequest_Argument___ctor(
        EventMissionProgressRequest_Argument_o *this,
        int64_t deemedTime,
        System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *progressDataList,
        const MethodInfo *method)
{
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A0A40A & 1) == 0 )
  {
    sub_1B686D4(
      &Method_System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___ctor__,
      deemedTime);
    sub_1B686D4(&System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__TypeInfo, v7);
    byte_4A0A40A = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.deemedTime = deemedTime;
  if ( !progressDataList )
  {
    progressDataList = (System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *)sub_1B68920(System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      (System_Collections_Generic_List_object__o *)progressDataList,
      (const MethodInfo_34BBA44 *)Method_System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___ctor__);
  }
  this->fields.progressDataList = progressDataList;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.progressDataList, (int32_t)progressDataList, v8, v9);
}


System_Collections_Generic_List_ValueTuple_string__string___o *__fastcall EventMissionProgressRequest_Argument__ConvertToJsonFieldAndStringList(
        EventMissionProgressRequest_Argument_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  System_Collections_Generic_List_T__o *v22; // x23
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  Il2CppObject *v26; // x21
  System_String_o *v27; // x0
  Il2CppObject *v28; // x2
  const MethodInfo_3808734 *v29; // x4
  Il2CppObject *v30; // x0
  int32_t v31; // w3
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  ServantStatusBattleListViewItem_o *v35; // x0
  struct System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *progressDataList; // x21
  System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__c *klass; // x8
  __int64 v38; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  unsigned int v41; // w0
  struct System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *v42; // x23
  unsigned int *v43; // x21
  unsigned __int64 v44; // x22
  System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__c *v45; // x8
  __int64 v46; // x9
  int32_t *v47; // x10
  __int64 v48; // x0
  struct System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *v49; // x23
  System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__c *v50; // x8
  __int64 v51; // x9
  int32_t *v52; // x10
  __int64 v53; // x0
  _DWORD *v54; // x24
  System_Collections_Generic_Dictionary_object__object__o *v55; // x23
  __int64 v56; // x3
  __int64 v57; // x4
  __int64 v58; // x2
  __int64 v59; // x3
  __int64 v60; // x4
  Il2CppObject *v61; // x0
  __int64 v62; // x2
  __int64 v63; // x3
  __int64 v64; // x4
  Il2CppObject *v65; // x0
  __int64 v66; // x2
  __int64 v67; // x3
  __int64 v68; // x4
  Il2CppObject *v69; // x0
  __int64 v70; // x2
  __int64 v71; // x3
  __int64 v72; // x4
  Il2CppObject *v73; // x0
  __int64 v74; // x0
  __int64 v75; // x1
  int32_t v76; // w2
  int32_t v77; // w3
  unsigned int *v78; // x0
  Il2CppObject *v79; // x2
  const MethodInfo_3808734 *v80; // x4
  int32_t v81; // w3
  struct System_Object_array *v82; // x8
  _QWORD *v83; // x9
  __int64 v84; // x10
  ServantStatusBattleListViewItem_o *v85; // x0
  __int64 v87; // x0
  System_Collections_Generic_List_T__o *v88; // [xsp+0h] [xbp-90h]
  int v89; // [xsp+Ch] [xbp-84h] BYREF
  int v90; // [xsp+10h] [xbp-80h] BYREF
  int v91; // [xsp+14h] [xbp-7Ch] BYREF
  System_ValueTuple_object__object__o v92; // [xsp+18h] [xbp-78h] BYREF
  int64_t deemedTime; // [xsp+28h] [xbp-68h] BYREF
  System_ValueTuple_object__object__o v94; // 0:x0.16
  System_ValueTuple_object__object__o v95; // 0:x0.16
  System_ValueTuple_object__object__o v96; // 0:x1.16

  if ( (byte_4A0A40B & 1) == 0 )
  {
    sub_1B686D4(&System_Collections_Generic_Dictionary_string__object____TypeInfo, method);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_string__object___ctor__, v3);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__, v4);
    sub_1B686D4(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v5);
    sub_1B686D4(
      &System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__TypeInfo,
      v6);
    sub_1B686D4(
      &System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__TypeInfo,
      v7);
    sub_1B686D4(&int_TypeInfo, v8);
    sub_1B686D4(&long_TypeInfo, v9);
    sub_1B686D4(&JsonManager_TypeInfo, v10);
    sub_1B686D4(&Method_System_Collections_Generic_List_ValueTuple_string__string___Add__, v11);
    sub_1B686D4(&Method_System_Collections_Generic_List_ValueTuple_string__string____ctor__, v12);
    sub_1B686D4(&System_Collections_Generic_List_ValueTuple_string__string___TypeInfo, v13);
    sub_1B686D4(&Method_System_ValueTuple_string__string___ctor__, v14);
    sub_1B686D4(&StringLiteral_21390/*"missionConditionDetailId"*/, v15);
    sub_1B686D4(&StringLiteral_19064/*"eventId"*/, v16);
    sub_1B686D4(&StringLiteral_18462/*"deemedTime"*/, v17);
    sub_1B686D4(&StringLiteral_23772/*"targetId"*/, v18);
    sub_1B686D4(&StringLiteral_21395/*"missionTargetId"*/, v19);
    sub_1B686D4(&StringLiteral_22542/*"progress"*/, v20);
    sub_1B686D4(&StringLiteral_16597/*"addCount"*/, v21);
    byte_4A0A40B = 1;
  }
  v22 = (System_Collections_Generic_List_T__o *)sub_1B68920(System_Collections_Generic_List_ValueTuple_string__string___TypeInfo);
  System_Collections_Generic_List_ValueTuple_object__object_____ctor(
    v22,
    (const MethodInfo_3442A44 *)Method_System_Collections_Generic_List_ValueTuple_string__string____ctor__);
  deemedTime = this->fields.deemedTime;
  v26 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &deemedTime, v23, v24, v25);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v27 = JsonManager__toJson(v26, 0, 0, 0LL);
  v94.fields.Item2 = (Il2CppObject *)StringLiteral_18462/*"deemedTime"*/;
  v28 = (Il2CppObject *)v27;
  v94.fields.Item1 = (Il2CppObject *)&v92;
  v92.fields.Item1 = 0LL;
  v92.fields.Item2 = 0LL;
  System_ValueTuple_object__object____ctor(
    v94,
    v28,
    (Il2CppObject *)Method_System_ValueTuple_string__string___ctor__,
    v29);
  if ( !v22 )
    goto LABEL_39;
  v96 = v92;
  items = v22->fields._items;
  v33 = Method_System_Collections_Generic_List_ValueTuple_string__string___Add__;
  ++v22->fields._version;
  if ( !items )
    goto LABEL_39;
  size = v22->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_ValueTuple_object__object____AddWithResize(
      v22,
      v96,
      *(const MethodInfo_34432C4 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
  }
  else
  {
    v35 = (ServantStatusBattleListViewItem_o *)(&items->obj + size);
    v22->fields._size = size + 1;
    v35->fields.sortValue0 = (int64_t)v96.fields.Item1;
    v35 = (ServantStatusBattleListViewItem_o *)((char *)v35 + 32);
    v35->monitor = v96.fields.Item2;
    sub_1B68678(v35, 0, (int32_t)v96.fields.Item2, v31);
  }
  progressDataList = this->fields.progressDataList;
  if ( !progressDataList )
    goto LABEL_39;
  klass = progressDataList->klass;
  v38 = *(unsigned __int16 *)(&progressDataList->klass->_2.bitflags2 + 3);
  v88 = v22;
  if ( *(_WORD *)(&progressDataList->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__c **)p_offset
            - 1) != System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__TypeInfo )
    {
      --v38;
      p_offset += 4;
      if ( !v38 )
        goto LABEL_15;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_15:
    p_method = sub_1BBA6B4(
                 progressDataList,
                 System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__TypeInfo,
                 0LL);
  }
  v41 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *, _QWORD))p_method)(
          progressDataList,
          *(_QWORD *)(p_method + 8));
  v30 = (Il2CppObject *)sub_1B6877C(System_Collections_Generic_Dictionary_string__object____TypeInfo, v41);
  v42 = this->fields.progressDataList;
  if ( !v42 )
    goto LABEL_39;
  v43 = (unsigned int *)v30;
  v44 = 0LL;
  while ( 1 )
  {
    v45 = v42->klass;
    v46 = *(unsigned __int16 *)(&v42->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v42->klass->_2.bitflags2 + 3) )
    {
      v47 = &v45->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__c **)v47
              - 1) != System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__TypeInfo )
      {
        --v46;
        v47 += 4;
        if ( !v46 )
          goto LABEL_23;
      }
      v48 = (__int64)&v45->vtable[*v47].method;
    }
    else
    {
LABEL_23:
      v48 = sub_1BBA6B4(
              v42,
              System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__TypeInfo,
              0LL);
    }
    v30 = (Il2CppObject *)(*(__int64 (__fastcall **)(struct System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *, _QWORD))v48)(
                            v42,
                            *(_QWORD *)(v48 + 8));
    if ( (__int64)v44 >= (int)v30 )
      break;
    v49 = this->fields.progressDataList;
    if ( v49 )
    {
      v50 = v49->klass;
      v51 = *(unsigned __int16 *)(&v49->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v49->klass->_2.bitflags2 + 3) )
      {
        v52 = &v50->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__c **)v52
                - 1) != System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__TypeInfo )
        {
          --v51;
          v52 += 4;
          if ( !v51 )
            goto LABEL_31;
        }
        v53 = (__int64)&v50->vtable[*v52].method;
      }
      else
      {
LABEL_31:
        v53 = sub_1BBA6B4(
                this->fields.progressDataList,
                System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__TypeInfo,
                0LL);
      }
      v54 = (_DWORD *)(*(__int64 (__fastcall **)(struct System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *, _QWORD, _QWORD))v53)(
                        v49,
                        (unsigned int)v44,
                        *(_QWORD *)(v53 + 8));
      v55 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B68920(System_Collections_Generic_Dictionary_string__object__TypeInfo);
      System_Collections_Generic_Dictionary_object__object____ctor(
        v55,
        (const MethodInfo_31891B8 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
      if ( v54 )
      {
        LODWORD(v92.fields.Item1) = v54[4];
        v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v92, v96.fields.Item2, v56, v57);
        if ( v55 )
        {
          System_Collections_Generic_Dictionary_object__object___set_Item(
            v55,
            (Il2CppObject *)StringLiteral_21395/*"missionTargetId"*/,
            v30,
            (const MethodInfo_3189B54 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
          LODWORD(deemedTime) = v54[5];
          v61 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &deemedTime, v58, v59, v60);
          System_Collections_Generic_Dictionary_object__object___set_Item(
            v55,
            (Il2CppObject *)StringLiteral_21390/*"missionConditionDetailId"*/,
            v61,
            (const MethodInfo_3189B54 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
          v91 = v54[6];
          v65 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v91, v62, v63, v64);
          System_Collections_Generic_Dictionary_object__object___set_Item(
            v55,
            (Il2CppObject *)StringLiteral_23772/*"targetId"*/,
            v65,
            (const MethodInfo_3189B54 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
          v90 = v54[7];
          v69 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v90, v66, v67, v68);
          System_Collections_Generic_Dictionary_object__object___set_Item(
            v55,
            (Il2CppObject *)StringLiteral_19064/*"eventId"*/,
            v69,
            (const MethodInfo_3189B54 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
          v89 = v54[8];
          v73 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v89, v70, v71, v72);
          System_Collections_Generic_Dictionary_object__object___set_Item(
            v55,
            (Il2CppObject *)StringLiteral_16597/*"addCount"*/,
            v73,
            (const MethodInfo_3189B54 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
          if ( v43 )
          {
            v74 = sub_1B68810(v55, *(_QWORD *)(*(_QWORD *)v43 + 64LL));
            if ( !v74 )
            {
              v87 = sub_1B68954(0LL);
              sub_1B687FC(v87, 0LL);
            }
            if ( v44 >= v43[6] )
              sub_1B68938(v74, v75);
            v78 = &v43[2 * v44];
            *((_QWORD *)v78 + 4) = v55;
            sub_1B68678((ServantStatusBattleListViewItem_o *)(v78 + 8), (int32_t)v55, v76, v77);
            v42 = this->fields.progressDataList;
            ++v44;
            if ( v42 )
              continue;
          }
        }
      }
    }
    goto LABEL_39;
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v79 = (Il2CppObject *)JsonManager__toJson((Il2CppObject *)v43, 0, 0, 0LL);
  v95.fields.Item1 = (Il2CppObject *)&v92;
  v95.fields.Item2 = (Il2CppObject *)StringLiteral_22542/*"progress"*/;
  v92 = (System_ValueTuple_object__object__o)0LL;
  System_ValueTuple_object__object____ctor(
    v95,
    v79,
    (Il2CppObject *)Method_System_ValueTuple_string__string___ctor__,
    v80);
  v96 = v92;
  v82 = v88->fields._items;
  v83 = Method_System_Collections_Generic_List_ValueTuple_string__string___Add__;
  ++v88->fields._version;
  if ( !v82 )
LABEL_39:
    sub_1B68930(v30, v96.fields.Item1);
  v84 = v88->fields._size;
  if ( (unsigned int)v84 >= v82->max_length )
  {
    System_Collections_Generic_List_ValueTuple_object__object____AddWithResize(
      v88,
      v96,
      *(const MethodInfo_34432C4 **)(*(_QWORD *)(v83[4] + 192LL) + 112LL));
  }
  else
  {
    v85 = (ServantStatusBattleListViewItem_o *)(&v82->obj + v84);
    v88->fields._size = v84 + 1;
    v85->fields.sortValue0 = (int64_t)v96.fields.Item1;
    v85 = (ServantStatusBattleListViewItem_o *)((char *)v85 + 32);
    v85->monitor = v96.fields.Item2;
    sub_1B68678(v85, 0, (int32_t)v96.fields.Item2, v81);
  }
  return (System_Collections_Generic_List_ValueTuple_string__string___o *)v88;
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