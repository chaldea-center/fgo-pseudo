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
  __int64 v9; // x1
  int64_t v10; // x1
  struct WarBoardEventBossUIComponent_StaticFields *static_fields; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4BB2119 & 1) == 0 )
  {
    sub_1C13D24(&WarBoardEventBossUIComponent_TypeInfo, v1);
    sub_1C13D24(&StringLiteral_15825/*"Wall"*/, v8);
    sub_1C13D24(&StringLiteral_15826/*"WallHack Detector"*/, v9);
    byte_4BB2119 = 1;
  }
  WarBoardEventBossUIComponent_TypeInfo->static_fields->BOSS_CLEAR_EFFECT_PREFAB = (struct System_String_o *)StringLiteral_15826/*"WallHack Detector"*/;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)WarBoardEventBossUIComponent_TypeInfo->static_fields,
    StringLiteral_15826/*"WallHack Detector"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = StringLiteral_15825/*"Wall"*/;
  static_fields = WarBoardEventBossUIComponent_TypeInfo->static_fields;
  static_fields->BOSS_POINT_BREAK_EFFECT_PREFAB = (struct System_String_o *)StringLiteral_15825/*"Wall"*/;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&static_fields->BOSS_POINT_BREAK_EFFECT_PREFAB,
    v10,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
}


void __fastcall WarBoardEventBossUIComponent___ctor(WarBoardEventBossUIComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x20
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4BB2118 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_UIAtlas___ctor__, method);
    sub_1C13D24(&System_Collections_Generic_List_UIAtlas__TypeInfo, v3);
    byte_4BB2118 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_UIAtlas__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_UIAtlas___ctor__);
  this->fields.atlasList = (struct System_Collections_Generic_List_UIAtlas__o *)v4;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.atlasList, (int64_t)v4, v5, v6, v7, v8, v9, v10);
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

  if ( (byte_4BB2117 & 1) == 0 )
  {
    sub_1C13D24(&System_Convert_TypeInfo, hexStrColor);
    byte_4BB2117 = 1;
  }
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v4 = System_Convert__ToInt32_63635076(hexStrColor, 16, 0LL);
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

  if ( (byte_4BB2116 & 1) == 0 )
  {
    sub_1C13D24(&System_Text_StringBuilder_TypeInfo, method);
    sub_1C13D24(&StringLiteral_1545/*"99:99:99"*/, v3);
    sub_1C13D24(&StringLiteral_1/*""*/, v4);
    byte_4BB2116 = 1;
  }
  if ( !this->fields.oldBossInfo )
    return (System_String_o *)StringLiteral_1/*""*/;
  v5 = (System_Text_StringBuilder_o *)sub_1C13F70(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v5, 0LL);
  oldBossInfo = this->fields.oldBossInfo;
  if ( !oldBossInfo
    || !v5
    || (System_Text_StringBuilder__Append_62131592(v5, oldBossInfo->fields.stageBossIdx, 0LL),
        appended = System_Text_StringBuilder__Append_62129096(v5, (System_String_o *)StringLiteral_1545/*"99:99:99"*/, 0LL),
        (v9 = this->fields.oldBossInfo) == 0LL)
    || (System_Text_StringBuilder__Append_62131592(v5, v9->fields.currentHp, 0LL),
        appended = System_Text_StringBuilder__Append_62129096(v5, (System_String_o *)StringLiteral_1545/*"99:99:99"*/, 0LL),
        (v10 = this->fields.oldBossInfo) == 0LL) )
  {
    sub_1C13F80(appended, v7);
  }
  System_Text_StringBuilder__Append_62131592(v5, v10->fields.defeatPoint, 0LL);
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

  if ( (byte_4BB210E & 1) == 0 )
  {
    sub_1C13D24(&Method_AssetData_GetObject_GameObject____77466800, name);
    byte_4BB210E = 1;
  }
  result = (UnityEngine_GameObject_o *)this->fields.assetData;
  if ( result )
    return (UnityEngine_GameObject_o *)AssetData__GetObject_object__49747248(
                                         (AssetData_o *)result,
                                         name,
                                         (const MethodInfo_2F71530 *)Method_AssetData_GetObject_GameObject____77466800);
  return result;
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall WarBoardEventBossUIComponent__GetMaxHpByBreakPoint(
        WarBoardEventBossUIComponent_o *this,
        int32_t restBreakPoint,
        const MethodInfo *method)
{
  struct WarBoardUserServantData_o *currentBossInfo; // x8

  if ( (byte_4BB210D & 1) == 0 )
  {
    sub_1C13D24(&Method_BasicHelper_IndexValue_int____77472272, *(_QWORD *)&restBreakPoint);
    byte_4BB210D = 1;
  }
  currentBossInfo = this->fields.currentBossInfo;
  if ( currentBossInfo )
    return BasicHelper__IndexValue_int_(
             currentBossInfo->fields.breakHp,
             restBreakPoint,
             currentBossInfo->fields.hp,
             (const MethodInfo_2F7DF50 *)Method_BasicHelper_IndexValue_int____77472272);
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

  if ( (byte_4BB210B & 1) == 0 )
  {
    sub_1C13D24(&Method_BasicHelper_Find_WarBoardPieceData___, *(_QWORD *)&stageBossIndex);
    sub_1C13D24(&System_Func_WarBoardPieceData__bool__TypeInfo, v4);
    sub_1C13D24(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v5);
    sub_1C13D24(&string_TypeInfo, v6);
    sub_1C13D24(&Method_WarBoardEventBossUIComponent___c__DisplayClass35_0__GetStageBossName_b__0__, v7);
    sub_1C13D24(&WarBoardEventBossUIComponent___c__DisplayClass35_0_TypeInfo, v8);
    byte_4BB210B = 1;
  }
  v9 = sub_1C13F70(WarBoardEventBossUIComponent___c__DisplayClass35_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9
    || (*(_DWORD *)(v9 + 16) = stageBossIndex,
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL)
    || (monitor = Instance[27].monitor) == 0LL )
  {
    sub_1C13F80(Instance, v11);
  }
  v13 = monitor[6];
  if ( v13
    && *(_QWORD *)(v13 + 24)
    && (v14 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_WarBoardPieceData__bool__TypeInfo),
        System_Func_object__bool____ctor(
          v14,
          (Il2CppObject *)v9,
          Method_WarBoardEventBossUIComponent___c__DisplayClass35_0__GetStageBossName_b__0__,
          0LL),
        (object = BasicHelper__Find_object_(
                    (System_Object_array *)v13,
                    (System_Func_T__bool__o *)v14,
                    (const MethodInfo_2F7AFA4 *)Method_BasicHelper_Find_WarBoardPieceData___)) != 0LL)
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

  if ( (byte_4BB210C & 1) == 0 )
  {
    sub_1C13D24(&Method_BasicHelper_IndexValue_string___, *(_QWORD *)&restBreakPoint);
    sub_1C13D24(&string___TypeInfo, v5);
    sub_1C13D24(&StringLiteral_1262/*"0x"*/, v6);
    byte_4BB210C = 1;
  }
  warBoardStageBossEnt = this->fields.warBoardStageBossEnt;
  if ( warBoardStageBossEnt )
  {
    bossColor = (Il2CppObject *)warBoardStageBossEnt->fields.bossColor;
    TextEffectColors = WarBoardStageBossEntity__GetTextEffectColors(warBoardStageBossEnt, 0LL);
  }
  else
  {
    bossColor = (Il2CppObject *)StringLiteral_1262/*"0x"*/;
    TextEffectColors = (System_String_array *)sub_1C13DCC(string___TypeInfo, 0LL);
  }
  v10 = BasicHelper__IndexValue_object_(
          (System_Object_array *)TextEffectColors,
          restBreakPoint - 1,
          bossColor,
          (const MethodInfo_2F7E034 *)Method_BasicHelper_IndexValue_string___);
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
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  int32_t v20; // w9
  System_String_o *BOSS_POINT_BREAK_EFFECT_PREFAB; // x20
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  Il2CppObject *v25; // x0
  System_String_o *v26; // x0
  const MethodInfo *v27; // x2
  struct UnityEngine_GameObject_o *v28; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int32_t v35; // [xsp+8h] [xbp-38h] BYREF
  int32_t defeatEffectId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4BB210F & 1) == 0 )
  {
    sub_1C13D24(&int_TypeInfo, ent);
    sub_1C13D24(&WarBoardEventBossUIComponent_TypeInfo, v7);
    byte_4BB210F = 1;
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
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&this->fields.deadAnimPrefab,
      (int64_t)GameObjectFromEventUIAssetData,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
    v20 = ent->fields.defeatEffectId;
    BOSS_POINT_BREAK_EFFECT_PREFAB = WarBoardEventBossUIComponent_TypeInfo->static_fields->BOSS_POINT_BREAK_EFFECT_PREFAB;
    v35 = v20;
    v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v35, v22, v23, v24);
    v26 = System_String__Format(BOSS_POINT_BREAK_EFFECT_PREFAB, v25, 0LL);
    v28 = WarBoardEventBossUIComponent__GetGameObjectFromEventUIAssetData(this, v26, v27);
    this->fields.pointBreakAnimPrefab = v28;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&this->fields.pointBreakAnimPrefab,
      (int64_t)v28,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
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
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  __int64 v33; // x8
  _QWORD *v34; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v36; // x8
  int32_t v37; // [xsp+8h] [xbp-58h] BYREF
  int v38; // [xsp+Ch] [xbp-54h] BYREF

  v6 = this;
  if ( (byte_4BB2110 & 1) == 0 )
  {
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, *(_QWORD *)&eventId);
    sub_1C13D24(&int_TypeInfo, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_UIAtlas__Add__, v8);
    sub_1C13D24(&Method_System_Collections_Generic_List_UIAtlas__Clear__, v9);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v10);
    sub_1C13D24(&StringLiteral_25345/*"{0,"*/, v11);
    this = (WarBoardEventBossUIComponent_o *)sub_1C13D24(&StringLiteral_5479/*"DownloadEventAtlas"*/, v12);
    byte_4BB2110 = 1;
  }
  if ( v6->fields.assetData )
  {
    atlasList = v6->fields.atlasList;
    if ( !atlasList )
LABEL_22:
      sub_1C13F80(this, *(_QWORD *)&eventId);
    size = (unsigned int)atlasList->fields._size;
    v15 = atlasList->fields._version + 1;
    atlasList->fields._size = 0;
    atlasList->fields._version = v15;
    if ( (int)size >= 1 )
      System_Array__Clear((System_Array_o *)atlasList->fields._items, 0, size, 0LL);
    for ( i = 1; ; ++i )
    {
      v38 = i;
      v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v38, size, v3, v4);
      v18 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_25345/*"{0,"*/, v17, 0LL);
      v37 = eventId;
      v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v37, v19, v20, v21);
      v23 = System_String__Format_62982316((System_String_o *)StringLiteral_5479/*"DownloadEventAtlas"*/, v22, v18, 0LL);
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
                           (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
        break;
      this = (WarBoardEventBossUIComponent_o *)v6->fields.atlasList;
      if ( !this )
        goto LABEL_22;
      v33 = *(_QWORD *)&this->fields.m_CachedPtr;
      v34 = Method_System_Collections_Generic_List_UIAtlas__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !v33 )
        goto LABEL_22;
      m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v33 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          Component_object,
          *(const MethodInfo_362D1CC **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
      }
      else
      {
        v36 = v33 + 8 * m_CancellationTokenSource_low;
        LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v36 + 32) = Component_object;
        sub_1C13CC8((PartyOrganizationUtility_o *)(v36 + 32), (int64_t)Component_object, v27, v28, v29, v30, v31, v32);
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
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  Il2CppObject *deadAnimPrefab; // x22
  Il2CppObject *v27; // x22
  Il2CppObject *Component_object; // x22
  System_Action_o *v29; // x19
  System_Action_o *v30; // x19
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7

  if ( (byte_4BB2112 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, endAction);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___, v5);
    sub_1C13D24(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v7);
    sub_1C13D24(&Method_WarBoardEventBossUIComponent___c__DisplayClass50_0__PlayDaedAnim_b__0__, v8);
    sub_1C13D24(&Method_WarBoardEventBossUIComponent___c__DisplayClass50_0__PlayDaedAnim_b__1__, v9);
    sub_1C13D24(&WarBoardEventBossUIComponent___c__DisplayClass50_0_TypeInfo, v10);
    byte_4BB2112 = 1;
  }
  v11 = sub_1C13F70(WarBoardEventBossUIComponent___c__DisplayClass50_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_13;
  *(_QWORD *)(v11 + 16) = this;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v11 + 16), (int64_t)this, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v11 + 24) = endAction;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v11 + 24), (int64_t)endAction, v20, v21, v22, v23, v24, v25);
  deadAnimPrefab = (Il2CppObject *)this->fields.deadAnimPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v27 = UnityEngine_Object__Instantiate_object_(
          deadAnimPrefab,
          (const MethodInfo_3014D84 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  GameObjectExtensions__SafeSetParent((UnityEngine_GameObject_o *)v27, (UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__ResetLocalPosition((UnityEngine_GameObject_o *)v27, 0LL);
  if ( !v27 )
    goto LABEL_13;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)v27,
                       (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
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
    sub_1C13F80(bossIconSp, v13);
  }
  v29 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
  System_Action___ctor(
    v29,
    (Il2CppObject *)v11,
    Method_WarBoardEventBossUIComponent___c__DisplayClass50_0__PlayDaedAnim_b__0__,
    0LL);
  if ( !Component_object )
    goto LABEL_13;
  CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)Component_object, 0, v29, 0LL);
  v30 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
  System_Action___ctor(
    v30,
    (Il2CppObject *)v11,
    Method_WarBoardEventBossUIComponent___c__DisplayClass50_0__PlayDaedAnim_b__1__,
    0LL);
  Component_object[2].monitor = v30;
  sub_1C13CC8((PartyOrganizationUtility_o *)&Component_object[2].monitor, (int64_t)v30, v31, v32, v33, v34, v35, v36);
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
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  const MethodInfo *v26; // x2
  struct WarBoardUserServantData_o *oldBossInfo; // x8
  int32_t *p_defeatPoint; // x8
  struct WarBoardPieceData_o *bossPieceData; // x8
  int32_t v30; // w1
  __int64 v31; // x8
  struct WarBoardUserServantData_o *v32; // x9
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  EasingObject_o *v41; // x20
  System_Action_o *v42; // x21
  System_Action_o *v43; // x22

  if ( (byte_4BB2114 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, endAction);
    sub_1C13D24(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v7);
    sub_1C13D24(&Method_WarBoardEventBossUIComponent___c__DisplayClass52_0__PlayHpCut_b__0__, v8);
    sub_1C13D24(&Method_WarBoardEventBossUIComponent___c__DisplayClass52_0__PlayHpCut_b__1__, v9);
    sub_1C13D24(&WarBoardEventBossUIComponent___c__DisplayClass52_0_TypeInfo, v10);
    byte_4BB2114 = 1;
  }
  v11 = sub_1C13F70(WarBoardEventBossUIComponent___c__DisplayClass52_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_20;
  *(_QWORD *)(v11 + 24) = this;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v11 + 24), (int64_t)this, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v11 + 48) = endAction;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v11 + 48), (int64_t)endAction, v20, v21, v22, v23, v24, v25);
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
    v30 = *p_defeatPoint;
    goto LABEL_10;
  }
  v30 = 0;
LABEL_10:
  MaxHpByBreakPoint = WarBoardEventBossUIComponent__GetMaxHpByBreakPoint(this, v30, v26);
  *(_QWORD *)(v11 + 32) = MaxHpByBreakPoint;
  if ( this->fields.isPointBreak || (MaxHpByBreakPoint = (int64_t)this->fields.bossPieceData) == 0 )
  {
    v31 = 0LL;
  }
  else
  {
    MaxHpByBreakPoint = WarBoardPieceData__get_CurrentHp((WarBoardPieceData_o *)MaxHpByBreakPoint, 0LL);
    v31 = (int)MaxHpByBreakPoint;
  }
  *(_QWORD *)(v11 + 40) = v31;
  v32 = this->fields.oldBossInfo;
  if ( !v32 )
    goto LABEL_20;
  if ( v31 == v32->fields.currentHp )
  {
    ActionExtensions__Call(*(System_Action_o **)(v11 + 48), 0LL);
    return;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_2FE14E4 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v11 + 16) = Component_object;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v11 + 16), (int64_t)Component_object, v35, v36, v37, v38, v39, v40);
  v41 = *(EasingObject_o **)(v11 + 16);
  v42 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
  System_Action___ctor(
    v42,
    (Il2CppObject *)v11,
    Method_WarBoardEventBossUIComponent___c__DisplayClass52_0__PlayHpCut_b__0__,
    0LL);
  v43 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
  System_Action___ctor(
    v43,
    (Il2CppObject *)v11,
    Method_WarBoardEventBossUIComponent___c__DisplayClass52_0__PlayHpCut_b__1__,
    0LL);
  if ( !v41 )
LABEL_20:
    sub_1C13F80(MaxHpByBreakPoint, v13);
  EasingObject__Play(v41, duration, v42, v43, 0.0, 0, 0LL);
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
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  const MethodInfo *v26; // x2
  struct WarBoardPieceData_o *bossPieceData; // x8
  int32_t v28; // w1
  float value; // s0
  WarBoardPieceData_o *v30; // x0
  double v31; // d0
  float v32; // s0
  float v33; // s1
  bool v34; // nf
  float v35; // s0
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  EasingObject_o *v44; // x20
  System_Action_o *v45; // x21
  System_Action_o *v46; // x22

  if ( (byte_4BB2115 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, endAction);
    sub_1C13D24(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v7);
    sub_1C13D24(&Method_WarBoardEventBossUIComponent___c__DisplayClass53_0__PlayHpRecover_b__0__, v8);
    sub_1C13D24(&Method_WarBoardEventBossUIComponent___c__DisplayClass53_0__PlayHpRecover_b__1__, v9);
    sub_1C13D24(&WarBoardEventBossUIComponent___c__DisplayClass53_0_TypeInfo, v10);
    byte_4BB2115 = 1;
  }
  v11 = sub_1C13F70(WarBoardEventBossUIComponent___c__DisplayClass53_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_15;
  *(_QWORD *)(v11 + 24) = this;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v11 + 24), (int64_t)this, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v11 + 40) = endAction;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v11 + 40), (int64_t)endAction, v20, v21, v22, v23, v24, v25);
  bossPieceData = this->fields.bossPieceData;
  v28 = bossPieceData ? bossPieceData->fields._breakPoint_k__BackingField : 0;
  *(_QWORD *)(v11 + 32) = WarBoardEventBossUIComponent__GetMaxHpByBreakPoint(this, v28, v26);
  hpBarSlider = (UIProgressBar_o *)this->fields.hpBarSlider;
  if ( !hpBarSlider )
    goto LABEL_15;
  value = UIProgressBar__get_value(hpBarSlider, 0LL);
  v30 = this->fields.bossPieceData;
  this->fields.HPfrom = value;
  v31 = v30 ? (double)WarBoardPieceData__get_CurrentHp(v30, 0LL) : 0.0;
  v32 = v31 / (double)*(__int64 *)(v11 + 32);
  v33 = fminf(v32, 1.0);
  v34 = v32 < 0.0;
  v35 = 0.0;
  if ( !v34 )
    v35 = v33;
  this->fields.HPto = v35;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_2FE14E4 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v11 + 16) = Component_object;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v11 + 16), (int64_t)Component_object, v38, v39, v40, v41, v42, v43);
  v44 = *(EasingObject_o **)(v11 + 16);
  v45 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
  System_Action___ctor(
    v45,
    (Il2CppObject *)v11,
    Method_WarBoardEventBossUIComponent___c__DisplayClass53_0__PlayHpRecover_b__0__,
    0LL);
  v46 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
  System_Action___ctor(
    v46,
    (Il2CppObject *)v11,
    Method_WarBoardEventBossUIComponent___c__DisplayClass53_0__PlayHpRecover_b__1__,
    0LL);
  if ( !v44 )
LABEL_15:
    sub_1C13F80(hpBarSlider, v13);
  EasingObject__Play(v44, duration, v45, v46, 0.0, 0, 0LL);
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
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  System_Action_o **v19; // x20
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  struct WarBoardUserServantData_o *oldBossInfo; // x9
  struct WarBoardEventBossUIComponent_BreakIcon_array *breakIconList; // x8
  unsigned int v28; // w9
  WarBoardEventBossUIComponent_BreakIcon_o *v29; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *pointBreakAnimPrefab; // x22
  UnityEngine_GameObject_o *v32; // x23
  Il2CppObject *v33; // x22
  Il2CppObject *Component_object; // x22
  const MethodInfo *v35; // x2
  struct WarBoardPieceData_o *bossPieceData; // x8
  UILabel_o *totalHpLabel; // x21
  int32_t breakPoint_k__BackingField; // w1
  System_Action_o *v39; // x19
  int v40; // s0
  const MethodInfo *v44; // x3
  struct WarBoardUserServantData_o *currentBossInfo; // x8
  struct WarBoardPieceData_o *v46; // x9
  int32_t v47; // w2

  if ( (byte_4BB2113 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, endAction);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___, v5);
    sub_1C13D24(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v7);
    sub_1C13D24(&Method_WarBoardEventBossUIComponent___c__DisplayClass51_0__PlayPointBreakAnim_b__0__, v8);
    sub_1C13D24(&WarBoardEventBossUIComponent___c__DisplayClass51_0_TypeInfo, v9);
    byte_4BB2113 = 1;
  }
  v10 = sub_1C13F70(WarBoardEventBossUIComponent___c__DisplayClass51_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    goto LABEL_24;
  *(_QWORD *)(v10 + 16) = this;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v10 + 16), (int64_t)this, v13, v14, v15, v16, v17, v18);
  *(_QWORD *)(v10 + 24) = endAction;
  v19 = (System_Action_o **)(v10 + 24);
  sub_1C13CC8((PartyOrganizationUtility_o *)(v10 + 24), (int64_t)endAction, v20, v21, v22, v23, v24, v25);
  oldBossInfo = this->fields.oldBossInfo;
  if ( !oldBossInfo )
    goto LABEL_24;
  breakIconList = this->fields.breakIconList;
  if ( !breakIconList )
    goto LABEL_24;
  v28 = (oldBossInfo->fields.defeatPoint - 1) & ~((oldBossInfo->fields.defeatPoint - 1) >> 31);
  if ( v28 >= breakIconList->max_length )
    sub_1C13F88(Sprite, v12);
  v29 = breakIconList->m_Items[v28];
  if ( !v29 )
    goto LABEL_24;
  Sprite = (UnityEngine_Component_o *)v29->fields.Sprite;
  if ( !Sprite )
    goto LABEL_24;
  gameObject = UnityEngine_Component__get_gameObject(Sprite, 0LL);
  pointBreakAnimPrefab = (Il2CppObject *)this->fields.pointBreakAnimPrefab;
  v32 = gameObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v33 = UnityEngine_Object__Instantiate_object_(
          pointBreakAnimPrefab,
          (const MethodInfo_3014D84 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  GameObjectExtensions__SafeSetParent_34717732((UnityEngine_GameObject_o *)v33, v32, 0LL);
  GameObjectExtensions__ResetLocalPosition((UnityEngine_GameObject_o *)v33, 0LL);
  if ( !v33 )
    goto LABEL_24;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)v33,
                       (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
  {
    v39 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
    System_Action___ctor(
      v39,
      (Il2CppObject *)v10,
      Method_WarBoardEventBossUIComponent___c__DisplayClass51_0__PlayPointBreakAnim_b__0__,
      0LL);
    if ( Component_object )
    {
      CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)Component_object, 0, v39, 0LL);
      return;
    }
LABEL_24:
    sub_1C13F80(Sprite, v12);
  }
  bossPieceData = this->fields.bossPieceData;
  totalHpLabel = this->fields.totalHpLabel;
  if ( bossPieceData )
    breakPoint_k__BackingField = bossPieceData->fields._breakPoint_k__BackingField;
  else
    breakPoint_k__BackingField = 0;
  *(UnityEngine_Color_o *)&v40 = WarBoardEventBossUIComponent__GetTextEffectColor(this, breakPoint_k__BackingField, v35);
  if ( !totalHpLabel )
    goto LABEL_24;
  UILabel__set_effectColor(totalHpLabel, *(UnityEngine_Color_o *)&v40, 0LL);
  currentBossInfo = this->fields.currentBossInfo;
  if ( !currentBossInfo )
    goto LABEL_24;
  v46 = this->fields.bossPieceData;
  if ( v46 )
    v47 = v46->fields._breakPoint_k__BackingField;
  else
    v47 = 0;
  WarBoardEventBossUIComponent__SetupBreakPoint(this, currentBossInfo->fields.maxDefeatPoint, v47, v44);
  this->fields.isPointBreak = 0;
  ActionExtensions__Call(*v19, 0LL);
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  WarBoardDataEntity_o **p_warBoardDataEnt; // x21
  __int64 defeatPoint; // x1
  __int64 bossIconSp; // x0
  struct WarBoardStageBossEntity_o *warBoardStageBossEnt; // x8
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  struct WarBoardStageBossEntity_o *v28; // x8
  _DWORD *v29; // x22
  struct WarBoardUserServantData_o *StageBossData; // x1
  struct WarBoardUserServantData_o **p_currentBossInfo; // x20
  struct WarBoardStageBossEntity_o *v32; // x8
  struct WarBoardPieceData_o *EventBossPiece; // x0
  struct WarBoardPieceData_o **p_bossPieceData; // x21
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  WarBoardUserServantData_o *v41; // x24
  struct WarBoardUserServantData_o **p_oldBossInfo; // x23
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  struct WarBoardUserServantData_o *currentBossInfo; // x8
  struct WarBoardUserServantData_o *v56; // x9
  int64_t breakHp; // x1
  const MethodInfo *v58; // x2
  struct WarBoardUserServantData_o *v59; // x8
  struct WarBoardUserServantData_o *v60; // x23
  WarBoardUserServantData_o *v61; // x23
  struct WarBoardUserServantData_o **v62; // x22
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  struct WarBoardUserServantData_o *v75; // x8
  struct WarBoardUserServantData_o *v76; // x9
  int64_t v77; // x1
  struct WarBoardUserServantData_o *v78; // x8
  struct WarBoardPieceData_o *v79; // x8
  struct WarBoardUserServantData_o *oldBossInfo; // x9
  struct WarBoardUserServantData_o *v81; // x8
  double v82; // d0
  float v83; // s1
  float HPfrom; // s0
  struct WarBoardUserServantData_o *v85; // x8
  double v86; // d9
  WarBoardPieceData_o *bossPieceData; // x0
  float v88; // s0
  float v89; // s1
  float v90; // s0
  double v91; // d0
  float v92; // s0
  float v93; // s1
  float v94; // s0
  const MethodInfo *v95; // x2
  struct WarBoardUserServantData_o *v96; // x8
  const MethodInfo *v97; // x3
  struct WarBoardUserServantData_o *v98; // x8
  __int64 v99; // x2
  __int64 v100; // x3
  __int64 v101; // x4
  struct WarBoardStageBossEntity_o *v102; // x8
  int idx; // w25
  UISprite_o *v104; // x20
  Il2CppObject *v105; // x21
  __int64 v106; // x2
  __int64 v107; // x3
  __int64 v108; // x4
  Il2CppObject *v109; // x0
  System_String_o *v110; // x0
  const MethodInfo *v111; // x3
  const MethodInfo *v112; // x3
  const MethodInfo *v113; // x3
  UISprite_o *hpBarUnderSprite; // x20
  __int64 v115; // x2
  __int64 v116; // x3
  __int64 v117; // x4
  Il2CppObject *v118; // x0
  System_String_o *v119; // x0
  const MethodInfo *v120; // x3
  UISprite_o *hpBarUpperSprite; // x20
  __int64 v122; // x2
  __int64 v123; // x3
  __int64 v124; // x4
  Il2CppObject *v125; // x0
  System_String_o *v126; // x0
  const MethodInfo *v127; // x3
  const MethodInfo *v128; // x3
  const MethodInfo *v129; // x2
  struct WarBoardUserServantData_o *v130; // x8
  float v131; // s0
  float v132; // s1
  float v133; // s2
  float v134; // s3
  float v135; // s8
  float v136; // s9
  float v137; // s10
  float v138; // s11
  const MethodInfo *v139; // x2
  struct WarBoardStageBossEntity_o *v140; // x8
  UILabel_o *bossName; // x19
  int v142; // [xsp+0h] [xbp-90h] BYREF
  int v143; // [xsp+4h] [xbp-8Ch] BYREF
  int v144; // [xsp+8h] [xbp-88h] BYREF
  int32_t iconId; // [xsp+Ch] [xbp-84h] BYREF
  UnityEngine_Color_o v146; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4BB2109 & 1) == 0 )
  {
    sub_1C13D24(&int_TypeInfo, warBoardDataEntity);
    sub_1C13D24(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v10);
    sub_1C13D24(&WarBoardUserServantData_TypeInfo, v11);
    sub_1C13D24(&StringLiteral_25039/*"warBoard/resume"*/, v12);
    sub_1C13D24(&StringLiteral_25042/*"warBoard/treasure"*/, v13);
    sub_1C13D24(&StringLiteral_25041/*"warBoard/start"*/, v14);
    sub_1C13D24(&StringLiteral_25043/*"warBoard/turnEnd"*/, v15);
    sub_1C13D24(&StringLiteral_25038/*"warBoard/reinforcements"*/, v16);
    sub_1C13D24(&StringLiteral_25040/*"warBoard/setup"*/, v17);
    byte_4BB2109 = 1;
  }
  this->fields.warBoardDataEnt = warBoardDataEntity;
  p_warBoardDataEnt = &this->fields.warBoardDataEnt;
  sub_1C13CC8(
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
  bossIconSp = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  warBoardStageBossEnt = this->fields.warBoardStageBossEnt;
  if ( !warBoardStageBossEnt )
    goto LABEL_67;
  if ( !bossIconSp )
    goto LABEL_67;
  bossIconSp = (__int64)WarBoardManager__GetEventBossUILoadData(
                          (WarBoardManager_o *)bossIconSp,
                          warBoardStageBossEnt->fields.idx,
                          0LL);
  v28 = this->fields.warBoardStageBossEnt;
  if ( !v28 )
    goto LABEL_67;
  v29 = (_DWORD *)bossIconSp;
  if ( *p_warBoardDataEnt )
    StageBossData = WarBoardDataEntity__GetStageBossData(*p_warBoardDataEnt, v28->fields.idx, 0LL);
  else
    StageBossData = 0LL;
  this->fields.currentBossInfo = StageBossData;
  p_currentBossInfo = &this->fields.currentBossInfo;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.currentBossInfo,
    (int64_t)StageBossData,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  if ( this->fields.currentBossInfo )
  {
    bossIconSp = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( bossIconSp )
    {
      v32 = this->fields.warBoardStageBossEnt;
      if ( v32 )
      {
        bossIconSp = *(_QWORD *)(bossIconSp + 440);
        if ( bossIconSp )
        {
          EventBossPiece = WarBoardData__GetEventBossPiece((WarBoardData_o *)bossIconSp, v32->fields.idx, 0LL);
          this->fields.bossPieceData = EventBossPiece;
          p_bossPieceData = &this->fields.bossPieceData;
          sub_1C13CC8(
            (PartyOrganizationUtility_o *)&this->fields.bossPieceData,
            (int64_t)EventBossPiece,
            v35,
            v36,
            v37,
            v38,
            v39,
            v40);
          if ( !v29 || (int)v29[6] < 3 )
            goto LABEL_24;
          if ( !*p_currentBossInfo )
            goto LABEL_67;
          if ( v29[8] == (*p_currentBossInfo)->fields.stageBossIdx )
          {
            v41 = (WarBoardUserServantData_o *)sub_1C13F70(WarBoardUserServantData_TypeInfo);
            WarBoardUserServantData___ctor(v41, 0LL);
            this->fields.oldBossInfo = v41;
            p_oldBossInfo = &this->fields.oldBossInfo;
            sub_1C13CC8(
              (PartyOrganizationUtility_o *)&this->fields.oldBossInfo,
              (int64_t)v41,
              v43,
              v44,
              v45,
              v46,
              v47,
              v48);
            currentBossInfo = this->fields.currentBossInfo;
            if ( !currentBossInfo )
              goto LABEL_67;
            v56 = *p_oldBossInfo;
            if ( !*p_oldBossInfo )
              goto LABEL_67;
            v56->fields.stageBossIdx = currentBossInfo->fields.stageBossIdx;
            breakHp = (int64_t)currentBossInfo->fields.breakHp;
            v56->fields.breakHp = (struct System_Int32_array *)breakHp;
            sub_1C13CC8((PartyOrganizationUtility_o *)&v56->fields.breakHp, breakHp, v49, v50, v51, v52, v53, v54);
            v59 = *p_currentBossInfo;
            if ( !*p_currentBossInfo )
              goto LABEL_67;
            v60 = *p_oldBossInfo;
            if ( !v60 )
              goto LABEL_67;
            v60->fields.maxDefeatPoint = v59->fields.maxDefeatPoint;
            if ( v29[6] <= 2u )
              sub_1C13F88(bossIconSp, defeatPoint);
            v60->fields.defeatPoint = v29[10];
            v60->fields.hp = v59->fields.hp;
            bossIconSp = (unsigned int)v29[9];
          }
          else
          {
LABEL_24:
            v61 = (WarBoardUserServantData_o *)sub_1C13F70(WarBoardUserServantData_TypeInfo);
            WarBoardUserServantData___ctor(v61, 0LL);
            this->fields.oldBossInfo = v61;
            v62 = &this->fields.oldBossInfo;
            sub_1C13CC8(
              (PartyOrganizationUtility_o *)&this->fields.oldBossInfo,
              (int64_t)v61,
              v63,
              v64,
              v65,
              v66,
              v67,
              v68);
            v75 = this->fields.currentBossInfo;
            if ( !v75 )
              goto LABEL_67;
            v76 = *v62;
            if ( !*v62 )
              goto LABEL_67;
            v76->fields.stageBossIdx = v75->fields.stageBossIdx;
            v77 = (int64_t)v75->fields.breakHp;
            v76->fields.breakHp = (struct System_Int32_array *)v77;
            sub_1C13CC8((PartyOrganizationUtility_o *)&v76->fields.breakHp, v77, v69, v70, v71, v72, v73, v74);
            v78 = *p_currentBossInfo;
            if ( !*p_currentBossInfo )
              goto LABEL_67;
            v60 = *v62;
            if ( !*v62 )
              goto LABEL_67;
            v60->fields.maxDefeatPoint = v78->fields.maxDefeatPoint;
            bossIconSp = (__int64)*p_bossPieceData;
            if ( *p_bossPieceData )
            {
              v60->fields.defeatPoint = *(_DWORD *)(bossIconSp + 52);
              v60->fields.hp = v78->fields.hp;
              bossIconSp = WarBoardPieceData__get_CurrentHp((WarBoardPieceData_o *)bossIconSp, 0LL);
            }
            else
            {
              v60->fields.defeatPoint = 0;
              v60->fields.hp = v78->fields.hp;
            }
          }
          v60->fields.currentHp = bossIconSp;
          v79 = *p_bossPieceData;
          if ( *p_bossPieceData )
            LODWORD(v79) = v79->fields._breakPoint_k__BackingField;
          oldBossInfo = this->fields.oldBossInfo;
          if ( oldBossInfo )
          {
            defeatPoint = (unsigned int)oldBossInfo->fields.defeatPoint;
            this->fields.isPointBreak = (int)v79 < (int)defeatPoint;
            if ( (int)v79 < (int)defeatPoint )
            {
              bossIconSp = WarBoardEventBossUIComponent__GetMaxHpByBreakPoint(this, defeatPoint, v58);
              v81 = this->fields.oldBossInfo;
              if ( !v81 )
                goto LABEL_67;
              v82 = (double)bossIconSp;
              bossIconSp = (__int64)this->fields.hpBarSlider;
              *(float *)&v82 = (double)v81->fields.currentHp / v82;
              v83 = fminf(*(float *)&v82, 1.0);
              HPfrom = *(float *)&v82 < 0.0 ? 0.0 : v83;
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
                             v58);
              v85 = this->fields.oldBossInfo;
              if ( v85 )
              {
                v86 = (double)bossIconSp;
                bossPieceData = this->fields.bossPieceData;
                v88 = (double)v85->fields.currentHp / v86;
                v89 = fminf(v88, 1.0);
                v90 = v88 < 0.0 ? 0.0 : v89;
                this->fields.HPfrom = v90;
                v91 = bossPieceData ? (double)WarBoardPieceData__get_CurrentHp(bossPieceData, 0LL) : 0.0;
                bossIconSp = (__int64)this->fields.hpBarSlider;
                v92 = v91 / v86;
                v93 = fminf(v92, 1.0);
                v94 = v92 < 0.0 ? 0.0 : v93;
                this->fields.HPto = v94;
                if ( bossIconSp )
                {
                  HPfrom = this->fields.HPfrom;
LABEL_57:
                  UIProgressBar__set_value((UIProgressBar_o *)bossIconSp, HPfrom, 0LL);
                  v96 = this->fields.oldBossInfo;
                  if ( !v96 )
                    goto LABEL_67;
                  WarBoardEventBossUIComponent__SetTotalHpText(this, v96->fields.currentHp, v95);
                  bossIconSp = (__int64)this->fields.hpBarSliderUnder;
                  if ( !bossIconSp )
                    goto LABEL_67;
                  UIProgressBar__set_value((UIProgressBar_o *)bossIconSp, 0.0, 0LL);
                  v98 = this->fields.oldBossInfo;
                  if ( !v98 )
                    goto LABEL_67;
                  WarBoardEventBossUIComponent__SetupBreakPoint(
                    this,
                    v98->fields.maxDefeatPoint,
                    v98->fields.defeatPoint,
                    v97);
                  v102 = this->fields.warBoardStageBossEnt;
                  if ( !v102 )
                    goto LABEL_67;
                  idx = v102->fields.idx;
                  v104 = this->fields.bossIconSp;
                  iconId = v102->fields.iconId;
                  v105 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId, v99, v100, v101);
                  v144 = idx;
                  v109 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v144, v106, v107, v108);
                  v110 = System_String__Format_62982316((System_String_o *)StringLiteral_25043/*"warBoard/turnEnd"*/, v105, v109, 0LL);
                  WarBoardEventBossUIComponent__SetSpriteByLocalAtlas(this, v104, v110, v111);
                  WarBoardEventBossUIComponent__SetSpriteByLocalAtlas(
                    this,
                    this->fields.bossHpFrame,
                    (System_String_o *)StringLiteral_25039/*"warBoard/resume"*/,
                    v112);
                  WarBoardEventBossUIComponent__SetSpriteByLocalAtlas(
                    this,
                    this->fields.bossHpBg,
                    (System_String_o *)StringLiteral_25038/*"warBoard/reinforcements"*/,
                    v113);
                  hpBarUnderSprite = this->fields.hpBarUnderSprite;
                  v143 = idx;
                  v118 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v143, v115, v116, v117);
                  v119 = System_String__Format((System_String_o *)StringLiteral_25040/*"warBoard/setup"*/, v118, 0LL);
                  WarBoardEventBossUIComponent__SetSpriteByLocalAtlas(this, hpBarUnderSprite, v119, v120);
                  hpBarUpperSprite = this->fields.hpBarUpperSprite;
                  v142 = idx;
                  v125 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v142, v122, v123, v124);
                  v126 = System_String__Format((System_String_o *)StringLiteral_25041/*"warBoard/start"*/, v125, 0LL);
                  WarBoardEventBossUIComponent__SetSpriteByLocalAtlas(this, hpBarUpperSprite, v126, v127);
                  bossIconSp = WarBoardEventBossUIComponent__SetSpriteByLocalAtlas(
                                 this,
                                 this->fields.hpBarWhiteSprite,
                                 (System_String_o *)StringLiteral_25042/*"warBoard/treasure"*/,
                                 v128);
                  v130 = this->fields.oldBossInfo;
                  if ( !v130 )
                    goto LABEL_67;
                  *(UnityEngine_Color_o *)&v131 = WarBoardEventBossUIComponent__GetTextEffectColor(
                                                    this,
                                                    v130->fields.defeatPoint,
                                                    v129);
                  bossIconSp = (__int64)this->fields.totalHpLabel;
                  if ( !bossIconSp )
                    goto LABEL_67;
                  v135 = v131;
                  v136 = v132;
                  v137 = v133;
                  v138 = v134;
                  UILabel__set_effectColor((UILabel_o *)bossIconSp, *(UnityEngine_Color_o *)&v131, 0LL);
                  bossIconSp = (__int64)this->fields.bossName;
                  if ( !bossIconSp )
                    goto LABEL_67;
                  v146.fields.r = v135;
                  v146.fields.g = v136;
                  v146.fields.b = v137;
                  v146.fields.a = v138;
                  UILabel__set_effectColor((UILabel_o *)bossIconSp, v146, 0LL);
                  v140 = this->fields.warBoardStageBossEnt;
                  if ( !v140 )
                    goto LABEL_67;
                  bossName = this->fields.bossName;
                  bossIconSp = (__int64)WarBoardEventBossUIComponent__GetStageBossName(
                                          (WarBoardEventBossUIComponent_o *)bossIconSp,
                                          v140->fields.idx,
                                          v139);
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
    sub_1C13F80(bossIconSp, defeatPoint);
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

  if ( (byte_4BB2111 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Linq_Enumerable_Any_UIAtlas___, sprite);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__, v8);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__get_Current__, v9);
    sub_1C13D24(&Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__, v10);
    byte_4BB2111 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  IsNullOrEmpty = (struct System_Collections_Generic_List_UIAtlas__o *)System_String__IsNullOrEmpty(spriteName, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0
    || (IsNullOrEmpty = (struct System_Collections_Generic_List_UIAtlas__o *)System_Linq_Enumerable__Any_object_(
                                                                               (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.atlasList,
                                                                               (const MethodInfo_2F9A90C *)Method_System_Linq_Enumerable_Any_UIAtlas___),
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
    (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
  v20 = v19;
  do
  {
    v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v20,
            (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    if ( !v13 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v20,
        (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
      if ( sprite )
      {
        UISprite__set_spriteName(sprite, 0LL, 0LL);
        return 0;
      }
LABEL_19:
      sub_1C13F80(IsNullOrEmpty, v12);
    }
    current = v20.fields._current;
    if ( !v20.fields._current )
      sub_1C13F80(v13, v14);
    v16 = UIAtlas__GetSprite((UIAtlas_o *)v20.fields._current, spriteName, 0LL);
  }
  while ( !v16 );
  if ( !sprite )
    sub_1C13F80(v16, v17);
  UISprite__set_atlas(sprite, (UIAtlas_o *)current, 0LL);
  UISprite__set_spriteName(sprite, spriteName, 0LL);
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v20,
    (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
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

  if ( (byte_4BB210A & 1) == 0 )
  {
    sub_1C13D24(&long_TypeInfo, hp);
    sub_1C13D24(&LocalizationManager_TypeInfo, v5);
    sub_1C13D24(&StringLiteral_3817/*"COMMON_EQUIP_USED"*/, v6);
    byte_4BB210A = 1;
  }
  totalHpLabel = this->fields.totalHpLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_3817/*"COMMON_EQUIP_USED"*/, 0LL);
  v15 = hp;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v15, v9, v10, v11);
  v13 = System_String__Format(v8, v12, 0LL);
  if ( !totalHpLabel )
    sub_1C13F80(v13, v14);
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
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.warBoardStageBossEnt,
    (int64_t)warBoardStageBossEnt,
    (int64_t)warBoardStageBossEnt,
    (int32_t)warBoardDataEnt,
    (System_String_o *)assetData,
    (BattleSetupInfo_o *)method,
    v6,
    v7);
  this->fields.assetData = assetData;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.assetData, (int64_t)assetData, v13, v14, v15, v16, v17, v18);
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
      sub_1C13F80(this, *(_QWORD *)&maxCount);
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
    sub_1C13F88(this, *(_QWORD *)&maxCount);
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
          sub_1C13F80(CurrentHp, v7);
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
    sub_1C13F80(this, 0LL);
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
    sub_1C13F80(this, method);
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
    sub_1C13F80(_4__this, method);
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
    sub_1C13F80(this, method);
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
    sub_1C13F80(0LL, method);
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
    sub_1C13F80(this, method);
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
    sub_1C13F80(this, method);
  bossPieceData = _4__this->fields.bossPieceData;
  if ( bossPieceData )
    CurrentHp = WarBoardPieceData__get_CurrentHp(bossPieceData, 0LL);
  else
    CurrentHp = 0LL;
  WarBoardEventBossUIComponent__SetTotalHpText(_4__this, CurrentHp, v2);
  ActionExtensions__Call(this->fields.endAction, 0LL);
}