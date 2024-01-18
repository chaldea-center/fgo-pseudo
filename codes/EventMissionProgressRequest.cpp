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
  if ( (byte_418785C & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_string__string___Dispose__, arg);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_string__string___MoveNext__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_string__string___get_Current__, v6);
    this = (EventMissionProgressRequest_o *)sub_B2C35C(
                                              &Method_System_Collections_Generic_List_ValueTuple_string__string___GetEnumerator__,
                                              v7);
    byte_418785C = 1;
  }
  v8 = 0u;
  v9 = 0u;
  if ( !arg
    || (this = (EventMissionProgressRequest_o *)EventMissionProgressRequest_Argument__ConvertToJsonFieldAndStringList(
                                                  arg,
                                                  0LL)) == 0LL )
  {
    sub_B2C434(this, arg);
  }
  System_Collections_Generic_List_ValueTuple_string__string____GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    (System_Collections_Generic_List_ValueTuple_string__string___o *)this,
    (const MethodInfo_2DF074C *)Method_System_Collections_Generic_List_ValueTuple_string__string___GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_ValueTuple_string__string____MoveNext(
            (System_Collections_Generic_List_Enumerator_T__o *)&v8,
            (const MethodInfo_20E4E74 *)Method_System_Collections_Generic_List_Enumerator_ValueTuple_string__string___MoveNext__) )
    RequestBase__addField_31051928(v4, (System_String_o *)v9, *((System_String_o **)&v9 + 1), 0LL);
  System_Collections_Generic_List_Enumerator_ValueTuple_string__string____Dispose(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    (const MethodInfo_20E4E70 *)Method_System_Collections_Generic_List_Enumerator_ValueTuple_string__string___Dispose__);
  RequestBase__beginRequest(v4, 0LL);
}


System_String_o *__fastcall EventMissionProgressRequest__getURL(
        EventMissionProgressRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_418785B & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_18475/*"eventMission/progress"*/, v2);
    byte_418785B = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44305532(BaseUrl, (System_String_o *)StringLiteral_18475/*"eventMission/progress"*/, 0LL);
}


void __fastcall EventMissionProgressRequest_Argument___ctor(
        EventMissionProgressRequest_Argument_o *this,
        int64_t deemedTime,
        System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *progressDataList,
        const MethodInfo *method)
{
  __int64 v7; // x1

  if ( (byte_4184B34 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___ctor__,
      deemedTime);
    sub_B2C35C(&System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__TypeInfo, v7);
    byte_4184B34 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.deemedTime = deemedTime;
  if ( !progressDataList )
  {
    progressDataList = (System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)progressDataList,
      (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___ctor__);
  }
  this->fields.progressDataList = progressDataList;
  sub_B2C2F8(&this->fields.progressDataList, progressDataList);
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
  System_Collections_Generic_List_ValueTuple_string__string___o *v22; // x20
  Il2CppObject *v23; // x21
  System_String_o *v24; // x2
  const MethodInfo_29D7854 *v25; // x4
  System_Xml_Schema_XmlSchemaObject_o *v26; // x0
  __int64 v27; // x1
  __int64 v28; // x3
  struct System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *progressDataList; // x21
  System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__c *klass; // x8
  unsigned __int64 v31; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  unsigned int v34; // w0
  __int64 v35; // x3
  struct System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *v36; // x23
  unsigned int *v37; // x21
  unsigned __int64 v38; // x22
  System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__c *v39; // x8
  unsigned __int64 v40; // x10
  int32_t *v41; // x11
  __int64 v42; // x0
  __int64 v43; // x3
  struct System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *v44; // x23
  System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__c *v45; // x8
  unsigned __int64 v46; // x10
  int32_t *v47; // x11
  __int64 v48; // x0
  _DWORD *v49; // x24
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v50; // x23
  System_Xml_Schema_XmlSchemaObject_o *v51; // x0
  System_Xml_Schema_XmlSchemaObject_o *v52; // x0
  System_Xml_Schema_XmlSchemaObject_o *v53; // x0
  System_Xml_Schema_XmlSchemaObject_o *v54; // x0
  __int64 v55; // x0
  unsigned int *v56; // x0
  System_String_o *v57; // x2
  const MethodInfo_29D7854 *v58; // x4
  __int64 v60; // x0
  __int64 v61; // x0
  int v62; // [xsp+Ch] [xbp-74h] BYREF
  int v63; // [xsp+10h] [xbp-70h] BYREF
  int v64; // [xsp+14h] [xbp-6Ch] BYREF
  System_ValueTuple_string__string__o v65; // [xsp+18h] [xbp-68h] BYREF
  int64_t deemedTime; // [xsp+28h] [xbp-58h] BYREF
  System_ValueTuple_ServicePointScheduler_ConnectionGroup__WebOperation__o v67; // 0:x0.16
  System_ValueTuple_ServicePointScheduler_ConnectionGroup__WebOperation__o v68; // 0:x0.16

  if ( (byte_4184B35 & 1) == 0 )
  {
    sub_B2C35C(&System_Collections_Generic_Dictionary_string__object____TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object___ctor__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__, v4);
    sub_B2C35C(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v5);
    sub_B2C35C(
      &System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__TypeInfo,
      v6);
    sub_B2C35C(
      &System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__TypeInfo,
      v7);
    sub_B2C35C(&int_TypeInfo, v8);
    sub_B2C35C(&long_TypeInfo, v9);
    sub_B2C35C(&JsonManager_TypeInfo, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_ValueTuple_string__string___Add__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_ValueTuple_string__string____ctor__, v12);
    sub_B2C35C(&System_Collections_Generic_List_ValueTuple_string__string___TypeInfo, v13);
    sub_B2C35C(&Method_System_ValueTuple_string__string___ctor__, v14);
    sub_B2C35C(&StringLiteral_20527/*"missionConditionDetailId"*/, v15);
    sub_B2C35C(&StringLiteral_18472/*"eventId"*/, v16);
    sub_B2C35C(&StringLiteral_17932/*"deemedTime"*/, v17);
    sub_B2C35C(&StringLiteral_22608/*"targetId"*/, v18);
    sub_B2C35C(&StringLiteral_20530/*"missionTargetId"*/, v19);
    sub_B2C35C(&StringLiteral_21549/*"progress"*/, v20);
    sub_B2C35C(&StringLiteral_16250/*"addCount"*/, v21);
    byte_4184B35 = 1;
  }
  v22 = (System_Collections_Generic_List_ValueTuple_string__string___o *)sub_B2C42C(System_Collections_Generic_List_ValueTuple_string__string___TypeInfo);
  System_Collections_Generic_List_ValueTuple_string__string_____ctor(
    v22,
    (const MethodInfo_2DEEAEC *)Method_System_Collections_Generic_List_ValueTuple_string__string____ctor__);
  deemedTime = this->fields.deemedTime;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &deemedTime);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v24 = JsonManager__toJson(v23, 0, 0, 0LL);
  v67.fields.Item1 = (struct System_Net_ServicePointScheduler_ConnectionGroup_o *)&v65;
  v67.fields.Item2 = (struct System_Net_WebOperation_o *)StringLiteral_17932/*"deemedTime"*/;
  v65.fields.Item1 = 0LL;
  v65.fields.Item2 = 0LL;
  System_ValueTuple_ServicePointScheduler_ConnectionGroup__WebOperation____ctor(
    v67,
    (System_Net_ServicePointScheduler_ConnectionGroup_o *)v24,
    (System_Net_WebOperation_o *)Method_System_ValueTuple_string__string___ctor__,
    v25);
  if ( !v22 )
    goto LABEL_36;
  System_Collections_Generic_List_ValueTuple_string__string____Add(
    v22,
    v65,
    (const MethodInfo_2DEF87C *)Method_System_Collections_Generic_List_ValueTuple_string__string___Add__);
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
    p_method = sub_AC5258(
                 progressDataList,
                 System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__TypeInfo,
                 0LL,
                 v28);
  }
  v34 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *, _QWORD))p_method)(
          progressDataList,
          *(_QWORD *)(p_method + 8));
  v26 = (System_Xml_Schema_XmlSchemaObject_o *)sub_B2C374(
                                                 System_Collections_Generic_Dictionary_string__object____TypeInfo,
                                                 v34);
  v36 = this->fields.progressDataList;
  if ( !v36 )
LABEL_36:
    sub_B2C434(v26, v27);
  v37 = (unsigned int *)v26;
  v38 = 0LL;
  while ( 1 )
  {
    v39 = v36->klass;
    if ( *(_WORD *)&v36->klass->_2.bitflags1 )
    {
      v40 = 0LL;
      v41 = &v39->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__c **)v41
              - 1) != System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__TypeInfo )
      {
        ++v40;
        v41 += 4;
        if ( v40 >= *(unsigned __int16 *)&v36->klass->_2.bitflags1 )
          goto LABEL_20;
      }
      v42 = (__int64)&v39->vtable[*v41].method;
    }
    else
    {
LABEL_20:
      v42 = sub_AC5258(
              v36,
              System_Collections_Generic_IReadOnlyCollection_EventMissionProgressRequest_Argument_ProgressData__TypeInfo,
              0LL,
              v35);
    }
    v26 = (System_Xml_Schema_XmlSchemaObject_o *)(*(__int64 (__fastcall **)(struct System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *, _QWORD))v42)(
                                                   v36,
                                                   *(_QWORD *)(v42 + 8));
    if ( (__int64)v38 >= (int)v26 )
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
        v48 = sub_AC5258(
                this->fields.progressDataList,
                System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__TypeInfo,
                0LL,
                v43);
      }
      v49 = (_DWORD *)(*(__int64 (__fastcall **)(struct System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *, _QWORD, _QWORD))v48)(
                        v44,
                        (unsigned int)v38,
                        *(_QWORD *)(v48 + 8));
      v50 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B2C42C(System_Collections_Generic_Dictionary_string__object__TypeInfo);
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
        v50,
        (const MethodInfo_2DB1110 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
      if ( v49 )
      {
        LODWORD(v65.fields.Item1) = v49[4];
        v26 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v65);
        if ( v50 )
        {
          System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
            v50,
            (System_Xml_XmlQualifiedName_o *)StringLiteral_20530/*"missionTargetId"*/,
            v26,
            (const MethodInfo_2DB1C98 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
          LODWORD(deemedTime) = v49[5];
          v51 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &deemedTime);
          System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
            v50,
            (System_Xml_XmlQualifiedName_o *)StringLiteral_20527/*"missionConditionDetailId"*/,
            v51,
            (const MethodInfo_2DB1C98 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
          v64 = v49[6];
          v52 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v64);
          System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
            v50,
            (System_Xml_XmlQualifiedName_o *)StringLiteral_22608/*"targetId"*/,
            v52,
            (const MethodInfo_2DB1C98 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
          v63 = v49[7];
          v53 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v63);
          System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
            v50,
            (System_Xml_XmlQualifiedName_o *)StringLiteral_18472/*"eventId"*/,
            v53,
            (const MethodInfo_2DB1C98 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
          v62 = v49[8];
          v54 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v62);
          System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
            v50,
            (System_Xml_XmlQualifiedName_o *)StringLiteral_16250/*"addCount"*/,
            v54,
            (const MethodInfo_2DB1C98 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
          if ( v37 )
          {
            v55 = sub_B2C41C(v50, *(_QWORD *)(*(_QWORD *)v37 + 64LL));
            if ( !v55 )
            {
              v60 = sub_B2C454();
              sub_B2C400(v60, 0LL);
            }
            if ( v38 >= v37[6] )
            {
              v61 = sub_B2C460(v55);
              sub_B2C400(v61, 0LL);
            }
            v56 = &v37[2 * v38];
            *((_QWORD *)v56 + 4) = v50;
            sub_B2C2F8(v56 + 8, v50);
            v36 = this->fields.progressDataList;
            ++v38;
            if ( v36 )
              continue;
          }
        }
      }
    }
    goto LABEL_36;
  }
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v57 = JsonManager__toJson((Il2CppObject *)v37, 0, 0, 0LL);
  v68.fields.Item1 = (struct System_Net_ServicePointScheduler_ConnectionGroup_o *)&v65;
  v68.fields.Item2 = (struct System_Net_WebOperation_o *)StringLiteral_21549/*"progress"*/;
  v65 = (System_ValueTuple_string__string__o)0LL;
  System_ValueTuple_ServicePointScheduler_ConnectionGroup__WebOperation____ctor(
    v68,
    (System_Net_ServicePointScheduler_ConnectionGroup_o *)v57,
    (System_Net_WebOperation_o *)Method_System_ValueTuple_string__string___ctor__,
    v58);
  System_Collections_Generic_List_ValueTuple_string__string____Add(
    v22,
    v65,
    (const MethodInfo_2DEF87C *)Method_System_Collections_Generic_List_ValueTuple_string__string___Add__);
  return v22;
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