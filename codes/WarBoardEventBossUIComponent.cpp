void WarBoardEventBossUIComponent___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  int32_t v3; // w1
  struct WarBoardEventBossUIComponent_StaticFields *static_fields; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C3531B & 1) == 0 )
  {
    sub_1C32C20(&WarBoardEventBossUIComponent_TypeInfo);
    sub_1C32C20(&StringLiteral_15581/*"WarBoardEventBossEffect_Break{0}"*/);
    sub_1C32C20(&StringLiteral_15582/*"WarBoardEventBossEffect_Dead{0}"*/);
    byte_4C3531B = 1;
  }
  WarBoardEventBossUIComponent_TypeInfo->static_fields->BOSS_CLEAR_EFFECT_PREFAB = (struct System_String_o *)StringLiteral_15582/*"WarBoardEventBossEffect_Dead{0}"*/;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)WarBoardEventBossUIComponent_TypeInfo->static_fields,
    StringLiteral_15582/*"WarBoardEventBossEffect_Dead{0}"*/,
    v1,
    v2);
  v3 = StringLiteral_15581/*"WarBoardEventBossEffect_Break{0}"*/;
  static_fields = WarBoardEventBossUIComponent_TypeInfo->static_fields;
  static_fields->BOSS_POINT_BREAK_EFFECT_PREFAB = (struct System_String_o *)StringLiteral_15581/*"WarBoardEventBossEffect_Break{0}"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->BOSS_POINT_BREAK_EFFECT_PREFAB, v3, v5, v6);
}


void WarBoardEventBossUIComponent___ctor(WarBoardEventBossUIComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C3531A & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_UIAtlas___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_UIAtlas__TypeInfo);
    byte_4C3531A = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_UIAtlas__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_UIAtlas___ctor__);
  this->fields.atlasList = (struct System_Collections_Generic_List_UIAtlas__o *)v3;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.atlasList, (int32_t)v3, v4, v5);
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
  float v5; // s0
  float v6; // s1
  float v7; // s2
  float v8; // s3
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C35319 & 1) == 0 )
  {
    sub_1C32C20(&System_Convert_TypeInfo);
    byte_4C35319 = 1;
  }
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v4 = System_Convert__ToInt32_64615676(hexStrColor, 16, 0);
  v5 = (float)BYTE2(v4) / 255.0;
  v6 = (float)BYTE1(v4) / 255.0;
  v7 = (float)(unsigned __int8)v4 / 255.0;
  v8 = 1.0;
  result.fields.a = v8;
  result.fields.b = v7;
  result.fields.g = v6;
  result.fields.r = v5;
  return result;
}


float WarBoardEventBossUIComponent__ConvertHpToRate(
        WarBoardEventBossUIComponent_o *this,
        int64_t hp,
        int64_t maxHp,
        const MethodInfo *method)
{
  float v4; // s0
  float v5; // s1
  bool v6; // nf
  float result; // s0

  v4 = (double)hp / (double)maxHp;
  v5 = fminf(v4, 1.0);
  v6 = v4 < 0.0;
  result = 0.0;
  if ( !v6 )
    return v5;
  return result;
}


System_String_o *WarBoardEventBossUIComponent__CreateSaveDta(
        WarBoardEventBossUIComponent_o *this,
        const MethodInfo *method)
{
  System_Text_StringBuilder_o *v3; // x20
  System_Text_StringBuilder_o *appended; // x0
  struct WarBoardUserServantData_o *oldBossInfo; // x8
  struct WarBoardUserServantData_o *v6; // x8
  struct WarBoardUserServantData_o *v7; // x8

  if ( (byte_4C35318 & 1) == 0 )
  {
    sub_1C32C20(&System_Text_StringBuilder_TypeInfo);
    sub_1C32C20(&StringLiteral_1457/*":"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C35318 = 1;
  }
  if ( !this->fields.oldBossInfo )
    return (System_String_o *)StringLiteral_1/*""*/;
  v3 = (System_Text_StringBuilder_o *)sub_1C32E6C(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v3, 0);
  oldBossInfo = this->fields.oldBossInfo;
  if ( !oldBossInfo
    || !v3
    || (System_Text_StringBuilder__Append_63606104(v3, oldBossInfo->fields.stageBossIdx, 0),
        appended = System_Text_StringBuilder__Append_63603608(v3, (System_String_o *)StringLiteral_1457/*":"*/, 0),
        (v6 = this->fields.oldBossInfo) == 0)
    || (System_Text_StringBuilder__Append_63606104(v3, v6->fields.currentHp, 0),
        appended = System_Text_StringBuilder__Append_63603608(v3, (System_String_o *)StringLiteral_1457/*":"*/, 0),
        (v7 = this->fields.oldBossInfo) == 0) )
  {
    sub_1C32E7C(appended);
  }
  System_Text_StringBuilder__Append_63606104(v3, v7->fields.defeatPoint, 0);
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

  if ( (byte_4C35310 & 1) == 0 )
  {
    sub_1C32C20(&Method_AssetData_GetObject_GameObject____78059392);
    byte_4C35310 = 1;
  }
  result = (UnityEngine_GameObject_o *)this->fields.assetData;
  if ( result )
    return (UnityEngine_GameObject_o *)AssetData__GetObject_object__51111776(
                                         (AssetData_o *)result,
                                         name,
                                         (const MethodInfo_30BE760 *)Method_AssetData_GetObject_GameObject____78059392);
  return result;
}


int64_t WarBoardEventBossUIComponent__GetMaxHpByBreakPoint(
        WarBoardEventBossUIComponent_o *this,
        int32_t restBreakPoint,
        const MethodInfo *method)
{
  struct WarBoardUserServantData_o *currentBossInfo; // x8

  if ( (byte_4C3530F & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_IndexValue_int____78064648);
    byte_4C3530F = 1;
  }
  currentBossInfo = this->fields.currentBossInfo;
  if ( currentBossInfo )
    return BasicHelper__IndexValue_int_(
             currentBossInfo->fields.breakHp,
             restBreakPoint,
             currentBossInfo->fields.hp,
             (const MethodInfo_30CB8AC *)Method_BasicHelper_IndexValue_int____78064648);
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
  __int64 v4; // x20
  Il2CppObject *Instance; // x0
  void *monitor; // x8
  System_Object_array *v7; // x19
  System_Func_object__bool__o *v8; // x21
  Il2CppObject *object; // x0
  BattleServantData_o *klass; // x0

  if ( (byte_4C3530D & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_Find_WarBoardPieceData___);
    sub_1C32C20(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C32C20(&string_TypeInfo);
    sub_1C32C20(&Method_WarBoardEventBossUIComponent___c__DisplayClass35_0__GetStageBossName_b__0__);
    sub_1C32C20(&WarBoardEventBossUIComponent___c__DisplayClass35_0_TypeInfo);
    byte_4C3530D = 1;
  }
  v4 = sub_1C32E6C(WarBoardEventBossUIComponent___c__DisplayClass35_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4
    || (*(_DWORD *)(v4 + 16) = stageBossIndex,
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0)
    || (monitor = Instance[27].monitor) == 0 )
  {
    sub_1C32E7C(Instance);
  }
  v7 = (System_Object_array *)*((_QWORD *)monitor + 6);
  if ( v7
    && v7->max_length
    && (v8 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_WarBoardPieceData__bool__TypeInfo),
        System_Func_object__bool____ctor(
          v8,
          (Il2CppObject *)v4,
          Method_WarBoardEventBossUIComponent___c__DisplayClass35_0__GetStageBossName_b__0__,
          0),
        (object = BasicHelper__Find_object_(
                    v7,
                    (System_Func_T__bool__o *)v8,
                    (const MethodInfo_30C735C *)Method_BasicHelper_Find_WarBoardPieceData___)) != 0)
    && (klass = (BattleServantData_o *)object[8].klass) != 0 )
  {
    return BattleServantData__getServantShortName(klass, 0);
  }
  else
  {
    return string_TypeInfo->static_fields->Empty;
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

  if ( (byte_4C3530E & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_IndexValue_string___);
    sub_1C32C20(&string___TypeInfo);
    sub_1C32C20(&StringLiteral_1169/*"0x000000"*/);
    byte_4C3530E = 1;
  }
  warBoardStageBossEnt = this->fields.warBoardStageBossEnt;
  if ( warBoardStageBossEnt )
  {
    bossColor = (Il2CppObject *)warBoardStageBossEnt->fields.bossColor;
    TextEffectColors = WarBoardStageBossEntity__GetTextEffectColors(warBoardStageBossEnt, 0);
  }
  else
  {
    bossColor = (Il2CppObject *)StringLiteral_1169/*"0x000000"*/;
    TextEffectColors = (System_String_array *)sub_1C32CC8(string___TypeInfo, 0);
  }
  v8 = BasicHelper__IndexValue_object_(
         (System_Object_array *)TextEffectColors,
         restBreakPoint - 1,
         bossColor,
         (const MethodInfo_30CB990 *)Method_BasicHelper_IndexValue_string___);
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  WarBoardEventBossUIComponent_c *v10; // x0
  System_String_o *BOSS_CLEAR_EFFECT_PREFAB; // x21
  Il2CppObject *v12; // x0
  System_String_o *v13; // x0
  const MethodInfo *v14; // x2
  struct UnityEngine_GameObject_o *GameObjectFromEventUIAssetData; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w9
  System_String_o *BOSS_POINT_BREAK_EFFECT_PREFAB; // x20
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  __int64 v23; // x5
  __int64 v24; // x6
  __int64 v25; // x7
  Il2CppObject *v26; // x0
  System_String_o *v27; // x0
  const MethodInfo *v28; // x2
  struct UnityEngine_GameObject_o *v29; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  int32_t v32; // [xsp+8h] [xbp-38h] BYREF
  int32_t defeatEffectId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C35311 & 1) == 0 )
  {
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&WarBoardEventBossUIComponent_TypeInfo);
    byte_4C35311 = 1;
  }
  if ( ent )
  {
    v10 = WarBoardEventBossUIComponent_TypeInfo;
    if ( !WarBoardEventBossUIComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardEventBossUIComponent_TypeInfo);
      v10 = WarBoardEventBossUIComponent_TypeInfo;
    }
    BOSS_CLEAR_EFFECT_PREFAB = v10->static_fields->BOSS_CLEAR_EFFECT_PREFAB;
    defeatEffectId = ent->fields.defeatEffectId;
    v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &defeatEffectId, method, v3, v4, v5, v6, v7);
    v13 = System_String__Format(BOSS_CLEAR_EFFECT_PREFAB, v12, 0);
    GameObjectFromEventUIAssetData = WarBoardEventBossUIComponent__GetGameObjectFromEventUIAssetData(this, v13, v14);
    this->fields.deadAnimPrefab = GameObjectFromEventUIAssetData;
    sub_1C32BC4(
      (CGThumbnailListItem_o *)&this->fields.deadAnimPrefab,
      (int32_t)GameObjectFromEventUIAssetData,
      v16,
      v17);
    v18 = ent->fields.defeatEffectId;
    BOSS_POINT_BREAK_EFFECT_PREFAB = WarBoardEventBossUIComponent_TypeInfo->static_fields->BOSS_POINT_BREAK_EFFECT_PREFAB;
    v32 = v18;
    v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v32, v20, v21, v22, v23, v24, v25);
    v27 = System_String__Format(BOSS_POINT_BREAK_EFFECT_PREFAB, v26, 0);
    v29 = WarBoardEventBossUIComponent__GetGameObjectFromEventUIAssetData(this, v27, v28);
    this->fields.pointBreakAnimPrefab = v29;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.pointBreakAnimPrefab, (int32_t)v29, v30, v31);
  }
}


void WarBoardEventBossUIComponent__LoadLocalAtlas(
        WarBoardEventBossUIComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  WarBoardEventBossUIComponent_o *v9; // x20
  struct System_Collections_Generic_List_UIAtlas__o *atlasList; // x8
  __int64 size; // x2
  int v12; // w9
  int i; // w28
  Il2CppObject *v14; // x0
  Il2CppObject *v15; // x21
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  __int64 v19; // x5
  __int64 v20; // x6
  __int64 v21; // x7
  Il2CppObject *v22; // x0
  System_String_o *v23; // x0
  const MethodInfo *v24; // x2
  UnityEngine_Object_o *GameObjectFromEventUIAssetData; // x21
  Il2CppObject *Component_object; // x21
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  intptr_t m_CachedPtr; // x8
  _QWORD *v30; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v32; // x8
  int32_t v33; // [xsp+8h] [xbp-58h] BYREF
  int v34; // [xsp+Ch] [xbp-54h] BYREF

  v9 = this;
  if ( (byte_4C35312 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_UIAtlas__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UIAtlas__Clear__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_25060/*"{0:D2}"*/);
    this = (WarBoardEventBossUIComponent_o *)sub_1C32C20(&StringLiteral_5346/*"DownloadEventUIAtlas{0}{1}"*/);
    byte_4C35312 = 1;
  }
  if ( v9->fields.assetData )
  {
    atlasList = v9->fields.atlasList;
    if ( !atlasList )
LABEL_22:
      sub_1C32E7C(this);
    size = (unsigned int)atlasList->fields._size;
    v12 = atlasList->fields._version + 1;
    atlasList->fields._size = 0;
    atlasList->fields._version = v12;
    if ( (int)size >= 1 )
      System_Array__Clear((System_Array_o *)atlasList->fields._items, 0, size, 0);
    for ( i = 1; ; ++i )
    {
      v34 = i;
      v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v34, size, v3, v4, v5, v6, v7);
      v15 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_25060/*"{0:D2}"*/, v14, 0);
      v33 = eventId;
      v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v33, v16, v17, v18, v19, v20, v21);
      v23 = System_String__Format_63559836((System_String_o *)StringLiteral_5346/*"DownloadEventUIAtlas{0}{1}"*/, v22, v15, 0);
      GameObjectFromEventUIAssetData = (UnityEngine_Object_o *)WarBoardEventBossUIComponent__GetGameObjectFromEventUIAssetData(
                                                                 v9,
                                                                 v23,
                                                                 v24);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (WarBoardEventBossUIComponent_o *)UnityEngine_Object__op_Equality(GameObjectFromEventUIAssetData, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
        break;
      if ( !GameObjectFromEventUIAssetData )
        goto LABEL_22;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)GameObjectFromEventUIAssetData,
                           (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
        break;
      this = (WarBoardEventBossUIComponent_o *)v9->fields.atlasList;
      if ( !this )
        goto LABEL_22;
      m_CachedPtr = this->fields.m_CachedPtr;
      v30 = Method_System_Collections_Generic_List_UIAtlas__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !m_CachedPtr )
        goto LABEL_22;
      m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          Component_object,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
      }
      else
      {
        v32 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
        LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v32 + 32) = Component_object;
        sub_1C32BC4((CGThumbnailListItem_o *)(v32 + 32), (int32_t)Component_object, v27, v28);
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
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  Il2CppObject *deadAnimPrefab; // x22
  Il2CppObject *v12; // x22
  Il2CppObject *Component_object; // x22
  System_Action_o *v14; // x19
  System_Action_o *v15; // x19
  int32_t v16; // w2
  const MethodInfo *v17; // x3

  if ( (byte_4C35314 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_WarBoardEventBossUIComponent___c__DisplayClass50_0__PlayDaedAnim_b__0__);
    sub_1C32C20(&Method_WarBoardEventBossUIComponent___c__DisplayClass50_0__PlayDaedAnim_b__1__);
    sub_1C32C20(&WarBoardEventBossUIComponent___c__DisplayClass50_0_TypeInfo);
    byte_4C35314 = 1;
  }
  v5 = sub_1C32E6C(WarBoardEventBossUIComponent___c__DisplayClass50_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_13;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v7, v8);
  *(_QWORD *)(v5 + 24) = endAction;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 24), (int32_t)endAction, v9, v10);
  deadAnimPrefab = (Il2CppObject *)this->fields.deadAnimPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v12 = UnityEngine_Object__Instantiate_object_(
          deadAnimPrefab,
          (const MethodInfo_3169758 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  GameObjectExtensions__SafeSetParent((UnityEngine_GameObject_o *)v12, (UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__ResetLocalPosition((UnityEngine_GameObject_o *)v12, 0);
  if ( !v12 )
    goto LABEL_13;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)v12,
                       (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
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
    sub_1C32E7C(bossIconSp);
  }
  v14 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(
    v14,
    (Il2CppObject *)v5,
    Method_WarBoardEventBossUIComponent___c__DisplayClass50_0__PlayDaedAnim_b__0__,
    0);
  if ( !Component_object )
    goto LABEL_13;
  CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)Component_object, 0, v14, 0);
  v15 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(
    v15,
    (Il2CppObject *)v5,
    Method_WarBoardEventBossUIComponent___c__DisplayClass50_0__PlayDaedAnim_b__1__,
    0);
  Component_object[2].monitor = v15;
  sub_1C32BC4((CGThumbnailListItem_o *)&Component_object[2].monitor, (int32_t)v15, v16, v17);
}


void WarBoardEventBossUIComponent__PlayHpCut(
        WarBoardEventBossUIComponent_o *this,
        float duration,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v7; // x19
  int64_t MaxHpByBreakPoint; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x2
  struct WarBoardUserServantData_o *oldBossInfo; // x8
  int32_t *p_defeatPoint; // x8
  struct WarBoardPieceData_o *bossPieceData; // x8
  int32_t v17; // w1
  __int64 v18; // x8
  struct WarBoardUserServantData_o *v19; // x9
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  EasingObject_o *v24; // x20
  System_Action_o *v25; // x21
  System_Action_o *v26; // x22

  if ( (byte_4C35316 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_1C32C20(&Method_WarBoardEventBossUIComponent___c__DisplayClass52_0__PlayHpCut_b__0__);
    sub_1C32C20(&Method_WarBoardEventBossUIComponent___c__DisplayClass52_0__PlayHpCut_b__1__);
    sub_1C32C20(&WarBoardEventBossUIComponent___c__DisplayClass52_0_TypeInfo);
    byte_4C35316 = 1;
  }
  v7 = sub_1C32E6C(WarBoardEventBossUIComponent___c__DisplayClass52_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_20;
  *(_QWORD *)(v7 + 24) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v7 + 24), (int32_t)this, v9, v10);
  *(_QWORD *)(v7 + 48) = endAction;
  sub_1C32BC4((CGThumbnailListItem_o *)(v7 + 48), (int32_t)endAction, v11, v12);
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
    v17 = *p_defeatPoint;
    goto LABEL_10;
  }
  v17 = 0;
LABEL_10:
  MaxHpByBreakPoint = WarBoardEventBossUIComponent__GetMaxHpByBreakPoint(this, v17, v13);
  *(_QWORD *)(v7 + 32) = MaxHpByBreakPoint;
  if ( this->fields.isPointBreak || (MaxHpByBreakPoint = (int64_t)this->fields.bossPieceData) == 0 )
  {
    v18 = 0;
  }
  else
  {
    MaxHpByBreakPoint = WarBoardPieceData__get_CurrentHp((WarBoardPieceData_o *)MaxHpByBreakPoint, 0);
    v18 = (int)MaxHpByBreakPoint;
  }
  *(_QWORD *)(v7 + 40) = v18;
  v19 = this->fields.oldBossInfo;
  if ( !v19 )
    goto LABEL_20;
  if ( v18 == v19->fields.currentHp )
  {
    ActionExtensions__Call(*(System_Action_o **)(v7 + 48), 0);
    return;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_3136458 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v7 + 16) = Component_object;
  sub_1C32BC4((CGThumbnailListItem_o *)(v7 + 16), (int32_t)Component_object, v22, v23);
  v24 = *(EasingObject_o **)(v7 + 16);
  v25 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(
    v25,
    (Il2CppObject *)v7,
    Method_WarBoardEventBossUIComponent___c__DisplayClass52_0__PlayHpCut_b__0__,
    0);
  v26 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(
    v26,
    (Il2CppObject *)v7,
    Method_WarBoardEventBossUIComponent___c__DisplayClass52_0__PlayHpCut_b__1__,
    0);
  if ( !v24 )
LABEL_20:
    sub_1C32E7C(MaxHpByBreakPoint);
  EasingObject__Play(v24, duration, v25, v26, 0.0, 0, 0);
}


void WarBoardEventBossUIComponent__PlayHpRecover(
        WarBoardEventBossUIComponent_o *this,
        float duration,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v7; // x19
  UIProgressBar_o *hpBarSlider; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x2
  struct WarBoardPieceData_o *bossPieceData; // x8
  int32_t v15; // w1
  float value; // s0
  WarBoardPieceData_o *v17; // x0
  double v18; // d0
  float v19; // s0
  float v20; // s1
  bool v21; // nf
  float v22; // s0
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  EasingObject_o *v27; // x20
  System_Action_o *v28; // x21
  System_Action_o *v29; // x22

  if ( (byte_4C35317 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_1C32C20(&Method_WarBoardEventBossUIComponent___c__DisplayClass53_0__PlayHpRecover_b__0__);
    sub_1C32C20(&Method_WarBoardEventBossUIComponent___c__DisplayClass53_0__PlayHpRecover_b__1__);
    sub_1C32C20(&WarBoardEventBossUIComponent___c__DisplayClass53_0_TypeInfo);
    byte_4C35317 = 1;
  }
  v7 = sub_1C32E6C(WarBoardEventBossUIComponent___c__DisplayClass53_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_15;
  *(_QWORD *)(v7 + 24) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v7 + 24), (int32_t)this, v9, v10);
  *(_QWORD *)(v7 + 40) = endAction;
  sub_1C32BC4((CGThumbnailListItem_o *)(v7 + 40), (int32_t)endAction, v11, v12);
  bossPieceData = this->fields.bossPieceData;
  v15 = bossPieceData ? bossPieceData->fields._breakPoint_k__BackingField : 0;
  *(_QWORD *)(v7 + 32) = WarBoardEventBossUIComponent__GetMaxHpByBreakPoint(this, v15, v13);
  hpBarSlider = (UIProgressBar_o *)this->fields.hpBarSlider;
  if ( !hpBarSlider )
    goto LABEL_15;
  value = UIProgressBar__get_value(hpBarSlider, 0);
  v17 = this->fields.bossPieceData;
  this->fields.HPfrom = value;
  v18 = v17 ? (double)WarBoardPieceData__get_CurrentHp(v17, 0) : 0.0;
  v19 = v18 / (double)*(__int64 *)(v7 + 32);
  v20 = fminf(v19, 1.0);
  v21 = v19 < 0.0;
  v22 = 0.0;
  if ( !v21 )
    v22 = v20;
  this->fields.HPto = v22;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_3136458 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v7 + 16) = Component_object;
  sub_1C32BC4((CGThumbnailListItem_o *)(v7 + 16), (int32_t)Component_object, v25, v26);
  v27 = *(EasingObject_o **)(v7 + 16);
  v28 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(
    v28,
    (Il2CppObject *)v7,
    Method_WarBoardEventBossUIComponent___c__DisplayClass53_0__PlayHpRecover_b__0__,
    0);
  v29 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(
    v29,
    (Il2CppObject *)v7,
    Method_WarBoardEventBossUIComponent___c__DisplayClass53_0__PlayHpRecover_b__1__,
    0);
  if ( !v27 )
LABEL_15:
    sub_1C32E7C(hpBarSlider);
  EasingObject__Play(v27, duration, v28, v29, 0.0, 0, 0);
}


void WarBoardEventBossUIComponent__PlayPointBreakAnim(
        WarBoardEventBossUIComponent_o *this,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v5; // x21
  UnityEngine_Component_o *Sprite; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Action_o **v9; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct WarBoardUserServantData_o *oldBossInfo; // x9
  struct WarBoardEventBossUIComponent_BreakIcon_array *breakIconList; // x8
  unsigned int v14; // w9
  WarBoardEventBossUIComponent_BreakIcon_o *v15; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *pointBreakAnimPrefab; // x22
  UnityEngine_GameObject_o *v18; // x23
  Il2CppObject *v19; // x22
  Il2CppObject *Component_object; // x22
  const MethodInfo *v21; // x2
  struct WarBoardPieceData_o *bossPieceData; // x8
  UILabel_o *totalHpLabel; // x21
  int32_t breakPoint_k__BackingField; // w1
  System_Action_o *v25; // x19
  const MethodInfo *v26; // x3
  struct WarBoardUserServantData_o *currentBossInfo; // x8
  struct WarBoardPieceData_o *v28; // x9
  int32_t v29; // w2
  UnityEngine_Color_o TextEffectColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C35315 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_WarBoardEventBossUIComponent___c__DisplayClass51_0__PlayPointBreakAnim_b__0__);
    sub_1C32C20(&WarBoardEventBossUIComponent___c__DisplayClass51_0_TypeInfo);
    byte_4C35315 = 1;
  }
  v5 = sub_1C32E6C(WarBoardEventBossUIComponent___c__DisplayClass51_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_24;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v7, v8);
  *(_QWORD *)(v5 + 24) = endAction;
  v9 = (System_Action_o **)(v5 + 24);
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 24), (int32_t)endAction, v10, v11);
  oldBossInfo = this->fields.oldBossInfo;
  if ( !oldBossInfo )
    goto LABEL_24;
  breakIconList = this->fields.breakIconList;
  if ( !breakIconList )
    goto LABEL_24;
  v14 = (oldBossInfo->fields.defeatPoint - 1) & ~((oldBossInfo->fields.defeatPoint - 1) >> 31);
  if ( v14 >= LODWORD(breakIconList->max_length) )
    sub_1C32E84(Sprite);
  v15 = breakIconList->m_Items[v14];
  if ( !v15 )
    goto LABEL_24;
  Sprite = (UnityEngine_Component_o *)v15->fields.Sprite;
  if ( !Sprite )
    goto LABEL_24;
  gameObject = UnityEngine_Component__get_gameObject(Sprite, 0);
  pointBreakAnimPrefab = (Il2CppObject *)this->fields.pointBreakAnimPrefab;
  v18 = gameObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v19 = UnityEngine_Object__Instantiate_object_(
          pointBreakAnimPrefab,
          (const MethodInfo_3169758 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  GameObjectExtensions__SafeSetParent_36042552((UnityEngine_GameObject_o *)v19, v18, 0);
  GameObjectExtensions__ResetLocalPosition((UnityEngine_GameObject_o *)v19, 0);
  if ( !v19 )
    goto LABEL_24;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)v19,
                       (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
  {
    v25 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(
      v25,
      (Il2CppObject *)v5,
      Method_WarBoardEventBossUIComponent___c__DisplayClass51_0__PlayPointBreakAnim_b__0__,
      0);
    if ( Component_object )
    {
      CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)Component_object, 0, v25, 0);
      return;
    }
LABEL_24:
    sub_1C32E7C(Sprite);
  }
  bossPieceData = this->fields.bossPieceData;
  totalHpLabel = this->fields.totalHpLabel;
  if ( bossPieceData )
    breakPoint_k__BackingField = bossPieceData->fields._breakPoint_k__BackingField;
  else
    breakPoint_k__BackingField = 0;
  TextEffectColor = WarBoardEventBossUIComponent__GetTextEffectColor(this, breakPoint_k__BackingField, v21);
  if ( !totalHpLabel )
    goto LABEL_24;
  UILabel__set_effectColor(totalHpLabel, TextEffectColor, 0);
  currentBossInfo = this->fields.currentBossInfo;
  if ( !currentBossInfo )
    goto LABEL_24;
  v28 = this->fields.bossPieceData;
  if ( v28 )
    v29 = v28->fields._breakPoint_k__BackingField;
  else
    v29 = 0;
  WarBoardEventBossUIComponent__SetupBreakPoint(this, currentBossInfo->fields.maxDefeatPoint, v29, v26);
  this->fields.isPointBreak = 0;
  ActionExtensions__Call(*v9, 0);
}


void WarBoardEventBossUIComponent__SetDisp(
        WarBoardEventBossUIComponent_o *this,
        WarBoardDataEntity_o *warBoardDataEntity,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  WarBoardDataEntity_o **p_warBoardDataEnt; // x21
  __int64 bossIconSp; // x0
  struct WarBoardStageBossEntity_o *warBoardStageBossEnt; // x8
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct WarBoardStageBossEntity_o *v11; // x8
  _DWORD *v12; // x22
  struct WarBoardUserServantData_o *StageBossData; // x1
  struct WarBoardUserServantData_o **p_currentBossInfo; // x20
  struct WarBoardStageBossEntity_o *v15; // x8
  struct WarBoardPieceData_o *EventBossPiece; // x0
  struct WarBoardPieceData_o **p_bossPieceData; // x21
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  WarBoardUserServantData_o *v20; // x24
  struct WarBoardUserServantData_o **p_oldBossInfo; // x23
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  struct WarBoardUserServantData_o *currentBossInfo; // x8
  struct WarBoardUserServantData_o *v27; // x9
  struct System_Int32_array *breakHp; // x1
  const MethodInfo *v29; // x2
  struct WarBoardUserServantData_o *v30; // x8
  struct WarBoardUserServantData_o *v31; // x23
  WarBoardUserServantData_o *v32; // x23
  struct WarBoardUserServantData_o **v33; // x22
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  struct WarBoardUserServantData_o *v38; // x8
  struct WarBoardUserServantData_o *v39; // x9
  struct System_Int32_array *v40; // x1
  struct WarBoardUserServantData_o *v41; // x8
  struct WarBoardPieceData_o *v42; // x8
  struct WarBoardUserServantData_o *oldBossInfo; // x9
  int32_t defeatPoint; // w1
  struct WarBoardUserServantData_o *v45; // x8
  double v46; // d0
  float v47; // s1
  float HPfrom; // s0
  struct WarBoardUserServantData_o *v49; // x8
  double v50; // d9
  WarBoardPieceData_o *bossPieceData; // x0
  float v52; // s0
  float v53; // s1
  float v54; // s0
  double v55; // d0
  float v56; // s0
  float v57; // s1
  float v58; // s0
  const MethodInfo *v59; // x2
  struct WarBoardUserServantData_o *v60; // x8
  const MethodInfo *v61; // x3
  struct WarBoardUserServantData_o *v62; // x8
  __int64 v63; // x2
  __int64 v64; // x3
  __int64 v65; // x4
  __int64 v66; // x5
  __int64 v67; // x6
  __int64 v68; // x7
  struct WarBoardStageBossEntity_o *v69; // x8
  int32_t idx; // w25
  UISprite_o *v71; // x20
  Il2CppObject *v72; // x21
  __int64 v73; // x2
  __int64 v74; // x3
  __int64 v75; // x4
  __int64 v76; // x5
  __int64 v77; // x6
  __int64 v78; // x7
  Il2CppObject *v79; // x0
  System_String_o *v80; // x0
  const MethodInfo *v81; // x3
  const MethodInfo *v82; // x3
  const MethodInfo *v83; // x3
  UISprite_o *hpBarUnderSprite; // x20
  __int64 v85; // x2
  __int64 v86; // x3
  __int64 v87; // x4
  __int64 v88; // x5
  __int64 v89; // x6
  __int64 v90; // x7
  Il2CppObject *v91; // x0
  System_String_o *v92; // x0
  const MethodInfo *v93; // x3
  UISprite_o *hpBarUpperSprite; // x20
  __int64 v95; // x2
  __int64 v96; // x3
  __int64 v97; // x4
  __int64 v98; // x5
  __int64 v99; // x6
  __int64 v100; // x7
  Il2CppObject *v101; // x0
  System_String_o *v102; // x0
  const MethodInfo *v103; // x3
  const MethodInfo *v104; // x3
  const MethodInfo *v105; // x2
  struct WarBoardUserServantData_o *v106; // x8
  float r; // s8
  float g; // s9
  float b; // s10
  float a; // s11
  const MethodInfo *v111; // x2
  struct WarBoardStageBossEntity_o *v112; // x8
  UILabel_o *bossName; // x19
  int32_t v114; // [xsp+0h] [xbp-90h] BYREF
  int32_t v115; // [xsp+4h] [xbp-8Ch] BYREF
  int32_t v116; // [xsp+8h] [xbp-88h] BYREF
  int32_t iconId; // [xsp+Ch] [xbp-84h] BYREF
  UnityEngine_Color_o TextEffectColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v119; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C3530B & 1) == 0 )
  {
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C32C20(&WarBoardUserServantData_TypeInfo);
    sub_1C32C20(&StringLiteral_24756/*"war_board_boss_hp_frame"*/);
    sub_1C32C20(&StringLiteral_24759/*"war_board_boss_hp_white"*/);
    sub_1C32C20(&StringLiteral_24758/*"war_board_boss_hp_upper_{0}"*/);
    sub_1C32C20(&StringLiteral_24760/*"war_board_boss_icon_{0}{1:D2}"*/);
    sub_1C32C20(&StringLiteral_24755/*"war_board_boss_hp_back"*/);
    sub_1C32C20(&StringLiteral_24757/*"war_board_boss_hp_lower_{0}"*/);
    byte_4C3530B = 1;
  }
  this->fields.warBoardDataEnt = warBoardDataEntity;
  p_warBoardDataEnt = &this->fields.warBoardDataEnt;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.warBoardDataEnt, (int32_t)warBoardDataEntity, (int32_t)method, v3);
  bossIconSp = (__int64)this->fields.bossIconSp;
  if ( !bossIconSp )
    goto LABEL_67;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)bossIconSp, 1, 0);
  bossIconSp = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  warBoardStageBossEnt = this->fields.warBoardStageBossEnt;
  if ( !warBoardStageBossEnt )
    goto LABEL_67;
  if ( !bossIconSp )
    goto LABEL_67;
  bossIconSp = (__int64)WarBoardManager__GetEventBossUILoadData(
                          (WarBoardManager_o *)bossIconSp,
                          warBoardStageBossEnt->fields.idx,
                          0);
  v11 = this->fields.warBoardStageBossEnt;
  if ( !v11 )
    goto LABEL_67;
  v12 = (_DWORD *)bossIconSp;
  if ( *p_warBoardDataEnt )
    StageBossData = WarBoardDataEntity__GetStageBossData(*p_warBoardDataEnt, v11->fields.idx, 0);
  else
    StageBossData = 0;
  this->fields.currentBossInfo = StageBossData;
  p_currentBossInfo = &this->fields.currentBossInfo;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.currentBossInfo, (int32_t)StageBossData, v9, v10);
  if ( this->fields.currentBossInfo )
  {
    bossIconSp = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( bossIconSp )
    {
      v15 = this->fields.warBoardStageBossEnt;
      if ( v15 )
      {
        bossIconSp = *(_QWORD *)(bossIconSp + 440);
        if ( bossIconSp )
        {
          EventBossPiece = WarBoardData__GetEventBossPiece((WarBoardData_o *)bossIconSp, v15->fields.idx, 0);
          this->fields.bossPieceData = EventBossPiece;
          p_bossPieceData = &this->fields.bossPieceData;
          sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.bossPieceData, (int32_t)EventBossPiece, v18, v19);
          if ( !v12 || (int)v12[6] < 3 )
            goto LABEL_24;
          if ( !*p_currentBossInfo )
            goto LABEL_67;
          if ( v12[8] == (*p_currentBossInfo)->fields.stageBossIdx )
          {
            v20 = (WarBoardUserServantData_o *)sub_1C32E6C(WarBoardUserServantData_TypeInfo);
            WarBoardUserServantData___ctor(v20, 0);
            this->fields.oldBossInfo = v20;
            p_oldBossInfo = &this->fields.oldBossInfo;
            sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.oldBossInfo, (int32_t)v20, v22, v23);
            currentBossInfo = this->fields.currentBossInfo;
            if ( !currentBossInfo )
              goto LABEL_67;
            v27 = *p_oldBossInfo;
            if ( !*p_oldBossInfo )
              goto LABEL_67;
            v27->fields.stageBossIdx = currentBossInfo->fields.stageBossIdx;
            breakHp = currentBossInfo->fields.breakHp;
            v27->fields.breakHp = breakHp;
            sub_1C32BC4((CGThumbnailListItem_o *)&v27->fields.breakHp, (int32_t)breakHp, v24, v25);
            v30 = *p_currentBossInfo;
            if ( !*p_currentBossInfo )
              goto LABEL_67;
            v31 = *p_oldBossInfo;
            if ( !v31 )
              goto LABEL_67;
            v31->fields.maxDefeatPoint = v30->fields.maxDefeatPoint;
            if ( v12[6] <= 2u )
              sub_1C32E84(bossIconSp);
            v31->fields.defeatPoint = v12[10];
            v31->fields.hp = v30->fields.hp;
            bossIconSp = (unsigned int)v12[9];
          }
          else
          {
LABEL_24:
            v32 = (WarBoardUserServantData_o *)sub_1C32E6C(WarBoardUserServantData_TypeInfo);
            WarBoardUserServantData___ctor(v32, 0);
            this->fields.oldBossInfo = v32;
            v33 = &this->fields.oldBossInfo;
            sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.oldBossInfo, (int32_t)v32, v34, v35);
            v38 = this->fields.currentBossInfo;
            if ( !v38 )
              goto LABEL_67;
            v39 = *v33;
            if ( !*v33 )
              goto LABEL_67;
            v39->fields.stageBossIdx = v38->fields.stageBossIdx;
            v40 = v38->fields.breakHp;
            v39->fields.breakHp = v40;
            sub_1C32BC4((CGThumbnailListItem_o *)&v39->fields.breakHp, (int32_t)v40, v36, v37);
            v41 = *p_currentBossInfo;
            if ( !*p_currentBossInfo )
              goto LABEL_67;
            v31 = *v33;
            if ( !*v33 )
              goto LABEL_67;
            v31->fields.maxDefeatPoint = v41->fields.maxDefeatPoint;
            bossIconSp = (__int64)*p_bossPieceData;
            if ( *p_bossPieceData )
            {
              v31->fields.defeatPoint = *(_DWORD *)(bossIconSp + 52);
              v31->fields.hp = v41->fields.hp;
              bossIconSp = WarBoardPieceData__get_CurrentHp((WarBoardPieceData_o *)bossIconSp, 0);
            }
            else
            {
              v31->fields.defeatPoint = 0;
              v31->fields.hp = v41->fields.hp;
            }
          }
          v31->fields.currentHp = bossIconSp;
          v42 = *p_bossPieceData;
          if ( *p_bossPieceData )
            LODWORD(v42) = v42->fields._breakPoint_k__BackingField;
          oldBossInfo = this->fields.oldBossInfo;
          if ( oldBossInfo )
          {
            defeatPoint = oldBossInfo->fields.defeatPoint;
            this->fields.isPointBreak = (int)v42 < defeatPoint;
            if ( (int)v42 < defeatPoint )
            {
              bossIconSp = WarBoardEventBossUIComponent__GetMaxHpByBreakPoint(this, defeatPoint, v29);
              v45 = this->fields.oldBossInfo;
              if ( !v45 )
                goto LABEL_67;
              v46 = (double)bossIconSp;
              bossIconSp = (__int64)this->fields.hpBarSlider;
              *(float *)&v46 = (double)v45->fields.currentHp / v46;
              v47 = fminf(*(float *)&v46, 1.0);
              HPfrom = *(float *)&v46 < 0.0 ? 0.0 : v47;
              this->fields.HPfrom = HPfrom;
              this->fields.HPto = 0.0;
              if ( !bossIconSp )
                goto LABEL_67;
              goto LABEL_57;
            }
            if ( *p_currentBossInfo )
            {
              bossIconSp = WarBoardEventBossUIComponent__GetMaxHpByBreakPoint(
                             this,
                             (*p_currentBossInfo)->fields.defeatPoint,
                             v29);
              v49 = this->fields.oldBossInfo;
              if ( v49 )
              {
                v50 = (double)bossIconSp;
                bossPieceData = this->fields.bossPieceData;
                v52 = (double)v49->fields.currentHp / v50;
                v53 = fminf(v52, 1.0);
                v54 = v52 < 0.0 ? 0.0 : v53;
                this->fields.HPfrom = v54;
                v55 = bossPieceData ? (double)WarBoardPieceData__get_CurrentHp(bossPieceData, 0) : 0.0;
                bossIconSp = (__int64)this->fields.hpBarSlider;
                v56 = v55 / v50;
                v57 = fminf(v56, 1.0);
                v58 = v56 < 0.0 ? 0.0 : v57;
                this->fields.HPto = v58;
                if ( bossIconSp )
                {
                  HPfrom = this->fields.HPfrom;
LABEL_57:
                  UIProgressBar__set_value((UIProgressBar_o *)bossIconSp, HPfrom, 0);
                  v60 = this->fields.oldBossInfo;
                  if ( !v60 )
                    goto LABEL_67;
                  WarBoardEventBossUIComponent__SetTotalHpText(this, v60->fields.currentHp, v59);
                  bossIconSp = (__int64)this->fields.hpBarSliderUnder;
                  if ( !bossIconSp )
                    goto LABEL_67;
                  UIProgressBar__set_value((UIProgressBar_o *)bossIconSp, 0.0, 0);
                  v62 = this->fields.oldBossInfo;
                  if ( !v62 )
                    goto LABEL_67;
                  WarBoardEventBossUIComponent__SetupBreakPoint(
                    this,
                    v62->fields.maxDefeatPoint,
                    v62->fields.defeatPoint,
                    v61);
                  v69 = this->fields.warBoardStageBossEnt;
                  if ( !v69 )
                    goto LABEL_67;
                  idx = v69->fields.idx;
                  v71 = this->fields.bossIconSp;
                  iconId = v69->fields.iconId;
                  v72 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId, v63, v64, v65, v66, v67, v68);
                  v116 = idx;
                  v79 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v116, v73, v74, v75, v76, v77, v78);
                  v80 = System_String__Format_63559836((System_String_o *)StringLiteral_24760/*"war_board_boss_icon_{0}{1:D2}"*/, v72, v79, 0);
                  WarBoardEventBossUIComponent__SetSpriteByLocalAtlas(this, v71, v80, v81);
                  WarBoardEventBossUIComponent__SetSpriteByLocalAtlas(
                    this,
                    this->fields.bossHpFrame,
                    (System_String_o *)StringLiteral_24756/*"war_board_boss_hp_frame"*/,
                    v82);
                  WarBoardEventBossUIComponent__SetSpriteByLocalAtlas(
                    this,
                    this->fields.bossHpBg,
                    (System_String_o *)StringLiteral_24755/*"war_board_boss_hp_back"*/,
                    v83);
                  hpBarUnderSprite = this->fields.hpBarUnderSprite;
                  v115 = idx;
                  v91 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v115, v85, v86, v87, v88, v89, v90);
                  v92 = System_String__Format((System_String_o *)StringLiteral_24757/*"war_board_boss_hp_lower_{0}"*/, v91, 0);
                  WarBoardEventBossUIComponent__SetSpriteByLocalAtlas(this, hpBarUnderSprite, v92, v93);
                  hpBarUpperSprite = this->fields.hpBarUpperSprite;
                  v114 = idx;
                  v101 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v114, v95, v96, v97, v98, v99, v100);
                  v102 = System_String__Format((System_String_o *)StringLiteral_24758/*"war_board_boss_hp_upper_{0}"*/, v101, 0);
                  WarBoardEventBossUIComponent__SetSpriteByLocalAtlas(this, hpBarUpperSprite, v102, v103);
                  bossIconSp = WarBoardEventBossUIComponent__SetSpriteByLocalAtlas(
                                 this,
                                 this->fields.hpBarWhiteSprite,
                                 (System_String_o *)StringLiteral_24759/*"war_board_boss_hp_white"*/,
                                 v104);
                  v106 = this->fields.oldBossInfo;
                  if ( !v106 )
                    goto LABEL_67;
                  TextEffectColor = WarBoardEventBossUIComponent__GetTextEffectColor(
                                      this,
                                      v106->fields.defeatPoint,
                                      v105);
                  bossIconSp = (__int64)this->fields.totalHpLabel;
                  if ( !bossIconSp )
                    goto LABEL_67;
                  r = TextEffectColor.fields.r;
                  g = TextEffectColor.fields.g;
                  b = TextEffectColor.fields.b;
                  a = TextEffectColor.fields.a;
                  UILabel__set_effectColor((UILabel_o *)bossIconSp, TextEffectColor, 0);
                  bossIconSp = (__int64)this->fields.bossName;
                  if ( !bossIconSp )
                    goto LABEL_67;
                  v119.fields.r = r;
                  v119.fields.g = g;
                  v119.fields.b = b;
                  v119.fields.a = a;
                  UILabel__set_effectColor((UILabel_o *)bossIconSp, v119, 0);
                  v112 = this->fields.warBoardStageBossEnt;
                  if ( !v112 )
                    goto LABEL_67;
                  bossName = this->fields.bossName;
                  bossIconSp = (__int64)WarBoardEventBossUIComponent__GetStageBossName(
                                          (WarBoardEventBossUIComponent_o *)bossIconSp,
                                          v112->fields.idx,
                                          v111);
                  if ( !bossName )
                    goto LABEL_67;
                  UILabel__set_text(bossName, (System_String_o *)bossIconSp, 0);
                  return;
                }
              }
            }
          }
        }
      }
    }
LABEL_67:
    sub_1C32E7C(bossIconSp);
  }
  bossIconSp = (__int64)this->fields.bossIconSp;
  if ( !bossIconSp )
    goto LABEL_67;
  bossIconSp = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bossIconSp, 0);
  if ( !bossIconSp )
    goto LABEL_67;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bossIconSp, 0, 0);
}


bool WarBoardEventBossUIComponent__SetSpriteByLocalAtlas(
        WarBoardEventBossUIComponent_o *this,
        UISprite_o *sprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_UIAtlas__o *IsNullOrEmpty; // x0
  _BOOL8 v8; // x0
  Il2CppObject *current; // x21
  UISpriteData_o *v10; // x0
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4C35313 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_Any_UIAtlas___);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
    byte_4C35313 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  IsNullOrEmpty = (struct System_Collections_Generic_List_UIAtlas__o *)System_String__IsNullOrEmpty(spriteName, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0
    || (IsNullOrEmpty = (struct System_Collections_Generic_List_UIAtlas__o *)System_Linq_Enumerable__Any_object_(
                                                                               (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.atlasList,
                                                                               (const MethodInfo_30E8F68 *)Method_System_Linq_Enumerable_Any_UIAtlas___),
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
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    (System_Collections_Generic_List_object__o *)IsNullOrEmpty,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
  v13 = v12;
  do
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v13,
           (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    if ( !v8 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v13,
        (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
      if ( sprite )
      {
        UISprite__set_spriteName(sprite, 0, 0);
        return 0;
      }
LABEL_19:
      sub_1C32E7C(IsNullOrEmpty);
    }
    current = v13.fields._current;
    if ( !v13.fields._current )
      sub_1C32E7C(v8);
    v10 = UIAtlas__GetSprite((UIAtlas_o *)v13.fields._current, spriteName, 0);
  }
  while ( !v10 );
  if ( !sprite )
    sub_1C32E7C(v10);
  UISprite__set_atlas(sprite, (UIAtlas_o *)current, 0);
  UISprite__set_spriteName(sprite, spriteName, 0);
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
  return 1;
}


void WarBoardEventBossUIComponent__SetTotalHpText(
        WarBoardEventBossUIComponent_o *this,
        int64_t hp,
        const MethodInfo *method)
{
  UILabel_o *totalHpLabel; // x20
  System_String_o *v6; // x21
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  __int64 v10; // x5
  __int64 v11; // x6
  __int64 v12; // x7
  Il2CppObject *v13; // x0
  System_String_o *v14; // x0
  int64_t v15; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C3530C & 1) == 0 )
  {
    sub_1C32C20(&long_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_3704/*"COMMON_NUM_FORMAT"*/);
    byte_4C3530C = 1;
  }
  totalHpLabel = this->fields.totalHpLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_3704/*"COMMON_NUM_FORMAT"*/, 0);
  v15 = hp;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v15, v7, v8, v9, v10, v11, v12);
  v14 = System_String__Format(v6, v13, 0);
  if ( !totalHpLabel )
    sub_1C32E7C(v14);
  UILabel__set_text(totalHpLabel, v14, 0);
}


void WarBoardEventBossUIComponent__Setup(
        WarBoardEventBossUIComponent_o *this,
        int32_t eventId,
        WarBoardStageBossEntity_o *warBoardStageBossEnt,
        WarBoardDataEntity_o *warBoardDataEnt,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  WarBoardStageBossEntity_o **p_warBoardStageBossEnt; // x23
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x2

  this->fields.eventId = eventId;
  this->fields.warBoardStageBossEnt = warBoardStageBossEnt;
  p_warBoardStageBossEnt = &this->fields.warBoardStageBossEnt;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields.warBoardStageBossEnt,
    (int32_t)warBoardStageBossEnt,
    (int32_t)warBoardStageBossEnt,
    (const MethodInfo *)warBoardDataEnt);
  this->fields.assetData = assetData;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.assetData, (int32_t)assetData, v11, v12);
  WarBoardEventBossUIComponent__LoadLocalAtlas(this, eventId, v13);
  WarBoardEventBossUIComponent__LoadAnimPrefab(this, *p_warBoardStageBossEnt, v14);
  WarBoardEventBossUIComponent__SetDisp(this, warBoardDataEnt, v15);
}


void WarBoardEventBossUIComponent__SetupBreakPoint(
        WarBoardEventBossUIComponent_o *this,
        int32_t maxCount,
        int32_t restCount,
        const MethodInfo *method)
{
  long double v4; // q0
  struct WarBoardEventBossUIComponent_BreakIcon_array *breakIconList; // x8
  int max_length; // w22
  WarBoardEventBossUIComponent_o *v8; // x19
  unsigned int v9; // w20
  WarBoardEventBossUIComponent_BreakIcon_o *v10; // x8
  bool v11; // vf
  int v12; // w22
  int32_t v14; // w23
  WarBoardEventBossUIComponent_BreakIcon_o *v15; // x24
  const MethodInfo *v16; // x3
  UISprite_o *Sprite; // x1
  System_String_o *DisabledSpriteName; // x2
  struct WarBoardEventBossUIComponent_BreakIcon_o *v19; // x8
  struct WarBoardEventBossUIComponent_BreakIcon_o *v20; // x8
  WarBoardEventBossUIComponent_c *klass; // x8
  struct WarBoardEventBossUIComponent_BreakIcon_o *breakIcon_11; // x8

  breakIconList = this->fields.breakIconList;
  if ( !breakIconList )
    goto LABEL_33;
  max_length = breakIconList->max_length;
  v8 = this;
  if ( restCount <= 9 )
  {
    v11 = __OFSUB__(max_length, 1);
    v12 = max_length - 1;
    if ( v12 < 0 != v11 )
    {
LABEL_29:
      breakIcon_11 = v8->fields.breakIcon_11;
      if ( breakIcon_11 )
      {
        this = (WarBoardEventBossUIComponent_o *)breakIcon_11->fields.Sprite;
        if ( this )
        {
          klass = this->klass;
          LODWORD(v4) = 0;
          goto LABEL_32;
        }
      }
LABEL_33:
      sub_1C32E7C(this);
    }
    v14 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v14 >= LODWORD(breakIconList->max_length) )
        goto LABEL_34;
      v15 = breakIconList->m_Items[v14];
      if ( !v15 )
        goto LABEL_33;
      this = (WarBoardEventBossUIComponent_o *)v15->fields.Sprite;
      if ( !this )
        goto LABEL_33;
      this = (WarBoardEventBossUIComponent_o *)((__int64 (__fastcall *)(WarBoardEventBossUIComponent_o *, Il2CppClass *, float))this->klass[1]._1.element_class)(
                                                 this,
                                                 this->klass[1]._1.castClass,
                                                 0.0);
      if ( v14 < restCount )
        break;
      if ( v14 < maxCount )
      {
        Sprite = v15->fields.Sprite;
        DisabledSpriteName = v15->fields.DisabledSpriteName;
        goto LABEL_20;
      }
LABEL_22:
      if ( v12 == v14 )
        goto LABEL_29;
      breakIconList = v8->fields.breakIconList;
      ++v14;
      if ( !breakIconList )
        goto LABEL_33;
    }
    Sprite = v15->fields.Sprite;
    DisabledSpriteName = v15->fields.EnabledSpriteName;
LABEL_20:
    WarBoardEventBossUIComponent__SetSpriteByLocalAtlas(v8, Sprite, DisabledSpriteName, v16);
    this = (WarBoardEventBossUIComponent_o *)v15->fields.Sprite;
    if ( !this )
      goto LABEL_33;
    this = (WarBoardEventBossUIComponent_o *)((__int64 (__fastcall *)(WarBoardEventBossUIComponent_o *, Il2CppClass *, float))this->klass[1]._1.element_class)(
                                               this,
                                               this->klass[1]._1.castClass,
                                               1.0);
    goto LABEL_22;
  }
  if ( max_length >= 1 )
  {
    v9 = 0;
    while ( v9 < LODWORD(breakIconList->max_length) )
    {
      v10 = breakIconList->m_Items[v9];
      if ( v10 )
      {
        this = (WarBoardEventBossUIComponent_o *)v10->fields.Sprite;
        if ( this )
        {
          this = (WarBoardEventBossUIComponent_o *)((__int64 (__fastcall *)(WarBoardEventBossUIComponent_o *, Il2CppClass *, float))this->klass[1]._1.element_class)(
                                                     this,
                                                     this->klass[1]._1.castClass,
                                                     0.0);
          if ( max_length == ++v9 )
            goto LABEL_25;
          breakIconList = v8->fields.breakIconList;
          if ( breakIconList )
            continue;
        }
      }
      goto LABEL_33;
    }
LABEL_34:
    sub_1C32E84(this);
  }
LABEL_25:
  v19 = v8->fields.breakIcon_11;
  if ( !v19 )
    goto LABEL_33;
  this = (WarBoardEventBossUIComponent_o *)WarBoardEventBossUIComponent__SetSpriteByLocalAtlas(
                                             v8,
                                             v19->fields.Sprite,
                                             v19->fields.EnabledSpriteName,
                                             method);
  v20 = v8->fields.breakIcon_11;
  if ( !v20 )
    goto LABEL_33;
  this = (WarBoardEventBossUIComponent_o *)v20->fields.Sprite;
  if ( !this )
    goto LABEL_33;
  klass = this->klass;
  LODWORD(v4) = 1.0;
LABEL_32:
  ((void (__fastcall *)(long double))klass[1]._1.element_class)(v4);
}


void WarBoardEventBossUIComponent__UpdateOldBossData(WarBoardEventBossUIComponent_o *this, const MethodInfo *method)
{
  struct WarBoardUserServantData_o *oldBossInfo; // x20
  struct WarBoardUserServantData_o *currentBossInfo; // x8
  WarBoardPieceData_o *bossPieceData; // x0
  __int64 CurrentHp; // x0
  struct WarBoardPieceData_o *v7; // x9
  struct WarBoardUserServantData_o *v8; // x8

  oldBossInfo = this->fields.oldBossInfo;
  if ( oldBossInfo )
  {
    currentBossInfo = this->fields.currentBossInfo;
    if ( currentBossInfo )
    {
      oldBossInfo->fields.stageBossIdx = currentBossInfo->fields.stageBossIdx;
      bossPieceData = this->fields.bossPieceData;
      if ( bossPieceData )
      {
        CurrentHp = WarBoardPieceData__get_CurrentHp(bossPieceData, 0);
        v7 = this->fields.bossPieceData;
        v8 = this->fields.oldBossInfo;
        oldBossInfo->fields.currentHp = CurrentHp;
        if ( v7 )
          LODWORD(v7) = v7->fields._breakPoint_k__BackingField;
        if ( !v8 )
          sub_1C32E7C(CurrentHp);
      }
      else
      {
        LODWORD(v7) = 0;
        oldBossInfo->fields.currentHp = 0;
        v8 = oldBossInfo;
      }
      v8->fields.defeatPoint = (int)v7;
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
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
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
    sub_1C32E7C(_4__this);
  v12->fields.isPointBreak = 0;
  ActionExtensions__Call(this->fields.endAction, 0);
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
  float mNow; // s0
  float v6; // s1
  bool v7; // nf
  float v8; // s0
  float v9; // s8
  const MethodInfo *v10; // x2
  double v11; // d0
  int64_t v12; // x1

  easingObj = this->fields.easingObj;
  if ( !easingObj )
    goto LABEL_11;
  _4__this = this->fields.__4__this;
  v4 = this;
  if ( !_4__this )
    goto LABEL_11;
  mNow = easingObj->fields.mNow;
  this = (WarBoardEventBossUIComponent___c__DisplayClass52_0_o *)_4__this->fields.hpBarSlider;
  v6 = fminf(mNow, 1.0);
  v7 = mNow < 0.0;
  v8 = 0.0;
  if ( !v7 )
    v8 = v6;
  if ( !this
    || (v9 = _4__this->fields.HPfrom + (float)(v8 * (float)(_4__this->fields.HPto - _4__this->fields.HPfrom)),
        UIProgressBar__set_value((UIProgressBar_o *)this, v9, 0),
        (this = (WarBoardEventBossUIComponent___c__DisplayClass52_0_o *)v4->fields.__4__this) == 0) )
  {
LABEL_11:
    sub_1C32E7C(this);
  }
  v11 = v9 * (double)v4->fields.maxHp;
  if ( v11 == INFINITY )
    v12 = 0x8000000000000000LL;
  else
    v12 = (__int64)v11;
  WarBoardEventBossUIComponent__SetTotalHpText((WarBoardEventBossUIComponent_o *)this, v12, v10);
}


void WarBoardEventBossUIComponent___c__DisplayClass52_0___PlayHpCut_b__1(
        WarBoardEventBossUIComponent___c__DisplayClass52_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  WarBoardEventBossUIComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C32E7C(0);
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
  float mNow; // s0
  float v6; // s1
  bool v7; // nf
  float v8; // s0
  float v9; // s8
  const MethodInfo *v10; // x2
  double v11; // d0
  int64_t v12; // x1

  easingObj = this->fields.easingObj;
  if ( !easingObj )
    goto LABEL_11;
  _4__this = this->fields.__4__this;
  v4 = this;
  if ( !_4__this )
    goto LABEL_11;
  mNow = easingObj->fields.mNow;
  this = (WarBoardEventBossUIComponent___c__DisplayClass53_0_o *)_4__this->fields.hpBarSlider;
  v6 = fminf(mNow, 1.0);
  v7 = mNow < 0.0;
  v8 = 0.0;
  if ( !v7 )
    v8 = v6;
  if ( !this
    || (v9 = _4__this->fields.HPfrom + (float)(v8 * (float)(_4__this->fields.HPto - _4__this->fields.HPfrom)),
        UIProgressBar__set_value((UIProgressBar_o *)this, v9, 0),
        (this = (WarBoardEventBossUIComponent___c__DisplayClass53_0_o *)v4->fields.__4__this) == 0) )
  {
LABEL_11:
    sub_1C32E7C(this);
  }
  v11 = v9 * (double)v4->fields.maxHp;
  if ( v11 == INFINITY )
    v12 = 0x8000000000000000LL;
  else
    v12 = (__int64)v11;
  WarBoardEventBossUIComponent__SetTotalHpText((WarBoardEventBossUIComponent_o *)this, v12, v10);
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
    sub_1C32E7C(this);
  bossPieceData = _4__this->fields.bossPieceData;
  if ( bossPieceData )
    CurrentHp = WarBoardPieceData__get_CurrentHp(bossPieceData, 0);
  else
    CurrentHp = 0;
  WarBoardEventBossUIComponent__SetTotalHpText(_4__this, CurrentHp, v2);
  ActionExtensions__Call(this->fields.endAction, 0);
}