void __fastcall BgmMaster___ctor(BgmMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E7E37 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_BgmMaster__BgmEntity__int___ctor__, (_DWORD)method, v2, v3);
    byte_42E7E37 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    80,
    (const MethodInfo_23FAD74 *)Method_DataMasterBase_BgmMaster__BgmEntity__int___ctor__);
}


System_String_o *__fastcall BgmMaster__GetBgmFileName(
        BgmMaster_o *this,
        int32_t id,
        System_String_o *defName,
        const MethodInfo *method)
{
  System_String_o *v4; // x19
  _BOOL8 v7; // x0
  __int64 v8; // x1
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  v4 = defName;
  if ( (byte_42E7E39 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__, id, (_DWORD)defName, method);
    byte_42E7E39 = 1;
  }
  entity = 0LL;
  v7 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)this,
         &entity,
         id,
         (const MethodInfo_23FAE6C *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
  if ( v7 )
  {
    if ( !entity )
      sub_B5D69C(v7, v8);
    return entity->fields.age;
  }
  return v4;
}


int32_t __fastcall BgmMaster__GetBgmIdFromFileName(
        BgmMaster_o *this,
        System_String_o *bgmName,
        int32_t defId,
        const MethodInfo *method)
{
  int32_t v4; // w19
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  __int64 v22; // x22
  __int64 v23; // x0
  __int64 v24; // x1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v32; // x21
  WarBoardData_SquareRangeSearch_o *v33; // x0

  v4 = defId;
  if ( (byte_42E7E3A & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_FirstOrDefault_BgmEntity___, (_DWORD)bgmName, defId, method);
    sub_B5D5C4(&Method_System_Linq_Enumerable_OfType_BgmEntity___, v7, v8, v9);
    sub_B5D5C4(&Method_System_Func_BgmEntity__bool___ctor__, v10, v11, v12);
    sub_B5D5C4(&System_Func_BgmEntity__bool__TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_BgmMaster___c__DisplayClass3_0__GetBgmIdFromFileName_b__0__, v16, v17, v18);
    sub_B5D5C4(&BgmMaster___c__DisplayClass3_0_TypeInfo, v19, v20, v21);
    byte_42E7E3A = 1;
  }
  v22 = sub_B5D694(BgmMaster___c__DisplayClass3_0_TypeInfo);
  BgmMaster___c__DisplayClass3_0___ctor((BgmMaster___c__DisplayClass3_0_o *)v22, 0LL);
  if ( !v22 )
    sub_B5D69C(v23, v24);
  *(_QWORD *)(v22 + 16) = bgmName;
  sub_B5D560((BattleServantConfConponent_o *)(v22 + 16), (System_Int32_array **)bgmName, v25, v26, v27, v28, v29, v30);
  v31 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_BattleActionData_MasterBuffData_(
                                                               (System_Collections_IEnumerable_o *)this->fields.list,
                                                               (const MethodInfo_1CAEFE0 *)Method_System_Linq_Enumerable_OfType_BgmEntity___);
  v32 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_BgmEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v32,
    (Il2CppObject *)v22,
    Method_BgmMaster___c__DisplayClass3_0__GetBgmIdFromFileName_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_BgmEntity__bool___ctor__);
  v33 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
          v31,
          (System_Func_TSource__bool__o *)v32,
          (const MethodInfo_1CAC850 *)Method_System_Linq_Enumerable_FirstOrDefault_BgmEntity___);
  if ( v33 )
    return v33->fields.squareIndex;
  return v4;
}


System_String_array *__fastcall BgmMaster__GetBgmNameListWithIds(
        BgmMaster_o *this,
        System_Int32_array *ids,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x21
  System_String_o *v22; // x0
  BgmEntity_c *v23; // x1
  unsigned __int64 i; // x24
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v26; // x22
  __int64 v27; // x3
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_String_o *v29; // x23
  unsigned __int64 v30; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x11
  __int64 p_method; // x0
  __int64 v33; // x9
  __int64 v35; // x0
  BgmMaster_o *v36; // x0
  int32_t v37; // w1
  System_String_o *v38; // x2
  const MethodInfo *v39; // x3
  EventMissionProgressRequest_Argument_ProgressData_o **v40; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42E7E38 & 1) == 0 )
  {
    sub_B5D5C4(&BgmEntity_TypeInfo, (_DWORD)ids, (_DWORD)method, v3);
    sub_B5D5C4(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Add__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__ToArray__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string___ctor__, v15, v16, v17);
    sub_B5D5C4(&System_Collections_Generic_List_string__TypeInfo, v18, v19, v20);
    byte_42E7E38 = 1;
  }
  v40 = 0LL;
  if ( !ids || !*(_QWORD *)&ids->max_length )
    return 0LL;
  v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v21,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_string___ctor__);
  if ( (int)ids->max_length >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)ids->max_length; ++i )
    {
      lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( i >= ids->max_length )
      {
        v35 = sub_B5D6C8(lookup);
        sub_B5D668(v35, 0LL);
      }
      v26 = lookup;
      v22 = System_Int32__ToString((int)ids + 4 * (int)i + 32, 0LL);
      if ( !v26 )
        goto LABEL_25;
      klass = v26->klass;
      v29 = v22;
      if ( *(_WORD *)&v26->klass->_2.bitflags1 )
      {
        v30 = 0LL;
        p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          ++v30;
          p_offset += 2;
          if ( v30 >= *(unsigned __int16 *)&v26->klass->_2.bitflags1 )
            goto LABEL_13;
        }
        p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
      }
      else
      {
LABEL_13:
        p_method = sub_AF54C0(
                     v26,
                     System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                     1LL,
                     v27);
      }
      v22 = (System_String_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, EventMissionProgressRequest_Argument_ProgressData_o ***, _QWORD))p_method)(
                                 v26,
                                 v29,
                                 &v40,
                                 *(_QWORD *)(p_method + 8));
      if ( ((unsigned __int8)v22 & 1) != 0 )
      {
        v22 = (System_String_o *)v40;
        if ( !v40 )
          goto LABEL_25;
        v23 = BgmEntity_TypeInfo;
        v33 = *(&BgmEntity_TypeInfo->_2.bitflags2 + 1);
        if ( LOBYTE((*v40)[7].fields.missionConditionDetailId) < (unsigned int)v33
          || *((BgmEntity_c **)(*v40)[5].klass + v33 - 1) != BgmEntity_TypeInfo )
        {
          v36 = (BgmMaster_o *)sub_B5D990(v40);
          return (System_String_array *)BgmMaster__GetBgmFileName(v36, v37, v38, v39);
        }
        if ( !v21 )
          goto LABEL_25;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v21,
          v40[3],
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
      }
    }
  }
  if ( !v21 )
LABEL_25:
    sub_B5D69C(v22, v23);
  return (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v21,
                                  (const MethodInfo_305910C *)Method_System_Collections_Generic_List_string__ToArray__);
}


int32_t __fastcall BgmMaster__GetInvalidOverwrite(BgmMaster_o *this, int32_t bgmId, const MethodInfo *method)
{
  __int64 v3; // x3
  const MethodInfo *v6; // x1
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E7E3B & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__, bgmId, (_DWORD)method, v3);
    byte_42E7E3B = 1;
  }
  entity = 0LL;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)this,
          &entity,
          bgmId,
          (const MethodInfo_23FAE6C *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__) )
    return 0;
  if ( !entity )
    sub_B5D69C(0LL, v6);
  return BgmEntity__GetInvalidOverwrite((BgmEntity_o *)entity, v6);
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
    sub_B5D69C(this, x);
  return System_String__Equals_44565128((System_String_o *)this, x->fields.fileName, 0LL);
}