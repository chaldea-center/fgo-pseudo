void __fastcall BgmPlayArgsGroup___ctor(
        BgmPlayArgsGroup_o *this,
        MainBgmPlayArgs_o *mainBgmParam,
        BgmPlayArgs_array *otherBgmParams,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x22
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *AllArgsList_k__BackingField; // x21
  _QWORD **v23; // x22
  __int64 v24; // x20
  __int16 v25; // w8
  __int64 v26; // x20
  __int64 v27; // x20
  __int64 v28; // x20
  const MethodInfo *v29; // x1

  if ( (byte_40F9065 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Empty_BgmPlayArgs___, mainBgmParam);
    sub_B16FFC(&Method_System_Collections_Generic_List_BgmPlayArgs__AddRange__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_BgmPlayArgs__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_BgmPlayArgs___ctor__, v9);
    sub_B16FFC(&System_Collections_Generic_List_BgmPlayArgs__TypeInfo, v10);
    byte_40F9065 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BgmPlayArgs__TypeInfo,
                                                                                                  v11,
                                                                                                  v12,
                                                                                                  v13,
                                                                                                  v14);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BgmPlayArgs___ctor__);
  if ( !v15 )
    goto LABEL_19;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v15,
    (EventMissionProgressRequest_Argument_ProgressData_o *)mainBgmParam,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BgmPlayArgs__Add__);
  this->fields._AllArgsList_k__BackingField = (struct System_Collections_Generic_List_BgmPlayArgs__o *)v15;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v15, v16, v17, v18, v19, v20, v21);
  AllArgsList_k__BackingField = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)this->fields._AllArgsList_k__BackingField;
  if ( !otherBgmParams )
  {
    v23 = (_QWORD **)Method_System_Linq_Enumerable_Empty_BgmPlayArgs___;
    v24 = **((_QWORD **)Method_System_Linq_Enumerable_Empty_BgmPlayArgs___ + 6);
    v25 = *(_WORD *)(v24 + 306);
    if ( (v25 & 1) == 0 )
    {
      sub_AAFCFC(**((_QWORD **)Method_System_Linq_Enumerable_Empty_BgmPlayArgs___ + 6));
      v25 = *(_WORD *)(v24 + 306);
    }
    if ( (v25 & 0x400) != 0 )
    {
      v26 = *v23[6];
      if ( (*(_BYTE *)(v26 + 306) & 1) == 0 )
        sub_AAFCFC(*v23[6]);
      if ( !*(_DWORD *)(v26 + 224) )
      {
        v27 = *v23[6];
        if ( (*(_BYTE *)(v27 + 306) & 1) == 0 )
          sub_AAFCFC(*v23[6]);
        j_il2cpp_runtime_class_init_0(v27);
      }
    }
    v28 = *v23[6];
    if ( (*(_BYTE *)(v28 + 306) & 1) == 0 )
      sub_AAFCFC(*v23[6]);
    otherBgmParams = **(BgmPlayArgs_array ***)(v28 + 184);
  }
  if ( !AllArgsList_k__BackingField )
LABEL_19:
    sub_B170D4();
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    AllArgsList_k__BackingField,
    (System_Collections_Generic_IEnumerable_T__o *)otherBgmParams,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_BgmPlayArgs__AddRange__);
  BgmPlayArgsGroup__Initialize(this, v29);
}


void __fastcall BgmPlayArgsGroup___ctor_23393820(
        BgmPlayArgsGroup_o *this,
        System_String_o *toAnalyze,
        System_Nullable_float__o volumeNullable,
        float fadeTime,
        int64_t startTime,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_BgmPlayArgs__o *v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  const MethodInfo *v18; // x1
  System_Nullable_float__o v19; // 0:x1.8

  System_Object___ctor((Il2CppObject *)this, 0LL);
  v19 = volumeNullable;
  v11 = Analyzer_FileNameToBgmPlayArgsGroup__Analyze(toAnalyze, v19, fadeTime, startTime, 0LL);
  this->fields._AllArgsList_k__BackingField = v11;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v11, v12, v13, v14, v15, v16, v17);
  BgmPlayArgsGroup__Initialize(this, v18);
}


void __fastcall BgmPlayArgsGroup___ctor_23408980(
        BgmPlayArgsGroup_o *this,
        BgmPlayArgs_array *bgmParams,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_T__o *v3; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  _QWORD **v11; // x21
  __int64 v12; // x20
  __int16 v13; // w8
  __int64 v14; // x20
  __int64 v15; // x20
  __int64 v16; // x20
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v17; // x21
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  const MethodInfo *v24; // x1

  v3 = (System_Collections_Generic_IEnumerable_T__o *)bgmParams;
  if ( (byte_40F9066 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Empty_BgmPlayArgs___, bgmParams);
    sub_B16FFC(&Method_System_Collections_Generic_List_BgmPlayArgs___ctor___66727096, v5);
    sub_B16FFC(&System_Collections_Generic_List_BgmPlayArgs__TypeInfo, v6);
    byte_40F9066 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !v3 )
  {
    v11 = (_QWORD **)Method_System_Linq_Enumerable_Empty_BgmPlayArgs___;
    v12 = **((_QWORD **)Method_System_Linq_Enumerable_Empty_BgmPlayArgs___ + 6);
    v13 = *(_WORD *)(v12 + 306);
    if ( (v13 & 1) == 0 )
    {
      sub_AAFCFC(**((_QWORD **)Method_System_Linq_Enumerable_Empty_BgmPlayArgs___ + 6));
      v13 = *(_WORD *)(v12 + 306);
    }
    if ( (v13 & 0x400) != 0 )
    {
      v14 = *v11[6];
      if ( (*(_BYTE *)(v14 + 306) & 1) == 0 )
        sub_AAFCFC(*v11[6]);
      if ( !*(_DWORD *)(v14 + 224) )
      {
        v15 = *v11[6];
        if ( (*(_BYTE *)(v15 + 306) & 1) == 0 )
          sub_AAFCFC(*v11[6]);
        j_il2cpp_runtime_class_init_0(v15);
      }
    }
    v16 = *v11[6];
    if ( (*(_BYTE *)(v16 + 306) & 1) == 0 )
      sub_AAFCFC(*v11[6]);
    v3 = **(System_Collections_Generic_IEnumerable_T__o ***)(v16 + 184);
  }
  v17 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B170CC(
                                                                          System_Collections_Generic_List_BgmPlayArgs__TypeInfo,
                                                                          v7,
                                                                          v8,
                                                                          v9,
                                                                          v10);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v17,
    v3,
    (const MethodInfo_2F2520C *)Method_System_Collections_Generic_List_BgmPlayArgs___ctor___66727096);
  if ( !this )
    sub_B170D4();
  this->fields._AllArgsList_k__BackingField = (struct System_Collections_Generic_List_BgmPlayArgs__o *)v17;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v17, v18, v19, v20, v21, v22, v23);
  BgmPlayArgsGroup__Initialize(this, v24);
}


System_Collections_Generic_IEnumerable_BgmPlayArgs__o *__fastcall BgmPlayArgsGroup__AllArgsListNullExcluded(
        BgmPlayArgsGroup_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Collections_Generic_List_BgmPlayArgs__o *AllArgsList_k__BackingField; // x19
  BgmPlayArgsGroup___c_c *v11; // x0
  struct BgmPlayArgsGroup___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__12_0; // x20
  Il2CppObject *v14; // x21
  struct BgmPlayArgsGroup___c_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_40F9063 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_BgmPlayArgs___, method);
    sub_B16FFC(&Method_System_Func_BgmPlayArgs__bool___ctor__, v6);
    sub_B16FFC(&System_Func_BgmPlayArgs__bool__TypeInfo, v7);
    sub_B16FFC(&Method_BgmPlayArgsGroup___c__AllArgsListNullExcluded_b__12_0__, v8);
    sub_B16FFC(&BgmPlayArgsGroup___c_TypeInfo, v9);
    byte_40F9063 = 1;
  }
  AllArgsList_k__BackingField = this->fields._AllArgsList_k__BackingField;
  v11 = BgmPlayArgsGroup___c_TypeInfo;
  if ( (BYTE3(BgmPlayArgsGroup___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BgmPlayArgsGroup___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmPlayArgsGroup___c_TypeInfo);
    v11 = BgmPlayArgsGroup___c_TypeInfo;
  }
  static_fields = v11->static_fields;
  _9__12_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__12_0;
  if ( !_9__12_0 )
  {
    if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      static_fields = BgmPlayArgsGroup___c_TypeInfo->static_fields;
    }
    v14 = (Il2CppObject *)static_fields->__9;
    _9__12_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                    System_Func_BgmPlayArgs__bool__TypeInfo,
                                                                                    method,
                                                                                    v2,
                                                                                    v3,
                                                                                    v4);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__12_0,
      v14,
      Method_BgmPlayArgsGroup___c__AllArgsListNullExcluded_b__12_0__,
      (const MethodInfo_2B6AB40 *)Method_System_Func_BgmPlayArgs__bool___ctor__);
    v15 = BgmPlayArgsGroup___c_TypeInfo->static_fields;
    v15->__9__12_0 = (struct System_Func_BgmPlayArgs__bool__o *)_9__12_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v15->__9__12_0,
      (System_Int32_array **)_9__12_0,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  return (System_Collections_Generic_IEnumerable_BgmPlayArgs__o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                    (System_Collections_Generic_IEnumerable_TSource__o *)AllArgsList_k__BackingField,
                                                                    (System_Func_TSource__bool__o *)_9__12_0,
                                                                    (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_BgmPlayArgs___);
}


void __fastcall BgmPlayArgsGroup__Initialize(BgmPlayArgsGroup_o *this, const MethodInfo *method)
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
  struct System_Collections_Generic_List_BgmPlayArgs__o *AllArgsList_k__BackingField; // x20
  BgmPlayArgsGroup___c_c *v14; // x0
  struct BgmPlayArgsGroup___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__17_0; // x21
  Il2CppObject *v17; // x22
  struct BgmPlayArgsGroup___c_StaticFields *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  peRenderTexture_ChangeLayerObject_o *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  __int64 v32; // x10
  struct MainBgmPlayArgs_o *v33; // x1
  struct MainBgmPlayArgs_o **p_MainArgs_k__BackingField; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x0
  System_Int32_array **v36; // x1
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7

  if ( (byte_40F9067 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_OfType_SubBgmPlayArgs___, method);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToList_SubBgmPlayArgs___, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_BgmPlayArgs__Find__, v7);
    sub_B16FFC(&MainBgmPlayArgs_TypeInfo, v8);
    sub_B16FFC(&Method_System_Predicate_BgmPlayArgs___ctor__, v9);
    sub_B16FFC(&System_Predicate_BgmPlayArgs__TypeInfo, v10);
    sub_B16FFC(&Method_BgmPlayArgsGroup___c__Initialize_b__17_0__, v11);
    sub_B16FFC(&BgmPlayArgsGroup___c_TypeInfo, v12);
    byte_40F9067 = 1;
  }
  AllArgsList_k__BackingField = this->fields._AllArgsList_k__BackingField;
  v14 = BgmPlayArgsGroup___c_TypeInfo;
  if ( (BYTE3(BgmPlayArgsGroup___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BgmPlayArgsGroup___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmPlayArgsGroup___c_TypeInfo);
    v14 = BgmPlayArgsGroup___c_TypeInfo;
  }
  static_fields = v14->static_fields;
  _9__17_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__17_0;
  if ( !_9__17_0 )
  {
    if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      static_fields = BgmPlayArgsGroup___c_TypeInfo->static_fields;
    }
    v17 = (Il2CppObject *)static_fields->__9;
    _9__17_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                          System_Predicate_BgmPlayArgs__TypeInfo,
                                                                          method,
                                                                          v2,
                                                                          v3,
                                                                          v4);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__17_0,
      v17,
      Method_BgmPlayArgsGroup___c__Initialize_b__17_0__,
      (const MethodInfo_2B0B204 *)Method_System_Predicate_BgmPlayArgs___ctor__);
    v18 = BgmPlayArgsGroup___c_TypeInfo->static_fields;
    v18->__9__17_0 = (struct System_Predicate_BgmPlayArgs__o *)_9__17_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v18->__9__17_0,
      (System_Int32_array **)_9__17_0,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
  }
  if ( !AllArgsList_k__BackingField )
    sub_B170D4();
  v25 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)AllArgsList_k__BackingField,
          (System_Predicate_T__o *)_9__17_0,
          (const MethodInfo_2F26598 *)Method_System_Collections_Generic_List_BgmPlayArgs__Find__);
  if ( v25
    && (v32 = *(&MainBgmPlayArgs_TypeInfo->_2.bitflags2 + 1), *(&v25->klass->_2.bitflags2 + 1) >= (unsigned int)v32) )
  {
    if ( (MainBgmPlayArgs_c *)v25->klass->_2.typeHierarchy[v32 - 1] == MainBgmPlayArgs_TypeInfo )
      v33 = (struct MainBgmPlayArgs_o *)v25;
    else
      v33 = 0LL;
  }
  else
  {
    v33 = 0LL;
  }
  this->fields._MainArgs_k__BackingField = v33;
  p_MainArgs_k__BackingField = &this->fields._MainArgs_k__BackingField;
  sub_B16F98(
    (BattleServantConfConponent_o *)p_MainArgs_k__BackingField,
    (System_Int32_array **)v33,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  v35 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_WarBoardPartySkillEntity_(
                                                               (System_Collections_IEnumerable_o *)*(p_MainArgs_k__BackingField - 1),
                                                               (const MethodInfo_19BD52C *)Method_System_Linq_Enumerable_OfType_SubBgmPlayArgs___);
  v36 = (System_Int32_array **)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                 v35,
                                 (const MethodInfo_19C7AA0 *)Method_System_Linq_Enumerable_ToList_SubBgmPlayArgs___);
  p_MainArgs_k__BackingField[1] = (struct MainBgmPlayArgs_o *)v36;
  sub_B16F98((BattleServantConfConponent_o *)(p_MainArgs_k__BackingField + 1), v36, v37, v38, v39, v40, v41, v42);
}


BgmPlayArgsGroup_o *__fastcall BgmPlayArgsGroup__NullExcludedClone(BgmPlayArgsGroup_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x19
  BgmPlayArgsGroup___c_c *v14; // x8
  struct BgmPlayArgsGroup___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__13_0; // x20
  Il2CppObject *v17; // x21
  struct BgmPlayArgsGroup___c_StaticFields *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0
  BgmPlayArgs_array *v26; // x19
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  BgmPlayArgsGroup_o *v31; // x20
  const MethodInfo *v32; // x2

  if ( (byte_40F9064 & 1) == 0 )
  {
    sub_B16FFC(&BgmPlayArgsGroup_TypeInfo, method);
    sub_B16FFC(&Method_System_Linq_Enumerable_Select_BgmPlayArgs__BgmPlayArgs___, v3);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___, v4);
    sub_B16FFC(&Method_System_Func_BgmPlayArgs__BgmPlayArgs___ctor__, v5);
    sub_B16FFC(&System_Func_BgmPlayArgs__BgmPlayArgs__TypeInfo, v6);
    sub_B16FFC(&Method_BgmPlayArgsGroup___c__NullExcludedClone_b__13_0__, v7);
    sub_B16FFC(&BgmPlayArgsGroup___c_TypeInfo, v8);
    byte_40F9064 = 1;
  }
  v13 = (System_Collections_Generic_IEnumerable_TSource__o *)BgmPlayArgsGroup__AllArgsListNullExcluded(this, method);
  v14 = BgmPlayArgsGroup___c_TypeInfo;
  if ( (BYTE3(BgmPlayArgsGroup___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BgmPlayArgsGroup___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmPlayArgsGroup___c_TypeInfo);
    v14 = BgmPlayArgsGroup___c_TypeInfo;
  }
  static_fields = v14->static_fields;
  _9__13_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__13_0;
  if ( !_9__13_0 )
  {
    if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      static_fields = BgmPlayArgsGroup___c_TypeInfo->static_fields;
    }
    v17 = (Il2CppObject *)static_fields->__9;
    _9__13_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B170CC(
                                                                                                 System_Func_BgmPlayArgs__BgmPlayArgs__TypeInfo,
                                                                                                 v9,
                                                                                                 v10,
                                                                                                 v11,
                                                                                                 v12);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__13_0,
      v17,
      Method_BgmPlayArgsGroup___c__NullExcludedClone_b__13_0__,
      (const MethodInfo_2B6C28C *)Method_System_Func_BgmPlayArgs__BgmPlayArgs___ctor__);
    v18 = BgmPlayArgsGroup___c_TypeInfo->static_fields;
    v18->__9__13_0 = (struct System_Func_BgmPlayArgs__BgmPlayArgs__o *)_9__13_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v18->__9__13_0,
      (System_Int32_array **)_9__13_0,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
  }
  v25 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               v13,
                                                               (System_Func_TSource__TResult__o *)_9__13_0,
                                                               (const MethodInfo_19C0B1C *)Method_System_Linq_Enumerable_Select_BgmPlayArgs__BgmPlayArgs___);
  v26 = (BgmPlayArgs_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                               v25,
                               (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
  v31 = (BgmPlayArgsGroup_o *)sub_B170CC(BgmPlayArgsGroup_TypeInfo, v27, v28, v29, v30);
  BgmPlayArgsGroup___ctor_23408980(v31, v26, v32);
  return v31;
}


System_Collections_Generic_List_BgmPlayArgs__o *__fastcall BgmPlayArgsGroup__get_AllArgsList(
        BgmPlayArgsGroup_o *this,
        const MethodInfo *method)
{
  return this->fields._AllArgsList_k__BackingField;
}


MainBgmPlayArgs_o *__fastcall BgmPlayArgsGroup__get_MainArgs(BgmPlayArgsGroup_o *this, const MethodInfo *method)
{
  return this->fields._MainArgs_k__BackingField;
}


System_Collections_Generic_List_SubBgmPlayArgs__o *__fastcall BgmPlayArgsGroup__get_SubArgsList(
        BgmPlayArgsGroup_o *this,
        const MethodInfo *method)
{
  return this->fields._SubArgsList_k__BackingField;
}


void __fastcall BgmPlayArgsGroup__set_AllArgsList(
        BgmPlayArgsGroup_o *this,
        System_Collections_Generic_List_BgmPlayArgs__o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._AllArgsList_k__BackingField = value;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BgmPlayArgsGroup__set_MainArgs(
        BgmPlayArgsGroup_o *this,
        MainBgmPlayArgs_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._MainArgs_k__BackingField = value;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._MainArgs_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BgmPlayArgsGroup__set_SubArgsList(
        BgmPlayArgsGroup_o *this,
        System_Collections_Generic_List_SubBgmPlayArgs__o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._SubArgsList_k__BackingField = value;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._SubArgsList_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BgmPlayArgsGroup___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F71DA & 1) == 0 )
  {
    sub_B16FFC(&BgmPlayArgsGroup___c_TypeInfo, v1);
    byte_40F71DA = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(BgmPlayArgsGroup___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)BgmPlayArgsGroup___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall BgmPlayArgsGroup___c___ctor(BgmPlayArgsGroup___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BgmPlayArgsGroup___c___AllArgsListNullExcluded_b__12_0(
        BgmPlayArgsGroup___c_o *this,
        BgmPlayArgs_o *x,
        const MethodInfo *method)
{
  return x != 0LL;
}


bool __fastcall BgmPlayArgsGroup___c___Initialize_b__17_0(
        BgmPlayArgsGroup___c_o *this,
        BgmPlayArgs_o *x,
        const MethodInfo *method)
{
  __int64 v4; // x10
  bool result; // w0

  if ( (byte_40F71DB & 1) == 0 )
  {
    sub_B16FFC(&MainBgmPlayArgs_TypeInfo, x);
    byte_40F71DB = 1;
  }
  result = x
        && (v4 = *(&MainBgmPlayArgs_TypeInfo->_2.bitflags2 + 1), *(&x->klass->_2.bitflags2 + 1) >= (unsigned int)v4)
        && x->klass->_2.typeHierarchy[v4 - 1] == (Il2CppClass *)MainBgmPlayArgs_TypeInfo;
  return result;
}


BgmPlayArgs_o *__fastcall BgmPlayArgsGroup___c___NullExcludedClone_b__13_0(
        BgmPlayArgsGroup___c_o *this,
        BgmPlayArgs_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return (BgmPlayArgs_o *)((__int64 (__fastcall *)(BgmPlayArgs_o *, const char *))x->klass[1]._1.gc_desc)(
                            x,
                            x->klass[1]._1.name);
}