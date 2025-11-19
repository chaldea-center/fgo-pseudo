void WarBoardEventBossUIComponent___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  int32_t v3; // w1
  struct WarBoardEventBossUIComponent_StaticFields *static_fields; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4CB3BF5 & 1) == 0 )
  {
    sub_1C6BA08(&WarBoardEventBossUIComponent_TypeInfo);
    sub_1C6BA08(&StringLiteral_15580/*"WarBoardEventBossEffect_Break{0}"*/);
    sub_1C6BA08(&StringLiteral_15581/*"WarBoardEventBossEffect_Dead{0}"*/);
    byte_4CB3BF5 = 1;
  }
  WarBoardEventBossUIComponent_TypeInfo->static_fields->BOSS_CLEAR_EFFECT_PREFAB = (struct System_String_o *)StringLiteral_15581/*"WarBoardEventBossEffect_Dead{0}"*/;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)WarBoardEventBossUIComponent_TypeInfo->static_fields,
    StringLiteral_15581/*"WarBoardEventBossEffect_Dead{0}"*/,
    v1,
    v2);
  v3 = StringLiteral_15580/*"WarBoardEventBossEffect_Break{0}"*/;
  static_fields = WarBoardEventBossUIComponent_TypeInfo->static_fields;
  static_fields->BOSS_POINT_BREAK_EFFECT_PREFAB = (struct System_String_o *)StringLiteral_15580/*"WarBoardEventBossEffect_Break{0}"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->BOSS_POINT_BREAK_EFFECT_PREFAB, v3, v5, v6);
}


void WarBoardEventBossUIComponent___ctor(WarBoardEventBossUIComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4CB3BF4 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_UIAtlas___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_UIAtlas__TypeInfo);
    byte_4CB3BF4 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_UIAtlas__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_UIAtlas___ctor__);
  this->fields.atlasList = (struct System_Collections_Generic_List_UIAtlas__o *)v3;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.atlasList, (int32_t)v3, v4, v5);
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

  if ( (byte_4CB3BF3 & 1) == 0 )
  {
    sub_1C6BA08(&System_Convert_TypeInfo);
    byte_4CB3BF3 = 1;
  }
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v4 = System_Convert__ToInt32_65061980(hexStrColor, 16, 0);
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
  __int64 v5; // x1
  struct WarBoardUserServantData_o *oldBossInfo; // x8
  struct WarBoardUserServantData_o *v7; // x8
  struct WarBoardUserServantData_o *v8; // x8

  if ( (byte_4CB3BF2 & 1) == 0 )
  {
    sub_1C6BA08(&System_Text_StringBuilder_TypeInfo);
    sub_1C6BA08(&StringLiteral_1449/*":"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB3BF2 = 1;
  }
  if ( !this->fields.oldBossInfo )
    return (System_String_o *)StringLiteral_1/*""*/;
  v3 = (System_Text_StringBuilder_o *)sub_1C6BC54(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v3, 0);
  oldBossInfo = this->fields.oldBossInfo;
  if ( !oldBossInfo
    || !v3
    || (System_Text_StringBuilder__Append_64053248(v3, oldBossInfo->fields.stageBossIdx, 0),
        appended = System_Text_StringBuilder__Append_64050752(v3, (System_String_o *)StringLiteral_1449/*":"*/, 0),
        (v7 = this->fields.oldBossInfo) == 0)
    || (System_Text_StringBuilder__Append_64053248(v3, v7->fields.currentHp, 0),
        appended = System_Text_StringBuilder__Append_64050752(v3, (System_String_o *)StringLiteral_1449/*":"*/, 0),
        (v8 = this->fields.oldBossInfo) == 0) )
  {
    sub_1C6BC60(appended, v5);
  }
  System_Text_StringBuilder__Append_64053248(v3, v8->fields.defeatPoint, 0);
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

  if ( (byte_4CB3BEA & 1) == 0 )
  {
    sub_1C6BA08(&Method_AssetData_GetObject_GameObject____78568200);
    byte_4CB3BEA = 1;
  }
  result = (UnityEngine_GameObject_o *)this->fields.assetData;
  if ( result )
    return (UnityEngine_GameObject_o *)AssetData__GetObject_object__51495936(
                                         (AssetData_o *)result,
                                         name,
                                         (const MethodInfo_311C400 *)Method_AssetData_GetObject_GameObject____78568200);
  return result;
}


int64_t WarBoardEventBossUIComponent__GetMaxHpByBreakPoint(
        WarBoardEventBossUIComponent_o *this,
        int32_t restBreakPoint,
        const MethodInfo *method)
{
  struct WarBoardUserServantData_o *currentBossInfo; // x8

  if ( (byte_4CB3BE9 & 1) == 0 )
  {
    sub_1C6BA08(&Method_BasicHelper_IndexValue_int____78573472);
    byte_4CB3BE9 = 1;
  }
  currentBossInfo = this->fields.currentBossInfo;
  if ( currentBossInfo )
    return BasicHelper__IndexValue_int_(
             currentBossInfo->fields.breakHp,
             restBreakPoint,
             currentBossInfo->fields.hp,
             (const MethodInfo_312954C *)Method_BasicHelper_IndexValue_int____78573472);
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
  __int64 v6; // x1
  void *monitor; // x8
  System_Object_array *v8; // x19
  System_Func_object__bool__o *v9; // x21
  Il2CppObject *object; // x0
  BattleServantData_o *klass; // x0

  if ( (byte_4CB3BE7 & 1) == 0 )
  {
    sub_1C6BA08(&Method_BasicHelper_Find_WarBoardPieceData___);
    sub_1C6BA08(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C6BA08(&string_TypeInfo);
    sub_1C6BA08(&Method_WarBoardEventBossUIComponent___c__DisplayClass35_0__GetStageBossName_b__0__);
    sub_1C6BA08(&WarBoardEventBossUIComponent___c__DisplayClass35_0_TypeInfo);
    byte_4CB3BE7 = 1;
  }
  v4 = sub_1C6BC54(WarBoardEventBossUIComponent___c__DisplayClass35_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4
    || (*(_DWORD *)(v4 + 16) = stageBossIndex,
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0)
    || (monitor = Instance[27].monitor) == 0 )
  {
    sub_1C6BC60(Instance, v6);
  }
  v8 = (System_Object_array *)*((_QWORD *)monitor + 6);
  if ( v8
    && v8->max_length
    && (v9 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_WarBoardPieceData__bool__TypeInfo),
        System_Func_object__bool____ctor(
          v9,
          (Il2CppObject *)v4,
          Method_WarBoardEventBossUIComponent___c__DisplayClass35_0__GetStageBossName_b__0__,
          0),
        (object = BasicHelper__Find_object_(
                    v8,
                    (System_Func_T__bool__o *)v9,
                    (const MethodInfo_3124FFC *)Method_BasicHelper_Find_WarBoardPieceData___)) != 0)
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

  if ( (byte_4CB3BE8 & 1) == 0 )
  {
    sub_1C6BA08(&Method_BasicHelper_IndexValue_string___);
    sub_1C6BA08(&string___TypeInfo);
    sub_1C6BA08(&StringLiteral_1162/*"0x000000"*/);
    byte_4CB3BE8 = 1;
  }
  warBoardStageBossEnt = this->fields.warBoardStageBossEnt;
  if ( warBoardStageBossEnt )
  {
    bossColor = (Il2CppObject *)warBoardStageBossEnt->fields.bossColor;
    TextEffectColors = WarBoardStageBossEntity__GetTextEffectColors(warBoardStageBossEnt, 0);
  }
  else
  {
    bossColor = (Il2CppObject *)StringLiteral_1162/*"0x000000"*/;
    TextEffectColors = (System_String_array *)sub_1C6BAB0(string___TypeInfo, 0);
  }
  v8 = BasicHelper__IndexValue_object_(
         (System_Object_array *)TextEffectColors,
         restBreakPoint - 1,
         bossColor,
         (const MethodInfo_3129630 *)Method_BasicHelper_IndexValue_string___);
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
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w9
  System_String_o *BOSS_POINT_BREAK_EFFECT_PREFAB; // x20
  Il2CppObject *v15; // x0
  System_String_o *v16; // x0
  const MethodInfo *v17; // x2
  struct UnityEngine_GameObject_o *v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // [xsp+8h] [xbp-38h] BYREF
  int32_t defeatEffectId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4CB3BEB & 1) == 0 )
  {
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&WarBoardEventBossUIComponent_TypeInfo);
    byte_4CB3BEB = 1;
  }
  if ( ent )
  {
    v5 = WarBoardEventBossUIComponent_TypeInfo;
    if ( !WarBoardEventBossUIComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardEventBossUIComponent_TypeInfo);
      v5 = WarBoardEventBossUIComponent_TypeInfo;
    }
    BOSS_CLEAR_EFFECT_PREFAB = v5->static_fields->BOSS_CLEAR_EFFECT_PREFAB;
    defeatEffectId = ent->fields.defeatEffectId;
    v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &defeatEffectId);
    v8 = System_String__Format(BOSS_CLEAR_EFFECT_PREFAB, v7, 0);
    GameObjectFromEventUIAssetData = WarBoardEventBossUIComponent__GetGameObjectFromEventUIAssetData(this, v8, v9);
    this->fields.deadAnimPrefab = GameObjectFromEventUIAssetData;
    sub_1C6B9AC(
      (CGThumbnailListItem_o *)&this->fields.deadAnimPrefab,
      (int32_t)GameObjectFromEventUIAssetData,
      v11,
      v12);
    v13 = ent->fields.defeatEffectId;
    BOSS_POINT_BREAK_EFFECT_PREFAB = WarBoardEventBossUIComponent_TypeInfo->static_fields->BOSS_POINT_BREAK_EFFECT_PREFAB;
    v21 = v13;
    v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21);
    v16 = System_String__Format(BOSS_POINT_BREAK_EFFECT_PREFAB, v15, 0);
    v18 = WarBoardEventBossUIComponent__GetGameObjectFromEventUIAssetData(this, v16, v17);
    this->fields.pointBreakAnimPrefab = v18;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.pointBreakAnimPrefab, (int32_t)v18, v19, v20);
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
  UnityEngine_Object_o *GameObjectFromEventUIAssetData; // x21
  Il2CppObject *Component_object; // x21
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  intptr_t m_CachedPtr; // x8
  _QWORD *v19; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v21; // x8
  int32_t v22; // [xsp+8h] [xbp-58h] BYREF
  int v23; // [xsp+Ch] [xbp-54h] BYREF

  v4 = this;
  if ( (byte_4CB3BEC & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_UIAtlas__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_UIAtlas__Clear__);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&StringLiteral_25175/*"{0:D2}"*/);
    this = (WarBoardEventBossUIComponent_o *)sub_1C6BA08(&StringLiteral_5335/*"DownloadEventUIAtlas{0}{1}"*/);
    byte_4CB3BEC = 1;
  }
  if ( v4->fields.assetData )
  {
    atlasList = v4->fields.atlasList;
    if ( !atlasList )
LABEL_22:
      sub_1C6BC60(this, *(_QWORD *)&eventId);
    size = atlasList->fields._size;
    v7 = atlasList->fields._version + 1;
    atlasList->fields._size = 0;
    atlasList->fields._version = v7;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)atlasList->fields._items, 0, size, 0);
    for ( i = 1; ; ++i )
    {
      v23 = i;
      v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23);
      v10 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_25175/*"{0:D2}"*/, v9, 0);
      v22 = eventId;
      v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22);
      v12 = System_String__Format_64008100((System_String_o *)StringLiteral_5335/*"DownloadEventUIAtlas{0}{1}"*/, v11, v10, 0);
      GameObjectFromEventUIAssetData = (UnityEngine_Object_o *)WarBoardEventBossUIComponent__GetGameObjectFromEventUIAssetData(
                                                                 v4,
                                                                 v12,
                                                                 v13);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (WarBoardEventBossUIComponent_o *)UnityEngine_Object__op_Equality(GameObjectFromEventUIAssetData, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
        break;
      if ( !GameObjectFromEventUIAssetData )
        goto LABEL_22;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)GameObjectFromEventUIAssetData,
                           (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
        break;
      this = (WarBoardEventBossUIComponent_o *)v4->fields.atlasList;
      if ( !this )
        goto LABEL_22;
      m_CachedPtr = this->fields.m_CachedPtr;
      v19 = Method_System_Collections_Generic_List_UIAtlas__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !m_CachedPtr )
        goto LABEL_22;
      m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          Component_object,
          *(const MethodInfo_3800974 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
      }
      else
      {
        v21 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
        LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v21 + 32) = Component_object;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v21 + 32), (int32_t)Component_object, v16, v17);
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
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  Il2CppObject *deadAnimPrefab; // x22
  Il2CppObject *v13; // x22
  Il2CppObject *Component_object; // x22
  System_Action_o *v15; // x19
  System_Action_o *v16; // x19
  int32_t v17; // w2
  const MethodInfo *v18; // x3

  if ( (byte_4CB3BEE & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
    sub_1C6BA08(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_WarBoardEventBossUIComponent___c__DisplayClass50_0__PlayDaedAnim_b__0__);
    sub_1C6BA08(&Method_WarBoardEventBossUIComponent___c__DisplayClass50_0__PlayDaedAnim_b__1__);
    sub_1C6BA08(&WarBoardEventBossUIComponent___c__DisplayClass50_0_TypeInfo);
    byte_4CB3BEE = 1;
  }
  v5 = sub_1C6BC54(WarBoardEventBossUIComponent___c__DisplayClass50_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_13;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 24) = endAction;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 24), (int32_t)endAction, v10, v11);
  deadAnimPrefab = (Il2CppObject *)this->fields.deadAnimPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v13 = UnityEngine_Object__Instantiate_object_(
          deadAnimPrefab,
          (const MethodInfo_31C7F14 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  GameObjectExtensions__SafeSetParent((UnityEngine_GameObject_o *)v13, (UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__ResetLocalPosition((UnityEngine_GameObject_o *)v13, 0);
  if ( !v13 )
    goto LABEL_13;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)v13,
                       (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
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
    sub_1C6BC60(bossIconSp, v7);
  }
  v15 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(
    v15,
    (Il2CppObject *)v5,
    Method_WarBoardEventBossUIComponent___c__DisplayClass50_0__PlayDaedAnim_b__0__,
    0);
  if ( !Component_object )
    goto LABEL_13;
  CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)Component_object, 0, v15, 0);
  v16 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(
    v16,
    (Il2CppObject *)v5,
    Method_WarBoardEventBossUIComponent___c__DisplayClass50_0__PlayDaedAnim_b__1__,
    0);
  Component_object[2].monitor = v16;
  sub_1C6B9AC((CGThumbnailListItem_o *)&Component_object[2].monitor, (int32_t)v16, v17, v18);
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
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x2
  struct WarBoardUserServantData_o *oldBossInfo; // x8
  int32_t *p_defeatPoint; // x8
  struct WarBoardPieceData_o *bossPieceData; // x8
  int32_t v18; // w1
  __int64 v19; // x8
  struct WarBoardUserServantData_o *v20; // x9
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  EasingObject_o *v25; // x20
  System_Action_o *v26; // x21
  System_Action_o *v27; // x22

  if ( (byte_4CB3BF0 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_1C6BA08(&Method_WarBoardEventBossUIComponent___c__DisplayClass52_0__PlayHpCut_b__0__);
    sub_1C6BA08(&Method_WarBoardEventBossUIComponent___c__DisplayClass52_0__PlayHpCut_b__1__);
    sub_1C6BA08(&WarBoardEventBossUIComponent___c__DisplayClass52_0_TypeInfo);
    byte_4CB3BF0 = 1;
  }
  v7 = sub_1C6BC54(WarBoardEventBossUIComponent___c__DisplayClass52_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_20;
  *(_QWORD *)(v7 + 24) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v7 + 24), (int32_t)this, v10, v11);
  *(_QWORD *)(v7 + 48) = endAction;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v7 + 48), (int32_t)endAction, v12, v13);
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
    v18 = *p_defeatPoint;
    goto LABEL_10;
  }
  v18 = 0;
LABEL_10:
  MaxHpByBreakPoint = WarBoardEventBossUIComponent__GetMaxHpByBreakPoint(this, v18, v14);
  *(_QWORD *)(v7 + 32) = MaxHpByBreakPoint;
  if ( this->fields.isPointBreak || (MaxHpByBreakPoint = (int64_t)this->fields.bossPieceData) == 0 )
  {
    v19 = 0;
  }
  else
  {
    MaxHpByBreakPoint = WarBoardPieceData__get_CurrentHp((WarBoardPieceData_o *)MaxHpByBreakPoint, 0);
    v19 = (int)MaxHpByBreakPoint;
  }
  *(_QWORD *)(v7 + 40) = v19;
  v20 = this->fields.oldBossInfo;
  if ( !v20 )
    goto LABEL_20;
  if ( v19 == v20->fields.currentHp )
  {
    ActionExtensions__Call(*(System_Action_o **)(v7 + 48), 0);
    return;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_3194C14 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v7 + 16) = Component_object;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v7 + 16), (int32_t)Component_object, v23, v24);
  v25 = *(EasingObject_o **)(v7 + 16);
  v26 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(
    v26,
    (Il2CppObject *)v7,
    Method_WarBoardEventBossUIComponent___c__DisplayClass52_0__PlayHpCut_b__0__,
    0);
  v27 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(
    v27,
    (Il2CppObject *)v7,
    Method_WarBoardEventBossUIComponent___c__DisplayClass52_0__PlayHpCut_b__1__,
    0);
  if ( !v25 )
LABEL_20:
    sub_1C6BC60(MaxHpByBreakPoint, v9);
  EasingObject__Play(v25, duration, v26, v27, 0.0, 0, 0);
}


void WarBoardEventBossUIComponent__PlayHpRecover(
        WarBoardEventBossUIComponent_o *this,
        float duration,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v7; // x19
  UIProgressBar_o *hpBarSlider; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x2
  struct WarBoardPieceData_o *bossPieceData; // x8
  int32_t v16; // w1
  float value; // s0
  WarBoardPieceData_o *v18; // x0
  double v19; // d0
  float v20; // s0
  float v21; // s1
  bool v22; // nf
  float v23; // s0
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  EasingObject_o *v28; // x20
  System_Action_o *v29; // x21
  System_Action_o *v30; // x22

  if ( (byte_4CB3BF1 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_1C6BA08(&Method_WarBoardEventBossUIComponent___c__DisplayClass53_0__PlayHpRecover_b__0__);
    sub_1C6BA08(&Method_WarBoardEventBossUIComponent___c__DisplayClass53_0__PlayHpRecover_b__1__);
    sub_1C6BA08(&WarBoardEventBossUIComponent___c__DisplayClass53_0_TypeInfo);
    byte_4CB3BF1 = 1;
  }
  v7 = sub_1C6BC54(WarBoardEventBossUIComponent___c__DisplayClass53_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_15;
  *(_QWORD *)(v7 + 24) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v7 + 24), (int32_t)this, v10, v11);
  *(_QWORD *)(v7 + 40) = endAction;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v7 + 40), (int32_t)endAction, v12, v13);
  bossPieceData = this->fields.bossPieceData;
  v16 = bossPieceData ? bossPieceData->fields._breakPoint_k__BackingField : 0;
  *(_QWORD *)(v7 + 32) = WarBoardEventBossUIComponent__GetMaxHpByBreakPoint(this, v16, v14);
  hpBarSlider = (UIProgressBar_o *)this->fields.hpBarSlider;
  if ( !hpBarSlider )
    goto LABEL_15;
  value = UIProgressBar__get_value(hpBarSlider, 0);
  v18 = this->fields.bossPieceData;
  this->fields.HPfrom = value;
  v19 = v18 ? (double)WarBoardPieceData__get_CurrentHp(v18, 0) : 0.0;
  v20 = v19 / (double)*(__int64 *)(v7 + 32);
  v21 = fminf(v20, 1.0);
  v22 = v20 < 0.0;
  v23 = 0.0;
  if ( !v22 )
    v23 = v21;
  this->fields.HPto = v23;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_3194C14 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v7 + 16) = Component_object;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v7 + 16), (int32_t)Component_object, v26, v27);
  v28 = *(EasingObject_o **)(v7 + 16);
  v29 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(
    v29,
    (Il2CppObject *)v7,
    Method_WarBoardEventBossUIComponent___c__DisplayClass53_0__PlayHpRecover_b__0__,
    0);
  v30 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(
    v30,
    (Il2CppObject *)v7,
    Method_WarBoardEventBossUIComponent___c__DisplayClass53_0__PlayHpRecover_b__1__,
    0);
  if ( !v28 )
LABEL_15:
    sub_1C6BC60(hpBarSlider, v9);
  EasingObject__Play(v28, duration, v29, v30, 0.0, 0, 0);
}


void WarBoardEventBossUIComponent__PlayPointBreakAnim(
        WarBoardEventBossUIComponent_o *this,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v5; // x21
  UnityEngine_Component_o *Sprite; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Action_o **v10; // x20
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct WarBoardUserServantData_o *oldBossInfo; // x9
  struct WarBoardEventBossUIComponent_BreakIcon_array *breakIconList; // x8
  unsigned int v15; // w9
  WarBoardEventBossUIComponent_BreakIcon_o *v16; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *pointBreakAnimPrefab; // x22
  UnityEngine_GameObject_o *v19; // x23
  Il2CppObject *v20; // x22
  Il2CppObject *Component_object; // x22
  const MethodInfo *v22; // x2
  struct WarBoardPieceData_o *bossPieceData; // x8
  UILabel_o *totalHpLabel; // x21
  int32_t breakPoint_k__BackingField; // w1
  System_Action_o *v26; // x19
  const MethodInfo *v27; // x3
  struct WarBoardUserServantData_o *currentBossInfo; // x8
  struct WarBoardPieceData_o *v29; // x9
  int32_t v30; // w2
  UnityEngine_Color_o TextEffectColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CB3BEF & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
    sub_1C6BA08(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_WarBoardEventBossUIComponent___c__DisplayClass51_0__PlayPointBreakAnim_b__0__);
    sub_1C6BA08(&WarBoardEventBossUIComponent___c__DisplayClass51_0_TypeInfo);
    byte_4CB3BEF = 1;
  }
  v5 = sub_1C6BC54(WarBoardEventBossUIComponent___c__DisplayClass51_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_24;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 24) = endAction;
  v10 = (System_Action_o **)(v5 + 24);
  sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 24), (int32_t)endAction, v11, v12);
  oldBossInfo = this->fields.oldBossInfo;
  if ( !oldBossInfo )
    goto LABEL_24;
  breakIconList = this->fields.breakIconList;
  if ( !breakIconList )
    goto LABEL_24;
  v15 = (oldBossInfo->fields.defeatPoint - 1) & ~((oldBossInfo->fields.defeatPoint - 1) >> 31);
  if ( v15 >= LODWORD(breakIconList->max_length) )
    sub_1C6BC68(Sprite);
  v16 = breakIconList->m_Items[v15];
  if ( !v16 )
    goto LABEL_24;
  Sprite = (UnityEngine_Component_o *)v16->fields.Sprite;
  if ( !Sprite )
    goto LABEL_24;
  gameObject = UnityEngine_Component__get_gameObject(Sprite, 0);
  pointBreakAnimPrefab = (Il2CppObject *)this->fields.pointBreakAnimPrefab;
  v19 = gameObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v20 = UnityEngine_Object__Instantiate_object_(
          pointBreakAnimPrefab,
          (const MethodInfo_31C7F14 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  GameObjectExtensions__SafeSetParent_36361932((UnityEngine_GameObject_o *)v20, v19, 0);
  GameObjectExtensions__ResetLocalPosition((UnityEngine_GameObject_o *)v20, 0);
  if ( !v20 )
    goto LABEL_24;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)v20,
                       (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
  {
    v26 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
    System_Action___ctor(
      v26,
      (Il2CppObject *)v5,
      Method_WarBoardEventBossUIComponent___c__DisplayClass51_0__PlayPointBreakAnim_b__0__,
      0);
    if ( Component_object )
    {
      CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)Component_object, 0, v26, 0);
      return;
    }
LABEL_24:
    sub_1C6BC60(Sprite, v7);
  }
  bossPieceData = this->fields.bossPieceData;
  totalHpLabel = this->fields.totalHpLabel;
  if ( bossPieceData )
    breakPoint_k__BackingField = bossPieceData->fields._breakPoint_k__BackingField;
  else
    breakPoint_k__BackingField = 0;
  TextEffectColor = WarBoardEventBossUIComponent__GetTextEffectColor(this, breakPoint_k__BackingField, v22);
  if ( !totalHpLabel )
    goto LABEL_24;
  UILabel__set_effectColor(totalHpLabel, TextEffectColor, 0);
  currentBossInfo = this->fields.currentBossInfo;
  if ( !currentBossInfo )
    goto LABEL_24;
  v29 = this->fields.bossPieceData;
  if ( v29 )
    v30 = v29->fields._breakPoint_k__BackingField;
  else
    v30 = 0;
  WarBoardEventBossUIComponent__SetupBreakPoint(this, currentBossInfo->fields.maxDefeatPoint, v30, v27);
  this->fields.isPointBreak = 0;
  ActionExtensions__Call(*v10, 0);
}


void WarBoardEventBossUIComponent__SetDisp(
        WarBoardEventBossUIComponent_o *this,
        WarBoardDataEntity_o *warBoardDataEntity,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  WarBoardDataEntity_o **p_warBoardDataEnt; // x21
  __int64 defeatPoint; // x1
  __int64 bossIconSp; // x0
  struct WarBoardStageBossEntity_o *warBoardStageBossEnt; // x8
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct WarBoardStageBossEntity_o *v12; // x8
  _DWORD *v13; // x22
  struct WarBoardUserServantData_o *StageBossData; // x1
  struct WarBoardUserServantData_o **p_currentBossInfo; // x20
  struct WarBoardStageBossEntity_o *v16; // x8
  struct WarBoardPieceData_o *EventBossPiece; // x0
  struct WarBoardPieceData_o **p_bossPieceData; // x21
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  WarBoardUserServantData_o *v21; // x24
  struct WarBoardUserServantData_o **p_oldBossInfo; // x23
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  struct WarBoardUserServantData_o *currentBossInfo; // x8
  struct WarBoardUserServantData_o *v28; // x9
  struct System_Int32_array *breakHp; // x1
  const MethodInfo *v30; // x2
  struct WarBoardUserServantData_o *v31; // x8
  struct WarBoardUserServantData_o *v32; // x23
  WarBoardUserServantData_o *v33; // x23
  struct WarBoardUserServantData_o **v34; // x22
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  struct WarBoardUserServantData_o *v39; // x8
  struct WarBoardUserServantData_o *v40; // x9
  struct System_Int32_array *v41; // x1
  struct WarBoardUserServantData_o *v42; // x8
  struct WarBoardPieceData_o *v43; // x8
  struct WarBoardUserServantData_o *oldBossInfo; // x9
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
  struct WarBoardStageBossEntity_o *v63; // x8
  int32_t idx; // w25
  UISprite_o *v65; // x20
  Il2CppObject *v66; // x21
  Il2CppObject *v67; // x0
  System_String_o *v68; // x0
  const MethodInfo *v69; // x3
  const MethodInfo *v70; // x3
  const MethodInfo *v71; // x3
  UISprite_o *hpBarUnderSprite; // x20
  Il2CppObject *v73; // x0
  System_String_o *v74; // x0
  const MethodInfo *v75; // x3
  UISprite_o *hpBarUpperSprite; // x20
  Il2CppObject *v77; // x0
  System_String_o *v78; // x0
  const MethodInfo *v79; // x3
  const MethodInfo *v80; // x3
  const MethodInfo *v81; // x2
  struct WarBoardUserServantData_o *v82; // x8
  float r; // s8
  float g; // s9
  float b; // s10
  float a; // s11
  const MethodInfo *v87; // x2
  struct WarBoardStageBossEntity_o *v88; // x8
  UILabel_o *bossName; // x19
  int32_t v90; // [xsp+0h] [xbp-90h] BYREF
  int32_t v91; // [xsp+4h] [xbp-8Ch] BYREF
  int32_t v92; // [xsp+8h] [xbp-88h] BYREF
  int32_t iconId; // [xsp+Ch] [xbp-84h] BYREF
  UnityEngine_Color_o TextEffectColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v95; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CB3BE5 & 1) == 0 )
  {
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C6BA08(&WarBoardUserServantData_TypeInfo);
    sub_1C6BA08(&StringLiteral_24871/*"war_board_boss_hp_frame"*/);
    sub_1C6BA08(&StringLiteral_24874/*"war_board_boss_hp_white"*/);
    sub_1C6BA08(&StringLiteral_24873/*"war_board_boss_hp_upper_{0}"*/);
    sub_1C6BA08(&StringLiteral_24875/*"war_board_boss_icon_{0}{1:D2}"*/);
    sub_1C6BA08(&StringLiteral_24870/*"war_board_boss_hp_back"*/);
    sub_1C6BA08(&StringLiteral_24872/*"war_board_boss_hp_lower_{0}"*/);
    byte_4CB3BE5 = 1;
  }
  this->fields.warBoardDataEnt = warBoardDataEntity;
  p_warBoardDataEnt = &this->fields.warBoardDataEnt;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.warBoardDataEnt, (int32_t)warBoardDataEntity, (int32_t)method, v3);
  bossIconSp = (__int64)this->fields.bossIconSp;
  if ( !bossIconSp )
    goto LABEL_67;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)bossIconSp, 1, 0);
  bossIconSp = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  warBoardStageBossEnt = this->fields.warBoardStageBossEnt;
  if ( !warBoardStageBossEnt )
    goto LABEL_67;
  if ( !bossIconSp )
    goto LABEL_67;
  bossIconSp = (__int64)WarBoardManager__GetEventBossUILoadData(
                          (WarBoardManager_o *)bossIconSp,
                          warBoardStageBossEnt->fields.idx,
                          0);
  v12 = this->fields.warBoardStageBossEnt;
  if ( !v12 )
    goto LABEL_67;
  v13 = (_DWORD *)bossIconSp;
  if ( *p_warBoardDataEnt )
    StageBossData = WarBoardDataEntity__GetStageBossData(*p_warBoardDataEnt, v12->fields.idx, 0);
  else
    StageBossData = 0;
  this->fields.currentBossInfo = StageBossData;
  p_currentBossInfo = &this->fields.currentBossInfo;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.currentBossInfo, (int32_t)StageBossData, v10, v11);
  if ( this->fields.currentBossInfo )
  {
    bossIconSp = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( bossIconSp )
    {
      v16 = this->fields.warBoardStageBossEnt;
      if ( v16 )
      {
        bossIconSp = *(_QWORD *)(bossIconSp + 440);
        if ( bossIconSp )
        {
          EventBossPiece = WarBoardData__GetEventBossPiece((WarBoardData_o *)bossIconSp, v16->fields.idx, 0);
          this->fields.bossPieceData = EventBossPiece;
          p_bossPieceData = &this->fields.bossPieceData;
          sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.bossPieceData, (int32_t)EventBossPiece, v19, v20);
          if ( !v13 || (int)v13[6] < 3 )
            goto LABEL_24;
          if ( !*p_currentBossInfo )
            goto LABEL_67;
          if ( v13[8] == (*p_currentBossInfo)->fields.stageBossIdx )
          {
            v21 = (WarBoardUserServantData_o *)sub_1C6BC54(WarBoardUserServantData_TypeInfo);
            WarBoardUserServantData___ctor(v21, 0);
            this->fields.oldBossInfo = v21;
            p_oldBossInfo = &this->fields.oldBossInfo;
            sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.oldBossInfo, (int32_t)v21, v23, v24);
            currentBossInfo = this->fields.currentBossInfo;
            if ( !currentBossInfo )
              goto LABEL_67;
            v28 = *p_oldBossInfo;
            if ( !*p_oldBossInfo )
              goto LABEL_67;
            v28->fields.stageBossIdx = currentBossInfo->fields.stageBossIdx;
            breakHp = currentBossInfo->fields.breakHp;
            v28->fields.breakHp = breakHp;
            sub_1C6B9AC((CGThumbnailListItem_o *)&v28->fields.breakHp, (int32_t)breakHp, v25, v26);
            v31 = *p_currentBossInfo;
            if ( !*p_currentBossInfo )
              goto LABEL_67;
            v32 = *p_oldBossInfo;
            if ( !v32 )
              goto LABEL_67;
            v32->fields.maxDefeatPoint = v31->fields.maxDefeatPoint;
            if ( v13[6] <= 2u )
              sub_1C6BC68(bossIconSp);
            v32->fields.defeatPoint = v13[10];
            v32->fields.hp = v31->fields.hp;
            bossIconSp = (unsigned int)v13[9];
          }
          else
          {
LABEL_24:
            v33 = (WarBoardUserServantData_o *)sub_1C6BC54(WarBoardUserServantData_TypeInfo);
            WarBoardUserServantData___ctor(v33, 0);
            this->fields.oldBossInfo = v33;
            v34 = &this->fields.oldBossInfo;
            sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.oldBossInfo, (int32_t)v33, v35, v36);
            v39 = this->fields.currentBossInfo;
            if ( !v39 )
              goto LABEL_67;
            v40 = *v34;
            if ( !*v34 )
              goto LABEL_67;
            v40->fields.stageBossIdx = v39->fields.stageBossIdx;
            v41 = v39->fields.breakHp;
            v40->fields.breakHp = v41;
            sub_1C6B9AC((CGThumbnailListItem_o *)&v40->fields.breakHp, (int32_t)v41, v37, v38);
            v42 = *p_currentBossInfo;
            if ( !*p_currentBossInfo )
              goto LABEL_67;
            v32 = *v34;
            if ( !*v34 )
              goto LABEL_67;
            v32->fields.maxDefeatPoint = v42->fields.maxDefeatPoint;
            bossIconSp = (__int64)*p_bossPieceData;
            if ( *p_bossPieceData )
            {
              v32->fields.defeatPoint = *(_DWORD *)(bossIconSp + 52);
              v32->fields.hp = v42->fields.hp;
              bossIconSp = WarBoardPieceData__get_CurrentHp((WarBoardPieceData_o *)bossIconSp, 0);
            }
            else
            {
              v32->fields.defeatPoint = 0;
              v32->fields.hp = v42->fields.hp;
            }
          }
          v32->fields.currentHp = bossIconSp;
          v43 = *p_bossPieceData;
          if ( *p_bossPieceData )
            LODWORD(v43) = v43->fields._breakPoint_k__BackingField;
          oldBossInfo = this->fields.oldBossInfo;
          if ( oldBossInfo )
          {
            defeatPoint = (unsigned int)oldBossInfo->fields.defeatPoint;
            this->fields.isPointBreak = (int)v43 < (int)defeatPoint;
            if ( (int)v43 < (int)defeatPoint )
            {
              bossIconSp = WarBoardEventBossUIComponent__GetMaxHpByBreakPoint(this, defeatPoint, v30);
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
                             v30);
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
                  v63 = this->fields.warBoardStageBossEnt;
                  if ( !v63 )
                    goto LABEL_67;
                  idx = v63->fields.idx;
                  v65 = this->fields.bossIconSp;
                  iconId = v63->fields.iconId;
                  v66 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId);
                  v92 = idx;
                  v67 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v92);
                  v68 = System_String__Format_64008100((System_String_o *)StringLiteral_24875/*"war_board_boss_icon_{0}{1:D2}"*/, v66, v67, 0);
                  WarBoardEventBossUIComponent__SetSpriteByLocalAtlas(this, v65, v68, v69);
                  WarBoardEventBossUIComponent__SetSpriteByLocalAtlas(
                    this,
                    this->fields.bossHpFrame,
                    (System_String_o *)StringLiteral_24871/*"war_board_boss_hp_frame"*/,
                    v70);
                  WarBoardEventBossUIComponent__SetSpriteByLocalAtlas(
                    this,
                    this->fields.bossHpBg,
                    (System_String_o *)StringLiteral_24870/*"war_board_boss_hp_back"*/,
                    v71);
                  hpBarUnderSprite = this->fields.hpBarUnderSprite;
                  v91 = idx;
                  v73 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v91);
                  v74 = System_String__Format((System_String_o *)StringLiteral_24872/*"war_board_boss_hp_lower_{0}"*/, v73, 0);
                  WarBoardEventBossUIComponent__SetSpriteByLocalAtlas(this, hpBarUnderSprite, v74, v75);
                  hpBarUpperSprite = this->fields.hpBarUpperSprite;
                  v90 = idx;
                  v77 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v90);
                  v78 = System_String__Format((System_String_o *)StringLiteral_24873/*"war_board_boss_hp_upper_{0}"*/, v77, 0);
                  WarBoardEventBossUIComponent__SetSpriteByLocalAtlas(this, hpBarUpperSprite, v78, v79);
                  bossIconSp = WarBoardEventBossUIComponent__SetSpriteByLocalAtlas(
                                 this,
                                 this->fields.hpBarWhiteSprite,
                                 (System_String_o *)StringLiteral_24874/*"war_board_boss_hp_white"*/,
                                 v80);
                  v82 = this->fields.oldBossInfo;
                  if ( !v82 )
                    goto LABEL_67;
                  TextEffectColor = WarBoardEventBossUIComponent__GetTextEffectColor(this, v82->fields.defeatPoint, v81);
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
                  v95.fields.r = r;
                  v95.fields.g = g;
                  v95.fields.b = b;
                  v95.fields.a = a;
                  UILabel__set_effectColor((UILabel_o *)bossIconSp, v95, 0);
                  v88 = this->fields.warBoardStageBossEnt;
                  if ( !v88 )
                    goto LABEL_67;
                  bossName = this->fields.bossName;
                  bossIconSp = (__int64)WarBoardEventBossUIComponent__GetStageBossName(
                                          (WarBoardEventBossUIComponent_o *)bossIconSp,
                                          v88->fields.idx,
                                          v87);
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
    sub_1C6BC60(bossIconSp, defeatPoint);
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
  __int64 v8; // x1
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *current; // x21
  UISpriteData_o *v12; // x0
  __int64 v13; // x1
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4CB3BED & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Linq_Enumerable_Any_UIAtlas___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
    byte_4CB3BED = 1;
  }
  memset(&v16, 0, sizeof(v16));
  IsNullOrEmpty = (struct System_Collections_Generic_List_UIAtlas__o *)System_String__IsNullOrEmpty(spriteName, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0
    || (IsNullOrEmpty = (struct System_Collections_Generic_List_UIAtlas__o *)System_Linq_Enumerable__Any_object_(
                                                                               (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.atlasList,
                                                                               (const MethodInfo_3146EE0 *)Method_System_Linq_Enumerable_Any_UIAtlas___),
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
    (const MethodInfo_380146C *)Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
  v16 = v15;
  do
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v16,
           (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    if ( !v9 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v16,
        (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
      if ( sprite )
      {
        UISprite__set_spriteName(sprite, 0, 0);
        return 0;
      }
LABEL_19:
      sub_1C6BC60(IsNullOrEmpty, v8);
    }
    current = v16.fields._current;
    if ( !v16.fields._current )
      sub_1C6BC60(v9, v10);
    v12 = UIAtlas__GetSprite((UIAtlas_o *)v16.fields._current, spriteName, 0);
  }
  while ( !v12 );
  if ( !sprite )
    sub_1C6BC60(v12, v13);
  UISprite__set_atlas(sprite, (UIAtlas_o *)current, 0);
  UISprite__set_spriteName(sprite, spriteName, 0);
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v16,
    (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
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

  if ( (byte_4CB3BE6 & 1) == 0 )
  {
    sub_1C6BA08(&long_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_3696/*"COMMON_NUM_FORMAT"*/);
    byte_4CB3BE6 = 1;
  }
  totalHpLabel = this->fields.totalHpLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_3696/*"COMMON_NUM_FORMAT"*/, 0);
  v10 = hp;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v10);
  v8 = System_String__Format(v6, v7, 0);
  if ( !totalHpLabel )
    sub_1C6BC60(v8, v9);
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
  WarBoardStageBossEntity_o **p_warBoardStageBossEnt; // x23
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x2

  this->fields.eventId = eventId;
  this->fields.warBoardStageBossEnt = warBoardStageBossEnt;
  p_warBoardStageBossEnt = &this->fields.warBoardStageBossEnt;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)&this->fields.warBoardStageBossEnt,
    (int32_t)warBoardStageBossEnt,
    (int32_t)warBoardStageBossEnt,
    (const MethodInfo *)warBoardDataEnt);
  this->fields.assetData = assetData;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.assetData, (int32_t)assetData, v11, v12);
  WarBoardEventBossUIComponent__LoadLocalAtlas(this, eventId, v13);
  WarBoardEventBossUIComponent__LoadAnimPrefab(this, *p_warBoardStageBossEnt, v14);
  WarBoardEventBossUIComponent__SetDisp(this, warBoardDataEnt, v15);
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
      sub_1C6BC60(this, *(_QWORD *)&maxCount);
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
    sub_1C6BC68(this);
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
  __int64 v7; // x1
  struct WarBoardPieceData_o *v8; // x9
  struct WarBoardUserServantData_o *v9; // x8

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
        v8 = this->fields.bossPieceData;
        v9 = this->fields.oldBossInfo;
        oldBossInfo->fields.currentHp = CurrentHp;
        if ( v8 )
          LODWORD(v8) = v8->fields._breakPoint_k__BackingField;
        if ( !v9 )
          sub_1C6BC60(CurrentHp, v7);
      }
      else
      {
        LODWORD(v8) = 0;
        oldBossInfo->fields.currentHp = 0;
        v9 = oldBossInfo;
      }
      v9->fields.defeatPoint = (int)v8;
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
    sub_1C6BC60(this, 0);
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
    sub_1C6BC60(this, method);
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
    sub_1C6BC60(_4__this, method);
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
    sub_1C6BC60(this, method);
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
    sub_1C6BC60(0, method);
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
    sub_1C6BC60(this, method);
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
    sub_1C6BC60(this, method);
  bossPieceData = _4__this->fields.bossPieceData;
  if ( bossPieceData )
    CurrentHp = WarBoardPieceData__get_CurrentHp(bossPieceData, 0);
  else
    CurrentHp = 0;
  WarBoardEventBossUIComponent__SetTotalHpText(_4__this, CurrentHp, v2);
  ActionExtensions__Call(this->fields.endAction, 0);
}