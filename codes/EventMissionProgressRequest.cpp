void __fastcall EventMissionProgressRequest__beginRequest(
        EventMissionProgressRequest_o *this,
        EventMissionProgressRequest_Argument_o *arg,
        const MethodInfo *method)
{
  RequestBase_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x1
  __int128 v10; // [xsp+0h] [xbp-40h] BYREF
  __int128 v11; // [xsp+10h] [xbp-30h]

  v4 = (RequestBase_o *)this;
  if ( (byte_4B38A7B & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_string__string___Dispose__, arg);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_string__string___MoveNext__, v5);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_string__string___get_Current__, v6);
    this = (EventMissionProgressRequest_o *)sub_1BD3458(
                                              &Method_System_Collections_Generic_List_ValueTuple_string__string___GetEnumerator__,
                                              v7);
    byte_4B38A7B = 1;
  }
  v10 = 0u;
  v11 = 0u;
  if ( !arg
    || (this = (EventMissionProgressRequest_o *)EventMissionProgressRequest_Argument__ConvertToJsonFieldAndStringList(
                                                  arg,
                                                  (const MethodInfo *)arg)) == 0LL )
  {
    sub_1BD36B4(this, arg);
  }
  System_Collections_Generic_List_ValueTuple_object__object____GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v10,
    (System_Collections_Generic_List_T__o *)this,
    (const MethodInfo_3570D84 *)Method_System_Collections_Generic_List_ValueTuple_string__string___GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_ValueTuple_object__object____MoveNext(
            (System_Collections_Generic_List_Enumerator_T__o *)&v10,
            (const MethodInfo_332CE30 *)Method_System_Collections_Generic_List_Enumerator_ValueTuple_string__string___MoveNext__) )
    RequestBase__addField_41965080(v4, (System_String_o *)v11, *((System_String_o **)&v11 + 1), v8);
  System_Collections_Generic_List_Enumerator_ValueTuple_object__object____Dispose(
    (System_Collections_Generic_List_Enumerator_T__o *)&v10,
    (const MethodInfo_332CE2C *)Method_System_Collections_Generic_List_Enumerator_ValueTuple_string__string___Dispose__);
  RequestBase__beginRequest(v4, v9);
}


System_String_o *__fastcall EventMissionProgressRequest__getURL(
        EventMissionProgressRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4B38A7A & 1) == 0 )
  {
    sub_1BD3458(&NetworkManager_TypeInfo, method);
    sub_1BD3458(&StringLiteral_19361/*"eventMission/progress"*/, v2);
    byte_4B38A7A = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62525248(BaseUrl, (System_String_o *)StringLiteral_19361/*"eventMission/progress"*/, 0LL);
}


void __fastcall EventMissionProgressRequest_Argument___ctor(
        EventMissionProgressRequest_Argument_o *this,
        int64_t deemedTime,
        System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *progressDataList,
        const MethodInfo *method)
{
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B38A7C & 1) == 0 )
  {
    sub_1BD3458(
      &Method_System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___ctor__,
      deemedTime);
    sub_1BD3458(&System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__TypeInfo, v7);
    byte_4B38A7C = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.deemedTime = deemedTime;
  if ( !progressDataList )
  {
    progressDataList = (System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *)sub_1BD36A4(System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      (System_Collections_Generic_List_object__o *)progressDataList,
      (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___ctor__);
  }
  this->fields.progressDataList = progressDataList;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields.progressDataList,
    (int64_t)progressDataList,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
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
  const MethodInfo_3914F1C *v29; // x4
  Il2CppObject *v30; // x0
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  PartyOrganizationUtility_o *v39; // x0
  struct System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *progressDataList; // x21
  System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__c *klass; // x8
  __int64 v42; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  unsigned int v45; // w0
  struct System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *v46; // x23
  unsigned int *v47; // x21
  unsigned __int64 v48; // x22
  System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__c *v49; // x8
  __int64 v50; // x9
  int32_t *v51; // x10
  __int64 v52; // x0
  struct System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *v53; // x23
  System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__c *v54; // x8
  __int64 v55; // x9
  int32_t *v56; // x10
  __int64 v57; // x0
  _DWORD *v58; // x24
  System_Collections_Generic_Dictionary_object__object__o *v59; // x23
  __int64 v60; // x3
  __int64 v61; // x4
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
  __int64 v74; // x2
  __int64 v75; // x3
  __int64 v76; // x4
  Il2CppObject *v77; // x0
  __int64 v78; // x0
  __int64 v79; // x1
  int64_t v80; // x2
  int32_t v81; // w3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7
  unsigned int *v86; // x0
  Il2CppObject *v87; // x2
  const MethodInfo_3914F1C *v88; // x4
  int32_t v89; // w3
  System_String_o *v90; // x4
  BattleSetupInfo_o *v91; // x5
  FollowerInfo_o *v92; // x6
  PartyListViewItem_o *v93; // x7
  struct System_Object_array *v94; // x8
  _QWORD *v95; // x9
  __int64 v96; // x10
  PartyOrganizationUtility_o *v97; // x0
  __int64 v99; // x0
  System_Collections_Generic_List_T__o *v100; // [xsp+0h] [xbp-90h]
  int v101; // [xsp+Ch] [xbp-84h] BYREF
  int v102; // [xsp+10h] [xbp-80h] BYREF
  int v103; // [xsp+14h] [xbp-7Ch] BYREF
  System_ValueTuple_object__object__o v104; // [xsp+18h] [xbp-78h] BYREF
  int64_t deemedTime; // [xsp+28h] [xbp-68h] BYREF
  System_ValueTuple_object__object__o v106; // 0:x0.16
  System_ValueTuple_object__object__o v107; // 0:x0.16
  System_ValueTuple_object__object__o v108; // 0:x1.16

  if ( (byte_4B38A7D & 1) == 0 )
  {
    sub_1BD3458(&System_Collections_Generic_Dictionary_string__object____TypeInfo, method);
    sub_1BD3458(&Method_System_Collections_Generic_Dictionary_string__object___ctor__, v3);
    sub_1BD3458(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__, v4);
    sub_1BD3458(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v5);
    sub_1BD3458(
      &System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__TypeInfo,
      v6);
    sub_1BD3458(
      &System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__TypeInfo,
      v7);
    sub_1BD3458(&int_TypeInfo, v8);
    sub_1BD3458(&long_TypeInfo, v9);
    sub_1BD3458(&JsonManager_TypeInfo, v10);
    sub_1BD3458(&Method_System_Collections_Generic_List_ValueTuple_string__string___Add__, v11);
    sub_1BD3458(&Method_System_Collections_Generic_List_ValueTuple_string__string____ctor__, v12);
    sub_1BD3458(&System_Collections_Generic_List_ValueTuple_string__string___TypeInfo, v13);
    sub_1BD3458(&Method_System_ValueTuple_string__string___ctor__, v14);
    sub_1BD3458(&StringLiteral_21725/*"missionConditionDetailId"*/, v15);
    sub_1BD3458(&StringLiteral_19358/*"eventId"*/, v16);
    sub_1BD3458(&StringLiteral_18745/*"deemedTime"*/, v17);
    sub_1BD3458(&StringLiteral_24136/*"targetId"*/, v18);
    sub_1BD3458(&StringLiteral_21730/*"missionTargetId"*/, v19);
    sub_1BD3458(&StringLiteral_22896/*"progress"*/, v20);
    sub_1BD3458(&StringLiteral_16853/*"addCount"*/, v21);
    byte_4B38A7D = 1;
  }
  v22 = (System_Collections_Generic_List_T__o *)sub_1BD36A4(System_Collections_Generic_List_ValueTuple_string__string___TypeInfo);
  System_Collections_Generic_List_ValueTuple_object__object_____ctor(
    v22,
    (const MethodInfo_356F9AC *)Method_System_Collections_Generic_List_ValueTuple_string__string____ctor__);
  deemedTime = this->fields.deemedTime;
  v26 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &deemedTime, v23, v24, v25);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v27 = JsonManager__toJson(v26, 0, 0, 0LL);
  v106.fields.Item2 = (Il2CppObject *)StringLiteral_18745/*"deemedTime"*/;
  v28 = (Il2CppObject *)v27;
  v106.fields.Item1 = (Il2CppObject *)&v104;
  v104.fields.Item1 = 0LL;
  v104.fields.Item2 = 0LL;
  System_ValueTuple_object__object____ctor(
    v106,
    v28,
    (Il2CppObject *)Method_System_ValueTuple_string__string___ctor__,
    v29);
  if ( !v22 )
    goto LABEL_39;
  v108 = v104;
  items = v22->fields._items;
  v37 = Method_System_Collections_Generic_List_ValueTuple_string__string___Add__;
  ++v22->fields._version;
  if ( !items )
    goto LABEL_39;
  size = v22->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_ValueTuple_object__object____AddWithResize(
      v22,
      v108,
      *(const MethodInfo_357022C **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
  }
  else
  {
    v39 = (PartyOrganizationUtility_o *)(&items->obj + size);
    v22->fields._size = size + 1;
    *(_QWORD *)&v39->fields._SelectedNormalFollowerClassId_k__BackingField = v108.fields.Item1;
    v39 = (PartyOrganizationUtility_o *)((char *)v39 + 32);
    v39->monitor = v108.fields.Item2;
    sub_1BD33FC(v39, 0LL, (int64_t)v108.fields.Item2, v31, v32, v33, v34, v35);
  }
  progressDataList = this->fields.progressDataList;
  if ( !progressDataList )
    goto LABEL_39;
  klass = progressDataList->klass;
  v42 = *(unsigned __int16 *)(&progressDataList->klass->_2.bitflags2 + 3);
  v100 = v22;
  if ( *(_WORD *)(&progressDataList->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__c **)p_offset
            - 1) != System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__TypeInfo )
    {
      --v42;
      p_offset += 4;
      if ( !v42 )
        goto LABEL_15;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_15:
    p_method = sub_1C25438(
                 progressDataList,
                 System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__TypeInfo,
                 0LL);
  }
  v45 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *, _QWORD))p_method)(
          progressDataList,
          *(_QWORD *)(p_method + 8));
  v30 = (Il2CppObject *)sub_1BD3500(System_Collections_Generic_Dictionary_string__object____TypeInfo, v45);
  v46 = this->fields.progressDataList;
  if ( !v46 )
    goto LABEL_39;
  v47 = (unsigned int *)v30;
  v48 = 0LL;
  while ( 1 )
  {
    v49 = v46->klass;
    v50 = *(unsigned __int16 *)(&v46->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v46->klass->_2.bitflags2 + 3) )
    {
      v51 = &v49->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__c **)v51
              - 1) != System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__TypeInfo )
      {
        --v50;
        v51 += 4;
        if ( !v50 )
          goto LABEL_23;
      }
      v52 = (__int64)&v49->vtable[*v51].method;
    }
    else
    {
LABEL_23:
      v52 = sub_1C25438(
              v46,
              System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__TypeInfo,
              0LL);
    }
    v30 = (Il2CppObject *)(*(__int64 (__fastcall **)(struct System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *, _QWORD))v52)(
                            v46,
                            *(_QWORD *)(v52 + 8));
    if ( (__int64)v48 >= (int)v30 )
      break;
    v53 = this->fields.progressDataList;
    if ( v53 )
    {
      v54 = v53->klass;
      v55 = *(unsigned __int16 *)(&v53->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v53->klass->_2.bitflags2 + 3) )
      {
        v56 = &v54->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__c **)v56
                - 1) != System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__TypeInfo )
        {
          --v55;
          v56 += 4;
          if ( !v55 )
            goto LABEL_31;
        }
        v57 = (__int64)&v54->vtable[*v56].method;
      }
      else
      {
LABEL_31:
        v57 = sub_1C25438(
                this->fields.progressDataList,
                System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__TypeInfo,
                0LL);
      }
      v58 = (_DWORD *)(*(__int64 (__fastcall **)(struct System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *, _QWORD, _QWORD))v57)(
                        v53,
                        (unsigned int)v48,
                        *(_QWORD *)(v57 + 8));
      v59 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BD36A4(System_Collections_Generic_Dictionary_string__object__TypeInfo);
      System_Collections_Generic_Dictionary_object__object____ctor(
        v59,
        (const MethodInfo_32839E4 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
      if ( v58 )
      {
        LODWORD(v104.fields.Item1) = v58[4];
        v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v104, v108.fields.Item2, v60, v61);
        if ( v59 )
        {
          System_Collections_Generic_Dictionary_object__object___set_Item(
            v59,
            (Il2CppObject *)StringLiteral_21730/*"missionTargetId"*/,
            v30,
            (const MethodInfo_3284380 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
          LODWORD(deemedTime) = v58[5];
          v65 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &deemedTime, v62, v63, v64);
          System_Collections_Generic_Dictionary_object__object___set_Item(
            v59,
            (Il2CppObject *)StringLiteral_21725/*"missionConditionDetailId"*/,
            v65,
            (const MethodInfo_3284380 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
          v103 = v58[6];
          v69 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v103, v66, v67, v68);
          System_Collections_Generic_Dictionary_object__object___set_Item(
            v59,
            (Il2CppObject *)StringLiteral_24136/*"targetId"*/,
            v69,
            (const MethodInfo_3284380 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
          v102 = v58[7];
          v73 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v102, v70, v71, v72);
          System_Collections_Generic_Dictionary_object__object___set_Item(
            v59,
            (Il2CppObject *)StringLiteral_19358/*"eventId"*/,
            v73,
            (const MethodInfo_3284380 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
          v101 = v58[8];
          v77 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v101, v74, v75, v76);
          System_Collections_Generic_Dictionary_object__object___set_Item(
            v59,
            (Il2CppObject *)StringLiteral_16853/*"addCount"*/,
            v77,
            (const MethodInfo_3284380 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
          if ( v47 )
          {
            v78 = sub_1BD3594(v59, *(_QWORD *)(*(_QWORD *)v47 + 64LL));
            if ( !v78 )
            {
              v99 = sub_1BD36D8(0LL);
              sub_1BD3580(v99, 0LL);
            }
            if ( v48 >= v47[6] )
              sub_1BD36BC(v78, v79);
            v86 = &v47[2 * v48];
            *((_QWORD *)v86 + 4) = v59;
            sub_1BD33FC((PartyOrganizationUtility_o *)(v86 + 8), (int64_t)v59, v80, v81, v82, v83, v84, v85);
            v46 = this->fields.progressDataList;
            ++v48;
            if ( v46 )
              continue;
          }
        }
      }
    }
    goto LABEL_39;
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v87 = (Il2CppObject *)JsonManager__toJson((Il2CppObject *)v47, 0, 0, 0LL);
  v107.fields.Item1 = (Il2CppObject *)&v104;
  v107.fields.Item2 = (Il2CppObject *)StringLiteral_22896/*"progress"*/;
  v104 = (System_ValueTuple_object__object__o)0LL;
  System_ValueTuple_object__object____ctor(
    v107,
    v87,
    (Il2CppObject *)Method_System_ValueTuple_string__string___ctor__,
    v88);
  v108 = v104;
  v94 = v100->fields._items;
  v95 = Method_System_Collections_Generic_List_ValueTuple_string__string___Add__;
  ++v100->fields._version;
  if ( !v94 )
LABEL_39:
    sub_1BD36B4(v30, v108.fields.Item1);
  v96 = v100->fields._size;
  if ( (unsigned int)v96 >= v94->max_length )
  {
    System_Collections_Generic_List_ValueTuple_object__object____AddWithResize(
      v100,
      v108,
      *(const MethodInfo_357022C **)(*(_QWORD *)(v95[4] + 192LL) + 112LL));
  }
  else
  {
    v97 = (PartyOrganizationUtility_o *)(&v94->obj + v96);
    v100->fields._size = v96 + 1;
    *(_QWORD *)&v97->fields._SelectedNormalFollowerClassId_k__BackingField = v108.fields.Item1;
    v97 = (PartyOrganizationUtility_o *)((char *)v97 + 32);
    v97->monitor = v108.fields.Item2;
    sub_1BD33FC(v97, 0LL, (int64_t)v108.fields.Item2, v89, v90, v91, v92, v93);
  }
  return (System_Collections_Generic_List_ValueTuple_string__string___o *)v100;
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