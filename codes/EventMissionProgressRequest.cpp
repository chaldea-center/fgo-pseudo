void __fastcall EventMissionProgressRequest___ctor(EventMissionProgressRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall EventMissionProgressRequest__beginRequest(
        EventMissionProgressRequest_o *this,
        EventMissionProgressRequest_Argument_o *arg,
        const MethodInfo *method)
{
  __int64 v3; // x3
  RequestBase_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  __int128 v15; // [xsp+0h] [xbp-40h] BYREF
  __int128 v16; // [xsp+10h] [xbp-30h]

  v5 = (RequestBase_o *)this;
  if ( (byte_42E9067 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ValueTuple_string__string___Dispose__,
      (_DWORD)arg,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_string__string___MoveNext__, v6, v7, v8);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ValueTuple_string__string___get_Current__,
      v9,
      v10,
      v11);
    this = (EventMissionProgressRequest_o *)sub_B5D5C4(
                                              &Method_System_Collections_Generic_List_ValueTuple_string__string___GetEnumerator__,
                                              v12,
                                              v13,
                                              v14);
    byte_42E9067 = 1;
  }
  v15 = 0u;
  v16 = 0u;
  if ( !arg
    || (this = (EventMissionProgressRequest_o *)EventMissionProgressRequest_Argument__ConvertToJsonFieldAndStringList(
                                                  arg,
                                                  0LL)) == 0LL )
  {
    sub_B5D69C(this, arg);
  }
  System_Collections_Generic_List_ValueTuple_string__string____GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    (System_Collections_Generic_List_ValueTuple_string__string___o *)this,
    (const MethodInfo_2FC4324 *)Method_System_Collections_Generic_List_ValueTuple_string__string___GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_ValueTuple_string__string____MoveNext(
            (System_Collections_Generic_List_Enumerator_T__o *)&v15,
            (const MethodInfo_20197A4 *)Method_System_Collections_Generic_List_Enumerator_ValueTuple_string__string___MoveNext__) )
    RequestBase__addField_32362260(v5, (System_String_o *)v16, *((System_String_o **)&v16 + 1), 0LL);
  System_Collections_Generic_List_Enumerator_ValueTuple_string__string____Dispose(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    (const MethodInfo_20197A0 *)Method_System_Collections_Generic_List_Enumerator_ValueTuple_string__string___Dispose__);
  RequestBase__beginRequest(v5, 0LL);
}


System_String_o *__fastcall EventMissionProgressRequest__getURL(
        EventMissionProgressRequest_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  System_String_o *BaseUrl; // x0

  if ( (byte_42E9066 & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_18704/*"eventMission/progress"*/, v4, v5, v6);
    byte_42E9066 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44577788(BaseUrl, (System_String_o *)StringLiteral_18704/*"eventMission/progress"*/, 0LL);
}


void __fastcall EventMissionProgressRequest_Argument___ctor(
        EventMissionProgressRequest_Argument_o *this,
        int64_t deemedTime,
        System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *progressDataList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x20
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3

  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)progressDataList;
  if ( (byte_42E656F & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___ctor__,
      deemedTime,
      (_DWORD)progressDataList,
      method);
    sub_B5D5C4(&System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__TypeInfo, v7, v8, v9);
    byte_42E656F = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.deemedTime = deemedTime;
  if ( !v4 )
  {
    v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v4,
      (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___ctor__);
  }
  this->fields.progressDataList = (struct System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *)v4;
  sub_B5D560(&this->fields.progressDataList);
}


System_Collections_Generic_List_ValueTuple_string__string___o *__fastcall EventMissionProgressRequest_Argument__ConvertToJsonFieldAndStringList(
        EventMissionProgressRequest_Argument_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  System_Collections_Generic_List_ValueTuple_string__string___o *v62; // x20
  Il2CppObject *v63; // x21
  System_String_o *v64; // x2
  const MethodInfo_2BEAADC *v65; // x4
  System_Xml_Schema_XmlSchemaObject_o *v66; // x0
  __int64 v67; // x1
  __int64 v68; // x3
  struct System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *progressDataList; // x21
  System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__c *klass; // x8
  unsigned __int64 v71; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  unsigned int v74; // w0
  __int64 v75; // x3
  struct System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *v76; // x23
  unsigned int *v77; // x21
  unsigned __int64 v78; // x22
  System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__c *v79; // x8
  unsigned __int64 v80; // x10
  int32_t *v81; // x11
  __int64 v82; // x0
  __int64 v83; // x3
  struct System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *v84; // x23
  System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__c *v85; // x8
  unsigned __int64 v86; // x10
  int32_t *v87; // x11
  __int64 v88; // x0
  _DWORD *v89; // x24
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v90; // x23
  System_Xml_Schema_XmlSchemaObject_o *v91; // x0
  System_Xml_Schema_XmlSchemaObject_o *v92; // x0
  System_Xml_Schema_XmlSchemaObject_o *v93; // x0
  System_Xml_Schema_XmlSchemaObject_o *v94; // x0
  __int64 v95; // x0
  unsigned int *v96; // x0
  System_String_o *v97; // x2
  const MethodInfo_2BEAADC *v98; // x4
  __int64 v100; // x0
  __int64 v101; // x0
  int v102; // [xsp+Ch] [xbp-74h] BYREF
  int v103; // [xsp+10h] [xbp-70h] BYREF
  int v104; // [xsp+14h] [xbp-6Ch] BYREF
  System_ValueTuple_string__string__o v105; // [xsp+18h] [xbp-68h] BYREF
  int64_t deemedTime; // [xsp+28h] [xbp-58h] BYREF
  System_ValueTuple_ServicePointScheduler_ConnectionGroup__WebOperation__o v107; // 0:x0.16
  System_ValueTuple_ServicePointScheduler_ConnectionGroup__WebOperation__o v108; // 0:x0.16

  if ( (byte_42E6570 & 1) == 0 )
  {
    sub_B5D5C4(&System_Collections_Generic_Dictionary_string__object____TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object___ctor__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__, v8, v9, v10);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v11, v12, v13);
    sub_B5D5C4(
      &System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__TypeInfo,
      v14,
      v15,
      v16);
    sub_B5D5C4(
      &System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__TypeInfo,
      v17,
      v18,
      v19);
    sub_B5D5C4(&int_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&long_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&JsonManager_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ValueTuple_string__string___Add__, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ValueTuple_string__string____ctor__, v32, v33, v34);
    sub_B5D5C4(&System_Collections_Generic_List_ValueTuple_string__string___TypeInfo, v35, v36, v37);
    sub_B5D5C4(&Method_System_ValueTuple_string__string___ctor__, v38, v39, v40);
    sub_B5D5C4(&StringLiteral_20790/*"missionConditionDetailId"*/, v41, v42, v43);
    sub_B5D5C4(&StringLiteral_18701/*"eventId"*/, v44, v45, v46);
    sub_B5D5C4(&StringLiteral_18154/*"deemedTime"*/, v47, v48, v49);
    sub_B5D5C4(&StringLiteral_22913/*"targetId"*/, v50, v51, v52);
    sub_B5D5C4(&StringLiteral_20793/*"missionTargetId"*/, v53, v54, v55);
    sub_B5D5C4(&StringLiteral_21839/*"progress"*/, v56, v57, v58);
    sub_B5D5C4(&StringLiteral_16446/*"addCount"*/, v59, v60, v61);
    byte_42E6570 = 1;
  }
  v62 = (System_Collections_Generic_List_ValueTuple_string__string___o *)sub_B5D694(System_Collections_Generic_List_ValueTuple_string__string___TypeInfo);
  System_Collections_Generic_List_ValueTuple_string__string_____ctor(
    v62,
    (const MethodInfo_2FC26C4 *)Method_System_Collections_Generic_List_ValueTuple_string__string____ctor__);
  deemedTime = this->fields.deemedTime;
  v63 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &deemedTime);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v64 = JsonManager__toJson(v63, 0, 0, 0LL);
  v107.fields.Item1 = (struct System_Net_ServicePointScheduler_ConnectionGroup_o *)&v105;
  v107.fields.Item2 = (struct System_Net_WebOperation_o *)StringLiteral_18154/*"deemedTime"*/;
  v105.fields.Item1 = 0LL;
  v105.fields.Item2 = 0LL;
  System_ValueTuple_ServicePointScheduler_ConnectionGroup__WebOperation____ctor(
    v107,
    (System_Net_ServicePointScheduler_ConnectionGroup_o *)v64,
    (System_Net_WebOperation_o *)Method_System_ValueTuple_string__string___ctor__,
    v65);
  if ( !v62 )
    goto LABEL_36;
  System_Collections_Generic_List_ValueTuple_string__string____Add(
    v62,
    v105,
    (const MethodInfo_2FC3454 *)Method_System_Collections_Generic_List_ValueTuple_string__string___Add__);
  progressDataList = this->fields.progressDataList;
  if ( !progressDataList )
    goto LABEL_36;
  klass = progressDataList->klass;
  if ( *(_WORD *)&progressDataList->klass->_2.bitflags1 )
  {
    v71 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__c **)p_offset
            - 1) != System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__TypeInfo )
    {
      ++v71;
      p_offset += 4;
      if ( v71 >= *(unsigned __int16 *)&progressDataList->klass->_2.bitflags1 )
        goto LABEL_12;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_12:
    p_method = sub_AF54C0(
                 progressDataList,
                 System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__TypeInfo,
                 0LL,
                 v68);
  }
  v74 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *, _QWORD))p_method)(
          progressDataList,
          *(_QWORD *)(p_method + 8));
  v66 = (System_Xml_Schema_XmlSchemaObject_o *)sub_B5D5DC(
                                                 System_Collections_Generic_Dictionary_string__object____TypeInfo,
                                                 v74);
  v76 = this->fields.progressDataList;
  if ( !v76 )
LABEL_36:
    sub_B5D69C(v66, v67);
  v77 = (unsigned int *)v66;
  v78 = 0LL;
  while ( 1 )
  {
    v79 = v76->klass;
    if ( *(_WORD *)&v76->klass->_2.bitflags1 )
    {
      v80 = 0LL;
      v81 = &v79->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__c **)v81
              - 1) != System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__TypeInfo )
      {
        ++v80;
        v81 += 4;
        if ( v80 >= *(unsigned __int16 *)&v76->klass->_2.bitflags1 )
          goto LABEL_20;
      }
      v82 = (__int64)&v79->vtable[*v81].method;
    }
    else
    {
LABEL_20:
      v82 = sub_AF54C0(
              v76,
              System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__TypeInfo,
              0LL,
              v75);
    }
    v66 = (System_Xml_Schema_XmlSchemaObject_o *)(*(__int64 (__fastcall **)(struct System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *, _QWORD))v82)(
                                                   v76,
                                                   *(_QWORD *)(v82 + 8));
    if ( (__int64)v78 >= (int)v66 )
      break;
    v84 = this->fields.progressDataList;
    if ( v84 )
    {
      v85 = v84->klass;
      if ( *(_WORD *)&v84->klass->_2.bitflags1 )
      {
        v86 = 0LL;
        v87 = &v85->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__c **)v87
                - 1) != System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__TypeInfo )
        {
          ++v86;
          v87 += 4;
          if ( v86 >= *(unsigned __int16 *)&v84->klass->_2.bitflags1 )
            goto LABEL_28;
        }
        v88 = (__int64)&v85->vtable[*v87].method;
      }
      else
      {
LABEL_28:
        v88 = sub_AF54C0(
                this->fields.progressDataList,
                System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__TypeInfo,
                0LL,
                v83);
      }
      v89 = (_DWORD *)(*(__int64 (__fastcall **)(struct System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *, _QWORD, _QWORD))v88)(
                        v84,
                        (unsigned int)v78,
                        *(_QWORD *)(v88 + 8));
      v90 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B5D694(System_Collections_Generic_Dictionary_string__object__TypeInfo);
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
        v90,
        (const MethodInfo_2F2600C *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
      if ( v89 )
      {
        LODWORD(v105.fields.Item1) = v89[4];
        v66 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v105);
        if ( v90 )
        {
          System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
            v90,
            (System_Xml_XmlQualifiedName_o *)StringLiteral_20793/*"missionTargetId"*/,
            v66,
            (const MethodInfo_2F26B94 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
          LODWORD(deemedTime) = v89[5];
          v91 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &deemedTime);
          System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
            v90,
            (System_Xml_XmlQualifiedName_o *)StringLiteral_20790/*"missionConditionDetailId"*/,
            v91,
            (const MethodInfo_2F26B94 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
          v104 = v89[6];
          v92 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v104);
          System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
            v90,
            (System_Xml_XmlQualifiedName_o *)StringLiteral_22913/*"targetId"*/,
            v92,
            (const MethodInfo_2F26B94 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
          v103 = v89[7];
          v93 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v103);
          System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
            v90,
            (System_Xml_XmlQualifiedName_o *)StringLiteral_18701/*"eventId"*/,
            v93,
            (const MethodInfo_2F26B94 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
          v102 = v89[8];
          v94 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v102);
          System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
            v90,
            (System_Xml_XmlQualifiedName_o *)StringLiteral_16446/*"addCount"*/,
            v94,
            (const MethodInfo_2F26B94 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
          if ( v77 )
          {
            v95 = sub_B5D684(v90, *(_QWORD *)(*(_QWORD *)v77 + 64LL));
            if ( !v95 )
            {
              v100 = sub_B5D6BC();
              sub_B5D668(v100, 0LL);
            }
            if ( v78 >= v77[6] )
            {
              v101 = sub_B5D6C8(v95);
              sub_B5D668(v101, 0LL);
            }
            v96 = &v77[2 * v78];
            *((_QWORD *)v96 + 4) = v90;
            sub_B5D560(v96 + 8);
            v76 = this->fields.progressDataList;
            ++v78;
            if ( v76 )
              continue;
          }
        }
      }
    }
    goto LABEL_36;
  }
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v97 = JsonManager__toJson((Il2CppObject *)v77, 0, 0, 0LL);
  v108.fields.Item1 = (struct System_Net_ServicePointScheduler_ConnectionGroup_o *)&v105;
  v108.fields.Item2 = (struct System_Net_WebOperation_o *)StringLiteral_21839/*"progress"*/;
  v105 = (System_ValueTuple_string__string__o)0LL;
  System_ValueTuple_ServicePointScheduler_ConnectionGroup__WebOperation____ctor(
    v108,
    (System_Net_ServicePointScheduler_ConnectionGroup_o *)v97,
    (System_Net_WebOperation_o *)Method_System_ValueTuple_string__string___ctor__,
    v98);
  System_Collections_Generic_List_ValueTuple_string__string____Add(
    v62,
    v105,
    (const MethodInfo_2FC3454 *)Method_System_Collections_Generic_List_ValueTuple_string__string___Add__);
  return v62;
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