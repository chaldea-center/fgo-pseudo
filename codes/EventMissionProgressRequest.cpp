void __fastcall EventMissionProgressRequest___ctor(EventMissionProgressRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall EventMissionProgressRequest__beginRequest(
        EventMissionProgressRequest_o *this,
        EventMissionProgressRequest_Argument_o *arg,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_ValueTuple_string__string___o *v8; // x0
  __int128 v9; // [xsp+0h] [xbp-40h] BYREF
  __int128 v10; // [xsp+10h] [xbp-30h]

  if ( (byte_40FABD2 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_string__string___Dispose__, arg);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_string__string___MoveNext__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_string__string___get_Current__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_ValueTuple_string__string___GetEnumerator__, v7);
    byte_40FABD2 = 1;
  }
  v9 = 0u;
  v10 = 0u;
  if ( !arg || (v8 = EventMissionProgressRequest_Argument__ConvertToJsonFieldAndStringList(arg, 0LL)) == 0LL )
    sub_B170D4();
  System_Collections_Generic_List_ValueTuple_string__string____GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    v8,
    (const MethodInfo_2EA7400 *)Method_System_Collections_Generic_List_ValueTuple_string__string___GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_ValueTuple_string__string____MoveNext(
            (System_Collections_Generic_List_Enumerator_T__o *)&v9,
            (const MethodInfo_14CC698 *)Method_System_Collections_Generic_List_Enumerator_ValueTuple_string__string___MoveNext__) )
    RequestBase__addField_30957164((RequestBase_o *)this, (System_String_o *)v10, *((System_String_o **)&v10 + 1), 0LL);
  System_Collections_Generic_List_Enumerator_ValueTuple_string__string____Dispose(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    (const MethodInfo_14CC694 *)Method_System_Collections_Generic_List_Enumerator_ValueTuple_string__string___Dispose__);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall EventMissionProgressRequest__getURL(
        EventMissionProgressRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_40FABD1 & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_18406, v2);
    byte_40FABD1 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_43743732(BaseUrl, (System_String_o *)StringLiteral_18406, 0LL);
}


void __fastcall EventMissionProgressRequest_Argument___ctor(
        EventMissionProgressRequest_Argument_o *this,
        int64_t deemedTime,
        System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *progressDataList,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_40F7001 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___ctor__,
      deemedTime);
    sub_B16FFC(&System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__TypeInfo, v7);
    byte_40F7001 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.deemedTime = deemedTime;
  if ( !progressDataList )
  {
    progressDataList = (System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__TypeInfo, v8, v9, v10, v11);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)progressDataList,
      (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___ctor__);
  }
  this->fields.progressDataList = progressDataList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.progressDataList,
    (System_Int32_array **)progressDataList,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
}


System_Collections_Generic_List_ValueTuple_string__string___o *__fastcall EventMissionProgressRequest_Argument__ConvertToJsonFieldAndStringList(
        EventMissionProgressRequest_Argument_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v23; // x1
  __int64 v24; // x1
  System_Collections_Generic_List_ValueTuple_string__string___o *v25; // x20
  Il2CppObject *v26; // x21
  System_String_o *v27; // x2
  const MethodInfo_2AD09B0 *v28; // x4
  struct System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *progressDataList; // x21
  System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__c *klass; // x8
  unsigned __int64 v31; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  unsigned int v34; // w0
  __int64 v35; // x2
  __int64 v36; // x0
  struct System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *v37; // x23
  unsigned int *v38; // x21
  unsigned __int64 v39; // x22
  System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__c *v40; // x8
  unsigned __int64 v41; // x10
  int32_t *v42; // x11
  __int64 v43; // x0
  struct System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *v44; // x23
  System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__c *v45; // x8
  unsigned __int64 v46; // x10
  int32_t *v47; // x11
  __int64 v48; // x0
  _DWORD *v49; // x24
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v54; // x23
  System_Xml_Schema_XmlSchemaObject_o *v55; // x0
  System_Xml_Schema_XmlSchemaObject_o *v56; // x0
  System_Xml_Schema_XmlSchemaObject_o *v57; // x0
  System_Xml_Schema_XmlSchemaObject_o *v58; // x0
  System_Xml_Schema_XmlSchemaObject_o *v59; // x0
  __int64 v60; // x0
  __int64 v61; // x1
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  unsigned int *v68; // x0
  System_String_o *v69; // x2
  const MethodInfo_2AD09B0 *v70; // x4
  int v72; // [xsp+Ch] [xbp-74h] BYREF
  int v73; // [xsp+10h] [xbp-70h] BYREF
  int v74; // [xsp+14h] [xbp-6Ch] BYREF
  System_ValueTuple_string__string__o v75; // [xsp+18h] [xbp-68h] BYREF
  int64_t deemedTime; // [xsp+28h] [xbp-58h] BYREF
  System_ValueTuple_ServicePointScheduler_ConnectionGroup__WebOperation__o v77; // 0:x0.16
  System_ValueTuple_ServicePointScheduler_ConnectionGroup__WebOperation__o v78; // 0:x0.16

  if ( (byte_40F7002 & 1) == 0 )
  {
    sub_B16FFC(&System_Collections_Generic_Dictionary_string__object____TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object___ctor__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__, v7);
    sub_B16FFC(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v8);
    sub_B16FFC(
      &System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__TypeInfo,
      v9);
    sub_B16FFC(
      &System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__TypeInfo,
      v10);
    sub_B16FFC(&int_TypeInfo, v11);
    sub_B16FFC(&long_TypeInfo, v12);
    sub_B16FFC(&JsonManager_TypeInfo, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_ValueTuple_string__string___Add__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_ValueTuple_string__string____ctor__, v15);
    sub_B16FFC(&System_Collections_Generic_List_ValueTuple_string__string___TypeInfo, v16);
    sub_B16FFC(&Method_System_ValueTuple_string__string___ctor__, v17);
    sub_B16FFC(&StringLiteral_20444, v18);
    sub_B16FFC(&StringLiteral_18403, v19);
    sub_B16FFC(&StringLiteral_17864, v20);
    sub_B16FFC(&StringLiteral_22515, v21);
    sub_B16FFC(&StringLiteral_20447, v22);
    sub_B16FFC(&StringLiteral_21457, v23);
    sub_B16FFC(&StringLiteral_16185, v24);
    byte_40F7002 = 1;
  }
  v25 = (System_Collections_Generic_List_ValueTuple_string__string___o *)sub_B170CC(
                                                                           System_Collections_Generic_List_ValueTuple_string__string___TypeInfo,
                                                                           method,
                                                                           v2,
                                                                           v3,
                                                                           v4);
  System_Collections_Generic_List_ValueTuple_string__string_____ctor(
    v25,
    (const MethodInfo_2EA57A0 *)Method_System_Collections_Generic_List_ValueTuple_string__string____ctor__);
  deemedTime = this->fields.deemedTime;
  v26 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &deemedTime);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v27 = JsonManager__toJson(v26, 0, 0, 0LL);
  v77.fields.Item1 = (struct System_Net_ServicePointScheduler_ConnectionGroup_o *)&v75;
  v77.fields.Item2 = (struct System_Net_WebOperation_o *)StringLiteral_17864;
  v75.fields.Item1 = 0LL;
  v75.fields.Item2 = 0LL;
  System_ValueTuple_ServicePointScheduler_ConnectionGroup__WebOperation____ctor(
    v77,
    (System_Net_ServicePointScheduler_ConnectionGroup_o *)v27,
    (System_Net_WebOperation_o *)Method_System_ValueTuple_string__string___ctor__,
    v28);
  if ( !v25 )
    goto LABEL_36;
  System_Collections_Generic_List_ValueTuple_string__string____Add(
    v25,
    v75,
    (const MethodInfo_2EA6530 *)Method_System_Collections_Generic_List_ValueTuple_string__string___Add__);
  progressDataList = this->fields.progressDataList;
  if ( !progressDataList )
    goto LABEL_36;
  klass = progressDataList->klass;
  if ( *(_WORD *)&progressDataList->klass->_2.bitflags1 )
  {
    v31 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__c **)p_offset
            - 1) != System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__TypeInfo )
    {
      ++v31;
      p_offset += 4;
      if ( v31 >= *(unsigned __int16 *)&progressDataList->klass->_2.bitflags1 )
        goto LABEL_12;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_12:
    p_method = sub_AAFEF8(
                 progressDataList,
                 System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__TypeInfo,
                 0LL);
  }
  v34 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *, _QWORD))p_method)(
          progressDataList,
          *(_QWORD *)(p_method + 8));
  v36 = sub_B17014(System_Collections_Generic_Dictionary_string__object____TypeInfo, v34, v35);
  v37 = this->fields.progressDataList;
  if ( !v37 )
LABEL_36:
    sub_B170D4();
  v38 = (unsigned int *)v36;
  v39 = 0LL;
  while ( 1 )
  {
    v40 = v37->klass;
    if ( *(_WORD *)&v37->klass->_2.bitflags1 )
    {
      v41 = 0LL;
      v42 = &v40->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__c **)v42
              - 1) != System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__TypeInfo )
      {
        ++v41;
        v42 += 4;
        if ( v41 >= *(unsigned __int16 *)&v37->klass->_2.bitflags1 )
          goto LABEL_20;
      }
      v43 = (__int64)&v40->vtable[*v42].method;
    }
    else
    {
LABEL_20:
      v43 = sub_AAFEF8(
              v37,
              System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__TypeInfo,
              0LL);
    }
    if ( (__int64)v39 >= (*(int (__fastcall **)(struct System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *, _QWORD))v43)(
                           v37,
                           *(_QWORD *)(v43 + 8)) )
      break;
    v44 = this->fields.progressDataList;
    if ( v44 )
    {
      v45 = v44->klass;
      if ( *(_WORD *)&v44->klass->_2.bitflags1 )
      {
        v46 = 0LL;
        v47 = &v45->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__c **)v47
                - 1) != System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__TypeInfo )
        {
          ++v46;
          v47 += 4;
          if ( v46 >= *(unsigned __int16 *)&v44->klass->_2.bitflags1 )
            goto LABEL_28;
        }
        v48 = (__int64)&v45->vtable[*v47].method;
      }
      else
      {
LABEL_28:
        v48 = sub_AAFEF8(
                this->fields.progressDataList,
                System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__TypeInfo,
                0LL);
      }
      v49 = (_DWORD *)(*(__int64 (__fastcall **)(struct System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *, _QWORD, _QWORD))v48)(
                        v44,
                        (unsigned int)v39,
                        *(_QWORD *)(v48 + 8));
      v54 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B170CC(
                                                                                            System_Collections_Generic_Dictionary_string__object__TypeInfo,
                                                                                            v50,
                                                                                            v51,
                                                                                            v52,
                                                                                            v53);
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
        v54,
        (const MethodInfo_2DA3068 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
      if ( v49 )
      {
        LODWORD(v75.fields.Item1) = v49[4];
        v55 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v75);
        if ( v54 )
        {
          System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
            v54,
            (System_Xml_XmlQualifiedName_o *)StringLiteral_20447,
            v55,
            (const MethodInfo_2DA3BF0 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
          LODWORD(deemedTime) = v49[5];
          v56 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &deemedTime);
          System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
            v54,
            (System_Xml_XmlQualifiedName_o *)StringLiteral_20444,
            v56,
            (const MethodInfo_2DA3BF0 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
          v74 = v49[6];
          v57 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v74);
          System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
            v54,
            (System_Xml_XmlQualifiedName_o *)StringLiteral_22515,
            v57,
            (const MethodInfo_2DA3BF0 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
          v73 = v49[7];
          v58 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v73);
          System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
            v54,
            (System_Xml_XmlQualifiedName_o *)StringLiteral_18403,
            v58,
            (const MethodInfo_2DA3BF0 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
          v72 = v49[8];
          v59 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v72);
          System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
            v54,
            (System_Xml_XmlQualifiedName_o *)StringLiteral_16185,
            v59,
            (const MethodInfo_2DA3BF0 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
          if ( v38 )
          {
            v60 = sub_B170BC(v54, *(_QWORD *)(*(_QWORD *)v38 + 64LL));
            if ( !v60 )
            {
              sub_B170F4(0LL);
              sub_B170A0();
            }
            if ( v39 >= v38[6] )
            {
              sub_B17100(v60, v61, v62);
              sub_B170A0();
            }
            v68 = &v38[2 * v39];
            *((_QWORD *)v68 + 4) = v54;
            sub_B16F98(
              (BattleServantConfConponent_o *)(v68 + 8),
              (System_Int32_array **)v54,
              v62,
              v63,
              v64,
              v65,
              v66,
              v67);
            v37 = this->fields.progressDataList;
            ++v39;
            if ( v37 )
              continue;
          }
        }
      }
    }
    goto LABEL_36;
  }
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v69 = JsonManager__toJson((Il2CppObject *)v38, 0, 0, 0LL);
  v78.fields.Item1 = (struct System_Net_ServicePointScheduler_ConnectionGroup_o *)&v75;
  v78.fields.Item2 = (struct System_Net_WebOperation_o *)StringLiteral_21457;
  v75 = (System_ValueTuple_string__string__o)0LL;
  System_ValueTuple_ServicePointScheduler_ConnectionGroup__WebOperation____ctor(
    v78,
    (System_Net_ServicePointScheduler_ConnectionGroup_o *)v69,
    (System_Net_WebOperation_o *)Method_System_ValueTuple_string__string___ctor__,
    v70);
  System_Collections_Generic_List_ValueTuple_string__string____Add(
    v25,
    v75,
    (const MethodInfo_2EA6530 *)Method_System_Collections_Generic_List_ValueTuple_string__string___Add__);
  return v25;
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