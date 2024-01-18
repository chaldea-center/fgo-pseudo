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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *AllArgsList_k__BackingField; // x21
  _QWORD **v21; // x22
  __int64 v22; // x20
  __int16 v23; // w8
  __int64 v24; // x20
  __int64 v25; // x20
  __int64 v26; // x20
  const MethodInfo *v27; // x1

  if ( (byte_41875B9 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_Empty_BgmPlayArgs___, mainBgmParam);
    sub_B2C35C(&Method_System_Collections_Generic_List_BgmPlayArgs__AddRange__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_BgmPlayArgs__Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_BgmPlayArgs___ctor__, v9);
    sub_B2C35C(&System_Collections_Generic_List_BgmPlayArgs__TypeInfo, v10);
    byte_41875B9 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BgmPlayArgs__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BgmPlayArgs___ctor__);
  if ( !v11 )
    goto LABEL_19;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v11,
    (EventMissionProgressRequest_Argument_ProgressData_o *)mainBgmParam,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BgmPlayArgs__Add__);
  this->fields._AllArgsList_k__BackingField = (struct System_Collections_Generic_List_BgmPlayArgs__o *)v11;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v11, v14, v15, v16, v17, v18, v19);
  AllArgsList_k__BackingField = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)this->fields._AllArgsList_k__BackingField;
  if ( !otherBgmParams )
  {
    v21 = (_QWORD **)Method_System_Linq_Enumerable_Empty_BgmPlayArgs___;
    v22 = **((_QWORD **)Method_System_Linq_Enumerable_Empty_BgmPlayArgs___ + 6);
    v23 = *(_WORD *)(v22 + 306);
    if ( (v23 & 1) == 0 )
    {
      v12 = sub_AC505C(**((_QWORD **)Method_System_Linq_Enumerable_Empty_BgmPlayArgs___ + 6));
      v23 = *(_WORD *)(v22 + 306);
    }
    if ( (v23 & 0x400) != 0 )
    {
      v24 = *v21[6];
      if ( (*(_BYTE *)(v24 + 306) & 1) == 0 )
        v12 = sub_AC505C(*v21[6]);
      if ( !*(_DWORD *)(v24 + 224) )
      {
        v25 = *v21[6];
        if ( (*(_BYTE *)(v25 + 306) & 1) == 0 )
          sub_AC505C(*v21[6]);
        j_il2cpp_runtime_class_init_0(v25);
      }
    }
    v26 = *v21[6];
    if ( (*(_BYTE *)(v26 + 306) & 1) == 0 )
      v12 = sub_AC505C(*v21[6]);
    otherBgmParams = **(BgmPlayArgs_array ***)(v26 + 184);
  }
  if ( !AllArgsList_k__BackingField )
LABEL_19:
    sub_B2C434(v12, v13);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    AllArgsList_k__BackingField,
    (System_Collections_Generic_IEnumerable_T__o *)otherBgmParams,
    (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_BgmPlayArgs__AddRange__);
  BgmPlayArgsGroup__Initialize(this, v27);
}


void __fastcall BgmPlayArgsGroup___ctor_24707668(
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
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v11, v12, v13, v14, v15, v16, v17);
  BgmPlayArgsGroup__Initialize(this, v18);
}


void __fastcall BgmPlayArgsGroup___ctor_24722828(
        BgmPlayArgsGroup_o *this,
        BgmPlayArgs_array *bgmParams,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_T__o *v3; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  _QWORD **v7; // x21
  __int64 v8; // x20
  __int16 v9; // w8
  __int64 v10; // x20
  __int64 v11; // x20
  __int64 v12; // x20
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v13; // x21
  __int64 v14; // x0
  __int64 v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  const MethodInfo *v22; // x1

  v3 = (System_Collections_Generic_IEnumerable_T__o *)bgmParams;
  if ( (byte_41875BA & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_Empty_BgmPlayArgs___, bgmParams);
    sub_B2C35C(&Method_System_Collections_Generic_List_BgmPlayArgs___ctor___67301256, v5);
    sub_B2C35C(&System_Collections_Generic_List_BgmPlayArgs__TypeInfo, v6);
    byte_41875BA = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !v3 )
  {
    v7 = (_QWORD **)Method_System_Linq_Enumerable_Empty_BgmPlayArgs___;
    v8 = **((_QWORD **)Method_System_Linq_Enumerable_Empty_BgmPlayArgs___ + 6);
    v9 = *(_WORD *)(v8 + 306);
    if ( (v9 & 1) == 0 )
    {
      sub_AC505C(**((_QWORD **)Method_System_Linq_Enumerable_Empty_BgmPlayArgs___ + 6));
      v9 = *(_WORD *)(v8 + 306);
    }
    if ( (v9 & 0x400) != 0 )
    {
      v10 = *v7[6];
      if ( (*(_BYTE *)(v10 + 306) & 1) == 0 )
        sub_AC505C(*v7[6]);
      if ( !*(_DWORD *)(v10 + 224) )
      {
        v11 = *v7[6];
        if ( (*(_BYTE *)(v11 + 306) & 1) == 0 )
          sub_AC505C(*v7[6]);
        j_il2cpp_runtime_class_init_0(v11);
      }
    }
    v12 = *v7[6];
    if ( (*(_BYTE *)(v12 + 306) & 1) == 0 )
      sub_AC505C(*v7[6]);
    v3 = **(System_Collections_Generic_IEnumerable_T__o ***)(v12 + 184);
  }
  v13 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B2C42C(System_Collections_Generic_List_BgmPlayArgs__TypeInfo);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v13,
    v3,
    (const MethodInfo_2EF3994 *)Method_System_Collections_Generic_List_BgmPlayArgs___ctor___67301256);
  if ( !this )
    sub_B2C434(v14, v15);
  this->fields._AllArgsList_k__BackingField = (struct System_Collections_Generic_List_BgmPlayArgs__o *)v13;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v13, v16, v17, v18, v19, v20, v21);
  BgmPlayArgsGroup__Initialize(this, v22);
}


System_Collections_Generic_IEnumerable_BgmPlayArgs__o *__fastcall BgmPlayArgsGroup__AllArgsListNullExcluded(
        BgmPlayArgsGroup_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_BgmPlayArgs__o *AllArgsList_k__BackingField; // x19
  BgmPlayArgsGroup___c_c *v8; // x0
  struct BgmPlayArgsGroup___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__12_0; // x20
  Il2CppObject *v11; // x21
  struct BgmPlayArgsGroup___c_StaticFields *v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_41875B7 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_BgmPlayArgs___, method);
    sub_B2C35C(&Method_System_Func_BgmPlayArgs__bool___ctor__, v3);
    sub_B2C35C(&System_Func_BgmPlayArgs__bool__TypeInfo, v4);
    sub_B2C35C(&Method_BgmPlayArgsGroup___c__AllArgsListNullExcluded_b__12_0__, v5);
    sub_B2C35C(&BgmPlayArgsGroup___c_TypeInfo, v6);
    byte_41875B7 = 1;
  }
  AllArgsList_k__BackingField = this->fields._AllArgsList_k__BackingField;
  v8 = BgmPlayArgsGroup___c_TypeInfo;
  if ( (BYTE3(BgmPlayArgsGroup___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BgmPlayArgsGroup___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmPlayArgsGroup___c_TypeInfo);
    v8 = BgmPlayArgsGroup___c_TypeInfo;
  }
  static_fields = v8->static_fields;
  _9__12_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__12_0;
  if ( !_9__12_0 )
  {
    if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      static_fields = BgmPlayArgsGroup___c_TypeInfo->static_fields;
    }
    v11 = (Il2CppObject *)static_fields->__9;
    _9__12_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_BgmPlayArgs__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__12_0,
      v11,
      Method_BgmPlayArgsGroup___c__AllArgsListNullExcluded_b__12_0__,
      (const MethodInfo_2711C04 *)Method_System_Func_BgmPlayArgs__bool___ctor__);
    v12 = BgmPlayArgsGroup___c_TypeInfo->static_fields;
    v12->__9__12_0 = (struct System_Func_BgmPlayArgs__bool__o *)_9__12_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v12->__9__12_0,
      (System_Int32_array **)_9__12_0,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  return (System_Collections_Generic_IEnumerable_BgmPlayArgs__o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                    (System_Collections_Generic_IEnumerable_TSource__o *)AllArgsList_k__BackingField,
                                                                    (System_Func_TSource__bool__o *)_9__12_0,
                                                                    (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_BgmPlayArgs___);
}


void __fastcall BgmPlayArgsGroup__Initialize(BgmPlayArgsGroup_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Collections_Generic_List_BgmPlayArgs__o *AllArgsList_k__BackingField; // x20
  BgmPlayArgsGroup___c_c *v11; // x0
  struct BgmPlayArgsGroup___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__17_0; // x21
  Il2CppObject *v14; // x22
  struct BgmPlayArgsGroup___c_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  peRenderTexture_ChangeLayerObject_o *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  __int64 v29; // x10
  struct MainBgmPlayArgs_o *v30; // x1
  struct MainBgmPlayArgs_o **p_MainArgs_k__BackingField; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0
  System_Int32_array **v33; // x1
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7

  if ( (byte_41875BB & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_OfType_SubBgmPlayArgs___, method);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToList_SubBgmPlayArgs___, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_BgmPlayArgs__Find__, v4);
    sub_B2C35C(&MainBgmPlayArgs_TypeInfo, v5);
    sub_B2C35C(&Method_System_Predicate_BgmPlayArgs___ctor__, v6);
    sub_B2C35C(&System_Predicate_BgmPlayArgs__TypeInfo, v7);
    sub_B2C35C(&Method_BgmPlayArgsGroup___c__Initialize_b__17_0__, v8);
    sub_B2C35C(&BgmPlayArgsGroup___c_TypeInfo, v9);
    byte_41875BB = 1;
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
  _9__17_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__17_0;
  if ( !_9__17_0 )
  {
    if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      static_fields = BgmPlayArgsGroup___c_TypeInfo->static_fields;
    }
    v14 = (Il2CppObject *)static_fields->__9;
    _9__17_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_BgmPlayArgs__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__17_0,
      v14,
      Method_BgmPlayArgsGroup___c__Initialize_b__17_0__,
      (const MethodInfo_2952BE4 *)Method_System_Predicate_BgmPlayArgs___ctor__);
    v15 = BgmPlayArgsGroup___c_TypeInfo->static_fields;
    v15->__9__17_0 = (struct System_Predicate_BgmPlayArgs__o *)_9__17_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v15->__9__17_0,
      (System_Int32_array **)_9__17_0,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  if ( !AllArgsList_k__BackingField )
    sub_B2C434(v11, method);
  v22 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)AllArgsList_k__BackingField,
          (System_Predicate_T__o *)_9__17_0,
          (const MethodInfo_2EF4D20 *)Method_System_Collections_Generic_List_BgmPlayArgs__Find__);
  if ( v22
    && (v29 = *(&MainBgmPlayArgs_TypeInfo->_2.bitflags2 + 1), *(&v22->klass->_2.bitflags2 + 1) >= (unsigned int)v29) )
  {
    if ( (MainBgmPlayArgs_c *)v22->klass->_2.typeHierarchy[v29 - 1] == MainBgmPlayArgs_TypeInfo )
      v30 = (struct MainBgmPlayArgs_o *)v22;
    else
      v30 = 0LL;
  }
  else
  {
    v30 = 0LL;
  }
  this->fields._MainArgs_k__BackingField = v30;
  p_MainArgs_k__BackingField = &this->fields._MainArgs_k__BackingField;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)p_MainArgs_k__BackingField,
    (System_Int32_array **)v30,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  v32 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_WarBoardPartySkillEntity_(
                                                               (System_Collections_IEnumerable_o *)*(p_MainArgs_k__BackingField - 1),
                                                               (const MethodInfo_1A93430 *)Method_System_Linq_Enumerable_OfType_SubBgmPlayArgs___);
  v33 = (System_Int32_array **)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                 v32,
                                 (const MethodInfo_1A9DE9C *)Method_System_Linq_Enumerable_ToList_SubBgmPlayArgs___);
  p_MainArgs_k__BackingField[1] = (struct MainBgmPlayArgs_o *)v33;
  sub_B2C2F8((BattleServantConfConponent_o *)(p_MainArgs_k__BackingField + 1), v33, v34, v35, v36, v37, v38, v39);
}


BgmPlayArgsGroup_o *__fastcall BgmPlayArgsGroup__NullExcludedClone(BgmPlayArgsGroup_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x19
  BgmPlayArgsGroup___c_c *v10; // x8
  struct BgmPlayArgsGroup___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__13_0; // x20
  Il2CppObject *v13; // x21
  struct BgmPlayArgsGroup___c_StaticFields *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0
  BgmPlayArgs_array *v22; // x19
  BgmPlayArgsGroup_o *v23; // x20
  const MethodInfo *v24; // x2

  if ( (byte_41875B8 & 1) == 0 )
  {
    sub_B2C35C(&BgmPlayArgsGroup_TypeInfo, method);
    sub_B2C35C(&Method_System_Linq_Enumerable_Select_BgmPlayArgs__BgmPlayArgs___, v3);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___, v4);
    sub_B2C35C(&Method_System_Func_BgmPlayArgs__BgmPlayArgs___ctor__, v5);
    sub_B2C35C(&System_Func_BgmPlayArgs__BgmPlayArgs__TypeInfo, v6);
    sub_B2C35C(&Method_BgmPlayArgsGroup___c__NullExcludedClone_b__13_0__, v7);
    sub_B2C35C(&BgmPlayArgsGroup___c_TypeInfo, v8);
    byte_41875B8 = 1;
  }
  v9 = (System_Collections_Generic_IEnumerable_TSource__o *)BgmPlayArgsGroup__AllArgsListNullExcluded(this, method);
  v10 = BgmPlayArgsGroup___c_TypeInfo;
  if ( (BYTE3(BgmPlayArgsGroup___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BgmPlayArgsGroup___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmPlayArgsGroup___c_TypeInfo);
    v10 = BgmPlayArgsGroup___c_TypeInfo;
  }
  static_fields = v10->static_fields;
  _9__13_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__13_0;
  if ( !_9__13_0 )
  {
    if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      static_fields = BgmPlayArgsGroup___c_TypeInfo->static_fields;
    }
    v13 = (Il2CppObject *)static_fields->__9;
    _9__13_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B2C42C(System_Func_BgmPlayArgs__BgmPlayArgs__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__13_0,
      v13,
      Method_BgmPlayArgsGroup___c__NullExcludedClone_b__13_0__,
      (const MethodInfo_2713350 *)Method_System_Func_BgmPlayArgs__BgmPlayArgs___ctor__);
    v14 = BgmPlayArgsGroup___c_TypeInfo->static_fields;
    v14->__9__13_0 = (struct System_Func_BgmPlayArgs__BgmPlayArgs__o *)_9__13_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v14->__9__13_0,
      (System_Int32_array **)_9__13_0,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  v21 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               v9,
                                                               (System_Func_TSource__TResult__o *)_9__13_0,
                                                               (const MethodInfo_1A96D40 *)Method_System_Linq_Enumerable_Select_BgmPlayArgs__BgmPlayArgs___);
  v22 = (BgmPlayArgs_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                               v21,
                               (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
  v23 = (BgmPlayArgsGroup_o *)sub_B2C42C(BgmPlayArgsGroup_TypeInfo);
  BgmPlayArgsGroup___ctor_24722828(v23, v22, v24);
  return v23;
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
  sub_B2C2F8(
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
  sub_B2C2F8(
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
  sub_B2C2F8(
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
  Il2CppObject *v2; // x19
  struct BgmPlayArgsGroup___c_StaticFields *static_fields; // x0

  if ( (byte_41850E6 & 1) == 0 )
  {
    sub_B2C35C(&BgmPlayArgsGroup___c_TypeInfo, v1);
    byte_41850E6 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(BgmPlayArgsGroup___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = BgmPlayArgsGroup___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BgmPlayArgsGroup___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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

  if ( (byte_41850E7 & 1) == 0 )
  {
    sub_B2C35C(&MainBgmPlayArgs_TypeInfo, x);
    byte_41850E7 = 1;
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
    sub_B2C434(this, 0LL);
  return (BgmPlayArgs_o *)((__int64 (__fastcall *)(BgmPlayArgs_o *, const char *))x->klass[1]._1.gc_desc)(
                            x,
                            x->klass[1]._1.name);
}