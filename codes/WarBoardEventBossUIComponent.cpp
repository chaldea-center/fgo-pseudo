void WarBoardEventBossUIComponent___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  int32_t v8; // w1
  struct WarBoardEventBossUIComponent_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_596E070 & 1) == 0 )
  {
    sub_2213A60(&WarBoardEventBossUIComponent_TypeInfo);
    sub_2213A60(&StringLiteral_16195/*"WarBoardEventBossEffect_Break{0}"*/);
    sub_2213A60(&StringLiteral_16196/*"WarBoardEventBossEffect_Dead{0}"*/);
    byte_596E070 = 1;
  }
  v7 = StringLiteral_16196/*"WarBoardEventBossEffect_Dead{0}"*/;
  WarBoardEventBossUIComponent_TypeInfo->static_fields->BOSS_CLEAR_EFFECT_PREFAB = (struct System_String_o *)StringLiteral_16196/*"WarBoardEventBossEffect_Dead{0}"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)WarBoardEventBossUIComponent_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v8 = StringLiteral_16195/*"WarBoardEventBossEffect_Break{0}"*/;
  static_fields = WarBoardEventBossUIComponent_TypeInfo->static_fields;
  static_fields->BOSS_POINT_BREAK_EFFECT_PREFAB = (struct System_String_o *)StringLiteral_16195/*"WarBoardEventBossEffect_Break{0}"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->BOSS_POINT_BREAK_EFFECT_PREFAB,
    v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
}


void WarBoardEventBossUIComponent___ctor(WarBoardEventBossUIComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_596E06F & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_UIAtlas___ctor__);
    sub_2213A60(&System_Collections_Generic_List_UIAtlas__TypeInfo);
    byte_596E06F = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_UIAtlas__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_UIAtlas___ctor__);
  this->fields.atlasList = (struct System_Collections_Generic_List_UIAtlas__o *)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.atlasList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void WarBoardEventBossUIComponent__Awake(WarBoardEventBossUIComponent_o *this, const MethodInfo *method)
{
  ;
}


UnityEngine_Color_o WarBoardEventBossUIComponent__ConvertHexToColor(
        WarBoardEventBossUIComponent_o *this,
        System_String_o *hexStrColor,
        const MethodInfo *method)
{
  int32_t v4; // w0
  float v5; // s3
  unsigned __int64 v6; // d0
  float v7; // s2
  float v8; // s1
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_596E06E & 1) == 0 )
  {
    sub_2213A60(&System_Convert_TypeInfo);
    byte_596E06E = 1;
  }
  if ( !*(&System_Convert_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, hexStrColor, method);
  v4 = System_Convert__ToInt32_76696416(hexStrColor, 16, 0);
  v5 = 1.0;
  v6 = vdiv_f32(
         vcvt_f32_s32(vand_s8(vshl_u32(vdup_n_s32(v4), (uint32x2_t)0xFFFFFFF8FFFFFFF0LL), (int8x8_t)0xFF000000FFLL)),
         vdup_n_s32(0x437F0000u)).n64_u64[0];
  v7 = (float)(unsigned __int8)v4 / 255.0;
  v8 = *((float *)&v6 + 1);
  result.fields.r = *(float *)&v6;
  result.fields.a = v5;
  result.fields.b = v7;
  result.fields.g = v8;
  return result;
}


float WarBoardEventBossUIComponent__ConvertHpToRate(
        WarBoardEventBossUIComponent_o *this,
        int64_t hp,
        int64_t maxHp,
        const MethodInfo *method)
{
  float v4; // s1
  float v5; // s0

  v4 = 1.0;
  v5 = (double)hp / (double)maxHp;
  if ( v5 <= 1.0 )
    v4 = (double)hp / (double)maxHp;
  if ( v5 >= 0.0 )
    return v4;
  else
    return 0.0;
}


System_String_o *WarBoardEventBossUIComponent__CreateSaveDta(
        WarBoardEventBossUIComponent_o *this,
        const MethodInfo *method)
{
  System_Text_StringBuilder_o *v3; // x20
  System_Text_StringBuilder_o *appended; // x0
  __int64 v5; // x1
  struct WarBoardUserServantData_o *oldBossInfo; // x8
  struct WarBoardUserServantData_o *v7; // x8
  struct WarBoardUserServantData_o *v8; // x8

  if ( (byte_596E06D & 1) == 0 )
  {
    sub_2213A60(&System_Text_StringBuilder_TypeInfo);
    sub_2213A60(&StringLiteral_1533/*":"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596E06D = 1;
  }
  if ( !this->fields.oldBossInfo )
    return (System_String_o *)StringLiteral_1/*""*/;
  v3 = (System_Text_StringBuilder_o *)sub_2213CCC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v3, 0);
  oldBossInfo = this->fields.oldBossInfo;
  if ( !oldBossInfo
    || !v3
    || (System_Text_StringBuilder__Append_75737564(v3, oldBossInfo->fields.stageBossIdx, 0),
        appended = System_Text_StringBuilder__Append_75735064(v3, (System_String_o *)StringLiteral_1533/*":"*/, 0),
        (v7 = this->fields.oldBossInfo) == 0)
    || (System_Text_StringBuilder__Append_75737564(v3, v7->fields.currentHp, 0),
        appended = System_Text_StringBuilder__Append_75735064(v3, (System_String_o *)StringLiteral_1533/*":"*/, 0),
        (v8 = this->fields.oldBossInfo) == 0) )
  {
    sub_2213CDC(appended, v5);
  }
  System_Text_StringBuilder__Append_75737564(v3, v8->fields.defeatPoint, 0);
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v3->klass->vtable._3_ToString.methodPtr)(
                              v3,
                              v3->klass->vtable._3_ToString.method);
}


UnityEngine_GameObject_o *WarBoardEventBossUIComponent__GetGameObjectFromEventUIAssetData(
        WarBoardEventBossUIComponent_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *result; // x0

  if ( (byte_596E065 & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_GameObject____91708320);
    byte_596E065 = 1;
  }
  result = (UnityEngine_GameObject_o *)this->fields.assetData;
  if ( result )
    return (UnityEngine_GameObject_o *)AssetData__GetObject_object__58532980(
                                         (AssetData_o *)result,
                                         name,
                                         (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
  return result;
}


int64_t WarBoardEventBossUIComponent__GetMaxHpByBreakPoint(
        WarBoardEventBossUIComponent_o *this,
        int32_t restBreakPoint,
        const MethodInfo *method)
{
  struct WarBoardUserServantData_o *currentBossInfo; // x8

  if ( (byte_596E064 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_IndexValue_int____91713824);
    byte_596E064 = 1;
  }
  currentBossInfo = this->fields.currentBossInfo;
  if ( currentBossInfo )
    return BasicHelper__IndexValue_int_(
             currentBossInfo->fields.breakHp,
             restBreakPoint,
             currentBossInfo->fields.hp,
             (const MethodInfo_3814BE4 *)Method_BasicHelper_IndexValue_int____91713824);
  else
    return 0;
}


WarBoardUserServantData_o *WarBoardEventBossUIComponent__GetStageBossData(
        WarBoardEventBossUIComponent_o *this,
        int32_t stageBossIndex,
        const MethodInfo *method)
{
  WarBoardUserServantData_o *result; // x0

  result = (WarBoardUserServantData_o *)this->fields.warBoardDataEnt;
  if ( result )
    return WarBoardDataEntity__GetStageBossData((WarBoardDataEntity_o *)result, stageBossIndex, 0);
  return result;
}


System_String_o *WarBoardEventBossUIComponent__GetStageBossName(
        WarBoardEventBossUIComponent_o *this,
        int32_t stageBossIndex,
        const MethodInfo *method)
{
  __int64 v4; // x19
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  void *monitor; // x8
  System_Object_array *v8; // x20
  System_Func_object__bool__o *v9; // x21
  Il2CppObject *object; // x0
  BattleServantData_o *klass; // x0

  if ( (byte_596E062 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Find_WarBoardPieceData___);
    sub_2213A60(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_2213A60(&Method_WarBoardEventBossUIComponent___c__DisplayClass35_0__GetStageBossName_b__0__);
    sub_2213A60(&WarBoardEventBossUIComponent___c__DisplayClass35_0_TypeInfo);
    byte_596E062 = 1;
  }
  v4 = sub_2213CCC(WarBoardEventBossUIComponent___c__DisplayClass35_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4
    || (*(_DWORD *)(v4 + 16) = stageBossIndex,
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0)
    || (monitor = Instance[27].monitor) == 0 )
  {
    sub_2213CDC(Instance, v6);
  }
  v8 = (System_Object_array *)*((_QWORD *)monitor + 6);
  if ( v8
    && v8->max_length
    && (v9 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_WarBoardPieceData__bool__TypeInfo),
        System_Func_object__bool____ctor(
          v9,
          (Il2CppObject *)v4,
          Method_WarBoardEventBossUIComponent___c__DisplayClass35_0__GetStageBossName_b__0__,
          0),
        (object = BasicHelper__Find_object_(
                    v8,
                    (System_Func_T__bool__o *)v9,
                    (const MethodInfo_3810A1C *)Method_BasicHelper_Find_WarBoardPieceData___)) != 0)
    && (klass = (BattleServantData_o *)object[8].klass) != 0 )
  {
    return BattleServantData__getServantShortName(klass, 0);
  }
  else
  {
    return **(System_String_o ***)(qword_5984390 + 184);
  }
}


UnityEngine_Color_o WarBoardEventBossUIComponent__GetTextEffectColor(
        WarBoardEventBossUIComponent_o *this,
        int32_t restBreakPoint,
        const MethodInfo *method)
{
  struct WarBoardStageBossEntity_o *warBoardStageBossEnt; // x0
  Il2CppObject *bossColor; // x20
  System_String_array *TextEffectColors; // x0
  Il2CppObject *v8; // x0
  const MethodInfo *v9; // x2

  if ( (byte_596E063 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_IndexValue_string___);
    sub_2213A60(&string___TypeInfo);
    sub_2213A60(&StringLiteral_1245/*"0x000000"*/);
    byte_596E063 = 1;
  }
  warBoardStageBossEnt = this->fields.warBoardStageBossEnt;
  if ( warBoardStageBossEnt )
  {
    bossColor = (Il2CppObject *)warBoardStageBossEnt->fields.bossColor;
    TextEffectColors = WarBoardStageBossEntity__GetTextEffectColors(warBoardStageBossEnt, 0);
  }
  else
  {
    bossColor = (Il2CppObject *)StringLiteral_1245/*"0x000000"*/;
    TextEffectColors = (System_String_array *)sub_2213B20(string___TypeInfo, 0);
  }
  v8 = BasicHelper__IndexValue_object_(
         (System_Object_array *)TextEffectColors,
         restBreakPoint - 1,
         bossColor,
         (const MethodInfo_3814CA8 *)Method_BasicHelper_IndexValue_string___);
  return WarBoardEventBossUIComponent__ConvertHexToColor(
           (WarBoardEventBossUIComponent_o *)v8,
           (System_String_o *)v8,
           v9);
}


void WarBoardEventBossUIComponent__LoadAnimPrefab(
        WarBoardEventBossUIComponent_o *this,
        WarBoardStageBossEntity_o *ent,
        const MethodInfo *method)
{
  WarBoardEventBossUIComponent_c *v5; // x0
  System_String_o *BOSS_CLEAR_EFFECT_PREFAB; // x21
  Il2CppObject *v7; // x0
  System_String_o *v8; // x0
  const MethodInfo *v9; // x2
  struct UnityEngine_GameObject_o *GameObjectFromEventUIAssetData; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct WarBoardEventBossUIComponent_StaticFields *static_fields; // x8
  System_String_o *BOSS_POINT_BREAK_EFFECT_PREFAB; // x20
  Il2CppObject *v19; // x0
  System_String_o *v20; // x0
  const MethodInfo *v21; // x2
  struct UnityEngine_GameObject_o *v22; // x0
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  int32_t v29; // [xsp+8h] [xbp-38h] BYREF
  int32_t defeatEffectId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_596E066 & 1) == 0 )
  {
    sub_2213A60(&WarBoardEventBossUIComponent_TypeInfo);
    byte_596E066 = 1;
  }
  if ( ent )
  {
    v5 = WarBoardEventBossUIComponent_TypeInfo;
    if ( !*(&WarBoardEventBossUIComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(WarBoardEventBossUIComponent_TypeInfo, ent, method);
      v5 = WarBoardEventBossUIComponent_TypeInfo;
    }
    BOSS_CLEAR_EFFECT_PREFAB = v5->static_fields->BOSS_CLEAR_EFFECT_PREFAB;
    defeatEffectId = ent->fields.defeatEffectId;
    v7 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &defeatEffectId);
    v8 = System_String__Format(BOSS_CLEAR_EFFECT_PREFAB, v7, 0);
    GameObjectFromEventUIAssetData = WarBoardEventBossUIComponent__GetGameObjectFromEventUIAssetData(this, v8, v9);
    this->fields.deadAnimPrefab = GameObjectFromEventUIAssetData;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.deadAnimPrefab,
      (int32_t)GameObjectFromEventUIAssetData,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
    static_fields = WarBoardEventBossUIComponent_TypeInfo->static_fields;
    v29 = ent->fields.defeatEffectId;
    BOSS_POINT_BREAK_EFFECT_PREFAB = static_fields->BOSS_POINT_BREAK_EFFECT_PREFAB;
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v29);
    v20 = System_String__Format(BOSS_POINT_BREAK_EFFECT_PREFAB, v19, 0);
    v22 = WarBoardEventBossUIComponent__GetGameObjectFromEventUIAssetData(this, v20, v21);
    this->fields.pointBreakAnimPrefab = v22;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.pointBreakAnimPrefab,
      (int32_t)v22,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
  }
}


// local variable allocation has failed, the output may be wrong!
void WarBoardEventBossUIComponent__LoadLocalAtlas(
        WarBoardEventBossUIComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  WarBoardEventBossUIComponent_o *v4; // x20
  struct System_Collections_Generic_List_UIAtlas__o *atlasList; // x8
  int32_t size; // w2
  int v7; // w9
  int i; // w28
  Il2CppObject *v9; // x0
  Il2CppObject *v10; // x21
  Il2CppObject *v11; // x0
  System_String_o *v12; // x0
  const MethodInfo *v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  UnityEngine_Object_o *GameObjectFromEventUIAssetData; // x21
  __int64 v17; // x1
  __int64 v18; // x2
  Il2CppObject *Component_object; // x21
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  intptr_t m_CachedPtr; // x8
  _QWORD *v27; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v29; // x8
  int32_t v30; // [xsp+8h] [xbp-58h] BYREF
  int v31; // [xsp+Ch] [xbp-54h] BYREF

  v4 = this;
  if ( (byte_596E067 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_2213A60(&Method_System_Collections_Generic_List_UIAtlas__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_UIAtlas__Clear__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_26446/*"{0:D2}"*/);
    this = (WarBoardEventBossUIComponent_o *)sub_2213A60(&StringLiteral_5538/*"DownloadEventUIAtlas{0}{1}"*/);
    byte_596E067 = 1;
  }
  if ( v4->fields.assetData )
  {
    atlasList = v4->fields.atlasList;
    if ( !atlasList )
LABEL_22:
      sub_2213CDC(this, *(_QWORD *)&eventId);
    size = atlasList->fields._size;
    v7 = atlasList->fields._version + 1;
    atlasList->fields._size = 0;
    atlasList->fields._version = v7;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)atlasList->fields._items, 0, size, 0);
    for ( i = 1; ; ++i )
    {
      v31 = i;
      v9 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v31);
      v10 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_26446/*"{0:D2}"*/, v9, 0);
      v30 = eventId;
      v11 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v30);
      v12 = System_String__Format_75697880((System_String_o *)StringLiteral_5538/*"DownloadEventUIAtlas{0}{1}"*/, v11, v10, 0);
      GameObjectFromEventUIAssetData = (UnityEngine_Object_o *)WarBoardEventBossUIComponent__GetGameObjectFromEventUIAssetData(
                                                                 v4,
                                                                 v12,
                                                                 v13);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14, v15);
      this = (WarBoardEventBossUIComponent_o *)UnityEngine_Object__op_Equality(GameObjectFromEventUIAssetData, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
        break;
      if ( !GameObjectFromEventUIAssetData )
        goto LABEL_22;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)GameObjectFromEventUIAssetData,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17, v18);
      if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
        break;
      this = (WarBoardEventBossUIComponent_o *)v4->fields.atlasList;
      if ( !this )
        goto LABEL_22;
      m_CachedPtr = this->fields.m_CachedPtr;
      v27 = Method_System_Collections_Generic_List_UIAtlas__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !m_CachedPtr )
        goto LABEL_22;
      m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          Component_object,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
      }
      else
      {
        v29 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
        LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v29 + 32) = Component_object;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)(v29 + 32),
          (int32_t)Component_object,
          v20,
          v21,
          v22,
          v23,
          v24,
          v25);
      }
    }
  }
}


void WarBoardEventBossUIComponent__OnClick(WarBoardEventBossUIComponent_o *this, const MethodInfo *method)
{
  ;
}


void WarBoardEventBossUIComponent__PlayDaedAnim(
        WarBoardEventBossUIComponent_o *this,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v5; // x20
  UnityEngine_Component_o *bossIconSp; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  __int64 v20; // x1
  __int64 v21; // x2
  Il2CppObject *deadAnimPrefab; // x22
  Il2CppObject *v23; // x22
  Il2CppObject *Component_object; // x22
  System_Action_o *v25; // x19
  System_Action_o *v26; // x19
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7

  if ( (byte_596E069 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_WarBoardEventBossUIComponent___c__DisplayClass50_0__PlayDaedAnim_b__0__);
    sub_2213A60(&Method_WarBoardEventBossUIComponent___c__DisplayClass50_0__PlayDaedAnim_b__1__);
    sub_2213A60(&WarBoardEventBossUIComponent___c__DisplayClass50_0_TypeInfo);
    byte_596E069 = 1;
  }
  v5 = sub_2213CCC(WarBoardEventBossUIComponent___c__DisplayClass50_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_13;
  *(_QWORD *)(v5 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = endAction;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)endAction, v14, v15, v16, v17, v18, v19);
  deadAnimPrefab = (Il2CppObject *)this->fields.deadAnimPrefab;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20, v21);
  v23 = UnityEngine_Object__Instantiate_object_(
          deadAnimPrefab,
          (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  GameObjectExtensions__SafeSetParent((UnityEngine_GameObject_o *)v23, (UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__ResetLocalPosition((UnityEngine_GameObject_o *)v23, 0);
  if ( !v23 )
    goto LABEL_13;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)v23,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
  {
    bossIconSp = (UnityEngine_Component_o *)this->fields.bossIconSp;
    if ( bossIconSp )
    {
      bossIconSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(bossIconSp, 0);
      if ( bossIconSp )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bossIconSp, 0, 0);
        ActionExtensions__Call(*(System_Action_o **)(v5 + 24), 0);
        return;
      }
    }
LABEL_13:
    sub_2213CDC(bossIconSp, v7);
  }
  v25 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v25,
    (Il2CppObject *)v5,
    Method_WarBoardEventBossUIComponent___c__DisplayClass50_0__PlayDaedAnim_b__0__,
    0);
  if ( !Component_object )
    goto LABEL_13;
  CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)Component_object, 0, v25, 0);
  v26 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v26,
    (Il2CppObject *)v5,
    Method_WarBoardEventBossUIComponent___c__DisplayClass50_0__PlayDaedAnim_b__1__,
    0);
  Component_object[2].monitor = v26;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&Component_object[2].monitor,
    (int32_t)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
}


void WarBoardEventBossUIComponent__PlayHpCut(
        WarBoardEventBossUIComponent_o *this,
        float duration,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v7; // x19
  int64_t MaxHpByBreakPoint; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  const MethodInfo *v22; // x2
  struct WarBoardUserServantData_o *oldBossInfo; // x8
  int32_t *p_defeatPoint; // x8
  struct WarBoardPieceData_o *bossPieceData; // x8
  int32_t v26; // w1
  _BOOL4 isPointBreak; // w8
  __int64 v28; // x8
  struct WarBoardUserServantData_o *v29; // x9
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  EasingObject_o *v38; // x20
  System_Action_o *v39; // x21
  System_Action_o *v40; // x22

  if ( (byte_596E06B & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_2213A60(&Method_WarBoardEventBossUIComponent___c__DisplayClass52_0__PlayHpCut_b__0__);
    sub_2213A60(&Method_WarBoardEventBossUIComponent___c__DisplayClass52_0__PlayHpCut_b__1__);
    sub_2213A60(&WarBoardEventBossUIComponent___c__DisplayClass52_0_TypeInfo);
    byte_596E06B = 1;
  }
  v7 = sub_2213CCC(WarBoardEventBossUIComponent___c__DisplayClass52_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_20;
  *(_QWORD *)(v7 + 24) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 48) = endAction;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 48), (int32_t)endAction, v16, v17, v18, v19, v20, v21);
  if ( this->fields.isPointBreak )
  {
    oldBossInfo = this->fields.oldBossInfo;
    if ( !oldBossInfo )
      goto LABEL_20;
    p_defeatPoint = &oldBossInfo->fields.defeatPoint;
    goto LABEL_9;
  }
  bossPieceData = this->fields.bossPieceData;
  if ( bossPieceData )
  {
    p_defeatPoint = &bossPieceData->fields._breakPoint_k__BackingField;
LABEL_9:
    v26 = *p_defeatPoint;
    goto LABEL_10;
  }
  v26 = 0;
LABEL_10:
  MaxHpByBreakPoint = WarBoardEventBossUIComponent__GetMaxHpByBreakPoint(this, v26, v22);
  isPointBreak = this->fields.isPointBreak;
  *(_QWORD *)(v7 + 32) = MaxHpByBreakPoint;
  if ( isPointBreak || (MaxHpByBreakPoint = (int64_t)this->fields.bossPieceData) == 0 )
  {
    v28 = 0;
  }
  else
  {
    MaxHpByBreakPoint = WarBoardPieceData__get_CurrentHp((WarBoardPieceData_o *)MaxHpByBreakPoint, 0);
    v28 = (int)MaxHpByBreakPoint;
  }
  v29 = this->fields.oldBossInfo;
  *(_QWORD *)(v7 + 40) = v28;
  if ( !v29 )
    goto LABEL_20;
  if ( v28 == v29->fields.currentHp )
  {
    ActionExtensions__Call(*(System_Action_o **)(v7 + 48), 0);
    return;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_38B8770 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v7 + 16) = Component_object;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)Component_object, v32, v33, v34, v35, v36, v37);
  v38 = *(EasingObject_o **)(v7 + 16);
  v39 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v39,
    (Il2CppObject *)v7,
    Method_WarBoardEventBossUIComponent___c__DisplayClass52_0__PlayHpCut_b__0__,
    0);
  v40 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v40,
    (Il2CppObject *)v7,
    Method_WarBoardEventBossUIComponent___c__DisplayClass52_0__PlayHpCut_b__1__,
    0);
  if ( !v38 )
LABEL_20:
    sub_2213CDC(MaxHpByBreakPoint, v9);
  EasingObject__Play(v38, duration, v39, v40, 0.0, 0, 0);
}


void WarBoardEventBossUIComponent__PlayHpRecover(
        WarBoardEventBossUIComponent_o *this,
        float duration,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v7; // x19
  int64_t MaxHpByBreakPoint; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  const MethodInfo *v22; // x2
  struct WarBoardPieceData_o *bossPieceData; // x8
  int32_t v24; // w1
  UIProgressBar_o *hpBarSlider; // x8
  float value; // s0
  WarBoardPieceData_o *v27; // x0
  double CurrentHp; // d0
  float v29; // s1
  float v30; // s0
  float v31; // s0
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  EasingObject_o *v40; // x20
  System_Action_o *v41; // x21
  System_Action_o *v42; // x22

  if ( (byte_596E06C & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_2213A60(&Method_WarBoardEventBossUIComponent___c__DisplayClass53_0__PlayHpRecover_b__0__);
    sub_2213A60(&Method_WarBoardEventBossUIComponent___c__DisplayClass53_0__PlayHpRecover_b__1__);
    sub_2213A60(&WarBoardEventBossUIComponent___c__DisplayClass53_0_TypeInfo);
    byte_596E06C = 1;
  }
  v7 = sub_2213CCC(WarBoardEventBossUIComponent___c__DisplayClass53_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_18;
  *(_QWORD *)(v7 + 24) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 40) = endAction;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 40), (int32_t)endAction, v16, v17, v18, v19, v20, v21);
  bossPieceData = this->fields.bossPieceData;
  v24 = bossPieceData ? bossPieceData->fields._breakPoint_k__BackingField : 0;
  MaxHpByBreakPoint = WarBoardEventBossUIComponent__GetMaxHpByBreakPoint(this, v24, v22);
  hpBarSlider = (UIProgressBar_o *)this->fields.hpBarSlider;
  *(_QWORD *)(v7 + 32) = MaxHpByBreakPoint;
  if ( !hpBarSlider )
    goto LABEL_18;
  value = UIProgressBar__get_value(hpBarSlider, 0);
  v27 = this->fields.bossPieceData;
  this->fields.HPfrom = value;
  if ( v27 )
    CurrentHp = (double)WarBoardPieceData__get_CurrentHp(v27, 0);
  else
    CurrentHp = 0.0;
  v29 = 1.0;
  v30 = CurrentHp / (double)*(__int64 *)(v7 + 32);
  if ( v30 <= 1.0 )
    v29 = v30;
  v31 = v30 >= 0.0 ? v29 : 0.0;
  this->fields.HPto = v31;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_38B8770 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v7 + 16) = Component_object;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)Component_object, v34, v35, v36, v37, v38, v39);
  v40 = *(EasingObject_o **)(v7 + 16);
  v41 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v41,
    (Il2CppObject *)v7,
    Method_WarBoardEventBossUIComponent___c__DisplayClass53_0__PlayHpRecover_b__0__,
    0);
  v42 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v42,
    (Il2CppObject *)v7,
    Method_WarBoardEventBossUIComponent___c__DisplayClass53_0__PlayHpRecover_b__1__,
    0);
  if ( !v40 )
LABEL_18:
    sub_2213CDC(MaxHpByBreakPoint, v9);
  EasingObject__Play(v40, duration, v41, v42, 0.0, 0, 0);
}


void WarBoardEventBossUIComponent__PlayPointBreakAnim(
        WarBoardEventBossUIComponent_o *this,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v5; // x21
  UnityEngine_Component_o *Sprite; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_Action_o **v14; // x20
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  struct WarBoardUserServantData_o *oldBossInfo; // x9
  struct WarBoardEventBossUIComponent_BreakIcon_array *breakIconList; // x8
  unsigned int v23; // w9
  WarBoardEventBossUIComponent_BreakIcon_o *v24; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  Il2CppObject *pointBreakAnimPrefab; // x23
  UnityEngine_GameObject_o *v29; // x22
  Il2CppObject *v30; // x23
  Il2CppObject *Component_object; // x22
  const MethodInfo *v32; // x2
  struct WarBoardPieceData_o *bossPieceData; // x8
  UILabel_o *totalHpLabel; // x21
  int32_t breakPoint_k__BackingField; // w1
  System_Action_o *v36; // x19
  const MethodInfo *v37; // x3
  struct WarBoardUserServantData_o *currentBossInfo; // x8
  struct WarBoardPieceData_o *v39; // x9
  int32_t v40; // w2
  System_Action_o *v41; // x0
  UnityEngine_Color_o TextEffectColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_596E06A & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_WarBoardEventBossUIComponent___c__DisplayClass51_0__PlayPointBreakAnim_b__0__);
    sub_2213A60(&WarBoardEventBossUIComponent___c__DisplayClass51_0_TypeInfo);
    byte_596E06A = 1;
  }
  v5 = sub_2213CCC(WarBoardEventBossUIComponent___c__DisplayClass51_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_24;
  *(_QWORD *)(v5 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = endAction;
  v14 = (System_Action_o **)(v5 + 24);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)endAction, v15, v16, v17, v18, v19, v20);
  oldBossInfo = this->fields.oldBossInfo;
  if ( !oldBossInfo )
    goto LABEL_24;
  breakIconList = this->fields.breakIconList;
  if ( !breakIconList )
    goto LABEL_24;
  v23 = (oldBossInfo->fields.defeatPoint - 1) & ~((oldBossInfo->fields.defeatPoint - 1) >> 31);
  if ( v23 >= LODWORD(breakIconList->max_length) )
    sub_2213CE4(Sprite);
  v24 = breakIconList->m_Items[v23];
  if ( !v24 )
    goto LABEL_24;
  Sprite = (UnityEngine_Component_o *)v24->fields.Sprite;
  if ( !Sprite )
    goto LABEL_24;
  gameObject = UnityEngine_Component__get_gameObject(Sprite, 0);
  pointBreakAnimPrefab = (Il2CppObject *)this->fields.pointBreakAnimPrefab;
  v29 = gameObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26, v27);
  v30 = UnityEngine_Object__Instantiate_object_(
          pointBreakAnimPrefab,
          (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  GameObjectExtensions__SafeSetParent_42897308((UnityEngine_GameObject_o *)v30, v29, 0);
  GameObjectExtensions__ResetLocalPosition((UnityEngine_GameObject_o *)v30, 0);
  if ( !v30 )
    goto LABEL_24;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)v30,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
  {
    v36 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      v36,
      (Il2CppObject *)v5,
      Method_WarBoardEventBossUIComponent___c__DisplayClass51_0__PlayPointBreakAnim_b__0__,
      0);
    if ( Component_object )
    {
      CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)Component_object, 0, v36, 0);
      return;
    }
LABEL_24:
    sub_2213CDC(Sprite, v7);
  }
  bossPieceData = this->fields.bossPieceData;
  totalHpLabel = this->fields.totalHpLabel;
  if ( bossPieceData )
    breakPoint_k__BackingField = bossPieceData->fields._breakPoint_k__BackingField;
  else
    breakPoint_k__BackingField = 0;
  TextEffectColor = WarBoardEventBossUIComponent__GetTextEffectColor(this, breakPoint_k__BackingField, v32);
  if ( !totalHpLabel )
    goto LABEL_24;
  UILabel__set_effectColor(totalHpLabel, TextEffectColor, 0);
  currentBossInfo = this->fields.currentBossInfo;
  if ( !currentBossInfo )
    goto LABEL_24;
  v39 = this->fields.bossPieceData;
  if ( v39 )
    v40 = v39->fields._breakPoint_k__BackingField;
  else
    v40 = 0;
  WarBoardEventBossUIComponent__SetupBreakPoint(this, currentBossInfo->fields.maxDefeatPoint, v40, v37);
  v41 = *v14;
  this->fields.isPointBreak = 0;
  ActionExtensions__Call(v41, 0);
}


void WarBoardEventBossUIComponent__SetDisp(
        WarBoardEventBossUIComponent_o *this,
        WarBoardDataEntity_o *warBoardDataEntity,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  WarBoardDataEntity_o **p_warBoardDataEnt; // x21
  __int64 defeatPoint; // x1
  __int64 bossIconSp; // x0
  struct WarBoardStageBossEntity_o *warBoardStageBossEnt; // x8
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  struct WarBoardStageBossEntity_o *v20; // x8
  _DWORD *v21; // x22
  struct WarBoardUserServantData_o *StageBossData; // x1
  struct WarBoardUserServantData_o **p_currentBossInfo; // x20
  struct WarBoardStageBossEntity_o *v24; // x8
  struct WarBoardPieceData_o *EventBossPiece; // x0
  struct WarBoardPieceData_o **p_bossPieceData; // x21
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  WarBoardUserServantData_o *v33; // x24
  struct WarBoardUserServantData_o **p_oldBossInfo; // x23
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  struct WarBoardUserServantData_o *currentBossInfo; // x9
  struct WarBoardUserServantData_o *v48; // x8
  struct System_Int32_array *breakHp; // x1
  const MethodInfo *v50; // x2
  struct WarBoardUserServantData_o *v51; // x8
  struct WarBoardUserServantData_o *v52; // x23
  unsigned int v53; // w9
  int32_t hp; // w8
  WarBoardUserServantData_o *v55; // x23
  struct WarBoardUserServantData_o **v56; // x22
  System_String_o *v57; // x2
  System_String_o *v58; // x3
  int32_t v59; // w4
  int32_t v60; // w5
  bool v61; // w6
  bool v62; // w7
  System_String_o *v63; // x2
  System_String_o *v64; // x3
  int32_t v65; // w4
  int32_t v66; // w5
  bool v67; // w6
  bool v68; // w7
  struct WarBoardUserServantData_o *v69; // x9
  struct WarBoardUserServantData_o *v70; // x8
  struct System_Int32_array *v71; // x1
  struct WarBoardUserServantData_o *v72; // x8
  int32_t v73; // w8
  struct WarBoardPieceData_o *v74; // x8
  struct WarBoardUserServantData_o *oldBossInfo; // x9
  struct WarBoardUserServantData_o *v76; // x8
  int currentHp; // w8
  double v78; // d0
  float v79; // s1
  float v80; // s0
  float HPfrom; // s0
  struct WarBoardUserServantData_o *v82; // x8
  double v83; // d8
  WarBoardPieceData_o *bossPieceData; // x0
  float v85; // s0
  float v86; // s1
  float v87; // s0
  double v88; // d0
  float v89; // s0
  float v90; // s1
  float v91; // s0
  const MethodInfo *v92; // x2
  struct WarBoardUserServantData_o *v93; // x8
  const MethodInfo *v94; // x3
  struct WarBoardUserServantData_o *v95; // x8
  struct WarBoardStageBossEntity_o *v96; // x8
  UISprite_o *v97; // x20
  int32_t idx; // w25
  Il2CppObject *v99; // x21
  Il2CppObject *v100; // x0
  System_String_o *v101; // x0
  const MethodInfo *v102; // x3
  const MethodInfo *v103; // x3
  const MethodInfo *v104; // x3
  UISprite_o *hpBarUnderSprite; // x20
  Il2CppObject *v106; // x0
  System_String_o *v107; // x0
  const MethodInfo *v108; // x3
  UISprite_o *hpBarUpperSprite; // x20
  Il2CppObject *v110; // x0
  System_String_o *v111; // x0
  const MethodInfo *v112; // x3
  const MethodInfo *v113; // x3
  const MethodInfo *v114; // x2
  struct WarBoardUserServantData_o *v115; // x8
  float r; // s8
  float g; // s9
  float b; // s10
  float a; // s11
  const MethodInfo *v120; // x2
  struct WarBoardStageBossEntity_o *v121; // x8
  UILabel_o *bossName; // x19
  int32_t v123; // [xsp+0h] [xbp-90h] BYREF
  int32_t v124; // [xsp+4h] [xbp-8Ch] BYREF
  int32_t v125; // [xsp+8h] [xbp-88h] BYREF
  int32_t iconId; // [xsp+Ch] [xbp-84h] BYREF
  UnityEngine_Color_o TextEffectColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v128; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_596E060 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_2213A60(&WarBoardUserServantData_TypeInfo);
    sub_2213A60(&StringLiteral_26133/*"war_board_boss_hp_frame"*/);
    sub_2213A60(&StringLiteral_26136/*"war_board_boss_hp_white"*/);
    sub_2213A60(&StringLiteral_26135/*"war_board_boss_hp_upper_{0}"*/);
    sub_2213A60(&StringLiteral_26137/*"war_board_boss_icon_{0}{1:D2}"*/);
    sub_2213A60(&StringLiteral_26132/*"war_board_boss_hp_back"*/);
    sub_2213A60(&StringLiteral_26134/*"war_board_boss_hp_lower_{0}"*/);
    byte_596E060 = 1;
  }
  this->fields.warBoardDataEnt = warBoardDataEntity;
  p_warBoardDataEnt = &this->fields.warBoardDataEnt;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.warBoardDataEnt,
    (int32_t)warBoardDataEntity,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  bossIconSp = (__int64)this->fields.bossIconSp;
  if ( !bossIconSp )
    goto LABEL_75;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)bossIconSp, 1, 0);
  bossIconSp = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  warBoardStageBossEnt = this->fields.warBoardStageBossEnt;
  if ( !warBoardStageBossEnt )
    goto LABEL_75;
  if ( !bossIconSp )
    goto LABEL_75;
  bossIconSp = (__int64)WarBoardManager__GetEventBossUILoadData(
                          (WarBoardManager_o *)bossIconSp,
                          warBoardStageBossEnt->fields.idx,
                          0);
  v20 = this->fields.warBoardStageBossEnt;
  if ( !v20 )
    goto LABEL_75;
  v21 = (_DWORD *)bossIconSp;
  if ( *p_warBoardDataEnt )
    StageBossData = WarBoardDataEntity__GetStageBossData(*p_warBoardDataEnt, v20->fields.idx, 0);
  else
    StageBossData = 0;
  this->fields.currentBossInfo = StageBossData;
  p_currentBossInfo = &this->fields.currentBossInfo;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.currentBossInfo,
    (int32_t)StageBossData,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  if ( !this->fields.currentBossInfo )
  {
    bossIconSp = (__int64)this->fields.bossIconSp;
    if ( !bossIconSp )
      goto LABEL_75;
    bossIconSp = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bossIconSp, 0);
    if ( !bossIconSp )
      goto LABEL_75;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bossIconSp, 0, 0);
    return;
  }
  bossIconSp = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !bossIconSp )
    goto LABEL_75;
  v24 = this->fields.warBoardStageBossEnt;
  if ( !v24 )
    goto LABEL_75;
  bossIconSp = *(_QWORD *)(bossIconSp + 440);
  if ( !bossIconSp )
    goto LABEL_75;
  EventBossPiece = WarBoardData__GetEventBossPiece((WarBoardData_o *)bossIconSp, v24->fields.idx, 0);
  this->fields.bossPieceData = EventBossPiece;
  p_bossPieceData = &this->fields.bossPieceData;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.bossPieceData,
    (int32_t)EventBossPiece,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  if ( !v21 || (int)v21[6] < 3 )
    goto LABEL_24;
  if ( !*p_currentBossInfo )
    goto LABEL_75;
  if ( v21[8] == (*p_currentBossInfo)->fields.stageBossIdx )
  {
    v33 = (WarBoardUserServantData_o *)sub_2213CCC(WarBoardUserServantData_TypeInfo);
    WarBoardUserServantData___ctor(v33, 0);
    this->fields.oldBossInfo = v33;
    p_oldBossInfo = &this->fields.oldBossInfo;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.oldBossInfo,
      (int32_t)v33,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40);
    currentBossInfo = this->fields.currentBossInfo;
    if ( !currentBossInfo )
      goto LABEL_75;
    v48 = *p_oldBossInfo;
    if ( !*p_oldBossInfo )
      goto LABEL_75;
    breakHp = currentBossInfo->fields.breakHp;
    v48->fields.stageBossIdx = currentBossInfo->fields.stageBossIdx;
    v48->fields.breakHp = breakHp;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v48->fields.breakHp,
      (int32_t)breakHp,
      v41,
      v42,
      v43,
      v44,
      v45,
      v46);
    v51 = *p_currentBossInfo;
    if ( !*p_currentBossInfo )
      goto LABEL_75;
    v52 = *p_oldBossInfo;
    if ( !v52 )
      goto LABEL_75;
    v53 = v21[6];
    v52->fields.maxDefeatPoint = v51->fields.maxDefeatPoint;
    if ( v53 <= 2 )
      sub_2213CE4(bossIconSp);
    hp = v51->fields.hp;
    v52->fields.defeatPoint = v21[10];
    v52->fields.hp = hp;
    bossIconSp = (unsigned int)v21[9];
  }
  else
  {
LABEL_24:
    v55 = (WarBoardUserServantData_o *)sub_2213CCC(WarBoardUserServantData_TypeInfo);
    WarBoardUserServantData___ctor(v55, 0);
    this->fields.oldBossInfo = v55;
    v56 = &this->fields.oldBossInfo;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.oldBossInfo,
      (int32_t)v55,
      v57,
      v58,
      v59,
      v60,
      v61,
      v62);
    v69 = this->fields.currentBossInfo;
    if ( !v69 )
      goto LABEL_75;
    v70 = *v56;
    if ( !*v56 )
      goto LABEL_75;
    v71 = v69->fields.breakHp;
    v70->fields.stageBossIdx = v69->fields.stageBossIdx;
    v70->fields.breakHp = v71;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v70->fields.breakHp, (int32_t)v71, v63, v64, v65, v66, v67, v68);
    v72 = *p_currentBossInfo;
    if ( !*p_currentBossInfo )
      goto LABEL_75;
    v52 = *v56;
    if ( !*v56 )
      goto LABEL_75;
    bossIconSp = (__int64)*p_bossPieceData;
    v52->fields.maxDefeatPoint = v72->fields.maxDefeatPoint;
    v73 = v72->fields.hp;
    if ( bossIconSp )
    {
      v52->fields.defeatPoint = *(_DWORD *)(bossIconSp + 52);
      v52->fields.hp = v73;
      bossIconSp = WarBoardPieceData__get_CurrentHp((WarBoardPieceData_o *)bossIconSp, 0);
    }
    else
    {
      v52->fields.defeatPoint = 0;
      v52->fields.hp = v73;
    }
  }
  v74 = *p_bossPieceData;
  v52->fields.currentHp = bossIconSp;
  if ( v74 )
    LODWORD(v74) = v74->fields._breakPoint_k__BackingField;
  oldBossInfo = this->fields.oldBossInfo;
  if ( !oldBossInfo )
LABEL_75:
    sub_2213CDC(bossIconSp, defeatPoint);
  defeatPoint = (unsigned int)oldBossInfo->fields.defeatPoint;
  this->fields.isPointBreak = (int)v74 < (int)defeatPoint;
  if ( (int)v74 >= (int)defeatPoint )
  {
    if ( !*p_currentBossInfo )
      goto LABEL_75;
    bossIconSp = WarBoardEventBossUIComponent__GetMaxHpByBreakPoint(this, (*p_currentBossInfo)->fields.defeatPoint, v50);
    v82 = this->fields.oldBossInfo;
    if ( !v82 )
      goto LABEL_75;
    v83 = (double)bossIconSp;
    bossPieceData = this->fields.bossPieceData;
    v85 = (double)v82->fields.currentHp / v83;
    v86 = v85 <= 1.0 ? (double)v82->fields.currentHp / v83 : 1.0;
    v87 = v85 >= 0.0 ? v86 : 0.0;
    this->fields.HPfrom = v87;
    v88 = bossPieceData ? (double)WarBoardPieceData__get_CurrentHp(bossPieceData, 0) : 0.0;
    bossIconSp = (__int64)this->fields.hpBarSlider;
    v89 = v88 / v83;
    v90 = v89 <= 1.0 ? v89 : 1.0;
    v91 = v89 >= 0.0 ? v90 : 0.0;
    this->fields.HPto = v91;
    if ( !bossIconSp )
      goto LABEL_75;
    HPfrom = this->fields.HPfrom;
  }
  else
  {
    bossIconSp = WarBoardEventBossUIComponent__GetMaxHpByBreakPoint(this, defeatPoint, v50);
    v76 = this->fields.oldBossInfo;
    if ( !v76 )
      goto LABEL_75;
    currentHp = v76->fields.currentHp;
    v78 = (double)bossIconSp;
    bossIconSp = (__int64)this->fields.hpBarSlider;
    this->fields.HPto = 0.0;
    v79 = 1.0;
    v80 = (double)currentHp / v78;
    if ( v80 <= 1.0 )
      v79 = v80;
    HPfrom = v80 >= 0.0 ? v79 : 0.0;
    this->fields.HPfrom = HPfrom;
    if ( !bossIconSp )
      goto LABEL_75;
  }
  UIProgressBar__set_value((UIProgressBar_o *)bossIconSp, HPfrom, 0);
  v93 = this->fields.oldBossInfo;
  if ( !v93 )
    goto LABEL_75;
  WarBoardEventBossUIComponent__SetTotalHpText(this, v93->fields.currentHp, v92);
  bossIconSp = (__int64)this->fields.hpBarSliderUnder;
  if ( !bossIconSp )
    goto LABEL_75;
  UIProgressBar__set_value((UIProgressBar_o *)bossIconSp, 0.0, 0);
  v95 = this->fields.oldBossInfo;
  if ( !v95 )
    goto LABEL_75;
  WarBoardEventBossUIComponent__SetupBreakPoint(this, v95->fields.maxDefeatPoint, v95->fields.defeatPoint, v94);
  v96 = this->fields.warBoardStageBossEnt;
  if ( !v96 )
    goto LABEL_75;
  v97 = this->fields.bossIconSp;
  idx = v96->fields.idx;
  iconId = v96->fields.iconId;
  v99 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &iconId);
  v125 = idx;
  v100 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v125);
  v101 = System_String__Format_75697880((System_String_o *)StringLiteral_26137/*"war_board_boss_icon_{0}{1:D2}"*/, v99, v100, 0);
  WarBoardEventBossUIComponent__SetSpriteByLocalAtlas(this, v97, v101, v102);
  WarBoardEventBossUIComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.bossHpFrame,
    (System_String_o *)StringLiteral_26133/*"war_board_boss_hp_frame"*/,
    v103);
  WarBoardEventBossUIComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.bossHpBg,
    (System_String_o *)StringLiteral_26132/*"war_board_boss_hp_back"*/,
    v104);
  hpBarUnderSprite = this->fields.hpBarUnderSprite;
  v124 = idx;
  v106 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v124);
  v107 = System_String__Format((System_String_o *)StringLiteral_26134/*"war_board_boss_hp_lower_{0}"*/, v106, 0);
  WarBoardEventBossUIComponent__SetSpriteByLocalAtlas(this, hpBarUnderSprite, v107, v108);
  hpBarUpperSprite = this->fields.hpBarUpperSprite;
  v123 = idx;
  v110 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v123);
  v111 = System_String__Format((System_String_o *)StringLiteral_26135/*"war_board_boss_hp_upper_{0}"*/, v110, 0);
  WarBoardEventBossUIComponent__SetSpriteByLocalAtlas(this, hpBarUpperSprite, v111, v112);
  bossIconSp = WarBoardEventBossUIComponent__SetSpriteByLocalAtlas(
                 this,
                 this->fields.hpBarWhiteSprite,
                 (System_String_o *)StringLiteral_26136/*"war_board_boss_hp_white"*/,
                 v113);
  v115 = this->fields.oldBossInfo;
  if ( !v115 )
    goto LABEL_75;
  TextEffectColor = WarBoardEventBossUIComponent__GetTextEffectColor(this, v115->fields.defeatPoint, v114);
  bossIconSp = (__int64)this->fields.totalHpLabel;
  if ( !bossIconSp )
    goto LABEL_75;
  r = TextEffectColor.fields.r;
  g = TextEffectColor.fields.g;
  b = TextEffectColor.fields.b;
  a = TextEffectColor.fields.a;
  UILabel__set_effectColor((UILabel_o *)bossIconSp, TextEffectColor, 0);
  bossIconSp = (__int64)this->fields.bossName;
  if ( !bossIconSp )
    goto LABEL_75;
  v128.fields.r = r;
  v128.fields.g = g;
  v128.fields.b = b;
  v128.fields.a = a;
  UILabel__set_effectColor((UILabel_o *)bossIconSp, v128, 0);
  v121 = this->fields.warBoardStageBossEnt;
  if ( !v121 )
    goto LABEL_75;
  bossName = this->fields.bossName;
  bossIconSp = (__int64)WarBoardEventBossUIComponent__GetStageBossName(
                          (WarBoardEventBossUIComponent_o *)bossIconSp,
                          v121->fields.idx,
                          v120);
  if ( !bossName )
    goto LABEL_75;
  UILabel__set_text(bossName, (System_String_o *)bossIconSp, 0);
}


bool WarBoardEventBossUIComponent__SetSpriteByLocalAtlas(
        WarBoardEventBossUIComponent_o *this,
        UISprite_o *sprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_UIAtlas__o *IsNullOrEmpty; // x0
  __int64 v8; // x1
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *current; // x21
  UISpriteData_o *v12; // x0
  __int64 v13; // x1
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_596E068 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Any_UIAtlas___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
    byte_596E068 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  IsNullOrEmpty = (struct System_Collections_Generic_List_UIAtlas__o *)System_String__IsNullOrEmpty(spriteName, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0
    || (IsNullOrEmpty = (struct System_Collections_Generic_List_UIAtlas__o *)System_Linq_Enumerable__Any_object_(
                                                                               (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.atlasList,
                                                                               (const MethodInfo_38660DC *)Method_System_Linq_Enumerable_Any_UIAtlas___),
        ((unsigned __int8)IsNullOrEmpty & 1) == 0) )
  {
    if ( sprite )
    {
      UISprite__set_spriteName(sprite, 0, 0);
      return 1;
    }
    goto LABEL_19;
  }
  IsNullOrEmpty = this->fields.atlasList;
  if ( !IsNullOrEmpty )
    goto LABEL_19;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    (System_Collections_Generic_List_object__o *)IsNullOrEmpty,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
  v16 = v15;
  v15.fields._list = 0;
  *(_QWORD *)&v15.fields._index = &v16;
  do
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v16,
           (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    if ( !v9 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v16,
        (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
      if ( sprite )
      {
        UISprite__set_spriteName(sprite, 0, 0);
        return 0;
      }
LABEL_19:
      sub_2213CDC(IsNullOrEmpty, v8);
    }
    current = v16.fields._current;
    if ( !v16.fields._current )
      sub_2213CDC(v9, v10);
    v12 = UIAtlas__GetSprite((UIAtlas_o *)v16.fields._current, spriteName, 0);
  }
  while ( !v12 );
  if ( !sprite )
    sub_2213CDC(v12, v13);
  UISprite__set_atlas(sprite, (UIAtlas_o *)current, 0);
  UISprite__set_spriteName(sprite, spriteName, 0);
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v16,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
  return 1;
}


void WarBoardEventBossUIComponent__SetTotalHpText(
        WarBoardEventBossUIComponent_o *this,
        int64_t hp,
        const MethodInfo *method)
{
  UILabel_o *totalHpLabel; // x20
  System_String_o *v6; // x21
  Il2CppObject *v7; // x0
  System_String_o *v8; // x0
  __int64 v9; // x1
  int64_t v10; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_596E061 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_3847/*"COMMON_NUM_FORMAT"*/);
    byte_596E061 = 1;
  }
  totalHpLabel = this->fields.totalHpLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, hp, method);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_3847/*"COMMON_NUM_FORMAT"*/, 0);
  v10 = hp;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984368, &v10);
  v8 = System_String__Format(v6, v7, 0);
  if ( !totalHpLabel )
    sub_2213CDC(v8, v9);
  UILabel__set_text(totalHpLabel, v8, 0);
}


void WarBoardEventBossUIComponent__Setup(
        WarBoardEventBossUIComponent_o *this,
        int32_t eventId,
        WarBoardStageBossEntity_o *warBoardStageBossEnt,
        WarBoardDataEntity_o *warBoardDataEnt,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  bool v6; // w6
  bool v7; // w7
  WarBoardStageBossEntity_o **p_warBoardStageBossEnt; // x23
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x2
  const MethodInfo *v21; // x2

  this->fields.eventId = eventId;
  this->fields.warBoardStageBossEnt = warBoardStageBossEnt;
  p_warBoardStageBossEnt = &this->fields.warBoardStageBossEnt;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.warBoardStageBossEnt,
    (int32_t)warBoardStageBossEnt,
    (System_String_o *)warBoardStageBossEnt,
    (System_String_o *)warBoardDataEnt,
    (int32_t)assetData,
    (int32_t)method,
    v6,
    v7);
  this->fields.assetData = assetData;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.assetData,
    (int32_t)assetData,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  WarBoardEventBossUIComponent__LoadLocalAtlas(this, eventId, v19);
  WarBoardEventBossUIComponent__LoadAnimPrefab(this, *p_warBoardStageBossEnt, v20);
  WarBoardEventBossUIComponent__SetDisp(this, warBoardDataEnt, v21);
}


// local variable allocation has failed, the output may be wrong!
void WarBoardEventBossUIComponent__SetupBreakPoint(
        WarBoardEventBossUIComponent_o *this,
        int32_t maxCount,
        int32_t restCount,
        const MethodInfo *method)
{
  long double v4; // q0
  struct WarBoardEventBossUIComponent_BreakIcon_array *breakIconList; // x8
  WarBoardEventBossUIComponent_o *v6; // x19
  il2cpp_array_size_t v7; // x20
  __int64 v8; // x21
  struct WarBoardEventBossUIComponent_BreakIcon_array *v9; // x8
  WarBoardEventBossUIComponent_BreakIcon_o *v10; // x8
  struct WarBoardEventBossUIComponent_BreakIcon_o *v11; // x8
  struct WarBoardEventBossUIComponent_BreakIcon_o *v12; // x8
  WarBoardEventBossUIComponent_c *klass; // x8
  il2cpp_array_size_t max_length; // x22
  __int64 v17; // x23
  struct WarBoardEventBossUIComponent_BreakIcon_array *v18; // x8
  WarBoardEventBossUIComponent_BreakIcon_o *v19; // x24
  const MethodInfo *v20; // x3
  UISprite_o *Sprite; // x1
  System_String_o *DisabledSpriteName; // x2
  struct WarBoardEventBossUIComponent_BreakIcon_o *breakIcon_11; // x8

  breakIconList = this->fields.breakIconList;
  v6 = this;
  if ( restCount <= 9 )
  {
    if ( !breakIconList )
      goto LABEL_32;
    max_length = breakIconList->max_length;
    if ( (int)max_length < 1 )
    {
LABEL_28:
      breakIcon_11 = v6->fields.breakIcon_11;
      if ( !breakIcon_11 )
        goto LABEL_32;
      this = (WarBoardEventBossUIComponent_o *)breakIcon_11->fields.Sprite;
      if ( !this )
        goto LABEL_32;
      klass = this->klass;
      *(_QWORD *)&v4 = 0;
      goto LABEL_31;
    }
    v17 = 0;
    while ( 1 )
    {
      v18 = v6->fields.breakIconList;
      if ( !v18 )
        goto LABEL_32;
      if ( (unsigned int)v17 >= LODWORD(v18->max_length) )
LABEL_33:
        sub_2213CE4(this);
      v19 = v18->m_Items[v17];
      if ( !v19 )
        goto LABEL_32;
      this = (WarBoardEventBossUIComponent_o *)v19->fields.Sprite;
      if ( !this )
        goto LABEL_32;
      this = (WarBoardEventBossUIComponent_o *)((__int64 (__fastcall *)(WarBoardEventBossUIComponent_o *, Il2CppClass *, double))this->klass[1]._1.element_class)(
                                                 this,
                                                 this->klass[1]._1.castClass,
                                                 0.0);
      if ( (int)v17 < restCount )
        break;
      if ( (int)v17 < maxCount )
      {
        Sprite = v19->fields.Sprite;
        DisabledSpriteName = v19->fields.DisabledSpriteName;
        goto LABEL_25;
      }
LABEL_27:
      if ( (_DWORD)max_length == (_DWORD)++v17 )
        goto LABEL_28;
    }
    Sprite = v19->fields.Sprite;
    DisabledSpriteName = v19->fields.EnabledSpriteName;
LABEL_25:
    WarBoardEventBossUIComponent__SetSpriteByLocalAtlas(v6, Sprite, DisabledSpriteName, v20);
    this = (WarBoardEventBossUIComponent_o *)v19->fields.Sprite;
    if ( !this )
      goto LABEL_32;
    this = (WarBoardEventBossUIComponent_o *)((__int64 (__fastcall *)(WarBoardEventBossUIComponent_o *, Il2CppClass *, float))this->klass[1]._1.element_class)(
                                               this,
                                               this->klass[1]._1.castClass,
                                               1.0);
    goto LABEL_27;
  }
  if ( !breakIconList )
    goto LABEL_32;
  v7 = breakIconList->max_length;
  if ( (int)v7 >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      v9 = v6->fields.breakIconList;
      if ( !v9 )
        break;
      if ( (unsigned int)v8 >= LODWORD(v9->max_length) )
        goto LABEL_33;
      v10 = v9->m_Items[v8];
      if ( !v10 )
        break;
      this = (WarBoardEventBossUIComponent_o *)v10->fields.Sprite;
      if ( !this )
        break;
      this = (WarBoardEventBossUIComponent_o *)((__int64 (__fastcall *)(WarBoardEventBossUIComponent_o *, Il2CppClass *, double))this->klass[1]._1.element_class)(
                                                 this,
                                                 this->klass[1]._1.castClass,
                                                 0.0);
      if ( (_DWORD)v7 == (_DWORD)++v8 )
        goto LABEL_10;
    }
LABEL_32:
    sub_2213CDC(this, *(_QWORD *)&maxCount);
  }
LABEL_10:
  v11 = v6->fields.breakIcon_11;
  if ( !v11 )
    goto LABEL_32;
  this = (WarBoardEventBossUIComponent_o *)WarBoardEventBossUIComponent__SetSpriteByLocalAtlas(
                                             v6,
                                             v11->fields.Sprite,
                                             v11->fields.EnabledSpriteName,
                                             method);
  v12 = v6->fields.breakIcon_11;
  if ( !v12 )
    goto LABEL_32;
  this = (WarBoardEventBossUIComponent_o *)v12->fields.Sprite;
  if ( !this )
    goto LABEL_32;
  klass = this->klass;
  LODWORD(v4) = 1.0;
LABEL_31:
  ((void (__fastcall *)(long double))klass[1]._1.element_class)(v4);
}


void WarBoardEventBossUIComponent__UpdateOldBossData(WarBoardEventBossUIComponent_o *this, const MethodInfo *method)
{
  struct WarBoardUserServantData_o *oldBossInfo; // x20
  struct WarBoardUserServantData_o *currentBossInfo; // x8
  WarBoardPieceData_o *bossPieceData; // x0
  __int64 CurrentHp; // x0
  __int64 v7; // x1
  struct WarBoardPieceData_o *v8; // x8

  oldBossInfo = this->fields.oldBossInfo;
  if ( oldBossInfo )
  {
    currentBossInfo = this->fields.currentBossInfo;
    if ( currentBossInfo )
    {
      bossPieceData = this->fields.bossPieceData;
      oldBossInfo->fields.stageBossIdx = currentBossInfo->fields.stageBossIdx;
      if ( bossPieceData )
      {
        CurrentHp = WarBoardPieceData__get_CurrentHp(bossPieceData, 0);
        v8 = this->fields.bossPieceData;
        oldBossInfo->fields.currentHp = CurrentHp;
        oldBossInfo = this->fields.oldBossInfo;
        if ( v8 )
          LODWORD(v8) = v8->fields._breakPoint_k__BackingField;
        if ( !oldBossInfo )
          sub_2213CDC(CurrentHp, v7);
      }
      else
      {
        LODWORD(v8) = 0;
        oldBossInfo->fields.currentHp = 0;
      }
      oldBossInfo->fields.defeatPoint = (int)v8;
    }
  }
}


int32_t WarBoardEventBossUIComponent__get_CurrentBossHp(WarBoardEventBossUIComponent_o *this, const MethodInfo *method)
{
  WarBoardPieceData_o *bossPieceData; // x0

  bossPieceData = this->fields.bossPieceData;
  if ( bossPieceData )
    LODWORD(bossPieceData) = WarBoardPieceData__get_CurrentHp(bossPieceData, 0);
  return (int)bossPieceData;
}


int32_t WarBoardEventBossUIComponent__get_CurrentDefeatPoint(
        WarBoardEventBossUIComponent_o *this,
        const MethodInfo *method)
{
  struct WarBoardPieceData_o *bossPieceData; // x8

  bossPieceData = this->fields.bossPieceData;
  if ( bossPieceData )
    return bossPieceData->fields._breakPoint_k__BackingField;
  else
    return 0;
}


int32_t WarBoardEventBossUIComponent__get_StageBossIdx(WarBoardEventBossUIComponent_o *this, const MethodInfo *method)
{
  struct WarBoardStageBossEntity_o *warBoardStageBossEnt; // x8

  warBoardStageBossEnt = this->fields.warBoardStageBossEnt;
  if ( warBoardStageBossEnt )
    return warBoardStageBossEnt->fields.idx;
  else
    return 0;
}


void WarBoardEventBossUIComponent_BreakIcon___ctor(
        WarBoardEventBossUIComponent_BreakIcon_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void WarBoardEventBossUIComponent___c__DisplayClass35_0___ctor(
        WarBoardEventBossUIComponent___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardEventBossUIComponent___c__DisplayClass35_0___GetStageBossName_b__0(
        WarBoardEventBossUIComponent___c__DisplayClass35_0_o *this,
        WarBoardPieceData_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_2213CDC(this, 0);
  return WarBoardPieceData__get_StageBossIdx(n, 0) == this->fields.stageBossIndex;
}


void WarBoardEventBossUIComponent___c__DisplayClass50_0___ctor(
        WarBoardEventBossUIComponent___c__DisplayClass50_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void WarBoardEventBossUIComponent___c__DisplayClass50_0___PlayDaedAnim_b__0(
        WarBoardEventBossUIComponent___c__DisplayClass50_0_o *this,
        const MethodInfo *method)
{
  struct WarBoardEventBossUIComponent_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (this = (WarBoardEventBossUIComponent___c__DisplayClass50_0_o *)_4__this->fields.bossIconSp) == 0
    || (this = (WarBoardEventBossUIComponent___c__DisplayClass50_0_o *)UnityEngine_Component__get_gameObject(
                                                                         (UnityEngine_Component_o *)this,
                                                                         0)) == 0 )
  {
    sub_2213CDC(this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
}


void WarBoardEventBossUIComponent___c__DisplayClass50_0___PlayDaedAnim_b__1(
        WarBoardEventBossUIComponent___c__DisplayClass50_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.endAction, 0);
}


void WarBoardEventBossUIComponent___c__DisplayClass51_0___ctor(
        WarBoardEventBossUIComponent___c__DisplayClass51_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void WarBoardEventBossUIComponent___c__DisplayClass51_0___PlayPointBreakAnim_b__0(
        WarBoardEventBossUIComponent___c__DisplayClass51_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct WarBoardEventBossUIComponent_o *_4__this; // x0
  struct WarBoardPieceData_o *bossPieceData; // x8
  UILabel_o *totalHpLabel; // x20
  int32_t v7; // w1
  const MethodInfo *v8; // x3
  struct WarBoardUserServantData_o *currentBossInfo; // x8
  struct WarBoardPieceData_o *v10; // x9
  int32_t v11; // w2
  struct WarBoardEventBossUIComponent_o *v12; // x8
  System_Action_o *endAction; // x0
  UnityEngine_Color_o TextEffectColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  bossPieceData = _4__this->fields.bossPieceData;
  totalHpLabel = _4__this->fields.totalHpLabel;
  v7 = bossPieceData ? bossPieceData->fields._breakPoint_k__BackingField : 0;
  TextEffectColor = WarBoardEventBossUIComponent__GetTextEffectColor(_4__this, v7, v2);
  if ( !totalHpLabel )
    goto LABEL_13;
  UILabel__set_effectColor(totalHpLabel, TextEffectColor, 0);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  currentBossInfo = _4__this->fields.currentBossInfo;
  if ( !currentBossInfo )
    goto LABEL_13;
  v10 = _4__this->fields.bossPieceData;
  v11 = v10 ? v10->fields._breakPoint_k__BackingField : 0;
  WarBoardEventBossUIComponent__SetupBreakPoint(_4__this, currentBossInfo->fields.maxDefeatPoint, v11, v8);
  v12 = this->fields.__4__this;
  if ( !v12 )
LABEL_13:
    sub_2213CDC(_4__this, method);
  endAction = this->fields.endAction;
  v12->fields.isPointBreak = 0;
  ActionExtensions__Call(endAction, 0);
}


void WarBoardEventBossUIComponent___c__DisplayClass52_0___ctor(
        WarBoardEventBossUIComponent___c__DisplayClass52_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void WarBoardEventBossUIComponent___c__DisplayClass52_0___PlayHpCut_b__0(
        WarBoardEventBossUIComponent___c__DisplayClass52_0_o *this,
        const MethodInfo *method)
{
  struct EasingObject_o *easingObj; // x9
  struct WarBoardEventBossUIComponent_o *_4__this; // x8
  WarBoardEventBossUIComponent___c__DisplayClass52_0_o *v4; // x19
  float v5; // s0
  float mNow; // s1
  float v7; // s8
  const MethodInfo *v8; // x2
  double v9; // d0
  int64_t v10; // x1

  easingObj = this->fields.easingObj;
  if ( !easingObj )
    goto LABEL_13;
  _4__this = this->fields.__4__this;
  v4 = this;
  if ( !_4__this )
    goto LABEL_13;
  v5 = 1.0;
  mNow = easingObj->fields.mNow;
  this = (WarBoardEventBossUIComponent___c__DisplayClass52_0_o *)_4__this->fields.hpBarSlider;
  if ( mNow <= 1.0 )
    v5 = easingObj->fields.mNow;
  if ( mNow < 0.0 )
    v5 = 0.0;
  if ( !this
    || (v7 = _4__this->fields.HPfrom + (float)((float)(_4__this->fields.HPto - _4__this->fields.HPfrom) * v5),
        UIProgressBar__set_value((UIProgressBar_o *)this, v7, 0),
        (this = (WarBoardEventBossUIComponent___c__DisplayClass52_0_o *)v4->fields.__4__this) == 0) )
  {
LABEL_13:
    sub_2213CDC(this, method);
  }
  v9 = v7 * (double)v4->fields.maxHp;
  if ( v9 == INFINITY )
    v10 = 0x8000000000000000LL;
  else
    v10 = (__int64)v9;
  WarBoardEventBossUIComponent__SetTotalHpText((WarBoardEventBossUIComponent_o *)this, v10, v8);
}


void WarBoardEventBossUIComponent___c__DisplayClass52_0___PlayHpCut_b__1(
        WarBoardEventBossUIComponent___c__DisplayClass52_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  WarBoardEventBossUIComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_2213CDC(0, method);
  WarBoardEventBossUIComponent__SetTotalHpText(_4__this, this->fields.totalHp, v2);
  ActionExtensions__Call(this->fields.endAction, 0);
}


void WarBoardEventBossUIComponent___c__DisplayClass53_0___ctor(
        WarBoardEventBossUIComponent___c__DisplayClass53_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void WarBoardEventBossUIComponent___c__DisplayClass53_0___PlayHpRecover_b__0(
        WarBoardEventBossUIComponent___c__DisplayClass53_0_o *this,
        const MethodInfo *method)
{
  struct EasingObject_o *easingObj; // x9
  struct WarBoardEventBossUIComponent_o *_4__this; // x8
  WarBoardEventBossUIComponent___c__DisplayClass53_0_o *v4; // x19
  float v5; // s0
  float mNow; // s1
  float v7; // s8
  const MethodInfo *v8; // x2
  double v9; // d0
  int64_t v10; // x1

  easingObj = this->fields.easingObj;
  if ( !easingObj )
    goto LABEL_13;
  _4__this = this->fields.__4__this;
  v4 = this;
  if ( !_4__this )
    goto LABEL_13;
  v5 = 1.0;
  mNow = easingObj->fields.mNow;
  this = (WarBoardEventBossUIComponent___c__DisplayClass53_0_o *)_4__this->fields.hpBarSlider;
  if ( mNow <= 1.0 )
    v5 = easingObj->fields.mNow;
  if ( mNow < 0.0 )
    v5 = 0.0;
  if ( !this
    || (v7 = _4__this->fields.HPfrom + (float)((float)(_4__this->fields.HPto - _4__this->fields.HPfrom) * v5),
        UIProgressBar__set_value((UIProgressBar_o *)this, v7, 0),
        (this = (WarBoardEventBossUIComponent___c__DisplayClass53_0_o *)v4->fields.__4__this) == 0) )
  {
LABEL_13:
    sub_2213CDC(this, method);
  }
  v9 = v7 * (double)v4->fields.maxHp;
  if ( v9 == INFINITY )
    v10 = 0x8000000000000000LL;
  else
    v10 = (__int64)v9;
  WarBoardEventBossUIComponent__SetTotalHpText((WarBoardEventBossUIComponent_o *)this, v10, v8);
}


void WarBoardEventBossUIComponent___c__DisplayClass53_0___PlayHpRecover_b__1(
        WarBoardEventBossUIComponent___c__DisplayClass53_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct WarBoardEventBossUIComponent_o *_4__this; // x20
  WarBoardPieceData_o *bossPieceData; // x0
  int64_t CurrentHp; // x1

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_2213CDC(this, method);
  bossPieceData = _4__this->fields.bossPieceData;
  if ( bossPieceData )
    CurrentHp = WarBoardPieceData__get_CurrentHp(bossPieceData, 0);
  else
    CurrentHp = 0;
  WarBoardEventBossUIComponent__SetTotalHpText(_4__this, CurrentHp, v2);
  ActionExtensions__Call(this->fields.endAction, 0);
}