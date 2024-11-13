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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  int64_t svtData; // x0
  struct UnityEngine_GameObject_array *iconList; // x8
  int32_t decagramNumber; // w25
  int32_t v9; // w20
  float v10; // s8
  __int64 v11; // x26
  __int64 v12; // x27
  int max_length; // w9
  unsigned int v14; // w28
  UnityEngine_Object_o *v15; // x21
  struct UnityEngine_GameObject_array *v16; // x22
  UnityEngine_GameObject_o *shiftIconClone; // x21
  UnityEngine_Transform_o *transform; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  struct UnityEngine_GameObject_array *v25; // x8
  UISprite_o *Component_object; // x21
  const MethodInfo *v27; // x2
  const MethodInfo *v28; // x2
  int64_t v29; // x22
  float v30; // s9
  struct UnityEngine_GameObject_array *v31; // x8
  float v32; // s10
  float v33; // s8
  struct UnityEngine_GameObject_array *v34; // x8
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B192AF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UISprite___, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B192AF = 1;
  }
  svtData = (int64_t)this->fields.svtData;
  if ( !svtData
    || (svtData = BattleServantData__GetCurrentShiftPos((BattleServantData_o *)svtData, 0LL),
        (iconList = this->fields.iconList) == 0LL) )
  {
LABEL_33:
    sub_1BCAA3C(svtData, method);
  }
  decagramNumber = this->fields.decagramNumber;
  v9 = svtData;
  v10 = 0.0;
  v11 = 4LL;
  v12 = 32LL;
  while ( 1 )
  {
    max_length = iconList->max_length;
    v14 = v11 - 4;
    if ( (int)v11 - 4 >= max_length )
      break;
    if ( v14 >= max_length )
      goto LABEL_35;
    v15 = (UnityEngine_Object_o *)*((_QWORD *)&iconList->obj.klass + v11);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    svtData = UnityEngine_Object__op_Equality(v15, 0LL, 0LL);
    if ( (svtData & 1) != 0 )
    {
      v16 = this->fields.iconList;
      shiftIconClone = this->fields.shiftIconClone;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      svtData = (int64_t)BaseMonoBehaviour__createObject(
                           (BaseMonoBehaviour_o *)this,
                           shiftIconClone,
                           transform,
                           0LL,
                           0LL);
      if ( !v16 )
        goto LABEL_33;
      if ( v14 >= v16->max_length )
        goto LABEL_35;
      *((_QWORD *)&v16->obj.klass + v11) = svtData;
      sub_1BCA784((PartyOrganizationUtility_o *)((char *)v16 + v12), svtData, v19, v20, v21, v22, v23, v24);
    }
    v25 = this->fields.iconList;
    if ( !v25 )
      goto LABEL_33;
    if ( v14 >= v25->max_length )
LABEL_35:
      sub_1BCAA44(svtData, method);
    svtData = *((_QWORD *)&v25->obj.klass + v11);
    if ( svtData )
    {
      Component_object = (UISprite_o *)UnityEngine_GameObject__GetComponent_object_(
                                         (UnityEngine_GameObject_o *)svtData,
                                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      svtData = (int64_t)BattleServantHpShiftComponent__getSpriteName(this, (int)v11 - 2, v27);
      if ( Component_object )
      {
        UISprite__set_spriteName(Component_object, (System_String_o *)svtData, 0LL);
        UIWidget__set_depth((UIWidget_o *)Component_object, v11 + this->fields.defaultDepth - 4, 0LL);
        svtData = (int64_t)BattleServantHpShiftComponent__GetShiftIconAdjustment(
                             this,
                             Component_object->fields.mSpriteName,
                             v28);
        if ( svtData )
        {
          v29 = svtData;
          UIWidget__set_width((UIWidget_o *)Component_object, *(_DWORD *)(svtData + 24), 0LL);
          UIWidget__set_height((UIWidget_o *)Component_object, *(_DWORD *)(v29 + 28), 0LL);
          svtData = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0LL);
          if ( !svtData )
            goto LABEL_33;
          UnityEngine_Transform__set_localPosition(
            (UnityEngine_Transform_o *)svtData,
            *(UnityEngine_Vector3_o *)(v29 + 32),
            0LL);
          v30 = (float)*(int *)(v29 + 44);
        }
        else
        {
          v30 = 0.0;
        }
        v31 = this->fields.iconList;
        v32 = (_DWORD)v11 == 4 ? -v30 : v30;
        if ( v31 )
        {
          if ( v14 >= v31->max_length )
            goto LABEL_35;
          svtData = *((_QWORD *)&v31->obj.klass + v11);
          if ( svtData )
          {
            svtData = (int64_t)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)svtData, 0LL);
            if ( svtData )
            {
              v33 = v10 + v32;
              v35.fields.z = 0.0;
              v35.fields.y = this->fields.addPos.fields.y * (float)(int)v14;
              v35.fields.x = v33;
              UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)svtData, v35, 0LL);
              v34 = this->fields.iconList;
              if ( v34 )
              {
                if ( v14 >= v34->max_length )
                  goto LABEL_35;
                svtData = *((_QWORD *)&v34->obj.klass + v11);
                if ( svtData )
                {
                  v10 = v33 + (float)(v30 + this->fields.addPos.fields.x);
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtData, v9 < decagramNumber, 0LL);
                  iconList = this->fields.iconList;
                  ++v11;
                  v12 += 8LL;
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


// local variable allocation has failed, the output may be wrong!
float __fastcall BattleServantHpShiftComponent__CreateDecagramEffect(
        BattleServantHpShiftComponent_o *this,
        bool isSuperBoss,
        const MethodInfo *method)
{
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
  BattleDataDefine_c *v17; // x0
  System_String_o *ASSET_BATTLE_COMMON; // x21
  AssetData_o *AssetStorage; // x0
  __int64 v20; // x1
  __int64 v21; // x1
  Il2CppObject *Object_object__49237568; // x21
  float v23; // s8
  UnityEngine_Transform_o *parent; // x0
  __int64 v25; // x1
  UnityEngine_Object_o *Object; // x21
  __int64 v27; // x1
  Il2CppObject *Component_object; // x21
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7

  if ( (byte_4B192B5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, isSuperBoss, method);
    sub_1BCA7E0(&AssetManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&BattleDataDefine_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BattleServantHpShiftDecagramEffectComponent___, v9, v10);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    sub_1BCA7E0(&StringLiteral_20181/*"hp_crystaleffect_superboss_1_1"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_20180/*"hp_crystaleffect_1_1"*/, v15, v16);
    byte_4B192B5 = 1;
  }
  v17 = BattleDataDefine_TypeInfo;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo, isSuperBoss);
    v17 = BattleDataDefine_TypeInfo;
  }
  ASSET_BATTLE_COMMON = v17->static_fields->ASSET_BATTLE_COMMON;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, isSuperBoss);
  AssetStorage = AssetManager__getAssetStorage(ASSET_BATTLE_COMMON, 0LL);
  if ( !AssetStorage )
    goto LABEL_24;
  Object_object__49237568 = AssetData__GetObject_object__49237568(
                              AssetStorage,
                              (System_String_o *)StringLiteral_20180/*"hp_crystaleffect_1_1"*/,
                              (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
  v23 = 0.0;
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__49237568, 0LL, 0LL) )
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
                                       (UnityEngine_GameObject_o *)Object_object__49237568,
                                       parent,
                                       0LL,
                                       0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25);
    AssetStorage = (AssetData_o *)UnityEngine_Object__op_Inequality(Object, 0LL, 0LL);
    if ( ((unsigned __int8)AssetStorage & 1) != 0 )
    {
      if ( !Object )
        goto LABEL_24;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)Object,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BattleServantHpShiftDecagramEffectComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27);
      AssetStorage = (AssetData_o *)UnityEngine_Object__op_Inequality(
                                      (UnityEngine_Object_o *)Component_object,
                                      0LL,
                                      0LL);
      if ( ((unsigned __int8)AssetStorage & 1) != 0 )
      {
        if ( Component_object )
        {
          Component_object[13].klass = (Il2CppClass *)this;
          sub_1BCA784((PartyOrganizationUtility_o *)&Component_object[13], (int64_t)this, v29, v30, v31, v32, v33, v34);
          v23 = *((float *)&Component_object[12].monitor + 1);
          if ( isSuperBoss )
            CommonEffectComponent__Init_41381496(
              (CommonEffectComponent_o *)Component_object,
              (System_String_o *)StringLiteral_20181/*"hp_crystaleffect_superboss_1_1"*/,
              0,
              0,
              0LL);
          return v23;
        }
LABEL_24:
        sub_1BCAA3C(AssetStorage, v20);
      }
    }
  }
  return v23;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BattleServantHpShiftComponent__GetBreakShiftIconEffectName(
        BattleServantHpShiftComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  System_Nullable_int__o v7; // 0:x3.8

  if ( (byte_4B192A9 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_20188/*"hp_iconeffect"*/, *(_QWORD *)&index, method);
    byte_4B192A9 = 1;
  }
  v7 = 0LL;
  return BattleServantHpShiftComponent__MakeAssetNameByPrefixAndIconIndex(
           this,
           (System_String_o *)StringLiteral_20188/*"hp_iconeffect"*/,
           index,
           v7,
           v3);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BattleServantHpShiftComponent__GetEmptyIconSpriteName(
        BattleServantHpShiftComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  const MethodInfo *v7; // x4
  System_Nullable_int__o overwriteImageNo; // [xsp+8h] [xbp-38h] BYREF
  System_Nullable_int__o p_overwriteImageNo; // 0:x0.8
  System_Nullable_int__o v11; // 0:x3.8

  if ( (byte_4B192A8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Nullable_int___ctor__, *(_QWORD *)&index, method);
    sub_1BCA7E0(&StringLiteral_20186/*"hp_icon"*/, v5, v6);
    byte_4B192A8 = 1;
  }
  p_overwriteImageNo = (System_Nullable_int__o)&overwriteImageNo;
  overwriteImageNo = 0LL;
  System_Nullable_int____ctor(p_overwriteImageNo, 0, (const MethodInfo_36BEAA0 *)Method_System_Nullable_int___ctor__);
  v11 = overwriteImageNo;
  return BattleServantHpShiftComponent__MakeAssetNameByPrefixAndIconIndex(
           this,
           (System_String_o *)StringLiteral_20186/*"hp_icon"*/,
           index,
           v11,
           v7);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BattleServantHpShiftComponent__GetShiftBeforeEffectName(
        BattleServantHpShiftComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  System_Nullable_int__o v7; // 0:x3.8

  if ( (byte_4B192AA & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_20189/*"hp_iconeffect_before"*/, *(_QWORD *)&index, method);
    byte_4B192AA = 1;
  }
  v7 = 0LL;
  return BattleServantHpShiftComponent__MakeAssetNameByPrefixAndIconIndex(
           this,
           (System_String_o *)StringLiteral_20189/*"hp_iconeffect_before"*/,
           index,
           v7,
           v3);
}


BattleCommonSettings_ShiftIconAdjustment_o *__fastcall BattleServantHpShiftComponent__GetShiftIconAdjustment(
        BattleServantHpShiftComponent_o *this,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  System_Collections_Generic_IEnumerable_TSource__o *shiftIconAdjustmentArray; // x19
  System_Func_object__bool__o *v25; // x20

  if ( (byte_4B192AD & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_FirstOrDefault_BattleCommonSettings_ShiftIconAdjustment___,
      spriteName,
      method);
    sub_1BCA7E0(&System_Func_BattleCommonSettings_ShiftIconAdjustment__bool__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_BattleServantHpShiftComponent___c__DisplayClass23_0__GetShiftIconAdjustment_b__0__, v8, v9);
    sub_1BCA7E0(&BattleServantHpShiftComponent___c__DisplayClass23_0_TypeInfo, v10, v11);
    byte_4B192AD = 1;
  }
  v12 = sub_1BCAA2C(BattleServantHpShiftComponent___c__DisplayClass23_0_TypeInfo, spriteName, method, v3);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    sub_1BCAA3C(v13, v14);
  *(_QWORD *)(v12 + 16) = spriteName;
  sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 16), (int64_t)spriteName, v15, v16, v17, v18, v19, v20);
  shiftIconAdjustmentArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.shiftIconAdjustmentArray;
  if ( !shiftIconAdjustmentArray )
    return 0LL;
  v25 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                         System_Func_BattleCommonSettings_ShiftIconAdjustment__bool__TypeInfo,
                                         v21,
                                         v22,
                                         v23);
  System_Func_object__bool____ctor(
    v25,
    (Il2CppObject *)v12,
    Method_BattleServantHpShiftComponent___c__DisplayClass23_0__GetShiftIconAdjustment_b__0__,
    0LL);
  return (BattleCommonSettings_ShiftIconAdjustment_o *)System_Linq_Enumerable__FirstOrDefault_object__49503160(
                                                         shiftIconAdjustmentArray,
                                                         (System_Func_TSource__bool__o *)v25,
                                                         (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_BattleCommonSettings_ShiftIconAdjustment___);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BattleServantHpShiftComponent__GetShiftIconName(
        int32_t inputImageType,
        int32_t imageNo,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4B192A7 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_20186/*"hp_icon"*/, *(_QWORD *)&imageNo, method);
    byte_4B192A7 = 1;
  }
  return BattleServantHpShiftComponent__MakeImageSuffixAddedStr(
           (System_String_o *)StringLiteral_20186/*"hp_icon"*/,
           inputImageType,
           imageNo,
           v3);
}


void __fastcall BattleServantHpShiftComponent__ImportFromBattleCommonSettings(
        BattleServantHpShiftComponent_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  long double inited; // q0
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
  PartyOrganizationUtility_o *p_shiftIconAdjustmentArray; // x19
  struct BattleCommonSettings_ShiftIconAdjustment_array *shiftIconAdjustmentArray; // t1
  _QWORD *v22; // x20
  __int64 v23; // x8
  __int64 v24; // x0
  __int64 v25; // x0
  int64_t *v26; // x8
  int64_t v27; // x1
  __int64 v28; // x1
  BattleDataDefine_c *v29; // x0
  System_String_o *ASSET_BATTLE_COMMON; // x20
  __int64 v31; // x1
  Il2CppObject *v32; // x20
  _BOOL8 v33; // x0
  __int64 v34; // x1
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  PartyOrganizationUtility_c *monitor; // x1
  Il2CppObject *data; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4B192A5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Empty_BattleCommonSettings_ShiftIconAdjustment___, method, v2);
    sub_1BCA7E0(&Method_AssetManager_TryGetAssetObject_BattleCommonSettings___, v10, v11);
    sub_1BCA7E0(&AssetManager_TypeInfo, v12, v13);
    sub_1BCA7E0(&BattleDataDefine_TypeInfo, v14, v15);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v16, v17);
    sub_1BCA7E0(&StringLiteral_3255/*"BattleCommonSettings"*/, v18, v19);
    byte_4B192A5 = 1;
  }
  data = 0LL;
  shiftIconAdjustmentArray = this->fields.shiftIconAdjustmentArray;
  p_shiftIconAdjustmentArray = (PartyOrganizationUtility_o *)&this->fields.shiftIconAdjustmentArray;
  if ( !shiftIconAdjustmentArray )
  {
    v22 = Method_System_Array_Empty_BattleCommonSettings_ShiftIconAdjustment___;
    v23 = *((_QWORD *)Method_System_Array_Empty_BattleCommonSettings_ShiftIconAdjustment___ + 7);
    if ( !v23 )
    {
      sub_1C1C718(Method_System_Array_Empty_BattleCommonSettings_ShiftIconAdjustment___, method);
      v23 = v22[7];
    }
    v24 = *(_QWORD *)(v23 + 16);
    if ( (*(_BYTE *)(v24 + 309) & 1) == 0 )
      v24 = sub_1C1C6BC(inited);
    if ( !*(_DWORD *)(v24 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v24, method);
    v25 = *(_QWORD *)(v22[7] + 16LL);
    if ( (*(_BYTE *)(v25 + 309) & 1) == 0 )
      v25 = sub_1C1C6BC(inited);
    v26 = *(int64_t **)(v25 + 184);
    v27 = *v26;
    p_shiftIconAdjustmentArray->klass = (PartyOrganizationUtility_c *)*v26;
    sub_1BCA784(p_shiftIconAdjustmentArray, v27, v2, v3, v4, v5, v6, v7);
    v29 = BattleDataDefine_TypeInfo;
    if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo, v28);
      v29 = BattleDataDefine_TypeInfo;
    }
    ASSET_BATTLE_COMMON = v29->static_fields->ASSET_BATTLE_COMMON;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v28);
    if ( AssetManager__TryGetAssetObject_object_(
           &data,
           ASSET_BATTLE_COMMON,
           (System_String_o *)StringLiteral_3255/*"BattleCommonSettings"*/,
           (const MethodInfo_2EF51E0 *)Method_AssetManager_TryGetAssetObject_BattleCommonSettings___) )
    {
      v32 = data;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v31);
      v33 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v32, 0LL, 0LL);
      if ( !v33 )
      {
        if ( !data )
          sub_1BCAA3C(v33, v34);
        monitor = (PartyOrganizationUtility_c *)data[1].monitor;
        if ( monitor )
        {
          p_shiftIconAdjustmentArray->klass = monitor;
          sub_1BCA784(p_shiftIconAdjustmentArray, (int64_t)monitor, v35, v36, v37, v38, v39, v40);
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
  __int64 v5; // x1
  __int64 v6; // x2
  int32_t decagramNumber; // w8
  struct UISprite_o *shiftIconDecagramSprite; // x0
  __int64 v10; // x1
  Il2CppObject *v11; // x19

  if ( (byte_4B192B4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_IndexValue_GameObject____76842080, *(_QWORD *)&index, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    byte_4B192B4 = 1;
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
    sub_1BCAA3C(shiftIconDecagramSprite, *(_QWORD *)&index);
  }
  v11 = BasicHelper__IndexValue_object_(
          (System_Object_array *)this->fields.iconList,
          index,
          0LL,
          (const MethodInfo_2F01858 *)Method_BasicHelper_IndexValue_GameObject____76842080);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
  shiftIconDecagramSprite = (struct UISprite_o *)UnityEngine_Object__op_Inequality(
                                                   (UnityEngine_Object_o *)v11,
                                                   0LL,
                                                   0LL);
  if ( ((unsigned __int8)shiftIconDecagramSprite & 1) == 0 )
    return 0;
  if ( !v11 )
    goto LABEL_13;
  return UnityEngine_GameObject__get_activeInHierarchy((UnityEngine_GameObject_o *)v11, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BattleServantHpShiftComponent__MakeAssetNameByPrefixAndIconIndex(
        BattleServantHpShiftComponent_o *this,
        System_String_o *prefix,
        int32_t index,
        System_Nullable_int__o overwriteImageNo,
        const MethodInfo *method)
{
  unsigned __int64 v6; // x21
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x23
  __int64 v20; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  const MethodInfo *v23; // x3
  struct BattleServantData_o *svtData; // x8
  System_Collections_Generic_IEnumerable_TSource__o *OverwriteShiftIconArray_k__BackingField; // x24
  System_Func_object__bool__o *v26; // x21
  Il2CppObject *v27; // x0
  int32_t *p_imageType; // x8

  LODWORD(v6) = index;
  if ( (byte_4B192AB & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_FirstOrDefault_EnemyScriptParam_OverwriteShiftIcon___,
      prefix,
      *(_QWORD *)&index);
    sub_1BCA7E0(&System_Func_EnemyScriptParam_OverwriteShiftIcon__bool__TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Nullable_int__GetValueOrDefault__, v11, v12);
    sub_1BCA7E0(&Method_System_Nullable_int__get_HasValue__, v13, v14);
    sub_1BCA7E0(
      &Method_BattleServantHpShiftComponent___c__DisplayClass21_0__MakeAssetNameByPrefixAndIconIndex_b__0__,
      v15,
      v16);
    sub_1BCA7E0(&BattleServantHpShiftComponent___c__DisplayClass21_0_TypeInfo, v17, v18);
    byte_4B192AB = 1;
  }
  v19 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))sub_1BCAA2C)(
          BattleServantHpShiftComponent___c__DisplayClass21_0_TypeInfo,
          prefix,
          *(_QWORD *)&index,
          overwriteImageNo);
  System_Object___ctor((Il2CppObject *)v19, 0LL);
  if ( !v19 || (*(_DWORD *)(v19 + 16) = v6, (svtData = this->fields.svtData) == 0LL) )
    sub_1BCAA3C(v20, v21);
  OverwriteShiftIconArray_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)svtData->fields._OverwriteShiftIconArray_k__BackingField;
  if ( !OverwriteShiftIconArray_k__BackingField )
  {
    if ( overwriteImageNo.fields.hasValue )
      v6 = HIDWORD(*(unsigned __int64 *)&overwriteImageNo);
    goto LABEL_15;
  }
  v26 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                         System_Func_EnemyScriptParam_OverwriteShiftIcon__bool__TypeInfo,
                                         v21,
                                         v22,
                                         v23);
  System_Func_object__bool____ctor(
    v26,
    (Il2CppObject *)v19,
    Method_BattleServantHpShiftComponent___c__DisplayClass21_0__MakeAssetNameByPrefixAndIconIndex_b__0__,
    0LL);
  v27 = System_Linq_Enumerable__FirstOrDefault_object__49503160(
          OverwriteShiftIconArray_k__BackingField,
          (System_Func_TSource__bool__o *)v26,
          (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_EnemyScriptParam_OverwriteShiftIcon___);
  if ( overwriteImageNo.fields.hasValue )
  {
    v6 = HIDWORD(*(unsigned __int64 *)&overwriteImageNo);
    if ( !v27 )
      goto LABEL_15;
  }
  else
  {
    if ( !v27 )
    {
      LODWORD(v6) = *(_DWORD *)(v19 + 16);
LABEL_15:
      p_imageType = &this->fields.imageType;
      return BattleServantHpShiftComponent__MakeImageSuffixAddedStr(prefix, *p_imageType, v6, v23);
    }
    LODWORD(v6) = v27[1].monitor;
  }
  p_imageType = (int32_t *)&v27[1].klass + 1;
  return BattleServantHpShiftComponent__MakeImageSuffixAddedStr(prefix, *p_imageType, v6, v23);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BattleServantHpShiftComponent__MakeImageSuffixAddedStr(
        System_String_o *prefix,
        int32_t inputImageType,
        int32_t imageNo,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *v9; // x21
  Il2CppObject *v10; // x0
  int32_t v12; // [xsp+8h] [xbp-38h] BYREF
  int32_t v13; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B192AC & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&inputImageType, *(_QWORD *)&imageNo);
    sub_1BCA7E0(&StringLiteral_25355/*"{0}_{1}_{2}"*/, v7, v8);
    byte_4B192AC = 1;
  }
  v13 = inputImageType;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v13);
  v12 = imageNo;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return System_String__Format_62415660((System_String_o *)StringLiteral_25355/*"{0}_{1}_{2}"*/, (Il2CppObject *)prefix, v9, v10, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleServantHpShiftComponent__PlayShiftEffectGeneral(
        BattleServantHpShiftComponent_o *this,
        int32_t index,
        BattleServantHpShiftComponent_EffectData_o *effectData,
        BattleServantParamComponent_o *servantParam,
        float *nextAnimationTime,
        System_Action_int__o *callBack,
        const MethodInfo *method)
{
  int32_t v11; // w24
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x20
  System_String_o *AssetNameByPrefixAndIconIndex; // x0
  __int64 v35; // x1
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  const MethodInfo *v42; // x2
  __int64 methodPtr_low; // x10
  bool v44; // w1
  __int64 v45; // x1
  Il2CppObject *v46; // x22
  bool v47; // w20
  System_String_o *prefixAsset; // x23
  AssetData_o *AssetStorage; // x23
  const MethodInfo *v50; // x4
  UnityEngine_GameObject_o *v51; // x21
  UnityEngine_Transform_o *transform; // x0
  __int64 v53; // x1
  UnityEngine_Object_o *Object; // x21
  Il2CppObject *Component_object; // x19
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x3
  System_Action_o *v59; // x21
  System_Nullable_int__o v61; // 0:x3.8

  v11 = index;
  if ( (byte_4B192B8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ActionExtensions_Call_int___, *(_QWORD *)&index, effectData);
    sub_1BCA7E0(&System_Action_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, v15, v16);
    sub_1BCA7E0(&AssetManager_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_BasicHelper_IndexValue_GameObject____76842080, v19, v20);
    sub_1BCA7E0(&BattleServantSuperBossParamComponent_TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___, v23, v24);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v25, v26);
    sub_1BCA7E0(&Method_BattleServantHpShiftComponent___c__DisplayClass35_0__PlayShiftEffectGeneral_b__0__, v27, v28);
    sub_1BCA7E0(&BattleServantHpShiftComponent___c__DisplayClass35_0_TypeInfo, v29, v30);
    sub_1BCA7E0(&StringLiteral_20189/*"hp_iconeffect_before"*/, v31, v32);
    byte_4B192B8 = 1;
  }
  v33 = sub_1BCAA2C(
          BattleServantHpShiftComponent___c__DisplayClass35_0_TypeInfo,
          *(_QWORD *)&index,
          effectData,
          servantParam);
  System_Object___ctor((Il2CppObject *)v33, 0LL);
  if ( !v33 )
    goto LABEL_35;
  *(_QWORD *)(v33 + 16) = callBack;
  sub_1BCA784((PartyOrganizationUtility_o *)(v33 + 16), (int64_t)callBack, v36, v37, v38, v39, v40, v41);
  *(_DWORD *)(v33 + 24) = v11;
  *nextAnimationTime = 0.0;
  if ( this->fields.decagramNumber - 1 == v11 )
  {
    if ( !effectData )
      goto LABEL_35;
    if ( System_String__op_Equality(effectData->fields.prefixEffect, (System_String_o *)StringLiteral_20189/*"hp_iconeffect_before"*/, 0LL) )
    {
      v44 = servantParam
         && (methodPtr_low = LOBYTE(BattleServantSuperBossParamComponent_TypeInfo->vtable._0_Equals.methodPtr),
             LOBYTE(servantParam->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low)
         && servantParam->klass->_2.typeHierarchy[methodPtr_low - 1] == (Il2CppClass *)BattleServantSuperBossParamComponent_TypeInfo;
      *nextAnimationTime = BattleServantHpShiftComponent__CreateDecagramEffect(this, v44, v42);
      return 1;
    }
    v11 = *(_DWORD *)(v33 + 24);
  }
  v46 = BasicHelper__IndexValue_object_(
          (System_Object_array *)this->fields.iconList,
          v11,
          0LL,
          (const MethodInfo_2F01858 *)Method_BasicHelper_IndexValue_GameObject____76842080);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v45);
  AssetNameByPrefixAndIconIndex = (System_String_o *)UnityEngine_Object__op_Equality(
                                                       (UnityEngine_Object_o *)v46,
                                                       0LL,
                                                       0LL);
  if ( ((unsigned __int8)AssetNameByPrefixAndIconIndex & 1) == 0 )
  {
    if ( effectData )
    {
      prefixAsset = effectData->fields.prefixAsset;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v35);
      AssetStorage = AssetManager__getAssetStorage(prefixAsset, 0LL);
      v61 = 0LL;
      AssetNameByPrefixAndIconIndex = BattleServantHpShiftComponent__MakeAssetNameByPrefixAndIconIndex(
                                        this,
                                        effectData->fields.prefixEffect,
                                        *(_DWORD *)(v33 + 24) + 2,
                                        v61,
                                        v50);
      if ( AssetStorage )
      {
        AssetNameByPrefixAndIconIndex = (System_String_o *)AssetData__GetObject_object__49237568(
                                                             AssetStorage,
                                                             AssetNameByPrefixAndIconIndex,
                                                             (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
        if ( v46 )
        {
          v51 = (UnityEngine_GameObject_o *)AssetNameByPrefixAndIconIndex;
          transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v46, 0LL);
          Object = (UnityEngine_Object_o *)BaseMonoBehaviour__createObject(
                                             (BaseMonoBehaviour_o *)this,
                                             v51,
                                             transform,
                                             0LL,
                                             0LL);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v53);
          AssetNameByPrefixAndIconIndex = (System_String_o *)UnityEngine_Object__op_Inequality(Object, 0LL, 0LL);
          Component_object = 0LL;
          if ( ((unsigned __int8)AssetNameByPrefixAndIconIndex & 1) != 0 )
          {
            if ( !Object )
              goto LABEL_35;
            Component_object = UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)Object,
                                 (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
          }
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v35);
          if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
          {
            ActionExtensions__Call_int_(
              *(System_Action_T__o **)(v33 + 16),
              *(_DWORD *)(v33 + 24),
              (const MethodInfo_2E654E8 *)Method_ActionExtensions_Call_int___);
            return 1;
          }
          v59 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v56, v57, v58);
          System_Action___ctor(
            v59,
            (Il2CppObject *)v33,
            Method_BattleServantHpShiftComponent___c__DisplayClass35_0__PlayShiftEffectGeneral_b__0__,
            0LL);
          if ( Component_object )
          {
            v47 = 1;
            ((void (__fastcall *)(Il2CppObject *, __int64, System_Action_o *, Il2CppMethodPointer))Component_object->klass->vtable[8].method)(
              Component_object,
              1LL,
              v59,
              Component_object->klass->vtable[9].methodPtr);
            return v47;
          }
        }
      }
    }
LABEL_35:
    sub_1BCAA3C(AssetNameByPrefixAndIconIndex, v35);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantHpShiftComponent__UpdateHideInvalidIcon(
        BattleServantHpShiftComponent_o *this,
        int32_t dispMaxPos,
        const MethodInfo *method)
{
  int32_t v3; // w19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Object_array *iconList; // x0
  signed int max_length; // w8
  int v13; // w26
  __int64 v14; // x1
  Il2CppObject *v15; // x21
  Il2CppObject *Component_object; // x0
  __int64 v17; // x1

  v3 = dispMaxPos;
  if ( (byte_4B192B1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_IndexValue_GameObject____76842080, *(_QWORD *)&dispMaxPos, method);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v5, v6);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v9, v10);
    byte_4B192B1 = 1;
  }
  iconList = (System_Object_array *)this->fields.iconList;
  if ( iconList )
    max_length = iconList->max_length;
  else
    max_length = 0;
  if ( v3 + 1 < max_length )
  {
    v13 = max_length - 2;
    while ( 1 )
    {
      v15 = BasicHelper__IndexValue_object_(
              iconList,
              v3 + 1,
              0LL,
              (const MethodInfo_2F01858 *)Method_BasicHelper_IndexValue_GameObject____76842080);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
      Component_object = (Il2CppObject *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v15, 0LL, 0LL);
      if ( ((unsigned __int8)Component_object & 1) != 0 )
      {
        if ( !v15
          || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                                   (UnityEngine_GameObject_o *)v15,
                                   (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___)) == 0LL )
        {
          sub_1BCAA3C(Component_object, v17);
        }
        UISprite__set_spriteName((UISprite_o *)Component_object, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v15, 0, 0LL);
      }
      if ( v13 == v3 )
        break;
      iconList = (System_Object_array *)this->fields.iconList;
      ++v3;
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
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  int32_t decagramNumber; // w8
  UnityEngine_Behaviour_o *shiftIconDecagramSprite; // x0
  __int64 v15; // x1
  Il2CppObject *v16; // x23
  int32_t v17; // w22
  Il2CppObject *Component_object; // x21
  const MethodInfo *v19; // x2

  if ( (byte_4B192B2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_IndexValue_GameObject____76842080, *(_QWORD *)&index, isEmpty);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v9, v10);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    byte_4B192B2 = 1;
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
      sub_1BCAA3C(shiftIconDecagramSprite, *(_QWORD *)&index);
    }
    v16 = BasicHelper__IndexValue_object_(
            (System_Object_array *)this->fields.iconList,
            index,
            0LL,
            (const MethodInfo_2F01858 *)Method_BasicHelper_IndexValue_GameObject____76842080);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
    shiftIconDecagramSprite = (UnityEngine_Behaviour_o *)UnityEngine_Object__op_Inequality(
                                                           (UnityEngine_Object_o *)v16,
                                                           0LL,
                                                           0LL);
    if ( ((unsigned __int8)shiftIconDecagramSprite & 1) != 0 )
    {
      if ( !v16 )
        goto LABEL_17;
      v17 = isEmpty ? 0 : index + 2;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)v16,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      shiftIconDecagramSprite = (UnityEngine_Behaviour_o *)BattleServantHpShiftComponent__getSpriteName(this, v17, v19);
      if ( !Component_object )
        goto LABEL_17;
      UISprite__set_spriteName((UISprite_o *)Component_object, (System_String_o *)shiftIconDecagramSprite, 0LL);
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v16, isActive, 0LL);
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
  __int64 v7; // x1
  __int64 v8; // x2
  int32_t decagramNumber; // w8
  struct UISprite_o *shiftIconDecagramSprite; // x0
  __int64 v11; // x1
  Il2CppObject *v12; // x20

  if ( (byte_4B192B3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_IndexValue_GameObject____76842080, *(_QWORD *)&index, isActive);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    byte_4B192B3 = 1;
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
      sub_1BCAA3C(shiftIconDecagramSprite, *(_QWORD *)&index);
    }
    v12 = BasicHelper__IndexValue_object_(
            (System_Object_array *)this->fields.iconList,
            index,
            0LL,
            (const MethodInfo_2F01858 *)Method_BasicHelper_IndexValue_GameObject____76842080);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
    shiftIconDecagramSprite = (struct UISprite_o *)UnityEngine_Object__op_Inequality(
                                                     (UnityEngine_Object_o *)v12,
                                                     0LL,
                                                     0LL);
    if ( ((unsigned __int8)shiftIconDecagramSprite & 1) != 0 )
    {
      if ( !v12 )
        goto LABEL_13;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v12, isActive, 0LL);
    }
  }
}


void __fastcall BattleServantHpShiftComponent__createIconList(
        BattleServantHpShiftComponent_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  BattleServantHpShiftComponent_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  struct UnityEngine_GameObject_array *iconList; // x8
  struct UnityEngine_GameObject_array **p_iconList; // x20
  int v21; // w21
  int decagramNumber; // w10
  __int64 v23; // x9
  unsigned int v24; // w22
  _BOOL4 v25; // w23
  unsigned __int64 v26; // x25
  UnityEngine_Object_o *v27; // x24
  int v28; // w8
  BattleDataDefine_c *v29; // x0
  System_String_o *ASSET_BATTLE_COMMON; // x23
  UISprite_o *shiftIconDecagramSprite; // x23
  const MethodInfo *v32; // x2
  int64_t v33; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  UIAtlas_o *atlas; // [xsp+8h] [xbp-48h] BYREF

  v4 = this;
  if ( (byte_4B192AE & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, svtData, method);
    sub_1BCA7E0(&BattleDataDefine_TypeInfo, v5, v6);
    sub_1BCA7E0(&UnityEngine_GameObject___TypeInfo, v7, v8);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    this = (BattleServantHpShiftComponent_o *)sub_1BCA7E0(&StringLiteral_3251/*"BattleAssetUIAtlas"*/, v11, v12);
    byte_4B192AE = 1;
  }
  atlas = 0LL;
  if ( !svtData )
    goto LABEL_38;
  this = (BattleServantHpShiftComponent_o *)BattleServantData__GetMaxShiftIconCount(svtData, 0LL);
  p_iconList = &v4->fields.iconList;
  iconList = v4->fields.iconList;
  v21 = (int)this;
  if ( iconList )
  {
    if ( (_DWORD)this == iconList->max_length )
      return;
    decagramNumber = v4->fields.decagramNumber;
    v23 = *(_QWORD *)&iconList->max_length;
    if ( (int)this < decagramNumber )
      v24 = (unsigned int)this;
    else
      v24 = decagramNumber - 1;
    v25 = (int)this >= decagramNumber;
    if ( v24 != (_DWORD)v23 )
    {
      if ( (int)v23 >= 1 )
      {
        v26 = 0LL;
        while ( 1 )
        {
          if ( v26 >= (unsigned int)v23 )
            sub_1BCAA44(this, svtData);
          v27 = (UnityEngine_Object_o *)iconList->m_Items[v26];
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, svtData);
          UnityEngine_Object__Destroy_70154244(v27, 0LL);
          iconList = *p_iconList;
          if ( !*p_iconList )
            break;
          LODWORD(v23) = iconList->max_length;
          if ( (__int64)++v26 >= (int)v23 )
            goto LABEL_17;
        }
LABEL_38:
        sub_1BCAA3C(this, svtData);
      }
LABEL_17:
      *p_iconList = 0LL;
      sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields.iconList, 0LL, v13, v14, v15, v16, v17, v18);
    }
  }
  else
  {
    v28 = v4->fields.decagramNumber;
    v25 = (int)this >= v28;
    if ( (int)this < v28 )
      v24 = (unsigned int)this;
    else
      v24 = v28 - 1;
  }
  this = (BattleServantHpShiftComponent_o *)v4->fields.shiftIconDecagramSprite;
  if ( !this )
    goto LABEL_38;
  this = (BattleServantHpShiftComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_38;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v25, 0LL);
  if ( v25 )
  {
    v29 = BattleDataDefine_TypeInfo;
    if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo, svtData);
      v29 = BattleDataDefine_TypeInfo;
    }
    ASSET_BATTLE_COMMON = v29->static_fields->ASSET_BATTLE_COMMON;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, svtData);
    if ( AssetManager__TryGetUIAtlas(&atlas, ASSET_BATTLE_COMMON, (System_String_o *)StringLiteral_3251/*"BattleAssetUIAtlas"*/, 0LL) )
    {
      this = (BattleServantHpShiftComponent_o *)v4->fields.shiftIconDecagramSprite;
      if ( !this )
        goto LABEL_38;
      UISprite__set_atlas((UISprite_o *)this, atlas, 0LL);
      shiftIconDecagramSprite = v4->fields.shiftIconDecagramSprite;
      this = (BattleServantHpShiftComponent_o *)BattleServantHpShiftComponent__getSpriteName(
                                                  v4,
                                                  v4->fields.decagramNumber + 1,
                                                  v32);
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
  if ( v21 >= 1 )
  {
    if ( !*p_iconList )
    {
      v33 = sub_1BCA888(UnityEngine_GameObject___TypeInfo, v24);
      *p_iconList = (struct UnityEngine_GameObject_array *)v33;
      sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields.iconList, v33, v34, v35, v36, v37, v38, v39);
    }
    BattleServantHpShiftComponent__AlignShiftIcons(v4, (const MethodInfo *)svtData);
  }
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BattleServantHpShiftComponent__getSpriteName(
        BattleServantHpShiftComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  System_Nullable_int__o v7; // 0:x3.8

  if ( (byte_4B192A6 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_20186/*"hp_icon"*/, *(_QWORD *)&index, method);
    byte_4B192A6 = 1;
  }
  v7 = 0LL;
  return BattleServantHpShiftComponent__MakeAssetNameByPrefixAndIconIndex(
           this,
           (System_String_o *)StringLiteral_20186/*"hp_icon"*/,
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
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  struct System_Int32_array *shiftDeckList; // x9
  struct UnityEngine_GameObject_array *iconList; // x8
  il2cpp_array_size_t max_length; // w11
  il2cpp_array_size_t v16; // w9
  il2cpp_array_size_t v17; // w22
  UnityEngine_Object_o *v18; // x20
  __int64 v19; // x1
  BattleDataDefine_c *v20; // x0
  System_String_o *ASSET_BATTLE_COMMON; // x20
  AssetData_o *AssetStorage; // x21
  const MethodInfo *v23; // x2
  __int64 v24; // x1
  Il2CppObject *Object_object__49237568; // x21
  struct UnityEngine_GameObject_array *v26; // x8
  UnityEngine_Transform_o *transform; // x0
  struct UnityEngine_GameObject_array *v28; // x8
  Il2CppObject *Component_object; // x21
  const MethodInfo *v30; // x2

  v4 = this;
  if ( (byte_4B192B7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, svtData, method);
    sub_1BCA7E0(&AssetManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&BattleDataDefine_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v9, v10);
    this = (BattleServantHpShiftComponent_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    byte_4B192B7 = 1;
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
  v16 = iconList->max_length;
  v17 = max_length - svtData->fields.shiftDeckIndex;
  if ( (int)v17 >= (int)v16 )
    return;
  if ( v17 >= v16 )
    goto LABEL_30;
  v18 = (UnityEngine_Object_o *)iconList->m_Items[v17];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, svtData);
  if ( !UnityEngine_Object__op_Equality(v18, 0LL, 0LL) )
  {
    v20 = BattleDataDefine_TypeInfo;
    if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo, v19);
      v20 = BattleDataDefine_TypeInfo;
    }
    ASSET_BATTLE_COMMON = v20->static_fields->ASSET_BATTLE_COMMON;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v19);
    AssetStorage = AssetManager__getAssetStorage(ASSET_BATTLE_COMMON, 0LL);
    this = (BattleServantHpShiftComponent_o *)BattleServantHpShiftComponent__GetBreakShiftIconEffectName(
                                                v4,
                                                v17 + 2,
                                                v23);
    if ( !AssetStorage )
      goto LABEL_29;
    Object_object__49237568 = AssetData__GetObject_object__49237568(
                                AssetStorage,
                                (System_String_o *)this,
                                (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
    this = (BattleServantHpShiftComponent_o *)UnityEngine_Object__op_Inequality(
                                                (UnityEngine_Object_o *)Object_object__49237568,
                                                0LL,
                                                0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v26 = v4->fields.iconList;
      if ( !v26 )
        goto LABEL_29;
      if ( v17 >= v26->max_length )
        goto LABEL_30;
      this = (BattleServantHpShiftComponent_o *)v26->m_Items[v17];
      if ( !this )
        goto LABEL_29;
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
      this = (BattleServantHpShiftComponent_o *)BaseMonoBehaviour__createObject(
                                                  (BaseMonoBehaviour_o *)v4,
                                                  (UnityEngine_GameObject_o *)Object_object__49237568,
                                                  transform,
                                                  0LL,
                                                  0LL);
    }
    v28 = v4->fields.iconList;
    if ( !v28 )
      goto LABEL_29;
    if ( v17 < v28->max_length )
    {
      this = (BattleServantHpShiftComponent_o *)v28->m_Items[v17];
      if ( this )
      {
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)this,
                             (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        this = (BattleServantHpShiftComponent_o *)BattleServantHpShiftComponent__GetEmptyIconSpriteName(
                                                    v4,
                                                    v17 + 2,
                                                    v30);
        if ( Component_object )
        {
          UISprite__set_spriteName((UISprite_o *)Component_object, (System_String_o *)this, 0LL);
          return;
        }
      }
LABEL_29:
      sub_1BCAA3C(this, svtData);
    }
LABEL_30:
    sub_1BCAA44(this, svtData);
  }
}


float __fastcall BattleServantHpShiftComponent__playShiftEffectBefore(
        BattleServantHpShiftComponent_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  BattleServantHpShiftComponent_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  struct System_Int32_array *shiftDeckList; // x8
  int v12; // w21
  bool IsSuperBossUi; // w1
  const MethodInfo *v14; // x2
  struct UnityEngine_GameObject_array *iconList; // x8
  int max_length; // w9
  UnityEngine_Object_o *v18; // x20
  __int64 v19; // x1
  BattleDataDefine_c *v20; // x0
  System_String_o *ASSET_BATTLE_COMMON; // x20
  AssetData_o *AssetStorage; // x20
  const MethodInfo *v23; // x2
  __int64 v24; // x1
  Il2CppObject *Object_object__49237568; // x20
  struct UnityEngine_GameObject_array *v26; // x8
  UnityEngine_Transform_o *transform; // x0

  v4 = this;
  if ( (byte_4B192B6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, svtData, method);
    sub_1BCA7E0(&AssetManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&BattleDataDefine_TypeInfo, v7, v8);
    this = (BattleServantHpShiftComponent_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    byte_4B192B6 = 1;
  }
  if ( !svtData )
    goto LABEL_26;
  shiftDeckList = svtData->fields.shiftDeckList;
  if ( !shiftDeckList )
    goto LABEL_26;
  v12 = shiftDeckList->max_length - svtData->fields.shiftDeckIndex;
  if ( v4->fields.decagramNumber - 1 == v12 )
  {
    IsSuperBossUi = BattleServantData__get_IsSuperBossUi(svtData, 0LL);
    return BattleServantHpShiftComponent__CreateDecagramEffect(v4, IsSuperBossUi, v14);
  }
  iconList = v4->fields.iconList;
  if ( iconList )
  {
    max_length = iconList->max_length;
    if ( v12 < max_length )
    {
      if ( v12 < (unsigned int)max_length )
      {
        v18 = (UnityEngine_Object_o *)iconList->m_Items[v12];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, svtData);
        if ( UnityEngine_Object__op_Equality(v18, 0LL, 0LL) )
          return 0.0;
        v20 = BattleDataDefine_TypeInfo;
        if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo, v19);
          v20 = BattleDataDefine_TypeInfo;
        }
        ASSET_BATTLE_COMMON = v20->static_fields->ASSET_BATTLE_COMMON;
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v19);
        AssetStorage = AssetManager__getAssetStorage(ASSET_BATTLE_COMMON, 0LL);
        this = (BattleServantHpShiftComponent_o *)BattleServantHpShiftComponent__GetShiftBeforeEffectName(
                                                    v4,
                                                    v12 + 2,
                                                    v23);
        if ( !AssetStorage )
          goto LABEL_26;
        Object_object__49237568 = AssetData__GetObject_object__49237568(
                                    AssetStorage,
                                    (System_String_o *)this,
                                    (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
        this = (BattleServantHpShiftComponent_o *)UnityEngine_Object__op_Inequality(
                                                    (UnityEngine_Object_o *)Object_object__49237568,
                                                    0LL,
                                                    0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
          return 0.0;
        v26 = v4->fields.iconList;
        if ( !v26 )
          goto LABEL_26;
        if ( v12 < v26->max_length )
        {
          this = (BattleServantHpShiftComponent_o *)v26->m_Items[v12];
          if ( this )
          {
            transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
            BaseMonoBehaviour__createObject(
              (BaseMonoBehaviour_o *)v4,
              (UnityEngine_GameObject_o *)Object_object__49237568,
              transform,
              0LL,
              0LL);
            return 0.0;
          }
LABEL_26:
          sub_1BCAA3C(this, svtData);
        }
      }
      sub_1BCAA44(this, svtData);
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
  const MethodInfo *v16; // x1
  __int64 v17; // x1
  UnityEngine_GameObject_o *shiftIconClone; // x0
  Il2CppObject *Component_object; // x0
  __int64 v20; // x1
  BattleDataDefine_c *v21; // x8
  UISprite_o *v22; // x21
  System_String_o *ASSET_BATTLE_COMMON; // x22
  const MethodInfo *v24; // x2
  System_String_o *SpriteName; // x0
  const MethodInfo *v26; // x2
  const MethodInfo *v27; // x2
  int32_t MaxShiftIconPos; // w0
  const MethodInfo *v29; // x2
  UIAtlas_o *atlas; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B192A4 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, svtData, method);
    sub_1BCA7E0(&BattleDataDefine_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v12, v13);
    sub_1BCA7E0(&StringLiteral_3251/*"BattleAssetUIAtlas"*/, v14, v15);
    byte_4B192A4 = 1;
  }
  atlas = 0LL;
  this->fields.svtData = svtData;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.svtData,
    (int64_t)svtData,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  BattleServantHpShiftComponent__ImportFromBattleCommonSettings(this, v16);
  shiftIconClone = this->fields.shiftIconClone;
  if ( !shiftIconClone )
    goto LABEL_16;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       shiftIconClone,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  v21 = BattleDataDefine_TypeInfo;
  v22 = (UISprite_o *)Component_object;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo, v20);
    v21 = BattleDataDefine_TypeInfo;
  }
  ASSET_BATTLE_COMMON = v21->static_fields->ASSET_BATTLE_COMMON;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v20);
  shiftIconClone = (UnityEngine_GameObject_o *)AssetManager__TryGetUIAtlas(
                                                 &atlas,
                                                 ASSET_BATTLE_COMMON,
                                                 (System_String_o *)StringLiteral_3251/*"BattleAssetUIAtlas"*/,
                                                 0LL);
  if ( ((unsigned __int8)shiftIconClone & 1) != 0 )
  {
    if ( !v22 )
      goto LABEL_16;
    UISprite__set_atlas(v22, atlas, 0LL);
    SpriteName = BattleServantHpShiftComponent__getSpriteName(this, 0, v24);
    UISprite__set_spriteName(v22, SpriteName, 0LL);
    this->fields.defaultDepth = v22->fields.mDepth;
  }
  shiftIconClone = this->fields.shiftIconClone;
  if ( !shiftIconClone
    || (UnityEngine_GameObject__SetActive(shiftIconClone, 0, 0LL),
        BattleServantHpShiftComponent__createIconList(this, svtData, v26),
        BattleServantHpShiftComponent__setValue(this, svtData, v27),
        !svtData) )
  {
LABEL_16:
    sub_1BCAA3C(shiftIconClone, v17);
  }
  if ( svtData->fields.lowLimitShift >= 1 )
  {
    MaxShiftIconPos = BattleServantData__GetMaxShiftIconPos(svtData, 0LL);
    BattleServantHpShiftComponent__UpdateHideInvalidIcon(this, MaxShiftIconPos, v29);
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
  if ( (byte_4B192B0 & 1) == 0 )
  {
    this = (BattleServantHpShiftComponent_o *)sub_1BCA7E0(
                                                &Method_UnityEngine_GameObject_GetComponent_UISprite___,
                                                svtData,
                                                method);
    byte_4B192B0 = 1;
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
      sub_1BCAA3C(this, svtData);
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
                             (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
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
            sub_1BCAA44(this, svtData);
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
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  BattleDataDefine_c *v9; // x0
  struct System_String_o *ASSET_BATTLE_COMMON; // x1

  if ( (byte_4B192B9 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleDataDefine_TypeInfo, method, v2);
    byte_4B192B9 = 1;
  }
  v9 = BattleDataDefine_TypeInfo;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo, method);
    v9 = BattleDataDefine_TypeInfo;
  }
  ASSET_BATTLE_COMMON = v9->static_fields->ASSET_BATTLE_COMMON;
  this->fields.prefixAsset = ASSET_BATTLE_COMMON;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)ASSET_BATTLE_COMMON, v2, v3, v4, v5, v6, v7);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
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
  __int64 v2; // x2

  if ( (byte_4B192BA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ActionExtensions_Call_int___, method, v2);
    byte_4B192BA = 1;
  }
  ActionExtensions__Call_int_(
    (System_Action_T__o *)this->fields.callBack,
    this->fields.index,
    (const MethodInfo_2E654E8 *)Method_ActionExtensions_Call_int___);
}