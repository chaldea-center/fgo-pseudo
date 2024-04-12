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
  __int128 v5; // [xsp+0h] [xbp-40h] BYREF
  __int128 v6; // [xsp+10h] [xbp-30h]

  v4 = (RequestBase_o *)this;
  if ( (byte_42B0545 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_string__string___Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_string__string___MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_string__string___get_Current__);
    this = (EventMissionProgressRequest_o *)sub_B52984(&Method_System_Collections_Generic_List_ValueTuple_string__string___GetEnumerator__);
    byte_42B0545 = 1;
  }
  v5 = 0u;
  v6 = 0u;
  if ( !arg
    || (this = (EventMissionProgressRequest_o *)EventMissionProgressRequest_Argument__ConvertToJsonFieldAndStringList(
                                                  arg,
                                                  0LL)) == 0LL )
  {
    sub_B52A5C(this, arg);
  }
  System_Collections_Generic_List_ValueTuple_string__string____GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v5,
    (System_Collections_Generic_List_ValueTuple_string__string___o *)this,
    (const MethodInfo_2FA32E0 *)Method_System_Collections_Generic_List_ValueTuple_string__string___GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_ValueTuple_string__string____MoveNext(
            (System_Collections_Generic_List_Enumerator_T__o *)&v5,
            (const MethodInfo_200C130 *)Method_System_Collections_Generic_List_Enumerator_ValueTuple_string__string___MoveNext__) )
    RequestBase__addField_32020920(v4, (System_String_o *)v6, *((System_String_o **)&v6 + 1), 0LL);
  System_Collections_Generic_List_Enumerator_ValueTuple_string__string____Dispose(
    (System_Collections_Generic_List_Enumerator_T__o *)&v5,
    (const MethodInfo_200C12C *)Method_System_Collections_Generic_List_Enumerator_ValueTuple_string__string___Dispose__);
  RequestBase__beginRequest(v4, 0LL);
}


System_String_o *__fastcall EventMissionProgressRequest__getURL(
        EventMissionProgressRequest_o *this,
        const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_42B0544 & 1) == 0 )
  {
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&StringLiteral_18609/*"eventMission/progress"*/);
    byte_42B0544 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44568316(BaseUrl, (System_String_o *)StringLiteral_18609/*"eventMission/progress"*/, 0LL);
}


void __fastcall EventMissionProgressRequest_Argument___ctor(
        EventMissionProgressRequest_Argument_o *this,
        int64_t deemedTime,
        System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *progressDataList,
        const MethodInfo *method)
{
  if ( (byte_42AD931 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___ctor__);
    sub_B52984(&System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__TypeInfo);
    byte_42AD931 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.deemedTime = deemedTime;
  if ( !progressDataList )
  {
    progressDataList = (System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)progressDataList,
      (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___ctor__);
  }
  this->fields.progressDataList = progressDataList;
  sub_B52920(&this->fields.progressDataList);
}


System_Collections_Generic_List_ValueTuple_string__string___o *__fastcall EventMissionProgressRequest_Argument__ConvertToJsonFieldAndStringList(
        EventMissionProgressRequest_Argument_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_ValueTuple_string__string___o *v3; // x20
  Il2CppObject *v4; // x21
  System_String_o *v5; // x2
  const MethodInfo_2C0D474 *v6; // x4
  System_Xml_Schema_XmlSchemaObject_o *v7; // x0
  __int64 v8; // x1
  __int64 v9; // x3
  struct System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *progressDataList; // x21
  System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__c *klass; // x8
  unsigned __int64 v12; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  unsigned int v15; // w0
  __int64 v16; // x3
  struct System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x23
  unsigned int *v18; // x21
  unsigned __int64 v19; // x22
  System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__c *v20; // x8
  unsigned __int64 v21; // x10
  int32_t *v22; // x11
  __int64 v23; // x0
  __int64 v24; // x3
  struct System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *v25; // x23
  System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__c *v26; // x8
  unsigned __int64 v27; // x10
  int32_t *v28; // x11
  __int64 v29; // x0
  _DWORD *v30; // x24
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v31; // x23
  System_Xml_Schema_XmlSchemaObject_o *v32; // x0
  System_Xml_Schema_XmlSchemaObject_o *v33; // x0
  System_Xml_Schema_XmlSchemaObject_o *v34; // x0
  System_Xml_Schema_XmlSchemaObject_o *v35; // x0
  __int64 v36; // x0
  unsigned int *v37; // x0
  System_String_o *v38; // x2
  const MethodInfo_2C0D474 *v39; // x4
  __int64 v41; // x0
  __int64 v42; // x0
  int v43; // [xsp+Ch] [xbp-74h] BYREF
  int v44; // [xsp+10h] [xbp-70h] BYREF
  int v45; // [xsp+14h] [xbp-6Ch] BYREF
  System_ValueTuple_string__string__o v46; // [xsp+18h] [xbp-68h] BYREF
  int64_t deemedTime; // [xsp+28h] [xbp-58h] BYREF
  System_ValueTuple_ServicePointScheduler_ConnectionGroup__WebOperation__o v48; // 0:x0.16
  System_ValueTuple_ServicePointScheduler_ConnectionGroup__WebOperation__o v49; // 0:x0.16

  if ( (byte_42AD932 & 1) == 0 )
  {
    sub_B52984(&System_Collections_Generic_Dictionary_string__object____TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    sub_B52984(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_B52984(&System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__TypeInfo);
    sub_B52984(&System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__TypeInfo);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&long_TypeInfo);
    sub_B52984(&JsonManager_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ValueTuple_string__string___Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ValueTuple_string__string____ctor__);
    sub_B52984(&System_Collections_Generic_List_ValueTuple_string__string___TypeInfo);
    sub_B52984(&Method_System_ValueTuple_string__string___ctor__);
    sub_B52984(&StringLiteral_20685/*"missionConditionDetailId"*/);
    sub_B52984(&StringLiteral_18606/*"eventId"*/);
    sub_B52984(&StringLiteral_18060/*"deemedTime"*/);
    sub_B52984(&StringLiteral_22798/*"targetId"*/);
    sub_B52984(&StringLiteral_20688/*"missionTargetId"*/);
    sub_B52984(&StringLiteral_21726/*"progress"*/);
    sub_B52984(&StringLiteral_16361/*"addCount"*/);
    byte_42AD932 = 1;
  }
  v3 = (System_Collections_Generic_List_ValueTuple_string__string___o *)sub_B52A54(System_Collections_Generic_List_ValueTuple_string__string___TypeInfo);
  System_Collections_Generic_List_ValueTuple_string__string_____ctor(
    v3,
    (const MethodInfo_2FA1680 *)Method_System_Collections_Generic_List_ValueTuple_string__string____ctor__);
  deemedTime = this->fields.deemedTime;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &deemedTime);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v5 = JsonManager__toJson(v4, 0, 0, 0LL);
  v48.fields.Item1 = (struct System_Net_ServicePointScheduler_ConnectionGroup_o *)&v46;
  v48.fields.Item2 = (struct System_Net_WebOperation_o *)StringLiteral_18060/*"deemedTime"*/;
  v46.fields.Item1 = 0LL;
  v46.fields.Item2 = 0LL;
  System_ValueTuple_ServicePointScheduler_ConnectionGroup__WebOperation____ctor(
    v48,
    (System_Net_ServicePointScheduler_ConnectionGroup_o *)v5,
    (System_Net_WebOperation_o *)Method_System_ValueTuple_string__string___ctor__,
    v6);
  if ( !v3 )
    goto LABEL_36;
  System_Collections_Generic_List_ValueTuple_string__string____Add(
    v3,
    v46,
    (const MethodInfo_2FA2410 *)Method_System_Collections_Generic_List_ValueTuple_string__string___Add__);
  progressDataList = this->fields.progressDataList;
  if ( !progressDataList )
    goto LABEL_36;
  klass = progressDataList->klass;
  if ( *(_WORD *)&progressDataList->klass->_2.bitflags1 )
  {
    v12 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__c **)p_offset
            - 1) != System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__TypeInfo )
    {
      ++v12;
      p_offset += 4;
      if ( v12 >= *(unsigned __int16 *)&progressDataList->klass->_2.bitflags1 )
        goto LABEL_12;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_12:
    p_method = sub_AEB880(
                 progressDataList,
                 System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__TypeInfo,
                 0LL,
                 v9);
  }
  v15 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *, _QWORD))p_method)(
          progressDataList,
          *(_QWORD *)(p_method + 8));
  v7 = (System_Xml_Schema_XmlSchemaObject_o *)sub_B5299C(
                                                System_Collections_Generic_Dictionary_string__object____TypeInfo,
                                                v15);
  v17 = this->fields.progressDataList;
  if ( !v17 )
LABEL_36:
    sub_B52A5C(v7, v8);
  v18 = (unsigned int *)v7;
  v19 = 0LL;
  while ( 1 )
  {
    v20 = v17->klass;
    if ( *(_WORD *)&v17->klass->_2.bitflags1 )
    {
      v21 = 0LL;
      v22 = &v20->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__c **)v22
              - 1) != System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__TypeInfo )
      {
        ++v21;
        v22 += 4;
        if ( v21 >= *(unsigned __int16 *)&v17->klass->_2.bitflags1 )
          goto LABEL_20;
      }
      v23 = (__int64)&v20->vtable[*v22].method;
    }
    else
    {
LABEL_20:
      v23 = sub_AEB880(
              v17,
              System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__TypeInfo,
              0LL,
              v16);
    }
    v7 = (System_Xml_Schema_XmlSchemaObject_o *)(*(__int64 (__fastcall **)(struct System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *, _QWORD))v23)(
                                                  v17,
                                                  *(_QWORD *)(v23 + 8));
    if ( (__int64)v19 >= (int)v7 )
      break;
    v25 = this->fields.progressDataList;
    if ( v25 )
    {
      v26 = v25->klass;
      if ( *(_WORD *)&v25->klass->_2.bitflags1 )
      {
        v27 = 0LL;
        v28 = &v26->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__c **)v28
                - 1) != System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__TypeInfo )
        {
          ++v27;
          v28 += 4;
          if ( v27 >= *(unsigned __int16 *)&v25->klass->_2.bitflags1 )
            goto LABEL_28;
        }
        v29 = (__int64)&v26->vtable[*v28].method;
      }
      else
      {
LABEL_28:
        v29 = sub_AEB880(
                this->fields.progressDataList,
                System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__TypeInfo,
                0LL,
                v24);
      }
      v30 = (_DWORD *)(*(__int64 (__fastcall **)(struct System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *, _QWORD, _QWORD))v29)(
                        v25,
                        (unsigned int)v19,
                        *(_QWORD *)(v29 + 8));
      v31 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B52A54(System_Collections_Generic_Dictionary_string__object__TypeInfo);
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
        v31,
        (const MethodInfo_2F1AC50 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
      if ( v30 )
      {
        LODWORD(v46.fields.Item1) = v30[4];
        v7 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v46);
        if ( v31 )
        {
          System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
            v31,
            (System_Xml_XmlQualifiedName_o *)StringLiteral_20688/*"missionTargetId"*/,
            v7,
            (const MethodInfo_2F1B7D8 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
          LODWORD(deemedTime) = v30[5];
          v32 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &deemedTime);
          System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
            v31,
            (System_Xml_XmlQualifiedName_o *)StringLiteral_20685/*"missionConditionDetailId"*/,
            v32,
            (const MethodInfo_2F1B7D8 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
          v45 = v30[6];
          v33 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v45);
          System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
            v31,
            (System_Xml_XmlQualifiedName_o *)StringLiteral_22798/*"targetId"*/,
            v33,
            (const MethodInfo_2F1B7D8 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
          v44 = v30[7];
          v34 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v44);
          System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
            v31,
            (System_Xml_XmlQualifiedName_o *)StringLiteral_18606/*"eventId"*/,
            v34,
            (const MethodInfo_2F1B7D8 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
          v43 = v30[8];
          v35 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v43);
          System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
            v31,
            (System_Xml_XmlQualifiedName_o *)StringLiteral_16361/*"addCount"*/,
            v35,
            (const MethodInfo_2F1B7D8 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
          if ( v18 )
          {
            v36 = sub_B52A44(v31, *(_QWORD *)(*(_QWORD *)v18 + 64LL));
            if ( !v36 )
            {
              v41 = sub_B52A7C();
              sub_B52A28(v41, 0LL);
            }
            if ( v19 >= v18[6] )
            {
              v42 = sub_B52A88(v36);
              sub_B52A28(v42, 0LL);
            }
            v37 = &v18[2 * v19];
            *((_QWORD *)v37 + 4) = v31;
            sub_B52920(v37 + 8);
            v17 = this->fields.progressDataList;
            ++v19;
            if ( v17 )
              continue;
          }
        }
      }
    }
    goto LABEL_36;
  }
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v38 = JsonManager__toJson((Il2CppObject *)v18, 0, 0, 0LL);
  v49.fields.Item1 = (struct System_Net_ServicePointScheduler_ConnectionGroup_o *)&v46;
  v49.fields.Item2 = (struct System_Net_WebOperation_o *)StringLiteral_21726/*"progress"*/;
  v46 = (System_ValueTuple_string__string__o)0LL;
  System_ValueTuple_ServicePointScheduler_ConnectionGroup__WebOperation____ctor(
    v49,
    (System_Net_ServicePointScheduler_ConnectionGroup_o *)v38,
    (System_Net_WebOperation_o *)Method_System_ValueTuple_string__string___ctor__,
    v39);
  System_Collections_Generic_List_ValueTuple_string__string____Add(
    v3,
    v46,
    (const MethodInfo_2FA2410 *)Method_System_Collections_Generic_List_ValueTuple_string__string___Add__);
  return v3;
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