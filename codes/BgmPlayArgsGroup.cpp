void __fastcall BgmPlayArgsGroup___ctor(
        BgmPlayArgsGroup_o *this,
        MainBgmPlayArgs_o *mainBgmParam,
        BgmPlayArgs_array *otherBgmParams,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *AllArgsList_k__BackingField; // x21
  _QWORD **v17; // x22
  __int64 v18; // x20
  __int16 v19; // w8
  __int64 v20; // x20
  __int64 v21; // x20
  __int64 v22; // x20
  const MethodInfo *v23; // x1

  if ( (byte_42AFCD6 & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_Empty_BgmPlayArgs___);
    sub_B52984(&Method_System_Collections_Generic_List_BgmPlayArgs__AddRange__);
    sub_B52984(&Method_System_Collections_Generic_List_BgmPlayArgs__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_BgmPlayArgs___ctor__);
    sub_B52984(&System_Collections_Generic_List_BgmPlayArgs__TypeInfo);
    byte_42AFCD6 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_BgmPlayArgs__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_BgmPlayArgs___ctor__);
  if ( !v7 )
    goto LABEL_19;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v7,
    (EventMissionProgressRequest_Argument_ProgressData_o *)mainBgmParam,
    (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_BgmPlayArgs__Add__);
  this->fields._AllArgsList_k__BackingField = (struct System_Collections_Generic_List_BgmPlayArgs__o *)v7;
  sub_B52920((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v7, v10, v11, v12, v13, v14, v15);
  AllArgsList_k__BackingField = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)this->fields._AllArgsList_k__BackingField;
  if ( !otherBgmParams )
  {
    v17 = (_QWORD **)Method_System_Linq_Enumerable_Empty_BgmPlayArgs___;
    v18 = **((_QWORD **)Method_System_Linq_Enumerable_Empty_BgmPlayArgs___ + 6);
    v19 = *(_WORD *)(v18 + 306);
    if ( (v19 & 1) == 0 )
    {
      v8 = sub_AEB684(**((_QWORD **)Method_System_Linq_Enumerable_Empty_BgmPlayArgs___ + 6));
      v19 = *(_WORD *)(v18 + 306);
    }
    if ( (v19 & 0x400) != 0 )
    {
      v20 = *v17[6];
      if ( (*(_BYTE *)(v20 + 306) & 1) == 0 )
        v8 = sub_AEB684(*v17[6]);
      if ( !*(_DWORD *)(v20 + 224) )
      {
        v21 = *v17[6];
        if ( (*(_BYTE *)(v21 + 306) & 1) == 0 )
          sub_AEB684(*v17[6]);
        j_il2cpp_runtime_class_init_0(v21);
      }
    }
    v22 = *v17[6];
    if ( (*(_BYTE *)(v22 + 306) & 1) == 0 )
      v8 = sub_AEB684(*v17[6]);
    otherBgmParams = **(BgmPlayArgs_array ***)(v22 + 184);
  }
  if ( !AllArgsList_k__BackingField )
LABEL_19:
    sub_B52A5C(v8, v9);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    AllArgsList_k__BackingField,
    (System_Collections_Generic_IEnumerable_T__o *)otherBgmParams,
    (const MethodInfo_2FF1854 *)Method_System_Collections_Generic_List_BgmPlayArgs__AddRange__);
  BgmPlayArgsGroup__Initialize(this, v23);
}


void __fastcall BgmPlayArgsGroup___ctor_24800372(
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
  sub_B52920((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v11, v12, v13, v14, v15, v16, v17);
  BgmPlayArgsGroup__Initialize(this, v18);
}


void __fastcall BgmPlayArgsGroup___ctor_24815532(
        BgmPlayArgsGroup_o *this,
        BgmPlayArgs_array *bgmParams,
        const MethodInfo *method)
{
  _QWORD **v5; // x21
  __int64 v6; // x20
  __int16 v7; // w8
  __int64 v8; // x20
  __int64 v9; // x20
  __int64 v10; // x20
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v11; // x21
  __int64 v12; // x0
  __int64 v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  const MethodInfo *v20; // x1

  if ( (byte_42AFCD7 & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_Empty_BgmPlayArgs___);
    sub_B52984(&Method_System_Collections_Generic_List_BgmPlayArgs___ctor___68502680);
    sub_B52984(&System_Collections_Generic_List_BgmPlayArgs__TypeInfo);
    byte_42AFCD7 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !bgmParams )
  {
    v5 = (_QWORD **)Method_System_Linq_Enumerable_Empty_BgmPlayArgs___;
    v6 = **((_QWORD **)Method_System_Linq_Enumerable_Empty_BgmPlayArgs___ + 6);
    v7 = *(_WORD *)(v6 + 306);
    if ( (v7 & 1) == 0 )
    {
      sub_AEB684(**((_QWORD **)Method_System_Linq_Enumerable_Empty_BgmPlayArgs___ + 6));
      v7 = *(_WORD *)(v6 + 306);
    }
    if ( (v7 & 0x400) != 0 )
    {
      v8 = *v5[6];
      if ( (*(_BYTE *)(v8 + 306) & 1) == 0 )
        sub_AEB684(*v5[6]);
      if ( !*(_DWORD *)(v8 + 224) )
      {
        v9 = *v5[6];
        if ( (*(_BYTE *)(v9 + 306) & 1) == 0 )
          sub_AEB684(*v5[6]);
        j_il2cpp_runtime_class_init_0(v9);
      }
    }
    v10 = *v5[6];
    if ( (*(_BYTE *)(v10 + 306) & 1) == 0 )
      sub_AEB684(*v5[6]);
    bgmParams = **(BgmPlayArgs_array ***)(v10 + 184);
  }
  v11 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B52A54(System_Collections_Generic_List_BgmPlayArgs__TypeInfo);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v11,
    (System_Collections_Generic_IEnumerable_T__o *)bgmParams,
    (const MethodInfo_2FF0B38 *)Method_System_Collections_Generic_List_BgmPlayArgs___ctor___68502680);
  if ( !this )
    sub_B52A5C(v12, v13);
  this->fields._AllArgsList_k__BackingField = (struct System_Collections_Generic_List_BgmPlayArgs__o *)v11;
  sub_B52920((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v11, v14, v15, v16, v17, v18, v19);
  BgmPlayArgsGroup__Initialize(this, v20);
}


System_Collections_Generic_IEnumerable_BgmPlayArgs__o *__fastcall BgmPlayArgsGroup__AllArgsListNullExcluded(
        BgmPlayArgsGroup_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_BgmPlayArgs__o *AllArgsList_k__BackingField; // x19
  BgmPlayArgsGroup___c_c *v4; // x0
  struct BgmPlayArgsGroup___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__12_0; // x20
  Il2CppObject *v7; // x21
  struct BgmPlayArgsGroup___c_StaticFields *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42AFCD4 & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_Where_BgmPlayArgs___);
    sub_B52984(&Method_System_Func_BgmPlayArgs__bool___ctor__);
    sub_B52984(&System_Func_BgmPlayArgs__bool__TypeInfo);
    sub_B52984(&Method_BgmPlayArgsGroup___c__AllArgsListNullExcluded_b__12_0__);
    sub_B52984(&BgmPlayArgsGroup___c_TypeInfo);
    byte_42AFCD4 = 1;
  }
  AllArgsList_k__BackingField = this->fields._AllArgsList_k__BackingField;
  v4 = BgmPlayArgsGroup___c_TypeInfo;
  if ( (BYTE3(BgmPlayArgsGroup___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BgmPlayArgsGroup___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmPlayArgsGroup___c_TypeInfo);
    v4 = BgmPlayArgsGroup___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__12_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__12_0;
  if ( !_9__12_0 )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      static_fields = BgmPlayArgsGroup___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__12_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_BgmPlayArgs__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__12_0,
      v7,
      Method_BgmPlayArgsGroup___c__AllArgsListNullExcluded_b__12_0__,
      (const MethodInfo_2BC90BC *)Method_System_Func_BgmPlayArgs__bool___ctor__);
    v8 = BgmPlayArgsGroup___c_TypeInfo->static_fields;
    v8->__9__12_0 = (struct System_Func_BgmPlayArgs__bool__o *)_9__12_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v8->__9__12_0,
      (System_Int32_array **)_9__12_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  return (System_Collections_Generic_IEnumerable_BgmPlayArgs__o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                    (System_Collections_Generic_IEnumerable_TSource__o *)AllArgsList_k__BackingField,
                                                                    (System_Func_TSource__bool__o *)_9__12_0,
                                                                    (const MethodInfo_1B72CC0 *)Method_System_Linq_Enumerable_Where_BgmPlayArgs___);
}


void __fastcall BgmPlayArgsGroup__Initialize(BgmPlayArgsGroup_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_BgmPlayArgs__o *AllArgsList_k__BackingField; // x20
  BgmPlayArgsGroup___c_c *v4; // x0
  struct BgmPlayArgsGroup___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__17_0; // x21
  Il2CppObject *v7; // x22
  struct BgmPlayArgsGroup___c_StaticFields *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  peRenderTexture_ChangeLayerObject_o *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  __int64 v22; // x10
  struct MainBgmPlayArgs_o *v23; // x1
  struct MainBgmPlayArgs_o **p_MainArgs_k__BackingField; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0
  System_Int32_array **v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7

  if ( (byte_42AFCD8 & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_OfType_SubBgmPlayArgs___);
    sub_B52984(&Method_System_Linq_Enumerable_ToList_SubBgmPlayArgs___);
    sub_B52984(&Method_System_Collections_Generic_List_BgmPlayArgs__Find__);
    sub_B52984(&MainBgmPlayArgs_TypeInfo);
    sub_B52984(&Method_System_Predicate_BgmPlayArgs___ctor__);
    sub_B52984(&System_Predicate_BgmPlayArgs__TypeInfo);
    sub_B52984(&Method_BgmPlayArgsGroup___c__Initialize_b__17_0__);
    sub_B52984(&BgmPlayArgsGroup___c_TypeInfo);
    byte_42AFCD8 = 1;
  }
  AllArgsList_k__BackingField = this->fields._AllArgsList_k__BackingField;
  v4 = BgmPlayArgsGroup___c_TypeInfo;
  if ( (BYTE3(BgmPlayArgsGroup___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BgmPlayArgsGroup___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmPlayArgsGroup___c_TypeInfo);
    v4 = BgmPlayArgsGroup___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__17_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__17_0;
  if ( !_9__17_0 )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      static_fields = BgmPlayArgsGroup___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__17_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B52A54(System_Predicate_BgmPlayArgs__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__17_0,
      v7,
      Method_BgmPlayArgsGroup___c__Initialize_b__17_0__,
      (const MethodInfo_28D2DBC *)Method_System_Predicate_BgmPlayArgs___ctor__);
    v8 = BgmPlayArgsGroup___c_TypeInfo->static_fields;
    v8->__9__17_0 = (struct System_Predicate_BgmPlayArgs__o *)_9__17_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v8->__9__17_0,
      (System_Int32_array **)_9__17_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  if ( !AllArgsList_k__BackingField )
    sub_B52A5C(v4, method);
  v15 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)AllArgsList_k__BackingField,
          (System_Predicate_T__o *)_9__17_0,
          (const MethodInfo_2FF1EC4 *)Method_System_Collections_Generic_List_BgmPlayArgs__Find__);
  if ( v15
    && (v22 = *(&MainBgmPlayArgs_TypeInfo->_2.bitflags2 + 1), *(&v15->klass->_2.bitflags2 + 1) >= (unsigned int)v22) )
  {
    if ( (MainBgmPlayArgs_c *)v15->klass->_2.typeHierarchy[v22 - 1] == MainBgmPlayArgs_TypeInfo )
      v23 = (struct MainBgmPlayArgs_o *)v15;
    else
      v23 = 0LL;
  }
  else
  {
    v23 = 0LL;
  }
  this->fields._MainArgs_k__BackingField = v23;
  p_MainArgs_k__BackingField = &this->fields._MainArgs_k__BackingField;
  sub_B52920(
    (BattleServantConfConponent_o *)p_MainArgs_k__BackingField,
    (System_Int32_array **)v23,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v25 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_BattleActionData_MasterBuffData_(
                                                               (System_Collections_IEnumerable_o *)*(p_MainArgs_k__BackingField - 1),
                                                               (const MethodInfo_1B66108 *)Method_System_Linq_Enumerable_OfType_SubBgmPlayArgs___);
  v26 = (System_Int32_array **)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                 v25,
                                 (const MethodInfo_1B714E4 *)Method_System_Linq_Enumerable_ToList_SubBgmPlayArgs___);
  p_MainArgs_k__BackingField[1] = (struct MainBgmPlayArgs_o *)v26;
  sub_B52920((BattleServantConfConponent_o *)(p_MainArgs_k__BackingField + 1), v26, v27, v28, v29, v30, v31, v32);
}


BgmPlayArgsGroup_o *__fastcall BgmPlayArgsGroup__NullExcludedClone(BgmPlayArgsGroup_o *this, const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *v3; // x19
  BgmPlayArgsGroup___c_c *v4; // x8
  struct BgmPlayArgsGroup___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__13_0; // x20
  Il2CppObject *v7; // x21
  struct BgmPlayArgsGroup___c_StaticFields *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  BgmPlayArgs_array *v16; // x19
  BgmPlayArgsGroup_o *v17; // x20
  const MethodInfo *v18; // x2

  if ( (byte_42AFCD5 & 1) == 0 )
  {
    sub_B52984(&BgmPlayArgsGroup_TypeInfo);
    sub_B52984(&Method_System_Linq_Enumerable_Select_BgmPlayArgs__BgmPlayArgs___);
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
    sub_B52984(&Method_System_Func_BgmPlayArgs__BgmPlayArgs___ctor__);
    sub_B52984(&System_Func_BgmPlayArgs__BgmPlayArgs__TypeInfo);
    sub_B52984(&Method_BgmPlayArgsGroup___c__NullExcludedClone_b__13_0__);
    sub_B52984(&BgmPlayArgsGroup___c_TypeInfo);
    byte_42AFCD5 = 1;
  }
  v3 = (System_Collections_Generic_IEnumerable_TSource__o *)BgmPlayArgsGroup__AllArgsListNullExcluded(this, method);
  v4 = BgmPlayArgsGroup___c_TypeInfo;
  if ( (BYTE3(BgmPlayArgsGroup___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BgmPlayArgsGroup___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmPlayArgsGroup___c_TypeInfo);
    v4 = BgmPlayArgsGroup___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__13_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__13_0;
  if ( !_9__13_0 )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      static_fields = BgmPlayArgsGroup___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__13_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B52A54(System_Func_BgmPlayArgs__BgmPlayArgs__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__13_0,
      v7,
      Method_BgmPlayArgsGroup___c__NullExcludedClone_b__13_0__,
      (const MethodInfo_2BCA808 *)Method_System_Func_BgmPlayArgs__BgmPlayArgs___ctor__);
    v8 = BgmPlayArgsGroup___c_TypeInfo->static_fields;
    v8->__9__13_0 = (struct System_Func_BgmPlayArgs__BgmPlayArgs__o *)_9__13_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v8->__9__13_0,
      (System_Int32_array **)_9__13_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               v3,
                                                               (System_Func_TSource__TResult__o *)_9__13_0,
                                                               (const MethodInfo_1B6A2FC *)Method_System_Linq_Enumerable_Select_BgmPlayArgs__BgmPlayArgs___);
  v16 = (BgmPlayArgs_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                               v15,
                               (const MethodInfo_1B6E610 *)Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
  v17 = (BgmPlayArgsGroup_o *)sub_B52A54(BgmPlayArgsGroup_TypeInfo);
  BgmPlayArgsGroup___ctor_24815532(v17, v16, v18);
  return v17;
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
  sub_B52920(
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
  sub_B52920(
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
  sub_B52920(
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
  Il2CppObject *v1; // x19
  struct BgmPlayArgsGroup___c_StaticFields *static_fields; // x0

  if ( (byte_42AD646 & 1) == 0 )
  {
    sub_B52984(&BgmPlayArgsGroup___c_TypeInfo);
    byte_42AD646 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(BgmPlayArgsGroup___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = BgmPlayArgsGroup___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BgmPlayArgsGroup___c_o *)v1;
  sub_B52920(static_fields);
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

  if ( (byte_42AD647 & 1) == 0 )
  {
    sub_B52984(&MainBgmPlayArgs_TypeInfo);
    byte_42AD647 = 1;
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
    sub_B52A5C(this, 0LL);
  return (BgmPlayArgs_o *)((__int64 (__fastcall *)(BgmPlayArgs_o *, const char *))x->klass[1]._1.gc_desc)(
                            x,
                            x->klass[1]._1.name);
}