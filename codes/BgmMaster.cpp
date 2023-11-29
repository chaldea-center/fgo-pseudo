void __fastcall BgmMaster___ctor(BgmMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40F905C & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_BgmMaster__BgmEntity__int___ctor__, method);
    byte_40F905C = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    79,
    (const MethodInfo_266F2EC *)Method_DataMasterBase_BgmMaster__BgmEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BgmMaster__GetBgmFileName(
        BgmMaster_o *this,
        int32_t id,
        System_String_o *defName,
        const MethodInfo *method)
{
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40F905E & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__, *(_QWORD *)&id);
    byte_40F905E = 1;
  }
  entity = 0LL;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)this,
         &entity,
         id,
         (const MethodInfo_266F3E4 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__) )
  {
    if ( !entity )
      sub_B170D4();
    return entity->fields.age;
  }
  return defName;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BgmMaster__GetBgmIdFromFileName(
        BgmMaster_o *this,
        System_String_o *bgmName,
        int32_t defId,
        const MethodInfo *method)
{
  __int64 v4; // x4
  int32_t v5; // w19
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x22
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x20
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v25; // x21
  WarBoardData_SquareRangeSearch_o *v26; // x0

  v5 = defId;
  if ( (byte_40F905F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_FirstOrDefault_BgmEntity___, bgmName);
    sub_B16FFC(&Method_System_Linq_Enumerable_OfType_BgmEntity___, v8);
    sub_B16FFC(&Method_System_Func_BgmEntity__bool___ctor__, v9);
    sub_B16FFC(&System_Func_BgmEntity__bool__TypeInfo, v10);
    sub_B16FFC(&Method_BgmMaster___c__DisplayClass3_0__GetBgmIdFromFileName_b__0__, v11);
    sub_B16FFC(&BgmMaster___c__DisplayClass3_0_TypeInfo, v12);
    byte_40F905F = 1;
  }
  v13 = sub_B170CC(BgmMaster___c__DisplayClass3_0_TypeInfo, bgmName, *(_QWORD *)&defId, method, v4);
  BgmMaster___c__DisplayClass3_0___ctor((BgmMaster___c__DisplayClass3_0_o *)v13, 0LL);
  if ( !v13 )
    sub_B170D4();
  *(_QWORD *)(v13 + 16) = bgmName;
  sub_B16F98((BattleServantConfConponent_o *)(v13 + 16), (System_Int32_array **)bgmName, v14, v15, v16, v17, v18, v19);
  v20 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_WarBoardPartySkillEntity_(
                                                               (System_Collections_IEnumerable_o *)this->fields.list,
                                                               (const MethodInfo_19BD52C *)Method_System_Linq_Enumerable_OfType_BgmEntity___);
  v25 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_BgmEntity__bool__TypeInfo,
                                                                             v21,
                                                                             v22,
                                                                             v23,
                                                                             v24);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v25,
    (Il2CppObject *)v13,
    Method_BgmMaster___c__DisplayClass3_0__GetBgmIdFromFileName_b__0__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_BgmEntity__bool___ctor__);
  v26 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
          v20,
          (System_Func_TSource__bool__o *)v25,
          (const MethodInfo_18D8450 *)Method_System_Linq_Enumerable_FirstOrDefault_BgmEntity___);
  if ( v26 )
    return v26->fields.squareIndex;
  return v5;
}


System_String_array *__fastcall BgmMaster__GetBgmNameListWithIds(
        BgmMaster_o *this,
        System_Int32_array *ids,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x21
  unsigned __int64 i; // x24
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v17; // x22
  System_String_o *v18; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_String_o *v20; // x23
  unsigned __int64 v21; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x11
  __int64 p_method; // x0
  __int64 v24; // x9
  BgmMaster_o *v26; // x0
  int32_t v27; // w1
  System_String_o *v28; // x2
  const MethodInfo *v29; // x3
  EventMissionProgressRequest_Argument_ProgressData_o **v30; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_40F905D & 1) == 0 )
  {
    sub_B16FFC(&BgmEntity_TypeInfo, ids);
    sub_B16FFC(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__ToArray__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_string___ctor__, v10);
    sub_B16FFC(&System_Collections_Generic_List_string__TypeInfo, v11);
    byte_40F905D = 1;
  }
  v30 = 0LL;
  if ( !ids || !*(_QWORD *)&ids->max_length )
    return 0LL;
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_string__TypeInfo,
                                                                                                  ids,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( (int)ids->max_length >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)ids->max_length; ++i )
    {
      lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( i >= ids->max_length )
      {
        sub_B17100(lookup, v15, v16);
        sub_B170A0();
      }
      v17 = lookup;
      v18 = System_Int32__ToString((int)ids + 4 * (int)i + 32, 0LL);
      if ( !v17 )
        goto LABEL_25;
      klass = v17->klass;
      v20 = v18;
      if ( *(_WORD *)&v17->klass->_2.bitflags1 )
      {
        v21 = 0LL;
        p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          ++v21;
          p_offset += 2;
          if ( v21 >= *(unsigned __int16 *)&v17->klass->_2.bitflags1 )
            goto LABEL_13;
        }
        p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
      }
      else
      {
LABEL_13:
        p_method = sub_AAFEF8(v17, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, EventMissionProgressRequest_Argument_ProgressData_o ***, _QWORD))p_method)(
              v17,
              v20,
              &v30,
              *(_QWORD *)(p_method + 8)) & 1) != 0 )
      {
        if ( !v30 )
          goto LABEL_25;
        v24 = *(&BgmEntity_TypeInfo->_2.bitflags2 + 1);
        if ( LOBYTE((*v30)[7].fields.missionConditionDetailId) < (unsigned int)v24
          || *((BgmEntity_c **)(*v30)[5].klass + v24 - 1) != BgmEntity_TypeInfo )
        {
          v26 = (BgmMaster_o *)sub_B173C8(v30);
          return (System_String_array *)BgmMaster__GetBgmFileName(v26, v27, v28, v29);
        }
        if ( !v12 )
          goto LABEL_25;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v12,
          v30[3],
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
      }
    }
  }
  if ( !v12 )
LABEL_25:
    sub_B170D4();
  return (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v12,
                                  (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_string__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BgmMaster__GetInvalidOverwrite(BgmMaster_o *this, int32_t bgmId, const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40F9060 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__, *(_QWORD *)&bgmId);
    byte_40F9060 = 1;
  }
  entity = 0LL;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)this,
          &entity,
          bgmId,
          (const MethodInfo_266F3E4 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__) )
    return 0;
  if ( !entity )
    sub_B170D4();
  return BgmEntity__GetInvalidOverwrite((BgmEntity_o *)entity, v5);
}


void __fastcall BgmMaster___c__DisplayClass3_0___ctor(BgmMaster___c__DisplayClass3_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BgmMaster___c__DisplayClass3_0___GetBgmIdFromFileName_b__0(
        BgmMaster___c__DisplayClass3_0_o *this,
        BgmEntity_o *x,
        const MethodInfo *method)
{
  System_String_o *bgmName; // x0

  if ( !x || (bgmName = this->fields.bgmName) == 0LL )
    sub_B170D4();
  return System_String__Equals_43731072(bgmName, x->fields.fileName, 0LL);
}