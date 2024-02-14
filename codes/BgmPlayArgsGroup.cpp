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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x22
  __int64 v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *AllArgsList_k__BackingField; // x21
  _QWORD **v22; // x22
  __int64 v23; // x20
  __int16 v24; // w8
  __int64 v25; // x20
  __int64 v26; // x20
  __int64 v27; // x20
  const MethodInfo *v28; // x1

  if ( (byte_421407C & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Empty_BgmPlayArgs___, mainBgmParam);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BgmPlayArgs__AddRange__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BgmPlayArgs__Add__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BgmPlayArgs___ctor__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_BgmPlayArgs__TypeInfo, v10);
    byte_421407C = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BgmPlayArgs__TypeInfo,
                                                                                                  v11,
                                                                                                  v12);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BgmPlayArgs___ctor__);
  if ( !v13 )
    goto LABEL_19;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v13,
    (EventMissionProgressRequest_Argument_ProgressData_o *)mainBgmParam,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BgmPlayArgs__Add__);
  this->fields._AllArgsList_k__BackingField = (struct System_Collections_Generic_List_BgmPlayArgs__o *)v13;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v13, v15, v16, v17, v18, v19, v20);
  AllArgsList_k__BackingField = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)this->fields._AllArgsList_k__BackingField;
  if ( !otherBgmParams )
  {
    v22 = (_QWORD **)Method_System_Linq_Enumerable_Empty_BgmPlayArgs___;
    v23 = **((_QWORD **)Method_System_Linq_Enumerable_Empty_BgmPlayArgs___ + 6);
    v24 = *(_WORD *)(v23 + 306);
    if ( (v24 & 1) == 0 )
    {
      v14 = sub_AA65A4(**((_QWORD **)Method_System_Linq_Enumerable_Empty_BgmPlayArgs___ + 6));
      v24 = *(_WORD *)(v23 + 306);
    }
    if ( (v24 & 0x400) != 0 )
    {
      v25 = *v22[6];
      if ( (*(_BYTE *)(v25 + 306) & 1) == 0 )
        v14 = sub_AA65A4(*v22[6]);
      if ( !*(_DWORD *)(v25 + 224) )
      {
        v26 = *v22[6];
        if ( (*(_BYTE *)(v26 + 306) & 1) == 0 )
          sub_AA65A4(*v22[6]);
        j_il2cpp_runtime_class_init_0(v26);
      }
    }
    v27 = *v22[6];
    if ( (*(_BYTE *)(v27 + 306) & 1) == 0 )
      v14 = sub_AA65A4(*v22[6]);
    otherBgmParams = **(BgmPlayArgs_array ***)(v27 + 184);
  }
  if ( !AllArgsList_k__BackingField )
LABEL_19:
    sub_B0D97C(v14);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    AllArgsList_k__BackingField,
    (System_Collections_Generic_IEnumerable_T__o *)otherBgmParams,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BgmPlayArgs__AddRange__);
  BgmPlayArgsGroup__Initialize(this, v28);
}


void __fastcall BgmPlayArgsGroup___ctor_23846532(
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
  sub_B0D840((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v11, v12, v13, v14, v15, v16, v17);
  BgmPlayArgsGroup__Initialize(this, v18);
}


void __fastcall BgmPlayArgsGroup___ctor_23861692(
        BgmPlayArgsGroup_o *this,
        BgmPlayArgs_array *bgmParams,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_T__o *v3; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x2
  _QWORD **v9; // x21
  __int64 v10; // x20
  __int16 v11; // w8
  __int64 v12; // x20
  __int64 v13; // x20
  __int64 v14; // x20
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v15; // x21
  __int64 v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  const MethodInfo *v23; // x1

  v3 = (System_Collections_Generic_IEnumerable_T__o *)bgmParams;
  if ( (byte_421407D & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Empty_BgmPlayArgs___, bgmParams);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BgmPlayArgs___ctor___67874816, v5);
    sub_B0D8A4(&System_Collections_Generic_List_BgmPlayArgs__TypeInfo, v6);
    byte_421407D = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !v3 )
  {
    v9 = (_QWORD **)Method_System_Linq_Enumerable_Empty_BgmPlayArgs___;
    v10 = **((_QWORD **)Method_System_Linq_Enumerable_Empty_BgmPlayArgs___ + 6);
    v11 = *(_WORD *)(v10 + 306);
    if ( (v11 & 1) == 0 )
    {
      sub_AA65A4(**((_QWORD **)Method_System_Linq_Enumerable_Empty_BgmPlayArgs___ + 6));
      v11 = *(_WORD *)(v10 + 306);
    }
    if ( (v11 & 0x400) != 0 )
    {
      v12 = *v9[6];
      if ( (*(_BYTE *)(v12 + 306) & 1) == 0 )
        sub_AA65A4(*v9[6]);
      if ( !*(_DWORD *)(v12 + 224) )
      {
        v13 = *v9[6];
        if ( (*(_BYTE *)(v13 + 306) & 1) == 0 )
          sub_AA65A4(*v9[6]);
        j_il2cpp_runtime_class_init_0(v13);
      }
    }
    v14 = *v9[6];
    if ( (*(_BYTE *)(v14 + 306) & 1) == 0 )
      sub_AA65A4(*v9[6]);
    v3 = **(System_Collections_Generic_IEnumerable_T__o ***)(v14 + 184);
  }
  v15 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B0D974(
                                                                          System_Collections_Generic_List_BgmPlayArgs__TypeInfo,
                                                                          v7,
                                                                          v8);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v15,
    v3,
    (const MethodInfo_2FC4C1C *)Method_System_Collections_Generic_List_BgmPlayArgs___ctor___67874816);
  if ( !this )
    sub_B0D97C(v16);
  this->fields._AllArgsList_k__BackingField = (struct System_Collections_Generic_List_BgmPlayArgs__o *)v15;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v15, v17, v18, v19, v20, v21, v22);
  BgmPlayArgsGroup__Initialize(this, v23);
}


System_Collections_Generic_IEnumerable_BgmPlayArgs__o *__fastcall BgmPlayArgsGroup__AllArgsListNullExcluded(
        BgmPlayArgsGroup_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_BgmPlayArgs__o *AllArgsList_k__BackingField; // x19
  BgmPlayArgsGroup___c_c *v9; // x0
  struct BgmPlayArgsGroup___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__12_0; // x20
  Il2CppObject *v12; // x21
  struct BgmPlayArgsGroup___c_StaticFields *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_421407A & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_BgmPlayArgs___, method);
    sub_B0D8A4(&Method_System_Func_BgmPlayArgs__bool___ctor__, v4);
    sub_B0D8A4(&System_Func_BgmPlayArgs__bool__TypeInfo, v5);
    sub_B0D8A4(&Method_BgmPlayArgsGroup___c__AllArgsListNullExcluded_b__12_0__, v6);
    sub_B0D8A4(&BgmPlayArgsGroup___c_TypeInfo, v7);
    byte_421407A = 1;
  }
  AllArgsList_k__BackingField = this->fields._AllArgsList_k__BackingField;
  v9 = BgmPlayArgsGroup___c_TypeInfo;
  if ( (BYTE3(BgmPlayArgsGroup___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BgmPlayArgsGroup___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmPlayArgsGroup___c_TypeInfo);
    v9 = BgmPlayArgsGroup___c_TypeInfo;
  }
  static_fields = v9->static_fields;
  _9__12_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__12_0;
  if ( !_9__12_0 )
  {
    if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      static_fields = BgmPlayArgsGroup___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__12_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                    System_Func_BgmPlayArgs__bool__TypeInfo,
                                                                                    method,
                                                                                    v2);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__12_0,
      v12,
      Method_BgmPlayArgsGroup___c__AllArgsListNullExcluded_b__12_0__,
      (const MethodInfo_26189B8 *)Method_System_Func_BgmPlayArgs__bool___ctor__);
    v13 = BgmPlayArgsGroup___c_TypeInfo->static_fields;
    v13->__9__12_0 = (struct System_Func_BgmPlayArgs__bool__o *)_9__12_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v13->__9__12_0,
      (System_Int32_array **)_9__12_0,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  return (System_Collections_Generic_IEnumerable_BgmPlayArgs__o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                    (System_Collections_Generic_IEnumerable_TSource__o *)AllArgsList_k__BackingField,
                                                                    (System_Func_TSource__bool__o *)_9__12_0,
                                                                    (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_BgmPlayArgs___);
}


void __fastcall BgmPlayArgsGroup__Initialize(BgmPlayArgsGroup_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct System_Collections_Generic_List_BgmPlayArgs__o *AllArgsList_k__BackingField; // x20
  BgmPlayArgsGroup___c_c *v12; // x0
  struct BgmPlayArgsGroup___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__17_0; // x21
  Il2CppObject *v15; // x22
  struct BgmPlayArgsGroup___c_StaticFields *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  peRenderTexture_ChangeLayerObject_o *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  __int64 v30; // x10
  struct MainBgmPlayArgs_o *v31; // x1
  struct MainBgmPlayArgs_o **p_MainArgs_k__BackingField; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x0
  System_Int32_array **v34; // x1
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7

  if ( (byte_421407E & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_OfType_SubBgmPlayArgs___, method);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToList_SubBgmPlayArgs___, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BgmPlayArgs__Find__, v5);
    sub_B0D8A4(&MainBgmPlayArgs_TypeInfo, v6);
    sub_B0D8A4(&Method_System_Predicate_BgmPlayArgs___ctor__, v7);
    sub_B0D8A4(&System_Predicate_BgmPlayArgs__TypeInfo, v8);
    sub_B0D8A4(&Method_BgmPlayArgsGroup___c__Initialize_b__17_0__, v9);
    sub_B0D8A4(&BgmPlayArgsGroup___c_TypeInfo, v10);
    byte_421407E = 1;
  }
  AllArgsList_k__BackingField = this->fields._AllArgsList_k__BackingField;
  v12 = BgmPlayArgsGroup___c_TypeInfo;
  if ( (BYTE3(BgmPlayArgsGroup___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BgmPlayArgsGroup___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmPlayArgsGroup___c_TypeInfo);
    v12 = BgmPlayArgsGroup___c_TypeInfo;
  }
  static_fields = v12->static_fields;
  _9__17_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__17_0;
  if ( !_9__17_0 )
  {
    if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      static_fields = BgmPlayArgsGroup___c_TypeInfo->static_fields;
    }
    v15 = (Il2CppObject *)static_fields->__9;
    _9__17_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                          System_Predicate_BgmPlayArgs__TypeInfo,
                                                                          method,
                                                                          v2);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__17_0,
      v15,
      Method_BgmPlayArgsGroup___c__Initialize_b__17_0__,
      (const MethodInfo_2AF7E30 *)Method_System_Predicate_BgmPlayArgs___ctor__);
    v16 = BgmPlayArgsGroup___c_TypeInfo->static_fields;
    v16->__9__17_0 = (struct System_Predicate_BgmPlayArgs__o *)_9__17_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v16->__9__17_0,
      (System_Int32_array **)_9__17_0,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  if ( !AllArgsList_k__BackingField )
    sub_B0D97C(v12);
  v23 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)AllArgsList_k__BackingField,
          (System_Predicate_T__o *)_9__17_0,
          (const MethodInfo_2FC5FA8 *)Method_System_Collections_Generic_List_BgmPlayArgs__Find__);
  if ( v23
    && (v30 = *(&MainBgmPlayArgs_TypeInfo->_2.bitflags2 + 1), *(&v23->klass->_2.bitflags2 + 1) >= (unsigned int)v30) )
  {
    if ( (MainBgmPlayArgs_c *)v23->klass->_2.typeHierarchy[v30 - 1] == MainBgmPlayArgs_TypeInfo )
      v31 = (struct MainBgmPlayArgs_o *)v23;
    else
      v31 = 0LL;
  }
  else
  {
    v31 = 0LL;
  }
  this->fields._MainArgs_k__BackingField = v31;
  p_MainArgs_k__BackingField = &this->fields._MainArgs_k__BackingField;
  sub_B0D840(
    (BattleServantConfConponent_o *)p_MainArgs_k__BackingField,
    (System_Int32_array **)v31,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  v33 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_WarBoardPartySkillEntity_(
                                                               (System_Collections_IEnumerable_o *)*(p_MainArgs_k__BackingField - 1),
                                                               (const MethodInfo_1B4E6FC *)Method_System_Linq_Enumerable_OfType_SubBgmPlayArgs___);
  v34 = (System_Int32_array **)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                 v33,
                                 (const MethodInfo_1B59168 *)Method_System_Linq_Enumerable_ToList_SubBgmPlayArgs___);
  p_MainArgs_k__BackingField[1] = (struct MainBgmPlayArgs_o *)v34;
  sub_B0D840((BattleServantConfConponent_o *)(p_MainArgs_k__BackingField + 1), v34, v35, v36, v37, v38, v39, v40);
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
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x19
  BgmPlayArgsGroup___c_c *v12; // x8
  struct BgmPlayArgsGroup___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__13_0; // x20
  Il2CppObject *v15; // x21
  struct BgmPlayArgsGroup___c_StaticFields *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0
  BgmPlayArgs_array *v24; // x19
  __int64 v25; // x1
  __int64 v26; // x2
  BgmPlayArgsGroup_o *v27; // x20
  const MethodInfo *v28; // x2

  if ( (byte_421407B & 1) == 0 )
  {
    sub_B0D8A4(&BgmPlayArgsGroup_TypeInfo, method);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Select_BgmPlayArgs__BgmPlayArgs___, v3);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___, v4);
    sub_B0D8A4(&Method_System_Func_BgmPlayArgs__BgmPlayArgs___ctor__, v5);
    sub_B0D8A4(&System_Func_BgmPlayArgs__BgmPlayArgs__TypeInfo, v6);
    sub_B0D8A4(&Method_BgmPlayArgsGroup___c__NullExcludedClone_b__13_0__, v7);
    sub_B0D8A4(&BgmPlayArgsGroup___c_TypeInfo, v8);
    byte_421407B = 1;
  }
  v11 = (System_Collections_Generic_IEnumerable_TSource__o *)BgmPlayArgsGroup__AllArgsListNullExcluded(this, method);
  v12 = BgmPlayArgsGroup___c_TypeInfo;
  if ( (BYTE3(BgmPlayArgsGroup___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BgmPlayArgsGroup___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmPlayArgsGroup___c_TypeInfo);
    v12 = BgmPlayArgsGroup___c_TypeInfo;
  }
  static_fields = v12->static_fields;
  _9__13_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__13_0;
  if ( !_9__13_0 )
  {
    if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      static_fields = BgmPlayArgsGroup___c_TypeInfo->static_fields;
    }
    v15 = (Il2CppObject *)static_fields->__9;
    _9__13_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B0D974(
                                                                                                 System_Func_BgmPlayArgs__BgmPlayArgs__TypeInfo,
                                                                                                 v9,
                                                                                                 v10);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__13_0,
      v15,
      Method_BgmPlayArgsGroup___c__NullExcludedClone_b__13_0__,
      (const MethodInfo_261A104 *)Method_System_Func_BgmPlayArgs__BgmPlayArgs___ctor__);
    v16 = BgmPlayArgsGroup___c_TypeInfo->static_fields;
    v16->__9__13_0 = (struct System_Func_BgmPlayArgs__BgmPlayArgs__o *)_9__13_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v16->__9__13_0,
      (System_Int32_array **)_9__13_0,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  v23 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               v11,
                                                               (System_Func_TSource__TResult__o *)_9__13_0,
                                                               (const MethodInfo_1B5200C *)Method_System_Linq_Enumerable_Select_BgmPlayArgs__BgmPlayArgs___);
  v24 = (BgmPlayArgs_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                               v23,
                               (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
  v27 = (BgmPlayArgsGroup_o *)sub_B0D974(BgmPlayArgsGroup_TypeInfo, v25, v26);
  BgmPlayArgsGroup___ctor_23861692(v27, v24, v28);
  return v27;
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
  sub_B0D840(
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
  sub_B0D840(
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
  sub_B0D840(
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
  Il2CppObject *v3; // x19
  struct BgmPlayArgsGroup___c_StaticFields *static_fields; // x0

  if ( (byte_4211F12 & 1) == 0 )
  {
    sub_B0D8A4(&BgmPlayArgsGroup___c_TypeInfo, v1);
    byte_4211F12 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(BgmPlayArgsGroup___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = BgmPlayArgsGroup___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BgmPlayArgsGroup___c_o *)v3;
  sub_B0D840(static_fields, v3);
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

  if ( (byte_4211F13 & 1) == 0 )
  {
    sub_B0D8A4(&MainBgmPlayArgs_TypeInfo, x);
    byte_4211F13 = 1;
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
    sub_B0D97C(this);
  return (BgmPlayArgs_o *)((__int64 (__fastcall *)(BgmPlayArgs_o *, const char *))x->klass[1]._1.gc_desc)(
                            x,
                            x->klass[1]._1.name);
}