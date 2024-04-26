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
  if ( (byte_4351E48 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_string__string___Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_string__string___MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_string__string___get_Current__);
    this = (EventMissionProgressRequest_o *)sub_B70694(&Method_System_Collections_Generic_List_ValueTuple_string__string___GetEnumerator__);
    byte_4351E48 = 1;
  }
  v5 = 0u;
  v6 = 0u;
  if ( !arg
    || (this = (EventMissionProgressRequest_o *)EventMissionProgressRequest_Argument__ConvertToJsonFieldAndStringList(
                                                  arg,
                                                  0LL)) == 0LL )
  {
    sub_B7076C(this, arg);
  }
  System_Collections_Generic_List_ValueTuple_string__string____GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v5,
    (System_Collections_Generic_List_ValueTuple_string__string___o *)this,
    (const MethodInfo_3049EFC *)Method_System_Collections_Generic_List_ValueTuple_string__string___GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_ValueTuple_string__string____MoveNext(
            (System_Collections_Generic_List_Enumerator_T__o *)&v5,
            (const MethodInfo_19F1254 *)Method_System_Collections_Generic_List_Enumerator_ValueTuple_string__string___MoveNext__) )
    RequestBase__addField_32336576(v4, (System_String_o *)v6, *((System_String_o **)&v6 + 1), 0LL);
  System_Collections_Generic_List_Enumerator_ValueTuple_string__string____Dispose(
    (System_Collections_Generic_List_Enumerator_T__o *)&v5,
    (const MethodInfo_19F1250 *)Method_System_Collections_Generic_List_Enumerator_ValueTuple_string__string___Dispose__);
  RequestBase__beginRequest(v4, 0LL);
}


System_String_o *__fastcall EventMissionProgressRequest__getURL(
        EventMissionProgressRequest_o *this,
        const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4351E47 & 1) == 0 )
  {
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&StringLiteral_18754/*"eventMission/progress"*/);
    byte_4351E47 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44758168(BaseUrl, (System_String_o *)StringLiteral_18754/*"eventMission/progress"*/, 0LL);
}


void __fastcall EventMissionProgressRequest_Argument___ctor(
        EventMissionProgressRequest_Argument_o *this,
        int64_t deemedTime,
        System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *progressDataList,
        const MethodInfo *method)
{
  if ( (byte_434EA07 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___ctor__);
    sub_B70694(&System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__TypeInfo);
    byte_434EA07 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.deemedTime = deemedTime;
  if ( !progressDataList )
  {
    progressDataList = (System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)progressDataList,
      (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___ctor__);
  }
  this->fields.progressDataList = progressDataList;
  sub_B70630(&this->fields.progressDataList);
}


System_Collections_Generic_List_ValueTuple_string__string___o *__fastcall EventMissionProgressRequest_Argument__ConvertToJsonFieldAndStringList(
        EventMissionProgressRequest_Argument_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_ValueTuple_string__string___o *v3; // x20
  __int64 v4; // x2
  Il2CppObject *v5; // x21
  System_String_o *v6; // x2
  const MethodInfo_267A8F0 *v7; // x4
  System_Xml_Schema_XmlSchemaObject_o *v8; // x0
  __int64 v9; // x1
  struct System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *progressDataList; // x21
  System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__c *klass; // x8
  unsigned __int64 v12; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  unsigned int v15; // w0
  struct System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x23
  unsigned int *v17; // x21
  unsigned __int64 v18; // x22
  System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__c *v19; // x8
  unsigned __int64 v20; // x10
  int32_t *v21; // x11
  __int64 v22; // x0
  struct System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *v23; // x23
  System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__c *v24; // x8
  unsigned __int64 v25; // x10
  int32_t *v26; // x11
  __int64 v27; // x0
  _DWORD *v28; // x24
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v29; // x23
  __int64 v30; // x2
  __int64 v31; // x2
  System_Xml_Schema_XmlSchemaObject_o *v32; // x0
  __int64 v33; // x2
  System_Xml_Schema_XmlSchemaObject_o *v34; // x0
  __int64 v35; // x2
  System_Xml_Schema_XmlSchemaObject_o *v36; // x0
  __int64 v37; // x2
  System_Xml_Schema_XmlSchemaObject_o *v38; // x0
  __int64 v39; // x0
  unsigned int *v40; // x0
  System_String_o *v41; // x2
  const MethodInfo_267A8F0 *v42; // x4
  __int64 v44; // x0
  __int64 v45; // x0
  int v46; // [xsp+Ch] [xbp-74h] BYREF
  int v47; // [xsp+10h] [xbp-70h] BYREF
  int v48; // [xsp+14h] [xbp-6Ch] BYREF
  System_ValueTuple_string__string__o v49; // [xsp+18h] [xbp-68h] BYREF
  int64_t deemedTime; // [xsp+28h] [xbp-58h] BYREF
  System_ValueTuple_ServicePointScheduler_ConnectionGroup__WebOperation__o v51; // 0:x0.16
  System_ValueTuple_ServicePointScheduler_ConnectionGroup__WebOperation__o v52; // 0:x0.16

  if ( (byte_434EA08 & 1) == 0 )
  {
    sub_B70694(&System_Collections_Generic_Dictionary_string__object____TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    sub_B70694(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_B70694(&System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__TypeInfo);
    sub_B70694(&System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__TypeInfo);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&long_TypeInfo);
    sub_B70694(&JsonManager_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_ValueTuple_string__string___Add__);
    sub_B70694(&Method_System_Collections_Generic_List_ValueTuple_string__string____ctor__);
    sub_B70694(&System_Collections_Generic_List_ValueTuple_string__string___TypeInfo);
    sub_B70694(&Method_System_ValueTuple_string__string___ctor__);
    sub_B70694(&StringLiteral_20850/*"missionConditionDetailId"*/);
    sub_B70694(&StringLiteral_18751/*"eventId"*/);
    sub_B70694(&StringLiteral_18201/*"deemedTime"*/);
    sub_B70694(&StringLiteral_22984/*"targetId"*/);
    sub_B70694(&StringLiteral_20853/*"missionTargetId"*/);
    sub_B70694(&StringLiteral_21905/*"progress"*/);
    sub_B70694(&StringLiteral_16490/*"addCount"*/);
    byte_434EA08 = 1;
  }
  v3 = (System_Collections_Generic_List_ValueTuple_string__string___o *)sub_B70764(System_Collections_Generic_List_ValueTuple_string__string___TypeInfo);
  System_Collections_Generic_List_ValueTuple_string__string_____ctor(
    v3,
    (const MethodInfo_304829C *)Method_System_Collections_Generic_List_ValueTuple_string__string____ctor__);
  deemedTime = this->fields.deemedTime;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &deemedTime, v4);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v6 = JsonManager__toJson(v5, 0, 0, 0LL);
  v51.fields.Item1 = (struct System_Net_ServicePointScheduler_ConnectionGroup_o *)&v49;
  v51.fields.Item2 = (struct System_Net_WebOperation_o *)StringLiteral_18201/*"deemedTime"*/;
  v49.fields.Item1 = 0LL;
  v49.fields.Item2 = 0LL;
  System_ValueTuple_ServicePointScheduler_ConnectionGroup__WebOperation____ctor(
    v51,
    (System_Net_ServicePointScheduler_ConnectionGroup_o *)v6,
    (System_Net_WebOperation_o *)Method_System_ValueTuple_string__string___ctor__,
    v7);
  if ( !v3 )
    goto LABEL_36;
  System_Collections_Generic_List_ValueTuple_string__string____Add(
    v3,
    v49,
    (const MethodInfo_304902C *)Method_System_Collections_Generic_List_ValueTuple_string__string___Add__);
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
    p_method = sub_B08590(
                 progressDataList,
                 System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__TypeInfo,
                 0LL);
  }
  v15 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *, _QWORD))p_method)(
          progressDataList,
          *(_QWORD *)(p_method + 8));
  v8 = (System_Xml_Schema_XmlSchemaObject_o *)sub_B706AC(
                                                System_Collections_Generic_Dictionary_string__object____TypeInfo,
                                                v15);
  v16 = this->fields.progressDataList;
  if ( !v16 )
LABEL_36:
    sub_B7076C(v8, v9);
  v17 = (unsigned int *)v8;
  v18 = 0LL;
  while ( 1 )
  {
    v19 = v16->klass;
    if ( *(_WORD *)&v16->klass->_2.bitflags1 )
    {
      v20 = 0LL;
      v21 = &v19->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__c **)v21
              - 1) != System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__TypeInfo )
      {
        ++v20;
        v21 += 4;
        if ( v20 >= *(unsigned __int16 *)&v16->klass->_2.bitflags1 )
          goto LABEL_20;
      }
      v22 = (__int64)&v19->vtable[*v21].method;
    }
    else
    {
LABEL_20:
      v22 = sub_B08590(
              v16,
              System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__TypeInfo,
              0LL);
    }
    v8 = (System_Xml_Schema_XmlSchemaObject_o *)(*(__int64 (__fastcall **)(struct System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *, _QWORD))v22)(
                                                  v16,
                                                  *(_QWORD *)(v22 + 8));
    if ( (__int64)v18 >= (int)v8 )
      break;
    v23 = this->fields.progressDataList;
    if ( v23 )
    {
      v24 = v23->klass;
      if ( *(_WORD *)&v23->klass->_2.bitflags1 )
      {
        v25 = 0LL;
        v26 = &v24->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__c **)v26
                - 1) != System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__TypeInfo )
        {
          ++v25;
          v26 += 4;
          if ( v25 >= *(unsigned __int16 *)&v23->klass->_2.bitflags1 )
            goto LABEL_28;
        }
        v27 = (__int64)&v24->vtable[*v26].method;
      }
      else
      {
LABEL_28:
        v27 = sub_B08590(
                this->fields.progressDataList,
                System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__TypeInfo,
                0LL);
      }
      v28 = (_DWORD *)(*(__int64 (__fastcall **)(struct System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *, _QWORD, _QWORD))v27)(
                        v23,
                        (unsigned int)v18,
                        *(_QWORD *)(v27 + 8));
      v29 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B70764(System_Collections_Generic_Dictionary_string__object__TypeInfo);
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
        v29,
        (const MethodInfo_2F4EE38 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
      if ( v28 )
      {
        LODWORD(v49.fields.Item1) = v28[4];
        v8 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v49, v30);
        if ( v29 )
        {
          System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
            v29,
            (System_Xml_XmlQualifiedName_o *)StringLiteral_20853/*"missionTargetId"*/,
            v8,
            (const MethodInfo_2F4F9C0 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
          LODWORD(deemedTime) = v28[5];
          v32 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &deemedTime, v31);
          System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
            v29,
            (System_Xml_XmlQualifiedName_o *)StringLiteral_20850/*"missionConditionDetailId"*/,
            v32,
            (const MethodInfo_2F4F9C0 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
          v48 = v28[6];
          v34 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v48, v33);
          System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
            v29,
            (System_Xml_XmlQualifiedName_o *)StringLiteral_22984/*"targetId"*/,
            v34,
            (const MethodInfo_2F4F9C0 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
          v47 = v28[7];
          v36 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v47, v35);
          System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
            v29,
            (System_Xml_XmlQualifiedName_o *)StringLiteral_18751/*"eventId"*/,
            v36,
            (const MethodInfo_2F4F9C0 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
          v46 = v28[8];
          v38 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v46, v37);
          System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
            v29,
            (System_Xml_XmlQualifiedName_o *)StringLiteral_16490/*"addCount"*/,
            v38,
            (const MethodInfo_2F4F9C0 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
          if ( v17 )
          {
            v39 = sub_B70754(v29, *(_QWORD *)(*(_QWORD *)v17 + 64LL));
            if ( !v39 )
            {
              v44 = sub_B7078C();
              sub_B70738(v44, 0LL);
            }
            if ( v18 >= v17[6] )
            {
              v45 = sub_B70798(v39);
              sub_B70738(v45, 0LL);
            }
            v40 = &v17[2 * v18];
            *((_QWORD *)v40 + 4) = v29;
            sub_B70630(v40 + 8);
            v16 = this->fields.progressDataList;
            ++v18;
            if ( v16 )
              continue;
          }
        }
      }
    }
    goto LABEL_36;
  }
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v41 = JsonManager__toJson((Il2CppObject *)v17, 0, 0, 0LL);
  v52.fields.Item1 = (struct System_Net_ServicePointScheduler_ConnectionGroup_o *)&v49;
  v52.fields.Item2 = (struct System_Net_WebOperation_o *)StringLiteral_21905/*"progress"*/;
  v49 = (System_ValueTuple_string__string__o)0LL;
  System_ValueTuple_ServicePointScheduler_ConnectionGroup__WebOperation____ctor(
    v52,
    (System_Net_ServicePointScheduler_ConnectionGroup_o *)v41,
    (System_Net_WebOperation_o *)Method_System_ValueTuple_string__string___ctor__,
    v42);
  System_Collections_Generic_List_ValueTuple_string__string____Add(
    v3,
    v49,
    (const MethodInfo_304902C *)Method_System_Collections_Generic_List_ValueTuple_string__string___Add__);
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