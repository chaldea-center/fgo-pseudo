void __fastcall WarBoardEventBossUIComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t v6; // w1
  struct WarBoardEventBossUIComponent_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_49B8935 & 1) == 0 )
  {
    sub_1B4CF90(&WarBoardEventBossUIComponent_TypeInfo, v1);
    sub_1B4CF90(&StringLiteral_15283/*"WarBoardEventBossEffect_Break{0}"*/, v4);
    sub_1B4CF90(&StringLiteral_15284/*"WarBoardEventBossEffect_Dead{0}"*/, v5);
    byte_49B8935 = 1;
  }
  WarBoardEventBossUIComponent_TypeInfo->static_fields->BOSS_CLEAR_EFFECT_PREFAB = (struct System_String_o *)StringLiteral_15284/*"WarBoardEventBossEffect_Dead{0}"*/;
  sub_1B4CF34(
    (CGThumbnailListItem_o *)WarBoardEventBossUIComponent_TypeInfo->static_fields,
    StringLiteral_15284/*"WarBoardEventBossEffect_Dead{0}"*/,
    v2,
    v3);
  v6 = StringLiteral_15283/*"WarBoardEventBossEffect_Break{0}"*/;
  static_fields = WarBoardEventBossUIComponent_TypeInfo->static_fields;
  static_fields->BOSS_POINT_BREAK_EFFECT_PREFAB = (struct System_String_o *)StringLiteral_15283/*"WarBoardEventBossEffect_Break{0}"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->BOSS_POINT_BREAK_EFFECT_PREFAB, v6, v8, v9);
}


void __fastcall WarBoardEventBossUIComponent___ctor(WarBoardEventBossUIComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_49B8934 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_UIAtlas___ctor__, method);
    sub_1B4CF90(&System_Collections_Generic_List_UIAtlas__TypeInfo, v3);
    byte_49B8934 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_UIAtlas__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_UIAtlas___ctor__);
  this->fields.atlasList = (struct System_Collections_Generic_List_UIAtlas__o *)v4;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.atlasList, (int32_t)v4, v5, v6);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall WarBoardEventBossUIComponent__Awake(WarBoardEventBossUIComponent_o *this, const MethodInfo *method)
{
  ;
}


UnityEngine_Color_o __fastcall WarBoardEventBossUIComponent__ConvertHexToColor(
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

  if ( (byte_49B8933 & 1) == 0 )
  {
    sub_1B4CF90(&System_Convert_TypeInfo, hexStrColor);
    byte_49B8933 = 1;
  }
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v4 = System_Convert__ToInt32_62176560(hexStrColor, 16, 0LL);
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


float __fastcall WarBoardEventBossUIComponent__ConvertHpToRate(
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


System_String_o *__fastcall WarBoardEventBossUIComponent__CreateSaveDta(
        WarBoardEventBossUIComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Text_StringBuilder_o *v5; // x20
  System_Text_StringBuilder_o *appended; // x0
  __int64 v7; // x1
  struct WarBoardUserServantData_o *oldBossInfo; // x8
  struct WarBoardUserServantData_o *v9; // x8
  struct WarBoardUserServantData_o *v10; // x8

  if ( (byte_49B8932 & 1) == 0 )
  {
    sub_1B4CF90(&System_Text_StringBuilder_TypeInfo, method);
    sub_1B4CF90(&StringLiteral_1468/*":"*/, v3);
    sub_1B4CF90(&StringLiteral_1/*""*/, v4);
    byte_49B8932 = 1;
  }
  if ( !this->fields.oldBossInfo )
    return (System_String_o *)StringLiteral_1/*""*/;
  v5 = (System_Text_StringBuilder_o *)sub_1B4D1DC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v5, 0LL);
  oldBossInfo = this->fields.oldBossInfo;
  if ( !oldBossInfo
    || !v5
    || (System_Text_StringBuilder__Append_61181148(v5, oldBossInfo->fields.stageBossIdx, 0LL),
        appended = System_Text_StringBuilder__Append_61178652(v5, (System_String_o *)StringLiteral_1468/*":"*/, 0LL),
        (v9 = this->fields.oldBossInfo) == 0LL)
    || (System_Text_StringBuilder__Append_61181148(v5, v9->fields.currentHp, 0LL),
        appended = System_Text_StringBuilder__Append_61178652(v5, (System_String_o *)StringLiteral_1468/*":"*/, 0LL),
        (v10 = this->fields.oldBossInfo) == 0LL) )
  {
    sub_1B4D1EC(appended, v7);
  }
  System_Text_StringBuilder__Append_61181148(v5, v10->fields.defeatPoint, 0LL);
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v5->klass->vtable._3_ToString.method)(
                              v5,
                              v5->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
}


UnityEngine_GameObject_o *__fastcall WarBoardEventBossUIComponent__GetGameObjectFromEventUIAssetData(
        WarBoardEventBossUIComponent_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *result; // x0

  if ( (byte_49B892A & 1) == 0 )
  {
    sub_1B4CF90(&Method_AssetData_GetObject_GameObject____75492000, name);
    byte_49B892A = 1;
  }
  result = (UnityEngine_GameObject_o *)this->fields.assetData;
  if ( result )
    return (UnityEngine_GameObject_o *)AssetData__GetObject_object__49169892(
                                         (AssetData_o *)result,
                                         name,
                                         (const MethodInfo_2EE45E4 *)Method_AssetData_GetObject_GameObject____75492000);
  return result;
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall WarBoardEventBossUIComponent__GetMaxHpByBreakPoint(
        WarBoardEventBossUIComponent_o *this,
        int32_t restBreakPoint,
        const MethodInfo *method)
{
  struct WarBoardUserServantData_o *currentBossInfo; // x8

  if ( (byte_49B8929 & 1) == 0 )
  {
    sub_1B4CF90(&Method_BasicHelper_IndexValue_int____75497056, *(_QWORD *)&restBreakPoint);
    byte_49B8929 = 1;
  }
  currentBossInfo = this->fields.currentBossInfo;
  if ( currentBossInfo )
    return BasicHelper__IndexValue_int_(
             currentBossInfo->fields.breakHp,
             restBreakPoint,
             currentBossInfo->fields.hp,
             (const MethodInfo_2EF0318 *)Method_BasicHelper_IndexValue_int____75497056);
  else
    return 0LL;
}


WarBoardUserServantData_o *__fastcall WarBoardEventBossUIComponent__GetStageBossData(
        WarBoardEventBossUIComponent_o *this,
        int32_t stageBossIndex,
        const MethodInfo *method)
{
  WarBoardUserServantData_o *result; // x0

  result = (WarBoardUserServantData_o *)this->fields.warBoardDataEnt;
  if ( result )
    return WarBoardDataEntity__GetStageBossData((WarBoardDataEntity_o *)result, stageBossIndex, 0LL);
  return result;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall WarBoardEventBossUIComponent__GetStageBossName(
        WarBoardEventBossUIComponent_o *this,
        int32_t stageBossIndex,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x20
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  _QWORD *monitor; // x8
  __int64 v13; // x19
  System_Func_object__bool__o *v14; // x21
  Il2CppObject *object; // x0
  BattleServantData_o *klass; // x0

  if ( (byte_49B8927 & 1) == 0 )
  {
    sub_1B4CF90(&Method_BasicHelper_Find_WarBoardPieceData___, *(_QWORD *)&stageBossIndex);
    sub_1B4CF90(&System_Func_WarBoardPieceData__bool__TypeInfo, v4);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v5);
    sub_1B4CF90(&string_TypeInfo, v6);
    sub_1B4CF90(&Method_WarBoardEventBossUIComponent___c__DisplayClass35_0__GetStageBossName_b__0__, v7);
    sub_1B4CF90(&WarBoardEventBossUIComponent___c__DisplayClass35_0_TypeInfo, v8);
    byte_49B8927 = 1;
  }
  v9 = sub_1B4D1DC(WarBoardEventBossUIComponent___c__DisplayClass35_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9
    || (*(_DWORD *)(v9 + 16) = stageBossIndex,
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL)
    || (monitor = Instance[27].monitor) == 0LL )
  {
    sub_1B4D1EC(Instance, v11);
  }
  v13 = monitor[6];
  if ( v13
    && *(_QWORD *)(v13 + 24)
    && (v14 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_WarBoardPieceData__bool__TypeInfo),
        System_Func_object__bool____ctor(
          v14,
          (Il2CppObject *)v9,
          Method_WarBoardEventBossUIComponent___c__DisplayClass35_0__GetStageBossName_b__0__,
          0LL),
        (object = BasicHelper__Find_object_(
                    (System_Object_array *)v13,
                    (System_Func_T__bool__o *)v14,
                    (const MethodInfo_2EED060 *)Method_BasicHelper_Find_WarBoardPieceData___)) != 0LL)
    && (klass = (BattleServantData_o *)object[8].klass) != 0LL )
  {
    return BattleServantData__getServantShortName(klass, 0LL);
  }
  else
  {
    return string_TypeInfo->static_fields->Empty;
  }
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Color_o __fastcall WarBoardEventBossUIComponent__GetTextEffectColor(
        WarBoardEventBossUIComponent_o *this,
        int32_t restBreakPoint,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  struct WarBoardStageBossEntity_o *warBoardStageBossEnt; // x0
  Il2CppObject *bossColor; // x20
  System_String_array *TextEffectColors; // x0
  Il2CppObject *v10; // x0
  const MethodInfo *v11; // x2
  float v12; // s0
  float v13; // s1
  float v14; // s2
  float v15; // s3
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49B8928 & 1) == 0 )
  {
    sub_1B4CF90(&Method_BasicHelper_IndexValue_string___, *(_QWORD *)&restBreakPoint);
    sub_1B4CF90(&string___TypeInfo, v5);
    sub_1B4CF90(&StringLiteral_1187/*"0x000000"*/, v6);
    byte_49B8928 = 1;
  }
  warBoardStageBossEnt = this->fields.warBoardStageBossEnt;
  if ( warBoardStageBossEnt )
  {
    bossColor = (Il2CppObject *)warBoardStageBossEnt->fields.bossColor;
    TextEffectColors = WarBoardStageBossEntity__GetTextEffectColors(warBoardStageBossEnt, 0LL);
  }
  else
  {
    bossColor = (Il2CppObject *)StringLiteral_1187/*"0x000000"*/;
    TextEffectColors = (System_String_array *)sub_1B4D038(string___TypeInfo, 0LL);
  }
  v10 = BasicHelper__IndexValue_object_(
          (System_Object_array *)TextEffectColors,
          restBreakPoint - 1,
          bossColor,
          (const MethodInfo_2EF03FC *)Method_BasicHelper_IndexValue_string___);
  *(UnityEngine_Color_o *)&v12 = WarBoardEventBossUIComponent__ConvertHexToColor(
                                   (WarBoardEventBossUIComponent_o *)v10,
                                   (System_String_o *)v10,
                                   v11);
  result.fields.a = v15;
  result.fields.b = v14;
  result.fields.g = v13;
  result.fields.r = v12;
  return result;
}


void __fastcall WarBoardEventBossUIComponent__LoadAnimPrefab(
        WarBoardEventBossUIComponent_o *this,
        WarBoardStageBossEntity_o *ent,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  WarBoardEventBossUIComponent_c *v8; // x0
  System_String_o *BOSS_CLEAR_EFFECT_PREFAB; // x21
  Il2CppObject *v10; // x0
  System_String_o *v11; // x0
  const MethodInfo *v12; // x2
  struct UnityEngine_GameObject_o *GameObjectFromEventUIAssetData; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w9
  System_String_o *BOSS_POINT_BREAK_EFFECT_PREFAB; // x20
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  Il2CppObject *v21; // x0
  System_String_o *v22; // x0
  const MethodInfo *v23; // x2
  struct UnityEngine_GameObject_o *v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32_t v27; // [xsp+8h] [xbp-38h] BYREF
  int32_t defeatEffectId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_49B892B & 1) == 0 )
  {
    sub_1B4CF90(&int_TypeInfo, ent);
    sub_1B4CF90(&WarBoardEventBossUIComponent_TypeInfo, v7);
    byte_49B892B = 1;
  }
  if ( ent )
  {
    v8 = WarBoardEventBossUIComponent_TypeInfo;
    if ( !WarBoardEventBossUIComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardEventBossUIComponent_TypeInfo);
      v8 = WarBoardEventBossUIComponent_TypeInfo;
    }
    BOSS_CLEAR_EFFECT_PREFAB = v8->static_fields->BOSS_CLEAR_EFFECT_PREFAB;
    defeatEffectId = ent->fields.defeatEffectId;
    v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &defeatEffectId, method, v3, v4);
    v11 = System_String__Format(BOSS_CLEAR_EFFECT_PREFAB, v10, 0LL);
    GameObjectFromEventUIAssetData = WarBoardEventBossUIComponent__GetGameObjectFromEventUIAssetData(this, v11, v12);
    this->fields.deadAnimPrefab = GameObjectFromEventUIAssetData;
    sub_1B4CF34(
      (CGThumbnailListItem_o *)&this->fields.deadAnimPrefab,
      (int32_t)GameObjectFromEventUIAssetData,
      v14,
      v15);
    v16 = ent->fields.defeatEffectId;
    BOSS_POINT_BREAK_EFFECT_PREFAB = WarBoardEventBossUIComponent_TypeInfo->static_fields->BOSS_POINT_BREAK_EFFECT_PREFAB;
    v27 = v16;
    v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27, v18, v19, v20);
    v22 = System_String__Format(BOSS_POINT_BREAK_EFFECT_PREFAB, v21, 0LL);
    v24 = WarBoardEventBossUIComponent__GetGameObjectFromEventUIAssetData(this, v22, v23);
    this->fields.pointBreakAnimPrefab = v24;
    sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.pointBreakAnimPrefab, (int32_t)v24, v25, v26);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardEventBossUIComponent__LoadLocalAtlas(
        WarBoardEventBossUIComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  WarBoardEventBossUIComponent_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct System_Collections_Generic_List_UIAtlas__o *atlasList; // x8
  __int64 size; // x2
  int v15; // w9
  int i; // w28
  Il2CppObject *v17; // x0
  Il2CppObject *v18; // x21
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  Il2CppObject *v22; // x0
  System_String_o *v23; // x0
  const MethodInfo *v24; // x2
  UnityEngine_Object_o *GameObjectFromEventUIAssetData; // x21
  Il2CppObject *Component_object; // x21
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  __int64 v29; // x8
  _QWORD *v30; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v32; // x8
  int32_t v33; // [xsp+8h] [xbp-58h] BYREF
  int v34; // [xsp+Ch] [xbp-54h] BYREF

  v6 = this;
  if ( (byte_49B892C & 1) == 0 )
  {
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, *(_QWORD *)&eventId);
    sub_1B4CF90(&int_TypeInfo, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_UIAtlas__Add__, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_UIAtlas__Clear__, v9);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v10);
    sub_1B4CF90(&StringLiteral_24657/*"{0:D2}"*/, v11);
    this = (WarBoardEventBossUIComponent_o *)sub_1B4CF90(&StringLiteral_5280/*"DownloadEventUIAtlas{0}{1}"*/, v12);
    byte_49B892C = 1;
  }
  if ( v6->fields.assetData )
  {
    atlasList = v6->fields.atlasList;
    if ( !atlasList )
LABEL_22:
      sub_1B4D1EC(this, *(_QWORD *)&eventId);
    size = (unsigned int)atlasList->fields._size;
    v15 = atlasList->fields._version + 1;
    atlasList->fields._size = 0;
    atlasList->fields._version = v15;
    if ( (int)size >= 1 )
      System_Array__Clear((System_Array_o *)atlasList->fields._items, 0, size, 0LL);
    for ( i = 1; ; ++i )
    {
      v34 = i;
      v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v34, size, v3, v4);
      v18 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_24657/*"{0:D2}"*/, v17, 0LL);
      v33 = eventId;
      v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v33, v19, v20, v21);
      v23 = System_String__Format_61134760((System_String_o *)StringLiteral_5280/*"DownloadEventUIAtlas{0}{1}"*/, v22, v18, 0LL);
      GameObjectFromEventUIAssetData = (UnityEngine_Object_o *)WarBoardEventBossUIComponent__GetGameObjectFromEventUIAssetData(
                                                                 v6,
                                                                 v23,
                                                                 v24);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (WarBoardEventBossUIComponent_o *)UnityEngine_Object__op_Equality(GameObjectFromEventUIAssetData, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
        break;
      if ( !GameObjectFromEventUIAssetData )
        goto LABEL_22;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)GameObjectFromEventUIAssetData,
                           (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
        break;
      this = (WarBoardEventBossUIComponent_o *)v6->fields.atlasList;
      if ( !this )
        goto LABEL_22;
      v29 = *(_QWORD *)&this->fields.m_CachedPtr;
      v30 = Method_System_Collections_Generic_List_UIAtlas__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !v29 )
        goto LABEL_22;
      m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v29 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          Component_object,
          *(const MethodInfo_35801DC **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
      }
      else
      {
        v32 = v29 + 8 * m_CancellationTokenSource_low;
        LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v32 + 32) = Component_object;
        sub_1B4CF34((CGThumbnailListItem_o *)(v32 + 32), (int32_t)Component_object, v27, v28);
      }
    }
  }
}


void __fastcall WarBoardEventBossUIComponent__OnClick(WarBoardEventBossUIComponent_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall WarBoardEventBossUIComponent__PlayDaedAnim(
        WarBoardEventBossUIComponent_o *this,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x20
  UnityEngine_Component_o *bossIconSp; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  Il2CppObject *deadAnimPrefab; // x22
  Il2CppObject *v19; // x22
  Il2CppObject *Component_object; // x22
  System_Action_o *v21; // x19
  System_Action_o *v22; // x19
  int32_t v23; // w2
  const MethodInfo *v24; // x3

  if ( (byte_49B892E & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, endAction);
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___, v5);
    sub_1B4CF90(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v7);
    sub_1B4CF90(&Method_WarBoardEventBossUIComponent___c__DisplayClass50_0__PlayDaedAnim_b__0__, v8);
    sub_1B4CF90(&Method_WarBoardEventBossUIComponent___c__DisplayClass50_0__PlayDaedAnim_b__1__, v9);
    sub_1B4CF90(&WarBoardEventBossUIComponent___c__DisplayClass50_0_TypeInfo, v10);
    byte_49B892E = 1;
  }
  v11 = sub_1B4D1DC(WarBoardEventBossUIComponent___c__DisplayClass50_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_13;
  *(_QWORD *)(v11 + 16) = this;
  sub_1B4CF34((CGThumbnailListItem_o *)(v11 + 16), (int32_t)this, v14, v15);
  *(_QWORD *)(v11 + 24) = endAction;
  sub_1B4CF34((CGThumbnailListItem_o *)(v11 + 24), (int32_t)endAction, v16, v17);
  deadAnimPrefab = (Il2CppObject *)this->fields.deadAnimPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v19 = UnityEngine_Object__Instantiate_object_(
          deadAnimPrefab,
          (const MethodInfo_2F87DCC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  GameObjectExtensions__SafeSetParent((UnityEngine_GameObject_o *)v19, (UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__ResetLocalPosition((UnityEngine_GameObject_o *)v19, 0LL);
  if ( !v19 )
    goto LABEL_13;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)v19,
                       (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
  {
    bossIconSp = (UnityEngine_Component_o *)this->fields.bossIconSp;
    if ( bossIconSp )
    {
      bossIconSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(bossIconSp, 0LL);
      if ( bossIconSp )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bossIconSp, 0, 0LL);
        ActionExtensions__Call(*(System_Action_o **)(v11 + 24), 0LL);
        return;
      }
    }
LABEL_13:
    sub_1B4D1EC(bossIconSp, v13);
  }
  v21 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(
    v21,
    (Il2CppObject *)v11,
    Method_WarBoardEventBossUIComponent___c__DisplayClass50_0__PlayDaedAnim_b__0__,
    0LL);
  if ( !Component_object )
    goto LABEL_13;
  CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)Component_object, 0, v21, 0LL);
  v22 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(
    v22,
    (Il2CppObject *)v11,
    Method_WarBoardEventBossUIComponent___c__DisplayClass50_0__PlayDaedAnim_b__1__,
    0LL);
  Component_object[2].monitor = v22;
  sub_1B4CF34((CGThumbnailListItem_o *)&Component_object[2].monitor, (int32_t)v22, v23, v24);
}


void __fastcall WarBoardEventBossUIComponent__PlayHpCut(
        WarBoardEventBossUIComponent_o *this,
        float duration,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x19
  int64_t MaxHpByBreakPoint; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x2
  struct WarBoardUserServantData_o *oldBossInfo; // x8
  int32_t *p_defeatPoint; // x8
  struct WarBoardPieceData_o *bossPieceData; // x8
  int32_t v22; // w1
  __int64 v23; // x8
  struct WarBoardUserServantData_o *v24; // x9
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  EasingObject_o *v29; // x20
  System_Action_o *v30; // x21
  System_Action_o *v31; // x22

  if ( (byte_49B8930 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, endAction);
    sub_1B4CF90(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v7);
    sub_1B4CF90(&Method_WarBoardEventBossUIComponent___c__DisplayClass52_0__PlayHpCut_b__0__, v8);
    sub_1B4CF90(&Method_WarBoardEventBossUIComponent___c__DisplayClass52_0__PlayHpCut_b__1__, v9);
    sub_1B4CF90(&WarBoardEventBossUIComponent___c__DisplayClass52_0_TypeInfo, v10);
    byte_49B8930 = 1;
  }
  v11 = sub_1B4D1DC(WarBoardEventBossUIComponent___c__DisplayClass52_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_20;
  *(_QWORD *)(v11 + 24) = this;
  sub_1B4CF34((CGThumbnailListItem_o *)(v11 + 24), (int32_t)this, v14, v15);
  *(_QWORD *)(v11 + 48) = endAction;
  sub_1B4CF34((CGThumbnailListItem_o *)(v11 + 48), (int32_t)endAction, v16, v17);
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
    v22 = *p_defeatPoint;
    goto LABEL_10;
  }
  v22 = 0;
LABEL_10:
  MaxHpByBreakPoint = WarBoardEventBossUIComponent__GetMaxHpByBreakPoint(this, v22, v18);
  *(_QWORD *)(v11 + 32) = MaxHpByBreakPoint;
  if ( this->fields.isPointBreak || (MaxHpByBreakPoint = (int64_t)this->fields.bossPieceData) == 0 )
  {
    v23 = 0LL;
  }
  else
  {
    MaxHpByBreakPoint = WarBoardPieceData__get_CurrentHp((WarBoardPieceData_o *)MaxHpByBreakPoint, 0LL);
    v23 = (int)MaxHpByBreakPoint;
  }
  *(_QWORD *)(v11 + 40) = v23;
  v24 = this->fields.oldBossInfo;
  if ( !v24 )
    goto LABEL_20;
  if ( v23 == v24->fields.currentHp )
  {
    ActionExtensions__Call(*(System_Action_o **)(v11 + 48), 0LL);
    return;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_2F54F2C *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v11 + 16) = Component_object;
  sub_1B4CF34((CGThumbnailListItem_o *)(v11 + 16), (int32_t)Component_object, v27, v28);
  v29 = *(EasingObject_o **)(v11 + 16);
  v30 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(
    v30,
    (Il2CppObject *)v11,
    Method_WarBoardEventBossUIComponent___c__DisplayClass52_0__PlayHpCut_b__0__,
    0LL);
  v31 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(
    v31,
    (Il2CppObject *)v11,
    Method_WarBoardEventBossUIComponent___c__DisplayClass52_0__PlayHpCut_b__1__,
    0LL);
  if ( !v29 )
LABEL_20:
    sub_1B4D1EC(MaxHpByBreakPoint, v13);
  EasingObject__Play(v29, duration, v30, v31, 0.0, 0, 0LL);
}


void __fastcall WarBoardEventBossUIComponent__PlayHpRecover(
        WarBoardEventBossUIComponent_o *this,
        float duration,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x19
  UIProgressBar_o *hpBarSlider; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x2
  struct WarBoardPieceData_o *bossPieceData; // x8
  int32_t v20; // w1
  float value; // s0
  WarBoardPieceData_o *v22; // x0
  double v23; // d0
  float v24; // s0
  float v25; // s1
  bool v26; // nf
  float v27; // s0
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  EasingObject_o *v32; // x20
  System_Action_o *v33; // x21
  System_Action_o *v34; // x22

  if ( (byte_49B8931 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, endAction);
    sub_1B4CF90(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v7);
    sub_1B4CF90(&Method_WarBoardEventBossUIComponent___c__DisplayClass53_0__PlayHpRecover_b__0__, v8);
    sub_1B4CF90(&Method_WarBoardEventBossUIComponent___c__DisplayClass53_0__PlayHpRecover_b__1__, v9);
    sub_1B4CF90(&WarBoardEventBossUIComponent___c__DisplayClass53_0_TypeInfo, v10);
    byte_49B8931 = 1;
  }
  v11 = sub_1B4D1DC(WarBoardEventBossUIComponent___c__DisplayClass53_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_15;
  *(_QWORD *)(v11 + 24) = this;
  sub_1B4CF34((CGThumbnailListItem_o *)(v11 + 24), (int32_t)this, v14, v15);
  *(_QWORD *)(v11 + 40) = endAction;
  sub_1B4CF34((CGThumbnailListItem_o *)(v11 + 40), (int32_t)endAction, v16, v17);
  bossPieceData = this->fields.bossPieceData;
  v20 = bossPieceData ? bossPieceData->fields._breakPoint_k__BackingField : 0;
  *(_QWORD *)(v11 + 32) = WarBoardEventBossUIComponent__GetMaxHpByBreakPoint(this, v20, v18);
  hpBarSlider = (UIProgressBar_o *)this->fields.hpBarSlider;
  if ( !hpBarSlider )
    goto LABEL_15;
  value = UIProgressBar__get_value(hpBarSlider, 0LL);
  v22 = this->fields.bossPieceData;
  this->fields.HPfrom = value;
  v23 = v22 ? (double)WarBoardPieceData__get_CurrentHp(v22, 0LL) : 0.0;
  v24 = v23 / (double)*(__int64 *)(v11 + 32);
  v25 = fminf(v24, 1.0);
  v26 = v24 < 0.0;
  v27 = 0.0;
  if ( !v26 )
    v27 = v25;
  this->fields.HPto = v27;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_2F54F2C *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v11 + 16) = Component_object;
  sub_1B4CF34((CGThumbnailListItem_o *)(v11 + 16), (int32_t)Component_object, v30, v31);
  v32 = *(EasingObject_o **)(v11 + 16);
  v33 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(
    v33,
    (Il2CppObject *)v11,
    Method_WarBoardEventBossUIComponent___c__DisplayClass53_0__PlayHpRecover_b__0__,
    0LL);
  v34 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(
    v34,
    (Il2CppObject *)v11,
    Method_WarBoardEventBossUIComponent___c__DisplayClass53_0__PlayHpRecover_b__1__,
    0LL);
  if ( !v32 )
LABEL_15:
    sub_1B4D1EC(hpBarSlider, v13);
  EasingObject__Play(v32, duration, v33, v34, 0.0, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardEventBossUIComponent__PlayPointBreakAnim(
        WarBoardEventBossUIComponent_o *this,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x21
  UnityEngine_Component_o *Sprite; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Action_o **v15; // x20
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct WarBoardUserServantData_o *oldBossInfo; // x9
  struct WarBoardEventBossUIComponent_BreakIcon_array *breakIconList; // x8
  unsigned int v20; // w9
  WarBoardEventBossUIComponent_BreakIcon_o *v21; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *pointBreakAnimPrefab; // x22
  UnityEngine_GameObject_o *v24; // x23
  Il2CppObject *v25; // x22
  Il2CppObject *Component_object; // x22
  const MethodInfo *v27; // x2
  struct WarBoardPieceData_o *bossPieceData; // x8
  UILabel_o *totalHpLabel; // x21
  int32_t breakPoint_k__BackingField; // w1
  System_Action_o *v31; // x19
  int v32; // s0
  const MethodInfo *v36; // x3
  struct WarBoardUserServantData_o *currentBossInfo; // x8
  struct WarBoardPieceData_o *v38; // x9
  int32_t v39; // w2

  if ( (byte_49B892F & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, endAction);
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___, v5);
    sub_1B4CF90(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v7);
    sub_1B4CF90(&Method_WarBoardEventBossUIComponent___c__DisplayClass51_0__PlayPointBreakAnim_b__0__, v8);
    sub_1B4CF90(&WarBoardEventBossUIComponent___c__DisplayClass51_0_TypeInfo, v9);
    byte_49B892F = 1;
  }
  v10 = sub_1B4D1DC(WarBoardEventBossUIComponent___c__DisplayClass51_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    goto LABEL_24;
  *(_QWORD *)(v10 + 16) = this;
  sub_1B4CF34((CGThumbnailListItem_o *)(v10 + 16), (int32_t)this, v13, v14);
  *(_QWORD *)(v10 + 24) = endAction;
  v15 = (System_Action_o **)(v10 + 24);
  sub_1B4CF34((CGThumbnailListItem_o *)(v10 + 24), (int32_t)endAction, v16, v17);
  oldBossInfo = this->fields.oldBossInfo;
  if ( !oldBossInfo )
    goto LABEL_24;
  breakIconList = this->fields.breakIconList;
  if ( !breakIconList )
    goto LABEL_24;
  v20 = (oldBossInfo->fields.defeatPoint - 1) & ~((oldBossInfo->fields.defeatPoint - 1) >> 31);
  if ( v20 >= breakIconList->max_length )
    sub_1B4D1F4(Sprite, v12);
  v21 = breakIconList->m_Items[v20];
  if ( !v21 )
    goto LABEL_24;
  Sprite = (UnityEngine_Component_o *)v21->fields.Sprite;
  if ( !Sprite )
    goto LABEL_24;
  gameObject = UnityEngine_Component__get_gameObject(Sprite, 0LL);
  pointBreakAnimPrefab = (Il2CppObject *)this->fields.pointBreakAnimPrefab;
  v24 = gameObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v25 = UnityEngine_Object__Instantiate_object_(
          pointBreakAnimPrefab,
          (const MethodInfo_2F87DCC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  GameObjectExtensions__SafeSetParent_34075504((UnityEngine_GameObject_o *)v25, v24, 0LL);
  GameObjectExtensions__ResetLocalPosition((UnityEngine_GameObject_o *)v25, 0LL);
  if ( !v25 )
    goto LABEL_24;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)v25,
                       (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
  {
    v31 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
    System_Action___ctor(
      v31,
      (Il2CppObject *)v10,
      Method_WarBoardEventBossUIComponent___c__DisplayClass51_0__PlayPointBreakAnim_b__0__,
      0LL);
    if ( Component_object )
    {
      CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)Component_object, 0, v31, 0LL);
      return;
    }
LABEL_24:
    sub_1B4D1EC(Sprite, v12);
  }
  bossPieceData = this->fields.bossPieceData;
  totalHpLabel = this->fields.totalHpLabel;
  if ( bossPieceData )
    breakPoint_k__BackingField = bossPieceData->fields._breakPoint_k__BackingField;
  else
    breakPoint_k__BackingField = 0;
  *(UnityEngine_Color_o *)&v32 = WarBoardEventBossUIComponent__GetTextEffectColor(this, breakPoint_k__BackingField, v27);
  if ( !totalHpLabel )
    goto LABEL_24;
  UILabel__set_effectColor(totalHpLabel, *(UnityEngine_Color_o *)&v32, 0LL);
  currentBossInfo = this->fields.currentBossInfo;
  if ( !currentBossInfo )
    goto LABEL_24;
  v38 = this->fields.bossPieceData;
  if ( v38 )
    v39 = v38->fields._breakPoint_k__BackingField;
  else
    v39 = 0;
  WarBoardEventBossUIComponent__SetupBreakPoint(this, currentBossInfo->fields.maxDefeatPoint, v39, v36);
  this->fields.isPointBreak = 0;
  ActionExtensions__Call(*v15, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardEventBossUIComponent__SetDisp(
        WarBoardEventBossUIComponent_o *this,
        WarBoardDataEntity_o *warBoardDataEntity,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  WarBoardDataEntity_o **p_warBoardDataEnt; // x21
  __int64 defeatPoint; // x1
  __int64 bossIconSp; // x0
  struct WarBoardStageBossEntity_o *warBoardStageBossEnt; // x8
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct WarBoardStageBossEntity_o *v20; // x8
  _DWORD *v21; // x22
  struct WarBoardUserServantData_o *StageBossData; // x1
  struct WarBoardUserServantData_o **p_currentBossInfo; // x20
  struct WarBoardStageBossEntity_o *v24; // x8
  struct WarBoardPieceData_o *EventBossPiece; // x0
  struct WarBoardPieceData_o **p_bossPieceData; // x21
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  WarBoardUserServantData_o *v29; // x24
  struct WarBoardUserServantData_o **p_oldBossInfo; // x23
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  struct WarBoardUserServantData_o *currentBossInfo; // x8
  struct WarBoardUserServantData_o *v36; // x9
  struct System_Int32_array *breakHp; // x1
  const MethodInfo *v38; // x2
  struct WarBoardUserServantData_o *v39; // x8
  struct WarBoardUserServantData_o *v40; // x23
  WarBoardUserServantData_o *v41; // x23
  struct WarBoardUserServantData_o **v42; // x22
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  struct WarBoardUserServantData_o *v47; // x8
  struct WarBoardUserServantData_o *v48; // x9
  struct System_Int32_array *v49; // x1
  struct WarBoardUserServantData_o *v50; // x8
  struct WarBoardPieceData_o *v51; // x8
  struct WarBoardUserServantData_o *oldBossInfo; // x9
  struct WarBoardUserServantData_o *v53; // x8
  double v54; // d0
  float v55; // s1
  float HPfrom; // s0
  struct WarBoardUserServantData_o *v57; // x8
  double v58; // d9
  WarBoardPieceData_o *bossPieceData; // x0
  float v60; // s0
  float v61; // s1
  float v62; // s0
  double v63; // d0
  float v64; // s0
  float v65; // s1
  float v66; // s0
  const MethodInfo *v67; // x2
  struct WarBoardUserServantData_o *v68; // x8
  const MethodInfo *v69; // x3
  struct WarBoardUserServantData_o *v70; // x8
  __int64 v71; // x2
  __int64 v72; // x3
  __int64 v73; // x4
  struct WarBoardStageBossEntity_o *v74; // x8
  int idx; // w25
  UISprite_o *v76; // x20
  Il2CppObject *v77; // x21
  __int64 v78; // x2
  __int64 v79; // x3
  __int64 v80; // x4
  Il2CppObject *v81; // x0
  System_String_o *v82; // x0
  const MethodInfo *v83; // x3
  const MethodInfo *v84; // x3
  const MethodInfo *v85; // x3
  UISprite_o *hpBarUnderSprite; // x20
  __int64 v87; // x2
  __int64 v88; // x3
  __int64 v89; // x4
  Il2CppObject *v90; // x0
  System_String_o *v91; // x0
  const MethodInfo *v92; // x3
  UISprite_o *hpBarUpperSprite; // x20
  __int64 v94; // x2
  __int64 v95; // x3
  __int64 v96; // x4
  Il2CppObject *v97; // x0
  System_String_o *v98; // x0
  const MethodInfo *v99; // x3
  const MethodInfo *v100; // x3
  const MethodInfo *v101; // x2
  struct WarBoardUserServantData_o *v102; // x8
  float v103; // s0
  float v104; // s1
  float v105; // s2
  float v106; // s3
  float v107; // s8
  float v108; // s9
  float v109; // s10
  float v110; // s11
  const MethodInfo *v111; // x2
  struct WarBoardStageBossEntity_o *v112; // x8
  UILabel_o *bossName; // x19
  int v114; // [xsp+0h] [xbp-90h] BYREF
  int v115; // [xsp+4h] [xbp-8Ch] BYREF
  int v116; // [xsp+8h] [xbp-88h] BYREF
  int32_t iconId; // [xsp+Ch] [xbp-84h] BYREF
  UnityEngine_Color_o v118; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49B8925 & 1) == 0 )
  {
    sub_1B4CF90(&int_TypeInfo, warBoardDataEntity);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v6);
    sub_1B4CF90(&WarBoardUserServantData_TypeInfo, v7);
    sub_1B4CF90(&StringLiteral_24354/*"war_board_boss_hp_frame"*/, v8);
    sub_1B4CF90(&StringLiteral_24357/*"war_board_boss_hp_white"*/, v9);
    sub_1B4CF90(&StringLiteral_24356/*"war_board_boss_hp_upper_{0}"*/, v10);
    sub_1B4CF90(&StringLiteral_24358/*"war_board_boss_icon_{0}{1:D2}"*/, v11);
    sub_1B4CF90(&StringLiteral_24353/*"war_board_boss_hp_back"*/, v12);
    sub_1B4CF90(&StringLiteral_24355/*"war_board_boss_hp_lower_{0}"*/, v13);
    byte_49B8925 = 1;
  }
  this->fields.warBoardDataEnt = warBoardDataEntity;
  p_warBoardDataEnt = &this->fields.warBoardDataEnt;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.warBoardDataEnt, (int32_t)warBoardDataEntity, (int32_t)method, v3);
  bossIconSp = (__int64)this->fields.bossIconSp;
  if ( !bossIconSp )
    goto LABEL_67;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)bossIconSp, 1, 0LL);
  bossIconSp = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  warBoardStageBossEnt = this->fields.warBoardStageBossEnt;
  if ( !warBoardStageBossEnt )
    goto LABEL_67;
  if ( !bossIconSp )
    goto LABEL_67;
  bossIconSp = (__int64)WarBoardManager__GetEventBossUILoadData(
                          (WarBoardManager_o *)bossIconSp,
                          warBoardStageBossEnt->fields.idx,
                          0LL);
  v20 = this->fields.warBoardStageBossEnt;
  if ( !v20 )
    goto LABEL_67;
  v21 = (_DWORD *)bossIconSp;
  if ( *p_warBoardDataEnt )
    StageBossData = WarBoardDataEntity__GetStageBossData(*p_warBoardDataEnt, v20->fields.idx, 0LL);
  else
    StageBossData = 0LL;
  this->fields.currentBossInfo = StageBossData;
  p_currentBossInfo = &this->fields.currentBossInfo;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.currentBossInfo, (int32_t)StageBossData, v18, v19);
  if ( this->fields.currentBossInfo )
  {
    bossIconSp = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( bossIconSp )
    {
      v24 = this->fields.warBoardStageBossEnt;
      if ( v24 )
      {
        bossIconSp = *(_QWORD *)(bossIconSp + 440);
        if ( bossIconSp )
        {
          EventBossPiece = WarBoardData__GetEventBossPiece((WarBoardData_o *)bossIconSp, v24->fields.idx, 0LL);
          this->fields.bossPieceData = EventBossPiece;
          p_bossPieceData = &this->fields.bossPieceData;
          sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.bossPieceData, (int32_t)EventBossPiece, v27, v28);
          if ( !v21 || (int)v21[6] < 3 )
            goto LABEL_24;
          if ( !*p_currentBossInfo )
            goto LABEL_67;
          if ( v21[8] == (*p_currentBossInfo)->fields.stageBossIdx )
          {
            v29 = (WarBoardUserServantData_o *)sub_1B4D1DC(WarBoardUserServantData_TypeInfo);
            WarBoardUserServantData___ctor(v29, 0LL);
            this->fields.oldBossInfo = v29;
            p_oldBossInfo = &this->fields.oldBossInfo;
            sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.oldBossInfo, (int32_t)v29, v31, v32);
            currentBossInfo = this->fields.currentBossInfo;
            if ( !currentBossInfo )
              goto LABEL_67;
            v36 = *p_oldBossInfo;
            if ( !*p_oldBossInfo )
              goto LABEL_67;
            v36->fields.stageBossIdx = currentBossInfo->fields.stageBossIdx;
            breakHp = currentBossInfo->fields.breakHp;
            v36->fields.breakHp = breakHp;
            sub_1B4CF34((CGThumbnailListItem_o *)&v36->fields.breakHp, (int32_t)breakHp, v33, v34);
            v39 = *p_currentBossInfo;
            if ( !*p_currentBossInfo )
              goto LABEL_67;
            v40 = *p_oldBossInfo;
            if ( !v40 )
              goto LABEL_67;
            v40->fields.maxDefeatPoint = v39->fields.maxDefeatPoint;
            if ( v21[6] <= 2u )
              sub_1B4D1F4(bossIconSp, defeatPoint);
            v40->fields.defeatPoint = v21[10];
            v40->fields.hp = v39->fields.hp;
            bossIconSp = (unsigned int)v21[9];
          }
          else
          {
LABEL_24:
            v41 = (WarBoardUserServantData_o *)sub_1B4D1DC(WarBoardUserServantData_TypeInfo);
            WarBoardUserServantData___ctor(v41, 0LL);
            this->fields.oldBossInfo = v41;
            v42 = &this->fields.oldBossInfo;
            sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.oldBossInfo, (int32_t)v41, v43, v44);
            v47 = this->fields.currentBossInfo;
            if ( !v47 )
              goto LABEL_67;
            v48 = *v42;
            if ( !*v42 )
              goto LABEL_67;
            v48->fields.stageBossIdx = v47->fields.stageBossIdx;
            v49 = v47->fields.breakHp;
            v48->fields.breakHp = v49;
            sub_1B4CF34((CGThumbnailListItem_o *)&v48->fields.breakHp, (int32_t)v49, v45, v46);
            v50 = *p_currentBossInfo;
            if ( !*p_currentBossInfo )
              goto LABEL_67;
            v40 = *v42;
            if ( !*v42 )
              goto LABEL_67;
            v40->fields.maxDefeatPoint = v50->fields.maxDefeatPoint;
            bossIconSp = (__int64)*p_bossPieceData;
            if ( *p_bossPieceData )
            {
              v40->fields.defeatPoint = *(_DWORD *)(bossIconSp + 52);
              v40->fields.hp = v50->fields.hp;
              bossIconSp = WarBoardPieceData__get_CurrentHp((WarBoardPieceData_o *)bossIconSp, 0LL);
            }
            else
            {
              v40->fields.defeatPoint = 0;
              v40->fields.hp = v50->fields.hp;
            }
          }
          v40->fields.currentHp = bossIconSp;
          v51 = *p_bossPieceData;
          if ( *p_bossPieceData )
            LODWORD(v51) = v51->fields._breakPoint_k__BackingField;
          oldBossInfo = this->fields.oldBossInfo;
          if ( oldBossInfo )
          {
            defeatPoint = (unsigned int)oldBossInfo->fields.defeatPoint;
            this->fields.isPointBreak = (int)v51 < (int)defeatPoint;
            if ( (int)v51 < (int)defeatPoint )
            {
              bossIconSp = WarBoardEventBossUIComponent__GetMaxHpByBreakPoint(this, defeatPoint, v38);
              v53 = this->fields.oldBossInfo;
              if ( !v53 )
                goto LABEL_67;
              v54 = (double)bossIconSp;
              bossIconSp = (__int64)this->fields.hpBarSlider;
              *(float *)&v54 = (double)v53->fields.currentHp / v54;
              v55 = fminf(*(float *)&v54, 1.0);
              HPfrom = *(float *)&v54 < 0.0 ? 0.0 : v55;
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
                             v38);
              v57 = this->fields.oldBossInfo;
              if ( v57 )
              {
                v58 = (double)bossIconSp;
                bossPieceData = this->fields.bossPieceData;
                v60 = (double)v57->fields.currentHp / v58;
                v61 = fminf(v60, 1.0);
                v62 = v60 < 0.0 ? 0.0 : v61;
                this->fields.HPfrom = v62;
                v63 = bossPieceData ? (double)WarBoardPieceData__get_CurrentHp(bossPieceData, 0LL) : 0.0;
                bossIconSp = (__int64)this->fields.hpBarSlider;
                v64 = v63 / v58;
                v65 = fminf(v64, 1.0);
                v66 = v64 < 0.0 ? 0.0 : v65;
                this->fields.HPto = v66;
                if ( bossIconSp )
                {
                  HPfrom = this->fields.HPfrom;
LABEL_57:
                  UIProgressBar__set_value((UIProgressBar_o *)bossIconSp, HPfrom, 0LL);
                  v68 = this->fields.oldBossInfo;
                  if ( !v68 )
                    goto LABEL_67;
                  WarBoardEventBossUIComponent__SetTotalHpText(this, v68->fields.currentHp, v67);
                  bossIconSp = (__int64)this->fields.hpBarSliderUnder;
                  if ( !bossIconSp )
                    goto LABEL_67;
                  UIProgressBar__set_value((UIProgressBar_o *)bossIconSp, 0.0, 0LL);
                  v70 = this->fields.oldBossInfo;
                  if ( !v70 )
                    goto LABEL_67;
                  WarBoardEventBossUIComponent__SetupBreakPoint(
                    this,
                    v70->fields.maxDefeatPoint,
                    v70->fields.defeatPoint,
                    v69);
                  v74 = this->fields.warBoardStageBossEnt;
                  if ( !v74 )
                    goto LABEL_67;
                  idx = v74->fields.idx;
                  v76 = this->fields.bossIconSp;
                  iconId = v74->fields.iconId;
                  v77 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId, v71, v72, v73);
                  v116 = idx;
                  v81 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v116, v78, v79, v80);
                  v82 = System_String__Format_61134760((System_String_o *)StringLiteral_24358/*"war_board_boss_icon_{0}{1:D2}"*/, v77, v81, 0LL);
                  WarBoardEventBossUIComponent__SetSpriteByLocalAtlas(this, v76, v82, v83);
                  WarBoardEventBossUIComponent__SetSpriteByLocalAtlas(
                    this,
                    this->fields.bossHpFrame,
                    (System_String_o *)StringLiteral_24354/*"war_board_boss_hp_frame"*/,
                    v84);
                  WarBoardEventBossUIComponent__SetSpriteByLocalAtlas(
                    this,
                    this->fields.bossHpBg,
                    (System_String_o *)StringLiteral_24353/*"war_board_boss_hp_back"*/,
                    v85);
                  hpBarUnderSprite = this->fields.hpBarUnderSprite;
                  v115 = idx;
                  v90 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v115, v87, v88, v89);
                  v91 = System_String__Format((System_String_o *)StringLiteral_24355/*"war_board_boss_hp_lower_{0}"*/, v90, 0LL);
                  WarBoardEventBossUIComponent__SetSpriteByLocalAtlas(this, hpBarUnderSprite, v91, v92);
                  hpBarUpperSprite = this->fields.hpBarUpperSprite;
                  v114 = idx;
                  v97 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v114, v94, v95, v96);
                  v98 = System_String__Format((System_String_o *)StringLiteral_24356/*"war_board_boss_hp_upper_{0}"*/, v97, 0LL);
                  WarBoardEventBossUIComponent__SetSpriteByLocalAtlas(this, hpBarUpperSprite, v98, v99);
                  bossIconSp = WarBoardEventBossUIComponent__SetSpriteByLocalAtlas(
                                 this,
                                 this->fields.hpBarWhiteSprite,
                                 (System_String_o *)StringLiteral_24357/*"war_board_boss_hp_white"*/,
                                 v100);
                  v102 = this->fields.oldBossInfo;
                  if ( !v102 )
                    goto LABEL_67;
                  *(UnityEngine_Color_o *)&v103 = WarBoardEventBossUIComponent__GetTextEffectColor(
                                                    this,
                                                    v102->fields.defeatPoint,
                                                    v101);
                  bossIconSp = (__int64)this->fields.totalHpLabel;
                  if ( !bossIconSp )
                    goto LABEL_67;
                  v107 = v103;
                  v108 = v104;
                  v109 = v105;
                  v110 = v106;
                  UILabel__set_effectColor((UILabel_o *)bossIconSp, *(UnityEngine_Color_o *)&v103, 0LL);
                  bossIconSp = (__int64)this->fields.bossName;
                  if ( !bossIconSp )
                    goto LABEL_67;
                  v118.fields.r = v107;
                  v118.fields.g = v108;
                  v118.fields.b = v109;
                  v118.fields.a = v110;
                  UILabel__set_effectColor((UILabel_o *)bossIconSp, v118, 0LL);
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
                  UILabel__set_text(bossName, (System_String_o *)bossIconSp, 0LL);
                  return;
                }
              }
            }
          }
        }
      }
    }
LABEL_67:
    sub_1B4D1EC(bossIconSp, defeatPoint);
  }
  bossIconSp = (__int64)this->fields.bossIconSp;
  if ( !bossIconSp )
    goto LABEL_67;
  bossIconSp = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bossIconSp, 0LL);
  if ( !bossIconSp )
    goto LABEL_67;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bossIconSp, 0, 0LL);
}


bool __fastcall WarBoardEventBossUIComponent__SetSpriteByLocalAtlas(
        WarBoardEventBossUIComponent_o *this,
        UISprite_o *sprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct System_Collections_Generic_List_UIAtlas__o *IsNullOrEmpty; // x0
  __int64 v12; // x1
  _BOOL8 v13; // x0
  __int64 v14; // x1
  Il2CppObject *current; // x21
  UISpriteData_o *v16; // x0
  __int64 v17; // x1
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_49B892D & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Linq_Enumerable_Any_UIAtlas___, sprite);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__get_Current__, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__, v10);
    byte_49B892D = 1;
  }
  memset(&v20, 0, sizeof(v20));
  IsNullOrEmpty = (struct System_Collections_Generic_List_UIAtlas__o *)System_String__IsNullOrEmpty(spriteName, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0
    || (IsNullOrEmpty = (struct System_Collections_Generic_List_UIAtlas__o *)System_Linq_Enumerable__Any_object_(
                                                                               (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.atlasList,
                                                                               (const MethodInfo_2F0F4B0 *)Method_System_Linq_Enumerable_Any_UIAtlas___),
        ((unsigned __int8)IsNullOrEmpty & 1) == 0) )
  {
    if ( sprite )
    {
      UISprite__set_spriteName(sprite, 0LL, 0LL);
      return 1;
    }
    goto LABEL_19;
  }
  IsNullOrEmpty = this->fields.atlasList;
  if ( !IsNullOrEmpty )
    goto LABEL_19;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v19,
    (System_Collections_Generic_List_object__o *)IsNullOrEmpty,
    (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
  v20 = v19;
  do
  {
    v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v20,
            (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    if ( !v13 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v20,
        (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
      if ( sprite )
      {
        UISprite__set_spriteName(sprite, 0LL, 0LL);
        return 0;
      }
LABEL_19:
      sub_1B4D1EC(IsNullOrEmpty, v12);
    }
    current = v20.fields._current;
    if ( !v20.fields._current )
      sub_1B4D1EC(v13, v14);
    v16 = UIAtlas__GetSprite((UIAtlas_o *)v20.fields._current, spriteName, 0LL);
  }
  while ( !v16 );
  if ( !sprite )
    sub_1B4D1EC(v16, v17);
  UISprite__set_atlas(sprite, (UIAtlas_o *)current, 0LL);
  UISprite__set_spriteName(sprite, spriteName, 0LL);
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v20,
    (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
  return 1;
}


void __fastcall WarBoardEventBossUIComponent__SetTotalHpText(
        WarBoardEventBossUIComponent_o *this,
        int64_t hp,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UILabel_o *totalHpLabel; // x20
  System_String_o *v8; // x21
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  Il2CppObject *v12; // x0
  System_String_o *v13; // x0
  __int64 v14; // x1
  int64_t v15; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49B8926 & 1) == 0 )
  {
    sub_1B4CF90(&long_TypeInfo, hp);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v5);
    sub_1B4CF90(&StringLiteral_3675/*"COMMON_NUM_FORMAT"*/, v6);
    byte_49B8926 = 1;
  }
  totalHpLabel = this->fields.totalHpLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_3675/*"COMMON_NUM_FORMAT"*/, 0LL);
  v15 = hp;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v15, v9, v10, v11);
  v13 = System_String__Format(v8, v12, 0LL);
  if ( !totalHpLabel )
    sub_1B4D1EC(v13, v14);
  UILabel__set_text(totalHpLabel, v13, 0LL);
}


void __fastcall WarBoardEventBossUIComponent__Setup(
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
  sub_1B4CF34(
    (CGThumbnailListItem_o *)&this->fields.warBoardStageBossEnt,
    (int32_t)warBoardStageBossEnt,
    (int32_t)warBoardStageBossEnt,
    (const MethodInfo *)warBoardDataEnt);
  this->fields.assetData = assetData;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.assetData, (int32_t)assetData, v11, v12);
  WarBoardEventBossUIComponent__LoadLocalAtlas(this, eventId, v13);
  WarBoardEventBossUIComponent__LoadAnimPrefab(this, *p_warBoardStageBossEnt, v14);
  WarBoardEventBossUIComponent__SetDisp(this, warBoardDataEnt, v15);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardEventBossUIComponent__SetupBreakPoint(
        WarBoardEventBossUIComponent_o *this,
        int32_t maxCount,
        int32_t restCount,
        const MethodInfo *method)
{
  long double v4; // q0
  struct WarBoardEventBossUIComponent_BreakIcon_array *breakIconList; // x8
  int max_length; // w22
  WarBoardEventBossUIComponent_o *v8; // x19
  il2cpp_array_size_t v9; // w20
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
      sub_1B4D1EC(this, *(_QWORD *)&maxCount);
    }
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= breakIconList->max_length )
        goto LABEL_34;
      v15 = breakIconList->m_Items[v14];
      if ( !v15 )
        goto LABEL_33;
      this = (WarBoardEventBossUIComponent_o *)v15->fields.Sprite;
      if ( !this )
        goto LABEL_33;
      this = (WarBoardEventBossUIComponent_o *)((__int64 (__fastcall *)(WarBoardEventBossUIComponent_o *, Il2CppClass *, float))this->klass[1]._1.castClass)(
                                                 this,
                                                 this->klass[1]._1.declaringType,
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
    this = (WarBoardEventBossUIComponent_o *)((__int64 (__fastcall *)(WarBoardEventBossUIComponent_o *, Il2CppClass *, float))this->klass[1]._1.castClass)(
                                               this,
                                               this->klass[1]._1.declaringType,
                                               1.0);
    goto LABEL_22;
  }
  if ( max_length >= 1 )
  {
    v9 = 0;
    while ( v9 < breakIconList->max_length )
    {
      v10 = breakIconList->m_Items[v9];
      if ( v10 )
      {
        this = (WarBoardEventBossUIComponent_o *)v10->fields.Sprite;
        if ( this )
        {
          this = (WarBoardEventBossUIComponent_o *)((__int64 (__fastcall *)(WarBoardEventBossUIComponent_o *, Il2CppClass *, float))this->klass[1]._1.castClass)(
                                                     this,
                                                     this->klass[1]._1.declaringType,
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
    sub_1B4D1F4(this, *(_QWORD *)&maxCount);
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
  ((void (__fastcall *)(long double))klass[1]._1.castClass)(v4);
}


void __fastcall WarBoardEventBossUIComponent__UpdateOldBossData(
        WarBoardEventBossUIComponent_o *this,
        const MethodInfo *method)
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
        CurrentHp = WarBoardPieceData__get_CurrentHp(bossPieceData, 0LL);
        v8 = this->fields.bossPieceData;
        v9 = this->fields.oldBossInfo;
        oldBossInfo->fields.currentHp = CurrentHp;
        if ( v8 )
          LODWORD(v8) = v8->fields._breakPoint_k__BackingField;
        if ( !v9 )
          sub_1B4D1EC(CurrentHp, v7);
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


int32_t __fastcall WarBoardEventBossUIComponent__get_CurrentBossHp(
        WarBoardEventBossUIComponent_o *this,
        const MethodInfo *method)
{
  WarBoardPieceData_o *bossPieceData; // x0

  bossPieceData = this->fields.bossPieceData;
  if ( bossPieceData )
    LODWORD(bossPieceData) = WarBoardPieceData__get_CurrentHp(bossPieceData, 0LL);
  return (int)bossPieceData;
}


int32_t __fastcall WarBoardEventBossUIComponent__get_CurrentDefeatPoint(
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


int32_t __fastcall WarBoardEventBossUIComponent__get_StageBossIdx(
        WarBoardEventBossUIComponent_o *this,
        const MethodInfo *method)
{
  struct WarBoardStageBossEntity_o *warBoardStageBossEnt; // x8

  warBoardStageBossEnt = this->fields.warBoardStageBossEnt;
  if ( warBoardStageBossEnt )
    return warBoardStageBossEnt->fields.idx;
  else
    return 0;
}


void __fastcall WarBoardEventBossUIComponent_BreakIcon___ctor(
        WarBoardEventBossUIComponent_BreakIcon_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardEventBossUIComponent___c__DisplayClass35_0___ctor(
        WarBoardEventBossUIComponent___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardEventBossUIComponent___c__DisplayClass35_0___GetStageBossName_b__0(
        WarBoardEventBossUIComponent___c__DisplayClass35_0_o *this,
        WarBoardPieceData_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1B4D1EC(this, 0LL);
  return WarBoardPieceData__get_StageBossIdx(n, 0LL) == this->fields.stageBossIndex;
}


void __fastcall WarBoardEventBossUIComponent___c__DisplayClass50_0___ctor(
        WarBoardEventBossUIComponent___c__DisplayClass50_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardEventBossUIComponent___c__DisplayClass50_0___PlayDaedAnim_b__0(
        WarBoardEventBossUIComponent___c__DisplayClass50_0_o *this,
        const MethodInfo *method)
{
  struct WarBoardEventBossUIComponent_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (this = (WarBoardEventBossUIComponent___c__DisplayClass50_0_o *)_4__this->fields.bossIconSp) == 0LL
    || (this = (WarBoardEventBossUIComponent___c__DisplayClass50_0_o *)UnityEngine_Component__get_gameObject(
                                                                         (UnityEngine_Component_o *)this,
                                                                         0LL)) == 0LL )
  {
    sub_1B4D1EC(this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


void __fastcall WarBoardEventBossUIComponent___c__DisplayClass50_0___PlayDaedAnim_b__1(
        WarBoardEventBossUIComponent___c__DisplayClass50_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.endAction, 0LL);
}


void __fastcall WarBoardEventBossUIComponent___c__DisplayClass51_0___ctor(
        WarBoardEventBossUIComponent___c__DisplayClass51_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardEventBossUIComponent___c__DisplayClass51_0___PlayPointBreakAnim_b__0(
        WarBoardEventBossUIComponent___c__DisplayClass51_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct WarBoardEventBossUIComponent_o *_4__this; // x0
  struct WarBoardPieceData_o *bossPieceData; // x8
  UILabel_o *totalHpLabel; // x20
  int32_t v7; // w1
  int v8; // s0
  const MethodInfo *v12; // x3
  struct WarBoardUserServantData_o *currentBossInfo; // x8
  struct WarBoardPieceData_o *v14; // x9
  int32_t v15; // w2
  struct WarBoardEventBossUIComponent_o *v16; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  bossPieceData = _4__this->fields.bossPieceData;
  totalHpLabel = _4__this->fields.totalHpLabel;
  v7 = bossPieceData ? bossPieceData->fields._breakPoint_k__BackingField : 0;
  *(UnityEngine_Color_o *)&v8 = WarBoardEventBossUIComponent__GetTextEffectColor(_4__this, v7, v2);
  if ( !totalHpLabel )
    goto LABEL_13;
  UILabel__set_effectColor(totalHpLabel, *(UnityEngine_Color_o *)&v8, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  currentBossInfo = _4__this->fields.currentBossInfo;
  if ( !currentBossInfo )
    goto LABEL_13;
  v14 = _4__this->fields.bossPieceData;
  v15 = v14 ? v14->fields._breakPoint_k__BackingField : 0;
  WarBoardEventBossUIComponent__SetupBreakPoint(_4__this, currentBossInfo->fields.maxDefeatPoint, v15, v12);
  v16 = this->fields.__4__this;
  if ( !v16 )
LABEL_13:
    sub_1B4D1EC(_4__this, method);
  v16->fields.isPointBreak = 0;
  ActionExtensions__Call(this->fields.endAction, 0LL);
}


void __fastcall WarBoardEventBossUIComponent___c__DisplayClass52_0___ctor(
        WarBoardEventBossUIComponent___c__DisplayClass52_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardEventBossUIComponent___c__DisplayClass52_0___PlayHpCut_b__0(
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
        UIProgressBar__set_value((UIProgressBar_o *)this, v9, 0LL),
        (this = (WarBoardEventBossUIComponent___c__DisplayClass52_0_o *)v4->fields.__4__this) == 0LL) )
  {
LABEL_11:
    sub_1B4D1EC(this, method);
  }
  v11 = v9 * (double)v4->fields.maxHp;
  if ( v11 == INFINITY )
    v12 = 0x8000000000000000LL;
  else
    v12 = (__int64)v11;
  WarBoardEventBossUIComponent__SetTotalHpText((WarBoardEventBossUIComponent_o *)this, v12, v10);
}


void __fastcall WarBoardEventBossUIComponent___c__DisplayClass52_0___PlayHpCut_b__1(
        WarBoardEventBossUIComponent___c__DisplayClass52_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  WarBoardEventBossUIComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B4D1EC(0LL, method);
  WarBoardEventBossUIComponent__SetTotalHpText(_4__this, this->fields.totalHp, v2);
  ActionExtensions__Call(this->fields.endAction, 0LL);
}


void __fastcall WarBoardEventBossUIComponent___c__DisplayClass53_0___ctor(
        WarBoardEventBossUIComponent___c__DisplayClass53_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardEventBossUIComponent___c__DisplayClass53_0___PlayHpRecover_b__0(
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
        UIProgressBar__set_value((UIProgressBar_o *)this, v9, 0LL),
        (this = (WarBoardEventBossUIComponent___c__DisplayClass53_0_o *)v4->fields.__4__this) == 0LL) )
  {
LABEL_11:
    sub_1B4D1EC(this, method);
  }
  v11 = v9 * (double)v4->fields.maxHp;
  if ( v11 == INFINITY )
    v12 = 0x8000000000000000LL;
  else
    v12 = (__int64)v11;
  WarBoardEventBossUIComponent__SetTotalHpText((WarBoardEventBossUIComponent_o *)this, v12, v10);
}


void __fastcall WarBoardEventBossUIComponent___c__DisplayClass53_0___PlayHpRecover_b__1(
        WarBoardEventBossUIComponent___c__DisplayClass53_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct WarBoardEventBossUIComponent_o *_4__this; // x20
  WarBoardPieceData_o *bossPieceData; // x0
  int64_t CurrentHp; // x1

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B4D1EC(this, method);
  bossPieceData = _4__this->fields.bossPieceData;
  if ( bossPieceData )
    CurrentHp = WarBoardPieceData__get_CurrentHp(bossPieceData, 0LL);
  else
    CurrentHp = 0LL;
  WarBoardEventBossUIComponent__SetTotalHpText(_4__this, CurrentHp, v2);
  ActionExtensions__Call(this->fields.endAction, 0LL);
}