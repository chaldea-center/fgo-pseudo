void __fastcall WarBoardEventBossUIComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t v6; // w1
  struct WarBoardEventBossUIComponent_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_49F9FF8 & 1) == 0 )
  {
    sub_1B640C8(&WarBoardEventBossUIComponent_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_15514/*"WarBoardEventBossEffect_Break{0}"*/, v4);
    sub_1B640C8(&StringLiteral_15515/*"WarBoardEventBossEffect_Dead{0}"*/, v5);
    byte_49F9FF8 = 1;
  }
  WarBoardEventBossUIComponent_TypeInfo->static_fields->BOSS_CLEAR_EFFECT_PREFAB = (struct System_String_o *)StringLiteral_15515/*"WarBoardEventBossEffect_Dead{0}"*/;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)WarBoardEventBossUIComponent_TypeInfo->static_fields,
    StringLiteral_15515/*"WarBoardEventBossEffect_Dead{0}"*/,
    v2,
    v3);
  v6 = StringLiteral_15514/*"WarBoardEventBossEffect_Break{0}"*/;
  static_fields = WarBoardEventBossUIComponent_TypeInfo->static_fields;
  static_fields->BOSS_POINT_BREAK_EFFECT_PREFAB = (struct System_String_o *)StringLiteral_15514/*"WarBoardEventBossEffect_Break{0}"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->BOSS_POINT_BREAK_EFFECT_PREFAB, v6, v8, v9);
}


void __fastcall WarBoardEventBossUIComponent___ctor(WarBoardEventBossUIComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_49F9FF7 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_UIAtlas___ctor__, method);
    sub_1B640C8(&System_Collections_Generic_List_UIAtlas__TypeInfo, v4);
    byte_49F9FF7 = 1;
  }
  *(_QWORD *)&this->fields.breakEffectStartWaitTime = 0x3E99999A3F800000LL;
  v5 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_UIAtlas__TypeInfo,
                                                      method,
                                                      v2);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_UIAtlas___ctor__);
  this->fields.atlasList = (struct System_Collections_Generic_List_UIAtlas__o *)v5;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.atlasList, (int32_t)v5, v6, v7);
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

  if ( (byte_49F9FF6 & 1) == 0 )
  {
    sub_1B640C8(&System_Convert_TypeInfo, hexStrColor);
    byte_49F9FF6 = 1;
  }
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v4 = System_Convert__ToInt32_62042192(hexStrColor, 16, 0LL);
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
  __int64 v4; // x1
  __int64 v5; // x1
  System_Text_StringBuilder_o *v6; // x20
  System_Text_StringBuilder_o *appended; // x0
  struct WarBoardUserServantData_o *oldBossInfo; // x8
  struct WarBoardUserServantData_o *v9; // x8
  struct WarBoardUserServantData_o *v10; // x8

  if ( (byte_49F9FF5 & 1) == 0 )
  {
    sub_1B640C8(&System_Text_StringBuilder_TypeInfo, method);
    sub_1B640C8(&StringLiteral_1546/*":"*/, v4);
    sub_1B640C8(&StringLiteral_1/*""*/, v5);
    byte_49F9FF5 = 1;
  }
  if ( !this->fields.oldBossInfo )
    return (System_String_o *)StringLiteral_1/*""*/;
  v6 = (System_Text_StringBuilder_o *)sub_1B64314(System_Text_StringBuilder_TypeInfo, method, v2);
  System_Text_StringBuilder___ctor(v6, 0LL);
  oldBossInfo = this->fields.oldBossInfo;
  if ( !oldBossInfo
    || !v6
    || (System_Text_StringBuilder__Append_60539044(v6, oldBossInfo->fields.stageBossIdx, 0LL),
        appended = System_Text_StringBuilder__Append_60536548(v6, (System_String_o *)StringLiteral_1546/*":"*/, 0LL),
        (v9 = this->fields.oldBossInfo) == 0LL)
    || (System_Text_StringBuilder__Append_60539044(v6, v9->fields.currentHp, 0LL),
        appended = System_Text_StringBuilder__Append_60536548(v6, (System_String_o *)StringLiteral_1546/*":"*/, 0LL),
        (v10 = this->fields.oldBossInfo) == 0LL) )
  {
    sub_1B64324(appended);
  }
  System_Text_StringBuilder__Append_60539044(v6, v10->fields.defeatPoint, 0LL);
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v6->klass->vtable._3_ToString.method)(
                              v6,
                              v6->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
}


UnityEngine_GameObject_o *__fastcall WarBoardEventBossUIComponent__GetGameObjectFromEventUIAssetData(
        WarBoardEventBossUIComponent_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *result; // x0

  if ( (byte_49F9FED & 1) == 0 )
  {
    sub_1B640C8(&Method_AssetData_GetObject_GameObject____75705960, name);
    byte_49F9FED = 1;
  }
  result = (UnityEngine_GameObject_o *)this->fields.assetData;
  if ( result )
    return (UnityEngine_GameObject_o *)AssetData__GetObject_object__48347676(
                                         (AssetData_o *)result,
                                         name,
                                         (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960);
  return result;
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall WarBoardEventBossUIComponent__GetMaxHpByBreakPoint(
        WarBoardEventBossUIComponent_o *this,
        int32_t restBreakPoint,
        const MethodInfo *method)
{
  struct WarBoardUserServantData_o *currentBossInfo; // x8

  if ( (byte_49F9FEC & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_IndexValue_int____75711232, *(_QWORD *)&restBreakPoint);
    byte_49F9FEC = 1;
  }
  currentBossInfo = this->fields.currentBossInfo;
  if ( currentBossInfo )
    return BasicHelper__IndexValue_int_(
             currentBossInfo->fields.breakHp,
             restBreakPoint,
             currentBossInfo->fields.hp,
             (const MethodInfo_2E28154 *)Method_BasicHelper_IndexValue_int____75711232);
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
  __int64 v12; // x2
  _QWORD *monitor; // x8
  __int64 v14; // x19
  System_Func_object__bool__o *v15; // x21
  Il2CppObject *object; // x0
  BattleServantData_o *klass; // x0

  if ( (byte_49F9FEA & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_Find_WarBoardPieceData___, *(_QWORD *)&stageBossIndex);
    sub_1B640C8(&System_Func_WarBoardPieceData__bool__TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v5);
    sub_1B640C8(&string_TypeInfo, v6);
    sub_1B640C8(&Method_WarBoardEventBossUIComponent___c__DisplayClass37_0__GetStageBossName_b__0__, v7);
    sub_1B640C8(&WarBoardEventBossUIComponent___c__DisplayClass37_0_TypeInfo, v8);
    byte_49F9FEA = 1;
  }
  v9 = sub_1B64314(WarBoardEventBossUIComponent___c__DisplayClass37_0_TypeInfo, *(_QWORD *)&stageBossIndex, method);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9
    || (*(_DWORD *)(v9 + 16) = stageBossIndex,
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL)
    || (monitor = Instance[27].monitor) == 0LL )
  {
    sub_1B64324(Instance);
  }
  v14 = monitor[6];
  if ( v14
    && *(_QWORD *)(v14 + 24)
    && (v15 = (System_Func_object__bool__o *)sub_1B64314(System_Func_WarBoardPieceData__bool__TypeInfo, v11, v12),
        System_Func_object__bool____ctor(
          v15,
          (Il2CppObject *)v9,
          Method_WarBoardEventBossUIComponent___c__DisplayClass37_0__GetStageBossName_b__0__,
          0LL),
        (object = BasicHelper__Find_object_(
                    (System_Object_array *)v14,
                    (System_Func_T__bool__o *)v15,
                    (const MethodInfo_2E2543C *)Method_BasicHelper_Find_WarBoardPieceData___)) != 0LL)
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

  if ( (byte_49F9FEB & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_IndexValue_string___, *(_QWORD *)&restBreakPoint);
    sub_1B640C8(&string___TypeInfo, v5);
    sub_1B640C8(&StringLiteral_1264/*"0x000000"*/, v6);
    byte_49F9FEB = 1;
  }
  warBoardStageBossEnt = this->fields.warBoardStageBossEnt;
  if ( warBoardStageBossEnt )
  {
    bossColor = (Il2CppObject *)warBoardStageBossEnt->fields.bossColor;
    TextEffectColors = WarBoardStageBossEntity__GetTextEffectColors(warBoardStageBossEnt, 0LL);
  }
  else
  {
    bossColor = (Il2CppObject *)StringLiteral_1264/*"0x000000"*/;
    TextEffectColors = (System_String_array *)sub_1B64170(string___TypeInfo, 0LL);
  }
  v10 = BasicHelper__IndexValue_object_(
          (System_Object_array *)TextEffectColors,
          restBreakPoint - 1,
          bossColor,
          (const MethodInfo_2E28238 *)Method_BasicHelper_IndexValue_string___);
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
  __int64 v5; // x1
  WarBoardEventBossUIComponent_c *v6; // x0
  System_String_o *BOSS_CLEAR_EFFECT_PREFAB; // x21
  Il2CppObject *v8; // x0
  System_String_o *v9; // x0
  const MethodInfo *v10; // x2
  struct UnityEngine_GameObject_o *GameObjectFromEventUIAssetData; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w9
  System_String_o *BOSS_POINT_BREAK_EFFECT_PREFAB; // x20
  Il2CppObject *v16; // x0
  System_String_o *v17; // x0
  const MethodInfo *v18; // x2
  struct UnityEngine_GameObject_o *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // [xsp+8h] [xbp-38h] BYREF
  int32_t defeatEffectId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_49F9FEE & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, ent);
    sub_1B640C8(&WarBoardEventBossUIComponent_TypeInfo, v5);
    byte_49F9FEE = 1;
  }
  if ( ent )
  {
    v6 = WarBoardEventBossUIComponent_TypeInfo;
    if ( !WarBoardEventBossUIComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardEventBossUIComponent_TypeInfo);
      v6 = WarBoardEventBossUIComponent_TypeInfo;
    }
    BOSS_CLEAR_EFFECT_PREFAB = v6->static_fields->BOSS_CLEAR_EFFECT_PREFAB;
    defeatEffectId = ent->fields.defeatEffectId;
    v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &defeatEffectId);
    v9 = System_String__Format(BOSS_CLEAR_EFFECT_PREFAB, v8, 0LL);
    GameObjectFromEventUIAssetData = WarBoardEventBossUIComponent__GetGameObjectFromEventUIAssetData(this, v9, v10);
    this->fields.deadAnimPrefab = GameObjectFromEventUIAssetData;
    sub_1B6406C(
      (ServantStatusBattleListViewItem_o *)&this->fields.deadAnimPrefab,
      (int32_t)GameObjectFromEventUIAssetData,
      v12,
      v13);
    v14 = ent->fields.defeatEffectId;
    BOSS_POINT_BREAK_EFFECT_PREFAB = WarBoardEventBossUIComponent_TypeInfo->static_fields->BOSS_POINT_BREAK_EFFECT_PREFAB;
    v22 = v14;
    v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22);
    v17 = System_String__Format(BOSS_POINT_BREAK_EFFECT_PREFAB, v16, 0LL);
    v19 = WarBoardEventBossUIComponent__GetGameObjectFromEventUIAssetData(this, v17, v18);
    this->fields.pointBreakAnimPrefab = v19;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.pointBreakAnimPrefab, (int32_t)v19, v20, v21);
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct System_Collections_Generic_List_UIAtlas__o *atlasList; // x8
  int32_t size; // w2
  int v13; // w9
  int i; // w28
  Il2CppObject *v15; // x0
  Il2CppObject *v16; // x21
  Il2CppObject *v17; // x0
  System_String_o *v18; // x0
  const MethodInfo *v19; // x2
  UnityEngine_Object_o *GameObjectFromEventUIAssetData; // x21
  Il2CppObject *Component_object; // x21
  int32_t v22; // w2
  int32_t v23; // w3
  __int64 v24; // x8
  _QWORD *v25; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v27; // x8
  int32_t v28; // [xsp+8h] [xbp-58h] BYREF
  int v29; // [xsp+Ch] [xbp-54h] BYREF

  v4 = this;
  if ( (byte_49F9FEF & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, *(_QWORD *)&eventId);
    sub_1B640C8(&int_TypeInfo, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_UIAtlas__Add__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_UIAtlas__Clear__, v7);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v8);
    sub_1B640C8(&StringLiteral_24845/*"{0:D2}"*/, v9);
    this = (WarBoardEventBossUIComponent_o *)sub_1B640C8(&StringLiteral_5355/*"DownloadEventUIAtlas{0}{1}"*/, v10);
    byte_49F9FEF = 1;
  }
  if ( v4->fields.assetData )
  {
    atlasList = v4->fields.atlasList;
    if ( !atlasList )
LABEL_22:
      sub_1B64324(this);
    size = atlasList->fields._size;
    v13 = atlasList->fields._version + 1;
    atlasList->fields._size = 0;
    atlasList->fields._version = v13;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)atlasList->fields._items, 0, size, 0LL);
    for ( i = 1; ; ++i )
    {
      v29 = i;
      v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29);
      v16 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_24845/*"{0:D2}"*/, v15, 0LL);
      v28 = eventId;
      v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28);
      v18 = System_String__Format_61389768((System_String_o *)StringLiteral_5355/*"DownloadEventUIAtlas{0}{1}"*/, v17, v16, 0LL);
      GameObjectFromEventUIAssetData = (UnityEngine_Object_o *)WarBoardEventBossUIComponent__GetGameObjectFromEventUIAssetData(
                                                                 v4,
                                                                 v18,
                                                                 v19);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (WarBoardEventBossUIComponent_o *)UnityEngine_Object__op_Equality(GameObjectFromEventUIAssetData, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
        break;
      if ( !GameObjectFromEventUIAssetData )
        goto LABEL_22;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)GameObjectFromEventUIAssetData,
                           (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
        break;
      this = (WarBoardEventBossUIComponent_o *)v4->fields.atlasList;
      if ( !this )
        goto LABEL_22;
      v24 = *(_QWORD *)&this->fields.m_CachedPtr;
      v25 = Method_System_Collections_Generic_List_UIAtlas__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !v24 )
        goto LABEL_22;
      m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v24 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          Component_object,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
      }
      else
      {
        v27 = v24 + 8 * m_CancellationTokenSource_low;
        LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v27 + 32) = Component_object;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v27 + 32), (int32_t)Component_object, v22, v23);
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
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w2
  int32_t v16; // w3
  Il2CppObject *deadAnimPrefab; // x22
  Il2CppObject *v18; // x22
  Il2CppObject *Component_object; // x22
  __int64 v20; // x1
  __int64 v21; // x2
  System_Action_o *v22; // x19
  __int64 v23; // x1
  __int64 v24; // x2
  System_Action_o *v25; // x19
  int32_t v26; // w2
  int32_t v27; // w3

  if ( (byte_49F9FF1 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, endAction);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___, v5);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v7);
    sub_1B640C8(&Method_WarBoardEventBossUIComponent___c__DisplayClass52_0__PlayDaedAnim_b__0__, v8);
    sub_1B640C8(&Method_WarBoardEventBossUIComponent___c__DisplayClass52_0__PlayDaedAnim_b__1__, v9);
    sub_1B640C8(&WarBoardEventBossUIComponent___c__DisplayClass52_0_TypeInfo, v10);
    byte_49F9FF1 = 1;
  }
  v11 = sub_1B64314(WarBoardEventBossUIComponent___c__DisplayClass52_0_TypeInfo, endAction, method);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_13;
  *(_QWORD *)(v11 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v11 + 16), (int32_t)this, v13, v14);
  *(_QWORD *)(v11 + 24) = endAction;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v11 + 24), (int32_t)endAction, v15, v16);
  deadAnimPrefab = (Il2CppObject *)this->fields.deadAnimPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v18 = UnityEngine_Object__Instantiate_object_(
          deadAnimPrefab,
          (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  GameObjectExtensions__SafeSetParent((UnityEngine_GameObject_o *)v18, (UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__ResetLocalPosition((UnityEngine_GameObject_o *)v18, 0LL);
  if ( !v18 )
    goto LABEL_13;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)v18,
                       (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
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
    sub_1B64324(bossIconSp);
  }
  v22 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v20, v21);
  System_Action___ctor(
    v22,
    (Il2CppObject *)v11,
    Method_WarBoardEventBossUIComponent___c__DisplayClass52_0__PlayDaedAnim_b__0__,
    0LL);
  if ( !Component_object )
    goto LABEL_13;
  CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)Component_object, 0, v22, 0LL);
  v25 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v23, v24);
  System_Action___ctor(
    v25,
    (Il2CppObject *)v11,
    Method_WarBoardEventBossUIComponent___c__DisplayClass52_0__PlayDaedAnim_b__1__,
    0LL);
  Component_object[2].monitor = v25;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&Component_object[2].monitor, (int32_t)v25, v26, v27);
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
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w2
  int32_t v16; // w3
  const MethodInfo *v17; // x2
  struct WarBoardUserServantData_o *oldBossInfo; // x8
  int32_t *p_defeatPoint; // x8
  struct WarBoardPieceData_o *bossPieceData; // x8
  int32_t v21; // w1
  __int64 v22; // x8
  struct WarBoardUserServantData_o *v23; // x9
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  EasingObject_o *v28; // x20
  __int64 v29; // x1
  __int64 v30; // x2
  System_Action_o *v31; // x21
  __int64 v32; // x1
  __int64 v33; // x2
  System_Action_o *v34; // x22

  if ( (byte_49F9FF3 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, endAction);
    sub_1B640C8(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v7);
    sub_1B640C8(&Method_WarBoardEventBossUIComponent___c__DisplayClass54_0__PlayHpCut_b__0__, v8);
    sub_1B640C8(&Method_WarBoardEventBossUIComponent___c__DisplayClass54_0__PlayHpCut_b__1__, v9);
    sub_1B640C8(&WarBoardEventBossUIComponent___c__DisplayClass54_0_TypeInfo, v10);
    byte_49F9FF3 = 1;
  }
  v11 = sub_1B64314(WarBoardEventBossUIComponent___c__DisplayClass54_0_TypeInfo, endAction, method);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_20;
  *(_QWORD *)(v11 + 24) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v11 + 24), (int32_t)this, v13, v14);
  *(_QWORD *)(v11 + 48) = endAction;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v11 + 48), (int32_t)endAction, v15, v16);
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
    v21 = *p_defeatPoint;
    goto LABEL_10;
  }
  v21 = 0;
LABEL_10:
  MaxHpByBreakPoint = WarBoardEventBossUIComponent__GetMaxHpByBreakPoint(this, v21, v17);
  *(_QWORD *)(v11 + 32) = MaxHpByBreakPoint;
  if ( this->fields.isPointBreak || (MaxHpByBreakPoint = (int64_t)this->fields.bossPieceData) == 0 )
  {
    v22 = 0LL;
  }
  else
  {
    MaxHpByBreakPoint = WarBoardPieceData__get_CurrentHp((WarBoardPieceData_o *)MaxHpByBreakPoint, 0LL);
    v22 = (int)MaxHpByBreakPoint;
  }
  *(_QWORD *)(v11 + 40) = v22;
  v23 = this->fields.oldBossInfo;
  if ( !v23 )
    goto LABEL_20;
  if ( v22 == v23->fields.currentHp )
  {
    ActionExtensions__Call(*(System_Action_o **)(v11 + 48), 0LL);
    return;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_2E899C0 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v11 + 16) = Component_object;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v11 + 16), (int32_t)Component_object, v26, v27);
  v28 = *(EasingObject_o **)(v11 + 16);
  v31 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v29, v30);
  System_Action___ctor(
    v31,
    (Il2CppObject *)v11,
    Method_WarBoardEventBossUIComponent___c__DisplayClass54_0__PlayHpCut_b__0__,
    0LL);
  v34 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v32, v33);
  System_Action___ctor(
    v34,
    (Il2CppObject *)v11,
    Method_WarBoardEventBossUIComponent___c__DisplayClass54_0__PlayHpCut_b__1__,
    0LL);
  if ( !v28 )
LABEL_20:
    sub_1B64324(MaxHpByBreakPoint);
  EasingObject__Play(v28, duration, v31, v34, 0.0, 0, 0LL);
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
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w2
  int32_t v16; // w3
  const MethodInfo *v17; // x2
  struct WarBoardPieceData_o *bossPieceData; // x8
  int32_t v19; // w1
  float value; // s0
  WarBoardPieceData_o *v21; // x0
  double v22; // d0
  float v23; // s0
  float v24; // s1
  bool v25; // nf
  float v26; // s0
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  EasingObject_o *v31; // x20
  __int64 v32; // x1
  __int64 v33; // x2
  System_Action_o *v34; // x21
  __int64 v35; // x1
  __int64 v36; // x2
  System_Action_o *v37; // x22

  if ( (byte_49F9FF4 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, endAction);
    sub_1B640C8(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v7);
    sub_1B640C8(&Method_WarBoardEventBossUIComponent___c__DisplayClass55_0__PlayHpRecover_b__0__, v8);
    sub_1B640C8(&Method_WarBoardEventBossUIComponent___c__DisplayClass55_0__PlayHpRecover_b__1__, v9);
    sub_1B640C8(&WarBoardEventBossUIComponent___c__DisplayClass55_0_TypeInfo, v10);
    byte_49F9FF4 = 1;
  }
  v11 = sub_1B64314(WarBoardEventBossUIComponent___c__DisplayClass55_0_TypeInfo, endAction, method);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_15;
  *(_QWORD *)(v11 + 24) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v11 + 24), (int32_t)this, v13, v14);
  *(_QWORD *)(v11 + 40) = endAction;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v11 + 40), (int32_t)endAction, v15, v16);
  bossPieceData = this->fields.bossPieceData;
  v19 = bossPieceData ? bossPieceData->fields._breakPoint_k__BackingField : 0;
  *(_QWORD *)(v11 + 32) = WarBoardEventBossUIComponent__GetMaxHpByBreakPoint(this, v19, v17);
  hpBarSlider = (UIProgressBar_o *)this->fields.hpBarSlider;
  if ( !hpBarSlider )
    goto LABEL_15;
  value = UIProgressBar__get_value(hpBarSlider, 0LL);
  v21 = this->fields.bossPieceData;
  this->fields.HPfrom = value;
  v22 = v21 ? (double)WarBoardPieceData__get_CurrentHp(v21, 0LL) : 0.0;
  v23 = v22 / (double)*(__int64 *)(v11 + 32);
  v24 = fminf(v23, 1.0);
  v25 = v23 < 0.0;
  v26 = 0.0;
  if ( !v25 )
    v26 = v24;
  this->fields.HPto = v26;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_2E899C0 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v11 + 16) = Component_object;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v11 + 16), (int32_t)Component_object, v29, v30);
  v31 = *(EasingObject_o **)(v11 + 16);
  v34 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v32, v33);
  System_Action___ctor(
    v34,
    (Il2CppObject *)v11,
    Method_WarBoardEventBossUIComponent___c__DisplayClass55_0__PlayHpRecover_b__0__,
    0LL);
  v37 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v35, v36);
  System_Action___ctor(
    v37,
    (Il2CppObject *)v11,
    Method_WarBoardEventBossUIComponent___c__DisplayClass55_0__PlayHpRecover_b__1__,
    0LL);
  if ( !v31 )
LABEL_15:
    sub_1B64324(hpBarSlider);
  EasingObject__Play(v31, duration, v34, v37, 0.0, 0, 0LL);
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
  int32_t v12; // w2
  int32_t v13; // w3
  System_Action_o **v14; // x20
  int32_t v15; // w2
  int32_t v16; // w3
  __int64 v17; // x1
  struct WarBoardUserServantData_o *oldBossInfo; // x9
  struct WarBoardEventBossUIComponent_BreakIcon_array *breakIconList; // x8
  unsigned int v20; // w9
  WarBoardEventBossUIComponent_BreakIcon_o *v21; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *pointBreakAnimPrefab; // x22
  UnityEngine_GameObject_o *v24; // x23
  Il2CppObject *v25; // x22
  Il2CppObject *Component_object; // x22
  __int64 v27; // x1
  const MethodInfo *v28; // x2
  struct WarBoardPieceData_o *bossPieceData; // x8
  UILabel_o *totalHpLabel; // x21
  int32_t breakPoint_k__BackingField; // w1
  System_Action_o *v32; // x19
  int v33; // s0
  const MethodInfo *v37; // x3
  struct WarBoardUserServantData_o *currentBossInfo; // x8
  struct WarBoardPieceData_o *v39; // x9
  int32_t v40; // w2

  if ( (byte_49F9FF2 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, endAction);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___, v5);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v7);
    sub_1B640C8(&Method_WarBoardEventBossUIComponent___c__DisplayClass53_0__PlayPointBreakAnim_b__0__, v8);
    sub_1B640C8(&WarBoardEventBossUIComponent___c__DisplayClass53_0_TypeInfo, v9);
    byte_49F9FF2 = 1;
  }
  v10 = sub_1B64314(WarBoardEventBossUIComponent___c__DisplayClass53_0_TypeInfo, endAction, method);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    goto LABEL_24;
  *(_QWORD *)(v10 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v10 + 16), (int32_t)this, v12, v13);
  *(_QWORD *)(v10 + 24) = endAction;
  v14 = (System_Action_o **)(v10 + 24);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v10 + 24), (int32_t)endAction, v15, v16);
  oldBossInfo = this->fields.oldBossInfo;
  if ( !oldBossInfo )
    goto LABEL_24;
  breakIconList = this->fields.breakIconList;
  if ( !breakIconList )
    goto LABEL_24;
  v20 = (oldBossInfo->fields.defeatPoint - 1) & ~((oldBossInfo->fields.defeatPoint - 1) >> 31);
  if ( v20 >= breakIconList->max_length )
    sub_1B6432C(Sprite, v17);
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
          (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  GameObjectExtensions__SafeSetParent_33381252((UnityEngine_GameObject_o *)v25, v24, 0LL);
  GameObjectExtensions__ResetLocalPosition((UnityEngine_GameObject_o *)v25, 0LL);
  if ( !v25 )
    goto LABEL_24;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)v25,
                       (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
  {
    v32 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v27, v28);
    System_Action___ctor(
      v32,
      (Il2CppObject *)v10,
      Method_WarBoardEventBossUIComponent___c__DisplayClass53_0__PlayPointBreakAnim_b__0__,
      0LL);
    if ( Component_object )
    {
      CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)Component_object, 0, v32, 0LL);
      return;
    }
LABEL_24:
    sub_1B64324(Sprite);
  }
  bossPieceData = this->fields.bossPieceData;
  totalHpLabel = this->fields.totalHpLabel;
  if ( bossPieceData )
    breakPoint_k__BackingField = bossPieceData->fields._breakPoint_k__BackingField;
  else
    breakPoint_k__BackingField = 0;
  *(UnityEngine_Color_o *)&v33 = WarBoardEventBossUIComponent__GetTextEffectColor(this, breakPoint_k__BackingField, v28);
  if ( !totalHpLabel )
    goto LABEL_24;
  UILabel__set_effectColor(totalHpLabel, *(UnityEngine_Color_o *)&v33, 0LL);
  currentBossInfo = this->fields.currentBossInfo;
  if ( !currentBossInfo )
    goto LABEL_24;
  v39 = this->fields.bossPieceData;
  if ( v39 )
    v40 = v39->fields._breakPoint_k__BackingField;
  else
    v40 = 0;
  WarBoardEventBossUIComponent__SetupBreakPoint(this, currentBossInfo->fields.maxDefeatPoint, v40, v37);
  this->fields.isPointBreak = 0;
  ActionExtensions__Call(*v14, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardEventBossUIComponent__SetDisp(
        WarBoardEventBossUIComponent_o *this,
        WarBoardDataEntity_o *warBoardDataEntity,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  WarBoardDataEntity_o **p_warBoardDataEnt; // x21
  __int64 bossIconSp; // x0
  struct WarBoardStageBossEntity_o *warBoardStageBossEnt; // x8
  int32_t v17; // w2
  int32_t v18; // w3
  struct WarBoardStageBossEntity_o *v19; // x8
  _DWORD *v20; // x22
  struct WarBoardUserServantData_o *StageBossData; // x1
  struct WarBoardUserServantData_o **p_currentBossInfo; // x20
  struct WarBoardStageBossEntity_o *v23; // x8
  struct WarBoardPieceData_o *EventBossPiece; // x0
  struct WarBoardPieceData_o **p_bossPieceData; // x21
  int32_t v26; // w2
  int32_t v27; // w3
  __int64 v28; // x1
  __int64 v29; // x2
  WarBoardUserServantData_o *v30; // x24
  struct WarBoardUserServantData_o **p_oldBossInfo; // x23
  int32_t v32; // w2
  int32_t v33; // w3
  int32_t v34; // w2
  int32_t v35; // w3
  struct WarBoardUserServantData_o *currentBossInfo; // x8
  struct WarBoardUserServantData_o *v37; // x9
  struct System_Int32_array *breakHp; // x1
  __int64 v39; // x1
  const MethodInfo *v40; // x2
  struct WarBoardUserServantData_o *v41; // x8
  struct WarBoardUserServantData_o *v42; // x23
  WarBoardUserServantData_o *v43; // x23
  struct WarBoardUserServantData_o **v44; // x22
  int32_t v45; // w2
  int32_t v46; // w3
  int32_t v47; // w2
  int32_t v48; // w3
  struct WarBoardUserServantData_o *v49; // x8
  struct WarBoardUserServantData_o *v50; // x9
  struct System_Int32_array *v51; // x1
  struct WarBoardUserServantData_o *v52; // x8
  struct WarBoardPieceData_o *v53; // x8
  struct WarBoardUserServantData_o *oldBossInfo; // x9
  int32_t defeatPoint; // w1
  struct WarBoardUserServantData_o *v56; // x8
  double v57; // d0
  float v58; // s1
  float HPfrom; // s0
  struct WarBoardUserServantData_o *v60; // x8
  double v61; // d9
  WarBoardPieceData_o *bossPieceData; // x0
  float v63; // s0
  float v64; // s1
  float v65; // s0
  double v66; // d0
  float v67; // s0
  float v68; // s1
  float v69; // s0
  const MethodInfo *v70; // x2
  struct WarBoardUserServantData_o *v71; // x8
  const MethodInfo *v72; // x3
  struct WarBoardUserServantData_o *v73; // x8
  struct WarBoardStageBossEntity_o *v74; // x8
  int idx; // w25
  UISprite_o *v76; // x20
  Il2CppObject *v77; // x21
  Il2CppObject *v78; // x0
  System_String_o *v79; // x0
  const MethodInfo *v80; // x3
  const MethodInfo *v81; // x3
  const MethodInfo *v82; // x3
  UISprite_o *hpBarUnderSprite; // x20
  Il2CppObject *v84; // x0
  System_String_o *v85; // x0
  const MethodInfo *v86; // x3
  UISprite_o *hpBarUpperSprite; // x20
  Il2CppObject *v88; // x0
  System_String_o *v89; // x0
  const MethodInfo *v90; // x3
  const MethodInfo *v91; // x3
  const MethodInfo *v92; // x2
  struct WarBoardUserServantData_o *v93; // x8
  float v94; // s0
  float v95; // s1
  float v96; // s2
  float v97; // s3
  float v98; // s8
  float v99; // s9
  float v100; // s10
  float v101; // s11
  const MethodInfo *v102; // x2
  struct WarBoardStageBossEntity_o *v103; // x8
  UILabel_o *bossName; // x19
  int v105; // [xsp+0h] [xbp-90h] BYREF
  int v106; // [xsp+4h] [xbp-8Ch] BYREF
  int v107; // [xsp+8h] [xbp-88h] BYREF
  int32_t iconId; // [xsp+Ch] [xbp-84h] BYREF
  UnityEngine_Color_o v109; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49F9FE8 & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, warBoardDataEntity);
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v6);
    sub_1B640C8(&WarBoardUserServantData_TypeInfo, v7);
    sub_1B640C8(&StringLiteral_24542/*"war_board_boss_hp_frame"*/, v8);
    sub_1B640C8(&StringLiteral_24545/*"war_board_boss_hp_white"*/, v9);
    sub_1B640C8(&StringLiteral_24544/*"war_board_boss_hp_upper_{0}"*/, v10);
    sub_1B640C8(&StringLiteral_24546/*"war_board_boss_icon_{0}{1:D2}"*/, v11);
    sub_1B640C8(&StringLiteral_24541/*"war_board_boss_hp_back"*/, v12);
    sub_1B640C8(&StringLiteral_24543/*"war_board_boss_hp_lower_{0}"*/, v13);
    byte_49F9FE8 = 1;
  }
  this->fields.warBoardDataEnt = warBoardDataEntity;
  p_warBoardDataEnt = &this->fields.warBoardDataEnt;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.warBoardDataEnt,
    (int32_t)warBoardDataEntity,
    (int32_t)method,
    v3);
  bossIconSp = (__int64)this->fields.bossIconSp;
  if ( !bossIconSp )
    goto LABEL_67;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)bossIconSp, 1, 0LL);
  bossIconSp = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  warBoardStageBossEnt = this->fields.warBoardStageBossEnt;
  if ( !warBoardStageBossEnt )
    goto LABEL_67;
  if ( !bossIconSp )
    goto LABEL_67;
  bossIconSp = (__int64)WarBoardManager__GetEventBossUILoadData(
                          (WarBoardManager_o *)bossIconSp,
                          warBoardStageBossEnt->fields.idx,
                          0LL);
  v19 = this->fields.warBoardStageBossEnt;
  if ( !v19 )
    goto LABEL_67;
  v20 = (_DWORD *)bossIconSp;
  if ( *p_warBoardDataEnt )
    StageBossData = WarBoardDataEntity__GetStageBossData(*p_warBoardDataEnt, v19->fields.idx, 0LL);
  else
    StageBossData = 0LL;
  this->fields.currentBossInfo = StageBossData;
  p_currentBossInfo = &this->fields.currentBossInfo;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.currentBossInfo, (int32_t)StageBossData, v17, v18);
  if ( this->fields.currentBossInfo )
  {
    bossIconSp = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( bossIconSp )
    {
      v23 = this->fields.warBoardStageBossEnt;
      if ( v23 )
      {
        bossIconSp = *(_QWORD *)(bossIconSp + 440);
        if ( bossIconSp )
        {
          EventBossPiece = WarBoardData__GetEventBossPiece((WarBoardData_o *)bossIconSp, v23->fields.idx, 0LL);
          this->fields.bossPieceData = EventBossPiece;
          p_bossPieceData = &this->fields.bossPieceData;
          sub_1B6406C(
            (ServantStatusBattleListViewItem_o *)&this->fields.bossPieceData,
            (int32_t)EventBossPiece,
            v26,
            v27);
          if ( !v20 || (int)v20[6] < 3 )
            goto LABEL_24;
          if ( !*p_currentBossInfo )
            goto LABEL_67;
          if ( v20[8] == (*p_currentBossInfo)->fields.stageBossIdx )
          {
            v30 = (WarBoardUserServantData_o *)sub_1B64314(WarBoardUserServantData_TypeInfo, v28, v29);
            WarBoardUserServantData___ctor(v30, 0LL);
            this->fields.oldBossInfo = v30;
            p_oldBossInfo = &this->fields.oldBossInfo;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.oldBossInfo, (int32_t)v30, v32, v33);
            currentBossInfo = this->fields.currentBossInfo;
            if ( !currentBossInfo )
              goto LABEL_67;
            v37 = *p_oldBossInfo;
            if ( !*p_oldBossInfo )
              goto LABEL_67;
            v37->fields.stageBossIdx = currentBossInfo->fields.stageBossIdx;
            breakHp = currentBossInfo->fields.breakHp;
            v37->fields.breakHp = breakHp;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&v37->fields.breakHp, (int32_t)breakHp, v34, v35);
            v41 = *p_currentBossInfo;
            if ( !*p_currentBossInfo )
              goto LABEL_67;
            v42 = *p_oldBossInfo;
            if ( !v42 )
              goto LABEL_67;
            v42->fields.maxDefeatPoint = v41->fields.maxDefeatPoint;
            if ( v20[6] <= 2u )
              sub_1B6432C(bossIconSp, v39);
            v42->fields.defeatPoint = v20[10];
            v42->fields.hp = v41->fields.hp;
            bossIconSp = (unsigned int)v20[9];
          }
          else
          {
LABEL_24:
            v43 = (WarBoardUserServantData_o *)sub_1B64314(WarBoardUserServantData_TypeInfo, v28, v29);
            WarBoardUserServantData___ctor(v43, 0LL);
            this->fields.oldBossInfo = v43;
            v44 = &this->fields.oldBossInfo;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.oldBossInfo, (int32_t)v43, v45, v46);
            v49 = this->fields.currentBossInfo;
            if ( !v49 )
              goto LABEL_67;
            v50 = *v44;
            if ( !*v44 )
              goto LABEL_67;
            v50->fields.stageBossIdx = v49->fields.stageBossIdx;
            v51 = v49->fields.breakHp;
            v50->fields.breakHp = v51;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&v50->fields.breakHp, (int32_t)v51, v47, v48);
            v52 = *p_currentBossInfo;
            if ( !*p_currentBossInfo )
              goto LABEL_67;
            v42 = *v44;
            if ( !*v44 )
              goto LABEL_67;
            v42->fields.maxDefeatPoint = v52->fields.maxDefeatPoint;
            bossIconSp = (__int64)*p_bossPieceData;
            if ( *p_bossPieceData )
            {
              v42->fields.defeatPoint = *(_DWORD *)(bossIconSp + 52);
              v42->fields.hp = v52->fields.hp;
              bossIconSp = WarBoardPieceData__get_CurrentHp((WarBoardPieceData_o *)bossIconSp, 0LL);
            }
            else
            {
              v42->fields.defeatPoint = 0;
              v42->fields.hp = v52->fields.hp;
            }
          }
          v42->fields.currentHp = bossIconSp;
          v53 = *p_bossPieceData;
          if ( *p_bossPieceData )
            LODWORD(v53) = v53->fields._breakPoint_k__BackingField;
          oldBossInfo = this->fields.oldBossInfo;
          if ( oldBossInfo )
          {
            defeatPoint = oldBossInfo->fields.defeatPoint;
            this->fields.isPointBreak = (int)v53 < defeatPoint;
            if ( (int)v53 < defeatPoint )
            {
              bossIconSp = WarBoardEventBossUIComponent__GetMaxHpByBreakPoint(this, defeatPoint, v40);
              v56 = this->fields.oldBossInfo;
              if ( !v56 )
                goto LABEL_67;
              v57 = (double)bossIconSp;
              bossIconSp = (__int64)this->fields.hpBarSlider;
              *(float *)&v57 = (double)v56->fields.currentHp / v57;
              v58 = fminf(*(float *)&v57, 1.0);
              HPfrom = *(float *)&v57 < 0.0 ? 0.0 : v58;
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
                             v40);
              v60 = this->fields.oldBossInfo;
              if ( v60 )
              {
                v61 = (double)bossIconSp;
                bossPieceData = this->fields.bossPieceData;
                v63 = (double)v60->fields.currentHp / v61;
                v64 = fminf(v63, 1.0);
                v65 = v63 < 0.0 ? 0.0 : v64;
                this->fields.HPfrom = v65;
                v66 = bossPieceData ? (double)WarBoardPieceData__get_CurrentHp(bossPieceData, 0LL) : 0.0;
                bossIconSp = (__int64)this->fields.hpBarSlider;
                v67 = v66 / v61;
                v68 = fminf(v67, 1.0);
                v69 = v67 < 0.0 ? 0.0 : v68;
                this->fields.HPto = v69;
                if ( bossIconSp )
                {
                  HPfrom = this->fields.HPfrom;
LABEL_57:
                  UIProgressBar__set_value((UIProgressBar_o *)bossIconSp, HPfrom, 0LL);
                  v71 = this->fields.oldBossInfo;
                  if ( !v71 )
                    goto LABEL_67;
                  WarBoardEventBossUIComponent__SetTotalHpText(this, v71->fields.currentHp, v70);
                  bossIconSp = (__int64)this->fields.hpBarSliderUnder;
                  if ( !bossIconSp )
                    goto LABEL_67;
                  UIProgressBar__set_value((UIProgressBar_o *)bossIconSp, 0.0, 0LL);
                  v73 = this->fields.oldBossInfo;
                  if ( !v73 )
                    goto LABEL_67;
                  WarBoardEventBossUIComponent__SetupBreakPoint(
                    this,
                    v73->fields.maxDefeatPoint,
                    v73->fields.defeatPoint,
                    v72);
                  v74 = this->fields.warBoardStageBossEnt;
                  if ( !v74 )
                    goto LABEL_67;
                  idx = v74->fields.idx;
                  v76 = this->fields.bossIconSp;
                  iconId = v74->fields.iconId;
                  v77 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId);
                  v107 = idx;
                  v78 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v107);
                  v79 = System_String__Format_61389768((System_String_o *)StringLiteral_24546/*"war_board_boss_icon_{0}{1:D2}"*/, v77, v78, 0LL);
                  WarBoardEventBossUIComponent__SetSpriteByLocalAtlas(this, v76, v79, v80);
                  WarBoardEventBossUIComponent__SetSpriteByLocalAtlas(
                    this,
                    this->fields.bossHpFrame,
                    (System_String_o *)StringLiteral_24542/*"war_board_boss_hp_frame"*/,
                    v81);
                  WarBoardEventBossUIComponent__SetSpriteByLocalAtlas(
                    this,
                    this->fields.bossHpBg,
                    (System_String_o *)StringLiteral_24541/*"war_board_boss_hp_back"*/,
                    v82);
                  hpBarUnderSprite = this->fields.hpBarUnderSprite;
                  v106 = idx;
                  v84 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v106);
                  v85 = System_String__Format((System_String_o *)StringLiteral_24543/*"war_board_boss_hp_lower_{0}"*/, v84, 0LL);
                  WarBoardEventBossUIComponent__SetSpriteByLocalAtlas(this, hpBarUnderSprite, v85, v86);
                  hpBarUpperSprite = this->fields.hpBarUpperSprite;
                  v105 = idx;
                  v88 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v105);
                  v89 = System_String__Format((System_String_o *)StringLiteral_24544/*"war_board_boss_hp_upper_{0}"*/, v88, 0LL);
                  WarBoardEventBossUIComponent__SetSpriteByLocalAtlas(this, hpBarUpperSprite, v89, v90);
                  bossIconSp = WarBoardEventBossUIComponent__SetSpriteByLocalAtlas(
                                 this,
                                 this->fields.hpBarWhiteSprite,
                                 (System_String_o *)StringLiteral_24545/*"war_board_boss_hp_white"*/,
                                 v91);
                  v93 = this->fields.oldBossInfo;
                  if ( !v93 )
                    goto LABEL_67;
                  *(UnityEngine_Color_o *)&v94 = WarBoardEventBossUIComponent__GetTextEffectColor(
                                                   this,
                                                   v93->fields.defeatPoint,
                                                   v92);
                  bossIconSp = (__int64)this->fields.totalHpLabel;
                  if ( !bossIconSp )
                    goto LABEL_67;
                  v98 = v94;
                  v99 = v95;
                  v100 = v96;
                  v101 = v97;
                  UILabel__set_effectColor((UILabel_o *)bossIconSp, *(UnityEngine_Color_o *)&v94, 0LL);
                  bossIconSp = (__int64)this->fields.bossName;
                  if ( !bossIconSp )
                    goto LABEL_67;
                  v109.fields.r = v98;
                  v109.fields.g = v99;
                  v109.fields.b = v100;
                  v109.fields.a = v101;
                  UILabel__set_effectColor((UILabel_o *)bossIconSp, v109, 0LL);
                  v103 = this->fields.warBoardStageBossEnt;
                  if ( !v103 )
                    goto LABEL_67;
                  bossName = this->fields.bossName;
                  bossIconSp = (__int64)WarBoardEventBossUIComponent__GetStageBossName(
                                          (WarBoardEventBossUIComponent_o *)bossIconSp,
                                          v103->fields.idx,
                                          v102);
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
    sub_1B64324(bossIconSp);
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
  _BOOL8 v12; // x0
  Il2CppObject *current; // x21
  UISpriteData_o *v14; // x0
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_49F9FF0 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Any_UIAtlas___, sprite);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__get_Current__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__, v10);
    byte_49F9FF0 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  IsNullOrEmpty = (struct System_Collections_Generic_List_UIAtlas__o *)System_String__IsNullOrEmpty(spriteName, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0
    || (IsNullOrEmpty = (struct System_Collections_Generic_List_UIAtlas__o *)System_Linq_Enumerable__Any_object_(
                                                                               (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.atlasList,
                                                                               (const MethodInfo_2E46A94 *)Method_System_Linq_Enumerable_Any_UIAtlas___),
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
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    (System_Collections_Generic_List_object__o *)IsNullOrEmpty,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
  v17 = v16;
  do
  {
    v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    if ( !v12 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v17,
        (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
      if ( sprite )
      {
        UISprite__set_spriteName(sprite, 0LL, 0LL);
        return 0;
      }
LABEL_19:
      sub_1B64324(IsNullOrEmpty);
    }
    current = v17.fields._current;
    if ( !v17.fields._current )
      sub_1B64324(v12);
    v14 = UIAtlas__GetSprite((UIAtlas_o *)v17.fields._current, spriteName, 0LL);
  }
  while ( !v14 );
  if ( !sprite )
    sub_1B64324(v14);
  UISprite__set_atlas(sprite, (UIAtlas_o *)current, 0LL);
  UISprite__set_spriteName(sprite, spriteName, 0LL);
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
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
  Il2CppObject *v9; // x0
  System_String_o *v10; // x0
  int64_t v11; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49F9FE9 & 1) == 0 )
  {
    sub_1B640C8(&long_TypeInfo, hp);
    sub_1B640C8(&LocalizationManager_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_3750/*"COMMON_NUM_FORMAT"*/, v6);
    byte_49F9FE9 = 1;
  }
  totalHpLabel = this->fields.totalHpLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_3750/*"COMMON_NUM_FORMAT"*/, 0LL);
  v11 = hp;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v11);
  v10 = System_String__Format(v8, v9, 0LL);
  if ( !totalHpLabel )
    sub_1B64324(v10);
  UILabel__set_text(totalHpLabel, v10, 0LL);
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
  int32_t v12; // w3
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x2

  this->fields.eventId = eventId;
  this->fields.warBoardStageBossEnt = warBoardStageBossEnt;
  p_warBoardStageBossEnt = &this->fields.warBoardStageBossEnt;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.warBoardStageBossEnt,
    (int32_t)warBoardStageBossEnt,
    (int32_t)warBoardStageBossEnt,
    (int32_t)warBoardDataEnt);
  this->fields.assetData = assetData;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.assetData, (int32_t)assetData, v11, v12);
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
      sub_1B64324(this);
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
    sub_1B6432C(this, *(_QWORD *)&maxCount);
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
        CurrentHp = WarBoardPieceData__get_CurrentHp(bossPieceData, 0LL);
        v7 = this->fields.bossPieceData;
        v8 = this->fields.oldBossInfo;
        oldBossInfo->fields.currentHp = CurrentHp;
        if ( v7 )
          LODWORD(v7) = v7->fields._breakPoint_k__BackingField;
        if ( !v8 )
          sub_1B64324(CurrentHp);
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


void __fastcall WarBoardEventBossUIComponent___c__DisplayClass37_0___ctor(
        WarBoardEventBossUIComponent___c__DisplayClass37_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardEventBossUIComponent___c__DisplayClass37_0___GetStageBossName_b__0(
        WarBoardEventBossUIComponent___c__DisplayClass37_0_o *this,
        WarBoardPieceData_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1B64324(this);
  return WarBoardPieceData__get_StageBossIdx(n, 0LL) == this->fields.stageBossIndex;
}


void __fastcall WarBoardEventBossUIComponent___c__DisplayClass52_0___ctor(
        WarBoardEventBossUIComponent___c__DisplayClass52_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardEventBossUIComponent___c__DisplayClass52_0___PlayDaedAnim_b__0(
        WarBoardEventBossUIComponent___c__DisplayClass52_0_o *this,
        const MethodInfo *method)
{
  struct WarBoardEventBossUIComponent_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (this = (WarBoardEventBossUIComponent___c__DisplayClass52_0_o *)_4__this->fields.bossIconSp) == 0LL
    || (this = (WarBoardEventBossUIComponent___c__DisplayClass52_0_o *)UnityEngine_Component__get_gameObject(
                                                                         (UnityEngine_Component_o *)this,
                                                                         0LL)) == 0LL )
  {
    sub_1B64324(this);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


void __fastcall WarBoardEventBossUIComponent___c__DisplayClass52_0___PlayDaedAnim_b__1(
        WarBoardEventBossUIComponent___c__DisplayClass52_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.endAction, 0LL);
}


void __fastcall WarBoardEventBossUIComponent___c__DisplayClass53_0___ctor(
        WarBoardEventBossUIComponent___c__DisplayClass53_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardEventBossUIComponent___c__DisplayClass53_0___PlayPointBreakAnim_b__0(
        WarBoardEventBossUIComponent___c__DisplayClass53_0_o *this,
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
    sub_1B64324(_4__this);
  v16->fields.isPointBreak = 0;
  ActionExtensions__Call(this->fields.endAction, 0LL);
}


void __fastcall WarBoardEventBossUIComponent___c__DisplayClass54_0___ctor(
        WarBoardEventBossUIComponent___c__DisplayClass54_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardEventBossUIComponent___c__DisplayClass54_0___PlayHpCut_b__0(
        WarBoardEventBossUIComponent___c__DisplayClass54_0_o *this,
        const MethodInfo *method)
{
  struct EasingObject_o *easingObj; // x9
  struct WarBoardEventBossUIComponent_o *_4__this; // x8
  WarBoardEventBossUIComponent___c__DisplayClass54_0_o *v4; // x19
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
  this = (WarBoardEventBossUIComponent___c__DisplayClass54_0_o *)_4__this->fields.hpBarSlider;
  v6 = fminf(mNow, 1.0);
  v7 = mNow < 0.0;
  v8 = 0.0;
  if ( !v7 )
    v8 = v6;
  if ( !this
    || (v9 = _4__this->fields.HPfrom + (float)(v8 * (float)(_4__this->fields.HPto - _4__this->fields.HPfrom)),
        UIProgressBar__set_value((UIProgressBar_o *)this, v9, 0LL),
        (this = (WarBoardEventBossUIComponent___c__DisplayClass54_0_o *)v4->fields.__4__this) == 0LL) )
  {
LABEL_11:
    sub_1B64324(this);
  }
  v11 = v9 * (double)v4->fields.maxHp;
  if ( v11 == INFINITY )
    v12 = 0x8000000000000000LL;
  else
    v12 = (__int64)v11;
  WarBoardEventBossUIComponent__SetTotalHpText((WarBoardEventBossUIComponent_o *)this, v12, v10);
}


void __fastcall WarBoardEventBossUIComponent___c__DisplayClass54_0___PlayHpCut_b__1(
        WarBoardEventBossUIComponent___c__DisplayClass54_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  WarBoardEventBossUIComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B64324(0LL);
  WarBoardEventBossUIComponent__SetTotalHpText(_4__this, this->fields.totalHp, v2);
  ActionExtensions__Call(this->fields.endAction, 0LL);
}


void __fastcall WarBoardEventBossUIComponent___c__DisplayClass55_0___ctor(
        WarBoardEventBossUIComponent___c__DisplayClass55_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardEventBossUIComponent___c__DisplayClass55_0___PlayHpRecover_b__0(
        WarBoardEventBossUIComponent___c__DisplayClass55_0_o *this,
        const MethodInfo *method)
{
  struct EasingObject_o *easingObj; // x9
  struct WarBoardEventBossUIComponent_o *_4__this; // x8
  WarBoardEventBossUIComponent___c__DisplayClass55_0_o *v4; // x19
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
  this = (WarBoardEventBossUIComponent___c__DisplayClass55_0_o *)_4__this->fields.hpBarSlider;
  v6 = fminf(mNow, 1.0);
  v7 = mNow < 0.0;
  v8 = 0.0;
  if ( !v7 )
    v8 = v6;
  if ( !this
    || (v9 = _4__this->fields.HPfrom + (float)(v8 * (float)(_4__this->fields.HPto - _4__this->fields.HPfrom)),
        UIProgressBar__set_value((UIProgressBar_o *)this, v9, 0LL),
        (this = (WarBoardEventBossUIComponent___c__DisplayClass55_0_o *)v4->fields.__4__this) == 0LL) )
  {
LABEL_11:
    sub_1B64324(this);
  }
  v11 = v9 * (double)v4->fields.maxHp;
  if ( v11 == INFINITY )
    v12 = 0x8000000000000000LL;
  else
    v12 = (__int64)v11;
  WarBoardEventBossUIComponent__SetTotalHpText((WarBoardEventBossUIComponent_o *)this, v12, v10);
}


void __fastcall WarBoardEventBossUIComponent___c__DisplayClass55_0___PlayHpRecover_b__1(
        WarBoardEventBossUIComponent___c__DisplayClass55_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct WarBoardEventBossUIComponent_o *_4__this; // x20
  WarBoardPieceData_o *bossPieceData; // x0
  int64_t CurrentHp; // x1

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B64324(this);
  bossPieceData = _4__this->fields.bossPieceData;
  if ( bossPieceData )
    CurrentHp = WarBoardPieceData__get_CurrentHp(bossPieceData, 0LL);
  else
    CurrentHp = 0LL;
  WarBoardEventBossUIComponent__SetTotalHpText(_4__this, CurrentHp, v2);
  ActionExtensions__Call(this->fields.endAction, 0LL);
}