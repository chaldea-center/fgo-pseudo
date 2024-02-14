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
  if ( (byte_4214D00 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_string__string___Dispose__, arg);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_string__string___MoveNext__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_string__string___get_Current__, v6);
    this = (EventMissionProgressRequest_o *)sub_B0D8A4(
                                              &Method_System_Collections_Generic_List_ValueTuple_string__string___GetEnumerator__,
                                              v7);
    byte_4214D00 = 1;
  }
  v8 = 0u;
  v9 = 0u;
  if ( !arg
    || (this = (EventMissionProgressRequest_o *)EventMissionProgressRequest_Argument__ConvertToJsonFieldAndStringList(
                                                  arg,
                                                  0LL)) == 0LL )
  {
    sub_B0D97C(this);
  }
  System_Collections_Generic_List_ValueTuple_string__string____GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    (System_Collections_Generic_List_ValueTuple_string__string___o *)this,
    (const MethodInfo_2F2DB08 *)Method_System_Collections_Generic_List_ValueTuple_string__string___GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_ValueTuple_string__string____MoveNext(
            (System_Collections_Generic_List_Enumerator_T__o *)&v8,
            (const MethodInfo_210CD24 *)Method_System_Collections_Generic_List_Enumerator_ValueTuple_string__string___MoveNext__) )
    RequestBase__addField_30435648(v4, (System_String_o *)v9, *((System_String_o **)&v9 + 1), 0LL);
  System_Collections_Generic_List_Enumerator_ValueTuple_string__string____Dispose(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    (const MethodInfo_210CD20 *)Method_System_Collections_Generic_List_Enumerator_ValueTuple_string__string___Dispose__);
  RequestBase__beginRequest(v4, 0LL);
}


System_String_o *__fastcall EventMissionProgressRequest__getURL(
        EventMissionProgressRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4214CFF & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_18532/*"eventMission/progress"*/, v2);
    byte_4214CFF = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_43849904(BaseUrl, (System_String_o *)StringLiteral_18532/*"eventMission/progress"*/, 0LL);
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

  if ( (byte_4211B9A & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___ctor__,
      deemedTime);
    sub_B0D8A4(&System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__TypeInfo, v7);
    byte_4211B9A = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.deemedTime = deemedTime;
  if ( !progressDataList )
  {
    progressDataList = (System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__TypeInfo, v8, v9);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)progressDataList,
      (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___ctor__);
  }
  this->fields.progressDataList = progressDataList;
  sub_B0D840(&this->fields.progressDataList, progressDataList);
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
  System_Collections_Generic_List_ValueTuple_string__string___o *v23; // x20
  Il2CppObject *v24; // x21
  System_String_o *v25; // x2
  const MethodInfo_2AD1328 *v26; // x4
  System_Xml_Schema_XmlSchemaObject_o *v27; // x0
  struct System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *progressDataList; // x21
  System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__c *klass; // x8
  unsigned __int64 v30; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  unsigned int v33; // w0
  struct System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *v34; // x23
  unsigned int *v35; // x21
  unsigned __int64 v36; // x22
  System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__c *v37; // x8
  unsigned __int64 v38; // x10
  int32_t *v39; // x11
  __int64 v40; // x0
  struct System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *v41; // x23
  System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__c *v42; // x8
  unsigned __int64 v43; // x10
  int32_t *v44; // x11
  __int64 v45; // x0
  _DWORD *v46; // x24
  __int64 v47; // x1
  __int64 v48; // x2
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v49; // x23
  System_Xml_Schema_XmlSchemaObject_o *v50; // x0
  System_Xml_Schema_XmlSchemaObject_o *v51; // x0
  System_Xml_Schema_XmlSchemaObject_o *v52; // x0
  System_Xml_Schema_XmlSchemaObject_o *v53; // x0
  __int64 v54; // x0
  unsigned int *v55; // x0
  System_String_o *v56; // x2
  const MethodInfo_2AD1328 *v57; // x4
  __int64 v59; // x0
  __int64 v60; // x0
  int v61; // [xsp+Ch] [xbp-74h] BYREF
  int v62; // [xsp+10h] [xbp-70h] BYREF
  int v63; // [xsp+14h] [xbp-6Ch] BYREF
  System_ValueTuple_string__string__o v64; // [xsp+18h] [xbp-68h] BYREF
  int64_t deemedTime; // [xsp+28h] [xbp-58h] BYREF
  System_ValueTuple_ServicePointScheduler_ConnectionGroup__WebOperation__o v66; // 0:x0.16
  System_ValueTuple_ServicePointScheduler_ConnectionGroup__WebOperation__o v67; // 0:x0.16

  if ( (byte_4211B9B & 1) == 0 )
  {
    sub_B0D8A4(&System_Collections_Generic_Dictionary_string__object____TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object___ctor__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__, v5);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v6);
    sub_B0D8A4(
      &System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__TypeInfo,
      v7);
    sub_B0D8A4(
      &System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__TypeInfo,
      v8);
    sub_B0D8A4(&int_TypeInfo, v9);
    sub_B0D8A4(&long_TypeInfo, v10);
    sub_B0D8A4(&JsonManager_TypeInfo, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ValueTuple_string__string___Add__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ValueTuple_string__string____ctor__, v13);
    sub_B0D8A4(&System_Collections_Generic_List_ValueTuple_string__string___TypeInfo, v14);
    sub_B0D8A4(&Method_System_ValueTuple_string__string___ctor__, v15);
    sub_B0D8A4(&StringLiteral_20590/*"missionConditionDetailId"*/, v16);
    sub_B0D8A4(&StringLiteral_18529/*"eventId"*/, v17);
    sub_B0D8A4(&StringLiteral_17988/*"deemedTime"*/, v18);
    sub_B0D8A4(&StringLiteral_22684/*"targetId"*/, v19);
    sub_B0D8A4(&StringLiteral_20593/*"missionTargetId"*/, v20);
    sub_B0D8A4(&StringLiteral_21619/*"progress"*/, v21);
    sub_B0D8A4(&StringLiteral_16298/*"addCount"*/, v22);
    byte_4211B9B = 1;
  }
  v23 = (System_Collections_Generic_List_ValueTuple_string__string___o *)sub_B0D974(
                                                                           System_Collections_Generic_List_ValueTuple_string__string___TypeInfo,
                                                                           method,
                                                                           v2);
  System_Collections_Generic_List_ValueTuple_string__string_____ctor(
    v23,
    (const MethodInfo_2F2BEA8 *)Method_System_Collections_Generic_List_ValueTuple_string__string____ctor__);
  deemedTime = this->fields.deemedTime;
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &deemedTime);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v25 = JsonManager__toJson(v24, 0, 0, 0LL);
  v66.fields.Item1 = (struct System_Net_ServicePointScheduler_ConnectionGroup_o *)&v64;
  v66.fields.Item2 = (struct System_Net_WebOperation_o *)StringLiteral_17988/*"deemedTime"*/;
  v64.fields.Item1 = 0LL;
  v64.fields.Item2 = 0LL;
  System_ValueTuple_ServicePointScheduler_ConnectionGroup__WebOperation____ctor(
    v66,
    (System_Net_ServicePointScheduler_ConnectionGroup_o *)v25,
    (System_Net_WebOperation_o *)Method_System_ValueTuple_string__string___ctor__,
    v26);
  if ( !v23 )
    goto LABEL_36;
  System_Collections_Generic_List_ValueTuple_string__string____Add(
    v23,
    v64,
    (const MethodInfo_2F2CC38 *)Method_System_Collections_Generic_List_ValueTuple_string__string___Add__);
  progressDataList = this->fields.progressDataList;
  if ( !progressDataList )
    goto LABEL_36;
  klass = progressDataList->klass;
  if ( *(_WORD *)&progressDataList->klass->_2.bitflags1 )
  {
    v30 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__c **)p_offset
            - 1) != System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__TypeInfo )
    {
      ++v30;
      p_offset += 4;
      if ( v30 >= *(unsigned __int16 *)&progressDataList->klass->_2.bitflags1 )
        goto LABEL_12;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_12:
    p_method = sub_AA67A0(
                 progressDataList,
                 System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__TypeInfo,
                 0LL);
  }
  v33 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *, _QWORD))p_method)(
          progressDataList,
          *(_QWORD *)(p_method + 8));
  v27 = (System_Xml_Schema_XmlSchemaObject_o *)sub_B0D8BC(
                                                 System_Collections_Generic_Dictionary_string__object____TypeInfo,
                                                 v33);
  v34 = this->fields.progressDataList;
  if ( !v34 )
LABEL_36:
    sub_B0D97C(v27);
  v35 = (unsigned int *)v27;
  v36 = 0LL;
  while ( 1 )
  {
    v37 = v34->klass;
    if ( *(_WORD *)&v34->klass->_2.bitflags1 )
    {
      v38 = 0LL;
      v39 = &v37->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__c **)v39
              - 1) != System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__TypeInfo )
      {
        ++v38;
        v39 += 4;
        if ( v38 >= *(unsigned __int16 *)&v34->klass->_2.bitflags1 )
          goto LABEL_20;
      }
      v40 = (__int64)&v37->vtable[*v39].method;
    }
    else
    {
LABEL_20:
      v40 = sub_AA67A0(
              v34,
              System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__TypeInfo,
              0LL);
    }
    v27 = (System_Xml_Schema_XmlSchemaObject_o *)(*(__int64 (__fastcall **)(struct System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *, _QWORD))v40)(
                                                   v34,
                                                   *(_QWORD *)(v40 + 8));
    if ( (__int64)v36 >= (int)v27 )
      break;
    v41 = this->fields.progressDataList;
    if ( v41 )
    {
      v42 = v41->klass;
      if ( *(_WORD *)&v41->klass->_2.bitflags1 )
      {
        v43 = 0LL;
        v44 = &v42->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__c **)v44
                - 1) != System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__TypeInfo )
        {
          ++v43;
          v44 += 4;
          if ( v43 >= *(unsigned __int16 *)&v41->klass->_2.bitflags1 )
            goto LABEL_28;
        }
        v45 = (__int64)&v42->vtable[*v44].method;
      }
      else
      {
LABEL_28:
        v45 = sub_AA67A0(
                this->fields.progressDataList,
                System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__TypeInfo,
                0LL);
      }
      v46 = (_DWORD *)(*(__int64 (__fastcall **)(struct System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *, _QWORD, _QWORD))v45)(
                        v41,
                        (unsigned int)v36,
                        *(_QWORD *)(v45 + 8));
      v49 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B0D974(
                                                                                            System_Collections_Generic_Dictionary_string__object__TypeInfo,
                                                                                            v47,
                                                                                            v48);
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
        v49,
        (const MethodInfo_2E4A0B8 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
      if ( v46 )
      {
        LODWORD(v64.fields.Item1) = v46[4];
        v27 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v64);
        if ( v49 )
        {
          System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
            v49,
            (System_Xml_XmlQualifiedName_o *)StringLiteral_20593/*"missionTargetId"*/,
            v27,
            (const MethodInfo_2E4AC40 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
          LODWORD(deemedTime) = v46[5];
          v50 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &deemedTime);
          System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
            v49,
            (System_Xml_XmlQualifiedName_o *)StringLiteral_20590/*"missionConditionDetailId"*/,
            v50,
            (const MethodInfo_2E4AC40 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
          v63 = v46[6];
          v51 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v63);
          System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
            v49,
            (System_Xml_XmlQualifiedName_o *)StringLiteral_22684/*"targetId"*/,
            v51,
            (const MethodInfo_2E4AC40 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
          v62 = v46[7];
          v52 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v62);
          System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
            v49,
            (System_Xml_XmlQualifiedName_o *)StringLiteral_18529/*"eventId"*/,
            v52,
            (const MethodInfo_2E4AC40 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
          v61 = v46[8];
          v53 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v61);
          System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
            v49,
            (System_Xml_XmlQualifiedName_o *)StringLiteral_16298/*"addCount"*/,
            v53,
            (const MethodInfo_2E4AC40 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
          if ( v35 )
          {
            v54 = sub_B0D964(v49, *(_QWORD *)(*(_QWORD *)v35 + 64LL));
            if ( !v54 )
            {
              v59 = sub_B0D99C();
              sub_B0D948(v59, 0LL);
            }
            if ( v36 >= v35[6] )
            {
              v60 = sub_B0D9A8(v54);
              sub_B0D948(v60, 0LL);
            }
            v55 = &v35[2 * v36];
            *((_QWORD *)v55 + 4) = v49;
            sub_B0D840(v55 + 8, v49);
            v34 = this->fields.progressDataList;
            ++v36;
            if ( v34 )
              continue;
          }
        }
      }
    }
    goto LABEL_36;
  }
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v56 = JsonManager__toJson((Il2CppObject *)v35, 0, 0, 0LL);
  v67.fields.Item1 = (struct System_Net_ServicePointScheduler_ConnectionGroup_o *)&v64;
  v67.fields.Item2 = (struct System_Net_WebOperation_o *)StringLiteral_21619/*"progress"*/;
  v64 = (System_ValueTuple_string__string__o)0LL;
  System_ValueTuple_ServicePointScheduler_ConnectionGroup__WebOperation____ctor(
    v67,
    (System_Net_ServicePointScheduler_ConnectionGroup_o *)v56,
    (System_Net_WebOperation_o *)Method_System_ValueTuple_string__string___ctor__,
    v57);
  System_Collections_Generic_List_ValueTuple_string__string____Add(
    v23,
    v64,
    (const MethodInfo_2F2CC38 *)Method_System_Collections_Generic_List_ValueTuple_string__string___Add__);
  return v23;
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