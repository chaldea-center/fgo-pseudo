void __fastcall BgmPlayArgsGroup___ctor(
        BgmPlayArgsGroup_o *this,
        MainBgmPlayArgs_o *mainBgmParam,
        BgmPlayArgs_array *otherBgmParams,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_T__o *v4; // x20
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v19; // x22
  __int64 v20; // x0
  __int64 v21; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *AllArgsList_k__BackingField; // x21
  _QWORD **v29; // x22
  __int64 v30; // x20
  __int16 v31; // w8
  __int64 v32; // x20
  __int64 v33; // x20
  __int64 v34; // x20
  const MethodInfo *v35; // x1

  v4 = (System_Collections_Generic_IEnumerable_T__o *)otherBgmParams;
  if ( (byte_42E7E40 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Linq_Enumerable_Empty_BgmPlayArgs___,
      (_DWORD)mainBgmParam,
      (_DWORD)otherBgmParams,
      method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BgmPlayArgs__AddRange__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BgmPlayArgs__Add__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BgmPlayArgs___ctor__, v13, v14, v15);
    sub_B5D5C4(&System_Collections_Generic_List_BgmPlayArgs__TypeInfo, v16, v17, v18);
    byte_42E7E40 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v19 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BgmPlayArgs__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v19,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BgmPlayArgs___ctor__);
  if ( !v19 )
    goto LABEL_19;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v19,
    (EventMissionProgressRequest_Argument_ProgressData_o *)mainBgmParam,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BgmPlayArgs__Add__);
  this->fields._AllArgsList_k__BackingField = (struct System_Collections_Generic_List_BgmPlayArgs__o *)v19;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v19, v22, v23, v24, v25, v26, v27);
  AllArgsList_k__BackingField = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)this->fields._AllArgsList_k__BackingField;
  if ( !v4 )
  {
    v29 = (_QWORD **)Method_System_Linq_Enumerable_Empty_BgmPlayArgs___;
    v30 = **((_QWORD **)Method_System_Linq_Enumerable_Empty_BgmPlayArgs___ + 6);
    v31 = *(_WORD *)(v30 + 306);
    if ( (v31 & 1) == 0 )
    {
      v20 = sub_AF52C4(**((_QWORD **)Method_System_Linq_Enumerable_Empty_BgmPlayArgs___ + 6));
      v31 = *(_WORD *)(v30 + 306);
    }
    if ( (v31 & 0x400) != 0 )
    {
      v32 = *v29[6];
      if ( (*(_BYTE *)(v32 + 306) & 1) == 0 )
        v20 = sub_AF52C4(*v29[6]);
      if ( !*(_DWORD *)(v32 + 224) )
      {
        v33 = *v29[6];
        if ( (*(_BYTE *)(v33 + 306) & 1) == 0 )
          sub_AF52C4(*v29[6]);
        j_il2cpp_runtime_class_init_0(v33);
      }
    }
    v34 = *v29[6];
    if ( (*(_BYTE *)(v34 + 306) & 1) == 0 )
      v20 = sub_AF52C4(*v29[6]);
    v4 = **(System_Collections_Generic_IEnumerable_T__o ***)(v34 + 184);
  }
  if ( !AllArgsList_k__BackingField )
LABEL_19:
    sub_B5D69C(v20, v21);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    AllArgsList_k__BackingField,
    v4,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BgmPlayArgs__AddRange__);
  BgmPlayArgsGroup__Initialize(this, v35);
}


void __fastcall BgmPlayArgsGroup___ctor_23963936(
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
  sub_B5D560((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v11, v12, v13, v14, v15, v16, v17);
  BgmPlayArgsGroup__Initialize(this, v18);
}


void __fastcall BgmPlayArgsGroup___ctor_23979096(
        BgmPlayArgsGroup_o *this,
        BgmPlayArgs_array *bgmParams,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Collections_Generic_IEnumerable_T__o *v4; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  _QWORD **v12; // x21
  __int64 v13; // x20
  __int16 v14; // w8
  __int64 v15; // x20
  __int64 v16; // x20
  __int64 v17; // x20
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v18; // x21
  __int64 v19; // x0
  __int64 v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  const MethodInfo *v27; // x1

  v4 = (System_Collections_Generic_IEnumerable_T__o *)bgmParams;
  if ( (byte_42E7E41 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Empty_BgmPlayArgs___, (_DWORD)bgmParams, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BgmPlayArgs___ctor___68730040, v6, v7, v8);
    sub_B5D5C4(&System_Collections_Generic_List_BgmPlayArgs__TypeInfo, v9, v10, v11);
    byte_42E7E41 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !v4 )
  {
    v12 = (_QWORD **)Method_System_Linq_Enumerable_Empty_BgmPlayArgs___;
    v13 = **((_QWORD **)Method_System_Linq_Enumerable_Empty_BgmPlayArgs___ + 6);
    v14 = *(_WORD *)(v13 + 306);
    if ( (v14 & 1) == 0 )
    {
      sub_AF52C4(**((_QWORD **)Method_System_Linq_Enumerable_Empty_BgmPlayArgs___ + 6));
      v14 = *(_WORD *)(v13 + 306);
    }
    if ( (v14 & 0x400) != 0 )
    {
      v15 = *v12[6];
      if ( (*(_BYTE *)(v15 + 306) & 1) == 0 )
        sub_AF52C4(*v12[6]);
      if ( !*(_DWORD *)(v15 + 224) )
      {
        v16 = *v12[6];
        if ( (*(_BYTE *)(v16 + 306) & 1) == 0 )
          sub_AF52C4(*v12[6]);
        j_il2cpp_runtime_class_init_0(v16);
      }
    }
    v17 = *v12[6];
    if ( (*(_BYTE *)(v17 + 306) & 1) == 0 )
      sub_AF52C4(*v12[6]);
    v4 = **(System_Collections_Generic_IEnumerable_T__o ***)(v17 + 184);
  }
  v18 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B5D694(System_Collections_Generic_List_BgmPlayArgs__TypeInfo);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v18,
    v4,
    (const MethodInfo_30564F4 *)Method_System_Collections_Generic_List_BgmPlayArgs___ctor___68730040);
  if ( !this )
    sub_B5D69C(v19, v20);
  this->fields._AllArgsList_k__BackingField = (struct System_Collections_Generic_List_BgmPlayArgs__o *)v18;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v18, v21, v22, v23, v24, v25, v26);
  BgmPlayArgsGroup__Initialize(this, v27);
}


System_Collections_Generic_IEnumerable_BgmPlayArgs__o *__fastcall BgmPlayArgsGroup__AllArgsListNullExcluded(
        BgmPlayArgsGroup_o *this,
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
  struct System_Collections_Generic_List_BgmPlayArgs__o *AllArgsList_k__BackingField; // x19
  BgmPlayArgsGroup___c_c *v18; // x0
  struct BgmPlayArgsGroup___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__12_0; // x20
  Il2CppObject *v21; // x21
  struct BgmPlayArgsGroup___c_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_42E7E3E & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_BgmPlayArgs___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Func_BgmPlayArgs__bool___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Func_BgmPlayArgs__bool__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_BgmPlayArgsGroup___c__AllArgsListNullExcluded_b__12_0__, v11, v12, v13);
    sub_B5D5C4(&BgmPlayArgsGroup___c_TypeInfo, v14, v15, v16);
    byte_42E7E3E = 1;
  }
  AllArgsList_k__BackingField = this->fields._AllArgsList_k__BackingField;
  v18 = BgmPlayArgsGroup___c_TypeInfo;
  if ( (BYTE3(BgmPlayArgsGroup___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BgmPlayArgsGroup___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmPlayArgsGroup___c_TypeInfo);
    v18 = BgmPlayArgsGroup___c_TypeInfo;
  }
  static_fields = v18->static_fields;
  _9__12_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__12_0;
  if ( !_9__12_0 )
  {
    if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      static_fields = BgmPlayArgsGroup___c_TypeInfo->static_fields;
    }
    v21 = (Il2CppObject *)static_fields->__9;
    _9__12_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_BgmPlayArgs__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__12_0,
      v21,
      Method_BgmPlayArgsGroup___c__AllArgsListNullExcluded_b__12_0__,
      (const MethodInfo_2C2ECD0 *)Method_System_Func_BgmPlayArgs__bool___ctor__);
    v22 = BgmPlayArgsGroup___c_TypeInfo->static_fields;
    v22->__9__12_0 = (struct System_Func_BgmPlayArgs__bool__o *)_9__12_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v22->__9__12_0,
      (System_Int32_array **)_9__12_0,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
  }
  return (System_Collections_Generic_IEnumerable_BgmPlayArgs__o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                    (System_Collections_Generic_IEnumerable_TSource__o *)AllArgsList_k__BackingField,
                                                                    (System_Func_TSource__bool__o *)_9__12_0,
                                                                    (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_BgmPlayArgs___);
}


void __fastcall BgmPlayArgsGroup__Initialize(BgmPlayArgsGroup_o *this, const MethodInfo *method)
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
  struct System_Collections_Generic_List_BgmPlayArgs__o *AllArgsList_k__BackingField; // x20
  BgmPlayArgsGroup___c_c *v27; // x0
  struct BgmPlayArgsGroup___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__17_0; // x21
  Il2CppObject *v30; // x22
  struct BgmPlayArgsGroup___c_StaticFields *v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  peRenderTexture_ChangeLayerObject_o *v38; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  __int64 v45; // x10
  struct MainBgmPlayArgs_o *v46; // x1
  struct MainBgmPlayArgs_o **p_MainArgs_k__BackingField; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x0
  System_Int32_array **v49; // x1
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7

  if ( (byte_42E7E42 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_OfType_SubBgmPlayArgs___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToList_SubBgmPlayArgs___, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BgmPlayArgs__Find__, v8, v9, v10);
    sub_B5D5C4(&MainBgmPlayArgs_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_System_Predicate_BgmPlayArgs___ctor__, v14, v15, v16);
    sub_B5D5C4(&System_Predicate_BgmPlayArgs__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_BgmPlayArgsGroup___c__Initialize_b__17_0__, v20, v21, v22);
    sub_B5D5C4(&BgmPlayArgsGroup___c_TypeInfo, v23, v24, v25);
    byte_42E7E42 = 1;
  }
  AllArgsList_k__BackingField = this->fields._AllArgsList_k__BackingField;
  v27 = BgmPlayArgsGroup___c_TypeInfo;
  if ( (BYTE3(BgmPlayArgsGroup___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BgmPlayArgsGroup___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmPlayArgsGroup___c_TypeInfo);
    v27 = BgmPlayArgsGroup___c_TypeInfo;
  }
  static_fields = v27->static_fields;
  _9__17_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__17_0;
  if ( !_9__17_0 )
  {
    if ( (BYTE3(v27->vtable._0_Equals.methodPtr) & 4) != 0 && !v27->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v27);
      static_fields = BgmPlayArgsGroup___c_TypeInfo->static_fields;
    }
    v30 = (Il2CppObject *)static_fields->__9;
    _9__17_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_BgmPlayArgs__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__17_0,
      v30,
      Method_BgmPlayArgsGroup___c__Initialize_b__17_0__,
      (const MethodInfo_2B9320C *)Method_System_Predicate_BgmPlayArgs___ctor__);
    v31 = BgmPlayArgsGroup___c_TypeInfo->static_fields;
    v31->__9__17_0 = (struct System_Predicate_BgmPlayArgs__o *)_9__17_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v31->__9__17_0,
      (System_Int32_array **)_9__17_0,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37);
  }
  if ( !AllArgsList_k__BackingField )
    sub_B5D69C(v27, method);
  v38 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)AllArgsList_k__BackingField,
          (System_Predicate_T__o *)_9__17_0,
          (const MethodInfo_3057880 *)Method_System_Collections_Generic_List_BgmPlayArgs__Find__);
  if ( v38
    && (v45 = *(&MainBgmPlayArgs_TypeInfo->_2.bitflags2 + 1), *(&v38->klass->_2.bitflags2 + 1) >= (unsigned int)v45) )
  {
    if ( (MainBgmPlayArgs_c *)v38->klass->_2.typeHierarchy[v45 - 1] == MainBgmPlayArgs_TypeInfo )
      v46 = (struct MainBgmPlayArgs_o *)v38;
    else
      v46 = 0LL;
  }
  else
  {
    v46 = 0LL;
  }
  this->fields._MainArgs_k__BackingField = v46;
  p_MainArgs_k__BackingField = &this->fields._MainArgs_k__BackingField;
  sub_B5D560(
    (BattleServantConfConponent_o *)p_MainArgs_k__BackingField,
    (System_Int32_array **)v46,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  v48 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_BattleActionData_MasterBuffData_(
                                                               (System_Collections_IEnumerable_o *)*(p_MainArgs_k__BackingField - 1),
                                                               (const MethodInfo_1CAEFE0 *)Method_System_Linq_Enumerable_OfType_SubBgmPlayArgs___);
  v49 = (System_Int32_array **)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                 v48,
                                 (const MethodInfo_1CBA734 *)Method_System_Linq_Enumerable_ToList_SubBgmPlayArgs___);
  p_MainArgs_k__BackingField[1] = (struct MainBgmPlayArgs_o *)v49;
  sub_B5D560((BattleServantConfConponent_o *)(p_MainArgs_k__BackingField + 1), v49, v50, v51, v52, v53, v54, v55);
}


BgmPlayArgsGroup_o *__fastcall BgmPlayArgsGroup__NullExcludedClone(BgmPlayArgsGroup_o *this, const MethodInfo *method)
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
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x19
  BgmPlayArgsGroup___c_c *v24; // x8
  struct BgmPlayArgsGroup___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__13_0; // x20
  Il2CppObject *v27; // x21
  struct BgmPlayArgsGroup___c_StaticFields *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x0
  BgmPlayArgs_array *v36; // x19
  BgmPlayArgsGroup_o *v37; // x20
  const MethodInfo *v38; // x2

  if ( (byte_42E7E3F & 1) == 0 )
  {
    sub_B5D5C4(&BgmPlayArgsGroup_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_BgmPlayArgs__BgmPlayArgs___, v5, v6, v7);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___, v8, v9, v10);
    sub_B5D5C4(&Method_System_Func_BgmPlayArgs__BgmPlayArgs___ctor__, v11, v12, v13);
    sub_B5D5C4(&System_Func_BgmPlayArgs__BgmPlayArgs__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_BgmPlayArgsGroup___c__NullExcludedClone_b__13_0__, v17, v18, v19);
    sub_B5D5C4(&BgmPlayArgsGroup___c_TypeInfo, v20, v21, v22);
    byte_42E7E3F = 1;
  }
  v23 = (System_Collections_Generic_IEnumerable_TSource__o *)BgmPlayArgsGroup__AllArgsListNullExcluded(this, method);
  v24 = BgmPlayArgsGroup___c_TypeInfo;
  if ( (BYTE3(BgmPlayArgsGroup___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BgmPlayArgsGroup___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmPlayArgsGroup___c_TypeInfo);
    v24 = BgmPlayArgsGroup___c_TypeInfo;
  }
  static_fields = v24->static_fields;
  _9__13_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__13_0;
  if ( !_9__13_0 )
  {
    if ( (BYTE3(v24->vtable._0_Equals.methodPtr) & 4) != 0 && !v24->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v24);
      static_fields = BgmPlayArgsGroup___c_TypeInfo->static_fields;
    }
    v27 = (Il2CppObject *)static_fields->__9;
    _9__13_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B5D694(System_Func_BgmPlayArgs__BgmPlayArgs__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__13_0,
      v27,
      Method_BgmPlayArgsGroup___c__NullExcludedClone_b__13_0__,
      (const MethodInfo_2C3041C *)Method_System_Func_BgmPlayArgs__BgmPlayArgs___ctor__);
    v28 = BgmPlayArgsGroup___c_TypeInfo->static_fields;
    v28->__9__13_0 = (struct System_Func_BgmPlayArgs__BgmPlayArgs__o *)_9__13_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v28->__9__13_0,
      (System_Int32_array **)_9__13_0,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
  }
  v35 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               v23,
                                                               (System_Func_TSource__TResult__o *)_9__13_0,
                                                               (const MethodInfo_1CB354C *)Method_System_Linq_Enumerable_Select_BgmPlayArgs__BgmPlayArgs___);
  v36 = (BgmPlayArgs_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                               v35,
                               (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
  v37 = (BgmPlayArgsGroup_o *)sub_B5D694(BgmPlayArgsGroup_TypeInfo);
  BgmPlayArgsGroup___ctor_23979096(v37, v36, v38);
  return v37;
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
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct BgmPlayArgsGroup___c_StaticFields *static_fields; // x0

  if ( (byte_42E5DFD & 1) == 0 )
  {
    sub_B5D5C4(&BgmPlayArgsGroup___c_TypeInfo, v1, v2, v3);
    byte_42E5DFD = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(BgmPlayArgsGroup___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = BgmPlayArgsGroup___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BgmPlayArgsGroup___c_o *)v4;
  sub_B5D560(static_fields);
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
  __int64 v3; // x3
  __int64 v5; // x10
  bool result; // w0

  if ( (byte_42E5DFE & 1) == 0 )
  {
    sub_B5D5C4(&MainBgmPlayArgs_TypeInfo, (_DWORD)x, (_DWORD)method, v3);
    byte_42E5DFE = 1;
  }
  result = x
        && (v5 = *(&MainBgmPlayArgs_TypeInfo->_2.bitflags2 + 1), *(&x->klass->_2.bitflags2 + 1) >= (unsigned int)v5)
        && x->klass->_2.typeHierarchy[v5 - 1] == (Il2CppClass *)MainBgmPlayArgs_TypeInfo;
  return result;
}


BgmPlayArgs_o *__fastcall BgmPlayArgsGroup___c___NullExcludedClone_b__13_0(
        BgmPlayArgsGroup___c_o *this,
        BgmPlayArgs_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return (BgmPlayArgs_o *)((__int64 (__fastcall *)(BgmPlayArgs_o *, const char *))x->klass[1]._1.gc_desc)(
                            x,
                            x->klass[1]._1.name);
}