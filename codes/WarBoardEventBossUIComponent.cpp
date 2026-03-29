void WarBoardEventBossUIComponent___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  int32_t v7; // w1
  struct WarBoardEventBossUIComponent_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  if ( (byte_4D2E261 & 1) == 0 )
  {
    sub_1C93AD4(&WarBoardEventBossUIComponent_TypeInfo);
    sub_1C93AD4(&StringLiteral_15683/*"WarBoardEventBossEffect_Break{0}"*/);
    sub_1C93AD4(&StringLiteral_15684/*"WarBoardEventBossEffect_Dead{0}"*/);
    byte_4D2E261 = 1;
  }
  WarBoardEventBossUIComponent_TypeInfo->static_fields->BOSS_CLEAR_EFFECT_PREFAB = (struct System_String_o *)StringLiteral_15684/*"WarBoardEventBossEffect_Dead{0}"*/;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)WarBoardEventBossUIComponent_TypeInfo->static_fields,
    StringLiteral_15684/*"WarBoardEventBossEffect_Dead{0}"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v7 = StringLiteral_15683/*"WarBoardEventBossEffect_Break{0}"*/;
  static_fields = WarBoardEventBossUIComponent_TypeInfo->static_fields;
  static_fields->BOSS_POINT_BREAK_EFFECT_PREFAB = (struct System_String_o *)StringLiteral_15683/*"WarBoardEventBossEffect_Break{0}"*/;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&static_fields->BOSS_POINT_BREAK_EFFECT_PREFAB,
    v7,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
}


void WarBoardEventBossUIComponent___ctor(WarBoardEventBossUIComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D2E260 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_UIAtlas___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_UIAtlas__TypeInfo);
    byte_4D2E260 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_UIAtlas__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_UIAtlas___ctor__);
  this->fields.atlasList = (struct System_Collections_Generic_List_UIAtlas__o *)v3;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.atlasList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
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
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D2E25F & 1) == 0 )
  {
    sub_1C93AD4(&System_Convert_TypeInfo);
    byte_4D2E25F = 1;
  }
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v4 = System_Convert__ToInt32_65520912(hexStrColor, 16, 0);
  result.fields.r = (float)BYTE2(v4) / 255.0;
  result.fields.g = (float)BYTE1(v4) / 255.0;
  result.fields.b = (float)(unsigned __int8)v4 / 255.0;
  result.fields.a = 1.0;
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

  if ( (byte_4D2E25E & 1) == 0 )
  {
    sub_1C93AD4(&System_Text_StringBuilder_TypeInfo);
    sub_1C93AD4(&StringLiteral_1451/*":"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2E25E = 1;
  }
  if ( !this->fields.oldBossInfo )
    return (System_String_o *)StringLiteral_1/*""*/;
  v3 = (System_Text_StringBuilder_o *)sub_1C93D20(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v3, 0);
  oldBossInfo = this->fields.oldBossInfo;
  if ( !oldBossInfo
    || !v3
    || (System_Text_StringBuilder__Append_64512180(v3, oldBossInfo->fields.stageBossIdx, 0),
        appended = System_Text_StringBuilder__Append_64509684(v3, (System_String_o *)StringLiteral_1451/*":"*/, 0),
        (v7 = this->fields.oldBossInfo) == 0)
    || (System_Text_StringBuilder__Append_64512180(v3, v7->fields.currentHp, 0),
        appended = System_Text_StringBuilder__Append_64509684(v3, (System_String_o *)StringLiteral_1451/*":"*/, 0),
        (v8 = this->fields.oldBossInfo) == 0) )
  {
    sub_1C93D2C(appended, v5);
  }
  System_Text_StringBuilder__Append_64512180(v3, v8->fields.defeatPoint, 0);
  return ((System_String_o *(__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v3->klass->vtable._3_ToString.methodPtr)(
           v3,
           v3->klass->vtable._3_ToString.method);
}


UnityEngine_GameObject_o *WarBoardEventBossUIComponent__GetGameObjectFromEventUIAssetData(
        WarBoardEventBossUIComponent_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *result; // x0

  if ( (byte_4D2E256 & 1) == 0 )
  {
    sub_1C93AD4(&Method_AssetData_GetObject_GameObject____79057888);
    byte_4D2E256 = 1;
  }
  result = (UnityEngine_GameObject_o *)this->fields.assetData;
  if ( result )
    return (UnityEngine_GameObject_o *)AssetData__GetObject_object__51927708(
                                         (AssetData_o *)result,
                                         name,
                                         (const MethodInfo_3185A9C *)Method_AssetData_GetObject_GameObject____79057888);
  return result;
}


int64_t WarBoardEventBossUIComponent__GetMaxHpByBreakPoint(
        WarBoardEventBossUIComponent_o *this,
        int32_t restBreakPoint,
        const MethodInfo *method)
{
  struct WarBoardUserServantData_o *currentBossInfo; // x8

  if ( (byte_4D2E255 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BasicHelper_IndexValue_int____79063232);
    byte_4D2E255 = 1;
  }
  currentBossInfo = this->fields.currentBossInfo;
  if ( currentBossInfo )
    return BasicHelper__IndexValue_int_(
             currentBossInfo->fields.breakHp,
             restBreakPoint,
             currentBossInfo->fields.hp,
             (const MethodInfo_3192C94 *)Method_BasicHelper_IndexValue_int____79063232);
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

  if ( (byte_4D2E253 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BasicHelper_Find_WarBoardPieceData___);
    sub_1C93AD4(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C93AD4(&string_TypeInfo);
    sub_1C93AD4(&Method_WarBoardEventBossUIComponent___c__DisplayClass35_0__GetStageBossName_b__0__);
    sub_1C93AD4(&WarBoardEventBossUIComponent___c__DisplayClass35_0_TypeInfo);
    byte_4D2E253 = 1;
  }
  v4 = sub_1C93D20(WarBoardEventBossUIComponent___c__DisplayClass35_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4
    || (*(_DWORD *)(v4 + 16) = stageBossIndex,
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0)
    || (monitor = Instance[27].monitor) == 0 )
  {
    sub_1C93D2C(Instance, v6);
  }
  v8 = (System_Object_array *)*((_QWORD *)monitor + 6);
  if ( v8
    && v8->max_length
    && (v9 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_WarBoardPieceData__bool__TypeInfo),
        System_Func_object__bool____ctor(
          v9,
          (Il2CppObject *)v4,
          Method_WarBoardEventBossUIComponent___c__DisplayClass35_0__GetStageBossName_b__0__,
          0),
        (object = BasicHelper__Find_object_(
                    v8,
                    (System_Func_T__bool__o *)v9,
                    (const MethodInfo_318E744 *)Method_BasicHelper_Find_WarBoardPieceData___)) != 0)
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

  if ( (byte_4D2E254 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BasicHelper_IndexValue_string___);
    sub_1C93AD4(&string___TypeInfo);
    sub_1C93AD4(&StringLiteral_1163/*"0x000000"*/);
    byte_4D2E254 = 1;
  }
  warBoardStageBossEnt = this->fields.warBoardStageBossEnt;
  if ( warBoardStageBossEnt )
  {
    bossColor = (Il2CppObject *)warBoardStageBossEnt->fields.bossColor;
    TextEffectColors = WarBoardStageBossEntity__GetTextEffectColors(warBoardStageBossEnt, 0);
  }
  else
  {
    bossColor = (Il2CppObject *)StringLiteral_1163/*"0x000000"*/;
    TextEffectColors = (System_String_array *)sub_1C93B7C(string___TypeInfo, 0);
  }
  v8 = BasicHelper__IndexValue_object_(
         (System_Object_array *)TextEffectColors,
         restBreakPoint - 1,
         bossColor,
         (const MethodInfo_3192D78 *)Method_BasicHelper_IndexValue_string___);
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
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  int32_t v17; // w9
  System_String_o *BOSS_POINT_BREAK_EFFECT_PREFAB; // x20
  Il2CppObject *v19; // x0
  System_String_o *v20; // x0
  const MethodInfo *v21; // x2
  struct UnityEngine_GameObject_o *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  int32_t v29; // [xsp+8h] [xbp-38h] BYREF
  int32_t defeatEffectId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4D2E257 & 1) == 0 )
  {
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&WarBoardEventBossUIComponent_TypeInfo);
    byte_4D2E257 = 1;
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
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.deadAnimPrefab,
      (int32_t)GameObjectFromEventUIAssetData,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
    v17 = ent->fields.defeatEffectId;
    BOSS_POINT_BREAK_EFFECT_PREFAB = WarBoardEventBossUIComponent_TypeInfo->static_fields->BOSS_POINT_BREAK_EFFECT_PREFAB;
    v29 = v17;
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29);
    v20 = System_String__Format(BOSS_POINT_BREAK_EFFECT_PREFAB, v19, 0);
    v22 = WarBoardEventBossUIComponent__GetGameObjectFromEventUIAssetData(this, v20, v21);
    this->fields.pointBreakAnimPrefab = v22;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.pointBreakAnimPrefab,
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
  UnityEngine_Object_o *GameObjectFromEventUIAssetData; // x21
  Il2CppObject *Component_object; // x21
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  intptr_t m_CachedPtr; // x8
  _QWORD *v23; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v25; // x8
  int32_t v26; // [xsp+8h] [xbp-58h] BYREF
  int v27; // [xsp+Ch] [xbp-54h] BYREF

  v4 = this;
  if ( (byte_4D2E258 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_UIAtlas__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_UIAtlas__Clear__);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_25389/*"{0:D2}"*/);
    this = (WarBoardEventBossUIComponent_o *)sub_1C93AD4(&StringLiteral_5366/*"DownloadEventUIAtlas{0}{1}"*/);
    byte_4D2E258 = 1;
  }
  if ( v4->fields.assetData )
  {
    atlasList = v4->fields.atlasList;
    if ( !atlasList )
LABEL_22:
      sub_1C93D2C(this, *(_QWORD *)&eventId);
    size = atlasList->fields._size;
    v7 = atlasList->fields._version + 1;
    atlasList->fields._size = 0;
    atlasList->fields._version = v7;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)atlasList->fields._items, 0, size, 0);
    for ( i = 1; ; ++i )
    {
      v27 = i;
      v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27);
      v10 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_25389/*"{0:D2}"*/, v9, 0);
      v26 = eventId;
      v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26);
      v12 = System_String__Format_64467032((System_String_o *)StringLiteral_5366/*"DownloadEventUIAtlas{0}{1}"*/, v11, v10, 0);
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
                           (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
        break;
      this = (WarBoardEventBossUIComponent_o *)v4->fields.atlasList;
      if ( !this )
        goto LABEL_22;
      m_CachedPtr = this->fields.m_CachedPtr;
      v23 = Method_System_Collections_Generic_List_UIAtlas__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !m_CachedPtr )
        goto LABEL_22;
      m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          Component_object,
          *(const MethodInfo_387999C **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
      }
      else
      {
        v25 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
        LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v25 + 32) = Component_object;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v25 + 32), (int32_t)Component_object, v16, v17, v18, v19, v20, v21);
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  Il2CppObject *deadAnimPrefab; // x22
  Il2CppObject *v21; // x22
  Il2CppObject *Component_object; // x22
  System_Action_o *v23; // x19
  System_Action_o *v24; // x19
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7

  if ( (byte_4D2E25A & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
    sub_1C93AD4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_WarBoardEventBossUIComponent___c__DisplayClass50_0__PlayDaedAnim_b__0__);
    sub_1C93AD4(&Method_WarBoardEventBossUIComponent___c__DisplayClass50_0__PlayDaedAnim_b__1__);
    sub_1C93AD4(&WarBoardEventBossUIComponent___c__DisplayClass50_0_TypeInfo);
    byte_4D2E25A = 1;
  }
  v5 = sub_1C93D20(WarBoardEventBossUIComponent___c__DisplayClass50_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_13;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = endAction;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)endAction, v14, v15, v16, v17, v18, v19);
  deadAnimPrefab = (Il2CppObject *)this->fields.deadAnimPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v21 = UnityEngine_Object__Instantiate_object_(
          deadAnimPrefab,
          (const MethodInfo_3230E6C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  GameObjectExtensions__SafeSetParent((UnityEngine_GameObject_o *)v21, (UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__ResetLocalPosition((UnityEngine_GameObject_o *)v21, 0);
  if ( !v21 )
    goto LABEL_13;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)v21,
                       (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
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
    sub_1C93D2C(bossIconSp, v7);
  }
  v23 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(
    v23,
    (Il2CppObject *)v5,
    Method_WarBoardEventBossUIComponent___c__DisplayClass50_0__PlayDaedAnim_b__0__,
    0);
  if ( !Component_object )
    goto LABEL_13;
  CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)Component_object, 0, v23, 0);
  v24 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(
    v24,
    (Il2CppObject *)v5,
    Method_WarBoardEventBossUIComponent___c__DisplayClass50_0__PlayDaedAnim_b__1__,
    0);
  Component_object[2].monitor = v24;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&Component_object[2].monitor, (int32_t)v24, v25, v26, v27, v28, v29, v30);
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
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  const MethodInfo *v22; // x2
  struct WarBoardUserServantData_o *oldBossInfo; // x8
  int32_t *p_defeatPoint; // x8
  struct WarBoardPieceData_o *bossPieceData; // x8
  int32_t v26; // w1
  __int64 v27; // x8
  struct WarBoardUserServantData_o *v28; // x9
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  EasingObject_o *v37; // x20
  System_Action_o *v38; // x21
  System_Action_o *v39; // x22

  if ( (byte_4D2E25C & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_1C93AD4(&Method_WarBoardEventBossUIComponent___c__DisplayClass52_0__PlayHpCut_b__0__);
    sub_1C93AD4(&Method_WarBoardEventBossUIComponent___c__DisplayClass52_0__PlayHpCut_b__1__);
    sub_1C93AD4(&WarBoardEventBossUIComponent___c__DisplayClass52_0_TypeInfo);
    byte_4D2E25C = 1;
  }
  v7 = sub_1C93D20(WarBoardEventBossUIComponent___c__DisplayClass52_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_20;
  *(_QWORD *)(v7 + 24) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 24), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 48) = endAction;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 48), (int32_t)endAction, v16, v17, v18, v19, v20, v21);
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
  *(_QWORD *)(v7 + 32) = MaxHpByBreakPoint;
  if ( this->fields.isPointBreak || (MaxHpByBreakPoint = (int64_t)this->fields.bossPieceData) == 0 )
  {
    v27 = 0;
  }
  else
  {
    MaxHpByBreakPoint = WarBoardPieceData__get_CurrentHp((WarBoardPieceData_o *)MaxHpByBreakPoint, 0);
    v27 = (int)MaxHpByBreakPoint;
  }
  *(_QWORD *)(v7 + 40) = v27;
  v28 = this->fields.oldBossInfo;
  if ( !v28 )
    goto LABEL_20;
  if ( v27 == v28->fields.currentHp )
  {
    ActionExtensions__Call(*(System_Action_o **)(v7 + 48), 0);
    return;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_31FDB6C *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v7 + 16) = Component_object;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)Component_object, v31, v32, v33, v34, v35, v36);
  v37 = *(EasingObject_o **)(v7 + 16);
  v38 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(
    v38,
    (Il2CppObject *)v7,
    Method_WarBoardEventBossUIComponent___c__DisplayClass52_0__PlayHpCut_b__0__,
    0);
  v39 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(
    v39,
    (Il2CppObject *)v7,
    Method_WarBoardEventBossUIComponent___c__DisplayClass52_0__PlayHpCut_b__1__,
    0);
  if ( !v37 )
LABEL_20:
    sub_1C93D2C(MaxHpByBreakPoint, v9);
  EasingObject__Play(v37, duration, v38, v39, 0.0, 0, 0);
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
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  const MethodInfo *v22; // x2
  struct WarBoardPieceData_o *bossPieceData; // x8
  int32_t v24; // w1
  float value; // s0
  WarBoardPieceData_o *v26; // x0
  double v27; // d0
  float v28; // s0
  float v29; // s1
  bool v30; // nf
  float v31; // s0
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  EasingObject_o *v40; // x20
  System_Action_o *v41; // x21
  System_Action_o *v42; // x22

  if ( (byte_4D2E25D & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_1C93AD4(&Method_WarBoardEventBossUIComponent___c__DisplayClass53_0__PlayHpRecover_b__0__);
    sub_1C93AD4(&Method_WarBoardEventBossUIComponent___c__DisplayClass53_0__PlayHpRecover_b__1__);
    sub_1C93AD4(&WarBoardEventBossUIComponent___c__DisplayClass53_0_TypeInfo);
    byte_4D2E25D = 1;
  }
  v7 = sub_1C93D20(WarBoardEventBossUIComponent___c__DisplayClass53_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_15;
  *(_QWORD *)(v7 + 24) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 24), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 40) = endAction;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 40), (int32_t)endAction, v16, v17, v18, v19, v20, v21);
  bossPieceData = this->fields.bossPieceData;
  v24 = bossPieceData ? bossPieceData->fields._breakPoint_k__BackingField : 0;
  *(_QWORD *)(v7 + 32) = WarBoardEventBossUIComponent__GetMaxHpByBreakPoint(this, v24, v22);
  hpBarSlider = (UIProgressBar_o *)this->fields.hpBarSlider;
  if ( !hpBarSlider )
    goto LABEL_15;
  value = UIProgressBar__get_value(hpBarSlider, 0);
  v26 = this->fields.bossPieceData;
  this->fields.HPfrom = value;
  v27 = v26 ? (double)WarBoardPieceData__get_CurrentHp(v26, 0) : 0.0;
  v28 = v27 / (double)*(__int64 *)(v7 + 32);
  v29 = fminf(v28, 1.0);
  v30 = v28 < 0.0;
  v31 = 0.0;
  if ( !v30 )
    v31 = v29;
  this->fields.HPto = v31;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_31FDB6C *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v7 + 16) = Component_object;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)Component_object, v34, v35, v36, v37, v38, v39);
  v40 = *(EasingObject_o **)(v7 + 16);
  v41 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(
    v41,
    (Il2CppObject *)v7,
    Method_WarBoardEventBossUIComponent___c__DisplayClass53_0__PlayHpRecover_b__0__,
    0);
  v42 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(
    v42,
    (Il2CppObject *)v7,
    Method_WarBoardEventBossUIComponent___c__DisplayClass53_0__PlayHpRecover_b__1__,
    0);
  if ( !v40 )
LABEL_15:
    sub_1C93D2C(hpBarSlider, v9);
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
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  System_Action_o **v14; // x20
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  struct WarBoardUserServantData_o *oldBossInfo; // x9
  struct WarBoardEventBossUIComponent_BreakIcon_array *breakIconList; // x8
  unsigned int v23; // w9
  WarBoardEventBossUIComponent_BreakIcon_o *v24; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *pointBreakAnimPrefab; // x22
  UnityEngine_GameObject_o *v27; // x23
  Il2CppObject *v28; // x22
  Il2CppObject *Component_object; // x22
  const MethodInfo *v30; // x2
  struct WarBoardPieceData_o *bossPieceData; // x8
  UILabel_o *totalHpLabel; // x21
  int32_t breakPoint_k__BackingField; // w1
  System_Action_o *v34; // x19
  const MethodInfo *v35; // x3
  struct WarBoardUserServantData_o *currentBossInfo; // x8
  struct WarBoardPieceData_o *v37; // x9
  int32_t v38; // w2
  UnityEngine_Color_o TextEffectColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D2E25B & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
    sub_1C93AD4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_WarBoardEventBossUIComponent___c__DisplayClass51_0__PlayPointBreakAnim_b__0__);
    sub_1C93AD4(&WarBoardEventBossUIComponent___c__DisplayClass51_0_TypeInfo);
    byte_4D2E25B = 1;
  }
  v5 = sub_1C93D20(WarBoardEventBossUIComponent___c__DisplayClass51_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_24;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = endAction;
  v14 = (System_Action_o **)(v5 + 24);
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)endAction, v15, v16, v17, v18, v19, v20);
  oldBossInfo = this->fields.oldBossInfo;
  if ( !oldBossInfo )
    goto LABEL_24;
  breakIconList = this->fields.breakIconList;
  if ( !breakIconList )
    goto LABEL_24;
  v23 = (oldBossInfo->fields.defeatPoint - 1) & ~((oldBossInfo->fields.defeatPoint - 1) >> 31);
  if ( v23 >= LODWORD(breakIconList->max_length) )
    sub_1C93D34(Sprite);
  v24 = breakIconList->m_Items[v23];
  if ( !v24 )
    goto LABEL_24;
  Sprite = (UnityEngine_Component_o *)v24->fields.Sprite;
  if ( !Sprite )
    goto LABEL_24;
  gameObject = UnityEngine_Component__get_gameObject(Sprite, 0);
  pointBreakAnimPrefab = (Il2CppObject *)this->fields.pointBreakAnimPrefab;
  v27 = gameObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v28 = UnityEngine_Object__Instantiate_object_(
          pointBreakAnimPrefab,
          (const MethodInfo_3230E6C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  GameObjectExtensions__SafeSetParent_36750960((UnityEngine_GameObject_o *)v28, v27, 0);
  GameObjectExtensions__ResetLocalPosition((UnityEngine_GameObject_o *)v28, 0);
  if ( !v28 )
    goto LABEL_24;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)v28,
                       (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
  {
    v34 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(
      v34,
      (Il2CppObject *)v5,
      Method_WarBoardEventBossUIComponent___c__DisplayClass51_0__PlayPointBreakAnim_b__0__,
      0);
    if ( Component_object )
    {
      CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)Component_object, 0, v34, 0);
      return;
    }
LABEL_24:
    sub_1C93D2C(Sprite, v7);
  }
  bossPieceData = this->fields.bossPieceData;
  totalHpLabel = this->fields.totalHpLabel;
  if ( bossPieceData )
    breakPoint_k__BackingField = bossPieceData->fields._breakPoint_k__BackingField;
  else
    breakPoint_k__BackingField = 0;
  TextEffectColor = WarBoardEventBossUIComponent__GetTextEffectColor(this, breakPoint_k__BackingField, v30);
  if ( !totalHpLabel )
    goto LABEL_24;
  UILabel__set_effectColor(totalHpLabel, TextEffectColor, 0);
  currentBossInfo = this->fields.currentBossInfo;
  if ( !currentBossInfo )
    goto LABEL_24;
  v37 = this->fields.bossPieceData;
  if ( v37 )
    v38 = v37->fields._breakPoint_k__BackingField;
  else
    v38 = 0;
  WarBoardEventBossUIComponent__SetupBreakPoint(this, currentBossInfo->fields.maxDefeatPoint, v38, v35);
  this->fields.isPointBreak = 0;
  ActionExtensions__Call(*v14, 0);
}


void WarBoardEventBossUIComponent__SetDisp(
        WarBoardEventBossUIComponent_o *this,
        WarBoardDataEntity_o *warBoardDataEntity,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  WarBoardDataEntity_o **p_warBoardDataEnt; // x21
  __int64 defeatPoint; // x1
  __int64 bossIconSp; // x0
  struct WarBoardStageBossEntity_o *warBoardStageBossEnt; // x8
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  struct WarBoardStageBossEntity_o *v20; // x8
  _DWORD *v21; // x22
  struct WarBoardUserServantData_o *StageBossData; // x1
  struct WarBoardUserServantData_o **p_currentBossInfo; // x20
  struct WarBoardStageBossEntity_o *v24; // x8
  struct WarBoardPieceData_o *EventBossPiece; // x0
  struct WarBoardPieceData_o **p_bossPieceData; // x21
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  WarBoardUserServantData_o *v33; // x24
  struct WarBoardUserServantData_o **p_oldBossInfo; // x23
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  struct WarBoardUserServantData_o *currentBossInfo; // x8
  struct WarBoardUserServantData_o *v48; // x9
  struct System_Int32_array *breakHp; // x1
  const MethodInfo *v50; // x2
  struct WarBoardUserServantData_o *v51; // x8
  struct WarBoardUserServantData_o *v52; // x23
  WarBoardUserServantData_o *v53; // x23
  struct WarBoardUserServantData_o **v54; // x22
  int32_t v55; // w2
  int32_t v56; // w3
  System_String_o *v57; // x4
  int32_t v58; // w5
  int64_t v59; // x6
  System_String_o *v60; // x7
  int32_t v61; // w2
  int32_t v62; // w3
  System_String_o *v63; // x4
  int32_t v64; // w5
  int64_t v65; // x6
  System_String_o *v66; // x7
  struct WarBoardUserServantData_o *v67; // x8
  struct WarBoardUserServantData_o *v68; // x9
  struct System_Int32_array *v69; // x1
  struct WarBoardUserServantData_o *v70; // x8
  struct WarBoardPieceData_o *v71; // x8
  struct WarBoardUserServantData_o *oldBossInfo; // x9
  struct WarBoardUserServantData_o *v73; // x8
  double v74; // d0
  float v75; // s1
  float HPfrom; // s0
  struct WarBoardUserServantData_o *v77; // x8
  double v78; // d9
  WarBoardPieceData_o *bossPieceData; // x0
  float v80; // s0
  float v81; // s1
  float v82; // s0
  double v83; // d0
  float v84; // s0
  float v85; // s1
  float v86; // s0
  const MethodInfo *v87; // x2
  struct WarBoardUserServantData_o *v88; // x8
  const MethodInfo *v89; // x3
  struct WarBoardUserServantData_o *v90; // x8
  struct WarBoardStageBossEntity_o *v91; // x8
  int32_t idx; // w25
  UISprite_o *v93; // x20
  Il2CppObject *v94; // x21
  Il2CppObject *v95; // x0
  System_String_o *v96; // x0
  const MethodInfo *v97; // x3
  const MethodInfo *v98; // x3
  const MethodInfo *v99; // x3
  UISprite_o *hpBarUnderSprite; // x20
  Il2CppObject *v101; // x0
  System_String_o *v102; // x0
  const MethodInfo *v103; // x3
  UISprite_o *hpBarUpperSprite; // x20
  Il2CppObject *v105; // x0
  System_String_o *v106; // x0
  const MethodInfo *v107; // x3
  const MethodInfo *v108; // x3
  const MethodInfo *v109; // x2
  struct WarBoardUserServantData_o *v110; // x8
  const MethodInfo *v111; // x2
  struct WarBoardStageBossEntity_o *v112; // x8
  UILabel_o *bossName; // x19
  int32_t v114; // [xsp+0h] [xbp-90h] BYREF
  int32_t v115; // [xsp+4h] [xbp-8Ch] BYREF
  int32_t v116; // [xsp+8h] [xbp-88h] BYREF
  int32_t iconId; // [xsp+Ch] [xbp-84h] BYREF
  UnityEngine_Color_o TextEffectColor; // 0:kr00_16.16

  if ( (byte_4D2E251 & 1) == 0 )
  {
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C93AD4(&WarBoardUserServantData_TypeInfo);
    sub_1C93AD4(&StringLiteral_25083/*"war_board_boss_hp_frame"*/);
    sub_1C93AD4(&StringLiteral_25086/*"war_board_boss_hp_white"*/);
    sub_1C93AD4(&StringLiteral_25085/*"war_board_boss_hp_upper_{0}"*/);
    sub_1C93AD4(&StringLiteral_25087/*"war_board_boss_icon_{0}{1:D2}"*/);
    sub_1C93AD4(&StringLiteral_25082/*"war_board_boss_hp_back"*/);
    sub_1C93AD4(&StringLiteral_25084/*"war_board_boss_hp_lower_{0}"*/);
    byte_4D2E251 = 1;
  }
  this->fields.warBoardDataEnt = warBoardDataEntity;
  p_warBoardDataEnt = &this->fields.warBoardDataEnt;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.warBoardDataEnt,
    (int32_t)warBoardDataEntity,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  bossIconSp = (__int64)this->fields.bossIconSp;
  if ( !bossIconSp )
    goto LABEL_67;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)bossIconSp, 1, 0);
  bossIconSp = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  warBoardStageBossEnt = this->fields.warBoardStageBossEnt;
  if ( !warBoardStageBossEnt )
    goto LABEL_67;
  if ( !bossIconSp )
    goto LABEL_67;
  bossIconSp = (__int64)WarBoardManager__GetEventBossUILoadData(
                          (WarBoardManager_o *)bossIconSp,
                          warBoardStageBossEnt->fields.idx,
                          0);
  v20 = this->fields.warBoardStageBossEnt;
  if ( !v20 )
    goto LABEL_67;
  v21 = (_DWORD *)bossIconSp;
  if ( *p_warBoardDataEnt )
    StageBossData = WarBoardDataEntity__GetStageBossData(*p_warBoardDataEnt, v20->fields.idx, 0);
  else
    StageBossData = 0;
  this->fields.currentBossInfo = StageBossData;
  p_currentBossInfo = &this->fields.currentBossInfo;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.currentBossInfo,
    (int32_t)StageBossData,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  if ( this->fields.currentBossInfo )
  {
    bossIconSp = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( bossIconSp )
    {
      v24 = this->fields.warBoardStageBossEnt;
      if ( v24 )
      {
        bossIconSp = *(_QWORD *)(bossIconSp + 440);
        if ( bossIconSp )
        {
          EventBossPiece = WarBoardData__GetEventBossPiece((WarBoardData_o *)bossIconSp, v24->fields.idx, 0);
          this->fields.bossPieceData = EventBossPiece;
          p_bossPieceData = &this->fields.bossPieceData;
          sub_1C93A78(
            (GrandQuestFolderBoardItem_o *)&this->fields.bossPieceData,
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
            goto LABEL_67;
          if ( v21[8] == (*p_currentBossInfo)->fields.stageBossIdx )
          {
            v33 = (WarBoardUserServantData_o *)sub_1C93D20(WarBoardUserServantData_TypeInfo);
            WarBoardUserServantData___ctor(v33, 0);
            this->fields.oldBossInfo = v33;
            p_oldBossInfo = &this->fields.oldBossInfo;
            sub_1C93A78(
              (GrandQuestFolderBoardItem_o *)&this->fields.oldBossInfo,
              (int32_t)v33,
              v35,
              v36,
              v37,
              v38,
              v39,
              v40);
            currentBossInfo = this->fields.currentBossInfo;
            if ( !currentBossInfo )
              goto LABEL_67;
            v48 = *p_oldBossInfo;
            if ( !*p_oldBossInfo )
              goto LABEL_67;
            v48->fields.stageBossIdx = currentBossInfo->fields.stageBossIdx;
            breakHp = currentBossInfo->fields.breakHp;
            v48->fields.breakHp = breakHp;
            sub_1C93A78(
              (GrandQuestFolderBoardItem_o *)&v48->fields.breakHp,
              (int32_t)breakHp,
              v41,
              v42,
              v43,
              v44,
              v45,
              v46);
            v51 = *p_currentBossInfo;
            if ( !*p_currentBossInfo )
              goto LABEL_67;
            v52 = *p_oldBossInfo;
            if ( !v52 )
              goto LABEL_67;
            v52->fields.maxDefeatPoint = v51->fields.maxDefeatPoint;
            if ( v21[6] <= 2u )
              sub_1C93D34(bossIconSp);
            v52->fields.defeatPoint = v21[10];
            v52->fields.hp = v51->fields.hp;
            bossIconSp = (unsigned int)v21[9];
          }
          else
          {
LABEL_24:
            v53 = (WarBoardUserServantData_o *)sub_1C93D20(WarBoardUserServantData_TypeInfo);
            WarBoardUserServantData___ctor(v53, 0);
            this->fields.oldBossInfo = v53;
            v54 = &this->fields.oldBossInfo;
            sub_1C93A78(
              (GrandQuestFolderBoardItem_o *)&this->fields.oldBossInfo,
              (int32_t)v53,
              v55,
              v56,
              v57,
              v58,
              v59,
              v60);
            v67 = this->fields.currentBossInfo;
            if ( !v67 )
              goto LABEL_67;
            v68 = *v54;
            if ( !*v54 )
              goto LABEL_67;
            v68->fields.stageBossIdx = v67->fields.stageBossIdx;
            v69 = v67->fields.breakHp;
            v68->fields.breakHp = v69;
            sub_1C93A78((GrandQuestFolderBoardItem_o *)&v68->fields.breakHp, (int32_t)v69, v61, v62, v63, v64, v65, v66);
            v70 = *p_currentBossInfo;
            if ( !*p_currentBossInfo )
              goto LABEL_67;
            v52 = *v54;
            if ( !*v54 )
              goto LABEL_67;
            v52->fields.maxDefeatPoint = v70->fields.maxDefeatPoint;
            bossIconSp = (__int64)*p_bossPieceData;
            if ( *p_bossPieceData )
            {
              v52->fields.defeatPoint = *(_DWORD *)(bossIconSp + 52);
              v52->fields.hp = v70->fields.hp;
              bossIconSp = WarBoardPieceData__get_CurrentHp((WarBoardPieceData_o *)bossIconSp, 0);
            }
            else
            {
              v52->fields.defeatPoint = 0;
              v52->fields.hp = v70->fields.hp;
            }
          }
          v52->fields.currentHp = bossIconSp;
          v71 = *p_bossPieceData;
          if ( *p_bossPieceData )
            LODWORD(v71) = v71->fields._breakPoint_k__BackingField;
          oldBossInfo = this->fields.oldBossInfo;
          if ( oldBossInfo )
          {
            defeatPoint = (unsigned int)oldBossInfo->fields.defeatPoint;
            this->fields.isPointBreak = (int)v71 < (int)defeatPoint;
            if ( (int)v71 < (int)defeatPoint )
            {
              bossIconSp = WarBoardEventBossUIComponent__GetMaxHpByBreakPoint(this, defeatPoint, v50);
              v73 = this->fields.oldBossInfo;
              if ( !v73 )
                goto LABEL_67;
              v74 = (double)bossIconSp;
              bossIconSp = (__int64)this->fields.hpBarSlider;
              *(float *)&v74 = (double)v73->fields.currentHp / v74;
              v75 = fminf(*(float *)&v74, 1.0);
              HPfrom = *(float *)&v74 < 0.0 ? 0.0 : v75;
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
                             v50);
              v77 = this->fields.oldBossInfo;
              if ( v77 )
              {
                v78 = (double)bossIconSp;
                bossPieceData = this->fields.bossPieceData;
                v80 = (double)v77->fields.currentHp / v78;
                v81 = fminf(v80, 1.0);
                v82 = v80 < 0.0 ? 0.0 : v81;
                this->fields.HPfrom = v82;
                v83 = bossPieceData ? (double)WarBoardPieceData__get_CurrentHp(bossPieceData, 0) : 0.0;
                bossIconSp = (__int64)this->fields.hpBarSlider;
                v84 = v83 / v78;
                v85 = fminf(v84, 1.0);
                v86 = v84 < 0.0 ? 0.0 : v85;
                this->fields.HPto = v86;
                if ( bossIconSp )
                {
                  HPfrom = this->fields.HPfrom;
LABEL_57:
                  UIProgressBar__set_value((UIProgressBar_o *)bossIconSp, HPfrom, 0);
                  v88 = this->fields.oldBossInfo;
                  if ( !v88 )
                    goto LABEL_67;
                  WarBoardEventBossUIComponent__SetTotalHpText(this, v88->fields.currentHp, v87);
                  bossIconSp = (__int64)this->fields.hpBarSliderUnder;
                  if ( !bossIconSp )
                    goto LABEL_67;
                  UIProgressBar__set_value((UIProgressBar_o *)bossIconSp, 0.0, 0);
                  v90 = this->fields.oldBossInfo;
                  if ( !v90 )
                    goto LABEL_67;
                  WarBoardEventBossUIComponent__SetupBreakPoint(
                    this,
                    v90->fields.maxDefeatPoint,
                    v90->fields.defeatPoint,
                    v89);
                  v91 = this->fields.warBoardStageBossEnt;
                  if ( !v91 )
                    goto LABEL_67;
                  idx = v91->fields.idx;
                  v93 = this->fields.bossIconSp;
                  iconId = v91->fields.iconId;
                  v94 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId);
                  v116 = idx;
                  v95 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v116);
                  v96 = System_String__Format_64467032((System_String_o *)StringLiteral_25087/*"war_board_boss_icon_{0}{1:D2}"*/, v94, v95, 0);
                  WarBoardEventBossUIComponent__SetSpriteByLocalAtlas(this, v93, v96, v97);
                  WarBoardEventBossUIComponent__SetSpriteByLocalAtlas(
                    this,
                    this->fields.bossHpFrame,
                    (System_String_o *)StringLiteral_25083/*"war_board_boss_hp_frame"*/,
                    v98);
                  WarBoardEventBossUIComponent__SetSpriteByLocalAtlas(
                    this,
                    this->fields.bossHpBg,
                    (System_String_o *)StringLiteral_25082/*"war_board_boss_hp_back"*/,
                    v99);
                  hpBarUnderSprite = this->fields.hpBarUnderSprite;
                  v115 = idx;
                  v101 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v115);
                  v102 = System_String__Format((System_String_o *)StringLiteral_25084/*"war_board_boss_hp_lower_{0}"*/, v101, 0);
                  WarBoardEventBossUIComponent__SetSpriteByLocalAtlas(this, hpBarUnderSprite, v102, v103);
                  hpBarUpperSprite = this->fields.hpBarUpperSprite;
                  v114 = idx;
                  v105 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v114);
                  v106 = System_String__Format((System_String_o *)StringLiteral_25085/*"war_board_boss_hp_upper_{0}"*/, v105, 0);
                  WarBoardEventBossUIComponent__SetSpriteByLocalAtlas(this, hpBarUpperSprite, v106, v107);
                  bossIconSp = WarBoardEventBossUIComponent__SetSpriteByLocalAtlas(
                                 this,
                                 this->fields.hpBarWhiteSprite,
                                 (System_String_o *)StringLiteral_25086/*"war_board_boss_hp_white"*/,
                                 v108);
                  v110 = this->fields.oldBossInfo;
                  if ( !v110 )
                    goto LABEL_67;
                  TextEffectColor = WarBoardEventBossUIComponent__GetTextEffectColor(
                                      this,
                                      v110->fields.defeatPoint,
                                      v109);
                  bossIconSp = (__int64)this->fields.totalHpLabel;
                  if ( !bossIconSp )
                    goto LABEL_67;
                  UILabel__set_effectColor((UILabel_o *)bossIconSp, TextEffectColor, 0);
                  bossIconSp = (__int64)this->fields.bossName;
                  if ( !bossIconSp )
                    goto LABEL_67;
                  UILabel__set_effectColor((UILabel_o *)bossIconSp, TextEffectColor, 0);
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
    sub_1C93D2C(bossIconSp, defeatPoint);
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

  if ( (byte_4D2E259 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_Any_UIAtlas___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
    byte_4D2E259 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  IsNullOrEmpty = (struct System_Collections_Generic_List_UIAtlas__o *)System_String__IsNullOrEmpty(spriteName, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0
    || (IsNullOrEmpty = (struct System_Collections_Generic_List_UIAtlas__o *)System_Linq_Enumerable__Any_object_(
                                                                               (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.atlasList,
                                                                               (const MethodInfo_31B0714 *)Method_System_Linq_Enumerable_Any_UIAtlas___),
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
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
  v16 = v15;
  do
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v16,
           (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    if ( !v9 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v16,
        (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
      if ( sprite )
      {
        UISprite__set_spriteName(sprite, 0, 0);
        return 0;
      }
LABEL_19:
      sub_1C93D2C(IsNullOrEmpty, v8);
    }
    current = v16.fields._current;
    if ( !v16.fields._current )
      sub_1C93D2C(v9, v10);
    v12 = UIAtlas__GetSprite((UIAtlas_o *)v16.fields._current, spriteName, 0);
  }
  while ( !v12 );
  if ( !sprite )
    sub_1C93D2C(v12, v13);
  UISprite__set_atlas(sprite, (UIAtlas_o *)current, 0);
  UISprite__set_spriteName(sprite, spriteName, 0);
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v16,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
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

  if ( (byte_4D2E252 & 1) == 0 )
  {
    sub_1C93AD4(&long_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_3726/*"COMMON_NUM_FORMAT"*/);
    byte_4D2E252 = 1;
  }
  totalHpLabel = this->fields.totalHpLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_3726/*"COMMON_NUM_FORMAT"*/, 0);
  v10 = hp;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v10);
  v8 = System_String__Format(v6, v7, 0);
  if ( !totalHpLabel )
    sub_1C93D2C(v8, v9);
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
  int64_t v6; // x6
  System_String_o *v7; // x7
  WarBoardStageBossEntity_o **p_warBoardStageBossEnt; // x23
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x2
  const MethodInfo *v21; // x2

  this->fields.eventId = eventId;
  this->fields.warBoardStageBossEnt = warBoardStageBossEnt;
  p_warBoardStageBossEnt = &this->fields.warBoardStageBossEnt;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.warBoardStageBossEnt,
    (int32_t)warBoardStageBossEnt,
    (int32_t)warBoardStageBossEnt,
    (int32_t)warBoardDataEnt,
    (System_String_o *)assetData,
    (int32_t)method,
    v6,
    v7);
  this->fields.assetData = assetData;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.assetData, (int32_t)assetData, v13, v14, v15, v16, v17, v18);
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
      sub_1C93D2C(this, *(_QWORD *)&maxCount);
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
    sub_1C93D34(this);
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
          sub_1C93D2C(CurrentHp, v7);
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
    sub_1C93D2C(this, 0);
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
    sub_1C93D2C(this, method);
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
    sub_1C93D2C(_4__this, method);
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
    sub_1C93D2C(this, method);
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
    sub_1C93D2C(0, method);
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
    sub_1C93D2C(this, method);
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
    sub_1C93D2C(this, method);
  bossPieceData = _4__this->fields.bossPieceData;
  if ( bossPieceData )
    CurrentHp = WarBoardPieceData__get_CurrentHp(bossPieceData, 0);
  else
    CurrentHp = 0;
  WarBoardEventBossUIComponent__SetTotalHpText(_4__this, CurrentHp, v2);
  ActionExtensions__Call(this->fields.endAction, 0);
}