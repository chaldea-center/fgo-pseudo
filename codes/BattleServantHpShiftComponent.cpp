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
  __int64 v3; // x1
  int64_t svtData; // x0
  struct UnityEngine_GameObject_array *iconList; // x8
  int32_t decagramNumber; // w25
  int32_t v7; // w20
  float v8; // s8
  __int64 v9; // x26
  __int64 v10; // x27
  int max_length; // w9
  unsigned int v12; // w28
  UnityEngine_Object_o *v13; // x21
  struct UnityEngine_GameObject_array *v14; // x22
  UnityEngine_GameObject_o *shiftIconClone; // x21
  UnityEngine_Transform_o *transform; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  struct UnityEngine_GameObject_array *v23; // x8
  UISprite_o *Component_object; // x21
  const MethodInfo *v25; // x2
  const MethodInfo *v26; // x2
  int64_t v27; // x22
  float v28; // s9
  struct UnityEngine_GameObject_array *v29; // x8
  float v30; // s10
  float v31; // s8
  struct UnityEngine_GameObject_array *v32; // x8
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BB7852 & 1) == 0 )
  {
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_UISprite___, method);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v3);
    byte_4BB7852 = 1;
  }
  svtData = (int64_t)this->fields.svtData;
  if ( !svtData
    || (svtData = BattleServantData__GetCurrentShiftPos((BattleServantData_o *)svtData, 0LL),
        (iconList = this->fields.iconList) == 0LL) )
  {
LABEL_33:
    sub_1C13F80(svtData, method);
  }
  decagramNumber = this->fields.decagramNumber;
  v7 = svtData;
  v8 = 0.0;
  v9 = 4LL;
  v10 = 32LL;
  while ( 1 )
  {
    max_length = iconList->max_length;
    v12 = v9 - 4;
    if ( (int)v9 - 4 >= max_length )
      break;
    if ( v12 >= max_length )
      goto LABEL_35;
    v13 = (UnityEngine_Object_o *)*((_QWORD *)&iconList->obj.klass + v9);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    svtData = UnityEngine_Object__op_Equality(v13, 0LL, 0LL);
    if ( (svtData & 1) != 0 )
    {
      v14 = this->fields.iconList;
      shiftIconClone = this->fields.shiftIconClone;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      svtData = (int64_t)BaseMonoBehaviour__createObject(
                           (BaseMonoBehaviour_o *)this,
                           shiftIconClone,
                           transform,
                           0LL,
                           0LL);
      if ( !v14 )
        goto LABEL_33;
      if ( v12 >= v14->max_length )
        goto LABEL_35;
      *((_QWORD *)&v14->obj.klass + v9) = svtData;
      sub_1C13CC8((PartyOrganizationUtility_o *)((char *)v14 + v10), svtData, v17, v18, v19, v20, v21, v22);
    }
    v23 = this->fields.iconList;
    if ( !v23 )
      goto LABEL_33;
    if ( v12 >= v23->max_length )
LABEL_35:
      sub_1C13F88(svtData, method);
    svtData = *((_QWORD *)&v23->obj.klass + v9);
    if ( svtData )
    {
      Component_object = (UISprite_o *)UnityEngine_GameObject__GetComponent_object_(
                                         (UnityEngine_GameObject_o *)svtData,
                                         (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      svtData = (int64_t)BattleServantHpShiftComponent__getSpriteName(this, (int)v9 - 2, v25);
      if ( Component_object )
      {
        UISprite__set_spriteName(Component_object, (System_String_o *)svtData, 0LL);
        UIWidget__set_depth((UIWidget_o *)Component_object, v9 + this->fields.defaultDepth - 4, 0LL);
        svtData = (int64_t)BattleServantHpShiftComponent__GetShiftIconAdjustment(
                             this,
                             Component_object->fields.mSpriteName,
                             v26);
        if ( svtData )
        {
          v27 = svtData;
          UIWidget__set_width((UIWidget_o *)Component_object, *(_DWORD *)(svtData + 24), 0LL);
          UIWidget__set_height((UIWidget_o *)Component_object, *(_DWORD *)(v27 + 28), 0LL);
          svtData = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0LL);
          if ( !svtData )
            goto LABEL_33;
          UnityEngine_Transform__set_localPosition(
            (UnityEngine_Transform_o *)svtData,
            *(UnityEngine_Vector3_o *)(v27 + 32),
            0LL);
          v28 = (float)*(int *)(v27 + 44);
        }
        else
        {
          v28 = 0.0;
        }
        v29 = this->fields.iconList;
        v30 = (_DWORD)v9 == 4 ? -v28 : v28;
        if ( v29 )
        {
          if ( v12 >= v29->max_length )
            goto LABEL_35;
          svtData = *((_QWORD *)&v29->obj.klass + v9);
          if ( svtData )
          {
            svtData = (int64_t)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)svtData, 0LL);
            if ( svtData )
            {
              v31 = v8 + v30;
              v33.fields.z = 0.0;
              v33.fields.y = this->fields.addPos.fields.y * (float)(int)v12;
              v33.fields.x = v31;
              UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)svtData, v33, 0LL);
              v32 = this->fields.iconList;
              if ( v32 )
              {
                if ( v12 >= v32->max_length )
                  goto LABEL_35;
                svtData = *((_QWORD *)&v32->obj.klass + v9);
                if ( svtData )
                {
                  v8 = v31 + (float)(v28 + this->fields.addPos.fields.x);
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtData, v7 < decagramNumber, 0LL);
                  iconList = this->fields.iconList;
                  ++v9;
                  v10 += 8LL;
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  BattleDataDefine_c *v11; // x0
  System_String_o *ASSET_BATTLE_COMMON; // x21
  AssetData_o *AssetStorage; // x0
  __int64 v14; // x1
  Il2CppObject *Object_object__49747248; // x21
  float v16; // s8
  UnityEngine_Transform_o *parent; // x0
  UnityEngine_Object_o *Object; // x21
  Il2CppObject *Component_object; // x21
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7

  if ( (byte_4BB7858 & 1) == 0 )
  {
    sub_1C13D24(&Method_AssetData_GetObject_GameObject____77466800, isSuperBoss);
    sub_1C13D24(&AssetManager_TypeInfo, v5);
    sub_1C13D24(&BattleDataDefine_TypeInfo, v6);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_BattleServantHpShiftDecagramEffectComponent___, v7);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v8);
    sub_1C13D24(&StringLiteral_20293/*"horizontalslider"*/, v9);
    sub_1C13D24(&StringLiteral_20292/*"horizontalscrollbarthumb"*/, v10);
    byte_4BB7858 = 1;
  }
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
  if ( !AssetStorage )
    goto LABEL_24;
  Object_object__49747248 = AssetData__GetObject_object__49747248(
                              AssetStorage,
                              (System_String_o *)StringLiteral_20292/*"horizontalscrollbarthumb"*/,
                              (const MethodInfo_2F71530 *)Method_AssetData_GetObject_GameObject____77466800);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v16 = 0.0;
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__49747248, 0LL, 0LL) )
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
                                       (UnityEngine_GameObject_o *)Object_object__49747248,
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
                           (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_BattleServantHpShiftDecagramEffectComponent___);
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
          sub_1C13CC8((PartyOrganizationUtility_o *)&Component_object[13], (int64_t)this, v20, v21, v22, v23, v24, v25);
          v16 = *((float *)&Component_object[12].monitor + 1);
          if ( isSuperBoss )
            CommonEffectComponent__Init_41818452(
              (CommonEffectComponent_o *)Component_object,
              (System_String_o *)StringLiteral_20293/*"horizontalslider"*/,
              0,
              0,
              0LL);
          return v16;
        }
LABEL_24:
        sub_1C13F80(AssetStorage, v14);
      }
    }
  }
  return v16;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BattleServantHpShiftComponent__GetBreakShiftIconEffectName(
        BattleServantHpShiftComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  System_Nullable_int__o v7; // 0:x3.8

  if ( (byte_4BB784C & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_20300/*"hotpink"*/, *(_QWORD *)&index);
    byte_4BB784C = 1;
  }
  v7 = 0LL;
  return BattleServantHpShiftComponent__MakeAssetNameByPrefixAndIconIndex(
           this,
           (System_String_o *)StringLiteral_20300/*"hotpink"*/,
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
  const MethodInfo *v6; // x4
  System_Nullable_int__o overwriteImageNo; // [xsp+8h] [xbp-38h] BYREF
  System_Nullable_int__o p_overwriteImageNo; // 0:x0.8
  System_Nullable_int__o v10; // 0:x3.8

  if ( (byte_4BB784B & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Nullable_int___ctor__, *(_QWORD *)&index);
    sub_1C13D24(&StringLiteral_20298/*"hostNameOrAddress"*/, v5);
    byte_4BB784B = 1;
  }
  p_overwriteImageNo = (System_Nullable_int__o)&overwriteImageNo;
  overwriteImageNo = 0LL;
  System_Nullable_int____ctor(p_overwriteImageNo, 0, (const MethodInfo_37493FC *)Method_System_Nullable_int___ctor__);
  v10 = overwriteImageNo;
  return BattleServantHpShiftComponent__MakeAssetNameByPrefixAndIconIndex(
           this,
           (System_String_o *)StringLiteral_20298/*"hostNameOrAddress"*/,
           index,
           v10,
           v6);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BattleServantHpShiftComponent__GetShiftBeforeEffectName(
        BattleServantHpShiftComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  System_Nullable_int__o v7; // 0:x3.8

  if ( (byte_4BB784D & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_20301/*"hours"*/, *(_QWORD *)&index);
    byte_4BB784D = 1;
  }
  v7 = 0LL;
  return BattleServantHpShiftComponent__MakeAssetNameByPrefixAndIconIndex(
           this,
           (System_String_o *)StringLiteral_20301/*"hours"*/,
           index,
           v7,
           v3);
}


BattleCommonSettings_ShiftIconAdjustment_o *__fastcall BattleServantHpShiftComponent__GetShiftIconAdjustment(
        BattleServantHpShiftComponent_o *this,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  System_Collections_Generic_IEnumerable_TSource__o *shiftIconAdjustmentArray; // x19
  System_Func_object__bool__o *v18; // x20

  if ( (byte_4BB7850 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Linq_Enumerable_FirstOrDefault_BattleCommonSettings_ShiftIconAdjustment___, spriteName);
    sub_1C13D24(&System_Func_BattleCommonSettings_ShiftIconAdjustment__bool__TypeInfo, v5);
    sub_1C13D24(&Method_BattleServantHpShiftComponent___c__DisplayClass23_0__GetShiftIconAdjustment_b__0__, v6);
    sub_1C13D24(&BattleServantHpShiftComponent___c__DisplayClass23_0_TypeInfo, v7);
    byte_4BB7850 = 1;
  }
  v8 = sub_1C13F70(BattleServantHpShiftComponent___c__DisplayClass23_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    sub_1C13F80(v9, v10);
  *(_QWORD *)(v8 + 16) = spriteName;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v8 + 16), (int64_t)spriteName, v11, v12, v13, v14, v15, v16);
  shiftIconAdjustmentArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.shiftIconAdjustmentArray;
  if ( !shiftIconAdjustmentArray )
    return 0LL;
  v18 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_BattleCommonSettings_ShiftIconAdjustment__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v18,
    (Il2CppObject *)v8,
    Method_BattleServantHpShiftComponent___c__DisplayClass23_0__GetShiftIconAdjustment_b__0__,
    0LL);
  return (BattleCommonSettings_ShiftIconAdjustment_o *)System_Linq_Enumerable__FirstOrDefault_object__50015312(
                                                         shiftIconAdjustmentArray,
                                                         (System_Func_TSource__bool__o *)v18,
                                                         (const MethodInfo_2FB2C50 *)Method_System_Linq_Enumerable_FirstOrDefault_BattleCommonSettings_ShiftIconAdjustment___);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BattleServantHpShiftComponent__GetShiftIconName(
        int32_t inputImageType,
        int32_t imageNo,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4BB784A & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_20298/*"hostNameOrAddress"*/, *(_QWORD *)&imageNo);
    byte_4BB784A = 1;
  }
  return BattleServantHpShiftComponent__MakeImageSuffixAddedStr(
           (System_String_o *)StringLiteral_20298/*"hostNameOrAddress"*/,
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  PartyOrganizationUtility_o *p_shiftIconAdjustmentArray; // x19
  struct BattleCommonSettings_ShiftIconAdjustment_array *shiftIconAdjustmentArray; // t1
  _QWORD *v17; // x20
  __int64 v18; // x8
  __int64 v19; // x0
  __int64 v20; // x0
  int64_t *v21; // x8
  int64_t v22; // x1
  BattleDataDefine_c *v23; // x0
  System_String_o *ASSET_BATTLE_COMMON; // x20
  Il2CppObject *v25; // x20
  _BOOL8 v26; // x0
  __int64 v27; // x1
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  PartyOrganizationUtility_c *monitor; // x1
  Il2CppObject *data; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4BB7848 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Array_Empty_BattleCommonSettings_ShiftIconAdjustment___, method);
    sub_1C13D24(&Method_AssetManager_TryGetAssetObject_BattleCommonSettings___, v10);
    sub_1C13D24(&AssetManager_TypeInfo, v11);
    sub_1C13D24(&BattleDataDefine_TypeInfo, v12);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v13);
    sub_1C13D24(&StringLiteral_3266/*"BattleBG"*/, v14);
    byte_4BB7848 = 1;
  }
  data = 0LL;
  shiftIconAdjustmentArray = this->fields.shiftIconAdjustmentArray;
  p_shiftIconAdjustmentArray = (PartyOrganizationUtility_o *)&this->fields.shiftIconAdjustmentArray;
  if ( !shiftIconAdjustmentArray )
  {
    v17 = Method_System_Array_Empty_BattleCommonSettings_ShiftIconAdjustment___;
    v18 = *((_QWORD *)Method_System_Array_Empty_BattleCommonSettings_ShiftIconAdjustment___ + 7);
    if ( !v18 )
    {
      sub_1C65C5C(Method_System_Array_Empty_BattleCommonSettings_ShiftIconAdjustment___);
      v18 = v17[7];
    }
    v19 = *(_QWORD *)(v18 + 16);
    if ( (*(_BYTE *)(v19 + 309) & 1) == 0 )
      v19 = sub_1C65C00(inited);
    if ( !*(_DWORD *)(v19 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v19);
    v20 = *(_QWORD *)(v17[7] + 16LL);
    if ( (*(_BYTE *)(v20 + 309) & 1) == 0 )
      v20 = sub_1C65C00(inited);
    v21 = *(int64_t **)(v20 + 184);
    v22 = *v21;
    p_shiftIconAdjustmentArray->klass = (PartyOrganizationUtility_c *)*v21;
    sub_1C13CC8(p_shiftIconAdjustmentArray, v22, v2, v3, v4, v5, v6, v7);
    v23 = BattleDataDefine_TypeInfo;
    if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
      v23 = BattleDataDefine_TypeInfo;
    }
    ASSET_BATTLE_COMMON = v23->static_fields->ASSET_BATTLE_COMMON;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    if ( AssetManager__TryGetAssetObject_object_(
           &data,
           ASSET_BATTLE_COMMON,
           (System_String_o *)StringLiteral_3266/*"BattleBG"*/,
           (const MethodInfo_2F718D0 *)Method_AssetManager_TryGetAssetObject_BattleCommonSettings___) )
    {
      v25 = data;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v26 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v25, 0LL, 0LL);
      if ( !v26 )
      {
        if ( !data )
          sub_1C13F80(v26, v27);
        monitor = (PartyOrganizationUtility_c *)data[1].monitor;
        if ( monitor )
        {
          p_shiftIconAdjustmentArray->klass = monitor;
          sub_1C13CC8(p_shiftIconAdjustmentArray, (int64_t)monitor, v28, v29, v30, v31, v32, v33);
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
  int32_t decagramNumber; // w8
  struct UISprite_o *shiftIconDecagramSprite; // x0
  Il2CppObject *v9; // x19

  if ( (byte_4BB7857 & 1) == 0 )
  {
    sub_1C13D24(&Method_BasicHelper_IndexValue_GameObject____77472256, *(_QWORD *)&index);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v5);
    byte_4BB7857 = 1;
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
    sub_1C13F80(shiftIconDecagramSprite, *(_QWORD *)&index);
  }
  v9 = BasicHelper__IndexValue_object_(
         (System_Object_array *)this->fields.iconList,
         index,
         0LL,
         (const MethodInfo_2F7E034 *)Method_BasicHelper_IndexValue_GameObject____77472256);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  shiftIconDecagramSprite = (struct UISprite_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v9, 0LL, 0LL);
  if ( ((unsigned __int8)shiftIconDecagramSprite & 1) == 0 )
    return 0;
  if ( !v9 )
    goto LABEL_13;
  return UnityEngine_GameObject__get_activeInHierarchy((UnityEngine_GameObject_o *)v9, 0LL);
}


System_String_o *__fastcall BattleServantHpShiftComponent__MakeAssetNameByPrefixAndIconIndex(
        BattleServantHpShiftComponent_o *this,
        System_String_o *prefix,
        int32_t index,
        System_Nullable_int__o overwriteImageNo,
        const MethodInfo *method)
{
  unsigned __int64 v6; // x21
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x23
  __int64 v15; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x3
  struct BattleServantData_o *svtData; // x8
  System_Collections_Generic_IEnumerable_TSource__o *OverwriteShiftIconArray_k__BackingField; // x24
  System_Func_object__bool__o *v20; // x21
  Il2CppObject *v21; // x0
  int32_t *p_imageType; // x8

  LODWORD(v6) = index;
  if ( (byte_4BB784E & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Linq_Enumerable_FirstOrDefault_EnemyScriptParam_OverwriteShiftIcon___, prefix);
    sub_1C13D24(&System_Func_EnemyScriptParam_OverwriteShiftIcon__bool__TypeInfo, v9);
    sub_1C13D24(&Method_System_Nullable_int__GetValueOrDefault__, v10);
    sub_1C13D24(&Method_System_Nullable_int__get_HasValue__, v11);
    sub_1C13D24(
      &Method_BattleServantHpShiftComponent___c__DisplayClass21_0__MakeAssetNameByPrefixAndIconIndex_b__0__,
      v12);
    sub_1C13D24(&BattleServantHpShiftComponent___c__DisplayClass21_0_TypeInfo, v13);
    byte_4BB784E = 1;
  }
  v14 = sub_1C13F70(BattleServantHpShiftComponent___c__DisplayClass21_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 || (*(_DWORD *)(v14 + 16) = v6, (svtData = this->fields.svtData) == 0LL) )
    sub_1C13F80(v15, v16);
  OverwriteShiftIconArray_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)svtData->fields._OverwriteShiftIconArray_k__BackingField;
  if ( !OverwriteShiftIconArray_k__BackingField )
  {
    if ( overwriteImageNo.fields.hasValue )
      v6 = HIDWORD(*(unsigned __int64 *)&overwriteImageNo);
    goto LABEL_15;
  }
  v20 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_EnemyScriptParam_OverwriteShiftIcon__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v20,
    (Il2CppObject *)v14,
    Method_BattleServantHpShiftComponent___c__DisplayClass21_0__MakeAssetNameByPrefixAndIconIndex_b__0__,
    0LL);
  v21 = System_Linq_Enumerable__FirstOrDefault_object__50015312(
          OverwriteShiftIconArray_k__BackingField,
          (System_Func_TSource__bool__o *)v20,
          (const MethodInfo_2FB2C50 *)Method_System_Linq_Enumerable_FirstOrDefault_EnemyScriptParam_OverwriteShiftIcon___);
  if ( overwriteImageNo.fields.hasValue )
  {
    v6 = HIDWORD(*(unsigned __int64 *)&overwriteImageNo);
    if ( !v21 )
      goto LABEL_15;
  }
  else
  {
    if ( !v21 )
    {
      LODWORD(v6) = *(_DWORD *)(v14 + 16);
LABEL_15:
      p_imageType = &this->fields.imageType;
      return BattleServantHpShiftComponent__MakeImageSuffixAddedStr(prefix, *p_imageType, v6, v17);
    }
    LODWORD(v6) = v21[1].monitor;
  }
  p_imageType = (int32_t *)&v21[1].klass + 1;
  return BattleServantHpShiftComponent__MakeImageSuffixAddedStr(prefix, *p_imageType, v6, v17);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BattleServantHpShiftComponent__MakeImageSuffixAddedStr(
        System_String_o *prefix,
        int32_t inputImageType,
        int32_t imageNo,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  Il2CppObject *v9; // x21
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  Il2CppObject *v13; // x0
  int32_t v15; // [xsp+8h] [xbp-38h] BYREF
  int32_t v16; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4BB784F & 1) == 0 )
  {
    sub_1C13D24(&int_TypeInfo, *(_QWORD *)&inputImageType);
    sub_1C13D24(&StringLiteral_25501/*"{0}:{1},"*/, v8);
    byte_4BB784F = 1;
  }
  v16 = inputImageType;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16, *(_QWORD *)&imageNo, method, v4);
  v15 = imageNo;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15, v10, v11, v12);
  return System_String__Format_62982384((System_String_o *)StringLiteral_25501/*"{0}:{1},"*/, (Il2CppObject *)prefix, v9, v13, 0LL);
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
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x20
  System_String_o *AssetNameByPrefixAndIconIndex; // x0
  __int64 v25; // x1
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  const MethodInfo *v32; // x2
  __int64 methodPtr_low; // x10
  bool v34; // w1
  Il2CppObject *v35; // x22
  bool v36; // w20
  System_String_o *prefixAsset; // x23
  AssetData_o *AssetStorage; // x23
  const MethodInfo *v39; // x4
  UnityEngine_GameObject_o *v40; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *Object; // x21
  Il2CppObject *Component_object; // x19
  System_Action_o *v44; // x21
  System_Nullable_int__o v46; // 0:x3.8

  v11 = index;
  if ( (byte_4BB785B & 1) == 0 )
  {
    sub_1C13D24(&Method_ActionExtensions_Call_int___, *(_QWORD *)&index);
    sub_1C13D24(&System_Action_TypeInfo, v13);
    sub_1C13D24(&Method_AssetData_GetObject_GameObject____77466800, v14);
    sub_1C13D24(&AssetManager_TypeInfo, v15);
    sub_1C13D24(&Method_BasicHelper_IndexValue_GameObject____77472256, v16);
    sub_1C13D24(&BattleServantSuperBossParamComponent_TypeInfo, v17);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___, v18);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v19);
    sub_1C13D24(&Method_BattleServantHpShiftComponent___c__DisplayClass35_0__PlayShiftEffectGeneral_b__0__, v20);
    sub_1C13D24(&BattleServantHpShiftComponent___c__DisplayClass35_0_TypeInfo, v21);
    sub_1C13D24(&StringLiteral_20301/*"hours"*/, v22);
    byte_4BB785B = 1;
  }
  v23 = sub_1C13F70(BattleServantHpShiftComponent___c__DisplayClass35_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v23, 0LL);
  if ( !v23 )
    goto LABEL_35;
  *(_QWORD *)(v23 + 16) = callBack;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v23 + 16), (int64_t)callBack, v26, v27, v28, v29, v30, v31);
  *(_DWORD *)(v23 + 24) = v11;
  *nextAnimationTime = 0.0;
  if ( this->fields.decagramNumber - 1 == v11 )
  {
    if ( !effectData )
      goto LABEL_35;
    if ( System_String__op_Equality(effectData->fields.prefixEffect, (System_String_o *)StringLiteral_20301/*"hours"*/, 0LL) )
    {
      v34 = servantParam
         && (methodPtr_low = LOBYTE(BattleServantSuperBossParamComponent_TypeInfo->vtable._0_Equals.methodPtr),
             LOBYTE(servantParam->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low)
         && servantParam->klass->_2.typeHierarchy[methodPtr_low - 1] == (Il2CppClass *)BattleServantSuperBossParamComponent_TypeInfo;
      *nextAnimationTime = BattleServantHpShiftComponent__CreateDecagramEffect(this, v34, v32);
      return 1;
    }
    v11 = *(_DWORD *)(v23 + 24);
  }
  v35 = BasicHelper__IndexValue_object_(
          (System_Object_array *)this->fields.iconList,
          v11,
          0LL,
          (const MethodInfo_2F7E034 *)Method_BasicHelper_IndexValue_GameObject____77472256);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  AssetNameByPrefixAndIconIndex = (System_String_o *)UnityEngine_Object__op_Equality(
                                                       (UnityEngine_Object_o *)v35,
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
      v46 = 0LL;
      AssetNameByPrefixAndIconIndex = BattleServantHpShiftComponent__MakeAssetNameByPrefixAndIconIndex(
                                        this,
                                        effectData->fields.prefixEffect,
                                        *(_DWORD *)(v23 + 24) + 2,
                                        v46,
                                        v39);
      if ( AssetStorage )
      {
        AssetNameByPrefixAndIconIndex = (System_String_o *)AssetData__GetObject_object__49747248(
                                                             AssetStorage,
                                                             AssetNameByPrefixAndIconIndex,
                                                             (const MethodInfo_2F71530 *)Method_AssetData_GetObject_GameObject____77466800);
        if ( v35 )
        {
          v40 = (UnityEngine_GameObject_o *)AssetNameByPrefixAndIconIndex;
          transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v35, 0LL);
          Object = (UnityEngine_Object_o *)BaseMonoBehaviour__createObject(
                                             (BaseMonoBehaviour_o *)this,
                                             v40,
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
                                 (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
          }
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
          {
            ActionExtensions__Call_int_(
              *(System_Action_T__o **)(v23 + 16),
              *(_DWORD *)(v23 + 24),
              (const MethodInfo_2EE1BD8 *)Method_ActionExtensions_Call_int___);
            return 1;
          }
          v44 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
          System_Action___ctor(
            v44,
            (Il2CppObject *)v23,
            Method_BattleServantHpShiftComponent___c__DisplayClass35_0__PlayShiftEffectGeneral_b__0__,
            0LL);
          if ( Component_object )
          {
            v36 = 1;
            ((void (__fastcall *)(Il2CppObject *, __int64, System_Action_o *, Il2CppMethodPointer))Component_object->klass->vtable[8].method)(
              Component_object,
              1LL,
              v44,
              Component_object->klass->vtable[9].methodPtr);
            return v36;
          }
        }
      }
    }
LABEL_35:
    sub_1C13F80(AssetNameByPrefixAndIconIndex, v25);
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
  __int64 v6; // x1
  __int64 v7; // x1
  System_Object_array *iconList; // x0
  signed int max_length; // w8
  int v10; // w26
  Il2CppObject *v11; // x21
  Il2CppObject *Component_object; // x0
  __int64 v13; // x1

  v3 = dispMaxPos;
  if ( (byte_4BB7854 & 1) == 0 )
  {
    sub_1C13D24(&Method_BasicHelper_IndexValue_GameObject____77472256, *(_QWORD *)&dispMaxPos);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v5);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v6);
    sub_1C13D24(&StringLiteral_1/*""*/, v7);
    byte_4BB7854 = 1;
  }
  iconList = (System_Object_array *)this->fields.iconList;
  if ( iconList )
    max_length = iconList->max_length;
  else
    max_length = 0;
  if ( v3 + 1 < max_length )
  {
    v10 = max_length - 2;
    while ( 1 )
    {
      v11 = BasicHelper__IndexValue_object_(
              iconList,
              v3 + 1,
              0LL,
              (const MethodInfo_2F7E034 *)Method_BasicHelper_IndexValue_GameObject____77472256);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Component_object = (Il2CppObject *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v11, 0LL, 0LL);
      if ( ((unsigned __int8)Component_object & 1) != 0 )
      {
        if ( !v11
          || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                                   (UnityEngine_GameObject_o *)v11,
                                   (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_UISprite___)) == 0LL )
        {
          sub_1C13F80(Component_object, v13);
        }
        UISprite__set_spriteName((UISprite_o *)Component_object, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v11, 0, 0LL);
      }
      if ( v10 == v3 )
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
  __int64 v10; // x1
  int32_t decagramNumber; // w8
  UnityEngine_Behaviour_o *shiftIconDecagramSprite; // x0
  Il2CppObject *v13; // x23
  int32_t v14; // w22
  Il2CppObject *Component_object; // x21
  const MethodInfo *v16; // x2

  if ( (byte_4BB7855 & 1) == 0 )
  {
    sub_1C13D24(&Method_BasicHelper_IndexValue_GameObject____77472256, *(_QWORD *)&index);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v9);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v10);
    byte_4BB7855 = 1;
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
      sub_1C13F80(shiftIconDecagramSprite, *(_QWORD *)&index);
    }
    v13 = BasicHelper__IndexValue_object_(
            (System_Object_array *)this->fields.iconList,
            index,
            0LL,
            (const MethodInfo_2F7E034 *)Method_BasicHelper_IndexValue_GameObject____77472256);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    shiftIconDecagramSprite = (UnityEngine_Behaviour_o *)UnityEngine_Object__op_Inequality(
                                                           (UnityEngine_Object_o *)v13,
                                                           0LL,
                                                           0LL);
    if ( ((unsigned __int8)shiftIconDecagramSprite & 1) != 0 )
    {
      if ( !v13 )
        goto LABEL_17;
      v14 = isEmpty ? 0 : index + 2;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)v13,
                           (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      shiftIconDecagramSprite = (UnityEngine_Behaviour_o *)BattleServantHpShiftComponent__getSpriteName(this, v14, v16);
      if ( !Component_object )
        goto LABEL_17;
      UISprite__set_spriteName((UISprite_o *)Component_object, (System_String_o *)shiftIconDecagramSprite, 0LL);
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v13, isActive, 0LL);
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
  int32_t decagramNumber; // w8
  struct UISprite_o *shiftIconDecagramSprite; // x0
  Il2CppObject *v10; // x20

  if ( (byte_4BB7856 & 1) == 0 )
  {
    sub_1C13D24(&Method_BasicHelper_IndexValue_GameObject____77472256, *(_QWORD *)&index);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v7);
    byte_4BB7856 = 1;
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
      sub_1C13F80(shiftIconDecagramSprite, *(_QWORD *)&index);
    }
    v10 = BasicHelper__IndexValue_object_(
            (System_Object_array *)this->fields.iconList,
            index,
            0LL,
            (const MethodInfo_2F7E034 *)Method_BasicHelper_IndexValue_GameObject____77472256);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    shiftIconDecagramSprite = (struct UISprite_o *)UnityEngine_Object__op_Inequality(
                                                     (UnityEngine_Object_o *)v10,
                                                     0LL,
                                                     0LL);
    if ( ((unsigned __int8)shiftIconDecagramSprite & 1) != 0 )
    {
      if ( !v10 )
        goto LABEL_13;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v10, isActive, 0LL);
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  struct UnityEngine_GameObject_array *iconList; // x8
  struct UnityEngine_GameObject_array **p_iconList; // x20
  int v17; // w21
  int decagramNumber; // w10
  __int64 v19; // x9
  unsigned int v20; // w22
  _BOOL4 v21; // w23
  unsigned __int64 v22; // x25
  UnityEngine_Object_o *v23; // x24
  int v24; // w8
  BattleDataDefine_c *v25; // x0
  System_String_o *ASSET_BATTLE_COMMON; // x23
  UISprite_o *shiftIconDecagramSprite; // x23
  const MethodInfo *v28; // x2
  int64_t v29; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  UIAtlas_o *atlas; // [xsp+8h] [xbp-48h] BYREF

  v4 = this;
  if ( (byte_4BB7851 & 1) == 0 )
  {
    sub_1C13D24(&AssetManager_TypeInfo, svtData);
    sub_1C13D24(&BattleDataDefine_TypeInfo, v5);
    sub_1C13D24(&UnityEngine_GameObject___TypeInfo, v6);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v7);
    this = (BattleServantHpShiftComponent_o *)sub_1C13D24(&StringLiteral_3262/*"Battle/UniqueCamera/"*/, v8);
    byte_4BB7851 = 1;
  }
  atlas = 0LL;
  if ( !svtData )
    goto LABEL_38;
  this = (BattleServantHpShiftComponent_o *)BattleServantData__GetMaxShiftIconCount(svtData, 0LL);
  p_iconList = &v4->fields.iconList;
  iconList = v4->fields.iconList;
  v17 = (int)this;
  if ( iconList )
  {
    if ( (_DWORD)this == iconList->max_length )
      return;
    decagramNumber = v4->fields.decagramNumber;
    v19 = *(_QWORD *)&iconList->max_length;
    if ( (int)this < decagramNumber )
      v20 = (unsigned int)this;
    else
      v20 = decagramNumber - 1;
    v21 = (int)this >= decagramNumber;
    if ( v20 != (_DWORD)v19 )
    {
      if ( (int)v19 >= 1 )
      {
        v22 = 0LL;
        while ( 1 )
        {
          if ( v22 >= (unsigned int)v19 )
            sub_1C13F88(this, svtData);
          v23 = (UnityEngine_Object_o *)iconList->m_Items[v22];
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          UnityEngine_Object__Destroy_70721988(v23, 0LL);
          iconList = *p_iconList;
          if ( !*p_iconList )
            break;
          LODWORD(v19) = iconList->max_length;
          if ( (__int64)++v22 >= (int)v19 )
            goto LABEL_17;
        }
LABEL_38:
        sub_1C13F80(this, svtData);
      }
LABEL_17:
      *p_iconList = 0LL;
      sub_1C13CC8((PartyOrganizationUtility_o *)&v4->fields.iconList, 0LL, v9, v10, v11, v12, v13, v14);
    }
  }
  else
  {
    v24 = v4->fields.decagramNumber;
    v21 = (int)this >= v24;
    if ( (int)this < v24 )
      v20 = (unsigned int)this;
    else
      v20 = v24 - 1;
  }
  this = (BattleServantHpShiftComponent_o *)v4->fields.shiftIconDecagramSprite;
  if ( !this )
    goto LABEL_38;
  this = (BattleServantHpShiftComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_38;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v21, 0LL);
  if ( v21 )
  {
    v25 = BattleDataDefine_TypeInfo;
    if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
      v25 = BattleDataDefine_TypeInfo;
    }
    ASSET_BATTLE_COMMON = v25->static_fields->ASSET_BATTLE_COMMON;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    if ( AssetManager__TryGetUIAtlas(&atlas, ASSET_BATTLE_COMMON, (System_String_o *)StringLiteral_3262/*"Battle/UniqueCamera/"*/, 0LL) )
    {
      this = (BattleServantHpShiftComponent_o *)v4->fields.shiftIconDecagramSprite;
      if ( !this )
        goto LABEL_38;
      UISprite__set_atlas((UISprite_o *)this, atlas, 0LL);
      shiftIconDecagramSprite = v4->fields.shiftIconDecagramSprite;
      this = (BattleServantHpShiftComponent_o *)BattleServantHpShiftComponent__getSpriteName(
                                                  v4,
                                                  v4->fields.decagramNumber + 1,
                                                  v28);
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
  if ( v17 >= 1 )
  {
    if ( !*p_iconList )
    {
      v29 = sub_1C13DCC(UnityEngine_GameObject___TypeInfo, v20);
      *p_iconList = (struct UnityEngine_GameObject_array *)v29;
      sub_1C13CC8((PartyOrganizationUtility_o *)&v4->fields.iconList, v29, v30, v31, v32, v33, v34, v35);
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

  if ( (byte_4BB7849 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_20298/*"hostNameOrAddress"*/, *(_QWORD *)&index);
    byte_4BB7849 = 1;
  }
  v7 = 0LL;
  return BattleServantHpShiftComponent__MakeAssetNameByPrefixAndIconIndex(
           this,
           (System_String_o *)StringLiteral_20298/*"hostNameOrAddress"*/,
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Int32_array *shiftDeckList; // x9
  struct UnityEngine_GameObject_array *iconList; // x8
  il2cpp_array_size_t max_length; // w11
  il2cpp_array_size_t v12; // w9
  il2cpp_array_size_t v13; // w22
  UnityEngine_Object_o *v14; // x20
  BattleDataDefine_c *v15; // x0
  System_String_o *ASSET_BATTLE_COMMON; // x20
  AssetData_o *AssetStorage; // x21
  const MethodInfo *v18; // x2
  Il2CppObject *Object_object__49747248; // x21
  struct UnityEngine_GameObject_array *v20; // x8
  UnityEngine_Transform_o *transform; // x0
  struct UnityEngine_GameObject_array *v22; // x8
  Il2CppObject *Component_object; // x21
  const MethodInfo *v24; // x2

  v4 = this;
  if ( (byte_4BB785A & 1) == 0 )
  {
    sub_1C13D24(&Method_AssetData_GetObject_GameObject____77466800, svtData);
    sub_1C13D24(&AssetManager_TypeInfo, v5);
    sub_1C13D24(&BattleDataDefine_TypeInfo, v6);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v7);
    this = (BattleServantHpShiftComponent_o *)sub_1C13D24(&UnityEngine_Object_TypeInfo, v8);
    byte_4BB785A = 1;
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
  v12 = iconList->max_length;
  v13 = max_length - svtData->fields.shiftDeckIndex;
  if ( (int)v13 >= (int)v12 )
    return;
  if ( v13 >= v12 )
    goto LABEL_30;
  v14 = (UnityEngine_Object_o *)iconList->m_Items[v13];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v14, 0LL, 0LL) )
  {
    v15 = BattleDataDefine_TypeInfo;
    if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
      v15 = BattleDataDefine_TypeInfo;
    }
    ASSET_BATTLE_COMMON = v15->static_fields->ASSET_BATTLE_COMMON;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetStorage = AssetManager__getAssetStorage(ASSET_BATTLE_COMMON, 0LL);
    this = (BattleServantHpShiftComponent_o *)BattleServantHpShiftComponent__GetBreakShiftIconEffectName(
                                                v4,
                                                v13 + 2,
                                                v18);
    if ( !AssetStorage )
      goto LABEL_29;
    Object_object__49747248 = AssetData__GetObject_object__49747248(
                                AssetStorage,
                                (System_String_o *)this,
                                (const MethodInfo_2F71530 *)Method_AssetData_GetObject_GameObject____77466800);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattleServantHpShiftComponent_o *)UnityEngine_Object__op_Inequality(
                                                (UnityEngine_Object_o *)Object_object__49747248,
                                                0LL,
                                                0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v20 = v4->fields.iconList;
      if ( !v20 )
        goto LABEL_29;
      if ( v13 >= v20->max_length )
        goto LABEL_30;
      this = (BattleServantHpShiftComponent_o *)v20->m_Items[v13];
      if ( !this )
        goto LABEL_29;
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
      this = (BattleServantHpShiftComponent_o *)BaseMonoBehaviour__createObject(
                                                  (BaseMonoBehaviour_o *)v4,
                                                  (UnityEngine_GameObject_o *)Object_object__49747248,
                                                  transform,
                                                  0LL,
                                                  0LL);
    }
    v22 = v4->fields.iconList;
    if ( !v22 )
      goto LABEL_29;
    if ( v13 < v22->max_length )
    {
      this = (BattleServantHpShiftComponent_o *)v22->m_Items[v13];
      if ( this )
      {
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)this,
                             (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        this = (BattleServantHpShiftComponent_o *)BattleServantHpShiftComponent__GetEmptyIconSpriteName(
                                                    v4,
                                                    v13 + 2,
                                                    v24);
        if ( Component_object )
        {
          UISprite__set_spriteName((UISprite_o *)Component_object, (System_String_o *)this, 0LL);
          return;
        }
      }
LABEL_29:
      sub_1C13F80(this, svtData);
    }
LABEL_30:
    sub_1C13F88(this, svtData);
  }
}


float __fastcall BattleServantHpShiftComponent__playShiftEffectBefore(
        BattleServantHpShiftComponent_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  BattleServantHpShiftComponent_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Int32_array *shiftDeckList; // x8
  int v9; // w21
  bool IsSuperBossUi; // w1
  const MethodInfo *v11; // x2
  struct UnityEngine_GameObject_array *iconList; // x8
  int max_length; // w9
  UnityEngine_Object_o *v15; // x20
  BattleDataDefine_c *v16; // x0
  System_String_o *ASSET_BATTLE_COMMON; // x20
  AssetData_o *AssetStorage; // x20
  const MethodInfo *v19; // x2
  Il2CppObject *Object_object__49747248; // x20
  struct UnityEngine_GameObject_array *v21; // x8
  UnityEngine_Transform_o *transform; // x0

  v4 = this;
  if ( (byte_4BB7859 & 1) == 0 )
  {
    sub_1C13D24(&Method_AssetData_GetObject_GameObject____77466800, svtData);
    sub_1C13D24(&AssetManager_TypeInfo, v5);
    sub_1C13D24(&BattleDataDefine_TypeInfo, v6);
    this = (BattleServantHpShiftComponent_o *)sub_1C13D24(&UnityEngine_Object_TypeInfo, v7);
    byte_4BB7859 = 1;
  }
  if ( !svtData )
    goto LABEL_26;
  shiftDeckList = svtData->fields.shiftDeckList;
  if ( !shiftDeckList )
    goto LABEL_26;
  v9 = shiftDeckList->max_length - svtData->fields.shiftDeckIndex;
  if ( v4->fields.decagramNumber - 1 == v9 )
  {
    IsSuperBossUi = BattleServantData__get_IsSuperBossUi(svtData, 0LL);
    return BattleServantHpShiftComponent__CreateDecagramEffect(v4, IsSuperBossUi, v11);
  }
  iconList = v4->fields.iconList;
  if ( iconList )
  {
    max_length = iconList->max_length;
    if ( v9 < max_length )
    {
      if ( v9 < (unsigned int)max_length )
      {
        v15 = (UnityEngine_Object_o *)iconList->m_Items[v9];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality(v15, 0LL, 0LL) )
          return 0.0;
        v16 = BattleDataDefine_TypeInfo;
        if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
          v16 = BattleDataDefine_TypeInfo;
        }
        ASSET_BATTLE_COMMON = v16->static_fields->ASSET_BATTLE_COMMON;
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        AssetStorage = AssetManager__getAssetStorage(ASSET_BATTLE_COMMON, 0LL);
        this = (BattleServantHpShiftComponent_o *)BattleServantHpShiftComponent__GetShiftBeforeEffectName(
                                                    v4,
                                                    v9 + 2,
                                                    v19);
        if ( !AssetStorage )
          goto LABEL_26;
        Object_object__49747248 = AssetData__GetObject_object__49747248(
                                    AssetStorage,
                                    (System_String_o *)this,
                                    (const MethodInfo_2F71530 *)Method_AssetData_GetObject_GameObject____77466800);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (BattleServantHpShiftComponent_o *)UnityEngine_Object__op_Inequality(
                                                    (UnityEngine_Object_o *)Object_object__49747248,
                                                    0LL,
                                                    0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
          return 0.0;
        v21 = v4->fields.iconList;
        if ( !v21 )
          goto LABEL_26;
        if ( v9 < v21->max_length )
        {
          this = (BattleServantHpShiftComponent_o *)v21->m_Items[v9];
          if ( this )
          {
            transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
            BaseMonoBehaviour__createObject(
              (BaseMonoBehaviour_o *)v4,
              (UnityEngine_GameObject_o *)Object_object__49747248,
              transform,
              0LL,
              0LL);
            return 0.0;
          }
LABEL_26:
          sub_1C13F80(this, svtData);
        }
      }
      sub_1C13F88(this, svtData);
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
  __int64 v11; // x1
  __int64 v12; // x1
  const MethodInfo *v13; // x1
  __int64 v14; // x1
  UnityEngine_GameObject_o *shiftIconClone; // x0
  Il2CppObject *Component_object; // x0
  BattleDataDefine_c *v17; // x8
  UISprite_o *v18; // x21
  System_String_o *ASSET_BATTLE_COMMON; // x22
  const MethodInfo *v20; // x2
  System_String_o *SpriteName; // x0
  const MethodInfo *v22; // x2
  const MethodInfo *v23; // x2
  int32_t MaxShiftIconPos; // w0
  const MethodInfo *v25; // x2
  UIAtlas_o *atlas; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BB7847 & 1) == 0 )
  {
    sub_1C13D24(&AssetManager_TypeInfo, svtData);
    sub_1C13D24(&BattleDataDefine_TypeInfo, v10);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v11);
    sub_1C13D24(&StringLiteral_3262/*"Battle/UniqueCamera/"*/, v12);
    byte_4BB7847 = 1;
  }
  atlas = 0LL;
  this->fields.svtData = svtData;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.svtData,
    (int64_t)svtData,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  BattleServantHpShiftComponent__ImportFromBattleCommonSettings(this, v13);
  shiftIconClone = this->fields.shiftIconClone;
  if ( !shiftIconClone )
    goto LABEL_16;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       shiftIconClone,
                       (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  v17 = BattleDataDefine_TypeInfo;
  v18 = (UISprite_o *)Component_object;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v17 = BattleDataDefine_TypeInfo;
  }
  ASSET_BATTLE_COMMON = v17->static_fields->ASSET_BATTLE_COMMON;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  shiftIconClone = (UnityEngine_GameObject_o *)AssetManager__TryGetUIAtlas(
                                                 &atlas,
                                                 ASSET_BATTLE_COMMON,
                                                 (System_String_o *)StringLiteral_3262/*"Battle/UniqueCamera/"*/,
                                                 0LL);
  if ( ((unsigned __int8)shiftIconClone & 1) != 0 )
  {
    if ( !v18 )
      goto LABEL_16;
    UISprite__set_atlas(v18, atlas, 0LL);
    SpriteName = BattleServantHpShiftComponent__getSpriteName(this, 0, v20);
    UISprite__set_spriteName(v18, SpriteName, 0LL);
    this->fields.defaultDepth = v18->fields.mDepth;
  }
  shiftIconClone = this->fields.shiftIconClone;
  if ( !shiftIconClone
    || (UnityEngine_GameObject__SetActive(shiftIconClone, 0, 0LL),
        BattleServantHpShiftComponent__createIconList(this, svtData, v22),
        BattleServantHpShiftComponent__setValue(this, svtData, v23),
        !svtData) )
  {
LABEL_16:
    sub_1C13F80(shiftIconClone, v14);
  }
  if ( svtData->fields.lowLimitShift >= 1 )
  {
    MaxShiftIconPos = BattleServantData__GetMaxShiftIconPos(svtData, 0LL);
    BattleServantHpShiftComponent__UpdateHideInvalidIcon(this, MaxShiftIconPos, v25);
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
  if ( (byte_4BB7853 & 1) == 0 )
  {
    this = (BattleServantHpShiftComponent_o *)sub_1C13D24(
                                                &Method_UnityEngine_GameObject_GetComponent_UISprite___,
                                                svtData);
    byte_4BB7853 = 1;
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
      sub_1C13F80(this, svtData);
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
                             (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
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
            sub_1C13F88(this, svtData);
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

  if ( (byte_4BB785C & 1) == 0 )
  {
    sub_1C13D24(&BattleDataDefine_TypeInfo, method);
    byte_4BB785C = 1;
  }
  v9 = BattleDataDefine_TypeInfo;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v9 = BattleDataDefine_TypeInfo;
  }
  ASSET_BATTLE_COMMON = v9->static_fields->ASSET_BATTLE_COMMON;
  this->fields.prefixAsset = ASSET_BATTLE_COMMON;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields, (int64_t)ASSET_BATTLE_COMMON, v2, v3, v4, v5, v6, v7);
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
    sub_1C13F80(this, 0LL);
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
    sub_1C13F80(this, 0LL);
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
  if ( (byte_4BB785D & 1) == 0 )
  {
    sub_1C13D24(&Method_ActionExtensions_Call_int___, method);
    byte_4BB785D = 1;
  }
  ActionExtensions__Call_int_(
    (System_Action_T__o *)this->fields.callBack,
    this->fields.index,
    (const MethodInfo_2EE1BD8 *)Method_ActionExtensions_Call_int___);
}