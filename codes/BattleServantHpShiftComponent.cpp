void __fastcall BattleServantHpShiftComponent___ctor(BattleServantHpShiftComponent_o *this, const MethodInfo *method)
{
  this->fields.decagramNumber = 10;
  this->fields.imageType = 1;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleServantHpShiftComponent__AlignShiftIcons(
        BattleServantHpShiftComponent_o *this,
        const MethodInfo *method)
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
  struct UnityEngine_GameObject_array *v18; // x8
  UISprite_o *Component_object; // x21
  const MethodInfo *v20; // x2
  const MethodInfo *v21; // x2
  BattleServantData_o *v22; // x22
  float hiddenValue_high; // s9
  struct UnityEngine_GameObject_array *v24; // x8
  float v25; // s10
  float v26; // s8
  struct UnityEngine_GameObject_array *v27; // x8
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A5E18B & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E18B = 1;
  }
  svtData = this->fields.svtData;
  if ( !svtData
    || (svtData = (BattleServantData_o *)BattleServantData__GetCurrentShiftPos(svtData, 0LL),
        (iconList = this->fields.iconList) == 0LL) )
  {
LABEL_33:
    sub_1B8880C(svtData, method);
  }
  decagramNumber = this->fields.decagramNumber;
  v6 = (int)svtData;
  v7 = 0.0;
  v8 = 4LL;
  v9 = 32LL;
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
    svtData = (BattleServantData_o *)UnityEngine_Object__op_Equality(v12, 0LL, 0LL);
    if ( ((unsigned __int8)svtData & 1) != 0 )
    {
      v13 = this->fields.iconList;
      shiftIconClone = this->fields.shiftIconClone;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      svtData = (BattleServantData_o *)BaseMonoBehaviour__createObject(
                                         (BaseMonoBehaviour_o *)this,
                                         shiftIconClone,
                                         transform,
                                         0LL,
                                         0LL);
      if ( !v13 )
        goto LABEL_33;
      if ( v11 >= v13->max_length )
        goto LABEL_35;
      *((_QWORD *)&v13->obj.klass + v8) = svtData;
      sub_1B88554((ServantStatusBattleListViewItem_o *)((char *)v13 + v9), (int32_t)svtData, v16, v17);
    }
    v18 = this->fields.iconList;
    if ( !v18 )
      goto LABEL_33;
    if ( v11 >= v18->max_length )
LABEL_35:
      sub_1B88814(svtData, method);
    svtData = (BattleServantData_o *)*((_QWORD *)&v18->obj.klass + v8);
    if ( svtData )
    {
      Component_object = (UISprite_o *)UnityEngine_GameObject__GetComponent_object_(
                                         (UnityEngine_GameObject_o *)svtData,
                                         (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      svtData = (BattleServantData_o *)BattleServantHpShiftComponent__getSpriteName(this, (int)v8 - 2, v20);
      if ( Component_object )
      {
        UISprite__set_spriteName(Component_object, (System_String_o *)svtData, 0LL);
        UIWidget__set_depth((UIWidget_o *)Component_object, v8 + this->fields.defaultDepth - 4, 0LL);
        svtData = (BattleServantData_o *)BattleServantHpShiftComponent__GetShiftIconAdjustment(
                                           this,
                                           Component_object->fields.mSpriteName,
                                           v21);
        if ( svtData )
        {
          v22 = svtData;
          UIWidget__set_width((UIWidget_o *)Component_object, svtData->fields.uniqueId, 0LL);
          UIWidget__set_height((UIWidget_o *)Component_object, *(&v22->fields.uniqueId + 1), 0LL);
          svtData = (BattleServantData_o *)UnityEngine_Component__get_transform(
                                             (UnityEngine_Component_o *)Component_object,
                                             0LL);
          if ( !svtData )
            goto LABEL_33;
          UnityEngine_Transform__set_localPosition(
            (UnityEngine_Transform_o *)svtData,
            *(UnityEngine_Vector3_o *)&v22->fields.userSvtId.fields.currentCryptoKey,
            0LL);
          hiddenValue_high = (float)SHIDWORD(v22->fields.userSvtId.fields.hiddenValue);
        }
        else
        {
          hiddenValue_high = 0.0;
        }
        v24 = this->fields.iconList;
        v25 = (_DWORD)v8 == 4 ? -hiddenValue_high : hiddenValue_high;
        if ( v24 )
        {
          if ( v11 >= v24->max_length )
            goto LABEL_35;
          svtData = (BattleServantData_o *)*((_QWORD *)&v24->obj.klass + v8);
          if ( svtData )
          {
            svtData = (BattleServantData_o *)UnityEngine_GameObject__get_transform(
                                               (UnityEngine_GameObject_o *)svtData,
                                               0LL);
            if ( svtData )
            {
              v26 = v7 + v25;
              v28.fields.z = 0.0;
              v28.fields.y = this->fields.addPos.fields.y * (float)(int)v11;
              v28.fields.x = v26;
              UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)svtData, v28, 0LL);
              v27 = this->fields.iconList;
              if ( v27 )
              {
                if ( v11 >= v27->max_length )
                  goto LABEL_35;
                svtData = (BattleServantData_o *)*((_QWORD *)&v27->obj.klass + v8);
                if ( svtData )
                {
                  v7 = v26 + (float)(hiddenValue_high + this->fields.addPos.fields.x);
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtData, v6 < decagramNumber, 0LL);
                  iconList = this->fields.iconList;
                  ++v8;
                  v9 += 8LL;
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


float __fastcall BattleServantHpShiftComponent__CreateDecagramEffect(
        BattleServantHpShiftComponent_o *this,
        bool isSuperBoss,
        const MethodInfo *method)
{
  BattleDataDefine_c *v5; // x0
  System_String_o *ASSET_BATTLE_COMMON; // x21
  AssetData_o *AssetStorage; // x0
  __int64 v8; // x1
  Il2CppObject *Object_object__48635516; // x21
  float v10; // s8
  UnityEngine_Transform_o *parent; // x0
  UnityEngine_Object_o *Object; // x21
  Il2CppObject *Component_object; // x21
  int32_t v14; // w2
  int32_t v15; // w3

  if ( (byte_4A5E191 & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetData_GetObject_GameObject____76085352);
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&BattleDataDefine_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_BattleServantHpShiftDecagramEffectComponent___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_19973/*"hp_crystaleffect_superboss_1_1"*/);
    sub_1B885B0(&StringLiteral_19972/*"hp_crystaleffect_1_1"*/);
    byte_4A5E191 = 1;
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
  AssetStorage = AssetManager__getAssetStorage(ASSET_BATTLE_COMMON, 0LL);
  if ( !AssetStorage )
    goto LABEL_24;
  Object_object__48635516 = AssetData__GetObject_object__48635516(
                              AssetStorage,
                              (System_String_o *)StringLiteral_19972/*"hp_crystaleffect_1_1"*/,
                              (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v10 = 0.0;
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__48635516, 0LL, 0LL) )
  {
    AssetStorage = (AssetData_o *)this->fields.shiftIconDecagramSprite;
    if ( !AssetStorage )
      goto LABEL_24;
    AssetStorage = (AssetData_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)AssetStorage, 0LL);
    if ( !AssetStorage )
      goto LABEL_24;
    parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)AssetStorage, 0LL);
    Object = (UnityEngine_Object_o *)BaseMonoBehaviour__createObject(
                                       (BaseMonoBehaviour_o *)this,
                                       (UnityEngine_GameObject_o *)Object_object__48635516,
                                       parent,
                                       0LL,
                                       0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    AssetStorage = (AssetData_o *)UnityEngine_Object__op_Inequality(Object, 0LL, 0LL);
    if ( ((unsigned __int8)AssetStorage & 1) != 0 )
    {
      if ( !Object )
        goto LABEL_24;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)Object,
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BattleServantHpShiftDecagramEffectComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      AssetStorage = (AssetData_o *)UnityEngine_Object__op_Inequality(
                                      (UnityEngine_Object_o *)Component_object,
                                      0LL,
                                      0LL);
      if ( ((unsigned __int8)AssetStorage & 1) != 0 )
      {
        if ( Component_object )
        {
          Component_object[13].klass = (Il2CppClass *)this;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&Component_object[13], (int32_t)this, v14, v15);
          v10 = *((float *)&Component_object[12].monitor + 1);
          if ( isSuperBoss )
            CommonEffectComponent__Init_40640996(
              (CommonEffectComponent_o *)Component_object,
              (System_String_o *)StringLiteral_19973/*"hp_crystaleffect_superboss_1_1"*/,
              0,
              0,
              0LL);
          return v10;
        }
LABEL_24:
        sub_1B8880C(AssetStorage, v8);
      }
    }
  }
  return v10;
}


System_String_o *__fastcall BattleServantHpShiftComponent__GetBreakShiftIconEffectName(
        BattleServantHpShiftComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  System_Nullable_int__o v7; // 0:x3.8

  if ( (byte_4A5E185 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_19980/*"hp_iconeffect"*/);
    byte_4A5E185 = 1;
  }
  v7 = 0LL;
  return BattleServantHpShiftComponent__MakeAssetNameByPrefixAndIconIndex(
           this,
           (System_String_o *)StringLiteral_19980/*"hp_iconeffect"*/,
           index,
           v7,
           v3);
}


System_String_o *__fastcall BattleServantHpShiftComponent__GetEmptyIconSpriteName(
        BattleServantHpShiftComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x4
  System_Nullable_int__o overwriteImageNo; // [xsp+8h] [xbp-38h] BYREF
  System_Nullable_int__o p_overwriteImageNo; // 0:x0.8
  System_Nullable_int__o v9; // 0:x3.8

  if ( (byte_4A5E184 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Nullable_int___ctor__);
    sub_1B885B0(&StringLiteral_19978/*"hp_icon"*/);
    byte_4A5E184 = 1;
  }
  p_overwriteImageNo = (System_Nullable_int__o)&overwriteImageNo;
  overwriteImageNo = 0LL;
  System_Nullable_int____ctor(p_overwriteImageNo, 0, (const MethodInfo_361A2C0 *)Method_System_Nullable_int___ctor__);
  v9 = overwriteImageNo;
  return BattleServantHpShiftComponent__MakeAssetNameByPrefixAndIconIndex(
           this,
           (System_String_o *)StringLiteral_19978/*"hp_icon"*/,
           index,
           v9,
           v5);
}


System_String_o *__fastcall BattleServantHpShiftComponent__GetShiftBeforeEffectName(
        BattleServantHpShiftComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  System_Nullable_int__o v7; // 0:x3.8

  if ( (byte_4A5E186 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_19981/*"hp_iconeffect_before"*/);
    byte_4A5E186 = 1;
  }
  v7 = 0LL;
  return BattleServantHpShiftComponent__MakeAssetNameByPrefixAndIconIndex(
           this,
           (System_String_o *)StringLiteral_19981/*"hp_iconeffect_before"*/,
           index,
           v7,
           v3);
}


BattleCommonSettings_ShiftIconAdjustment_o *__fastcall BattleServantHpShiftComponent__GetShiftIconAdjustment(
        BattleServantHpShiftComponent_o *this,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_Collections_Generic_IEnumerable_TSource__o *shiftIconAdjustmentArray; // x19
  System_Func_object__bool__o *v11; // x20

  if ( (byte_4A5E189 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_FirstOrDefault_BattleCommonSettings_ShiftIconAdjustment___);
    sub_1B885B0(&System_Func_BattleCommonSettings_ShiftIconAdjustment__bool__TypeInfo);
    sub_1B885B0(&Method_BattleServantHpShiftComponent___c__DisplayClass23_0__GetShiftIconAdjustment_b__0__);
    sub_1B885B0(&BattleServantHpShiftComponent___c__DisplayClass23_0_TypeInfo);
    byte_4A5E189 = 1;
  }
  v5 = sub_1B887FC(BattleServantHpShiftComponent___c__DisplayClass23_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    sub_1B8880C(v6, v7);
  *(_QWORD *)(v5 + 16) = spriteName;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)spriteName, v8, v9);
  shiftIconAdjustmentArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.shiftIconAdjustmentArray;
  if ( !shiftIconAdjustmentArray )
    return 0LL;
  v11 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_BattleCommonSettings_ShiftIconAdjustment__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    (Il2CppObject *)v5,
    Method_BattleServantHpShiftComponent___c__DisplayClass23_0__GetShiftIconAdjustment_b__0__,
    0LL);
  return (BattleCommonSettings_ShiftIconAdjustment_o *)System_Linq_Enumerable__FirstOrDefault_object__48907856(
                                                         shiftIconAdjustmentArray,
                                                         (System_Func_TSource__bool__o *)v11,
                                                         (const MethodInfo_2EA4650 *)Method_System_Linq_Enumerable_FirstOrDefault_BattleCommonSettings_ShiftIconAdjustment___);
}


System_String_o *__fastcall BattleServantHpShiftComponent__GetShiftIconName(
        int32_t inputImageType,
        int32_t imageNo,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4A5E183 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_19978/*"hp_icon"*/);
    byte_4A5E183 = 1;
  }
  return BattleServantHpShiftComponent__MakeImageSuffixAddedStr(
           (System_String_o *)StringLiteral_19978/*"hp_icon"*/,
           inputImageType,
           imageNo,
           v3);
}


void __fastcall BattleServantHpShiftComponent__ImportFromBattleCommonSettings(
        BattleServantHpShiftComponent_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_shiftIconAdjustmentArray; // x19
  struct BattleCommonSettings_ShiftIconAdjustment_array *shiftIconAdjustmentArray; // t1
  _QWORD *v7; // x20
  __int64 v8; // x8
  __int64 v9; // x0
  __int64 v10; // x0
  ServantStatusBattleListViewItem_c **v11; // x8
  ServantStatusBattleListViewItem_c *v12; // x1
  BattleDataDefine_c *v13; // x0
  System_String_o *ASSET_BATTLE_COMMON; // x20
  Il2CppObject *v15; // x20
  _BOOL8 v16; // x0
  __int64 v17; // x1
  int32_t v18; // w2
  int32_t v19; // w3
  ServantStatusBattleListViewItem_c *monitor; // x1
  Il2CppObject *data; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4A5E181 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_Empty_BattleCommonSettings_ShiftIconAdjustment___);
    sub_1B885B0(&Method_AssetManager_TryGetAssetObject_BattleCommonSettings___);
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&BattleDataDefine_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_3231/*"BattleCommonSettings"*/);
    byte_4A5E181 = 1;
  }
  data = 0LL;
  shiftIconAdjustmentArray = this->fields.shiftIconAdjustmentArray;
  p_shiftIconAdjustmentArray = (ServantStatusBattleListViewItem_o *)&this->fields.shiftIconAdjustmentArray;
  if ( !shiftIconAdjustmentArray )
  {
    v7 = Method_System_Array_Empty_BattleCommonSettings_ShiftIconAdjustment___;
    v8 = *((_QWORD *)Method_System_Array_Empty_BattleCommonSettings_ShiftIconAdjustment___ + 7);
    if ( !v8 )
    {
      sub_1BDA4E8(Method_System_Array_Empty_BattleCommonSettings_ShiftIconAdjustment___);
      v8 = v7[7];
    }
    v9 = *(_QWORD *)(v8 + 16);
    if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
      v9 = sub_1BDA48C(v9);
    if ( !*(_DWORD *)(v9 + 224) )
      j_il2cpp_runtime_class_init_0(v9);
    v10 = *(_QWORD *)(v7[7] + 16LL);
    if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
      v10 = sub_1BDA48C(v10);
    v11 = *(ServantStatusBattleListViewItem_c ***)(v10 + 184);
    v12 = *v11;
    p_shiftIconAdjustmentArray->klass = *v11;
    sub_1B88554(p_shiftIconAdjustmentArray, (int32_t)v12, v2, v3);
    v13 = BattleDataDefine_TypeInfo;
    if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
      v13 = BattleDataDefine_TypeInfo;
    }
    ASSET_BATTLE_COMMON = v13->static_fields->ASSET_BATTLE_COMMON;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    if ( AssetManager__TryGetAssetObject_object_(
           &data,
           ASSET_BATTLE_COMMON,
           (System_String_o *)StringLiteral_3231/*"BattleCommonSettings"*/,
           (const MethodInfo_2E6221C *)Method_AssetManager_TryGetAssetObject_BattleCommonSettings___) )
    {
      v15 = data;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v16 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v15, 0LL, 0LL);
      if ( !v16 )
      {
        if ( !data )
          sub_1B8880C(v16, v17);
        monitor = (ServantStatusBattleListViewItem_c *)data[1].monitor;
        if ( monitor )
        {
          p_shiftIconAdjustmentArray->klass = monitor;
          sub_1B88554(p_shiftIconAdjustmentArray, (int32_t)monitor, v18, v19);
        }
      }
    }
  }
}


bool __fastcall BattleServantHpShiftComponent__IsDecagramIndex(
        BattleServantHpShiftComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  return this->fields.decagramNumber - 1 == index;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleServantHpShiftComponent__IsIconActive(
        BattleServantHpShiftComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  int32_t decagramNumber; // w8
  struct UISprite_o *shiftIconDecagramSprite; // x0
  Il2CppObject *v8; // x19

  if ( (byte_4A5E190 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_IndexValue_GameObject____76090664);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E190 = 1;
  }
  decagramNumber = this->fields.decagramNumber;
  if ( decagramNumber <= index )
    return 0;
  if ( decagramNumber - 1 == index )
  {
    shiftIconDecagramSprite = this->fields.shiftIconDecagramSprite;
    if ( shiftIconDecagramSprite )
      return UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)shiftIconDecagramSprite, 0LL);
LABEL_13:
    sub_1B8880C(shiftIconDecagramSprite, *(_QWORD *)&index);
  }
  v8 = BasicHelper__IndexValue_object_(
         (System_Object_array *)this->fields.iconList,
         index,
         0LL,
         (const MethodInfo_2E6E754 *)Method_BasicHelper_IndexValue_GameObject____76090664);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  shiftIconDecagramSprite = (struct UISprite_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v8, 0LL, 0LL);
  if ( ((unsigned __int8)shiftIconDecagramSprite & 1) == 0 )
    return 0;
  if ( !v8 )
    goto LABEL_13;
  return UnityEngine_GameObject__get_activeInHierarchy((UnityEngine_GameObject_o *)v8, 0LL);
}


System_String_o *__fastcall BattleServantHpShiftComponent__MakeAssetNameByPrefixAndIconIndex(
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
  if ( (byte_4A5E187 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_FirstOrDefault_EnemyScriptParam_OverwriteShiftIcon___);
    sub_1B885B0(&System_Func_EnemyScriptParam_OverwriteShiftIcon__bool__TypeInfo);
    sub_1B885B0(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_1B885B0(&Method_System_Nullable_int__get_HasValue__);
    sub_1B885B0(&Method_BattleServantHpShiftComponent___c__DisplayClass21_0__MakeAssetNameByPrefixAndIconIndex_b__0__);
    sub_1B885B0(&BattleServantHpShiftComponent___c__DisplayClass21_0_TypeInfo);
    byte_4A5E187 = 1;
  }
  v9 = sub_1B887FC(BattleServantHpShiftComponent___c__DisplayClass21_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 || (*(_DWORD *)(v9 + 16) = v6, (svtData = this->fields.svtData) == 0LL) )
    sub_1B8880C(v10, v11);
  OverwriteShiftIconArray_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)svtData->fields._OverwriteShiftIconArray_k__BackingField;
  if ( !OverwriteShiftIconArray_k__BackingField )
  {
    if ( overwriteImageNo.fields.hasValue )
      v6 = HIDWORD(*(unsigned __int64 *)&overwriteImageNo);
    goto LABEL_15;
  }
  v15 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_EnemyScriptParam_OverwriteShiftIcon__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v15,
    (Il2CppObject *)v9,
    Method_BattleServantHpShiftComponent___c__DisplayClass21_0__MakeAssetNameByPrefixAndIconIndex_b__0__,
    0LL);
  v16 = System_Linq_Enumerable__FirstOrDefault_object__48907856(
          OverwriteShiftIconArray_k__BackingField,
          (System_Func_TSource__bool__o *)v15,
          (const MethodInfo_2EA4650 *)Method_System_Linq_Enumerable_FirstOrDefault_EnemyScriptParam_OverwriteShiftIcon___);
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


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BattleServantHpShiftComponent__MakeImageSuffixAddedStr(
        System_String_o *prefix,
        int32_t inputImageType,
        int32_t imageNo,
        const MethodInfo *method)
{
  __int64 v4; // x4
  Il2CppObject *v8; // x21
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  Il2CppObject *v12; // x0
  int32_t v14; // [xsp+8h] [xbp-38h] BYREF
  int32_t v15; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A5E188 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&StringLiteral_25100/*"{0}_{1}_{2}"*/);
    byte_4A5E188 = 1;
  }
  v15 = inputImageType;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15, *(_QWORD *)&imageNo, method, v4);
  v14 = imageNo;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14, v9, v10, v11);
  return System_String__Format_61721472((System_String_o *)StringLiteral_25100/*"{0}_{1}_{2}"*/, (Il2CppObject *)prefix, v8, v12, 0LL);
}


bool __fastcall BattleServantHpShiftComponent__PlayShiftEffectGeneral(
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
  const MethodInfo *v18; // x2
  __int64 methodPtr_low; // x10
  bool v20; // w1
  Il2CppObject *v21; // x22
  bool v22; // w20
  System_String_o *prefixAsset; // x23
  AssetData_o *AssetStorage; // x23
  const MethodInfo *v25; // x4
  UnityEngine_GameObject_o *v26; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *Object; // x21
  Il2CppObject *Component_object; // x19
  System_Action_o *v30; // x21
  System_Nullable_int__o v32; // 0:x3.8

  if ( (byte_4A5E194 & 1) == 0 )
  {
    sub_1B885B0(&Method_ActionExtensions_Call_int___);
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_AssetData_GetObject_GameObject____76085352);
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&Method_BasicHelper_IndexValue_GameObject____76090664);
    sub_1B885B0(&BattleServantSuperBossParamComponent_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_BattleServantHpShiftComponent___c__DisplayClass35_0__PlayShiftEffectGeneral_b__0__);
    sub_1B885B0(&BattleServantHpShiftComponent___c__DisplayClass35_0_TypeInfo);
    sub_1B885B0(&StringLiteral_19981/*"hp_iconeffect_before"*/);
    byte_4A5E194 = 1;
  }
  v13 = sub_1B887FC(BattleServantHpShiftComponent___c__DisplayClass35_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_35;
  *(_QWORD *)(v13 + 16) = callBack;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v13 + 16), (int32_t)callBack, v16, v17);
  *(_DWORD *)(v13 + 24) = index;
  *nextAnimationTime = 0.0;
  if ( this->fields.decagramNumber - 1 == index )
  {
    if ( !effectData )
      goto LABEL_35;
    if ( System_String__op_Equality(effectData->fields.prefixEffect, (System_String_o *)StringLiteral_19981/*"hp_iconeffect_before"*/, 0LL) )
    {
      v20 = servantParam
         && (methodPtr_low = LOBYTE(BattleServantSuperBossParamComponent_TypeInfo->vtable._0_Equals.methodPtr),
             LOBYTE(servantParam->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low)
         && servantParam->klass->_2.typeHierarchy[methodPtr_low - 1] == (Il2CppClass *)BattleServantSuperBossParamComponent_TypeInfo;
      *nextAnimationTime = BattleServantHpShiftComponent__CreateDecagramEffect(this, v20, v18);
      return 1;
    }
    index = *(_DWORD *)(v13 + 24);
  }
  v21 = BasicHelper__IndexValue_object_(
          (System_Object_array *)this->fields.iconList,
          index,
          0LL,
          (const MethodInfo_2E6E754 *)Method_BasicHelper_IndexValue_GameObject____76090664);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  AssetNameByPrefixAndIconIndex = (System_String_o *)UnityEngine_Object__op_Equality(
                                                       (UnityEngine_Object_o *)v21,
                                                       0LL,
                                                       0LL);
  if ( ((unsigned __int8)AssetNameByPrefixAndIconIndex & 1) == 0 )
  {
    if ( effectData )
    {
      prefixAsset = effectData->fields.prefixAsset;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetStorage = AssetManager__getAssetStorage(prefixAsset, 0LL);
      v32 = 0LL;
      AssetNameByPrefixAndIconIndex = BattleServantHpShiftComponent__MakeAssetNameByPrefixAndIconIndex(
                                        this,
                                        effectData->fields.prefixEffect,
                                        *(_DWORD *)(v13 + 24) + 2,
                                        v32,
                                        v25);
      if ( AssetStorage )
      {
        AssetNameByPrefixAndIconIndex = (System_String_o *)AssetData__GetObject_object__48635516(
                                                             AssetStorage,
                                                             AssetNameByPrefixAndIconIndex,
                                                             (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
        if ( v21 )
        {
          v26 = (UnityEngine_GameObject_o *)AssetNameByPrefixAndIconIndex;
          transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v21, 0LL);
          Object = (UnityEngine_Object_o *)BaseMonoBehaviour__createObject(
                                             (BaseMonoBehaviour_o *)this,
                                             v26,
                                             transform,
                                             0LL,
                                             0LL);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          AssetNameByPrefixAndIconIndex = (System_String_o *)UnityEngine_Object__op_Inequality(Object, 0LL, 0LL);
          Component_object = 0LL;
          if ( ((unsigned __int8)AssetNameByPrefixAndIconIndex & 1) != 0 )
          {
            if ( !Object )
              goto LABEL_35;
            Component_object = UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)Object,
                                 (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
          }
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
          {
            ActionExtensions__Call_int_(
              *(System_Action_T__o **)(v13 + 16),
              *(_DWORD *)(v13 + 24),
              (const MethodInfo_2DD57B8 *)Method_ActionExtensions_Call_int___);
            return 1;
          }
          v30 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
          System_Action___ctor(
            v30,
            (Il2CppObject *)v13,
            Method_BattleServantHpShiftComponent___c__DisplayClass35_0__PlayShiftEffectGeneral_b__0__,
            0LL);
          if ( Component_object )
          {
            v22 = 1;
            ((void (__fastcall *)(Il2CppObject *, __int64, System_Action_o *, Il2CppMethodPointer))Component_object->klass->vtable[8].method)(
              Component_object,
              1LL,
              v30,
              Component_object->klass->vtable[9].methodPtr);
            return v22;
          }
        }
      }
    }
LABEL_35:
    sub_1B8880C(AssetNameByPrefixAndIconIndex, v15);
  }
  return 0;
}


void __fastcall BattleServantHpShiftComponent__UpdateHideInvalidIcon(
        BattleServantHpShiftComponent_o *this,
        int32_t dispMaxPos,
        const MethodInfo *method)
{
  System_Object_array *iconList; // x0
  int max_length; // w8
  int v7; // w26
  Il2CppObject *v8; // x21
  Il2CppObject *Component_object; // x0
  __int64 v10; // x1

  if ( (byte_4A5E18D & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_IndexValue_GameObject____76090664);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5E18D = 1;
  }
  iconList = (System_Object_array *)this->fields.iconList;
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
             iconList,
             dispMaxPos + 1,
             0LL,
             (const MethodInfo_2E6E754 *)Method_BasicHelper_IndexValue_GameObject____76090664);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Component_object = (Il2CppObject *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v8, 0LL, 0LL);
      if ( ((unsigned __int8)Component_object & 1) != 0 )
      {
        if ( !v8
          || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                                   (UnityEngine_GameObject_o *)v8,
                                   (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___)) == 0LL )
        {
          sub_1B8880C(Component_object, v10);
        }
        UISprite__set_spriteName((UISprite_o *)Component_object, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v8, 0, 0LL);
      }
      if ( v7 == dispMaxPos )
        break;
      iconList = (System_Object_array *)this->fields.iconList;
      ++dispMaxPos;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantHpShiftComponent__UpdateIcon(
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

  if ( (byte_4A5E18E & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_IndexValue_GameObject____76090664);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E18E = 1;
  }
  decagramNumber = this->fields.decagramNumber;
  if ( decagramNumber > index )
  {
    if ( decagramNumber - 1 == index )
    {
      shiftIconDecagramSprite = (UnityEngine_Behaviour_o *)this->fields.shiftIconDecagramSprite;
      if ( shiftIconDecagramSprite )
      {
        UnityEngine_Behaviour__set_enabled(shiftIconDecagramSprite, isActive, 0LL);
        return;
      }
LABEL_17:
      sub_1B8880C(shiftIconDecagramSprite, *(_QWORD *)&index);
    }
    v11 = BasicHelper__IndexValue_object_(
            (System_Object_array *)this->fields.iconList,
            index,
            0LL,
            (const MethodInfo_2E6E754 *)Method_BasicHelper_IndexValue_GameObject____76090664);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    shiftIconDecagramSprite = (UnityEngine_Behaviour_o *)UnityEngine_Object__op_Inequality(
                                                           (UnityEngine_Object_o *)v11,
                                                           0LL,
                                                           0LL);
    if ( ((unsigned __int8)shiftIconDecagramSprite & 1) != 0 )
    {
      if ( !v11 )
        goto LABEL_17;
      v12 = isEmpty ? 0 : index + 2;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)v11,
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      shiftIconDecagramSprite = (UnityEngine_Behaviour_o *)BattleServantHpShiftComponent__getSpriteName(this, v12, v14);
      if ( !Component_object )
        goto LABEL_17;
      UISprite__set_spriteName((UISprite_o *)Component_object, (System_String_o *)shiftIconDecagramSprite, 0LL);
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v11, isActive, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantHpShiftComponent__UpdateIconActive(
        BattleServantHpShiftComponent_o *this,
        int32_t index,
        bool isActive,
        const MethodInfo *method)
{
  int32_t decagramNumber; // w8
  struct UISprite_o *shiftIconDecagramSprite; // x0
  Il2CppObject *v9; // x20

  if ( (byte_4A5E18F & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_IndexValue_GameObject____76090664);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E18F = 1;
  }
  decagramNumber = this->fields.decagramNumber;
  if ( decagramNumber > index )
  {
    if ( decagramNumber - 1 == index )
    {
      shiftIconDecagramSprite = this->fields.shiftIconDecagramSprite;
      if ( shiftIconDecagramSprite )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)shiftIconDecagramSprite, isActive, 0LL);
        return;
      }
LABEL_13:
      sub_1B8880C(shiftIconDecagramSprite, *(_QWORD *)&index);
    }
    v9 = BasicHelper__IndexValue_object_(
           (System_Object_array *)this->fields.iconList,
           index,
           0LL,
           (const MethodInfo_2E6E754 *)Method_BasicHelper_IndexValue_GameObject____76090664);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    shiftIconDecagramSprite = (struct UISprite_o *)UnityEngine_Object__op_Inequality(
                                                     (UnityEngine_Object_o *)v9,
                                                     0LL,
                                                     0LL);
    if ( ((unsigned __int8)shiftIconDecagramSprite & 1) != 0 )
    {
      if ( !v9 )
        goto LABEL_13;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v9, isActive, 0LL);
    }
  }
}


void __fastcall BattleServantHpShiftComponent__createIconList(
        BattleServantHpShiftComponent_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  BattleServantHpShiftComponent_o *v4; // x19
  int32_t v5; // w2
  int32_t v6; // w3
  struct UnityEngine_GameObject_array *iconList; // x8
  struct UnityEngine_GameObject_array **p_iconList; // x20
  int v9; // w21
  int decagramNumber; // w10
  __int64 v11; // x9
  unsigned int v12; // w22
  _BOOL4 v13; // w23
  unsigned __int64 v14; // x25
  UnityEngine_Object_o *v15; // x24
  int v16; // w8
  BattleDataDefine_c *v17; // x0
  System_String_o *ASSET_BATTLE_COMMON; // x23
  UISprite_o *shiftIconDecagramSprite; // x23
  const MethodInfo *v20; // x2
  __int64 v21; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  UIAtlas_o *atlas; // [xsp+8h] [xbp-48h] BYREF

  v4 = this;
  if ( (byte_4A5E18A & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&BattleDataDefine_TypeInfo);
    sub_1B885B0(&UnityEngine_GameObject___TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    this = (BattleServantHpShiftComponent_o *)sub_1B885B0(&StringLiteral_3227/*"BattleAssetUIAtlas"*/);
    byte_4A5E18A = 1;
  }
  atlas = 0LL;
  if ( !svtData )
    goto LABEL_38;
  this = (BattleServantHpShiftComponent_o *)BattleServantData__GetMaxShiftIconCount(svtData, 0LL);
  p_iconList = &v4->fields.iconList;
  iconList = v4->fields.iconList;
  v9 = (int)this;
  if ( iconList )
  {
    if ( (_DWORD)this == iconList->max_length )
      return;
    decagramNumber = v4->fields.decagramNumber;
    v11 = *(_QWORD *)&iconList->max_length;
    if ( (int)this < decagramNumber )
      v12 = (unsigned int)this;
    else
      v12 = decagramNumber - 1;
    v13 = (int)this >= decagramNumber;
    if ( v12 != (_DWORD)v11 )
    {
      if ( (int)v11 >= 1 )
      {
        v14 = 0LL;
        while ( 1 )
        {
          if ( v14 >= (unsigned int)v11 )
            sub_1B88814(this, svtData);
          v15 = (UnityEngine_Object_o *)iconList->m_Items[v14];
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          UnityEngine_Object__Destroy_69459380(v15, 0LL);
          iconList = *p_iconList;
          if ( !*p_iconList )
            break;
          LODWORD(v11) = iconList->max_length;
          if ( (__int64)++v14 >= (int)v11 )
            goto LABEL_17;
        }
LABEL_38:
        sub_1B8880C(this, svtData);
      }
LABEL_17:
      *p_iconList = 0LL;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.iconList, 0, v5, v6);
    }
  }
  else
  {
    v16 = v4->fields.decagramNumber;
    v13 = (int)this >= v16;
    if ( (int)this < v16 )
      v12 = (unsigned int)this;
    else
      v12 = v16 - 1;
  }
  this = (BattleServantHpShiftComponent_o *)v4->fields.shiftIconDecagramSprite;
  if ( !this )
    goto LABEL_38;
  this = (BattleServantHpShiftComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_38;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v13, 0LL);
  if ( v13 )
  {
    v17 = BattleDataDefine_TypeInfo;
    if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
      v17 = BattleDataDefine_TypeInfo;
    }
    ASSET_BATTLE_COMMON = v17->static_fields->ASSET_BATTLE_COMMON;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    if ( AssetManager__TryGetUIAtlas(&atlas, ASSET_BATTLE_COMMON, (System_String_o *)StringLiteral_3227/*"BattleAssetUIAtlas"*/, 0LL) )
    {
      this = (BattleServantHpShiftComponent_o *)v4->fields.shiftIconDecagramSprite;
      if ( !this )
        goto LABEL_38;
      UISprite__set_atlas((UISprite_o *)this, atlas, 0LL);
      shiftIconDecagramSprite = v4->fields.shiftIconDecagramSprite;
      this = (BattleServantHpShiftComponent_o *)BattleServantHpShiftComponent__getSpriteName(
                                                  v4,
                                                  v4->fields.decagramNumber + 1,
                                                  v20);
      if ( !shiftIconDecagramSprite )
        goto LABEL_38;
      UISprite__set_spriteName(shiftIconDecagramSprite, (System_String_o *)this, 0LL);
      this = (BattleServantHpShiftComponent_o *)v4->fields.shiftIconDecagramSprite;
      if ( !this )
        goto LABEL_38;
      ((void (__fastcall *)(BattleServantHpShiftComponent_o *, void *))this->klass[2]._1.typeMetadataHandle)(
        this,
        this->klass[2]._1.interopData);
    }
  }
  if ( v9 >= 1 )
  {
    if ( !*p_iconList )
    {
      v21 = sub_1B88658(UnityEngine_GameObject___TypeInfo, v12);
      *p_iconList = (struct UnityEngine_GameObject_array *)v21;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.iconList, v21, v22, v23);
    }
    BattleServantHpShiftComponent__AlignShiftIcons(v4, (const MethodInfo *)svtData);
  }
}


System_String_o *__fastcall BattleServantHpShiftComponent__getSpriteName(
        BattleServantHpShiftComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  System_Nullable_int__o v7; // 0:x3.8

  if ( (byte_4A5E182 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_19978/*"hp_icon"*/);
    byte_4A5E182 = 1;
  }
  v7 = 0LL;
  return BattleServantHpShiftComponent__MakeAssetNameByPrefixAndIconIndex(
           this,
           (System_String_o *)StringLiteral_19978/*"hp_icon"*/,
           index,
           v7,
           v3);
}


void __fastcall BattleServantHpShiftComponent__playShiftEffect(
        BattleServantHpShiftComponent_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  BattleServantHpShiftComponent_o *v4; // x19
  struct System_Int32_array *shiftDeckList; // x9
  struct UnityEngine_GameObject_array *iconList; // x8
  il2cpp_array_size_t max_length; // w11
  il2cpp_array_size_t v8; // w9
  il2cpp_array_size_t v9; // w22
  UnityEngine_Object_o *v10; // x20
  BattleDataDefine_c *v11; // x0
  System_String_o *ASSET_BATTLE_COMMON; // x20
  AssetData_o *AssetStorage; // x21
  const MethodInfo *v14; // x2
  Il2CppObject *Object_object__48635516; // x21
  struct UnityEngine_GameObject_array *v16; // x8
  UnityEngine_Transform_o *transform; // x0
  struct UnityEngine_GameObject_array *v18; // x8
  Il2CppObject *Component_object; // x21
  const MethodInfo *v20; // x2

  v4 = this;
  if ( (byte_4A5E193 & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetData_GetObject_GameObject____76085352);
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&BattleDataDefine_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    this = (BattleServantHpShiftComponent_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E193 = 1;
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
  if ( !UnityEngine_Object__op_Equality(v10, 0LL, 0LL) )
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
    AssetStorage = AssetManager__getAssetStorage(ASSET_BATTLE_COMMON, 0LL);
    this = (BattleServantHpShiftComponent_o *)BattleServantHpShiftComponent__GetBreakShiftIconEffectName(
                                                v4,
                                                v9 + 2,
                                                v14);
    if ( !AssetStorage )
      goto LABEL_29;
    Object_object__48635516 = AssetData__GetObject_object__48635516(
                                AssetStorage,
                                (System_String_o *)this,
                                (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattleServantHpShiftComponent_o *)UnityEngine_Object__op_Inequality(
                                                (UnityEngine_Object_o *)Object_object__48635516,
                                                0LL,
                                                0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v16 = v4->fields.iconList;
      if ( !v16 )
        goto LABEL_29;
      if ( v9 >= v16->max_length )
        goto LABEL_30;
      this = (BattleServantHpShiftComponent_o *)v16->m_Items[v9];
      if ( !this )
        goto LABEL_29;
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
      this = (BattleServantHpShiftComponent_o *)BaseMonoBehaviour__createObject(
                                                  (BaseMonoBehaviour_o *)v4,
                                                  (UnityEngine_GameObject_o *)Object_object__48635516,
                                                  transform,
                                                  0LL,
                                                  0LL);
    }
    v18 = v4->fields.iconList;
    if ( !v18 )
      goto LABEL_29;
    if ( v9 < v18->max_length )
    {
      this = (BattleServantHpShiftComponent_o *)v18->m_Items[v9];
      if ( this )
      {
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)this,
                             (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        this = (BattleServantHpShiftComponent_o *)BattleServantHpShiftComponent__GetEmptyIconSpriteName(v4, v9 + 2, v20);
        if ( Component_object )
        {
          UISprite__set_spriteName((UISprite_o *)Component_object, (System_String_o *)this, 0LL);
          return;
        }
      }
LABEL_29:
      sub_1B8880C(this, svtData);
    }
LABEL_30:
    sub_1B88814(this, svtData);
  }
}


float __fastcall BattleServantHpShiftComponent__playShiftEffectBefore(
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
  Il2CppObject *Object_object__48635516; // x20
  struct UnityEngine_GameObject_array *v18; // x8
  UnityEngine_Transform_o *transform; // x0

  v4 = this;
  if ( (byte_4A5E192 & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetData_GetObject_GameObject____76085352);
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&BattleDataDefine_TypeInfo);
    this = (BattleServantHpShiftComponent_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E192 = 1;
  }
  if ( !svtData )
    goto LABEL_26;
  shiftDeckList = svtData->fields.shiftDeckList;
  if ( !shiftDeckList )
    goto LABEL_26;
  v6 = shiftDeckList->max_length - svtData->fields.shiftDeckIndex;
  if ( v4->fields.decagramNumber - 1 == v6 )
  {
    IsSuperBossUi = BattleServantData__get_IsSuperBossUi(svtData, 0LL);
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
        if ( UnityEngine_Object__op_Equality(v12, 0LL, 0LL) )
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
        AssetStorage = AssetManager__getAssetStorage(ASSET_BATTLE_COMMON, 0LL);
        this = (BattleServantHpShiftComponent_o *)BattleServantHpShiftComponent__GetShiftBeforeEffectName(
                                                    v4,
                                                    v6 + 2,
                                                    v16);
        if ( !AssetStorage )
          goto LABEL_26;
        Object_object__48635516 = AssetData__GetObject_object__48635516(
                                    AssetStorage,
                                    (System_String_o *)this,
                                    (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (BattleServantHpShiftComponent_o *)UnityEngine_Object__op_Inequality(
                                                    (UnityEngine_Object_o *)Object_object__48635516,
                                                    0LL,
                                                    0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
          return 0.0;
        v18 = v4->fields.iconList;
        if ( !v18 )
          goto LABEL_26;
        if ( v6 < v18->max_length )
        {
          this = (BattleServantHpShiftComponent_o *)v18->m_Items[v6];
          if ( this )
          {
            transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
            BaseMonoBehaviour__createObject(
              (BaseMonoBehaviour_o *)v4,
              (UnityEngine_GameObject_o *)Object_object__48635516,
              transform,
              0LL,
              0LL);
            return 0.0;
          }
LABEL_26:
          sub_1B8880C(this, svtData);
        }
      }
      sub_1B88814(this, svtData);
    }
  }
  return 0.0;
}


int32_t __fastcall BattleServantHpShiftComponent__setInitValue(
        BattleServantHpShiftComponent_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  int32_t v3; // w3
  const MethodInfo *v6; // x1
  __int64 v7; // x1
  UnityEngine_GameObject_o *shiftIconClone; // x0
  Il2CppObject *Component_object; // x0
  BattleDataDefine_c *v10; // x8
  UISprite_o *v11; // x21
  System_String_o *ASSET_BATTLE_COMMON; // x22
  const MethodInfo *v13; // x2
  System_String_o *SpriteName; // x0
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x2
  int32_t MaxShiftIconPos; // w0
  const MethodInfo *v18; // x2
  UIAtlas_o *atlas; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5E180 & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&BattleDataDefine_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1B885B0(&StringLiteral_3227/*"BattleAssetUIAtlas"*/);
    byte_4A5E180 = 1;
  }
  atlas = 0LL;
  this->fields.svtData = svtData;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.svtData, (int32_t)svtData, (int32_t)method, v3);
  BattleServantHpShiftComponent__ImportFromBattleCommonSettings(this, v6);
  shiftIconClone = this->fields.shiftIconClone;
  if ( !shiftIconClone )
    goto LABEL_16;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       shiftIconClone,
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  v10 = BattleDataDefine_TypeInfo;
  v11 = (UISprite_o *)Component_object;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v10 = BattleDataDefine_TypeInfo;
  }
  ASSET_BATTLE_COMMON = v10->static_fields->ASSET_BATTLE_COMMON;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  shiftIconClone = (UnityEngine_GameObject_o *)AssetManager__TryGetUIAtlas(
                                                 &atlas,
                                                 ASSET_BATTLE_COMMON,
                                                 (System_String_o *)StringLiteral_3227/*"BattleAssetUIAtlas"*/,
                                                 0LL);
  if ( ((unsigned __int8)shiftIconClone & 1) != 0 )
  {
    if ( !v11 )
      goto LABEL_16;
    UISprite__set_atlas(v11, atlas, 0LL);
    SpriteName = BattleServantHpShiftComponent__getSpriteName(this, 0, v13);
    UISprite__set_spriteName(v11, SpriteName, 0LL);
    this->fields.defaultDepth = v11->fields.mDepth;
  }
  shiftIconClone = this->fields.shiftIconClone;
  if ( !shiftIconClone
    || (UnityEngine_GameObject__SetActive(shiftIconClone, 0, 0LL),
        BattleServantHpShiftComponent__createIconList(this, svtData, v15),
        BattleServantHpShiftComponent__setValue(this, svtData, v16),
        !svtData) )
  {
LABEL_16:
    sub_1B8880C(shiftIconClone, v7);
  }
  if ( svtData->fields.lowLimitShift >= 1 )
  {
    MaxShiftIconPos = BattleServantData__GetMaxShiftIconPos(svtData, 0LL);
    BattleServantHpShiftComponent__UpdateHideInvalidIcon(this, MaxShiftIconPos, v18);
  }
  return 0;
}


void __fastcall BattleServantHpShiftComponent__setValue(
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
  if ( (byte_4A5E18C & 1) == 0 )
  {
    this = (BattleServantHpShiftComponent_o *)sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    byte_4A5E18C = 1;
  }
  if ( v4->fields.iconList )
  {
    if ( !svtData
      || (this = (BattleServantHpShiftComponent_o *)BattleServantData__GetCurrentShiftPos(svtData, 0LL),
          !v4->fields.shiftIconDecagramSprite)
      || (decagramNumber = v4->fields.decagramNumber,
          v6 = (int)this,
          UnityEngine_Behaviour__set_enabled(
            (UnityEngine_Behaviour_o *)v4->fields.shiftIconDecagramSprite,
            (int)this >= decagramNumber,
            0LL),
          (iconList = v4->fields.iconList) == 0LL) )
    {
LABEL_19:
      sub_1B8880C(this, svtData);
    }
    v8 = v6 < decagramNumber;
    v9 = 4LL;
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
                             (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
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
        UISprite__set_spriteName((UISprite_o *)Component_object, (System_String_o *)this, 0LL);
        v15 = v4->fields.iconList;
        if ( v15 )
        {
          if ( v11 >= v15->max_length )
LABEL_21:
            sub_1B88814(this, svtData);
          this = (BattleServantHpShiftComponent_o *)*((_QWORD *)&v15->obj.klass + v9);
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v8, 0LL);
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


void __fastcall BattleServantHpShiftComponent_EffectData___ctor(
        BattleServantHpShiftComponent_EffectData_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  BattleDataDefine_c *v5; // x0
  struct System_String_o *ASSET_BATTLE_COMMON; // x1

  if ( (byte_4A5E195 & 1) == 0 )
  {
    sub_1B885B0(&BattleDataDefine_TypeInfo);
    byte_4A5E195 = 1;
  }
  v5 = BattleDataDefine_TypeInfo;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v5 = BattleDataDefine_TypeInfo;
  }
  ASSET_BATTLE_COMMON = v5->static_fields->ASSET_BATTLE_COMMON;
  this->fields.prefixAsset = ASSET_BATTLE_COMMON;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)ASSET_BATTLE_COMMON, v2, v3);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleServantHpShiftComponent___c__DisplayClass21_0___ctor(
        BattleServantHpShiftComponent___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleServantHpShiftComponent___c__DisplayClass21_0___MakeAssetNameByPrefixAndIconIndex_b__0(
        BattleServantHpShiftComponent___c__DisplayClass21_0_o *this,
        EnemyScriptParam_OverwriteShiftIcon_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return x->fields.index == this->fields.index - 1;
}


void __fastcall BattleServantHpShiftComponent___c__DisplayClass23_0___ctor(
        BattleServantHpShiftComponent___c__DisplayClass23_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleServantHpShiftComponent___c__DisplayClass23_0___GetShiftIconAdjustment_b__0(
        BattleServantHpShiftComponent___c__DisplayClass23_0_o *this,
        BattleCommonSettings_ShiftIconAdjustment_o *x,
        const MethodInfo *method)
{
  System_String_o *SpriteName; // x0

  if ( !x )
    sub_1B8880C(this, 0LL);
  SpriteName = BattleCommonSettings_ShiftIconAdjustment__get_SpriteName(x, 0LL);
  return System_String__op_Equality(SpriteName, this->fields.spriteName, 0LL);
}


void __fastcall BattleServantHpShiftComponent___c__DisplayClass35_0___ctor(
        BattleServantHpShiftComponent___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleServantHpShiftComponent___c__DisplayClass35_0___PlayShiftEffectGeneral_b__0(
        BattleServantHpShiftComponent___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5E196 & 1) == 0 )
  {
    sub_1B885B0(&Method_ActionExtensions_Call_int___);
    byte_4A5E196 = 1;
  }
  ActionExtensions__Call_int_(
    (System_Action_T__o *)this->fields.callBack,
    this->fields.index,
    (const MethodInfo_2DD57B8 *)Method_ActionExtensions_Call_int___);
}