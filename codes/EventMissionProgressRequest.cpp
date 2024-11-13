void __fastcall EventMissionProgressRequest__beginRequest(
        EventMissionProgressRequest_o *this,
        EventMissionProgressRequest_Argument_o *arg,
        const MethodInfo *method)
{
  RequestBase_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x1
  __int128 v13; // [xsp+0h] [xbp-40h] BYREF
  __int128 v14; // [xsp+10h] [xbp-30h]

  v4 = (RequestBase_o *)this;
  if ( (byte_4B17AAC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_string__string___Dispose__, arg, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_string__string___MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_string__string___get_Current__, v7, v8);
    this = (EventMissionProgressRequest_o *)sub_1BCA7E0(
                                              &Method_System_Collections_Generic_List_ValueTuple_string__string___GetEnumerator__,
                                              v9,
                                              v10);
    byte_4B17AAC = 1;
  }
  v13 = 0u;
  v14 = 0u;
  if ( !arg
    || (this = (EventMissionProgressRequest_o *)EventMissionProgressRequest_Argument__ConvertToJsonFieldAndStringList(
                                                  arg,
                                                  (const MethodInfo *)arg)) == 0LL )
  {
    sub_1BCAA3C(this, arg);
  }
  System_Collections_Generic_List_ValueTuple_object__object____GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    (System_Collections_Generic_List_T__o *)this,
    (const MethodInfo_3551C50 *)Method_System_Collections_Generic_List_ValueTuple_string__string___GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_ValueTuple_object__object____MoveNext(
            (System_Collections_Generic_List_Enumerator_T__o *)&v13,
            (const MethodInfo_330DCFC *)Method_System_Collections_Generic_List_Enumerator_ValueTuple_string__string___MoveNext__) )
    RequestBase__addField_41862348(v4, (System_String_o *)v14, *((System_String_o **)&v14 + 1), v11);
  System_Collections_Generic_List_Enumerator_ValueTuple_object__object____Dispose(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    (const MethodInfo_330DCF8 *)Method_System_Collections_Generic_List_Enumerator_ValueTuple_string__string___Dispose__);
  RequestBase__beginRequest(v4, v12);
}


System_String_o *__fastcall EventMissionProgressRequest__getURL(
        EventMissionProgressRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  System_String_o *BaseUrl; // x0

  if ( (byte_4B17AAB & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_19332/*"eventMission/progress"*/, v3, v4);
    byte_4B17AAB = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62401220(BaseUrl, (System_String_o *)StringLiteral_19332/*"eventMission/progress"*/, 0LL);
}


void __fastcall EventMissionProgressRequest_Argument___ctor(
        EventMissionProgressRequest_Argument_o *this,
        int64_t deemedTime,
        System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *progressDataList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v4; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  int64_t v10; // x2
  __int64 v11; // x3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  v4 = (System_Collections_Generic_List_object__o *)progressDataList;
  if ( (byte_4B17AAD & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___ctor__,
      deemedTime,
      progressDataList);
    sub_1BCA7E0(&System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__TypeInfo, v7, v8);
    byte_4B17AAD = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.deemedTime = deemedTime;
  if ( !v4 )
  {
    v4 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__TypeInfo,
                                                        v9,
                                                        v10,
                                                        v11);
    System_Collections_Generic_List_object____ctor(
      v4,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___ctor__);
  }
  this->fields.progressDataList = (struct System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *)v4;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.progressDataList, (int64_t)v4, v10, v11, v12, v13, v14, v15);
}


System_Collections_Generic_List_ValueTuple_string__string___o *__fastcall EventMissionProgressRequest_Argument__ConvertToJsonFieldAndStringList(
        EventMissionProgressRequest_Argument_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  System_Collections_Generic_List_T__o *v43; // x23
  __int64 v44; // x1
  Il2CppObject *v45; // x21
  System_String_o *v46; // x0
  Il2CppObject *v47; // x2
  const MethodInfo_38F6AA0 *v48; // x4
  Il2CppObject *v49; // x0
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  struct System_Object_array *items; // x8
  _QWORD *v56; // x9
  __int64 size; // x10
  PartyOrganizationUtility_o *v58; // x0
  struct System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *progressDataList; // x21
  System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__c *klass; // x8
  __int64 v61; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  unsigned int v64; // w0
  struct System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *v65; // x23
  unsigned int *v66; // x21
  unsigned __int64 v67; // x22
  System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__c *v68; // x8
  __int64 v69; // x9
  int32_t *v70; // x10
  __int64 v71; // x0
  struct System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *v72; // x23
  System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__c *v73; // x8
  __int64 v74; // x9
  int32_t *v75; // x10
  __int64 v76; // x0
  _DWORD *v77; // x24
  __int64 v78; // x1
  __int64 v79; // x2
  __int64 v80; // x3
  System_Collections_Generic_Dictionary_object__object__o *v81; // x23
  Il2CppObject *v82; // x0
  Il2CppObject *v83; // x0
  Il2CppObject *v84; // x0
  Il2CppObject *v85; // x0
  __int64 v86; // x0
  __int64 v87; // x1
  int64_t v88; // x2
  int32_t v89; // w3
  System_String_o *v90; // x4
  BattleSetupInfo_o *v91; // x5
  FollowerInfo_o *v92; // x6
  PartyListViewItem_o *v93; // x7
  unsigned int *v94; // x0
  Il2CppObject *v95; // x2
  const MethodInfo_38F6AA0 *v96; // x4
  int32_t v97; // w3
  System_String_o *v98; // x4
  BattleSetupInfo_o *v99; // x5
  FollowerInfo_o *v100; // x6
  PartyListViewItem_o *v101; // x7
  struct System_Object_array *v102; // x8
  _QWORD *v103; // x9
  __int64 v104; // x10
  PartyOrganizationUtility_o *v105; // x0
  __int64 v107; // x0
  System_Collections_Generic_List_T__o *v108; // [xsp+0h] [xbp-90h]
  int v109; // [xsp+Ch] [xbp-84h] BYREF
  int v110; // [xsp+10h] [xbp-80h] BYREF
  int v111; // [xsp+14h] [xbp-7Ch] BYREF
  System_ValueTuple_object__object__o v112; // [xsp+18h] [xbp-78h] BYREF
  int64_t deemedTime; // [xsp+28h] [xbp-68h] BYREF
  System_ValueTuple_object__object__o v114; // 0:x0.16
  System_ValueTuple_object__object__o v115; // 0:x0.16
  System_ValueTuple_object__object__o v116; // 0:x1.16

  if ( (byte_4B17AAE & 1) == 0 )
  {
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_string__object____TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object___ctor__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v9, v10);
    sub_1BCA7E0(
      &System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__TypeInfo,
      v11,
      v12);
    sub_1BCA7E0(
      &System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__TypeInfo,
      v13,
      v14);
    sub_1BCA7E0(&int_TypeInfo, v15, v16);
    sub_1BCA7E0(&long_TypeInfo, v17, v18);
    sub_1BCA7E0(&JsonManager_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ValueTuple_string__string___Add__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ValueTuple_string__string____ctor__, v23, v24);
    sub_1BCA7E0(&System_Collections_Generic_List_ValueTuple_string__string___TypeInfo, v25, v26);
    sub_1BCA7E0(&Method_System_ValueTuple_string__string___ctor__, v27, v28);
    sub_1BCA7E0(&StringLiteral_21693/*"missionConditionDetailId"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_19329/*"eventId"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_18717/*"deemedTime"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_24101/*"targetId"*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_21698/*"missionTargetId"*/, v37, v38);
    sub_1BCA7E0(&StringLiteral_22863/*"progress"*/, v39, v40);
    sub_1BCA7E0(&StringLiteral_16832/*"addCount"*/, v41, v42);
    byte_4B17AAE = 1;
  }
  v43 = (System_Collections_Generic_List_T__o *)sub_1BCAA2C(
                                                  System_Collections_Generic_List_ValueTuple_string__string___TypeInfo,
                                                  method,
                                                  v2,
                                                  v3);
  System_Collections_Generic_List_ValueTuple_object__object_____ctor(
    v43,
    (const MethodInfo_3550878 *)Method_System_Collections_Generic_List_ValueTuple_string__string____ctor__);
  deemedTime = this->fields.deemedTime;
  v45 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &deemedTime);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v44);
  v46 = JsonManager__toJson(v45, 0, 0, 0LL);
  v114.fields.Item2 = (Il2CppObject *)StringLiteral_18717/*"deemedTime"*/;
  v47 = (Il2CppObject *)v46;
  v114.fields.Item1 = (Il2CppObject *)&v112;
  v112.fields.Item1 = 0LL;
  v112.fields.Item2 = 0LL;
  System_ValueTuple_object__object____ctor(
    v114,
    v47,
    (Il2CppObject *)Method_System_ValueTuple_string__string___ctor__,
    v48);
  if ( !v43 )
    goto LABEL_39;
  v116 = v112;
  items = v43->fields._items;
  v56 = Method_System_Collections_Generic_List_ValueTuple_string__string___Add__;
  ++v43->fields._version;
  if ( !items )
    goto LABEL_39;
  size = v43->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_ValueTuple_object__object____AddWithResize(
      v43,
      v116,
      *(const MethodInfo_35510F8 **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
  }
  else
  {
    v58 = (PartyOrganizationUtility_o *)(&items->obj + size);
    v43->fields._size = size + 1;
    *(_QWORD *)&v58->fields._SelectedNormalFollowerClassId_k__BackingField = v116.fields.Item1;
    v58 = (PartyOrganizationUtility_o *)((char *)v58 + 32);
    v58->monitor = v116.fields.Item2;
    sub_1BCA784(v58, 0LL, (int64_t)v116.fields.Item2, v50, v51, v52, v53, v54);
  }
  progressDataList = this->fields.progressDataList;
  if ( !progressDataList )
    goto LABEL_39;
  klass = progressDataList->klass;
  v61 = *(unsigned __int16 *)(&progressDataList->klass->_2.bitflags2 + 3);
  v108 = v43;
  if ( *(_WORD *)(&progressDataList->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__c **)p_offset
            - 1) != System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__TypeInfo )
    {
      --v61;
      p_offset += 4;
      if ( !v61 )
        goto LABEL_15;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_15:
    p_method = sub_1C1C7C0(
                 progressDataList,
                 System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__TypeInfo,
                 0LL);
  }
  v64 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *, _QWORD))p_method)(
          progressDataList,
          *(_QWORD *)(p_method + 8));
  v49 = (Il2CppObject *)sub_1BCA888(System_Collections_Generic_Dictionary_string__object____TypeInfo, v64);
  v65 = this->fields.progressDataList;
  if ( !v65 )
    goto LABEL_39;
  v66 = (unsigned int *)v49;
  v67 = 0LL;
  while ( 1 )
  {
    v68 = v65->klass;
    v69 = *(unsigned __int16 *)(&v65->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v65->klass->_2.bitflags2 + 3) )
    {
      v70 = &v68->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__c **)v70
              - 1) != System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__TypeInfo )
      {
        --v69;
        v70 += 4;
        if ( !v69 )
          goto LABEL_23;
      }
      v71 = (__int64)&v68->vtable[*v70].method;
    }
    else
    {
LABEL_23:
      v71 = sub_1C1C7C0(
              v65,
              System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__TypeInfo,
              0LL);
    }
    v49 = (Il2CppObject *)(*(__int64 (__fastcall **)(struct System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *, _QWORD))v71)(
                            v65,
                            *(_QWORD *)(v71 + 8));
    if ( (__int64)v67 >= (int)v49 )
      break;
    v72 = this->fields.progressDataList;
    if ( v72 )
    {
      v73 = v72->klass;
      v74 = *(unsigned __int16 *)(&v72->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v72->klass->_2.bitflags2 + 3) )
      {
        v75 = &v73->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__c **)v75
                - 1) != System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__TypeInfo )
        {
          --v74;
          v75 += 4;
          if ( !v74 )
            goto LABEL_31;
        }
        v76 = (__int64)&v73->vtable[*v75].method;
      }
      else
      {
LABEL_31:
        v76 = sub_1C1C7C0(
                this->fields.progressDataList,
                System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__TypeInfo,
                0LL);
      }
      v77 = (_DWORD *)(*(__int64 (__fastcall **)(struct System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *, _QWORD, _QWORD))v76)(
                        v72,
                        (unsigned int)v67,
                        *(_QWORD *)(v76 + 8));
      v81 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BCAA2C(
                                                                         System_Collections_Generic_Dictionary_string__object__TypeInfo,
                                                                         v78,
                                                                         v79,
                                                                         v80);
      System_Collections_Generic_Dictionary_object__object____ctor(
        v81,
        (const MethodInfo_32648B0 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
      if ( v77 )
      {
        LODWORD(v112.fields.Item1) = v77[4];
        v49 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v112);
        if ( v81 )
        {
          System_Collections_Generic_Dictionary_object__object___set_Item(
            v81,
            (Il2CppObject *)StringLiteral_21698/*"missionTargetId"*/,
            v49,
            (const MethodInfo_326524C *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
          LODWORD(deemedTime) = v77[5];
          v82 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &deemedTime);
          System_Collections_Generic_Dictionary_object__object___set_Item(
            v81,
            (Il2CppObject *)StringLiteral_21693/*"missionConditionDetailId"*/,
            v82,
            (const MethodInfo_326524C *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
          v111 = v77[6];
          v83 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v111);
          System_Collections_Generic_Dictionary_object__object___set_Item(
            v81,
            (Il2CppObject *)StringLiteral_24101/*"targetId"*/,
            v83,
            (const MethodInfo_326524C *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
          v110 = v77[7];
          v84 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v110);
          System_Collections_Generic_Dictionary_object__object___set_Item(
            v81,
            (Il2CppObject *)StringLiteral_19329/*"eventId"*/,
            v84,
            (const MethodInfo_326524C *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
          v109 = v77[8];
          v85 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v109);
          System_Collections_Generic_Dictionary_object__object___set_Item(
            v81,
            (Il2CppObject *)StringLiteral_16832/*"addCount"*/,
            v85,
            (const MethodInfo_326524C *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
          if ( v66 )
          {
            v86 = sub_1BCA91C(v81, *(_QWORD *)(*(_QWORD *)v66 + 64LL));
            if ( !v86 )
            {
              v107 = sub_1BCAA60(0LL);
              sub_1BCA908(v107, 0LL);
            }
            if ( v67 >= v66[6] )
              sub_1BCAA44(v86, v87);
            v94 = &v66[2 * v67];
            *((_QWORD *)v94 + 4) = v81;
            sub_1BCA784((PartyOrganizationUtility_o *)(v94 + 8), (int64_t)v81, v88, v89, v90, v91, v92, v93);
            v65 = this->fields.progressDataList;
            ++v67;
            if ( v65 )
              continue;
          }
        }
      }
    }
    goto LABEL_39;
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v116.fields.Item1);
  v95 = (Il2CppObject *)JsonManager__toJson((Il2CppObject *)v66, 0, 0, 0LL);
  v115.fields.Item1 = (Il2CppObject *)&v112;
  v115.fields.Item2 = (Il2CppObject *)StringLiteral_22863/*"progress"*/;
  v112 = (System_ValueTuple_object__object__o)0LL;
  System_ValueTuple_object__object____ctor(
    v115,
    v95,
    (Il2CppObject *)Method_System_ValueTuple_string__string___ctor__,
    v96);
  v116 = v112;
  v102 = v108->fields._items;
  v103 = Method_System_Collections_Generic_List_ValueTuple_string__string___Add__;
  ++v108->fields._version;
  if ( !v102 )
LABEL_39:
    sub_1BCAA3C(v49, v116.fields.Item1);
  v104 = v108->fields._size;
  if ( (unsigned int)v104 >= v102->max_length )
  {
    System_Collections_Generic_List_ValueTuple_object__object____AddWithResize(
      v108,
      v116,
      *(const MethodInfo_35510F8 **)(*(_QWORD *)(v103[4] + 192LL) + 112LL));
  }
  else
  {
    v105 = (PartyOrganizationUtility_o *)(&v102->obj + v104);
    v108->fields._size = v104 + 1;
    *(_QWORD *)&v105->fields._SelectedNormalFollowerClassId_k__BackingField = v116.fields.Item1;
    v105 = (PartyOrganizationUtility_o *)((char *)v105 + 32);
    v105->monitor = v116.fields.Item2;
    sub_1BCA784(v105, 0LL, (int64_t)v116.fields.Item2, v97, v98, v99, v100, v101);
  }
  return (System_Collections_Generic_List_ValueTuple_string__string___o *)v108;
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