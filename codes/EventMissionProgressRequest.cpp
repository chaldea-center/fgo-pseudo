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
  if ( (byte_49FDB9E & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_string__string___Dispose__, arg);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_string__string___MoveNext__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_string__string___get_Current__, v6);
    this = (EventMissionProgressRequest_o *)sub_1B640C8(
                                              &Method_System_Collections_Generic_List_ValueTuple_string__string___GetEnumerator__,
                                              v7);
    byte_49FDB9E = 1;
  }
  v8 = 0u;
  v9 = 0u;
  if ( !arg
    || (this = (EventMissionProgressRequest_o *)EventMissionProgressRequest_Argument__ConvertToJsonFieldAndStringList(
                                                  arg,
                                                  (const MethodInfo *)arg)) == 0LL )
  {
    sub_1B64324(this);
  }
  System_Collections_Generic_List_ValueTuple_object__object____GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    (System_Collections_Generic_List_T__o *)this,
    (const MethodInfo_3433D08 *)Method_System_Collections_Generic_List_ValueTuple_string__string___GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_ValueTuple_object__object____MoveNext(
            (System_Collections_Generic_List_Enumerator_T__o *)&v8,
            (const MethodInfo_3221090 *)Method_System_Collections_Generic_List_Enumerator_ValueTuple_string__string___MoveNext__) )
    RequestBase__addField_40850936(v4, (System_String_o *)v9, *((System_String_o **)&v9 + 1), 0LL);
  System_Collections_Generic_List_Enumerator_ValueTuple_object__object____Dispose(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    (const MethodInfo_322108C *)Method_System_Collections_Generic_List_Enumerator_ValueTuple_string__string___Dispose__);
  RequestBase__beginRequest(v4, 0LL);
}


System_String_o *__fastcall EventMissionProgressRequest__getURL(
        EventMissionProgressRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_49FDB9D & 1) == 0 )
  {
    sub_1B640C8(&NetworkManager_TypeInfo, method);
    sub_1B640C8(&StringLiteral_19062/*"eventMission/progress"*/, v2);
    byte_49FDB9D = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61375396(BaseUrl, (System_String_o *)StringLiteral_19062/*"eventMission/progress"*/, 0LL);
}


void __fastcall EventMissionProgressRequest_Argument___ctor(
        EventMissionProgressRequest_Argument_o *this,
        int64_t deemedTime,
        System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *progressDataList,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x2
  int32_t v10; // w3

  if ( (byte_49FDB9F & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___ctor__,
      deemedTime);
    sub_1B640C8(&System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__TypeInfo, v7);
    byte_49FDB9F = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.deemedTime = deemedTime;
  if ( !progressDataList )
  {
    progressDataList = (System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *)sub_1B64314(System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__TypeInfo, v8, v9);
    System_Collections_Generic_List_object____ctor(
      (System_Collections_Generic_List_object__o *)progressDataList,
      (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___ctor__);
  }
  this->fields.progressDataList = progressDataList;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.progressDataList, (int32_t)progressDataList, v9, v10);
}


System_Collections_Generic_List_ValueTuple_string__string___o *__fastcall EventMissionProgressRequest_Argument__ConvertToJsonFieldAndStringList(
        EventMissionProgressRequest_Argument_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
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
  __int64 v22; // x1
  System_Collections_Generic_List_T__o *v23; // x23
  Il2CppObject *v24; // x21
  System_String_o *v25; // x0
  Il2CppObject *v26; // x2
  const MethodInfo_37FDA48 *v27; // x4
  Il2CppObject *v28; // x0
  int32_t v29; // w3
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  ServantStatusBattleListViewItem_o *v33; // x0
  struct System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *progressDataList; // x21
  System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__c *klass; // x8
  __int64 v36; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  unsigned int v39; // w0
  struct System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *v40; // x23
  unsigned int *v41; // x21
  unsigned __int64 v42; // x22
  System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__c *v43; // x8
  __int64 v44; // x9
  int32_t *v45; // x10
  __int64 v46; // x0
  struct System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *v47; // x23
  System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__c *v48; // x8
  __int64 v49; // x9
  int32_t *v50; // x10
  __int64 v51; // x0
  _DWORD *v52; // x24
  __int64 v53; // x1
  __int64 v54; // x2
  System_Collections_Generic_Dictionary_object__object__o *v55; // x23
  Il2CppObject *v56; // x0
  Il2CppObject *v57; // x0
  Il2CppObject *v58; // x0
  Il2CppObject *v59; // x0
  __int64 v60; // x0
  __int64 v61; // x1
  int32_t v62; // w2
  int32_t v63; // w3
  unsigned int *v64; // x0
  Il2CppObject *v65; // x2
  const MethodInfo_37FDA48 *v66; // x4
  int32_t v67; // w3
  struct System_Object_array *v68; // x8
  _QWORD *v69; // x9
  __int64 v70; // x10
  ServantStatusBattleListViewItem_o *v71; // x0
  __int64 v73; // x0
  System_Collections_Generic_List_T__o *v74; // [xsp+0h] [xbp-90h]
  int v75; // [xsp+Ch] [xbp-84h] BYREF
  int v76; // [xsp+10h] [xbp-80h] BYREF
  int v77; // [xsp+14h] [xbp-7Ch] BYREF
  System_ValueTuple_object__object__o v78; // [xsp+18h] [xbp-78h] BYREF
  int64_t deemedTime; // [xsp+28h] [xbp-68h] BYREF
  System_ValueTuple_object__object__o v80; // 0:x0.16
  System_ValueTuple_object__object__o v81; // 0:x0.16
  System_ValueTuple_object__object__o v82; // 0:x1.16
  System_ValueTuple_object__object__o v83; // 0:x1.16

  if ( (byte_49FDBA0 & 1) == 0 )
  {
    sub_1B640C8(&System_Collections_Generic_Dictionary_string__object____TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object___ctor__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__, v5);
    sub_1B640C8(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v6);
    sub_1B640C8(
      &System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__TypeInfo,
      v7);
    sub_1B640C8(
      &System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__TypeInfo,
      v8);
    sub_1B640C8(&int_TypeInfo, v9);
    sub_1B640C8(&long_TypeInfo, v10);
    sub_1B640C8(&JsonManager_TypeInfo, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_ValueTuple_string__string___Add__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_ValueTuple_string__string____ctor__, v13);
    sub_1B640C8(&System_Collections_Generic_List_ValueTuple_string__string___TypeInfo, v14);
    sub_1B640C8(&Method_System_ValueTuple_string__string___ctor__, v15);
    sub_1B640C8(&StringLiteral_21379/*"missionConditionDetailId"*/, v16);
    sub_1B640C8(&StringLiteral_19059/*"eventId"*/, v17);
    sub_1B640C8(&StringLiteral_18457/*"deemedTime"*/, v18);
    sub_1B640C8(&StringLiteral_23756/*"targetId"*/, v19);
    sub_1B640C8(&StringLiteral_21384/*"missionTargetId"*/, v20);
    sub_1B640C8(&StringLiteral_22527/*"progress"*/, v21);
    sub_1B640C8(&StringLiteral_16594/*"addCount"*/, v22);
    byte_49FDBA0 = 1;
  }
  v23 = (System_Collections_Generic_List_T__o *)sub_1B64314(
                                                  System_Collections_Generic_List_ValueTuple_string__string___TypeInfo,
                                                  method,
                                                  v2);
  System_Collections_Generic_List_ValueTuple_object__object_____ctor(
    v23,
    (const MethodInfo_343288C *)Method_System_Collections_Generic_List_ValueTuple_string__string____ctor__);
  deemedTime = this->fields.deemedTime;
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &deemedTime);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v25 = JsonManager__toJson(v24, 0, 0, 0LL);
  v80.fields.Item2 = (Il2CppObject *)StringLiteral_18457/*"deemedTime"*/;
  v26 = (Il2CppObject *)v25;
  v80.fields.Item1 = (Il2CppObject *)&v78;
  v78.fields.Item1 = 0LL;
  v78.fields.Item2 = 0LL;
  System_ValueTuple_object__object____ctor(
    v80,
    v26,
    (Il2CppObject *)Method_System_ValueTuple_string__string___ctor__,
    v27);
  if ( !v23 )
    goto LABEL_39;
  v82 = v78;
  items = v23->fields._items;
  v31 = Method_System_Collections_Generic_List_ValueTuple_string__string___Add__;
  ++v23->fields._version;
  if ( !items )
    goto LABEL_39;
  size = v23->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_ValueTuple_object__object____AddWithResize(
      v23,
      v82,
      *(const MethodInfo_343310C **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
  }
  else
  {
    v33 = (ServantStatusBattleListViewItem_o *)(&items->obj + size);
    v23->fields._size = size + 1;
    v33->fields.sortValue0 = (int64_t)v82.fields.Item1;
    v33 = (ServantStatusBattleListViewItem_o *)((char *)v33 + 32);
    v33->monitor = v82.fields.Item2;
    sub_1B6406C(v33, 0, (int32_t)v82.fields.Item2, v29);
  }
  progressDataList = this->fields.progressDataList;
  if ( !progressDataList )
    goto LABEL_39;
  klass = progressDataList->klass;
  v36 = *(unsigned __int16 *)(&progressDataList->klass->_2.bitflags2 + 3);
  v74 = v23;
  if ( *(_WORD *)(&progressDataList->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__c **)p_offset
            - 1) != System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__TypeInfo )
    {
      --v36;
      p_offset += 4;
      if ( !v36 )
        goto LABEL_15;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_15:
    p_method = sub_1BB60A8(
                 progressDataList,
                 System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__TypeInfo,
                 0LL);
  }
  v39 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *, _QWORD))p_method)(
          progressDataList,
          *(_QWORD *)(p_method + 8));
  v28 = (Il2CppObject *)sub_1B64170(System_Collections_Generic_Dictionary_string__object____TypeInfo, v39);
  v40 = this->fields.progressDataList;
  if ( !v40 )
    goto LABEL_39;
  v41 = (unsigned int *)v28;
  v42 = 0LL;
  while ( 1 )
  {
    v43 = v40->klass;
    v44 = *(unsigned __int16 *)(&v40->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v40->klass->_2.bitflags2 + 3) )
    {
      v45 = &v43->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__c **)v45
              - 1) != System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__TypeInfo )
      {
        --v44;
        v45 += 4;
        if ( !v44 )
          goto LABEL_23;
      }
      v46 = (__int64)&v43->vtable[*v45].method;
    }
    else
    {
LABEL_23:
      v46 = sub_1BB60A8(
              v40,
              System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__TypeInfo,
              0LL);
    }
    v28 = (Il2CppObject *)(*(__int64 (__fastcall **)(struct System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *, _QWORD))v46)(
                            v40,
                            *(_QWORD *)(v46 + 8));
    if ( (__int64)v42 >= (int)v28 )
      break;
    v47 = this->fields.progressDataList;
    if ( v47 )
    {
      v48 = v47->klass;
      v49 = *(unsigned __int16 *)(&v47->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v47->klass->_2.bitflags2 + 3) )
      {
        v50 = &v48->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__c **)v50
                - 1) != System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__TypeInfo )
        {
          --v49;
          v50 += 4;
          if ( !v49 )
            goto LABEL_31;
        }
        v51 = (__int64)&v48->vtable[*v50].method;
      }
      else
      {
LABEL_31:
        v51 = sub_1BB60A8(
                this->fields.progressDataList,
                System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__TypeInfo,
                0LL);
      }
      v52 = (_DWORD *)(*(__int64 (__fastcall **)(struct System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *, _QWORD, _QWORD))v51)(
                        v47,
                        (unsigned int)v42,
                        *(_QWORD *)(v51 + 8));
      v55 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B64314(
                                                                         System_Collections_Generic_Dictionary_string__object__TypeInfo,
                                                                         v53,
                                                                         v54);
      System_Collections_Generic_Dictionary_object__object____ctor(
        v55,
        (const MethodInfo_3178A48 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
      if ( v52 )
      {
        LODWORD(v78.fields.Item1) = v52[4];
        v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v78);
        if ( v55 )
        {
          System_Collections_Generic_Dictionary_object__object___set_Item(
            v55,
            (Il2CppObject *)StringLiteral_21384/*"missionTargetId"*/,
            v28,
            (const MethodInfo_31793E4 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
          LODWORD(deemedTime) = v52[5];
          v56 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &deemedTime);
          System_Collections_Generic_Dictionary_object__object___set_Item(
            v55,
            (Il2CppObject *)StringLiteral_21379/*"missionConditionDetailId"*/,
            v56,
            (const MethodInfo_31793E4 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
          v77 = v52[6];
          v57 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v77);
          System_Collections_Generic_Dictionary_object__object___set_Item(
            v55,
            (Il2CppObject *)StringLiteral_23756/*"targetId"*/,
            v57,
            (const MethodInfo_31793E4 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
          v76 = v52[7];
          v58 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v76);
          System_Collections_Generic_Dictionary_object__object___set_Item(
            v55,
            (Il2CppObject *)StringLiteral_19059/*"eventId"*/,
            v58,
            (const MethodInfo_31793E4 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
          v75 = v52[8];
          v59 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v75);
          System_Collections_Generic_Dictionary_object__object___set_Item(
            v55,
            (Il2CppObject *)StringLiteral_16594/*"addCount"*/,
            v59,
            (const MethodInfo_31793E4 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
          if ( v41 )
          {
            v60 = sub_1B64204(v55, *(_QWORD *)(*(_QWORD *)v41 + 64LL));
            if ( !v60 )
            {
              v73 = sub_1B64348(0LL);
              sub_1B641F0(v73, 0LL);
            }
            if ( v42 >= v41[6] )
              sub_1B6432C(v60, v61);
            v64 = &v41[2 * v42];
            *((_QWORD *)v64 + 4) = v55;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v64 + 8), (int32_t)v55, v62, v63);
            v40 = this->fields.progressDataList;
            ++v42;
            if ( v40 )
              continue;
          }
        }
      }
    }
    goto LABEL_39;
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v65 = (Il2CppObject *)JsonManager__toJson((Il2CppObject *)v41, 0, 0, 0LL);
  v81.fields.Item1 = (Il2CppObject *)&v78;
  v81.fields.Item2 = (Il2CppObject *)StringLiteral_22527/*"progress"*/;
  v78 = (System_ValueTuple_object__object__o)0LL;
  System_ValueTuple_object__object____ctor(
    v81,
    v65,
    (Il2CppObject *)Method_System_ValueTuple_string__string___ctor__,
    v66);
  v83 = v78;
  v68 = v74->fields._items;
  v69 = Method_System_Collections_Generic_List_ValueTuple_string__string___Add__;
  ++v74->fields._version;
  if ( !v68 )
LABEL_39:
    sub_1B64324(v28);
  v70 = v74->fields._size;
  if ( (unsigned int)v70 >= v68->max_length )
  {
    System_Collections_Generic_List_ValueTuple_object__object____AddWithResize(
      v74,
      v83,
      *(const MethodInfo_343310C **)(*(_QWORD *)(v69[4] + 192LL) + 112LL));
  }
  else
  {
    v71 = (ServantStatusBattleListViewItem_o *)(&v68->obj + v70);
    v74->fields._size = v70 + 1;
    v71->fields.sortValue0 = (int64_t)v83.fields.Item1;
    v71 = (ServantStatusBattleListViewItem_o *)((char *)v71 + 32);
    v71->monitor = v83.fields.Item2;
    sub_1B6406C(v71, 0, (int32_t)v83.fields.Item2, v67);
  }
  return (System_Collections_Generic_List_ValueTuple_string__string___o *)v74;
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