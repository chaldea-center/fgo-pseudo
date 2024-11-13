void __fastcall WarBoardEventBossUIComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  int64_t v12; // x1
  struct WarBoardEventBossUIComponent_StaticFields *static_fields; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4B13C6B & 1) == 0 )
  {
    sub_1BCA7E0(&WarBoardEventBossUIComponent_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_15749/*"WarBoardEventBossEffect_Break{0}"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_15750/*"WarBoardEventBossEffect_Dead{0}"*/, v10, v11);
    byte_4B13C6B = 1;
  }
  WarBoardEventBossUIComponent_TypeInfo->static_fields->BOSS_CLEAR_EFFECT_PREFAB = (struct System_String_o *)StringLiteral_15750/*"WarBoardEventBossEffect_Dead{0}"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)WarBoardEventBossUIComponent_TypeInfo->static_fields,
    StringLiteral_15750/*"WarBoardEventBossEffect_Dead{0}"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v12 = StringLiteral_15749/*"WarBoardEventBossEffect_Break{0}"*/;
  static_fields = WarBoardEventBossUIComponent_TypeInfo->static_fields;
  static_fields->BOSS_POINT_BREAK_EFFECT_PREFAB = (struct System_String_o *)StringLiteral_15749/*"WarBoardEventBossEffect_Break{0}"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&static_fields->BOSS_POINT_BREAK_EFFECT_PREFAB,
    v12,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
}


void __fastcall WarBoardEventBossUIComponent___ctor(WarBoardEventBossUIComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_List_object__o *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B13C6A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UIAtlas___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_List_UIAtlas__TypeInfo, v5, v6);
    byte_4B13C6A = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_UIAtlas__TypeInfo,
                                                      method,
                                                      v2,
                                                      v3);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UIAtlas___ctor__);
  this->fields.atlasList = (struct System_Collections_Generic_List_UIAtlas__o *)v7;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.atlasList, (int64_t)v7, v8, v9, v10, v11, v12, v13);
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

  if ( (byte_4B13C69 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Convert_TypeInfo, hexStrColor, method);
    byte_4B13C69 = 1;
  }
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, hexStrColor);
  v4 = System_Convert__ToInt32_63068352(hexStrColor, 16, 0LL);
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Text_StringBuilder_o *v9; // x20
  System_Text_StringBuilder_o *appended; // x0
  __int64 v11; // x1
  struct WarBoardUserServantData_o *oldBossInfo; // x8
  struct WarBoardUserServantData_o *v13; // x8
  struct WarBoardUserServantData_o *v14; // x8

  if ( (byte_4B13C68 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Text_StringBuilder_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_1541/*":"*/, v5, v6);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v7, v8);
    byte_4B13C68 = 1;
  }
  if ( !this->fields.oldBossInfo )
    return (System_String_o *)StringLiteral_1/*""*/;
  v9 = (System_Text_StringBuilder_o *)sub_1BCAA2C(System_Text_StringBuilder_TypeInfo, method, v2, v3);
  System_Text_StringBuilder___ctor(v9, 0LL);
  oldBossInfo = this->fields.oldBossInfo;
  if ( !oldBossInfo
    || !v9
    || (System_Text_StringBuilder__Append_61565612(v9, oldBossInfo->fields.stageBossIdx, 0LL),
        appended = System_Text_StringBuilder__Append_61563116(v9, (System_String_o *)StringLiteral_1541/*":"*/, 0LL),
        (v13 = this->fields.oldBossInfo) == 0LL)
    || (System_Text_StringBuilder__Append_61565612(v9, v13->fields.currentHp, 0LL),
        appended = System_Text_StringBuilder__Append_61563116(v9, (System_String_o *)StringLiteral_1541/*":"*/, 0LL),
        (v14 = this->fields.oldBossInfo) == 0LL) )
  {
    sub_1BCAA3C(appended, v11);
  }
  System_Text_StringBuilder__Append_61565612(v9, v14->fields.defeatPoint, 0LL);
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v9->klass->vtable._3_ToString.method)(
                              v9,
                              v9->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
}


UnityEngine_GameObject_o *__fastcall WarBoardEventBossUIComponent__GetGameObjectFromEventUIAssetData(
        WarBoardEventBossUIComponent_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *result; // x0

  if ( (byte_4B13C60 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, name, method);
    byte_4B13C60 = 1;
  }
  result = (UnityEngine_GameObject_o *)this->fields.assetData;
  if ( result )
    return (UnityEngine_GameObject_o *)AssetData__GetObject_object__49237568(
                                         (AssetData_o *)result,
                                         name,
                                         (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
  return result;
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall WarBoardEventBossUIComponent__GetMaxHpByBreakPoint(
        WarBoardEventBossUIComponent_o *this,
        int32_t restBreakPoint,
        const MethodInfo *method)
{
  struct WarBoardUserServantData_o *currentBossInfo; // x8

  if ( (byte_4B13C5F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_IndexValue_int____76842096, *(_QWORD *)&restBreakPoint, method);
    byte_4B13C5F = 1;
  }
  currentBossInfo = this->fields.currentBossInfo;
  if ( currentBossInfo )
    return BasicHelper__IndexValue_int_(
             currentBossInfo->fields.breakHp,
             restBreakPoint,
             currentBossInfo->fields.hp,
             (const MethodInfo_2F01774 *)Method_BasicHelper_IndexValue_int____76842096);
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
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x20
  Il2CppObject *Instance; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  _QWORD *monitor; // x8
  __int64 v21; // x19
  System_Func_object__bool__o *v22; // x21
  Il2CppObject *object; // x0
  BattleServantData_o *klass; // x0

  if ( (byte_4B13C5D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Find_WarBoardPieceData___, *(_QWORD *)&stageBossIndex, method);
    sub_1BCA7E0(&System_Func_WarBoardPieceData__bool__TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v7, v8);
    sub_1BCA7E0(&string_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_WarBoardEventBossUIComponent___c__DisplayClass35_0__GetStageBossName_b__0__, v11, v12);
    sub_1BCA7E0(&WarBoardEventBossUIComponent___c__DisplayClass35_0_TypeInfo, v13, v14);
    byte_4B13C5D = 1;
  }
  v15 = sub_1BCAA2C(WarBoardEventBossUIComponent___c__DisplayClass35_0_TypeInfo, *(_QWORD *)&stageBossIndex, method, v3);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15
    || (*(_DWORD *)(v15 + 16) = stageBossIndex,
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL)
    || (monitor = Instance[27].monitor) == 0LL )
  {
    sub_1BCAA3C(Instance, v17);
  }
  v21 = monitor[6];
  if ( v21
    && *(_QWORD *)(v21 + 24)
    && (v22 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_WarBoardPieceData__bool__TypeInfo, v17, v18, v19),
        System_Func_object__bool____ctor(
          v22,
          (Il2CppObject *)v15,
          Method_WarBoardEventBossUIComponent___c__DisplayClass35_0__GetStageBossName_b__0__,
          0LL),
        (object = BasicHelper__Find_object_(
                    (System_Object_array *)v21,
                    (System_Func_T__bool__o *)v22,
                    (const MethodInfo_2EFE860 *)Method_BasicHelper_Find_WarBoardPieceData___)) != 0LL)
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  struct WarBoardStageBossEntity_o *warBoardStageBossEnt; // x0
  Il2CppObject *bossColor; // x20
  System_String_array *TextEffectColors; // x0
  Il2CppObject *v12; // x0
  const MethodInfo *v13; // x2
  float v14; // s0
  float v15; // s1
  float v16; // s2
  float v17; // s3
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B13C5E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_IndexValue_string___, *(_QWORD *)&restBreakPoint, method);
    sub_1BCA7E0(&string___TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_1259/*"0x000000"*/, v7, v8);
    byte_4B13C5E = 1;
  }
  warBoardStageBossEnt = this->fields.warBoardStageBossEnt;
  if ( warBoardStageBossEnt )
  {
    bossColor = (Il2CppObject *)warBoardStageBossEnt->fields.bossColor;
    TextEffectColors = WarBoardStageBossEntity__GetTextEffectColors(warBoardStageBossEnt, 0LL);
  }
  else
  {
    bossColor = (Il2CppObject *)StringLiteral_1259/*"0x000000"*/;
    TextEffectColors = (System_String_array *)sub_1BCA888(string___TypeInfo, 0LL);
  }
  v12 = BasicHelper__IndexValue_object_(
          (System_Object_array *)TextEffectColors,
          restBreakPoint - 1,
          bossColor,
          (const MethodInfo_2F01858 *)Method_BasicHelper_IndexValue_string___);
  *(UnityEngine_Color_o *)&v14 = WarBoardEventBossUIComponent__ConvertHexToColor(
                                   (WarBoardEventBossUIComponent_o *)v12,
                                   (System_String_o *)v12,
                                   v13);
  result.fields.a = v17;
  result.fields.b = v16;
  result.fields.g = v15;
  result.fields.r = v14;
  return result;
}


void __fastcall WarBoardEventBossUIComponent__LoadAnimPrefab(
        WarBoardEventBossUIComponent_o *this,
        WarBoardStageBossEntity_o *ent,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  WarBoardEventBossUIComponent_c *v7; // x0
  System_String_o *BOSS_CLEAR_EFFECT_PREFAB; // x21
  Il2CppObject *v9; // x0
  System_String_o *v10; // x0
  const MethodInfo *v11; // x2
  struct UnityEngine_GameObject_o *GameObjectFromEventUIAssetData; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int32_t v19; // w9
  System_String_o *BOSS_POINT_BREAK_EFFECT_PREFAB; // x20
  Il2CppObject *v21; // x0
  System_String_o *v22; // x0
  const MethodInfo *v23; // x2
  struct UnityEngine_GameObject_o *v24; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int32_t v31; // [xsp+8h] [xbp-38h] BYREF
  int32_t defeatEffectId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B13C61 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, ent, method);
    sub_1BCA7E0(&WarBoardEventBossUIComponent_TypeInfo, v5, v6);
    byte_4B13C61 = 1;
  }
  if ( ent )
  {
    v7 = WarBoardEventBossUIComponent_TypeInfo;
    if ( !WarBoardEventBossUIComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardEventBossUIComponent_TypeInfo, ent);
      v7 = WarBoardEventBossUIComponent_TypeInfo;
    }
    BOSS_CLEAR_EFFECT_PREFAB = v7->static_fields->BOSS_CLEAR_EFFECT_PREFAB;
    defeatEffectId = ent->fields.defeatEffectId;
    v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &defeatEffectId);
    v10 = System_String__Format(BOSS_CLEAR_EFFECT_PREFAB, v9, 0LL);
    GameObjectFromEventUIAssetData = WarBoardEventBossUIComponent__GetGameObjectFromEventUIAssetData(this, v10, v11);
    this->fields.deadAnimPrefab = GameObjectFromEventUIAssetData;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.deadAnimPrefab,
      (int64_t)GameObjectFromEventUIAssetData,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    v19 = ent->fields.defeatEffectId;
    BOSS_POINT_BREAK_EFFECT_PREFAB = WarBoardEventBossUIComponent_TypeInfo->static_fields->BOSS_POINT_BREAK_EFFECT_PREFAB;
    v31 = v19;
    v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31);
    v22 = System_String__Format(BOSS_POINT_BREAK_EFFECT_PREFAB, v21, 0LL);
    v24 = WarBoardEventBossUIComponent__GetGameObjectFromEventUIAssetData(this, v22, v23);
    this->fields.pointBreakAnimPrefab = v24;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.pointBreakAnimPrefab,
      (int64_t)v24,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardEventBossUIComponent__LoadLocalAtlas(
        WarBoardEventBossUIComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  WarBoardEventBossUIComponent_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  struct System_Collections_Generic_List_UIAtlas__o *atlasList; // x8
  int32_t size; // w2
  int v19; // w9
  int i; // w28
  Il2CppObject *v21; // x0
  Il2CppObject *v22; // x21
  Il2CppObject *v23; // x0
  System_String_o *v24; // x0
  const MethodInfo *v25; // x2
  __int64 v26; // x1
  UnityEngine_Object_o *GameObjectFromEventUIAssetData; // x21
  __int64 v28; // x1
  Il2CppObject *Component_object; // x21
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  __int64 v36; // x8
  _QWORD *v37; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v39; // x8
  int32_t v40; // [xsp+8h] [xbp-58h] BYREF
  int v41; // [xsp+Ch] [xbp-54h] BYREF

  v4 = this;
  if ( (byte_4B13C62 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, *(_QWORD *)&eventId, method);
    sub_1BCA7E0(&int_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UIAtlas__Add__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UIAtlas__Clear__, v9, v10);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    sub_1BCA7E0(&StringLiteral_25200/*"{0:D2}"*/, v13, v14);
    this = (WarBoardEventBossUIComponent_o *)sub_1BCA7E0(&StringLiteral_5455/*"DownloadEventUIAtlas{0}{1}"*/, v15, v16);
    byte_4B13C62 = 1;
  }
  if ( v4->fields.assetData )
  {
    atlasList = v4->fields.atlasList;
    if ( !atlasList )
LABEL_22:
      sub_1BCAA3C(this, *(_QWORD *)&eventId);
    size = atlasList->fields._size;
    v19 = atlasList->fields._version + 1;
    atlasList->fields._size = 0;
    atlasList->fields._version = v19;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)atlasList->fields._items, 0, size, 0LL);
    for ( i = 1; ; ++i )
    {
      v41 = i;
      v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v41);
      v22 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_25200/*"{0:D2}"*/, v21, 0LL);
      v40 = eventId;
      v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v40);
      v24 = System_String__Format_62415592((System_String_o *)StringLiteral_5455/*"DownloadEventUIAtlas{0}{1}"*/, v23, v22, 0LL);
      GameObjectFromEventUIAssetData = (UnityEngine_Object_o *)WarBoardEventBossUIComponent__GetGameObjectFromEventUIAssetData(
                                                                 v4,
                                                                 v24,
                                                                 v25);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26);
      this = (WarBoardEventBossUIComponent_o *)UnityEngine_Object__op_Equality(GameObjectFromEventUIAssetData, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
        break;
      if ( !GameObjectFromEventUIAssetData )
        goto LABEL_22;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)GameObjectFromEventUIAssetData,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28);
      if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
        break;
      this = (WarBoardEventBossUIComponent_o *)v4->fields.atlasList;
      if ( !this )
        goto LABEL_22;
      v36 = *(_QWORD *)&this->fields.m_CachedPtr;
      v37 = Method_System_Collections_Generic_List_UIAtlas__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !v36 )
        goto LABEL_22;
      m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v36 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          Component_object,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
      }
      else
      {
        v39 = v36 + 8 * m_CancellationTokenSource_low;
        LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v39 + 32) = Component_object;
        sub_1BCA784((PartyOrganizationUtility_o *)(v39 + 32), (int64_t)Component_object, v30, v31, v32, v33, v34, v35);
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
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x20
  UnityEngine_Component_o *bossIconSp; // x0
  __int64 v20; // x1
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  __int64 v33; // x1
  Il2CppObject *deadAnimPrefab; // x22
  Il2CppObject *v35; // x22
  Il2CppObject *Component_object; // x22
  __int64 v37; // x2
  __int64 v38; // x3
  System_Action_o *v39; // x19
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  System_Action_o *v43; // x19
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7

  if ( (byte_4B13C64 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, endAction, method);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___, v6, v7);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v8, v9);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_WarBoardEventBossUIComponent___c__DisplayClass50_0__PlayDaedAnim_b__0__, v12, v13);
    sub_1BCA7E0(&Method_WarBoardEventBossUIComponent___c__DisplayClass50_0__PlayDaedAnim_b__1__, v14, v15);
    sub_1BCA7E0(&WarBoardEventBossUIComponent___c__DisplayClass50_0_TypeInfo, v16, v17);
    byte_4B13C64 = 1;
  }
  v18 = sub_1BCAA2C(WarBoardEventBossUIComponent___c__DisplayClass50_0_TypeInfo, endAction, method, v3);
  System_Object___ctor((Il2CppObject *)v18, 0LL);
  if ( !v18 )
    goto LABEL_13;
  *(_QWORD *)(v18 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v18 + 16), (int64_t)this, v21, v22, v23, v24, v25, v26);
  *(_QWORD *)(v18 + 24) = endAction;
  sub_1BCA784((PartyOrganizationUtility_o *)(v18 + 24), (int64_t)endAction, v27, v28, v29, v30, v31, v32);
  deadAnimPrefab = (Il2CppObject *)this->fields.deadAnimPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v33);
  v35 = UnityEngine_Object__Instantiate_object_(
          deadAnimPrefab,
          (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  GameObjectExtensions__SafeSetParent((UnityEngine_GameObject_o *)v35, (UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__ResetLocalPosition((UnityEngine_GameObject_o *)v35, 0LL);
  if ( !v35 )
    goto LABEL_13;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)v35,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
  {
    bossIconSp = (UnityEngine_Component_o *)this->fields.bossIconSp;
    if ( bossIconSp )
    {
      bossIconSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(bossIconSp, 0LL);
      if ( bossIconSp )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bossIconSp, 0, 0LL);
        ActionExtensions__Call(*(System_Action_o **)(v18 + 24), 0LL);
        return;
      }
    }
LABEL_13:
    sub_1BCAA3C(bossIconSp, v20);
  }
  v39 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v20, v37, v38);
  System_Action___ctor(
    v39,
    (Il2CppObject *)v18,
    Method_WarBoardEventBossUIComponent___c__DisplayClass50_0__PlayDaedAnim_b__0__,
    0LL);
  if ( !Component_object )
    goto LABEL_13;
  CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)Component_object, 0, v39, 0LL);
  v43 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v40, v41, v42);
  System_Action___ctor(
    v43,
    (Il2CppObject *)v18,
    Method_WarBoardEventBossUIComponent___c__DisplayClass50_0__PlayDaedAnim_b__1__,
    0LL);
  Component_object[2].monitor = v43;
  sub_1BCA784((PartyOrganizationUtility_o *)&Component_object[2].monitor, (int64_t)v43, v44, v45, v46, v47, v48, v49);
}


void __fastcall WarBoardEventBossUIComponent__PlayHpCut(
        WarBoardEventBossUIComponent_o *this,
        float duration,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v4; // x3
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x19
  int64_t MaxHpByBreakPoint; // x0
  __int64 v18; // x1
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  const MethodInfo *v31; // x2
  struct WarBoardUserServantData_o *oldBossInfo; // x8
  int32_t *p_defeatPoint; // x8
  struct WarBoardPieceData_o *bossPieceData; // x8
  int32_t v35; // w1
  __int64 v36; // x8
  struct WarBoardUserServantData_o *v37; // x9
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  EasingObject_o *v46; // x20
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x3
  System_Action_o *v50; // x21
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x3
  System_Action_o *v54; // x22

  if ( (byte_4B13C66 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, endAction, method);
    sub_1BCA7E0(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v8, v9);
    sub_1BCA7E0(&Method_WarBoardEventBossUIComponent___c__DisplayClass52_0__PlayHpCut_b__0__, v10, v11);
    sub_1BCA7E0(&Method_WarBoardEventBossUIComponent___c__DisplayClass52_0__PlayHpCut_b__1__, v12, v13);
    sub_1BCA7E0(&WarBoardEventBossUIComponent___c__DisplayClass52_0_TypeInfo, v14, v15);
    byte_4B13C66 = 1;
  }
  v16 = sub_1BCAA2C(WarBoardEventBossUIComponent___c__DisplayClass52_0_TypeInfo, endAction, method, v4);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  if ( !v16 )
    goto LABEL_20;
  *(_QWORD *)(v16 + 24) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v16 + 24), (int64_t)this, v19, v20, v21, v22, v23, v24);
  *(_QWORD *)(v16 + 48) = endAction;
  sub_1BCA784((PartyOrganizationUtility_o *)(v16 + 48), (int64_t)endAction, v25, v26, v27, v28, v29, v30);
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
    v35 = *p_defeatPoint;
    goto LABEL_10;
  }
  v35 = 0;
LABEL_10:
  MaxHpByBreakPoint = WarBoardEventBossUIComponent__GetMaxHpByBreakPoint(this, v35, v31);
  *(_QWORD *)(v16 + 32) = MaxHpByBreakPoint;
  if ( this->fields.isPointBreak || (MaxHpByBreakPoint = (int64_t)this->fields.bossPieceData) == 0 )
  {
    v36 = 0LL;
  }
  else
  {
    MaxHpByBreakPoint = WarBoardPieceData__get_CurrentHp((WarBoardPieceData_o *)MaxHpByBreakPoint, 0LL);
    v36 = (int)MaxHpByBreakPoint;
  }
  *(_QWORD *)(v16 + 40) = v36;
  v37 = this->fields.oldBossInfo;
  if ( !v37 )
    goto LABEL_20;
  if ( v36 == v37->fields.currentHp )
  {
    ActionExtensions__Call(*(System_Action_o **)(v16 + 48), 0LL);
    return;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_2F641B8 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v16 + 16) = Component_object;
  sub_1BCA784((PartyOrganizationUtility_o *)(v16 + 16), (int64_t)Component_object, v40, v41, v42, v43, v44, v45);
  v46 = *(EasingObject_o **)(v16 + 16);
  v50 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v47, v48, v49);
  System_Action___ctor(
    v50,
    (Il2CppObject *)v16,
    Method_WarBoardEventBossUIComponent___c__DisplayClass52_0__PlayHpCut_b__0__,
    0LL);
  v54 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v51, v52, v53);
  System_Action___ctor(
    v54,
    (Il2CppObject *)v16,
    Method_WarBoardEventBossUIComponent___c__DisplayClass52_0__PlayHpCut_b__1__,
    0LL);
  if ( !v46 )
LABEL_20:
    sub_1BCAA3C(MaxHpByBreakPoint, v18);
  EasingObject__Play(v46, duration, v50, v54, 0.0, 0, 0LL);
}


void __fastcall WarBoardEventBossUIComponent__PlayHpRecover(
        WarBoardEventBossUIComponent_o *this,
        float duration,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v4; // x3
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x19
  UIProgressBar_o *hpBarSlider; // x0
  __int64 v18; // x1
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  const MethodInfo *v31; // x2
  struct WarBoardPieceData_o *bossPieceData; // x8
  int32_t v33; // w1
  float value; // s0
  WarBoardPieceData_o *v35; // x0
  double v36; // d0
  float v37; // s0
  float v38; // s1
  bool v39; // nf
  float v40; // s0
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  EasingObject_o *v49; // x20
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  System_Action_o *v53; // x21
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x3
  System_Action_o *v57; // x22

  if ( (byte_4B13C67 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, endAction, method);
    sub_1BCA7E0(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v8, v9);
    sub_1BCA7E0(&Method_WarBoardEventBossUIComponent___c__DisplayClass53_0__PlayHpRecover_b__0__, v10, v11);
    sub_1BCA7E0(&Method_WarBoardEventBossUIComponent___c__DisplayClass53_0__PlayHpRecover_b__1__, v12, v13);
    sub_1BCA7E0(&WarBoardEventBossUIComponent___c__DisplayClass53_0_TypeInfo, v14, v15);
    byte_4B13C67 = 1;
  }
  v16 = sub_1BCAA2C(WarBoardEventBossUIComponent___c__DisplayClass53_0_TypeInfo, endAction, method, v4);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  if ( !v16 )
    goto LABEL_15;
  *(_QWORD *)(v16 + 24) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v16 + 24), (int64_t)this, v19, v20, v21, v22, v23, v24);
  *(_QWORD *)(v16 + 40) = endAction;
  sub_1BCA784((PartyOrganizationUtility_o *)(v16 + 40), (int64_t)endAction, v25, v26, v27, v28, v29, v30);
  bossPieceData = this->fields.bossPieceData;
  v33 = bossPieceData ? bossPieceData->fields._breakPoint_k__BackingField : 0;
  *(_QWORD *)(v16 + 32) = WarBoardEventBossUIComponent__GetMaxHpByBreakPoint(this, v33, v31);
  hpBarSlider = (UIProgressBar_o *)this->fields.hpBarSlider;
  if ( !hpBarSlider )
    goto LABEL_15;
  value = UIProgressBar__get_value(hpBarSlider, 0LL);
  v35 = this->fields.bossPieceData;
  this->fields.HPfrom = value;
  v36 = v35 ? (double)WarBoardPieceData__get_CurrentHp(v35, 0LL) : 0.0;
  v37 = v36 / (double)*(__int64 *)(v16 + 32);
  v38 = fminf(v37, 1.0);
  v39 = v37 < 0.0;
  v40 = 0.0;
  if ( !v39 )
    v40 = v38;
  this->fields.HPto = v40;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_2F641B8 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v16 + 16) = Component_object;
  sub_1BCA784((PartyOrganizationUtility_o *)(v16 + 16), (int64_t)Component_object, v43, v44, v45, v46, v47, v48);
  v49 = *(EasingObject_o **)(v16 + 16);
  v53 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v50, v51, v52);
  System_Action___ctor(
    v53,
    (Il2CppObject *)v16,
    Method_WarBoardEventBossUIComponent___c__DisplayClass53_0__PlayHpRecover_b__0__,
    0LL);
  v57 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v54, v55, v56);
  System_Action___ctor(
    v57,
    (Il2CppObject *)v16,
    Method_WarBoardEventBossUIComponent___c__DisplayClass53_0__PlayHpRecover_b__1__,
    0LL);
  if ( !v49 )
LABEL_15:
    sub_1BCAA3C(hpBarSlider, v18);
  EasingObject__Play(v49, duration, v53, v57, 0.0, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardEventBossUIComponent__PlayPointBreakAnim(
        WarBoardEventBossUIComponent_o *this,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x21
  UnityEngine_Component_o *Sprite; // x0
  __int64 v18; // x1
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  System_Action_o **v25; // x20
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  struct WarBoardUserServantData_o *oldBossInfo; // x9
  struct WarBoardEventBossUIComponent_BreakIcon_array *breakIconList; // x8
  unsigned int v34; // w9
  WarBoardEventBossUIComponent_BreakIcon_o *v35; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v37; // x1
  Il2CppObject *pointBreakAnimPrefab; // x22
  UnityEngine_GameObject_o *v39; // x23
  Il2CppObject *v40; // x22
  Il2CppObject *Component_object; // x22
  __int64 v42; // x1
  const MethodInfo *v43; // x2
  __int64 v44; // x3
  struct WarBoardPieceData_o *bossPieceData; // x8
  UILabel_o *totalHpLabel; // x21
  int32_t breakPoint_k__BackingField; // w1
  System_Action_o *v48; // x19
  int v49; // s0
  const MethodInfo *v53; // x3
  struct WarBoardUserServantData_o *currentBossInfo; // x8
  struct WarBoardPieceData_o *v55; // x9
  int32_t v56; // w2

  if ( (byte_4B13C65 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, endAction, method);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___, v6, v7);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v8, v9);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_WarBoardEventBossUIComponent___c__DisplayClass51_0__PlayPointBreakAnim_b__0__, v12, v13);
    sub_1BCA7E0(&WarBoardEventBossUIComponent___c__DisplayClass51_0_TypeInfo, v14, v15);
    byte_4B13C65 = 1;
  }
  v16 = sub_1BCAA2C(WarBoardEventBossUIComponent___c__DisplayClass51_0_TypeInfo, endAction, method, v3);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  if ( !v16 )
    goto LABEL_24;
  *(_QWORD *)(v16 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v16 + 16), (int64_t)this, v19, v20, v21, v22, v23, v24);
  *(_QWORD *)(v16 + 24) = endAction;
  v25 = (System_Action_o **)(v16 + 24);
  sub_1BCA784((PartyOrganizationUtility_o *)(v16 + 24), (int64_t)endAction, v26, v27, v28, v29, v30, v31);
  oldBossInfo = this->fields.oldBossInfo;
  if ( !oldBossInfo )
    goto LABEL_24;
  breakIconList = this->fields.breakIconList;
  if ( !breakIconList )
    goto LABEL_24;
  v34 = (oldBossInfo->fields.defeatPoint - 1) & ~((oldBossInfo->fields.defeatPoint - 1) >> 31);
  if ( v34 >= breakIconList->max_length )
    sub_1BCAA44(Sprite, v18);
  v35 = breakIconList->m_Items[v34];
  if ( !v35 )
    goto LABEL_24;
  Sprite = (UnityEngine_Component_o *)v35->fields.Sprite;
  if ( !Sprite )
    goto LABEL_24;
  gameObject = UnityEngine_Component__get_gameObject(Sprite, 0LL);
  pointBreakAnimPrefab = (Il2CppObject *)this->fields.pointBreakAnimPrefab;
  v39 = gameObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v37);
  v40 = UnityEngine_Object__Instantiate_object_(
          pointBreakAnimPrefab,
          (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  GameObjectExtensions__SafeSetParent_34336992((UnityEngine_GameObject_o *)v40, v39, 0LL);
  GameObjectExtensions__ResetLocalPosition((UnityEngine_GameObject_o *)v40, 0LL);
  if ( !v40 )
    goto LABEL_24;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)v40,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
  {
    v48 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v42, v43, v44);
    System_Action___ctor(
      v48,
      (Il2CppObject *)v16,
      Method_WarBoardEventBossUIComponent___c__DisplayClass51_0__PlayPointBreakAnim_b__0__,
      0LL);
    if ( Component_object )
    {
      CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)Component_object, 0, v48, 0LL);
      return;
    }
LABEL_24:
    sub_1BCAA3C(Sprite, v18);
  }
  bossPieceData = this->fields.bossPieceData;
  totalHpLabel = this->fields.totalHpLabel;
  if ( bossPieceData )
    breakPoint_k__BackingField = bossPieceData->fields._breakPoint_k__BackingField;
  else
    breakPoint_k__BackingField = 0;
  *(UnityEngine_Color_o *)&v49 = WarBoardEventBossUIComponent__GetTextEffectColor(this, breakPoint_k__BackingField, v43);
  if ( !totalHpLabel )
    goto LABEL_24;
  UILabel__set_effectColor(totalHpLabel, *(UnityEngine_Color_o *)&v49, 0LL);
  currentBossInfo = this->fields.currentBossInfo;
  if ( !currentBossInfo )
    goto LABEL_24;
  v55 = this->fields.bossPieceData;
  if ( v55 )
    v56 = v55->fields._breakPoint_k__BackingField;
  else
    v56 = 0;
  WarBoardEventBossUIComponent__SetupBreakPoint(this, currentBossInfo->fields.maxDefeatPoint, v56, v53);
  this->fields.isPointBreak = 0;
  ActionExtensions__Call(*v25, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardEventBossUIComponent__SetDisp(
        WarBoardEventBossUIComponent_o *this,
        WarBoardDataEntity_o *warBoardDataEntity,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  WarBoardDataEntity_o **p_warBoardDataEnt; // x21
  __int64 defeatPoint; // x1
  __int64 bossIconSp; // x0
  struct WarBoardStageBossEntity_o *warBoardStageBossEnt; // x8
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  struct WarBoardStageBossEntity_o *v36; // x8
  _DWORD *v37; // x22
  struct WarBoardUserServantData_o *StageBossData; // x1
  struct WarBoardUserServantData_o **p_currentBossInfo; // x20
  struct WarBoardStageBossEntity_o *v40; // x8
  struct WarBoardPieceData_o *EventBossPiece; // x0
  struct WarBoardPieceData_o **p_bossPieceData; // x21
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  __int64 v49; // x2
  __int64 v50; // x3
  WarBoardUserServantData_o *v51; // x24
  struct WarBoardUserServantData_o **p_oldBossInfo; // x23
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  struct WarBoardUserServantData_o *currentBossInfo; // x8
  struct WarBoardUserServantData_o *v66; // x9
  int64_t breakHp; // x1
  const MethodInfo *v68; // x2
  struct WarBoardUserServantData_o *v69; // x8
  struct WarBoardUserServantData_o *v70; // x23
  WarBoardUserServantData_o *v71; // x23
  struct WarBoardUserServantData_o **v72; // x22
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7
  int64_t v79; // x2
  int32_t v80; // w3
  System_String_o *v81; // x4
  BattleSetupInfo_o *v82; // x5
  FollowerInfo_o *v83; // x6
  PartyListViewItem_o *v84; // x7
  struct WarBoardUserServantData_o *v85; // x8
  struct WarBoardUserServantData_o *v86; // x9
  int64_t v87; // x1
  struct WarBoardUserServantData_o *v88; // x8
  struct WarBoardPieceData_o *v89; // x8
  struct WarBoardUserServantData_o *oldBossInfo; // x9
  struct WarBoardUserServantData_o *v91; // x8
  double v92; // d0
  float v93; // s1
  float HPfrom; // s0
  struct WarBoardUserServantData_o *v95; // x8
  double v96; // d9
  WarBoardPieceData_o *bossPieceData; // x0
  float v98; // s0
  float v99; // s1
  float v100; // s0
  double v101; // d0
  float v102; // s0
  float v103; // s1
  float v104; // s0
  const MethodInfo *v105; // x2
  struct WarBoardUserServantData_o *v106; // x8
  const MethodInfo *v107; // x3
  struct WarBoardUserServantData_o *v108; // x8
  struct WarBoardStageBossEntity_o *v109; // x8
  int idx; // w25
  UISprite_o *v111; // x20
  Il2CppObject *v112; // x21
  Il2CppObject *v113; // x0
  System_String_o *v114; // x0
  const MethodInfo *v115; // x3
  const MethodInfo *v116; // x3
  const MethodInfo *v117; // x3
  UISprite_o *hpBarUnderSprite; // x20
  Il2CppObject *v119; // x0
  System_String_o *v120; // x0
  const MethodInfo *v121; // x3
  UISprite_o *hpBarUpperSprite; // x20
  Il2CppObject *v123; // x0
  System_String_o *v124; // x0
  const MethodInfo *v125; // x3
  const MethodInfo *v126; // x3
  const MethodInfo *v127; // x2
  struct WarBoardUserServantData_o *v128; // x8
  float v129; // s0
  float v130; // s1
  float v131; // s2
  float v132; // s3
  float v133; // s8
  float v134; // s9
  float v135; // s10
  float v136; // s11
  const MethodInfo *v137; // x2
  struct WarBoardStageBossEntity_o *v138; // x8
  UILabel_o *bossName; // x19
  int v140; // [xsp+0h] [xbp-90h] BYREF
  int v141; // [xsp+4h] [xbp-8Ch] BYREF
  int v142; // [xsp+8h] [xbp-88h] BYREF
  int32_t iconId; // [xsp+Ch] [xbp-84h] BYREF
  UnityEngine_Color_o v144; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B13C5B & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, warBoardDataEntity, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v10, v11);
    sub_1BCA7E0(&WarBoardUserServantData_TypeInfo, v12, v13);
    sub_1BCA7E0(&StringLiteral_24895/*"war_board_boss_hp_frame"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_24898/*"war_board_boss_hp_white"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_24897/*"war_board_boss_hp_upper_{0}"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_24899/*"war_board_boss_icon_{0}{1:D2}"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_24894/*"war_board_boss_hp_back"*/, v22, v23);
    sub_1BCA7E0(&StringLiteral_24896/*"war_board_boss_hp_lower_{0}"*/, v24, v25);
    byte_4B13C5B = 1;
  }
  this->fields.warBoardDataEnt = warBoardDataEntity;
  p_warBoardDataEnt = &this->fields.warBoardDataEnt;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.warBoardDataEnt,
    (int64_t)warBoardDataEntity,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  bossIconSp = (__int64)this->fields.bossIconSp;
  if ( !bossIconSp )
    goto LABEL_67;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)bossIconSp, 1, 0LL);
  bossIconSp = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  warBoardStageBossEnt = this->fields.warBoardStageBossEnt;
  if ( !warBoardStageBossEnt )
    goto LABEL_67;
  if ( !bossIconSp )
    goto LABEL_67;
  bossIconSp = (__int64)WarBoardManager__GetEventBossUILoadData(
                          (WarBoardManager_o *)bossIconSp,
                          warBoardStageBossEnt->fields.idx,
                          0LL);
  v36 = this->fields.warBoardStageBossEnt;
  if ( !v36 )
    goto LABEL_67;
  v37 = (_DWORD *)bossIconSp;
  if ( *p_warBoardDataEnt )
    StageBossData = WarBoardDataEntity__GetStageBossData(*p_warBoardDataEnt, v36->fields.idx, 0LL);
  else
    StageBossData = 0LL;
  this->fields.currentBossInfo = StageBossData;
  p_currentBossInfo = &this->fields.currentBossInfo;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.currentBossInfo,
    (int64_t)StageBossData,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  if ( this->fields.currentBossInfo )
  {
    bossIconSp = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( bossIconSp )
    {
      v40 = this->fields.warBoardStageBossEnt;
      if ( v40 )
      {
        bossIconSp = *(_QWORD *)(bossIconSp + 440);
        if ( bossIconSp )
        {
          EventBossPiece = WarBoardData__GetEventBossPiece((WarBoardData_o *)bossIconSp, v40->fields.idx, 0LL);
          this->fields.bossPieceData = EventBossPiece;
          p_bossPieceData = &this->fields.bossPieceData;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&this->fields.bossPieceData,
            (int64_t)EventBossPiece,
            v43,
            v44,
            v45,
            v46,
            v47,
            v48);
          if ( !v37 || (int)v37[6] < 3 )
            goto LABEL_24;
          if ( !*p_currentBossInfo )
            goto LABEL_67;
          if ( v37[8] == (*p_currentBossInfo)->fields.stageBossIdx )
          {
            v51 = (WarBoardUserServantData_o *)sub_1BCAA2C(WarBoardUserServantData_TypeInfo, defeatPoint, v49, v50);
            WarBoardUserServantData___ctor(v51, 0LL);
            this->fields.oldBossInfo = v51;
            p_oldBossInfo = &this->fields.oldBossInfo;
            sub_1BCA784(
              (PartyOrganizationUtility_o *)&this->fields.oldBossInfo,
              (int64_t)v51,
              v53,
              v54,
              v55,
              v56,
              v57,
              v58);
            currentBossInfo = this->fields.currentBossInfo;
            if ( !currentBossInfo )
              goto LABEL_67;
            v66 = *p_oldBossInfo;
            if ( !*p_oldBossInfo )
              goto LABEL_67;
            v66->fields.stageBossIdx = currentBossInfo->fields.stageBossIdx;
            breakHp = (int64_t)currentBossInfo->fields.breakHp;
            v66->fields.breakHp = (struct System_Int32_array *)breakHp;
            sub_1BCA784((PartyOrganizationUtility_o *)&v66->fields.breakHp, breakHp, v59, v60, v61, v62, v63, v64);
            v69 = *p_currentBossInfo;
            if ( !*p_currentBossInfo )
              goto LABEL_67;
            v70 = *p_oldBossInfo;
            if ( !v70 )
              goto LABEL_67;
            v70->fields.maxDefeatPoint = v69->fields.maxDefeatPoint;
            if ( v37[6] <= 2u )
              sub_1BCAA44(bossIconSp, defeatPoint);
            v70->fields.defeatPoint = v37[10];
            v70->fields.hp = v69->fields.hp;
            bossIconSp = (unsigned int)v37[9];
          }
          else
          {
LABEL_24:
            v71 = (WarBoardUserServantData_o *)sub_1BCAA2C(WarBoardUserServantData_TypeInfo, defeatPoint, v49, v50);
            WarBoardUserServantData___ctor(v71, 0LL);
            this->fields.oldBossInfo = v71;
            v72 = &this->fields.oldBossInfo;
            sub_1BCA784(
              (PartyOrganizationUtility_o *)&this->fields.oldBossInfo,
              (int64_t)v71,
              v73,
              v74,
              v75,
              v76,
              v77,
              v78);
            v85 = this->fields.currentBossInfo;
            if ( !v85 )
              goto LABEL_67;
            v86 = *v72;
            if ( !*v72 )
              goto LABEL_67;
            v86->fields.stageBossIdx = v85->fields.stageBossIdx;
            v87 = (int64_t)v85->fields.breakHp;
            v86->fields.breakHp = (struct System_Int32_array *)v87;
            sub_1BCA784((PartyOrganizationUtility_o *)&v86->fields.breakHp, v87, v79, v80, v81, v82, v83, v84);
            v88 = *p_currentBossInfo;
            if ( !*p_currentBossInfo )
              goto LABEL_67;
            v70 = *v72;
            if ( !*v72 )
              goto LABEL_67;
            v70->fields.maxDefeatPoint = v88->fields.maxDefeatPoint;
            bossIconSp = (__int64)*p_bossPieceData;
            if ( *p_bossPieceData )
            {
              v70->fields.defeatPoint = *(_DWORD *)(bossIconSp + 52);
              v70->fields.hp = v88->fields.hp;
              bossIconSp = WarBoardPieceData__get_CurrentHp((WarBoardPieceData_o *)bossIconSp, 0LL);
            }
            else
            {
              v70->fields.defeatPoint = 0;
              v70->fields.hp = v88->fields.hp;
            }
          }
          v70->fields.currentHp = bossIconSp;
          v89 = *p_bossPieceData;
          if ( *p_bossPieceData )
            LODWORD(v89) = v89->fields._breakPoint_k__BackingField;
          oldBossInfo = this->fields.oldBossInfo;
          if ( oldBossInfo )
          {
            defeatPoint = (unsigned int)oldBossInfo->fields.defeatPoint;
            this->fields.isPointBreak = (int)v89 < (int)defeatPoint;
            if ( (int)v89 < (int)defeatPoint )
            {
              bossIconSp = WarBoardEventBossUIComponent__GetMaxHpByBreakPoint(this, defeatPoint, v68);
              v91 = this->fields.oldBossInfo;
              if ( !v91 )
                goto LABEL_67;
              v92 = (double)bossIconSp;
              bossIconSp = (__int64)this->fields.hpBarSlider;
              *(float *)&v92 = (double)v91->fields.currentHp / v92;
              v93 = fminf(*(float *)&v92, 1.0);
              HPfrom = *(float *)&v92 < 0.0 ? 0.0 : v93;
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
                             v68);
              v95 = this->fields.oldBossInfo;
              if ( v95 )
              {
                v96 = (double)bossIconSp;
                bossPieceData = this->fields.bossPieceData;
                v98 = (double)v95->fields.currentHp / v96;
                v99 = fminf(v98, 1.0);
                v100 = v98 < 0.0 ? 0.0 : v99;
                this->fields.HPfrom = v100;
                v101 = bossPieceData ? (double)WarBoardPieceData__get_CurrentHp(bossPieceData, 0LL) : 0.0;
                bossIconSp = (__int64)this->fields.hpBarSlider;
                v102 = v101 / v96;
                v103 = fminf(v102, 1.0);
                v104 = v102 < 0.0 ? 0.0 : v103;
                this->fields.HPto = v104;
                if ( bossIconSp )
                {
                  HPfrom = this->fields.HPfrom;
LABEL_57:
                  UIProgressBar__set_value((UIProgressBar_o *)bossIconSp, HPfrom, 0LL);
                  v106 = this->fields.oldBossInfo;
                  if ( !v106 )
                    goto LABEL_67;
                  WarBoardEventBossUIComponent__SetTotalHpText(this, v106->fields.currentHp, v105);
                  bossIconSp = (__int64)this->fields.hpBarSliderUnder;
                  if ( !bossIconSp )
                    goto LABEL_67;
                  UIProgressBar__set_value((UIProgressBar_o *)bossIconSp, 0.0, 0LL);
                  v108 = this->fields.oldBossInfo;
                  if ( !v108 )
                    goto LABEL_67;
                  WarBoardEventBossUIComponent__SetupBreakPoint(
                    this,
                    v108->fields.maxDefeatPoint,
                    v108->fields.defeatPoint,
                    v107);
                  v109 = this->fields.warBoardStageBossEnt;
                  if ( !v109 )
                    goto LABEL_67;
                  idx = v109->fields.idx;
                  v111 = this->fields.bossIconSp;
                  iconId = v109->fields.iconId;
                  v112 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId);
                  v142 = idx;
                  v113 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v142);
                  v114 = System_String__Format_62415592((System_String_o *)StringLiteral_24899/*"war_board_boss_icon_{0}{1:D2}"*/, v112, v113, 0LL);
                  WarBoardEventBossUIComponent__SetSpriteByLocalAtlas(this, v111, v114, v115);
                  WarBoardEventBossUIComponent__SetSpriteByLocalAtlas(
                    this,
                    this->fields.bossHpFrame,
                    (System_String_o *)StringLiteral_24895/*"war_board_boss_hp_frame"*/,
                    v116);
                  WarBoardEventBossUIComponent__SetSpriteByLocalAtlas(
                    this,
                    this->fields.bossHpBg,
                    (System_String_o *)StringLiteral_24894/*"war_board_boss_hp_back"*/,
                    v117);
                  hpBarUnderSprite = this->fields.hpBarUnderSprite;
                  v141 = idx;
                  v119 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v141);
                  v120 = System_String__Format((System_String_o *)StringLiteral_24896/*"war_board_boss_hp_lower_{0}"*/, v119, 0LL);
                  WarBoardEventBossUIComponent__SetSpriteByLocalAtlas(this, hpBarUnderSprite, v120, v121);
                  hpBarUpperSprite = this->fields.hpBarUpperSprite;
                  v140 = idx;
                  v123 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v140);
                  v124 = System_String__Format((System_String_o *)StringLiteral_24897/*"war_board_boss_hp_upper_{0}"*/, v123, 0LL);
                  WarBoardEventBossUIComponent__SetSpriteByLocalAtlas(this, hpBarUpperSprite, v124, v125);
                  bossIconSp = WarBoardEventBossUIComponent__SetSpriteByLocalAtlas(
                                 this,
                                 this->fields.hpBarWhiteSprite,
                                 (System_String_o *)StringLiteral_24898/*"war_board_boss_hp_white"*/,
                                 v126);
                  v128 = this->fields.oldBossInfo;
                  if ( !v128 )
                    goto LABEL_67;
                  *(UnityEngine_Color_o *)&v129 = WarBoardEventBossUIComponent__GetTextEffectColor(
                                                    this,
                                                    v128->fields.defeatPoint,
                                                    v127);
                  bossIconSp = (__int64)this->fields.totalHpLabel;
                  if ( !bossIconSp )
                    goto LABEL_67;
                  v133 = v129;
                  v134 = v130;
                  v135 = v131;
                  v136 = v132;
                  UILabel__set_effectColor((UILabel_o *)bossIconSp, *(UnityEngine_Color_o *)&v129, 0LL);
                  bossIconSp = (__int64)this->fields.bossName;
                  if ( !bossIconSp )
                    goto LABEL_67;
                  v144.fields.r = v133;
                  v144.fields.g = v134;
                  v144.fields.b = v135;
                  v144.fields.a = v136;
                  UILabel__set_effectColor((UILabel_o *)bossIconSp, v144, 0LL);
                  v138 = this->fields.warBoardStageBossEnt;
                  if ( !v138 )
                    goto LABEL_67;
                  bossName = this->fields.bossName;
                  bossIconSp = (__int64)WarBoardEventBossUIComponent__GetStageBossName(
                                          (WarBoardEventBossUIComponent_o *)bossIconSp,
                                          v138->fields.idx,
                                          v137);
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
    sub_1BCAA3C(bossIconSp, defeatPoint);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  struct System_Collections_Generic_List_UIAtlas__o *IsNullOrEmpty; // x0
  __int64 v16; // x1
  _BOOL8 v17; // x0
  __int64 v18; // x1
  Il2CppObject *current; // x21
  UISpriteData_o *v20; // x0
  __int64 v21; // x1
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4B13C63 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_UIAtlas___, sprite, spriteName);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__get_Current__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__, v13, v14);
    byte_4B13C63 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  IsNullOrEmpty = (struct System_Collections_Generic_List_UIAtlas__o *)System_String__IsNullOrEmpty(spriteName, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0
    || (IsNullOrEmpty = (struct System_Collections_Generic_List_UIAtlas__o *)System_Linq_Enumerable__Any_object_(
                                                                               (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.atlasList,
                                                                               (const MethodInfo_2F1E844 *)Method_System_Linq_Enumerable_Any_UIAtlas___),
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
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    (System_Collections_Generic_List_object__o *)IsNullOrEmpty,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
  v24 = v23;
  do
  {
    v17 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    if ( !v17 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v24,
        (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
      if ( sprite )
      {
        UISprite__set_spriteName(sprite, 0LL, 0LL);
        return 0;
      }
LABEL_19:
      sub_1BCAA3C(IsNullOrEmpty, v16);
    }
    current = v24.fields._current;
    if ( !v24.fields._current )
      sub_1BCAA3C(v17, v18);
    v20 = UIAtlas__GetSprite((UIAtlas_o *)v24.fields._current, spriteName, 0LL);
  }
  while ( !v20 );
  if ( !sprite )
    sub_1BCAA3C(v20, v21);
  UISprite__set_atlas(sprite, (UIAtlas_o *)current, 0LL);
  UISprite__set_spriteName(sprite, spriteName, 0LL);
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
  return 1;
}


void __fastcall WarBoardEventBossUIComponent__SetTotalHpText(
        WarBoardEventBossUIComponent_o *this,
        int64_t hp,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  UILabel_o *totalHpLabel; // x20
  System_String_o *v10; // x21
  Il2CppObject *v11; // x0
  System_String_o *v12; // x0
  __int64 v13; // x1
  int64_t v14; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B13C5C & 1) == 0 )
  {
    sub_1BCA7E0(&long_TypeInfo, hp, method);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_3805/*"COMMON_NUM_FORMAT"*/, v7, v8);
    byte_4B13C5C = 1;
  }
  totalHpLabel = this->fields.totalHpLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, hp);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_3805/*"COMMON_NUM_FORMAT"*/, 0LL);
  v14 = hp;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v14);
  v12 = System_String__Format(v10, v11, 0LL);
  if ( !totalHpLabel )
    sub_1BCAA3C(v12, v13);
  UILabel__set_text(totalHpLabel, v12, 0LL);
}


void __fastcall WarBoardEventBossUIComponent__Setup(
        WarBoardEventBossUIComponent_o *this,
        int32_t eventId,
        WarBoardStageBossEntity_o *warBoardStageBossEnt,
        WarBoardDataEntity_o *warBoardDataEnt,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  WarBoardStageBossEntity_o **p_warBoardStageBossEnt; // x23
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x2
  const MethodInfo *v21; // x2

  this->fields.eventId = eventId;
  this->fields.warBoardStageBossEnt = warBoardStageBossEnt;
  p_warBoardStageBossEnt = &this->fields.warBoardStageBossEnt;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.warBoardStageBossEnt,
    (int64_t)warBoardStageBossEnt,
    (int64_t)warBoardStageBossEnt,
    (int32_t)warBoardDataEnt,
    (System_String_o *)assetData,
    (BattleSetupInfo_o *)method,
    v6,
    v7);
  this->fields.assetData = assetData;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.assetData, (int64_t)assetData, v13, v14, v15, v16, v17, v18);
  WarBoardEventBossUIComponent__LoadLocalAtlas(this, eventId, v19);
  WarBoardEventBossUIComponent__LoadAnimPrefab(this, *p_warBoardStageBossEnt, v20);
  WarBoardEventBossUIComponent__SetDisp(this, warBoardDataEnt, v21);
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
      sub_1BCAA3C(this, *(_QWORD *)&maxCount);
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
    sub_1BCAA44(this, *(_QWORD *)&maxCount);
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
          sub_1BCAA3C(CurrentHp, v7);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, method);
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
    sub_1BCAA3C(_4__this, method);
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
    sub_1BCAA3C(this, method);
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
    sub_1BCAA3C(0LL, method);
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
    sub_1BCAA3C(this, method);
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
    sub_1BCAA3C(this, method);
  bossPieceData = _4__this->fields.bossPieceData;
  if ( bossPieceData )
    CurrentHp = WarBoardPieceData__get_CurrentHp(bossPieceData, 0LL);
  else
    CurrentHp = 0LL;
  WarBoardEventBossUIComponent__SetTotalHpText(_4__this, CurrentHp, v2);
  ActionExtensions__Call(this->fields.endAction, 0LL);
}