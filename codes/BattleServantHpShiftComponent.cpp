void BattleServantHpShiftComponent___ctor(BattleServantHpShiftComponent_o *this, const MethodInfo *method)
{
  this->fields.decagramNumber = 10;
  this->fields.imageType = 1;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void BattleServantHpShiftComponent__AlignShiftIcons(BattleServantHpShiftComponent_o *this, const MethodInfo *method)
{
  BattleServantData_o *svtData; // x0
  struct UnityEngine_GameObject_array *iconList; // x8
  int32_t decagramNumber; // w25
  int32_t v6; // w20
  float v7; // s8
  __int64 v8; // x26
  __int64 v9; // x27
  int max_length; // w9
  unsigned int v11; // w28
  UnityEngine_Object_o *v12; // x21
  struct UnityEngine_GameObject_array *v13; // x22
  UnityEngine_GameObject_o *shiftIconClone; // x21
  UnityEngine_Transform_o *transform; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  struct UnityEngine_GameObject_array *v22; // x8
  UISprite_o *Component_object; // x21
  const MethodInfo *v24; // x2
  const MethodInfo *v25; // x2
  BattleServantData_o *v26; // x22
  float hiddenValue_high; // s9
  struct UnityEngine_GameObject_array *v28; // x8
  float v29; // s10
  float v30; // s8
  struct UnityEngine_GameObject_array *v31; // x8
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CCAB51 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCAB51 = 1;
  }
  svtData = this->fields.svtData;
  if ( !svtData
    || (svtData = (BattleServantData_o *)BattleServantData__GetCurrentShiftPos(svtData, 0),
        (iconList = this->fields.iconList) == 0) )
  {
LABEL_33:
    sub_1C71608(svtData, method);
  }
  decagramNumber = this->fields.decagramNumber;
  v6 = (int)svtData;
  v7 = 0.0;
  v8 = 4;
  v9 = 32;
  while ( 1 )
  {
    max_length = iconList->max_length;
    v11 = v8 - 4;
    if ( (int)v8 - 4 >= max_length )
      break;
    if ( v11 >= max_length )
      goto LABEL_35;
    v12 = (UnityEngine_Object_o *)*((_QWORD *)&iconList->obj.klass + v8);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    svtData = (BattleServantData_o *)UnityEngine_Object__op_Equality(v12, 0, 0);
    if ( ((unsigned __int8)svtData & 1) != 0 )
    {
      v13 = this->fields.iconList;
      shiftIconClone = this->fields.shiftIconClone;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      svtData = (BattleServantData_o *)BaseMonoBehaviour__createObject(
                                         (BaseMonoBehaviour_o *)this,
                                         shiftIconClone,
                                         transform,
                                         0,
                                         0);
      if ( !v13 )
        goto LABEL_33;
      if ( v11 >= LODWORD(v13->max_length) )
        goto LABEL_35;
      *((_QWORD *)&v13->obj.klass + v8) = svtData;
      sub_1C71354((GrandQuestFolderBoardItem_o *)((char *)v13 + v9), (int32_t)svtData, v16, v17, v18, v19, v20, v21);
    }
    v22 = this->fields.iconList;
    if ( !v22 )
      goto LABEL_33;
    if ( v11 >= LODWORD(v22->max_length) )
LABEL_35:
      sub_1C71610(svtData);
    svtData = (BattleServantData_o *)*((_QWORD *)&v22->obj.klass + v8);
    if ( svtData )
    {
      Component_object = (UISprite_o *)UnityEngine_GameObject__GetComponent_object_(
                                         (UnityEngine_GameObject_o *)svtData,
                                         (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      svtData = (BattleServantData_o *)BattleServantHpShiftComponent__getSpriteName(this, (int)v8 - 2, v24);
      if ( Component_object )
      {
        UISprite__set_spriteName(Component_object, (System_String_o *)svtData, 0);
        UIWidget__set_depth((UIWidget_o *)Component_object, v8 + this->fields.defaultDepth - 4, 0);
        svtData = (BattleServantData_o *)BattleServantHpShiftComponent__GetShiftIconAdjustment(
                                           this,
                                           Component_object->fields.mSpriteName,
                                           v25);
        if ( svtData )
        {
          v26 = svtData;
          UIWidget__set_width((UIWidget_o *)Component_object, svtData->fields.uniqueId, 0);
          UIWidget__set_height((UIWidget_o *)Component_object, *(&v26->fields.uniqueId + 1), 0);
          svtData = (BattleServantData_o *)UnityEngine_Component__get_transform(
                                             (UnityEngine_Component_o *)Component_object,
                                             0);
          if ( !svtData )
            goto LABEL_33;
          UnityEngine_Transform__set_localPosition(
            (UnityEngine_Transform_o *)svtData,
            *(UnityEngine_Vector3_o *)&v26->fields.userSvtId.fields.currentCryptoKey,
            0);
          hiddenValue_high = (float)SHIDWORD(v26->fields.userSvtId.fields.hiddenValue);
        }
        else
        {
          hiddenValue_high = 0.0;
        }
        v28 = this->fields.iconList;
        v29 = (_DWORD)v8 == 4 ? -hiddenValue_high : hiddenValue_high;
        if ( v28 )
        {
          if ( v11 >= LODWORD(v28->max_length) )
            goto LABEL_35;
          svtData = (BattleServantData_o *)*((_QWORD *)&v28->obj.klass + v8);
          if ( svtData )
          {
            svtData = (BattleServantData_o *)UnityEngine_GameObject__get_transform(
                                               (UnityEngine_GameObject_o *)svtData,
                                               0);
            if ( svtData )
            {
              v30 = v7 + v29;
              v32.fields.z = 0.0;
              v32.fields.y = this->fields.addPos.fields.y * (float)(int)v11;
              v32.fields.x = v30;
              UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)svtData, v32, 0);
              v31 = this->fields.iconList;
              if ( v31 )
              {
                if ( v11 >= LODWORD(v31->max_length) )
                  goto LABEL_35;
                svtData = (BattleServantData_o *)*((_QWORD *)&v31->obj.klass + v8);
                if ( svtData )
                {
                  v7 = v30 + (float)(hiddenValue_high + this->fields.addPos.fields.x);
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtData, v6 < decagramNumber, 0);
                  iconList = this->fields.iconList;
                  ++v8;
                  v9 += 8;
                  if ( iconList )
                    continue;
                }
              }
            }
          }
        }
      }
    }
    goto LABEL_33;
  }
}


float BattleServantHpShiftComponent__CreateDecagramEffect(
        BattleServantHpShiftComponent_o *this,
        bool isSuperBoss,
        const MethodInfo *method)
{
  BattleDataDefine_c *v5; // x0
  System_String_o *ASSET_BATTLE_COMMON; // x21
  AssetData_o *AssetStorage; // x0
  __int64 v8; // x1
  Il2CppObject *Object_object__51560868; // x21
  float v10; // s8
  UnityEngine_Transform_o *parent; // x0
  UnityEngine_Object_o *Object; // x21
  Il2CppObject *Component_object; // x21
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7

  if ( (byte_4CCAB57 & 1) == 0 )
  {
    sub_1C713B0(&Method_AssetData_GetObject_GameObject____78636968);
    sub_1C713B0(&AssetManager_TypeInfo);
    sub_1C713B0(&BattleDataDefine_TypeInfo);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_BattleServantHpShiftDecagramEffectComponent___);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_20099/*"hp_crystaleffect_superboss_1_1"*/);
    sub_1C713B0(&StringLiteral_20098/*"hp_crystaleffect_1_1"*/);
    byte_4CCAB57 = 1;
  }
  v5 = BattleDataDefine_TypeInfo;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v5 = BattleDataDefine_TypeInfo;
  }
  ASSET_BATTLE_COMMON = v5->static_fields->ASSET_BATTLE_COMMON;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(ASSET_BATTLE_COMMON, 0);
  if ( !AssetStorage )
    goto LABEL_24;
  Object_object__51560868 = AssetData__GetObject_object__51560868(
                              AssetStorage,
                              (System_String_o *)StringLiteral_20098/*"hp_crystaleffect_1_1"*/,
                              (const MethodInfo_312C1A4 *)Method_AssetData_GetObject_GameObject____78636968);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v10 = 0.0;
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__51560868, 0, 0) )
  {
    AssetStorage = (AssetData_o *)this->fields.shiftIconDecagramSprite;
    if ( !AssetStorage )
      goto LABEL_24;
    AssetStorage = (AssetData_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)AssetStorage, 0);
    if ( !AssetStorage )
      goto LABEL_24;
    parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)AssetStorage, 0);
    Object = (UnityEngine_Object_o *)BaseMonoBehaviour__createObject(
                                       (BaseMonoBehaviour_o *)this,
                                       (UnityEngine_GameObject_o *)Object_object__51560868,
                                       parent,
                                       0,
                                       0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    AssetStorage = (AssetData_o *)UnityEngine_Object__op_Inequality(Object, 0, 0);
    if ( ((unsigned __int8)AssetStorage & 1) != 0 )
    {
      if ( !Object )
        goto LABEL_24;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)Object,
                           (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_BattleServantHpShiftDecagramEffectComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      AssetStorage = (AssetData_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
      if ( ((unsigned __int8)AssetStorage & 1) != 0 )
      {
        if ( Component_object )
        {
          Component_object[13].klass = (Il2CppClass *)this;
          sub_1C71354((GrandQuestFolderBoardItem_o *)&Component_object[13], (int32_t)this, v14, v15, v16, v17, v18, v19);
          v10 = *((float *)&Component_object[12].monitor + 1);
          if ( isSuperBoss )
            CommonEffectComponent__Init_44023460(
              (CommonEffectComponent_o *)Component_object,
              (System_String_o *)StringLiteral_20099/*"hp_crystaleffect_superboss_1_1"*/,
              0,
              0,
              0);
          return v10;
        }
LABEL_24:
        sub_1C71608(AssetStorage, v8);
      }
    }
  }
  return v10;
}


System_String_o *BattleServantHpShiftComponent__GetBreakShiftIconEffectName(
        BattleServantHpShiftComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  System_Nullable_int__o v6; // x3

  if ( (byte_4CCAB4B & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_20106/*"hp_iconeffect"*/);
    byte_4CCAB4B = 1;
  }
  v6 = 0;
  return BattleServantHpShiftComponent__MakeAssetNameByPrefixAndIconIndex(
           this,
           (System_String_o *)StringLiteral_20106/*"hp_iconeffect"*/,
           index,
           v6,
           v3);
}


System_String_o *BattleServantHpShiftComponent__GetEmptyIconSpriteName(
        BattleServantHpShiftComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Nullable_int__o p_overwriteImageNo; // x0
  System_Nullable_int__o v6; // x3
  const MethodInfo *v7; // x4
  System_Nullable_int__o overwriteImageNo; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CCAB4A & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Nullable_int___ctor__);
    sub_1C713B0(&StringLiteral_20104/*"hp_icon"*/);
    byte_4CCAB4A = 1;
  }
  p_overwriteImageNo = (System_Nullable_int__o)&overwriteImageNo;
  overwriteImageNo = 0;
  System_Nullable_int____ctor(p_overwriteImageNo, 0, (const MethodInfo_3938D3C *)Method_System_Nullable_int___ctor__);
  v6 = overwriteImageNo;
  return BattleServantHpShiftComponent__MakeAssetNameByPrefixAndIconIndex(
           this,
           (System_String_o *)StringLiteral_20104/*"hp_icon"*/,
           index,
           v6,
           v7);
}


System_String_o *BattleServantHpShiftComponent__GetShiftBeforeEffectName(
        BattleServantHpShiftComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  System_Nullable_int__o v6; // x3

  if ( (byte_4CCAB4C & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_20107/*"hp_iconeffect_before"*/);
    byte_4CCAB4C = 1;
  }
  v6 = 0;
  return BattleServantHpShiftComponent__MakeAssetNameByPrefixAndIconIndex(
           this,
           (System_String_o *)StringLiteral_20107/*"hp_iconeffect_before"*/,
           index,
           v6,
           v3);
}


BattleCommonSettings_ShiftIconAdjustment_o *BattleServantHpShiftComponent__GetShiftIconAdjustment(
        BattleServantHpShiftComponent_o *this,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  System_Collections_Generic_IEnumerable_TSource__o *shiftIconAdjustmentArray; // x19
  System_Func_object__bool__o *v15; // x20

  if ( (byte_4CCAB4F & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Linq_Enumerable_FirstOrDefault_BattleCommonSettings_ShiftIconAdjustment___);
    sub_1C713B0(&System_Func_BattleCommonSettings_ShiftIconAdjustment__bool__TypeInfo);
    sub_1C713B0(&Method_BattleServantHpShiftComponent___c__DisplayClass23_0__GetShiftIconAdjustment_b__0__);
    sub_1C713B0(&BattleServantHpShiftComponent___c__DisplayClass23_0_TypeInfo);
    byte_4CCAB4F = 1;
  }
  v5 = sub_1C715FC(BattleServantHpShiftComponent___c__DisplayClass23_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C71608(v6, v7);
  *(_QWORD *)(v5 + 16) = spriteName;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)spriteName, v8, v9, v10, v11, v12, v13);
  shiftIconAdjustmentArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.shiftIconAdjustmentArray;
  if ( !shiftIconAdjustmentArray )
    return 0;
  v15 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_BattleCommonSettings_ShiftIconAdjustment__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v15,
    (Il2CppObject *)v5,
    Method_BattleServantHpShiftComponent___c__DisplayClass23_0__GetShiftIconAdjustment_b__0__,
    0);
  return (BattleCommonSettings_ShiftIconAdjustment_o *)System_Linq_Enumerable__FirstOrDefault_object__51858576(
                                                         shiftIconAdjustmentArray,
                                                         (System_Func_TSource__bool__o *)v15,
                                                         (const MethodInfo_3174C90 *)Method_System_Linq_Enumerable_FirstOrDefault_BattleCommonSettings_ShiftIconAdjustment___);
}


System_String_o *BattleServantHpShiftComponent__GetShiftIconName(
        int32_t inputImageType,
        int32_t imageNo,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4CCAB49 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_20104/*"hp_icon"*/);
    byte_4CCAB49 = 1;
  }
  return BattleServantHpShiftComponent__MakeImageSuffixAddedStr(
           (System_String_o *)StringLiteral_20104/*"hp_icon"*/,
           inputImageType,
           imageNo,
           v3);
}


void BattleServantHpShiftComponent__ImportFromBattleCommonSettings(
        BattleServantHpShiftComponent_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  long double inited; // q0
  GrandQuestFolderBoardItem_o *p_shiftIconAdjustmentArray; // x19
  struct BattleCommonSettings_ShiftIconAdjustment_array *shiftIconAdjustmentArray; // t1
  _QWORD *v12; // x20
  __int64 v13; // x8
  __int64 v14; // x0
  __int64 v15; // x0
  GrandQuestFolderBoardItem_c **v16; // x8
  GrandQuestFolderBoardItem_c *v17; // x1
  BattleDataDefine_c *v18; // x0
  System_String_o *ASSET_BATTLE_COMMON; // x20
  Il2CppObject *v20; // x20
  _BOOL8 v21; // x0
  __int64 v22; // x1
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  GrandQuestFolderBoardItem_c *monitor; // x1
  Il2CppObject *data; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4CCAB47 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Array_Empty_BattleCommonSettings_ShiftIconAdjustment___);
    sub_1C713B0(&Method_AssetManager_TryGetAssetObject_BattleCommonSettings___);
    sub_1C713B0(&AssetManager_TypeInfo);
    sub_1C713B0(&BattleDataDefine_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_3106/*"BattleCommonSettings"*/);
    byte_4CCAB47 = 1;
  }
  data = 0;
  shiftIconAdjustmentArray = this->fields.shiftIconAdjustmentArray;
  p_shiftIconAdjustmentArray = (GrandQuestFolderBoardItem_o *)&this->fields.shiftIconAdjustmentArray;
  if ( !shiftIconAdjustmentArray )
  {
    v12 = Method_System_Array_Empty_BattleCommonSettings_ShiftIconAdjustment___;
    v13 = *((_QWORD *)Method_System_Array_Empty_BattleCommonSettings_ShiftIconAdjustment___ + 7);
    if ( !v13 )
    {
      sub_1C474A0(Method_System_Array_Empty_BattleCommonSettings_ShiftIconAdjustment___);
      v13 = v12[7];
    }
    v14 = *(_QWORD *)(v13 + 16);
    if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
      v14 = sub_1C47444(inited);
    if ( !*(_DWORD *)(v14 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v14);
    v15 = *(_QWORD *)(v12[7] + 16LL);
    if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
      v15 = sub_1C47444(inited);
    v16 = *(GrandQuestFolderBoardItem_c ***)(v15 + 184);
    v17 = *v16;
    p_shiftIconAdjustmentArray->klass = *v16;
    sub_1C71354(p_shiftIconAdjustmentArray, (int32_t)v17, v2, v3, v4, v5, v6, v7);
    v18 = BattleDataDefine_TypeInfo;
    if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
      v18 = BattleDataDefine_TypeInfo;
    }
    ASSET_BATTLE_COMMON = v18->static_fields->ASSET_BATTLE_COMMON;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    if ( AssetManager__TryGetAssetObject_object_(
           &data,
           ASSET_BATTLE_COMMON,
           (System_String_o *)StringLiteral_3106/*"BattleCommonSettings"*/,
           (const MethodInfo_312C544 *)Method_AssetManager_TryGetAssetObject_BattleCommonSettings___) )
    {
      v20 = data;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v21 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v20, 0, 0);
      if ( !v21 )
      {
        if ( !data )
          sub_1C71608(v21, v22);
        monitor = (GrandQuestFolderBoardItem_c *)data[1].monitor;
        if ( monitor )
        {
          p_shiftIconAdjustmentArray->klass = monitor;
          sub_1C71354(p_shiftIconAdjustmentArray, (int32_t)monitor, v23, v24, v25, v26, v27, v28);
        }
      }
    }
  }
}


bool BattleServantHpShiftComponent__IsDecagramIndex(
        BattleServantHpShiftComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  return this->fields.decagramNumber - 1 == index;
}


// local variable allocation has failed, the output may be wrong!
bool BattleServantHpShiftComponent__IsIconActive(
        BattleServantHpShiftComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  int32_t decagramNumber; // w8
  struct UISprite_o *shiftIconDecagramSprite; // x0
  Il2CppObject *v8; // x19

  if ( (byte_4CCAB56 & 1) == 0 )
  {
    sub_1C713B0(&Method_BasicHelper_IndexValue_GameObject____78642240);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCAB56 = 1;
  }
  decagramNumber = this->fields.decagramNumber;
  if ( decagramNumber <= index )
    return 0;
  if ( decagramNumber - 1 == index )
  {
    shiftIconDecagramSprite = this->fields.shiftIconDecagramSprite;
    if ( shiftIconDecagramSprite )
      return UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)shiftIconDecagramSprite, 0);
LABEL_13:
    sub_1C71608(shiftIconDecagramSprite, *(_QWORD *)&index);
  }
  v8 = BasicHelper__IndexValue_object_(
         (System_Object_array *)this->fields.iconList,
         index,
         0,
         (const MethodInfo_31393D4 *)Method_BasicHelper_IndexValue_GameObject____78642240);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  shiftIconDecagramSprite = (struct UISprite_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v8, 0, 0);
  if ( ((unsigned __int8)shiftIconDecagramSprite & 1) == 0 )
    return 0;
  if ( !v8 )
    goto LABEL_13;
  return UnityEngine_GameObject__get_activeInHierarchy((UnityEngine_GameObject_o *)v8, 0);
}


System_String_o *BattleServantHpShiftComponent__MakeAssetNameByPrefixAndIconIndex(
        BattleServantHpShiftComponent_o *this,
        System_String_o *prefix,
        int32_t index,
        System_Nullable_int__o overwriteImageNo,
        const MethodInfo *method)
{
  unsigned __int64 v6; // x21
  __int64 v9; // x23
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  struct BattleServantData_o *svtData; // x8
  System_Collections_Generic_IEnumerable_TSource__o *OverwriteShiftIconArray_k__BackingField; // x24
  System_Func_object__bool__o *v15; // x21
  Il2CppObject *v16; // x0
  int32_t *p_imageType; // x8

  LODWORD(v6) = index;
  if ( (byte_4CCAB4D & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Linq_Enumerable_FirstOrDefault_EnemyScriptParam_OverwriteShiftIcon___);
    sub_1C713B0(&System_Func_EnemyScriptParam_OverwriteShiftIcon__bool__TypeInfo);
    sub_1C713B0(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_1C713B0(&Method_System_Nullable_int__get_HasValue__);
    sub_1C713B0(&Method_BattleServantHpShiftComponent___c__DisplayClass21_0__MakeAssetNameByPrefixAndIconIndex_b__0__);
    sub_1C713B0(&BattleServantHpShiftComponent___c__DisplayClass21_0_TypeInfo);
    byte_4CCAB4D = 1;
  }
  v9 = sub_1C715FC(BattleServantHpShiftComponent___c__DisplayClass21_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 || (*(_DWORD *)(v9 + 16) = v6, (svtData = this->fields.svtData) == 0) )
    sub_1C71608(v10, v11);
  OverwriteShiftIconArray_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)svtData->fields._OverwriteShiftIconArray_k__BackingField;
  if ( !OverwriteShiftIconArray_k__BackingField )
  {
    if ( overwriteImageNo.fields.hasValue )
      v6 = HIDWORD(*(unsigned __int64 *)&overwriteImageNo);
    goto LABEL_15;
  }
  v15 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_EnemyScriptParam_OverwriteShiftIcon__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v15,
    (Il2CppObject *)v9,
    Method_BattleServantHpShiftComponent___c__DisplayClass21_0__MakeAssetNameByPrefixAndIconIndex_b__0__,
    0);
  v16 = System_Linq_Enumerable__FirstOrDefault_object__51858576(
          OverwriteShiftIconArray_k__BackingField,
          (System_Func_TSource__bool__o *)v15,
          (const MethodInfo_3174C90 *)Method_System_Linq_Enumerable_FirstOrDefault_EnemyScriptParam_OverwriteShiftIcon___);
  if ( overwriteImageNo.fields.hasValue )
  {
    v6 = HIDWORD(*(unsigned __int64 *)&overwriteImageNo);
    if ( !v16 )
      goto LABEL_15;
  }
  else
  {
    if ( !v16 )
    {
      LODWORD(v6) = *(_DWORD *)(v9 + 16);
LABEL_15:
      p_imageType = &this->fields.imageType;
      return BattleServantHpShiftComponent__MakeImageSuffixAddedStr(prefix, *p_imageType, v6, v12);
    }
    LODWORD(v6) = v16[1].monitor;
  }
  p_imageType = (int32_t *)&v16[1].klass + 1;
  return BattleServantHpShiftComponent__MakeImageSuffixAddedStr(prefix, *p_imageType, v6, v12);
}


System_String_o *BattleServantHpShiftComponent__MakeImageSuffixAddedStr(
        System_String_o *prefix,
        int32_t inputImageType,
        int32_t imageNo,
        const MethodInfo *method)
{
  Il2CppObject *v7; // x21
  Il2CppObject *v8; // x0
  int32_t v10; // [xsp+8h] [xbp-38h] BYREF
  int32_t v11; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4CCAB4E & 1) == 0 )
  {
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&StringLiteral_25329/*"{0}_{1}_{2}"*/);
    byte_4CCAB4E = 1;
  }
  v11 = inputImageType;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11);
  v10 = imageNo;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return System_String__Format_64073100((System_String_o *)StringLiteral_25329/*"{0}_{1}_{2}"*/, (Il2CppObject *)prefix, v7, v8, 0);
}


bool BattleServantHpShiftComponent__PlayShiftEffectGeneral(
        BattleServantHpShiftComponent_o *this,
        int32_t index,
        BattleServantHpShiftComponent_EffectData_o *effectData,
        BattleServantParamComponent_o *servantParam,
        float *nextAnimationTime,
        System_Action_int__o *callBack,
        const MethodInfo *method)
{
  __int64 v13; // x20
  System_String_o *AssetNameByPrefixAndIconIndex; // x0
  __int64 v15; // x1
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  const MethodInfo *v22; // x2
  __int64 naturalAligment; // x10
  bool v24; // w1
  Il2CppObject *v25; // x22
  bool v26; // w20
  System_String_o *prefixAsset; // x23
  AssetData_o *AssetStorage; // x23
  System_Nullable_int__o v29; // x3
  const MethodInfo *v30; // x4
  UnityEngine_GameObject_o *v31; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *Object; // x21
  Il2CppObject *Component_object; // x19
  System_Action_o *v35; // x21

  if ( (byte_4CCAB5A & 1) == 0 )
  {
    sub_1C713B0(&Method_ActionExtensions_Call_int___);
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_AssetData_GetObject_GameObject____78636968);
    sub_1C713B0(&AssetManager_TypeInfo);
    sub_1C713B0(&Method_BasicHelper_IndexValue_GameObject____78642240);
    sub_1C713B0(&BattleServantSuperBossParamComponent_TypeInfo);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&Method_BattleServantHpShiftComponent___c__DisplayClass35_0__PlayShiftEffectGeneral_b__0__);
    sub_1C713B0(&BattleServantHpShiftComponent___c__DisplayClass35_0_TypeInfo);
    sub_1C713B0(&StringLiteral_20107/*"hp_iconeffect_before"*/);
    byte_4CCAB5A = 1;
  }
  v13 = sub_1C715FC(BattleServantHpShiftComponent___c__DisplayClass35_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0);
  if ( !v13 )
    goto LABEL_35;
  *(_QWORD *)(v13 + 16) = callBack;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v13 + 16), (int32_t)callBack, v16, v17, v18, v19, v20, v21);
  *(_DWORD *)(v13 + 24) = index;
  *nextAnimationTime = 0.0;
  if ( this->fields.decagramNumber - 1 == index )
  {
    if ( !effectData )
      goto LABEL_35;
    if ( System_String__op_Equality(effectData->fields.prefixEffect, (System_String_o *)StringLiteral_20107/*"hp_iconeffect_before"*/, 0) )
    {
      v24 = servantParam
         && (naturalAligment = BattleServantSuperBossParamComponent_TypeInfo->_2.naturalAligment,
             servantParam->klass->_2.naturalAligment >= (unsigned int)naturalAligment)
         && servantParam->klass->_2.typeHierarchy[naturalAligment - 1] == (Il2CppClass *)BattleServantSuperBossParamComponent_TypeInfo;
      *nextAnimationTime = BattleServantHpShiftComponent__CreateDecagramEffect(this, v24, v22);
      return 1;
    }
    index = *(_DWORD *)(v13 + 24);
  }
  v25 = BasicHelper__IndexValue_object_(
          (System_Object_array *)this->fields.iconList,
          index,
          0,
          (const MethodInfo_31393D4 *)Method_BasicHelper_IndexValue_GameObject____78642240);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  AssetNameByPrefixAndIconIndex = (System_String_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v25, 0, 0);
  if ( ((unsigned __int8)AssetNameByPrefixAndIconIndex & 1) == 0 )
  {
    if ( effectData )
    {
      prefixAsset = effectData->fields.prefixAsset;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetStorage = AssetManager__getAssetStorage(prefixAsset, 0);
      v29 = 0;
      AssetNameByPrefixAndIconIndex = BattleServantHpShiftComponent__MakeAssetNameByPrefixAndIconIndex(
                                        this,
                                        effectData->fields.prefixEffect,
                                        *(_DWORD *)(v13 + 24) + 2,
                                        v29,
                                        v30);
      if ( AssetStorage )
      {
        AssetNameByPrefixAndIconIndex = (System_String_o *)AssetData__GetObject_object__51560868(
                                                             AssetStorage,
                                                             AssetNameByPrefixAndIconIndex,
                                                             (const MethodInfo_312C1A4 *)Method_AssetData_GetObject_GameObject____78636968);
        if ( v25 )
        {
          v31 = (UnityEngine_GameObject_o *)AssetNameByPrefixAndIconIndex;
          transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v25, 0);
          Object = (UnityEngine_Object_o *)BaseMonoBehaviour__createObject(
                                             (BaseMonoBehaviour_o *)this,
                                             v31,
                                             transform,
                                             0,
                                             0);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          AssetNameByPrefixAndIconIndex = (System_String_o *)UnityEngine_Object__op_Inequality(Object, 0, 0);
          Component_object = 0;
          if ( ((unsigned __int8)AssetNameByPrefixAndIconIndex & 1) != 0 )
          {
            if ( !Object )
              goto LABEL_35;
            Component_object = UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)Object,
                                 (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
          }
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
          {
            ActionExtensions__Call_int_(
              *(System_Action_T__o **)(v13 + 16),
              *(_DWORD *)(v13 + 24),
              (const MethodInfo_3095C68 *)Method_ActionExtensions_Call_int___);
            return 1;
          }
          v35 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
          System_Action___ctor(
            v35,
            (Il2CppObject *)v13,
            Method_BattleServantHpShiftComponent___c__DisplayClass35_0__PlayShiftEffectGeneral_b__0__,
            0);
          if ( Component_object )
          {
            v26 = 1;
            ((void (__fastcall *)(Il2CppObject *, __int64, System_Action_o *, const MethodInfo *))Component_object->klass->vtable[8].methodPtr)(
              Component_object,
              1,
              v35,
              Component_object->klass->vtable[8].method);
            return v26;
          }
        }
      }
    }
LABEL_35:
    sub_1C71608(AssetNameByPrefixAndIconIndex, v15);
  }
  return 0;
}


void BattleServantHpShiftComponent__UpdateHideInvalidIcon(
        BattleServantHpShiftComponent_o *this,
        int32_t dispMaxPos,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_array *iconList; // x0
  int max_length; // w8
  int v7; // w26
  Il2CppObject *v8; // x21
  Il2CppObject *Component_object; // x0
  __int64 v10; // x1

  if ( (byte_4CCAB53 & 1) == 0 )
  {
    sub_1C713B0(&Method_BasicHelper_IndexValue_GameObject____78642240);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CCAB53 = 1;
  }
  iconList = this->fields.iconList;
  if ( iconList )
    max_length = iconList->max_length;
  else
    max_length = 0;
  if ( dispMaxPos + 1 < max_length )
  {
    v7 = max_length - 2;
    while ( 1 )
    {
      v8 = BasicHelper__IndexValue_object_(
             (System_Object_array *)iconList,
             dispMaxPos + 1,
             0,
             (const MethodInfo_31393D4 *)Method_BasicHelper_IndexValue_GameObject____78642240);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Component_object = (Il2CppObject *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v8, 0, 0);
      if ( ((unsigned __int8)Component_object & 1) != 0 )
      {
        if ( !v8
          || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                                   (UnityEngine_GameObject_o *)v8,
                                   (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___)) == 0 )
        {
          sub_1C71608(Component_object, v10);
        }
        UISprite__set_spriteName((UISprite_o *)Component_object, (System_String_o *)StringLiteral_1/*""*/, 0);
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v8, 0, 0);
      }
      if ( v7 == dispMaxPos )
        break;
      iconList = this->fields.iconList;
      ++dispMaxPos;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleServantHpShiftComponent__UpdateIcon(
        BattleServantHpShiftComponent_o *this,
        int32_t index,
        bool isEmpty,
        bool isActive,
        const MethodInfo *method)
{
  int32_t decagramNumber; // w8
  UnityEngine_Behaviour_o *shiftIconDecagramSprite; // x0
  Il2CppObject *v11; // x23
  int32_t v12; // w22
  Il2CppObject *Component_object; // x21
  const MethodInfo *v14; // x2

  if ( (byte_4CCAB54 & 1) == 0 )
  {
    sub_1C713B0(&Method_BasicHelper_IndexValue_GameObject____78642240);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCAB54 = 1;
  }
  decagramNumber = this->fields.decagramNumber;
  if ( decagramNumber > index )
  {
    if ( decagramNumber - 1 == index )
    {
      shiftIconDecagramSprite = (UnityEngine_Behaviour_o *)this->fields.shiftIconDecagramSprite;
      if ( shiftIconDecagramSprite )
      {
        UnityEngine_Behaviour__set_enabled(shiftIconDecagramSprite, isActive, 0);
        return;
      }
LABEL_17:
      sub_1C71608(shiftIconDecagramSprite, *(_QWORD *)&index);
    }
    v11 = BasicHelper__IndexValue_object_(
            (System_Object_array *)this->fields.iconList,
            index,
            0,
            (const MethodInfo_31393D4 *)Method_BasicHelper_IndexValue_GameObject____78642240);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    shiftIconDecagramSprite = (UnityEngine_Behaviour_o *)UnityEngine_Object__op_Inequality(
                                                           (UnityEngine_Object_o *)v11,
                                                           0,
                                                           0);
    if ( ((unsigned __int8)shiftIconDecagramSprite & 1) != 0 )
    {
      if ( !v11 )
        goto LABEL_17;
      v12 = isEmpty ? 0 : index + 2;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)v11,
                           (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      shiftIconDecagramSprite = (UnityEngine_Behaviour_o *)BattleServantHpShiftComponent__getSpriteName(this, v12, v14);
      if ( !Component_object )
        goto LABEL_17;
      UISprite__set_spriteName((UISprite_o *)Component_object, (System_String_o *)shiftIconDecagramSprite, 0);
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v11, isActive, 0);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleServantHpShiftComponent__UpdateIconActive(
        BattleServantHpShiftComponent_o *this,
        int32_t index,
        bool isActive,
        const MethodInfo *method)
{
  int32_t decagramNumber; // w8
  struct UISprite_o *shiftIconDecagramSprite; // x0
  Il2CppObject *v9; // x20

  if ( (byte_4CCAB55 & 1) == 0 )
  {
    sub_1C713B0(&Method_BasicHelper_IndexValue_GameObject____78642240);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCAB55 = 1;
  }
  decagramNumber = this->fields.decagramNumber;
  if ( decagramNumber > index )
  {
    if ( decagramNumber - 1 == index )
    {
      shiftIconDecagramSprite = this->fields.shiftIconDecagramSprite;
      if ( shiftIconDecagramSprite )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)shiftIconDecagramSprite, isActive, 0);
        return;
      }
LABEL_13:
      sub_1C71608(shiftIconDecagramSprite, *(_QWORD *)&index);
    }
    v9 = BasicHelper__IndexValue_object_(
           (System_Object_array *)this->fields.iconList,
           index,
           0,
           (const MethodInfo_31393D4 *)Method_BasicHelper_IndexValue_GameObject____78642240);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    shiftIconDecagramSprite = (struct UISprite_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v9, 0, 0);
    if ( ((unsigned __int8)shiftIconDecagramSprite & 1) != 0 )
    {
      if ( !v9 )
        goto LABEL_13;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v9, isActive, 0);
    }
  }
}


void BattleServantHpShiftComponent__createIconList(
        BattleServantHpShiftComponent_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  BattleServantHpShiftComponent_o *v4; // x19
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  struct UnityEngine_GameObject_array *iconList; // x8
  struct UnityEngine_GameObject_array **p_iconList; // x20
  int v13; // w21
  int decagramNumber; // w10
  il2cpp_array_size_t max_length; // x9
  unsigned int v16; // w22
  _BOOL4 v17; // w23
  unsigned __int64 v18; // x25
  UnityEngine_Object_o *v19; // x24
  int v20; // w8
  BattleDataDefine_c *v21; // x0
  System_String_o *ASSET_BATTLE_COMMON; // x23
  UISprite_o *shiftIconDecagramSprite; // x23
  const MethodInfo *v24; // x2
  __int64 v25; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  UIAtlas_o *atlas; // [xsp+8h] [xbp-48h] BYREF

  v4 = this;
  if ( (byte_4CCAB50 & 1) == 0 )
  {
    sub_1C713B0(&AssetManager_TypeInfo);
    sub_1C713B0(&BattleDataDefine_TypeInfo);
    sub_1C713B0(&UnityEngine_GameObject___TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    this = (BattleServantHpShiftComponent_o *)sub_1C713B0(&StringLiteral_3101/*"BattleAssetUIAtlas"*/);
    byte_4CCAB50 = 1;
  }
  atlas = 0;
  if ( !svtData )
    goto LABEL_38;
  this = (BattleServantHpShiftComponent_o *)BattleServantData__GetMaxShiftIconCount(svtData, 0);
  p_iconList = &v4->fields.iconList;
  iconList = v4->fields.iconList;
  v13 = (int)this;
  if ( iconList )
  {
    if ( (_DWORD)this == LODWORD(iconList->max_length) )
      return;
    decagramNumber = v4->fields.decagramNumber;
    max_length = iconList->max_length;
    if ( (int)this < decagramNumber )
      v16 = (unsigned int)this;
    else
      v16 = decagramNumber - 1;
    v17 = (int)this >= decagramNumber;
    if ( v16 != (_DWORD)max_length )
    {
      if ( (int)max_length >= 1 )
      {
        v18 = 0;
        while ( 1 )
        {
          if ( v18 >= (unsigned int)max_length )
            sub_1C71610(this);
          v19 = (UnityEngine_Object_o *)iconList->m_Items[v18];
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          UnityEngine_Object__Destroy_71724608(v19, 0);
          iconList = *p_iconList;
          if ( !*p_iconList )
            break;
          LODWORD(max_length) = iconList->max_length;
          if ( (__int64)++v18 >= (int)max_length )
            goto LABEL_17;
        }
LABEL_38:
        sub_1C71608(this, svtData);
      }
LABEL_17:
      *p_iconList = 0;
      sub_1C71354((GrandQuestFolderBoardItem_o *)&v4->fields.iconList, 0, v5, v6, v7, v8, v9, v10);
    }
  }
  else
  {
    v20 = v4->fields.decagramNumber;
    v17 = (int)this >= v20;
    if ( (int)this < v20 )
      v16 = (unsigned int)this;
    else
      v16 = v20 - 1;
  }
  this = (BattleServantHpShiftComponent_o *)v4->fields.shiftIconDecagramSprite;
  if ( !this )
    goto LABEL_38;
  this = (BattleServantHpShiftComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_38;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v17, 0);
  if ( v17 )
  {
    v21 = BattleDataDefine_TypeInfo;
    if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
      v21 = BattleDataDefine_TypeInfo;
    }
    ASSET_BATTLE_COMMON = v21->static_fields->ASSET_BATTLE_COMMON;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    if ( AssetManager__TryGetUIAtlas(&atlas, ASSET_BATTLE_COMMON, (System_String_o *)StringLiteral_3101/*"BattleAssetUIAtlas"*/, 0) )
    {
      this = (BattleServantHpShiftComponent_o *)v4->fields.shiftIconDecagramSprite;
      if ( !this )
        goto LABEL_38;
      UISprite__set_atlas((UISprite_o *)this, atlas, 0);
      shiftIconDecagramSprite = v4->fields.shiftIconDecagramSprite;
      this = (BattleServantHpShiftComponent_o *)BattleServantHpShiftComponent__getSpriteName(
                                                  v4,
                                                  v4->fields.decagramNumber + 1,
                                                  v24);
      if ( !shiftIconDecagramSprite )
        goto LABEL_38;
      UISprite__set_spriteName(shiftIconDecagramSprite, (System_String_o *)this, 0);
      this = (BattleServantHpShiftComponent_o *)v4->fields.shiftIconDecagramSprite;
      if ( !this )
        goto LABEL_38;
      ((void (__fastcall *)(BattleServantHpShiftComponent_o *, void *))this->klass[2]._1.parent)(
        this,
        this->klass[2]._1.generic_class);
    }
  }
  if ( v13 >= 1 )
  {
    if ( !*p_iconList )
    {
      v25 = sub_1C71458(UnityEngine_GameObject___TypeInfo, v16);
      *p_iconList = (struct UnityEngine_GameObject_array *)v25;
      sub_1C71354((GrandQuestFolderBoardItem_o *)&v4->fields.iconList, v25, v26, v27, v28, v29, v30, v31);
    }
    BattleServantHpShiftComponent__AlignShiftIcons(v4, (const MethodInfo *)svtData);
  }
}


System_String_o *BattleServantHpShiftComponent__getSpriteName(
        BattleServantHpShiftComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  System_Nullable_int__o v6; // x3

  if ( (byte_4CCAB48 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_20104/*"hp_icon"*/);
    byte_4CCAB48 = 1;
  }
  v6 = 0;
  return BattleServantHpShiftComponent__MakeAssetNameByPrefixAndIconIndex(
           this,
           (System_String_o *)StringLiteral_20104/*"hp_icon"*/,
           index,
           v6,
           v3);
}


void BattleServantHpShiftComponent__playShiftEffect(
        BattleServantHpShiftComponent_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  BattleServantHpShiftComponent_o *v4; // x19
  struct System_Int32_array *shiftDeckList; // x9
  struct UnityEngine_GameObject_array *iconList; // x8
  int max_length; // w11
  unsigned int v8; // w9
  unsigned int v9; // w22
  UnityEngine_Object_o *v10; // x20
  BattleDataDefine_c *v11; // x0
  System_String_o *ASSET_BATTLE_COMMON; // x20
  AssetData_o *AssetStorage; // x21
  const MethodInfo *v14; // x2
  Il2CppObject *Object_object__51560868; // x21
  struct UnityEngine_GameObject_array *v16; // x8
  UnityEngine_Transform_o *transform; // x0
  struct UnityEngine_GameObject_array *v18; // x8
  Il2CppObject *Component_object; // x21
  const MethodInfo *v20; // x2

  v4 = this;
  if ( (byte_4CCAB59 & 1) == 0 )
  {
    sub_1C713B0(&Method_AssetData_GetObject_GameObject____78636968);
    sub_1C713B0(&AssetManager_TypeInfo);
    sub_1C713B0(&BattleDataDefine_TypeInfo);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    this = (BattleServantHpShiftComponent_o *)sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCAB59 = 1;
  }
  if ( !svtData )
    goto LABEL_29;
  shiftDeckList = svtData->fields.shiftDeckList;
  if ( !shiftDeckList )
    goto LABEL_29;
  iconList = v4->fields.iconList;
  if ( !iconList )
    return;
  max_length = shiftDeckList->max_length;
  v8 = iconList->max_length;
  v9 = max_length - svtData->fields.shiftDeckIndex;
  if ( (int)v9 >= (int)v8 )
    return;
  if ( v9 >= v8 )
    goto LABEL_30;
  v10 = (UnityEngine_Object_o *)iconList->m_Items[v9];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v10, 0, 0) )
  {
    v11 = BattleDataDefine_TypeInfo;
    if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
      v11 = BattleDataDefine_TypeInfo;
    }
    ASSET_BATTLE_COMMON = v11->static_fields->ASSET_BATTLE_COMMON;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetStorage = AssetManager__getAssetStorage(ASSET_BATTLE_COMMON, 0);
    this = (BattleServantHpShiftComponent_o *)BattleServantHpShiftComponent__GetBreakShiftIconEffectName(
                                                v4,
                                                v9 + 2,
                                                v14);
    if ( !AssetStorage )
      goto LABEL_29;
    Object_object__51560868 = AssetData__GetObject_object__51560868(
                                AssetStorage,
                                (System_String_o *)this,
                                (const MethodInfo_312C1A4 *)Method_AssetData_GetObject_GameObject____78636968);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattleServantHpShiftComponent_o *)UnityEngine_Object__op_Inequality(
                                                (UnityEngine_Object_o *)Object_object__51560868,
                                                0,
                                                0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v16 = v4->fields.iconList;
      if ( !v16 )
        goto LABEL_29;
      if ( v9 >= LODWORD(v16->max_length) )
        goto LABEL_30;
      this = (BattleServantHpShiftComponent_o *)v16->m_Items[v9];
      if ( !this )
        goto LABEL_29;
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
      this = (BattleServantHpShiftComponent_o *)BaseMonoBehaviour__createObject(
                                                  (BaseMonoBehaviour_o *)v4,
                                                  (UnityEngine_GameObject_o *)Object_object__51560868,
                                                  transform,
                                                  0,
                                                  0);
    }
    v18 = v4->fields.iconList;
    if ( !v18 )
      goto LABEL_29;
    if ( v9 < LODWORD(v18->max_length) )
    {
      this = (BattleServantHpShiftComponent_o *)v18->m_Items[v9];
      if ( this )
      {
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)this,
                             (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        this = (BattleServantHpShiftComponent_o *)BattleServantHpShiftComponent__GetEmptyIconSpriteName(v4, v9 + 2, v20);
        if ( Component_object )
        {
          UISprite__set_spriteName((UISprite_o *)Component_object, (System_String_o *)this, 0);
          return;
        }
      }
LABEL_29:
      sub_1C71608(this, svtData);
    }
LABEL_30:
    sub_1C71610(this);
  }
}


float BattleServantHpShiftComponent__playShiftEffectBefore(
        BattleServantHpShiftComponent_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  BattleServantHpShiftComponent_o *v4; // x19
  struct System_Int32_array *shiftDeckList; // x8
  int v6; // w21
  bool IsSuperBossUi; // w1
  const MethodInfo *v8; // x2
  struct UnityEngine_GameObject_array *iconList; // x8
  int max_length; // w9
  UnityEngine_Object_o *v12; // x20
  BattleDataDefine_c *v13; // x0
  System_String_o *ASSET_BATTLE_COMMON; // x20
  AssetData_o *AssetStorage; // x20
  const MethodInfo *v16; // x2
  Il2CppObject *Object_object__51560868; // x20
  struct UnityEngine_GameObject_array *v18; // x8
  UnityEngine_Transform_o *transform; // x0

  v4 = this;
  if ( (byte_4CCAB58 & 1) == 0 )
  {
    sub_1C713B0(&Method_AssetData_GetObject_GameObject____78636968);
    sub_1C713B0(&AssetManager_TypeInfo);
    sub_1C713B0(&BattleDataDefine_TypeInfo);
    this = (BattleServantHpShiftComponent_o *)sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCAB58 = 1;
  }
  if ( !svtData )
    goto LABEL_26;
  shiftDeckList = svtData->fields.shiftDeckList;
  if ( !shiftDeckList )
    goto LABEL_26;
  v6 = LODWORD(shiftDeckList->max_length) - svtData->fields.shiftDeckIndex;
  if ( v4->fields.decagramNumber - 1 == v6 )
  {
    IsSuperBossUi = BattleServantData__get_IsSuperBossUi(svtData, 0);
    return BattleServantHpShiftComponent__CreateDecagramEffect(v4, IsSuperBossUi, v8);
  }
  iconList = v4->fields.iconList;
  if ( iconList )
  {
    max_length = iconList->max_length;
    if ( v6 < max_length )
    {
      if ( v6 < (unsigned int)max_length )
      {
        v12 = (UnityEngine_Object_o *)iconList->m_Items[v6];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality(v12, 0, 0) )
          return 0.0;
        v13 = BattleDataDefine_TypeInfo;
        if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
          v13 = BattleDataDefine_TypeInfo;
        }
        ASSET_BATTLE_COMMON = v13->static_fields->ASSET_BATTLE_COMMON;
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        AssetStorage = AssetManager__getAssetStorage(ASSET_BATTLE_COMMON, 0);
        this = (BattleServantHpShiftComponent_o *)BattleServantHpShiftComponent__GetShiftBeforeEffectName(
                                                    v4,
                                                    v6 + 2,
                                                    v16);
        if ( !AssetStorage )
          goto LABEL_26;
        Object_object__51560868 = AssetData__GetObject_object__51560868(
                                    AssetStorage,
                                    (System_String_o *)this,
                                    (const MethodInfo_312C1A4 *)Method_AssetData_GetObject_GameObject____78636968);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (BattleServantHpShiftComponent_o *)UnityEngine_Object__op_Inequality(
                                                    (UnityEngine_Object_o *)Object_object__51560868,
                                                    0,
                                                    0);
        if ( ((unsigned __int8)this & 1) == 0 )
          return 0.0;
        v18 = v4->fields.iconList;
        if ( !v18 )
          goto LABEL_26;
        if ( (unsigned int)v6 < LODWORD(v18->max_length) )
        {
          this = (BattleServantHpShiftComponent_o *)v18->m_Items[v6];
          if ( this )
          {
            transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
            BaseMonoBehaviour__createObject(
              (BaseMonoBehaviour_o *)v4,
              (UnityEngine_GameObject_o *)Object_object__51560868,
              transform,
              0,
              0);
            return 0.0;
          }
LABEL_26:
          sub_1C71608(this, svtData);
        }
      }
      sub_1C71610(this);
    }
  }
  return 0.0;
}


int32_t BattleServantHpShiftComponent__setInitValue(
        BattleServantHpShiftComponent_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v10; // x1
  __int64 v11; // x1
  UnityEngine_GameObject_o *shiftIconClone; // x0
  Il2CppObject *Component_object; // x0
  BattleDataDefine_c *v14; // x8
  UISprite_o *v15; // x21
  System_String_o *ASSET_BATTLE_COMMON; // x22
  const MethodInfo *v17; // x2
  System_String_o *SpriteName; // x0
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x2
  int32_t MaxShiftIconPos; // w0
  const MethodInfo *v22; // x2
  UIAtlas_o *atlas; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CCAB46 & 1) == 0 )
  {
    sub_1C713B0(&AssetManager_TypeInfo);
    sub_1C713B0(&BattleDataDefine_TypeInfo);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C713B0(&StringLiteral_3101/*"BattleAssetUIAtlas"*/);
    byte_4CCAB46 = 1;
  }
  atlas = 0;
  this->fields.svtData = svtData;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.svtData,
    (int32_t)svtData,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  BattleServantHpShiftComponent__ImportFromBattleCommonSettings(this, v10);
  shiftIconClone = this->fields.shiftIconClone;
  if ( !shiftIconClone )
    goto LABEL_16;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       shiftIconClone,
                       (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  v14 = BattleDataDefine_TypeInfo;
  v15 = (UISprite_o *)Component_object;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v14 = BattleDataDefine_TypeInfo;
  }
  ASSET_BATTLE_COMMON = v14->static_fields->ASSET_BATTLE_COMMON;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  shiftIconClone = (UnityEngine_GameObject_o *)AssetManager__TryGetUIAtlas(
                                                 &atlas,
                                                 ASSET_BATTLE_COMMON,
                                                 (System_String_o *)StringLiteral_3101/*"BattleAssetUIAtlas"*/,
                                                 0);
  if ( ((unsigned __int8)shiftIconClone & 1) != 0 )
  {
    if ( !v15 )
      goto LABEL_16;
    UISprite__set_atlas(v15, atlas, 0);
    SpriteName = BattleServantHpShiftComponent__getSpriteName(this, 0, v17);
    UISprite__set_spriteName(v15, SpriteName, 0);
    this->fields.defaultDepth = v15->fields.mDepth;
  }
  shiftIconClone = this->fields.shiftIconClone;
  if ( !shiftIconClone
    || (UnityEngine_GameObject__SetActive(shiftIconClone, 0, 0),
        BattleServantHpShiftComponent__createIconList(this, svtData, v19),
        BattleServantHpShiftComponent__setValue(this, svtData, v20),
        !svtData) )
  {
LABEL_16:
    sub_1C71608(shiftIconClone, v11);
  }
  if ( svtData->fields.lowLimitShift >= 1 )
  {
    MaxShiftIconPos = BattleServantData__GetMaxShiftIconPos(svtData, 0);
    BattleServantHpShiftComponent__UpdateHideInvalidIcon(this, MaxShiftIconPos, v22);
  }
  return 0;
}


void BattleServantHpShiftComponent__setValue(
        BattleServantHpShiftComponent_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  BattleServantHpShiftComponent_o *v4; // x19
  int decagramNumber; // w21
  int v6; // w20
  struct UnityEngine_GameObject_array *iconList; // x8
  bool v8; // w21
  __int64 v9; // x24
  int max_length; // w9
  unsigned int v11; // w25
  const MethodInfo *v12; // x2
  Il2CppObject *Component_object; // x22
  int32_t v14; // w1
  struct UnityEngine_GameObject_array *v15; // x8

  v4 = this;
  if ( (byte_4CCAB52 & 1) == 0 )
  {
    this = (BattleServantHpShiftComponent_o *)sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    byte_4CCAB52 = 1;
  }
  if ( v4->fields.iconList )
  {
    if ( !svtData
      || (this = (BattleServantHpShiftComponent_o *)BattleServantData__GetCurrentShiftPos(svtData, 0),
          !v4->fields.shiftIconDecagramSprite)
      || (decagramNumber = v4->fields.decagramNumber,
          v6 = (int)this,
          UnityEngine_Behaviour__set_enabled(
            (UnityEngine_Behaviour_o *)v4->fields.shiftIconDecagramSprite,
            (int)this >= decagramNumber,
            0),
          (iconList = v4->fields.iconList) == 0) )
    {
LABEL_19:
      sub_1C71608(this, svtData);
    }
    v8 = v6 < decagramNumber;
    v9 = 4;
    while ( 1 )
    {
      max_length = iconList->max_length;
      v11 = v9 - 4;
      if ( (int)v9 - 4 >= max_length )
        break;
      if ( v11 >= max_length )
        goto LABEL_21;
      this = (BattleServantHpShiftComponent_o *)*((_QWORD *)&iconList->obj.klass + v9);
      if ( this )
      {
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)this,
                             (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        v14 = v9 - 2;
        if ( (int)v11 >= v6 )
        {
          this = (BattleServantHpShiftComponent_o *)BattleServantHpShiftComponent__GetEmptyIconSpriteName(v4, v14, v12);
          if ( !Component_object )
            goto LABEL_19;
        }
        else
        {
          this = (BattleServantHpShiftComponent_o *)BattleServantHpShiftComponent__getSpriteName(v4, v14, v12);
          if ( !Component_object )
            goto LABEL_19;
        }
        UISprite__set_spriteName((UISprite_o *)Component_object, (System_String_o *)this, 0);
        v15 = v4->fields.iconList;
        if ( v15 )
        {
          if ( v11 >= LODWORD(v15->max_length) )
LABEL_21:
            sub_1C71610(this);
          this = (BattleServantHpShiftComponent_o *)*((_QWORD *)&v15->obj.klass + v9);
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v8, 0);
            iconList = v4->fields.iconList;
            ++v9;
            if ( iconList )
              continue;
          }
        }
      }
      goto LABEL_19;
    }
  }
}


void BattleServantHpShiftComponent_EffectData___ctor(
        BattleServantHpShiftComponent_EffectData_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  BattleDataDefine_c *v9; // x0
  struct System_String_o *ASSET_BATTLE_COMMON; // x1

  if ( (byte_4CCAB5B & 1) == 0 )
  {
    sub_1C713B0(&BattleDataDefine_TypeInfo);
    byte_4CCAB5B = 1;
  }
  v9 = BattleDataDefine_TypeInfo;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v9 = BattleDataDefine_TypeInfo;
  }
  ASSET_BATTLE_COMMON = v9->static_fields->ASSET_BATTLE_COMMON;
  this->fields.prefixAsset = ASSET_BATTLE_COMMON;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)ASSET_BATTLE_COMMON, v2, v3, v4, v5, v6, v7);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleServantHpShiftComponent___c__DisplayClass21_0___ctor(
        BattleServantHpShiftComponent___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleServantHpShiftComponent___c__DisplayClass21_0___MakeAssetNameByPrefixAndIconIndex_b__0(
        BattleServantHpShiftComponent___c__DisplayClass21_0_o *this,
        EnemyScriptParam_OverwriteShiftIcon_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C71608(this, 0);
  return x->fields.index == this->fields.index - 1;
}


void BattleServantHpShiftComponent___c__DisplayClass23_0___ctor(
        BattleServantHpShiftComponent___c__DisplayClass23_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleServantHpShiftComponent___c__DisplayClass23_0___GetShiftIconAdjustment_b__0(
        BattleServantHpShiftComponent___c__DisplayClass23_0_o *this,
        BattleCommonSettings_ShiftIconAdjustment_o *x,
        const MethodInfo *method)
{
  System_String_o *SpriteName; // x0

  if ( !x )
    sub_1C71608(this, 0);
  SpriteName = BattleCommonSettings_ShiftIconAdjustment__get_SpriteName(x, 0);
  return System_String__op_Equality(SpriteName, this->fields.spriteName, 0);
}


void BattleServantHpShiftComponent___c__DisplayClass35_0___ctor(
        BattleServantHpShiftComponent___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleServantHpShiftComponent___c__DisplayClass35_0___PlayShiftEffectGeneral_b__0(
        BattleServantHpShiftComponent___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CCAB5C & 1) == 0 )
  {
    sub_1C713B0(&Method_ActionExtensions_Call_int___);
    byte_4CCAB5C = 1;
  }
  ActionExtensions__Call_int_(
    (System_Action_T__o *)this->fields.callBack,
    this->fields.index,
    (const MethodInfo_3095C68 *)Method_ActionExtensions_Call_int___);
}