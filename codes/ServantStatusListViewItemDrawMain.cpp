void __fastcall ServantStatusListViewItemDrawMain___ctor(
        ServantStatusListViewItemDrawMain_o *this,
        const MethodInfo *method)
{
  this->fields.transformNameAddHeight = 34;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ServantStatusListViewItemDrawMain__AddAreaHeight(
        ServantStatusListViewItemDrawMain_o *this,
        int32_t sizeY,
        const MethodInfo *method)
{
  UIWidget_o *baseSprite; // x0

  baseSprite = (UIWidget_o *)this->fields.baseSprite;
  if ( !baseSprite )
    sub_1BCB254(0LL, sizeY);
  UIWidget__set_height(baseSprite, baseSprite->fields.mHeight + sizeY, 0LL);
}


void __fastcall ServantStatusListViewItemDrawMain__AdjustBaseUiPosY(
        ServantStatusListViewItemDrawMain_o *this,
        const MethodInfo *method)
{
  struct UISprite_o *baseSprite; // x8
  int32_t mHeight; // w20
  int32_t baseSpriteHeightBase; // w21
  float v6; // s0
  float v7; // s1
  float v8; // s0

  baseSprite = this->fields.baseSprite;
  if ( !baseSprite )
    sub_1BCB254(this, method);
  mHeight = baseSprite->fields.mHeight;
  baseSpriteHeightBase = this->fields.baseSpriteHeightBase;
  if ( !byte_4B1684F )
  {
    sub_1BCAFF8(&System_Math_TypeInfo, method);
    byte_4B1684F = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v6 = (float)(mHeight - baseSpriteHeightBase) * 0.5;
  v7 = ceilf(v6);
  v8 = (float)(int)vcvtps_s32_f32(v6);
  if ( v7 == INFINITY )
    v8 = -2147500000.0;
  GameObjectExtensions__SetLocalPositionY(this->fields.baseUi, v8, 0LL);
}


void __fastcall ServantStatusListViewItemDrawMain__AdjustLayoutByInsertGrandEnforcementInfo(
        ServantStatusListViewItemDrawMain_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  ServantStatusListViewItemDrawMain___c_c *v7; // x0
  System_Collections_Generic_IEnumerable_T__o *transformsShiftYByInsertGrandUi; // x19
  System_Action_object__o *_9__57_0; // x20
  Il2CppObject *v10; // x21
  struct ServantStatusListViewItemDrawMain___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4B193EF & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_Transform__TypeInfo, method);
    sub_1BCAFF8(&Method_BasicHelper_ForEach_Transform___, v4);
    sub_1BCAFF8(&Method_ServantStatusListViewItemDrawMain___c__AdjustLayoutByInsertGrandEnforcementInfo_b__57_0__, v5);
    sub_1BCAFF8(&ServantStatusListViewItemDrawMain___c_TypeInfo, v6);
    byte_4B193EF = 1;
  }
  ServantStatusListViewItemDrawMain__AddAreaHeight(this, 25, v2);
  v7 = ServantStatusListViewItemDrawMain___c_TypeInfo;
  transformsShiftYByInsertGrandUi = (System_Collections_Generic_IEnumerable_T__o *)this->fields.transformsShiftYByInsertGrandUi;
  if ( !ServantStatusListViewItemDrawMain___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawMain___c_TypeInfo);
    v7 = ServantStatusListViewItemDrawMain___c_TypeInfo;
  }
  _9__57_0 = (System_Action_object__o *)v7->static_fields->__9__57_0;
  if ( !_9__57_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = ServantStatusListViewItemDrawMain___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v7->static_fields->__9;
    _9__57_0 = (System_Action_object__o *)sub_1BCB244(System_Action_Transform__TypeInfo);
    System_Action_object____ctor(
      _9__57_0,
      v10,
      Method_ServantStatusListViewItemDrawMain___c__AdjustLayoutByInsertGrandEnforcementInfo_b__57_0__,
      0LL);
    static_fields = ServantStatusListViewItemDrawMain___c_TypeInfo->static_fields;
    static_fields->__9__57_0 = (struct System_Action_Transform__o *)_9__57_0;
    sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__57_0, (int32_t)_9__57_0, v12, v13);
  }
  BasicHelper__ForEach_object_(
    transformsShiftYByInsertGrandUi,
    (System_Action_T__o *)_9__57_0,
    (const MethodInfo_3006B3C *)Method_BasicHelper_ForEach_Transform___);
}


void __fastcall ServantStatusListViewItemDrawMain__Awake(
        ServantStatusListViewItemDrawMain_o *this,
        const MethodInfo *method)
{
  ServantStatusListViewItemDrawMain_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct UISprite_o *baseSprite; // x8
  ServantStatusListViewItemDrawMain_o *v14; // x20
  __int64 v15; // x2
  const MethodInfo *v16; // x3
  ServantStatusListViewItemDrawMain_o *v17; // x21
  const MethodInfo *v18; // x3
  ServantStatusListViewItemDrawMain_o *v19; // x21
  const MethodInfo *v20; // x3
  ServantStatusListViewItemDrawMain_o *v21; // x21
  long double inited; // q0
  System_Collections_Generic_IEnumerable_TSource__o *transformsShiftYByInsertGrandUi; // x1
  _QWORD *v24; // x21
  __int64 v25; // x8
  __int64 v26; // x0
  __int64 v27; // x0
  System_Collections_Generic_IEnumerable_T__o *v28; // x0
  System_Collections_Generic_IEnumerable_T__o *v29; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0
  ServantStatusListViewItemDrawMain___c_c *v31; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x20
  System_Func_object__object__o *_9__53_0; // x21
  Il2CppObject *v34; // x22
  struct ServantStatusListViewItemDrawMain___c_StaticFields *static_fields; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  System_Func_T__TResult__o *_9__53_1; // x22
  Il2CppObject *v39; // x23
  struct ServantStatusListViewItemDrawMain___c_StaticFields *v40; // x0
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  System_Collections_Generic_Dictionary_TKey__TElement__o *v43; // x1
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  __int64 v46; // x0

  v2 = this;
  if ( (byte_4B193EC & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Array_Empty_Transform___, method);
    sub_1BCAFF8(&Method_BasicHelper_ExcludeNull_Transform___, v3);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Concat_Transform___, v4);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Distinct_Transform___, v5);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_ToDictionary_Transform__Transform__float___, v6);
    sub_1BCAFF8(&System_Func_Transform__float__TypeInfo, v7);
    sub_1BCAFF8(&System_Func_Transform__Transform__TypeInfo, v8);
    sub_1BCAFF8(&UnityEngine_Transform___TypeInfo, v9);
    sub_1BCAFF8(&Method_ServantStatusListViewItemDrawMain___c__Awake_b__53_0__, v10);
    sub_1BCAFF8(&Method_ServantStatusListViewItemDrawMain___c__Awake_b__53_1__, v11);
    this = (ServantStatusListViewItemDrawMain_o *)sub_1BCAFF8(&ServantStatusListViewItemDrawMain___c_TypeInfo, v12);
    byte_4B193EC = 1;
  }
  baseSprite = v2->fields.baseSprite;
  if ( !baseSprite )
    goto LABEL_40;
  v2->fields.baseSpriteHeightBase = baseSprite->fields.mHeight;
  this = (ServantStatusListViewItemDrawMain_o *)sub_1BCB0A0(UnityEngine_Transform___TypeInfo, 3LL);
  if ( !v2->fields.baseUi )
    goto LABEL_40;
  v14 = this;
  this = (ServantStatusListViewItemDrawMain_o *)UnityEngine_GameObject__get_transform(v2->fields.baseUi, 0LL);
  if ( !v14 )
    goto LABEL_40;
  v17 = this;
  if ( this )
  {
    this = (ServantStatusListViewItemDrawMain_o *)sub_1BCB134(this, v14->klass->_1.element_class);
    if ( !this )
      goto LABEL_42;
  }
  if ( !LODWORD(v14->fields.m_CancellationTokenSource) )
    goto LABEL_41;
  *(_QWORD *)&v14->fields.dispMode = v17;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v14->fields.dispMode, (int32_t)v17, v15, v16);
  this = (ServantStatusListViewItemDrawMain_o *)v2->fields.mainContentsRoot;
  if ( !this )
    goto LABEL_40;
  this = (ServantStatusListViewItemDrawMain_o *)UnityEngine_GameObject__get_transform(
                                                  (UnityEngine_GameObject_o *)this,
                                                  0LL);
  v19 = this;
  if ( this )
  {
    this = (ServantStatusListViewItemDrawMain_o *)sub_1BCB134(this, v14->klass->_1.element_class);
    if ( !this )
    {
LABEL_42:
      v46 = sub_1BCB278();
      sub_1BCB120(v46, 0LL);
    }
  }
  if ( LODWORD(v14->fields.m_CancellationTokenSource) <= 1 )
    goto LABEL_41;
  v14->fields.baseButton = (struct UICommonButton_o *)v19;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v14->fields.baseButton, (int32_t)v19, v15, v18);
  this = (ServantStatusListViewItemDrawMain_o *)v2->fields.combineRoot;
  if ( !this )
LABEL_40:
    sub_1BCB254(this, method);
  this = (ServantStatusListViewItemDrawMain_o *)UnityEngine_GameObject__get_transform(
                                                  (UnityEngine_GameObject_o *)this,
                                                  0LL);
  v21 = this;
  if ( this )
  {
    this = (ServantStatusListViewItemDrawMain_o *)sub_1BCB134(this, v14->klass->_1.element_class);
    if ( !this )
      goto LABEL_42;
  }
  if ( LODWORD(v14->fields.m_CancellationTokenSource) <= 2 )
LABEL_41:
    sub_1BCB25C(this, method, v15);
  v14->fields.servantTexture = (struct UITexture_o *)v21;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v14->fields.servantTexture, (int32_t)v21, v15, v20);
  transformsShiftYByInsertGrandUi = (System_Collections_Generic_IEnumerable_TSource__o *)v2->fields.transformsShiftYByInsertGrandUi;
  if ( !transformsShiftYByInsertGrandUi )
  {
    v24 = Method_System_Array_Empty_Transform___;
    v25 = *((_QWORD *)Method_System_Array_Empty_Transform___ + 7);
    if ( !v25 )
    {
      sub_1C1B4B8(Method_System_Array_Empty_Transform___);
      v25 = v24[7];
    }
    v26 = *(_QWORD *)(v25 + 16);
    if ( (*(_BYTE *)(v26 + 309) & 1) == 0 )
      v26 = sub_1C1B45C(inited);
    if ( !*(_DWORD *)(v26 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v26);
    v27 = *(_QWORD *)(v24[7] + 16LL);
    if ( (*(_BYTE *)(v27 + 309) & 1) == 0 )
      v27 = sub_1C1B45C(inited);
    transformsShiftYByInsertGrandUi = **(System_Collections_Generic_IEnumerable_TSource__o ***)(v27 + 184);
  }
  v28 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Concat_object_(
                                                         (System_Collections_Generic_IEnumerable_TSource__o *)v14,
                                                         transformsShiftYByInsertGrandUi,
                                                         (const MethodInfo_30334D4 *)Method_System_Linq_Enumerable_Concat_Transform___);
  v29 = BasicHelper__ExcludeNull_object_(v28, (const MethodInfo_3004870 *)Method_BasicHelper_ExcludeNull_Transform___);
  v30 = System_Linq_Enumerable__Distinct_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v29,
          (const MethodInfo_3039D70 *)Method_System_Linq_Enumerable_Distinct_Transform___);
  v31 = ServantStatusListViewItemDrawMain___c_TypeInfo;
  v32 = v30;
  if ( !ServantStatusListViewItemDrawMain___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawMain___c_TypeInfo);
    v31 = ServantStatusListViewItemDrawMain___c_TypeInfo;
  }
  _9__53_0 = (System_Func_object__object__o *)v31->static_fields->__9__53_0;
  if ( !_9__53_0 )
  {
    if ( !v31->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v31);
      v31 = ServantStatusListViewItemDrawMain___c_TypeInfo;
    }
    v34 = (Il2CppObject *)v31->static_fields->__9;
    _9__53_0 = (System_Func_object__object__o *)sub_1BCB244(System_Func_Transform__Transform__TypeInfo);
    System_Func_object__object____ctor(
      _9__53_0,
      v34,
      Method_ServantStatusListViewItemDrawMain___c__Awake_b__53_0__,
      0LL);
    static_fields = ServantStatusListViewItemDrawMain___c_TypeInfo->static_fields;
    static_fields->__9__53_0 = (struct System_Func_Transform__Transform__o *)_9__53_0;
    sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__53_0, (int32_t)_9__53_0, v36, v37);
    v31 = ServantStatusListViewItemDrawMain___c_TypeInfo;
  }
  if ( !v31->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v31);
    v31 = ServantStatusListViewItemDrawMain___c_TypeInfo;
  }
  _9__53_1 = (System_Func_T__TResult__o *)v31->static_fields->__9__53_1;
  if ( !_9__53_1 )
  {
    if ( !v31->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v31);
      v31 = ServantStatusListViewItemDrawMain___c_TypeInfo;
    }
    v39 = (Il2CppObject *)v31->static_fields->__9;
    _9__53_1 = (System_Func_T__TResult__o *)sub_1BCB244(System_Func_Transform__float__TypeInfo);
    System_Func_object__float____ctor(_9__53_1, v39, Method_ServantStatusListViewItemDrawMain___c__Awake_b__53_1__, 0LL);
    v40 = ServantStatusListViewItemDrawMain___c_TypeInfo->static_fields;
    v40->__9__53_1 = (struct System_Func_Transform__float__o *)_9__53_1;
    sub_1BCAF9C((CGThumbnailListItem_o *)&v40->__9__53_1, (int32_t)_9__53_1, v41, v42);
  }
  v43 = System_Linq_Enumerable__ToDictionary_object__object__float_(
          v32,
          (System_Func_TSource__TKey__o *)_9__53_0,
          (System_Func_TSource__TElement__o *)_9__53_1,
          (const MethodInfo_3057CD8 *)Method_System_Linq_Enumerable_ToDictionary_Transform__Transform__float___);
  v2->fields.dynamicTransformsToOriginalPosYMap = (struct System_Collections_Generic_Dictionary_Transform__float__o *)v43;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v2->fields.dynamicTransformsToOriginalPosYMap, (int32_t)v43, v44, v45);
}


int32_t __fastcall ServantStatusListViewItemDrawMain__GetKind(
        ServantStatusListViewItemDrawMain_o *this,
        const MethodInfo *method)
{
  return 1;
}


void __fastcall ServantStatusListViewItemDrawMain__GetServantIdAndLimitCount(
        ServantStatusListViewItemDrawMain_o *this,
        int32_t *svtId,
        int32_t *limitCount,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  struct ServantEntity_o *TransformedServant_k__BackingField; // x8
  int32_t TransformedServantDispLimitCount_k__BackingField; // w20
  int32_t limitMax; // w21
  int32_t ServantLimitCountSealAfter; // w0
  int32_t ConvertOverwritePortraitLimitCount; // w21

  if ( (byte_4B193F0 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, svtId);
    sub_1BCAFF8(&ImageLimitCount_TypeInfo, v8);
    this = (ServantStatusListViewItemDrawMain_o *)sub_1BCAFF8(
                                                    &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                    v9);
    byte_4B193F0 = 1;
  }
  if ( !item )
    goto LABEL_15;
  if ( !item->fields._IsTransformed_k__BackingField )
  {
    *svtId = ServantStatusListViewItem__get_SvtId(item, 0LL);
    ConvertOverwritePortraitLimitCount = ServantStatusListViewItem__get_ConvertOverwritePortraitLimitCount(item, 0LL);
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    *limitCount = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(ConvertOverwritePortraitLimitCount, 0LL);
    this = (ServantStatusListViewItemDrawMain_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (ServantStatusListViewItemDrawMain_o *)DataManager__GetMasterData_object_(
                                                      (DataManager_o *)this,
                                                      (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      if ( this )
      {
        ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                       (ServantLimitImageMaster_o *)this,
                                       *svtId,
                                       *limitCount,
                                       0LL);
        goto LABEL_14;
      }
    }
LABEL_15:
    sub_1BCB254(this, svtId);
  }
  *svtId = item->fields._TransformedSvtId_k__BackingField;
  TransformedServant_k__BackingField = item->fields._TransformedServant_k__BackingField;
  if ( !TransformedServant_k__BackingField )
    goto LABEL_15;
  TransformedServantDispLimitCount_k__BackingField = item->fields._TransformedServantDispLimitCount_k__BackingField;
  limitMax = TransformedServant_k__BackingField->fields.limitMax;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  ServantLimitCountSealAfter = ImageLimitCount__GetLimitCountByDispLimit(
                                 TransformedServantDispLimitCount_k__BackingField,
                                 limitMax,
                                 0LL);
LABEL_14:
  *limitCount = ServantLimitCountSealAfter;
}


void __fastcall ServantStatusListViewItemDrawMain__ModifyPortrait(
        ServantStatusListViewItemDrawMain_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  ServantStatusListViewItemDrawMain_o *v5; // x19
  UITexture_o *servantTexture; // x21
  int32_t v7; // w19
  int32_t v8; // w20
  int32_t limitCount[2]; // [xsp+8h] [xbp-28h] BYREF

  v5 = this;
  if ( (byte_4B193F2 & 1) == 0 )
  {
    this = (ServantStatusListViewItemDrawMain_o *)sub_1BCAFF8(&ServantAssetLoadManager_TypeInfo, item);
    byte_4B193F2 = 1;
  }
  *(_QWORD *)limitCount = 0LL;
  if ( v5->fields.isStart )
  {
    ServantStatusListViewItemDrawMain__GetServantIdAndLimitCount(this, &limitCount[1], limitCount, item, v3);
    servantTexture = v5->fields.servantTexture;
    v8 = limitCount[0];
    v7 = limitCount[1];
    if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    ServantAssetLoadManager__loadStatusFace(servantTexture, v7, v8, 0LL);
  }
}


void __fastcall ServantStatusListViewItemDrawMain__ModifyRandomLimitCountSetting(
        ServantStatusListViewItemDrawMain_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  __int64 v6; // x1
  ServantStatusListViewItemDrawMain_o *v7; // x0
  UITexture_o *servantTexture; // x21
  int32_t v9; // w19
  int32_t v10; // w20
  int32_t limitCount[2]; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B193F3 & 1) == 0 )
  {
    sub_1BCAFF8(&RandomLimitCountManager_TypeInfo, item);
    sub_1BCAFF8(&ServantAssetLoadManager_TypeInfo, v6);
    byte_4B193F3 = 1;
  }
  *(_QWORD *)limitCount = 0LL;
  if ( this->fields.isStart )
  {
    if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    if ( !byte_4B1825A )
    {
      sub_1BCAFF8(&RandomLimitCountManager_TypeInfo, item);
      byte_4B1825A = 1;
    }
    v7 = (ServantStatusListViewItemDrawMain_o *)RandomLimitCountManager_TypeInfo;
    if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
      v7 = (ServantStatusListViewItemDrawMain_o *)RandomLimitCountManager_TypeInfo;
    }
    if ( LOBYTE(v7->fields.friendshipGauge->monitor) )
    {
      ServantStatusListViewItemDrawMain__GetServantIdAndLimitCount(v7, &limitCount[1], limitCount, item, v3);
      servantTexture = this->fields.servantTexture;
      v10 = limitCount[0];
      v9 = limitCount[1];
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      ServantAssetLoadManager__loadStatusFace(servantTexture, v9, v10, 0LL);
    }
  }
}


void __fastcall ServantStatusListViewItemDrawMain__ModifyStatus(
        ServantStatusListViewItemDrawMain_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  ServantStatusListViewItemDrawMain_o *v4; // x19
  ServantStatusListViewItemDrawMain_o *v5; // x0
  const MethodInfo *v6; // x4
  UITexture_o *servantTexture; // x21
  int32_t v8; // w19
  int32_t v9; // w20
  int32_t limitCount; // [xsp+8h] [xbp-28h] BYREF
  int32_t svtId; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_4B193F1 & 1) == 0 )
  {
    this = (ServantStatusListViewItemDrawMain_o *)sub_1BCAFF8(&ServantAssetLoadManager_TypeInfo, item);
    byte_4B193F1 = 1;
  }
  limitCount = 0;
  if ( !item )
    sub_1BCB254(this, item);
  v5 = (ServantStatusListViewItemDrawMain_o *)ServantStatusListViewItem__get_SvtId(item, 0LL);
  svtId = (int)v5;
  if ( (int)v5 >= 1 )
  {
    v4->fields.isStart = 1;
    ServantStatusListViewItemDrawMain__GetServantIdAndLimitCount(v5, &svtId, &limitCount, item, v6);
    servantTexture = v4->fields.servantTexture;
    v9 = limitCount;
    v8 = svtId;
    if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    ServantAssetLoadManager__loadStatusFace(servantTexture, v8, v9, 0LL);
  }
}


void __fastcall ServantStatusListViewItemDrawMain__OnClickUnSealedQuestTransitionButton(
        ServantStatusListViewItemDrawMain_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  int32_t questId; // w8
  UnityEngine_GameObject_o *inputMessageObject; // x19
  Il2CppObject *v9; // x0
  __int64 v10; // x1
  int32_t v11; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4B193F4 & 1) == 0 )
  {
    sub_1BCAFF8(&int_TypeInfo, method);
    sub_1BCAFF8(&StringLiteral_9801/*"OnClickUnSealedQuestTransition"*/, v6);
    byte_4B193F4 = 1;
  }
  questId = this->fields.questId;
  if ( questId )
  {
    inputMessageObject = this->fields.inputMessageObject;
    v11 = questId;
    v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11, v2, v3, v4);
    if ( !inputMessageObject )
      sub_1BCB254(v9, v10);
    UnityEngine_GameObject__SendMessage_70117864(inputMessageObject, (System_String_o *)StringLiteral_9801/*"OnClickUnSealedQuestTransition"*/, v9, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItemDrawMain__ResizeCollider(
        ServantStatusListViewItemDrawMain_o *this,
        const MethodInfo *method)
{
  UnityEngine_BoxCollider_o *baseCollider; // x0
  int v4; // s0
  struct UISprite_o *baseSprite; // x8
  float mHeight; // s1

  baseCollider = this->fields.baseCollider;
  if ( !baseCollider
    || (*(UnityEngine_Vector3_o *)&v4 = UnityEngine_BoxCollider__get_size(baseCollider, 0LL),
        (baseSprite = this->fields.baseSprite) == 0LL)
    || (baseCollider = this->fields.baseCollider) == 0LL )
  {
    sub_1BCB254(baseCollider, method);
  }
  mHeight = (float)baseSprite->fields.mHeight;
  UnityEngine_BoxCollider__set_size(baseCollider, *(UnityEngine_Vector3_o *)&v4, 0LL);
}


void __fastcall ServantStatusListViewItemDrawMain__SetBaseView(
        ServantStatusListViewItemDrawMain_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  ServantStatusListViewItemDrawMain___c_c *v6; // x0
  System_Collections_Generic_IEnumerable_T__o *dynamicTransformsToOriginalPosYMap; // x20
  System_Action_T__o *_9__55_0; // x21
  Il2CppObject *v9; // x22
  struct ServantStatusListViewItemDrawMain___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  __int64 v13; // x1
  UIWidget_o *baseSprite; // x0
  const MethodInfo *v15; // x1

  if ( (byte_4B193ED & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_KeyValuePair_Transform__float___TypeInfo, method);
    sub_1BCAFF8(&Method_BasicHelper_ForEach_KeyValuePair_Transform__float____, v3);
    sub_1BCAFF8(&Method_ServantStatusListViewItemDrawMain___c__SetBaseView_b__55_0__, v4);
    sub_1BCAFF8(&ServantStatusListViewItemDrawMain___c_TypeInfo, v5);
    byte_4B193ED = 1;
  }
  v6 = ServantStatusListViewItemDrawMain___c_TypeInfo;
  dynamicTransformsToOriginalPosYMap = (System_Collections_Generic_IEnumerable_T__o *)this->fields.dynamicTransformsToOriginalPosYMap;
  if ( !ServantStatusListViewItemDrawMain___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawMain___c_TypeInfo);
    v6 = ServantStatusListViewItemDrawMain___c_TypeInfo;
  }
  _9__55_0 = (System_Action_T__o *)v6->static_fields->__9__55_0;
  if ( !_9__55_0 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = ServantStatusListViewItemDrawMain___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v6->static_fields->__9;
    _9__55_0 = (System_Action_T__o *)sub_1BCB244(System_Action_KeyValuePair_Transform__float___TypeInfo);
    System_Action_KeyValuePair_object__float_____ctor(
      _9__55_0,
      v9,
      Method_ServantStatusListViewItemDrawMain___c__SetBaseView_b__55_0__,
      0LL);
    static_fields = ServantStatusListViewItemDrawMain___c_TypeInfo->static_fields;
    static_fields->__9__55_0 = (struct System_Action_KeyValuePair_Transform__float___o *)_9__55_0;
    sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__55_0, (int32_t)_9__55_0, v11, v12);
  }
  BasicHelper__ForEach_KeyValuePair_object__float__(
    dynamicTransformsToOriginalPosYMap,
    _9__55_0,
    (const MethodInfo_3005C00 *)Method_BasicHelper_ForEach_KeyValuePair_Transform__float____);
  baseSprite = (UIWidget_o *)this->fields.baseSprite;
  if ( !baseSprite )
    sub_1BCB254(0LL, v13);
  UIWidget__set_height(baseSprite, this->fields.baseSpriteHeightBase, 0LL);
  ServantStatusListViewItemDrawMain__ResizeCollider(this, v15);
}


void __fastcall ServantStatusListViewItemDrawMain__SetItem(
        ServantStatusListViewItemDrawMain_o *this,
        ServantStatusListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  UIExtrusionLabel_o *levelLabel; // x21
  System_String_o *svtEntity; // x0
  __int64 v17; // x1
  UILabel_o *maxLevelLabel; // x21
  UILabel_o *costLabel; // x21
  bool IsStatusUp; // w0
  UIIconLabel_o *attackIconLabel; // x21
  bool v22; // w23
  int32_t Atk; // w22
  UIIconLabel_o *hpIconLabel; // x21
  int v25; // w23
  UIIconLabel_o *v26; // x21
  int32_t Hp; // w22
  int v28; // w23
  int32_t AdjustAtk; // w0
  UIIconLabel_o *reinforceAttackIconLabel; // x21
  int32_t v31; // w24
  int v32; // w22
  BalanceConfig_c *v33; // x8
  int32_t AdjustHp; // w0
  UIIconLabel_o *reinforceHpIconLabel; // x21
  int32_t v36; // w24
  BalanceConfig_c *v37; // x8
  int v38; // w22
  UnityEngine_Object_o *addedHpByGrandIconLabel; // x21
  UnityEngine_Object_o *addedAtkByGrandIconLabel; // x21
  UIIconLabel_o *v41; // x21
  UIIconLabel_o *v42; // x21
  UILabel_o *lateExpLabel; // x21
  int32_t v44; // w22
  ServantStatusLimitCountGauge_o *limitCountGauge; // x21
  struct ServantEntity_o *v46; // x8
  UnityEngine_Object_o *tdStrengthStatusSprite; // x21
  UISprite_o *v48; // x21
  __int64 v49; // x2
  SkillInfo_array *v50; // x8
  il2cpp_array_size_t v51; // w25
  unsigned __int64 v52; // x26
  __int64 v53; // x27
  int *v54; // x22
  int32_t v55; // w21
  int32_t IconCnt; // w21
  int v57; // w22
  int i; // w29
  struct UISprite_array *skillStrengthStatusLabelList; // x8
  UISprite_o *v60; // x23
  __int64 v61; // x9
  struct UISprite_array *v62; // x8
  signed int max_length; // w21
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x21
  UnityEngine_GameObject_o *gameObject; // x21
  UnityEngine_Object_o *baseButton; // x21
  UserServantEntity_o *userSvtEntity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x28
  bool IsHeroine; // w0
  int32_t v70; // w9
  bool v71; // w23
  int32_t v72; // w8
  _BOOL4 v73; // w21
  _BOOL4 v74; // w22
  int v75; // w29
  _BOOL4 v76; // w23
  _BOOL4 v77; // w24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v78; // x8
  ServantLimitImageMaster_o *v79; // x25
  __int64 v80; // x26
  __int64 v81; // x27
  int32_t v82; // w26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v83; // x8
  __int64 v84; // x26
  __int64 v85; // x27
  int32_t v86; // w26
  int32_t v87; // w0
  int32_t ServantLimitCountSealedQuestOpen; // w0
  _BOOL4 CanMoveCombine_k__BackingField; // w8
  _BOOL4 v90; // w25
  UnityEngine_GameObject_o *reinforceObject; // x0
  float v92; // s0
  UnityEngine_GameObject_o *v93; // x0
  int v94; // w8
  UnityEngine_GameObject_o *limitCountUpObject; // x0
  float v96; // s0
  int v97; // s8
  float v98; // s0
  UnityEngine_GameObject_o **p_levelExceedObject; // x8
  const MethodInfo *v100; // x2
  _BOOL4 IsTransformServant_k__BackingField; // w21
  UILabel_o *transformNameLabel; // x21
  const MethodInfo *v103; // x2
  const MethodInfo *v104; // x1
  const MethodInfo *v105; // x1
  int32_t maxFriendshipRank[2]; // [xsp+20h] [xbp-B0h] BYREF
  __int64 fraction; // [xsp+28h] [xbp-A8h] BYREF
  int32_t max[2]; // [xsp+30h] [xbp-A0h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+38h] [xbp-98h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+40h] [xbp-90h] BYREF
  __int64 barExp; // [xsp+48h] [xbp-88h] BYREF
  int32_t exp[2]; // [xsp+50h] [xbp-80h] BYREF
  __int64 secondMaxAdjustAtk; // [xsp+58h] [xbp-78h] BYREF
  int32_t maxAjustAtk[2]; // [xsp+68h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v115; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v116; // 0:x0.16

  if ( (byte_4B193EE & 1) == 0 )
  {
    sub_1BCAFF8(&BalanceConfig_TypeInfo, item);
    sub_1BCAFF8(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v7);
    sub_1BCAFF8(&DataManager_TypeInfo, v8);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v9);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v10);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1BCAFF8(&ServantSkillStrengthStatus_TypeInfo, v12);
    sub_1BCAFF8(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v13);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v14);
    byte_4B193EE = 1;
  }
  *(_QWORD *)maxAjustAtk = 0LL;
  *(_QWORD *)exp = 0LL;
  secondMaxAdjustAtk = 0LL;
  tdInfo = 0LL;
  barExp = 0LL;
  *(_QWORD *)max = 0LL;
  skillInfoList = 0LL;
  *(_QWORD *)maxFriendshipRank = 0LL;
  fraction = 0LL;
  this->fields.dispMode = mode;
  if ( item && mode )
  {
    ServantStatusListViewItemDrawMain__SetBaseView(this, (const MethodInfo *)item);
    levelLabel = this->fields.levelLabel;
    exp[1] = ServantStatusListViewItem__get_Level(item, 0LL);
    svtEntity = System_Int32__ToString((int32_t)&exp[1], 0LL);
    if ( !levelLabel )
      goto LABEL_236;
    UIExtrusionLabel__set_text(levelLabel, svtEntity, 0LL);
    maxLevelLabel = this->fields.maxLevelLabel;
    exp[1] = ServantStatusListViewItem__get_MaxLevel(item, 0LL);
    svtEntity = System_Int32__ToString((int32_t)&exp[1], 0LL);
    if ( !maxLevelLabel )
      goto LABEL_236;
    UILabel__set_text(maxLevelLabel, svtEntity, 0LL);
    costLabel = this->fields.costLabel;
    exp[1] = ServantStatusListViewItem__get_Cost(item, 0LL);
    svtEntity = System_Int32__ToString((int32_t)&exp[1], 0LL);
    if ( !costLabel )
      goto LABEL_236;
    UILabel__set_text(costLabel, svtEntity, 0LL);
    svtEntity = (System_String_o *)item->fields.svtEntity;
    if ( !svtEntity )
      goto LABEL_236;
    IsStatusUp = ServantEntity__get_IsStatusUp((ServantEntity_o *)svtEntity, 0LL);
    attackIconLabel = this->fields.attackIconLabel;
    v22 = IsStatusUp;
    Atk = ServantStatusListViewItem__get_Atk(item, 0LL);
    if ( v22 )
    {
      svtEntity = (System_String_o *)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      if ( !attackIconLabel )
        goto LABEL_236;
      UIIconLabel__Set_40290232(
        attackIconLabel,
        39,
        BalanceConfig_TypeInfo->static_fields->StatusUpAdjustAtk * Atk,
        0,
        0,
        0LL,
        0,
        0,
        0,
        0,
        0LL);
      hpIconLabel = this->fields.hpIconLabel;
      svtEntity = (System_String_o *)ServantStatusListViewItem__get_Hp(item, 0LL);
      if ( !hpIconLabel )
        goto LABEL_236;
      UIIconLabel__Set_40290232(
        hpIconLabel,
        38,
        BalanceConfig_TypeInfo->static_fields->StatusUpAdjustHp * (_DWORD)svtEntity,
        0,
        0,
        0LL,
        0,
        0,
        0,
        0,
        0LL);
    }
    else
    {
      svtEntity = (System_String_o *)ServantStatusListViewItem__get_AdjustAtk(item, 0LL);
      if ( !item->fields._GrandInfo_k__BackingField )
        goto LABEL_236;
      v25 = (int)svtEntity;
      svtEntity = (System_String_o *)UserServantGrandInfo__get_AddedAtk(item->fields._GrandInfo_k__BackingField, 0LL);
      if ( !attackIconLabel )
        goto LABEL_236;
      UIIconLabel__Set_40290232(attackIconLabel, 5, Atk, (_DWORD)svtEntity + v25, 0, 0LL, 0, 0, 0, 0, 0LL);
      v26 = this->fields.hpIconLabel;
      Hp = ServantStatusListViewItem__get_Hp(item, 0LL);
      svtEntity = (System_String_o *)ServantStatusListViewItem__get_AdjustHp(item, 0LL);
      if ( !item->fields._GrandInfo_k__BackingField )
        goto LABEL_236;
      v28 = (int)svtEntity;
      svtEntity = (System_String_o *)UserServantGrandInfo__get_AddedHp(item->fields._GrandInfo_k__BackingField, 0LL);
      if ( !v26 )
        goto LABEL_236;
      UIIconLabel__Set_40290232(v26, 3, Hp, (_DWORD)svtEntity + v28, 0, 0LL, 0, 0, 0, 0, 0LL);
    }
    if ( ServantStatusListViewItem__GetAdjustMax(
           item,
           &maxAjustAtk[1],
           maxAjustAtk,
           (int32_t *)&secondMaxAdjustAtk + 1,
           (int32_t *)&secondMaxAdjustAtk,
           0LL) )
    {
      AdjustAtk = ServantStatusListViewItem__get_AdjustAtk(item, 0LL);
      reinforceAttackIconLabel = this->fields.reinforceAttackIconLabel;
      if ( AdjustAtk >= maxAjustAtk[0] )
        v31 = secondMaxAdjustAtk;
      else
        v31 = maxAjustAtk[0];
      svtEntity = (System_String_o *)ServantStatusListViewItem__get_AdjustAtk(item, 0LL);
      v32 = (int)svtEntity;
      v33 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v33 = BalanceConfig_TypeInfo;
      }
      if ( !reinforceAttackIconLabel )
        goto LABEL_236;
      UIIconLabel__Set_40290232(
        reinforceAttackIconLabel,
        45,
        v33->static_fields->StatusUpAdjustHp * v32,
        v33->static_fields->StatusUpAdjustHp * v31,
        0,
        0LL,
        0,
        0,
        0,
        0,
        0LL);
      svtEntity = (System_String_o *)this->fields.reinforceAttackMaxLabel;
      if ( !svtEntity )
        goto LABEL_236;
      UILabel__set_text((UILabel_o *)svtEntity, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      AdjustHp = ServantStatusListViewItem__get_AdjustHp(item, 0LL);
      reinforceHpIconLabel = this->fields.reinforceHpIconLabel;
      if ( AdjustHp >= maxAjustAtk[1] )
        v36 = HIDWORD(secondMaxAdjustAtk);
      else
        v36 = maxAjustAtk[1];
      svtEntity = (System_String_o *)ServantStatusListViewItem__get_AdjustHp(item, 0LL);
      v37 = BalanceConfig_TypeInfo;
      v38 = (int)svtEntity;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v37 = BalanceConfig_TypeInfo;
      }
      if ( !reinforceHpIconLabel )
        goto LABEL_236;
      UIIconLabel__Set_40290232(
        reinforceHpIconLabel,
        44,
        v37->static_fields->StatusUpAdjustHp * v38,
        v37->static_fields->StatusUpAdjustHp * v36,
        0,
        0LL,
        0,
        0,
        0,
        0,
        0LL);
    }
    else
    {
      svtEntity = (System_String_o *)this->fields.reinforceAttackIconLabel;
      if ( !svtEntity )
        goto LABEL_236;
      UIIconLabel__Clear((UIIconLabel_o *)svtEntity, 0LL);
      svtEntity = (System_String_o *)this->fields.reinforceAttackMaxLabel;
      if ( !svtEntity )
        goto LABEL_236;
      UILabel__set_text((UILabel_o *)svtEntity, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      svtEntity = (System_String_o *)this->fields.reinforceHpIconLabel;
      if ( !svtEntity )
        goto LABEL_236;
      UIIconLabel__Clear((UIIconLabel_o *)svtEntity, 0LL);
    }
    svtEntity = (System_String_o *)this->fields.reinforceHpMaxLabel;
    if ( !svtEntity )
      goto LABEL_236;
    UILabel__set_text((UILabel_o *)svtEntity, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    addedHpByGrandIconLabel = (UnityEngine_Object_o *)this->fields.addedHpByGrandIconLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(addedHpByGrandIconLabel, 0LL, 0LL) )
    {
      addedAtkByGrandIconLabel = (UnityEngine_Object_o *)this->fields.addedAtkByGrandIconLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(addedAtkByGrandIconLabel, 0LL, 0LL) )
      {
        svtEntity = (System_String_o *)item->fields._GrandInfo_k__BackingField;
        if ( !svtEntity )
          goto LABEL_236;
        svtEntity = (System_String_o *)UserServantGrandInfo__IsValid((UserServantGrandInfo_o *)svtEntity, 0LL);
        v41 = this->fields.addedHpByGrandIconLabel;
        if ( ((unsigned __int8)svtEntity & 1) != 0 )
        {
          svtEntity = (System_String_o *)item->fields._GrandInfo_k__BackingField;
          if ( !svtEntity )
            goto LABEL_236;
          svtEntity = (System_String_o *)UserServantGrandInfo__get_AddedHp((UserServantGrandInfo_o *)svtEntity, 0LL);
          if ( !v41 )
            goto LABEL_236;
          UIIconLabel__Set_40290232(v41, 58, (int32_t)svtEntity, 0, 0, 0LL, 0, 0, 0, 0, 0LL);
          svtEntity = (System_String_o *)item->fields._GrandInfo_k__BackingField;
          if ( !svtEntity )
            goto LABEL_236;
          v42 = this->fields.addedAtkByGrandIconLabel;
          svtEntity = (System_String_o *)UserServantGrandInfo__get_AddedAtk((UserServantGrandInfo_o *)svtEntity, 0LL);
          if ( !v42 )
            goto LABEL_236;
          UIIconLabel__Set_40290232(v42, 59, (int32_t)svtEntity, 0, 0, 0LL, 0, 0, 0, 0, 0LL);
        }
        else
        {
          if ( !v41 )
            goto LABEL_236;
          UIIconLabel__Clear(this->fields.addedHpByGrandIconLabel, 0LL);
          svtEntity = (System_String_o *)this->fields.addedAtkByGrandIconLabel;
          if ( !svtEntity )
            goto LABEL_236;
          UIIconLabel__Clear((UIIconLabel_o *)svtEntity, 0LL);
        }
      }
    }
    svtEntity = (System_String_o *)ServantStatusListViewItem__GetExpInfo(
                                     item,
                                     exp,
                                     (int32_t *)&barExp + 1,
                                     (float *)&barExp,
                                     0LL);
    if ( !this->fields.expBase )
      goto LABEL_236;
    if ( ((unsigned __int8)svtEntity & 1) != 0 )
    {
      UnityEngine_GameObject__SetActive(this->fields.expBase, 1, 0LL);
      svtEntity = (System_String_o *)this->fields.lateExpBase;
      if ( !svtEntity )
        goto LABEL_236;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, SHIDWORD(barExp) > 0, 0LL);
      lateExpLabel = this->fields.lateExpLabel;
      v44 = HIDWORD(barExp);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      svtEntity = LocalizationManager__GetNumberFormat(v44, 0LL);
      if ( !lateExpLabel )
        goto LABEL_236;
      UILabel__set_text(lateExpLabel, svtEntity, 0LL);
      svtEntity = (System_String_o *)this->fields.expBar;
      if ( !svtEntity )
        goto LABEL_236;
      UIProgressBar__set_value((UIProgressBar_o *)svtEntity, *(float *)&barExp, 0LL);
    }
    else
    {
      UnityEngine_GameObject__SetActive(this->fields.expBase, 0, 0LL);
    }
    limitCountGauge = this->fields.limitCountGauge;
    svtEntity = (System_String_o *)ServantStatusListViewItem__get_LimitCount(item, 0LL);
    v46 = item->fields.svtEntity;
    if ( !v46 || !limitCountGauge )
      goto LABEL_236;
    ServantStatusLimitCountGauge__Set(limitCountGauge, (int32_t)svtEntity, v46->fields.limitMax, 0LL);
    tdStrengthStatusSprite = (UnityEngine_Object_o *)this->fields.tdStrengthStatusSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(tdStrengthStatusSprite, 0LL, 0LL) )
    {
      svtEntity = (System_String_o *)ServantStatusListViewItem__GetNpInfo(item, &tdInfo, 0LL);
      if ( !tdInfo )
        goto LABEL_236;
      v48 = this->fields.tdStrengthStatusSprite;
      svtEntity = StrengthStatus__GetTreasureDeviceIconName(
                    tdInfo->fields.strengthStatus,
                    tdInfo->fields.treasureDeviceNum,
                    0LL);
      if ( !v48 )
        goto LABEL_236;
      UISprite__set_spriteName(v48, svtEntity, 0LL);
    }
    if ( this->fields.skillStrengthStatusLabelList )
    {
      ServantStatusListViewItem__GetSkillInfo(item, &skillInfoList, 0, 0LL);
      v50 = skillInfoList;
      if ( skillInfoList && (int)*(_QWORD *)&skillInfoList->max_length >= 1 )
      {
        v51 = 0;
        v52 = 0LL;
        v53 = (unsigned int)*(_QWORD *)&skillInfoList->max_length;
        while ( v52 < v50->max_length )
        {
          v54 = (int *)v50->m_Items[v52];
          if ( v54 && v54[4] >= 1 && v54[12] )
          {
            v55 = v54[13];
            if ( !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
            IconCnt = ServantSkillStrengthStatus__GetIconCnt(v55, 0LL);
            svtEntity = (System_String_o *)ServantSkillStrengthStatus__GetStrengthenedCnt(v54[12], v54[13], 0LL);
            if ( IconCnt >= 1 )
            {
              v57 = (int)svtEntity;
              for ( i = 0; i != IconCnt; ++i )
              {
                skillStrengthStatusLabelList = this->fields.skillStrengthStatusLabelList;
                if ( !skillStrengthStatusLabelList )
                  goto LABEL_236;
                if ( v51 + i >= skillStrengthStatusLabelList->max_length )
                  goto LABEL_237;
                svtEntity = (System_String_o *)ServantSkillStrengthStatus_TypeInfo;
                v60 = skillStrengthStatusLabelList->m_Items[v51 + i];
                if ( !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
                  svtEntity = (System_String_o *)ServantSkillStrengthStatus_TypeInfo;
                }
                if ( i >= v57 )
                {
                  if ( !v60 )
                    goto LABEL_236;
                  v61 = 32LL;
                }
                else
                {
                  if ( !v60 )
                    goto LABEL_236;
                  v61 = 24LL;
                }
                UISprite__set_spriteName(v60, *(System_String_o **)(*(_QWORD *)&svtEntity[7].fields + v61), 0LL);
              }
              v51 += i;
            }
          }
          if ( ++v52 == v53 )
            goto LABEL_100;
          v50 = skillInfoList;
          if ( !skillInfoList )
            goto LABEL_236;
        }
LABEL_237:
        sub_1BCB25C(svtEntity, v17, v49);
      }
      v51 = 0;
LABEL_100:
      v62 = this->fields.skillStrengthStatusLabelList;
      if ( !v62 )
        goto LABEL_236;
      max_length = v62->max_length;
      if ( (int)v51 < max_length )
      {
        while ( v51 < v62->max_length )
        {
          svtEntity = (System_String_o *)v62->m_Items[v51];
          if ( !svtEntity )
            goto LABEL_236;
          UISprite__set_spriteName((UISprite_o *)svtEntity, 0LL, 0LL);
          if ( max_length == ++v51 )
            goto LABEL_107;
          v62 = this->fields.skillStrengthStatusLabelList;
          if ( !v62 )
            goto LABEL_236;
        }
        goto LABEL_237;
      }
    }
LABEL_107:
    svtEntity = (System_String_o *)this->fields.friendshipGauge;
    if ( !svtEntity )
      goto LABEL_236;
    userSvtCollectionEntity = item->fields.userSvtCollectionEntity;
    svtEntity = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)svtEntity, 0LL);
    if ( !svtEntity )
      goto LABEL_236;
    if ( userSvtCollectionEntity )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 1, 0LL);
      ServantStatusListViewItem__GetFriendshipInfo(
        item,
        &max[1],
        max,
        (int32_t *)&fraction + 1,
        (float *)&fraction,
        0LL);
      svtEntity = (System_String_o *)this->fields.friendshipGauge;
      if ( !svtEntity )
        goto LABEL_236;
      ServantStatusFriendshipGauge__Set(
        (ServantStatusFriendshipGauge_o *)svtEntity,
        max[1],
        max[0],
        SHIDWORD(fraction),
        *(float *)&fraction,
        0LL);
    }
    else
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 0, 0LL);
    }
    svtEntity = (System_String_o *)this->fields.eventJoinSprite;
    if ( !svtEntity
      || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)svtEntity, 0LL),
          svtEntity = (System_String_o *)ServantStatusListViewItem__get_IsEventJoin(item, 0LL),
          !gameObject) )
    {
LABEL_236:
      sub_1BCB254(svtEntity, v17);
    }
    UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)svtEntity & 1, 0LL);
    baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL);
    if ( !item->fields._IsDisplayCombineButton_k__BackingField
      || (p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&item->fields.userSvtEntity,
          (userSvtEntity = item->fields.userSvtEntity) == 0LL) )
    {
LABEL_224:
      svtEntity = (System_String_o *)this->fields.transformNameSprite;
      if ( svtEntity )
      {
        IsTransformServant_k__BackingField = item->fields._IsTransformServant_k__BackingField;
        svtEntity = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)svtEntity, 0LL);
        if ( svtEntity )
        {
          if ( IsTransformServant_k__BackingField )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 1, 0LL);
            transformNameLabel = this->fields.transformNameLabel;
            svtEntity = ServantStatusListViewItem__GetTransformName(item, 0LL);
            if ( !transformNameLabel )
              goto LABEL_236;
            UILabel__set_text(transformNameLabel, svtEntity, 0LL);
            ServantStatusListViewItemDrawMain__AddAreaHeight(this, this->fields.transformNameAddHeight, v103);
            GameObjectExtensions__AddLocalPositionY(
              this->fields.mainContentsRoot,
              (float)-this->fields.transformNameAddHeight,
              0LL);
            GameObjectExtensions__AddLocalPositionY(
              this->fields.combineRoot,
              (float)-this->fields.transformNameAddHeight,
              0LL);
          }
          else
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 0, 0LL);
          }
          svtEntity = (System_String_o *)item->fields._GrandInfo_k__BackingField;
          if ( svtEntity )
          {
            if ( UserServantGrandInfo__IsValid((UserServantGrandInfo_o *)svtEntity, 0LL) )
              ServantStatusListViewItemDrawMain__AdjustLayoutByInsertGrandEnforcementInfo(this, v104);
            ServantStatusListViewItemDrawMain__ResizeCollider(this, v104);
            ServantStatusListViewItemDrawMain__AdjustBaseUiPosY(this, v105);
            return;
          }
        }
      }
      goto LABEL_236;
    }
    IsHeroine = UserServantEntity__IsHeroine(userSvtEntity, 0LL);
    v70 = -1;
    maxFriendshipRank[0] = -1;
    maxFriendshipRank[1] = -1;
    v71 = IsHeroine;
    if ( item->fields.userSvtCollectionEntity )
    {
      UserServantCollectionEntity__getFriendShipRankInfo(
        item->fields.userSvtCollectionEntity,
        &maxFriendshipRank[1],
        maxFriendshipRank,
        0LL);
      v70 = maxFriendshipRank[0];
      v72 = maxFriendshipRank[1];
    }
    else
    {
      v72 = -1;
    }
    v73 = 0;
    if ( v72 == v70 && ((v70 | v72) & 0x80000000) == 0 )
    {
      svtEntity = (System_String_o *)*p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_236;
      if ( !UserServantEntity__isExceedFriendshipMax((UserServantEntity_o *)svtEntity, 0LL) )
      {
        svtEntity = (System_String_o *)*p_userSvtEntity;
        if ( !*p_userSvtEntity )
          goto LABEL_236;
        if ( !UserServantEntity__IsEventJoin((UserServantEntity_o *)svtEntity, 0LL) )
        {
          if ( v71 )
          {
            svtEntity = (System_String_o *)*p_userSvtEntity;
            if ( !*p_userSvtEntity )
              goto LABEL_236;
            if ( !UserServantEntity__IsUseFriendshipExceedItemHeroine((UserServantEntity_o *)svtEntity, 0LL) )
            {
              v73 = 0;
              v74 = 0;
              v75 = 0;
              goto LABEL_143;
            }
          }
          svtEntity = (System_String_o *)this->fields.bondLimitUpObject;
          if ( !svtEntity )
            goto LABEL_236;
          v73 = 1;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 1, 0LL);
          svtEntity = (System_String_o *)this->fields.bondLimitUpButton;
          if ( !svtEntity )
            goto LABEL_236;
          BYTE1(svtEntity[4].klass) = 1;
          UICommonButton__SetEnable((UICommonButton_o *)svtEntity, item->fields._CanMoveCombine_k__BackingField, 0LL);
          if ( !v71 )
            goto LABEL_130;
          goto LABEL_142;
        }
      }
      v73 = 0;
    }
    if ( !v71 )
    {
LABEL_130:
      svtEntity = (System_String_o *)*p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_236;
      if ( UserServantEntity__isLevelMax((UserServantEntity_o *)svtEntity, 0LL) )
      {
        svtEntity = (System_String_o *)*p_userSvtEntity;
        if ( !*p_userSvtEntity )
          goto LABEL_236;
        if ( !UserServantEntity__isLimitCountMax((UserServantEntity_o *)svtEntity, 0LL) )
        {
          svtEntity = (System_String_o *)this->fields.limitCountUpButton;
          if ( !svtEntity )
            goto LABEL_236;
          v74 = 1;
          BYTE1(svtEntity[4].klass) = 1;
          v75 = v73 + 1;
          UICommonButton__SetEnable((UICommonButton_o *)svtEntity, item->fields._CanMoveCombine_k__BackingField, 0LL);
          goto LABEL_143;
        }
      }
    }
LABEL_142:
    v74 = 0;
    v75 = v73;
LABEL_143:
    svtEntity = (System_String_o *)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_236;
    if ( !UserServantEntity__isLevelMax((UserServantEntity_o *)svtEntity, 0LL) )
      goto LABEL_156;
    svtEntity = (System_String_o *)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_236;
    if ( UserServantEntity__isExceedLvMax((UserServantEntity_o *)svtEntity, 0LL) )
      goto LABEL_156;
    svtEntity = (System_String_o *)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_236;
    if ( UserServantEntity__IsEventJoin((UserServantEntity_o *)svtEntity, 0LL) )
      goto LABEL_156;
    svtEntity = (System_String_o *)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_236;
    if ( !UserServantEntity__isLimitCountMax((UserServantEntity_o *)svtEntity, 0LL) )
      goto LABEL_156;
    if ( !v71 )
      goto LABEL_154;
    svtEntity = (System_String_o *)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_236;
    if ( !UserServantEntity__IsUseLevelExceedItemHeroine((UserServantEntity_o *)svtEntity, 0LL) )
    {
LABEL_156:
      v76 = 0;
    }
    else
    {
LABEL_154:
      svtEntity = (System_String_o *)this->fields.levelExceedButton;
      if ( !svtEntity )
        goto LABEL_236;
      v76 = 1;
      BYTE1(svtEntity[4].klass) = 1;
      ++v75;
      UICommonButton__SetEnable((UICommonButton_o *)svtEntity, item->fields._CanMoveCombine_k__BackingField, 0LL);
    }
    svtEntity = (System_String_o *)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_236;
    if ( UserServantEntity__IsLeave((UserServantEntity_o *)svtEntity, 0LL) )
      goto LABEL_159;
    svtEntity = (System_String_o *)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_236;
    if ( !UserServantEntity__isLevelMax((UserServantEntity_o *)svtEntity, 0LL) )
      goto LABEL_166;
    svtEntity = (System_String_o *)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_236;
    if ( !UserServantEntity__isSecondAdjustAtkMax((UserServantEntity_o *)svtEntity, 0LL) )
      goto LABEL_166;
    svtEntity = (System_String_o *)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_236;
    if ( UserServantEntity__isSecondAdjustHpMax((UserServantEntity_o *)svtEntity, 0LL) )
    {
LABEL_159:
      v77 = 0;
    }
    else
    {
LABEL_166:
      svtEntity = (System_String_o *)this->fields.reinforceButton;
      if ( !svtEntity )
        goto LABEL_236;
      v77 = 1;
      BYTE1(svtEntity[4].klass) = 1;
      ++v75;
      UICommonButton__SetEnable((UICommonButton_o *)svtEntity, item->fields._CanMoveCombine_k__BackingField, 0LL);
    }
    svtEntity = (System_String_o *)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_236;
    if ( UserServantEntity__IsHeroine((UserServantEntity_o *)svtEntity, 0LL) )
      goto LABEL_191;
    svtEntity = (System_String_o *)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_236;
    if ( !UserServantEntity__isLimitCountMax((UserServantEntity_o *)svtEntity, 0LL) )
      goto LABEL_191;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    svtEntity = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    v78 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_236;
    v79 = (ServantLimitImageMaster_o *)svtEntity;
    v81 = *(_QWORD *)&v78[5].fields.currentCryptoKey;
    v80 = *(_QWORD *)&v78[5].fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v115.fields.currentCryptoKey = v81;
    *(_QWORD *)&v115.fields.fakeValue = v80;
    svtEntity = (System_String_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v115, 0LL);
    if ( !*p_userSvtEntity )
      goto LABEL_236;
    v82 = (int)svtEntity;
    svtEntity = (System_String_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(
                                     (*p_userSvtEntity)[6],
                                     0LL);
    if ( !v79 )
      goto LABEL_236;
    svtEntity = (System_String_o *)ServantLimitImageMaster__IsServantLimitCountSeal(v79, v82, (int32_t)svtEntity, 0LL);
    if ( ((unsigned __int8)svtEntity & 1) == 0 )
      goto LABEL_191;
    v83 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_236;
    v85 = *(_QWORD *)&v83[5].fields.currentCryptoKey;
    v84 = *(_QWORD *)&v83[5].fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v116.fields.currentCryptoKey = v85;
    *(_QWORD *)&v116.fields.fakeValue = v84;
    svtEntity = (System_String_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v116, 0LL);
    if ( !*p_userSvtEntity )
      goto LABEL_236;
    v86 = (int)svtEntity;
    v87 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176((*p_userSvtEntity)[6], 0LL);
    ServantLimitCountSealedQuestOpen = ServantLimitImageMaster__GetServantLimitCountSealedQuestOpen(v79, v86, v87, 0LL);
    this->fields.questId = ServantLimitCountSealedQuestOpen;
    if ( !ServantLimitCountSealedQuestOpen )
      goto LABEL_191;
    svtEntity = (System_String_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38F8EF8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    if ( !svtEntity )
      goto LABEL_236;
    if ( clsQuestCheck__CheckQuestPlayableNow((clsQuestCheck_o *)svtEntity, this->fields.questId, 0LL) )
    {
      svtEntity = (System_String_o *)this->fields.unSealedQuestTransitionButton;
      if ( !svtEntity )
        goto LABEL_236;
      BYTE1(svtEntity[4].klass) = 1;
      CanMoveCombine_k__BackingField = item->fields._CanMoveCombine_k__BackingField;
      ++v75;
      if ( item->fields._CanMoveCombine_k__BackingField )
        CanMoveCombine_k__BackingField = item->fields.isEnableServantQuest;
      UICommonButton__SetEnable((UICommonButton_o *)svtEntity, CanMoveCombine_k__BackingField, 0LL);
      v90 = 1;
    }
    else
    {
LABEL_191:
      v90 = 0;
    }
    if ( v73 )
    {
      if ( v77 )
      {
        if ( v75 == 3 )
        {
          reinforceObject = this->fields.reinforceObject;
          v92 = -20.0;
          goto LABEL_203;
        }
        if ( v75 == 2 )
        {
          reinforceObject = this->fields.reinforceObject;
          v92 = 100.0;
LABEL_203:
          GameObjectExtensions__SetLocalPositionX(reinforceObject, v92, 0LL);
        }
      }
      if ( !v76 )
        goto LABEL_215;
      limitCountUpObject = this->fields.limitCountUpObject;
      v96 = -20.0;
      v97 = -20.0;
      goto LABEL_213;
    }
    if ( v77 )
    {
      switch ( v75 )
      {
        case 3:
          v93 = this->fields.reinforceObject;
          v98 = -20.0;
LABEL_209:
          GameObjectExtensions__SetLocalPositionX(v93, v98, 0LL);
          break;
        case 2:
          v93 = this->fields.reinforceObject;
          v94 = 1120403456;
          goto LABEL_208;
        case 1:
          v93 = this->fields.reinforceObject;
          v94 = 1130102784;
LABEL_208:
          v98 = *(float *)&v94;
          goto LABEL_209;
      }
    }
    if ( v76 )
    {
      p_levelExceedObject = &this->fields.levelExceedObject;
      v97 = 1130102784;
LABEL_214:
      GameObjectExtensions__SetLocalPositionX(*p_levelExceedObject, *(float *)&v97, 0LL);
LABEL_215:
      svtEntity = (System_String_o *)this->fields.bondLimitUpObject;
      if ( !svtEntity )
        goto LABEL_236;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, v73, 0LL);
      svtEntity = (System_String_o *)this->fields.limitCountUpObject;
      if ( !svtEntity )
        goto LABEL_236;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, v74, 0LL);
      svtEntity = (System_String_o *)this->fields.levelExceedObject;
      if ( !svtEntity )
        goto LABEL_236;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, v76, 0LL);
      svtEntity = (System_String_o *)this->fields.reinforceObject;
      if ( !svtEntity )
        goto LABEL_236;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, v77, 0LL);
      svtEntity = (System_String_o *)this->fields.unSealedQuestTransitionObject;
      if ( !svtEntity )
        goto LABEL_236;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, v90, 0LL);
      if ( v73 || v76 || v74 || v77 || v90 )
      {
        svtEntity = (System_String_o *)this->fields.reinforceMaskSprite;
        if ( !svtEntity )
          goto LABEL_236;
        svtEntity = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)svtEntity, 0LL);
        if ( !svtEntity )
          goto LABEL_236;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 1, 0LL);
        ServantStatusListViewItemDrawMain__AddAreaHeight(this, 46, v100);
      }
      goto LABEL_224;
    }
    limitCountUpObject = this->fields.limitCountUpObject;
    v97 = 1130102784;
    v96 = 220.0;
LABEL_213:
    GameObjectExtensions__SetLocalPositionX(limitCountUpObject, v96, 0LL);
    p_levelExceedObject = &this->fields.unSealedQuestTransitionObject;
    goto LABEL_214;
  }
}


void __fastcall ServantStatusListViewItemDrawMain___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B193F5 & 1) == 0 )
  {
    sub_1BCAFF8(&ServantStatusListViewItemDrawMain___c_TypeInfo, v1);
    byte_4B193F5 = 1;
  }
  v2 = (Il2CppObject *)sub_1BCB244(ServantStatusListViewItemDrawMain___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ServantStatusListViewItemDrawMain___c_TypeInfo->static_fields->__9 = (struct ServantStatusListViewItemDrawMain___c_o *)v2;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)ServantStatusListViewItemDrawMain___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
}


void __fastcall ServantStatusListViewItemDrawMain___c___ctor(
        ServantStatusListViewItemDrawMain___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantStatusListViewItemDrawMain___c___AdjustLayoutByInsertGrandEnforcementInfo_b__57_0(
        ServantStatusListViewItemDrawMain___c_o *this,
        UnityEngine_Transform_o *x,
        const MethodInfo *method)
{
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( !x
    || (this = (ServantStatusListViewItemDrawMain___c_o *)UnityEngine_Component__get_transform(
                                                            (UnityEngine_Component_o *)x,
                                                            0LL)) == 0LL )
  {
    sub_1BCB254(this, x);
  }
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  TransformHelper__SetLocalPositionY(x, localPosition.fields.y + -25.0, 0LL);
}


UnityEngine_Transform_o *__fastcall ServantStatusListViewItemDrawMain___c___Awake_b__53_0(
        ServantStatusListViewItemDrawMain___c_o *this,
        UnityEngine_Transform_o *x,
        const MethodInfo *method)
{
  return x;
}


float __fastcall ServantStatusListViewItemDrawMain___c___Awake_b__53_1(
        ServantStatusListViewItemDrawMain___c_o *this,
        UnityEngine_Transform_o *x,
        const MethodInfo *method)
{
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( !x )
    sub_1BCB254(this, 0LL);
  localPosition = UnityEngine_Transform__get_localPosition(x, 0LL);
  return localPosition.fields.y;
}


void __fastcall ServantStatusListViewItemDrawMain___c___SetBaseView_b__55_0(
        ServantStatusListViewItemDrawMain___c_o *this,
        System_Collections_Generic_KeyValuePair_Transform__float__o x,
        const MethodInfo *method)
{
  float value; // w19
  UnityEngine_Transform_o *key; // x20
  __int64 v5; // x1

  value = x.fields.value;
  key = x.fields.key;
  if ( (byte_4B193F6 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_KeyValuePair_Transform__float__get_Key__, x.fields.key);
    sub_1BCAFF8(&Method_System_Collections_Generic_KeyValuePair_Transform__float__get_Value__, v5);
    byte_4B193F6 = 1;
  }
  TransformHelper__SetLocalPositionY(key, value, 0LL);
}