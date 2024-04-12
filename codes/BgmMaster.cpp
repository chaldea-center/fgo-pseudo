void __fastcall BgmMaster___ctor(BgmMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42AFCCD & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_BgmMaster__BgmEntity__int___ctor__);
    byte_42AFCCD = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    80,
    (const MethodInfo_23E223C *)Method_DataMasterBase_BgmMaster__BgmEntity__int___ctor__);
}


System_String_o *__fastcall BgmMaster__GetBgmFileName(
        BgmMaster_o *this,
        int32_t id,
        System_String_o *defName,
        const MethodInfo *method)
{
  _BOOL8 v7; // x0
  __int64 v8; // x1
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42AFCCF & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
    byte_42AFCCF = 1;
  }
  entity = 0LL;
  v7 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)this,
         &entity,
         id,
         (const MethodInfo_23E2334 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
  if ( v7 )
  {
    if ( !entity )
      sub_B52A5C(v7, v8);
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
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v17; // x21
  WarBoardData_SquareRangeSearch_o *v18; // x0

  if ( (byte_42AFCD0 & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_FirstOrDefault_BgmEntity___);
    sub_B52984(&Method_System_Linq_Enumerable_OfType_BgmEntity___);
    sub_B52984(&Method_System_Func_BgmEntity__bool___ctor__);
    sub_B52984(&System_Func_BgmEntity__bool__TypeInfo);
    sub_B52984(&Method_BgmMaster___c__DisplayClass3_0__GetBgmIdFromFileName_b__0__);
    sub_B52984(&BgmMaster___c__DisplayClass3_0_TypeInfo);
    byte_42AFCD0 = 1;
  }
  v7 = sub_B52A54(BgmMaster___c__DisplayClass3_0_TypeInfo);
  BgmMaster___c__DisplayClass3_0___ctor((BgmMaster___c__DisplayClass3_0_o *)v7, 0LL);
  if ( !v7 )
    sub_B52A5C(v8, v9);
  *(_QWORD *)(v7 + 16) = bgmName;
  sub_B52920((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)bgmName, v10, v11, v12, v13, v14, v15);
  v16 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_BattleActionData_MasterBuffData_(
                                                               (System_Collections_IEnumerable_o *)this->fields.list,
                                                               (const MethodInfo_1B66108 *)Method_System_Linq_Enumerable_OfType_BgmEntity___);
  v17 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_BgmEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v17,
    (Il2CppObject *)v7,
    Method_BgmMaster___c__DisplayClass3_0__GetBgmIdFromFileName_b__0__,
    (const MethodInfo_2BC90BC *)Method_System_Func_BgmEntity__bool___ctor__);
  v18 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
          v16,
          (System_Func_TSource__bool__o *)v17,
          (const MethodInfo_1B63978 *)Method_System_Linq_Enumerable_FirstOrDefault_BgmEntity___);
  if ( v18 )
    return v18->fields.squareIndex;
  return defId;
}


System_String_array *__fastcall BgmMaster__GetBgmNameListWithIds(
        BgmMaster_o *this,
        System_Int32_array *ids,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x21
  System_String_o *v6; // x0
  BgmEntity_c *v7; // x1
  unsigned __int64 i; // x24
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v10; // x22
  __int64 v11; // x3
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_String_o *v13; // x23
  unsigned __int64 v14; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x11
  __int64 p_method; // x0
  __int64 v17; // x9
  __int64 v19; // x0
  BgmMaster_o *v20; // x0
  int32_t v21; // w1
  System_String_o *v22; // x2
  const MethodInfo *v23; // x3
  EventMissionProgressRequest_Argument_ProgressData_o **v24; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42AFCCE & 1) == 0 )
  {
    sub_B52984(&BgmEntity_TypeInfo);
    sub_B52984(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_string__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_string___ctor__);
    sub_B52984(&System_Collections_Generic_List_string__TypeInfo);
    byte_42AFCCE = 1;
  }
  v24 = 0LL;
  if ( !ids || !*(_QWORD *)&ids->max_length )
    return 0LL;
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( (int)ids->max_length >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)ids->max_length; ++i )
    {
      lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( i >= ids->max_length )
      {
        v19 = sub_B52A88(lookup);
        sub_B52A28(v19, 0LL);
      }
      v10 = lookup;
      v6 = System_Int32__ToString((int)ids + 4 * (int)i + 32, 0LL);
      if ( !v10 )
        goto LABEL_25;
      klass = v10->klass;
      v13 = v6;
      if ( *(_WORD *)&v10->klass->_2.bitflags1 )
      {
        v14 = 0LL;
        p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          ++v14;
          p_offset += 2;
          if ( v14 >= *(unsigned __int16 *)&v10->klass->_2.bitflags1 )
            goto LABEL_13;
        }
        p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
      }
      else
      {
LABEL_13:
        p_method = sub_AEB880(
                     v10,
                     System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                     1LL,
                     v11);
      }
      v6 = (System_String_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, EventMissionProgressRequest_Argument_ProgressData_o ***, _QWORD))p_method)(
                                v10,
                                v13,
                                &v24,
                                *(_QWORD *)(p_method + 8));
      if ( ((unsigned __int8)v6 & 1) != 0 )
      {
        v6 = (System_String_o *)v24;
        if ( !v24 )
          goto LABEL_25;
        v7 = BgmEntity_TypeInfo;
        v17 = *(&BgmEntity_TypeInfo->_2.bitflags2 + 1);
        if ( LOBYTE((*v24)[7].fields.missionConditionDetailId) < (unsigned int)v17
          || *((BgmEntity_c **)(*v24)[5].klass + v17 - 1) != BgmEntity_TypeInfo )
        {
          v20 = (BgmMaster_o *)sub_B52D50(v24);
          return (System_String_array *)BgmMaster__GetBgmFileName(v20, v21, v22, v23);
        }
        if ( !v5 )
          goto LABEL_25;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v5,
          v24[3],
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_string__Add__);
      }
    }
  }
  if ( !v5 )
LABEL_25:
    sub_B52A5C(v6, v7);
  return (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                  (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_string__ToArray__);
}


int32_t __fastcall BgmMaster__GetInvalidOverwrite(BgmMaster_o *this, int32_t bgmId, const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42AFCD1 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
    byte_42AFCD1 = 1;
  }
  entity = 0LL;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)this,
          &entity,
          bgmId,
          (const MethodInfo_23E2334 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__) )
    return 0;
  if ( !entity )
    sub_B52A5C(0LL, v5);
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
    sub_B52A5C(this, x);
  return System_String__Equals_44555656((System_String_o *)this, x->fields.fileName, 0LL);
}