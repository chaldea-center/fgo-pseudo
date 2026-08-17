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
  __int64 v5; // [xsp+0h] [xbp-60h]
  __int128 *v6; // [xsp+8h] [xbp-58h]
  __int128 v7; // [xsp+10h] [xbp-50h] BYREF
  __int128 v8; // [xsp+20h] [xbp-40h]

  v4 = (RequestBase_o *)this;
  if ( (byte_59723F8 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_string__string___Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_string__string___MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_string__string___get_Current__);
    this = (EventMissionProgressRequest_o *)sub_2213A60(&Method_System_Collections_Generic_List_ValueTuple_string__string___GetEnumerator__);
    byte_59723F8 = 1;
  }
  v7 = 0u;
  v8 = 0u;
  if ( !arg
    || (this = (EventMissionProgressRequest_o *)EventMissionProgressRequest_Argument__ConvertToJsonFieldAndStringList(
                                                  arg,
                                                  (const MethodInfo *)arg)) == 0 )
  {
    sub_2213CDC(this, arg);
  }
  System_Collections_Generic_List_ValueTuple_object__object____GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v7,
    (System_Collections_Generic_List_T__o *)this,
    (const MethodInfo_43FFB84 *)Method_System_Collections_Generic_List_ValueTuple_string__string___GetEnumerator__);
  v5 = 0;
  v6 = &v7;
  while ( System_Collections_Generic_List_Enumerator_ValueTuple_object__object____MoveNext(
            (System_Collections_Generic_List_Enumerator_T__o *)&v7,
            (const MethodInfo_40EA4FC *)Method_System_Collections_Generic_List_Enumerator_ValueTuple_string__string___MoveNext__) )
    RequestBase__addField_51259256(v4, (System_String_o *)v8, *((System_String_o **)&v8 + 1), 0);
  System_Collections_Generic_List_Enumerator_ValueTuple_object__object____Dispose(
    (System_Collections_Generic_List_Enumerator_T__o *)&v7,
    (const MethodInfo_40EA4F8 *)Method_System_Collections_Generic_List_Enumerator_ValueTuple_string__string___Dispose__);
  RequestBase__beginRequest(v4, 0);
}


System_String_o *EventMissionProgressRequest__getURL(EventMissionProgressRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_59723F7 & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&StringLiteral_20040/*"eventMission/progress"*/);
    byte_59723F7 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_75651716(BaseUrl, (System_String_o *)StringLiteral_20040/*"eventMission/progress"*/, 0);
}


void EventMissionProgressRequest_Argument___ctor(
        EventMissionProgressRequest_Argument_o *this,
        int64_t deemedTime,
        System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *progressDataList,
        const MethodInfo *method)
{
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  if ( (byte_59723F9 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___ctor__);
    sub_2213A60(&System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__TypeInfo);
    byte_59723F9 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.deemedTime = deemedTime;
  if ( !progressDataList )
  {
    progressDataList = (System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *)sub_2213CCC(System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      (System_Collections_Generic_List_object__o *)progressDataList,
      (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___ctor__);
  }
  this->fields.progressDataList = progressDataList;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.progressDataList,
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
  System_Collections_Generic_List_T__o *v3; // x24
  __int64 v4; // x1
  Il2CppObject *v5; // x21
  System_String_o *v6; // x0
  Il2CppObject *v7; // x2
  const MethodInfo_3CF8CCC *v8; // x4
  Il2CppObject *v9; // x0
  System_ValueTuple_object__object__o v10; // x1 OVERLAPPED
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppObject *v19; // x0
  struct System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *progressDataList; // x21
  System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__c *klass; // x8
  __int64 v22; // x9
  int32_t *p_offset; // x10
  __int64 v24; // x0
  unsigned int v25; // w0
  struct System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *v26; // x23
  unsigned int *v27; // x21
  unsigned __int64 v28; // x22
  Il2CppObject *v29; // x26
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
  Il2CppObject *v41; // x0
  Il2CppObject *v42; // x0
  Il2CppObject *v43; // x0
  Il2CppObject *v44; // x0
  __int64 v45; // x0
  __int64 v46; // x1
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  Il2CppObject *v53; // x2
  const MethodInfo_3CF8CCC *v54; // x4
  System_String_o *v55; // x3
  int32_t v56; // w4
  int32_t v57; // w5
  bool v58; // w6
  bool v59; // w7
  struct System_Object_array *v60; // x8
  _QWORD *v61; // x9
  __int64 v62; // x10
  Il2CppObject *v63; // x0
  __int64 v65; // x0
  System_Collections_Generic_List_T__o *v66; // [xsp+0h] [xbp-90h]
  int v67; // [xsp+Ch] [xbp-84h] BYREF
  int v68; // [xsp+10h] [xbp-80h] BYREF
  int v69; // [xsp+14h] [xbp-7Ch] BYREF
  System_ValueTuple_object__object__o v70; // [xsp+18h] [xbp-78h] BYREF
  int64_t deemedTime; // [xsp+28h] [xbp-68h] BYREF
  System_ValueTuple_object__object__o v72; // 0:x0.16
  System_ValueTuple_object__object__o v73; // 0:x0.16

  if ( (byte_59723FA & 1) == 0 )
  {
    sub_2213A60(&System_Collections_Generic_Dictionary_string__object____TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    sub_2213A60(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_2213A60(&System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__TypeInfo);
    sub_2213A60(&System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__TypeInfo);
    sub_2213A60(&JsonManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ValueTuple_string__string___Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ValueTuple_string__string____ctor__);
    sub_2213A60(&System_Collections_Generic_List_ValueTuple_string__string___TypeInfo);
    sub_2213A60(&Method_System_ValueTuple_string__string___ctor__);
    sub_2213A60(&StringLiteral_22707/*"missionConditionDetailId"*/);
    sub_2213A60(&StringLiteral_20037/*"eventId"*/);
    sub_2213A60(&StringLiteral_19367/*"deemedTime"*/);
    sub_2213A60(&StringLiteral_25274/*"targetId"*/);
    sub_2213A60(&StringLiteral_22712/*"missionTargetId"*/);
    sub_2213A60(&StringLiteral_23982/*"progress"*/);
    sub_2213A60(&StringLiteral_17351/*"addCount"*/);
    byte_59723FA = 1;
  }
  v3 = (System_Collections_Generic_List_T__o *)sub_2213CCC(System_Collections_Generic_List_ValueTuple_string__string___TypeInfo);
  System_Collections_Generic_List_ValueTuple_object__object_____ctor(
    v3,
    (const MethodInfo_43FE7B4 *)Method_System_Collections_Generic_List_ValueTuple_string__string____ctor__);
  deemedTime = this->fields.deemedTime;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984368, &deemedTime);
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v4);
  v6 = JsonManager__toJson(v5, 0, 0, 0);
  v72.fields.Item2 = (Il2CppObject *)StringLiteral_19367/*"deemedTime"*/;
  v7 = (Il2CppObject *)v6;
  v72.fields.Item1 = (Il2CppObject *)&v70;
  v70.fields.Item1 = 0;
  v70.fields.Item2 = 0;
  System_ValueTuple_object__object____ctor(
    v72,
    v7,
    (Il2CppObject *)Method_System_ValueTuple_string__string___ctor__,
    v8);
  if ( !v3 )
    goto LABEL_39;
  items = v3->fields._items;
  v10 = v70;
  v17 = Method_System_Collections_Generic_List_ValueTuple_string__string___Add__;
  ++v3->fields._version;
  if ( !items )
    goto LABEL_39;
  size = v3->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_ValueTuple_object__object____AddWithResize(
      v3,
      v10,
      *(const MethodInfo_43FF060 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
  }
  else
  {
    v19 = &items->obj + size;
    v3->fields._size = size + 1;
    v19[2] = (Il2CppObject)v10;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v19[2],
      0,
      (System_String_o *)v10.fields.Item2,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  progressDataList = this->fields.progressDataList;
  if ( !progressDataList )
    goto LABEL_39;
  klass = progressDataList->klass;
  v22 = *(unsigned __int16 *)&progressDataList->klass->_2.rank;
  v66 = v3;
  if ( *(_WORD *)&progressDataList->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__c **)p_offset
            - 1) != System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__TypeInfo )
    {
      --v22;
      p_offset += 4;
      if ( !v22 )
        goto LABEL_15;
    }
    v24 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_15:
    v24 = sub_224BC3C(
            progressDataList,
            System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__TypeInfo,
            0);
  }
  v25 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *, _QWORD))v24)(
          progressDataList,
          *(_QWORD *)(v24 + 8));
  v9 = (Il2CppObject *)sub_2213B20(System_Collections_Generic_Dictionary_string__object____TypeInfo, v25);
  v26 = this->fields.progressDataList;
  if ( !v26 )
    goto LABEL_39;
  v27 = (unsigned int *)v9;
  v28 = 0;
  v29 = v9 + 2;
  while ( 1 )
  {
    v30 = v26->klass;
    v31 = *(unsigned __int16 *)&v26->klass->_2.rank;
    if ( *(_WORD *)&v26->klass->_2.rank )
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
      v33 = sub_224BC3C(
              v26,
              System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__TypeInfo,
              0);
    }
    v9 = (Il2CppObject *)(*(__int64 (__fastcall **)(struct System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *, _QWORD))v33)(
                           v26,
                           *(_QWORD *)(v33 + 8));
    if ( (__int64)v28 >= (int)v9 )
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
        v38 = sub_224BC3C(
                this->fields.progressDataList,
                System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__TypeInfo,
                0);
      }
      v39 = (_DWORD *)(*(__int64 (__fastcall **)(struct System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *, _QWORD, _QWORD))v38)(
                        v34,
                        (unsigned int)v28,
                        *(_QWORD *)(v38 + 8));
      v40 = (System_Collections_Generic_Dictionary_object__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_string__object__TypeInfo);
      System_Collections_Generic_Dictionary_object__object____ctor(
        v40,
        (const MethodInfo_3FFD280 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
      if ( v39 )
      {
        LODWORD(v70.fields.Item1) = v39[4];
        v9 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v70);
        if ( v40 )
        {
          System_Collections_Generic_Dictionary_object__object___set_Item(
            v40,
            (Il2CppObject *)StringLiteral_22712/*"missionTargetId"*/,
            v9,
            (const MethodInfo_3FFDBFC *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
          LODWORD(deemedTime) = v39[5];
          v41 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &deemedTime);
          System_Collections_Generic_Dictionary_object__object___set_Item(
            v40,
            (Il2CppObject *)StringLiteral_22707/*"missionConditionDetailId"*/,
            v41,
            (const MethodInfo_3FFDBFC *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
          v69 = v39[6];
          v42 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v69);
          System_Collections_Generic_Dictionary_object__object___set_Item(
            v40,
            (Il2CppObject *)StringLiteral_25274/*"targetId"*/,
            v42,
            (const MethodInfo_3FFDBFC *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
          v68 = v39[7];
          v43 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v68);
          System_Collections_Generic_Dictionary_object__object___set_Item(
            v40,
            (Il2CppObject *)StringLiteral_20037/*"eventId"*/,
            v43,
            (const MethodInfo_3FFDBFC *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
          v67 = v39[8];
          v44 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v67);
          System_Collections_Generic_Dictionary_object__object___set_Item(
            v40,
            (Il2CppObject *)StringLiteral_17351/*"addCount"*/,
            v44,
            (const MethodInfo_3FFDBFC *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
          if ( v27 )
          {
            v45 = sub_2213BB4(v40, *(_QWORD *)(*(_QWORD *)v27 + 64LL));
            if ( !v45 )
            {
              v65 = sub_2213D00(0, v46);
              sub_2213BA0(v65, 0);
            }
            if ( v28 >= v27[6] )
              sub_2213CE4(v45);
            *(_QWORD *)&v27[2 * v28 + 8] = v40;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)(&v29->klass + v28),
              (int32_t)v40,
              v47,
              v48,
              v49,
              v50,
              v51,
              v52);
            v26 = this->fields.progressDataList;
            ++v28;
            if ( v26 )
              continue;
          }
        }
      }
    }
    goto LABEL_39;
  }
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v10.fields.Item1);
  v53 = (Il2CppObject *)JsonManager__toJson((Il2CppObject *)v27, 0, 0, 0);
  v73.fields.Item1 = (Il2CppObject *)&v70;
  v73.fields.Item2 = (Il2CppObject *)StringLiteral_23982/*"progress"*/;
  v70 = (System_ValueTuple_object__object__o)0LL;
  System_ValueTuple_object__object____ctor(
    v73,
    v53,
    (Il2CppObject *)Method_System_ValueTuple_string__string___ctor__,
    v54);
  v10 = v70;
  v60 = v66->fields._items;
  v61 = Method_System_Collections_Generic_List_ValueTuple_string__string___Add__;
  ++v66->fields._version;
  if ( !v60 )
LABEL_39:
    sub_2213CDC(v9, v10.fields.Item1);
  v62 = v66->fields._size;
  if ( (unsigned int)v62 >= LODWORD(v60->max_length) )
  {
    System_Collections_Generic_List_ValueTuple_object__object____AddWithResize(
      v66,
      v10,
      *(const MethodInfo_43FF060 **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
  }
  else
  {
    v63 = &v60->obj + v62;
    v66->fields._size = v62 + 1;
    v63[2] = (Il2CppObject)v10;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v63[2],
      0,
      (System_String_o *)v10.fields.Item2,
      v55,
      v56,
      v57,
      v58,
      v59);
  }
  return (System_Collections_Generic_List_ValueTuple_string__string___o *)v66;
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