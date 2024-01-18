void __fastcall BgmMaster___ctor(BgmMaster_o *this, const MethodInfo *method)
{
  if ( (byte_41875B0 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_BgmMaster__BgmEntity__int___ctor__, method);
    byte_41875B0 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    79,
    (const MethodInfo_24E4034 *)Method_DataMasterBase_BgmMaster__BgmEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BgmMaster__GetBgmFileName(
        BgmMaster_o *this,
        int32_t id,
        System_String_o *defName,
        const MethodInfo *method)
{
  _BOOL8 v7; // x0
  __int64 v8; // x1
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_41875B2 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__, *(_QWORD *)&id);
    byte_41875B2 = 1;
  }
  entity = 0LL;
  v7 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)this,
         &entity,
         id,
         (const MethodInfo_24E412C *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
  if ( v7 )
  {
    if ( !entity )
      sub_B2C434(v7, v8);
    return entity->fields.age;
  }
  return defName;
}


int32_t __fastcall BgmMaster__GetBgmIdFromFileName(
        BgmMaster_o *this,
        System_String_o *bgmName,
        int32_t defId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x22
  __int64 v13; // x0
  __int64 v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v22; // x21
  WarBoardData_SquareRangeSearch_o *v23; // x0

  if ( (byte_41875B3 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_FirstOrDefault_BgmEntity___, bgmName);
    sub_B2C35C(&Method_System_Linq_Enumerable_OfType_BgmEntity___, v7);
    sub_B2C35C(&Method_System_Func_BgmEntity__bool___ctor__, v8);
    sub_B2C35C(&System_Func_BgmEntity__bool__TypeInfo, v9);
    sub_B2C35C(&Method_BgmMaster___c__DisplayClass3_0__GetBgmIdFromFileName_b__0__, v10);
    sub_B2C35C(&BgmMaster___c__DisplayClass3_0_TypeInfo, v11);
    byte_41875B3 = 1;
  }
  v12 = sub_B2C42C(BgmMaster___c__DisplayClass3_0_TypeInfo);
  BgmMaster___c__DisplayClass3_0___ctor((BgmMaster___c__DisplayClass3_0_o *)v12, 0LL);
  if ( !v12 )
    sub_B2C434(v13, v14);
  *(_QWORD *)(v12 + 16) = bgmName;
  sub_B2C2F8((BattleServantConfConponent_o *)(v12 + 16), (System_Int32_array **)bgmName, v15, v16, v17, v18, v19, v20);
  v21 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_WarBoardPartySkillEntity_(
                                                               (System_Collections_IEnumerable_o *)this->fields.list,
                                                               (const MethodInfo_1A93430 *)Method_System_Linq_Enumerable_OfType_BgmEntity___);
  v22 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_BgmEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v22,
    (Il2CppObject *)v12,
    Method_BgmMaster___c__DisplayClass3_0__GetBgmIdFromFileName_b__0__,
    (const MethodInfo_2711C04 *)Method_System_Func_BgmEntity__bool___ctor__);
  v23 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
          v21,
          (System_Func_TSource__bool__o *)v22,
          (const MethodInfo_1A9113C *)Method_System_Linq_Enumerable_FirstOrDefault_BgmEntity___);
  if ( v23 )
    return v23->fields.squareIndex;
  return defId;
}


System_String_array *__fastcall BgmMaster__GetBgmNameListWithIds(
        BgmMaster_o *this,
        System_Int32_array *ids,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x21
  System_String_o *v11; // x0
  BgmEntity_c *v12; // x1
  unsigned __int64 i; // x24
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v15; // x22
  __int64 v16; // x3
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_String_o *v18; // x23
  unsigned __int64 v19; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x11
  __int64 p_method; // x0
  __int64 v22; // x9
  __int64 v24; // x0
  BgmMaster_o *v25; // x0
  int32_t v26; // w1
  System_String_o *v27; // x2
  const MethodInfo *v28; // x3
  EventMissionProgressRequest_Argument_ProgressData_o **v29; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_41875B1 & 1) == 0 )
  {
    sub_B2C35C(&BgmEntity_TypeInfo, ids);
    sub_B2C35C(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__ToArray__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_string___ctor___67320968, v8);
    sub_B2C35C(&System_Collections_Generic_List_string__TypeInfo, v9);
    byte_41875B1 = 1;
  }
  v29 = 0LL;
  if ( !ids || !*(_QWORD *)&ids->max_length )
    return 0LL;
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_string___ctor___67320968);
  if ( (int)ids->max_length >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)ids->max_length; ++i )
    {
      lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( i >= ids->max_length )
      {
        v24 = sub_B2C460(lookup);
        sub_B2C400(v24, 0LL);
      }
      v15 = lookup;
      v11 = System_Int32__ToString((int)ids + 4 * (int)i + 32, 0LL);
      if ( !v15 )
        goto LABEL_25;
      klass = v15->klass;
      v18 = v11;
      if ( *(_WORD *)&v15->klass->_2.bitflags1 )
      {
        v19 = 0LL;
        p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          ++v19;
          p_offset += 2;
          if ( v19 >= *(unsigned __int16 *)&v15->klass->_2.bitflags1 )
            goto LABEL_13;
        }
        p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
      }
      else
      {
LABEL_13:
        p_method = sub_AC5258(
                     v15,
                     System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                     1LL,
                     v16);
      }
      v11 = (System_String_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, EventMissionProgressRequest_Argument_ProgressData_o ***, _QWORD))p_method)(
                                 v15,
                                 v18,
                                 &v29,
                                 *(_QWORD *)(p_method + 8));
      if ( ((unsigned __int8)v11 & 1) != 0 )
      {
        v11 = (System_String_o *)v29;
        if ( !v29 )
          goto LABEL_25;
        v12 = BgmEntity_TypeInfo;
        v22 = *(&BgmEntity_TypeInfo->_2.bitflags2 + 1);
        if ( LOBYTE((*v29)[7].fields.missionConditionDetailId) < (unsigned int)v22
          || *((BgmEntity_c **)(*v29)[5].klass + v22 - 1) != BgmEntity_TypeInfo )
        {
          v25 = (BgmMaster_o *)sub_B2C728(v29);
          return (System_String_array *)BgmMaster__GetBgmFileName(v25, v26, v27, v28);
        }
        if ( !v10 )
          goto LABEL_25;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v10,
          v29[3],
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
      }
    }
  }
  if ( !v10 )
LABEL_25:
    sub_B2C434(v11, v12);
  return (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v10,
                                  (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_string__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BgmMaster__GetInvalidOverwrite(BgmMaster_o *this, int32_t bgmId, const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_41875B4 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__, *(_QWORD *)&bgmId);
    byte_41875B4 = 1;
  }
  entity = 0LL;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)this,
          &entity,
          bgmId,
          (const MethodInfo_24E412C *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__) )
    return 0;
  if ( !entity )
    sub_B2C434(0LL, v5);
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
  if ( !x || (this = (BgmMaster___c__DisplayClass3_0_o *)this->fields.bgmName) == 0LL )
    sub_B2C434(this, x);
  return System_String__Equals_44292872((System_String_o *)this, x->fields.fileName, 0LL);
}