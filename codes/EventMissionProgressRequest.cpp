// attributes: thunk
void EventMissionProgressRequest___ctor(EventMissionProgressRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, method);
}


void EventMissionProgressRequest__beginRequest(
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
  if ( (byte_4D324D8 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_string__string___Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_string__string___MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_string__string___get_Current__);
    this = (EventMissionProgressRequest_o *)sub_1C93AD4(&Method_System_Collections_Generic_List_ValueTuple_string__string___GetEnumerator__);
    byte_4D324D8 = 1;
  }
  v7 = 0u;
  v8 = 0u;
  if ( !arg
    || (this = (EventMissionProgressRequest_o *)EventMissionProgressRequest_Argument__ConvertToJsonFieldAndStringList(
                                                  arg,
                                                  (const MethodInfo *)arg)) == 0 )
  {
    sub_1C93D2C(this, arg);
  }
  System_Collections_Generic_List_ValueTuple_object__object____GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v7,
    (System_Collections_Generic_List_T__o *)this,
    (const MethodInfo_3829880 *)Method_System_Collections_Generic_List_ValueTuple_string__string___GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_ValueTuple_object__object____MoveNext(
            (System_Collections_Generic_List_Enumerator_T__o *)&v7,
            (const MethodInfo_35F156C *)Method_System_Collections_Generic_List_Enumerator_ValueTuple_string__string___MoveNext__) )
    RequestBase__addField_44907496(v4, (System_String_o *)v8, *((System_String_o **)&v8 + 1), v5);
  System_Collections_Generic_List_Enumerator_ValueTuple_object__object____Dispose(
    (System_Collections_Generic_List_Enumerator_T__o *)&v7,
    (const MethodInfo_35F1568 *)Method_System_Collections_Generic_List_Enumerator_ValueTuple_string__string___Dispose__);
  RequestBase__beginRequest(v4, v6);
}


System_String_o *EventMissionProgressRequest__getURL(EventMissionProgressRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4D324D7 & 1) == 0 )
  {
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_19342/*"eventMission/progress"*/);
    byte_4D324D7 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_64425724(BaseUrl, (System_String_o *)StringLiteral_19342/*"eventMission/progress"*/, 0);
}


void EventMissionProgressRequest_Argument___ctor(
        EventMissionProgressRequest_Argument_o *this,
        int64_t deemedTime,
        System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *progressDataList,
        const MethodInfo *method)
{
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  if ( (byte_4D324D9 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__TypeInfo);
    byte_4D324D9 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.deemedTime = deemedTime;
  if ( !progressDataList )
  {
    progressDataList = (System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *)sub_1C93D20(System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      (System_Collections_Generic_List_object__o *)progressDataList,
      (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___ctor__);
  }
  this->fields.progressDataList = progressDataList;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.progressDataList,
    (int32_t)progressDataList,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
}


System_Collections_Generic_List_ValueTuple_string__string___o *EventMissionProgressRequest_Argument__ConvertToJsonFieldAndStringList(
        EventMissionProgressRequest_Argument_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_T__o *v3; // x23
  Il2CppObject *v4; // x21
  System_String_o *v5; // x0
  Il2CppObject *v6; // x2
  const MethodInfo_3BE077C *v7; // x4
  Il2CppObject *v8; // x0
  System_ValueTuple_object__object__o v9; // x1
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  GrandQuestFolderBoardItem_o *v18; // x0
  struct System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *progressDataList; // x21
  System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__c *klass; // x8
  __int64 v21; // x9
  int32_t *p_offset; // x10
  __int64 v23; // x0
  unsigned int v24; // w0
  struct System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *v25; // x23
  unsigned int *v26; // x21
  unsigned __int64 v27; // x22
  System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__c *v28; // x8
  __int64 v29; // x9
  int32_t *v30; // x10
  __int64 v31; // x0
  struct System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *v32; // x23
  System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__c *v33; // x8
  __int64 v34; // x9
  int32_t *v35; // x10
  __int64 v36; // x0
  _DWORD *v37; // x24
  System_Collections_Generic_Dictionary_object__object__o *v38; // x23
  Il2CppObject *v39; // x0
  Il2CppObject *v40; // x0
  Il2CppObject *v41; // x0
  Il2CppObject *v42; // x0
  __int64 v43; // x0
  int32_t v44; // w2
  int32_t v45; // w3
  System_String_o *v46; // x4
  int32_t v47; // w5
  int64_t v48; // x6
  System_String_o *v49; // x7
  unsigned int *v50; // x0
  Il2CppObject *v51; // x2
  const MethodInfo_3BE077C *v52; // x4
  int32_t v53; // w3
  System_String_o *v54; // x4
  int32_t v55; // w5
  int64_t v56; // x6
  System_String_o *v57; // x7
  struct System_Object_array *v58; // x8
  _QWORD *v59; // x9
  __int64 v60; // x10
  GrandQuestFolderBoardItem_o *v61; // x0
  __int64 v63; // x0
  System_Collections_Generic_List_T__o *v64; // [xsp+0h] [xbp-90h]
  int v65; // [xsp+Ch] [xbp-84h] BYREF
  int v66; // [xsp+10h] [xbp-80h] BYREF
  int v67; // [xsp+14h] [xbp-7Ch] BYREF
  System_ValueTuple_object__object__o v68; // [xsp+18h] [xbp-78h] BYREF
  int64_t deemedTime; // [xsp+28h] [xbp-68h] BYREF
  System_ValueTuple_object__object__o v70; // 0:x0.16
  System_ValueTuple_object__object__o v71; // 0:x0.16

  if ( (byte_4D324DA & 1) == 0 )
  {
    sub_1C93AD4(&System_Collections_Generic_Dictionary_string__object____TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__TypeInfo);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&long_TypeInfo);
    sub_1C93AD4(&JsonManager_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ValueTuple_string__string___Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ValueTuple_string__string____ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_ValueTuple_string__string___TypeInfo);
    sub_1C93AD4(&Method_System_ValueTuple_string__string___ctor__);
    sub_1C93AD4(&StringLiteral_21870/*"missionConditionDetailId"*/);
    sub_1C93AD4(&StringLiteral_19339/*"eventId"*/);
    sub_1C93AD4(&StringLiteral_18689/*"deemedTime"*/);
    sub_1C93AD4(&StringLiteral_24299/*"targetId"*/);
    sub_1C93AD4(&StringLiteral_21875/*"missionTargetId"*/);
    sub_1C93AD4(&StringLiteral_23078/*"progress"*/);
    sub_1C93AD4(&StringLiteral_16779/*"addCount"*/);
    byte_4D324DA = 1;
  }
  v3 = (System_Collections_Generic_List_T__o *)sub_1C93D20(System_Collections_Generic_List_ValueTuple_string__string___TypeInfo);
  System_Collections_Generic_List_ValueTuple_object__object_____ctor(
    v3,
    (const MethodInfo_38284A8 *)Method_System_Collections_Generic_List_ValueTuple_string__string____ctor__);
  deemedTime = this->fields.deemedTime;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &deemedTime);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v5 = JsonManager__toJson(v4, 0, 0, 0);
  v70.fields.Item2 = (Il2CppObject *)StringLiteral_18689/*"deemedTime"*/;
  v6 = (Il2CppObject *)v5;
  v70.fields.Item1 = (Il2CppObject *)&v68;
  v68.fields.Item1 = 0;
  v68.fields.Item2 = 0;
  System_ValueTuple_object__object____ctor(
    v70,
    v6,
    (Il2CppObject *)Method_System_ValueTuple_string__string___ctor__,
    v7);
  if ( !v3 )
    goto LABEL_39;
  v9 = v68;
  items = v3->fields._items;
  v16 = Method_System_Collections_Generic_List_ValueTuple_string__string___Add__;
  ++v3->fields._version;
  if ( !items )
    goto LABEL_39;
  size = v3->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_ValueTuple_object__object____AddWithResize(
      v3,
      v9,
      *(const MethodInfo_3828D28 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
  }
  else
  {
    v18 = (GrandQuestFolderBoardItem_o *)(&items->obj + size);
    v3->fields._size = size + 1;
    v18->fields.sortValue0 = (int64_t)v9.fields.Item1;
    v18 = (GrandQuestFolderBoardItem_o *)((char *)v18 + 32);
    v18->monitor = v9.fields.Item2;
    sub_1C93A78(v18, 0, (int32_t)v9.fields.Item2, v10, v11, v12, v13, v14);
  }
  progressDataList = this->fields.progressDataList;
  if ( !progressDataList )
    goto LABEL_39;
  klass = progressDataList->klass;
  v21 = *(unsigned __int16 *)&progressDataList->klass->_2.rank;
  v64 = v3;
  if ( *(_WORD *)&progressDataList->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__c **)p_offset
            - 1) != System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__TypeInfo )
    {
      --v21;
      p_offset += 4;
      if ( !v21 )
        goto LABEL_15;
    }
    v23 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_15:
    v23 = sub_1C69E5C(
            progressDataList,
            System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__TypeInfo,
            0);
  }
  v24 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *, _QWORD))v23)(
          progressDataList,
          *(_QWORD *)(v23 + 8));
  v8 = (Il2CppObject *)sub_1C93B7C(System_Collections_Generic_Dictionary_string__object____TypeInfo, v24);
  v25 = this->fields.progressDataList;
  if ( !v25 )
    goto LABEL_39;
  v26 = (unsigned int *)v8;
  v27 = 0;
  while ( 1 )
  {
    v28 = v25->klass;
    v29 = *(unsigned __int16 *)&v25->klass->_2.rank;
    if ( *(_WORD *)&v25->klass->_2.rank )
    {
      v30 = &v28->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__c **)v30
              - 1) != System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__TypeInfo )
      {
        --v29;
        v30 += 4;
        if ( !v29 )
          goto LABEL_23;
      }
      v31 = (__int64)&v28->vtable[*v30];
    }
    else
    {
LABEL_23:
      v31 = sub_1C69E5C(
              v25,
              System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__TypeInfo,
              0);
    }
    v8 = (Il2CppObject *)(*(__int64 (__fastcall **)(struct System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *, _QWORD))v31)(
                           v25,
                           *(_QWORD *)(v31 + 8));
    if ( (__int64)v27 >= (int)v8 )
      break;
    v32 = this->fields.progressDataList;
    if ( v32 )
    {
      v33 = v32->klass;
      v34 = *(unsigned __int16 *)&v32->klass->_2.rank;
      if ( *(_WORD *)&v32->klass->_2.rank )
      {
        v35 = &v33->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__c **)v35
                - 1) != System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__TypeInfo )
        {
          --v34;
          v35 += 4;
          if ( !v34 )
            goto LABEL_31;
        }
        v36 = (__int64)&v33->vtable[*v35];
      }
      else
      {
LABEL_31:
        v36 = sub_1C69E5C(
                this->fields.progressDataList,
                System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__TypeInfo,
                0);
      }
      v37 = (_DWORD *)(*(__int64 (__fastcall **)(struct System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *, _QWORD, _QWORD))v36)(
                        v32,
                        (unsigned int)v27,
                        *(_QWORD *)(v36 + 8));
      v38 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C93D20(System_Collections_Generic_Dictionary_string__object__TypeInfo);
      System_Collections_Generic_Dictionary_object__object____ctor(
        v38,
        (const MethodInfo_352E1F8 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
      if ( v37 )
      {
        LODWORD(v68.fields.Item1) = v37[4];
        v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v68);
        if ( v38 )
        {
          System_Collections_Generic_Dictionary_object__object___set_Item(
            v38,
            (Il2CppObject *)StringLiteral_21875/*"missionTargetId"*/,
            v8,
            (const MethodInfo_352EB94 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
          LODWORD(deemedTime) = v37[5];
          v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &deemedTime);
          System_Collections_Generic_Dictionary_object__object___set_Item(
            v38,
            (Il2CppObject *)StringLiteral_21870/*"missionConditionDetailId"*/,
            v39,
            (const MethodInfo_352EB94 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
          v67 = v37[6];
          v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v67);
          System_Collections_Generic_Dictionary_object__object___set_Item(
            v38,
            (Il2CppObject *)StringLiteral_24299/*"targetId"*/,
            v40,
            (const MethodInfo_352EB94 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
          v66 = v37[7];
          v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v66);
          System_Collections_Generic_Dictionary_object__object___set_Item(
            v38,
            (Il2CppObject *)StringLiteral_19339/*"eventId"*/,
            v41,
            (const MethodInfo_352EB94 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
          v65 = v37[8];
          v42 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v65);
          System_Collections_Generic_Dictionary_object__object___set_Item(
            v38,
            (Il2CppObject *)StringLiteral_16779/*"addCount"*/,
            v42,
            (const MethodInfo_352EB94 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
          if ( v26 )
          {
            v43 = sub_1C93C10(v38, *(_QWORD *)(*(_QWORD *)v26 + 64LL));
            if ( !v43 )
            {
              v63 = sub_1C93D50(0);
              sub_1C93BFC(v63, 0);
            }
            if ( v27 >= v26[6] )
              sub_1C93D34(v43);
            v50 = &v26[2 * v27];
            *((_QWORD *)v50 + 4) = v38;
            sub_1C93A78((GrandQuestFolderBoardItem_o *)(v50 + 8), (int32_t)v38, v44, v45, v46, v47, v48, v49);
            v25 = this->fields.progressDataList;
            ++v27;
            if ( v25 )
              continue;
          }
        }
      }
    }
    goto LABEL_39;
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v51 = (Il2CppObject *)JsonManager__toJson((Il2CppObject *)v26, 0, 0, 0);
  v71.fields.Item1 = (Il2CppObject *)&v68;
  v71.fields.Item2 = (Il2CppObject *)StringLiteral_23078/*"progress"*/;
  v68 = (System_ValueTuple_object__object__o)0LL;
  System_ValueTuple_object__object____ctor(
    v71,
    v51,
    (Il2CppObject *)Method_System_ValueTuple_string__string___ctor__,
    v52);
  v9 = v68;
  v58 = v64->fields._items;
  v59 = Method_System_Collections_Generic_List_ValueTuple_string__string___Add__;
  ++v64->fields._version;
  if ( !v58 )
LABEL_39:
    sub_1C93D2C(v8, v9.fields.Item1);
  v60 = v64->fields._size;
  if ( (unsigned int)v60 >= LODWORD(v58->max_length) )
  {
    System_Collections_Generic_List_ValueTuple_object__object____AddWithResize(
      v64,
      v9,
      *(const MethodInfo_3828D28 **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
  }
  else
  {
    v61 = (GrandQuestFolderBoardItem_o *)(&v58->obj + v60);
    v64->fields._size = v60 + 1;
    v61->fields.sortValue0 = (int64_t)v9.fields.Item1;
    v61 = (GrandQuestFolderBoardItem_o *)((char *)v61 + 32);
    v61->monitor = v9.fields.Item2;
    sub_1C93A78(v61, 0, (int32_t)v9.fields.Item2, v53, v54, v55, v56, v57);
  }
  return (System_Collections_Generic_List_ValueTuple_string__string___o *)v64;
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