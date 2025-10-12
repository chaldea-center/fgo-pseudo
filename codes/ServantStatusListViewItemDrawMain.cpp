void ServantStatusListViewItemDrawMain___ctor(ServantStatusListViewItemDrawMain_o *this, const MethodInfo *method)
{
  this->fields.transformNameAddHeight = 34;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ServantStatusListViewItemDrawMain__AddAreaHeight(
        ServantStatusListViewItemDrawMain_o *this,
        int32_t sizeY,
        const MethodInfo *method)
{
  UIWidget_o *baseSprite; // x0

  baseSprite = (UIWidget_o *)this->fields.baseSprite;
  if ( !baseSprite )
    sub_1C32E7C(0);
  UIWidget__set_height(baseSprite, baseSprite->fields.mHeight + sizeY, 0);
}


void ServantStatusListViewItemDrawMain__AdjustBaseUiPosY(
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
    sub_1C32E7C(this);
  mHeight = baseSprite->fields.mHeight;
  baseSpriteHeightBase = this->fields.baseSpriteHeightBase;
  if ( !byte_4C31A98 )
  {
    sub_1C32C20(&System_Math_TypeInfo);
    byte_4C31A98 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v6 = (float)(mHeight - baseSpriteHeightBase) * 0.5;
  v7 = ceilf(v6);
  v8 = (float)(int)vcvtps_s32_f32(v6);
  if ( v7 == INFINITY )
    v8 = -2147500000.0;
  GameObjectExtensions__SetLocalPositionY(this->fields.baseUi, v8, 0);
}


void ServantStatusListViewItemDrawMain__AdjustLayoutByInsertGrandEnforcementInfo(
        ServantStatusListViewItemDrawMain_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewItemDrawMain___c_c *v4; // x0
  System_Collections_Generic_IEnumerable_T__o *transformsShiftYByInsertGrandUi; // x19
  System_Action_object__o *_9__57_0; // x20
  Il2CppObject *v7; // x21
  struct ServantStatusListViewItemDrawMain___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C345EC & 1) == 0 )
  {
    sub_1C32C20(&System_Action_Transform__TypeInfo);
    sub_1C32C20(&Method_BasicHelper_ForEach_Transform___);
    sub_1C32C20(&Method_ServantStatusListViewItemDrawMain___c__AdjustLayoutByInsertGrandEnforcementInfo_b__57_0__);
    sub_1C32C20(&ServantStatusListViewItemDrawMain___c_TypeInfo);
    byte_4C345EC = 1;
  }
  ServantStatusListViewItemDrawMain__AddAreaHeight(this, 25, v2);
  v4 = ServantStatusListViewItemDrawMain___c_TypeInfo;
  transformsShiftYByInsertGrandUi = (System_Collections_Generic_IEnumerable_T__o *)this->fields.transformsShiftYByInsertGrandUi;
  if ( !ServantStatusListViewItemDrawMain___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawMain___c_TypeInfo);
    v4 = ServantStatusListViewItemDrawMain___c_TypeInfo;
  }
  _9__57_0 = (System_Action_object__o *)v4->static_fields->__9__57_0;
  if ( !_9__57_0 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = ServantStatusListViewItemDrawMain___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v4->static_fields->__9;
    _9__57_0 = (System_Action_object__o *)sub_1C32E6C(System_Action_Transform__TypeInfo);
    System_Action_object____ctor(
      _9__57_0,
      v7,
      Method_ServantStatusListViewItemDrawMain___c__AdjustLayoutByInsertGrandEnforcementInfo_b__57_0__,
      0);
    static_fields = ServantStatusListViewItemDrawMain___c_TypeInfo->static_fields;
    static_fields->__9__57_0 = (struct System_Action_Transform__o *)_9__57_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__57_0, (int32_t)_9__57_0, v9, v10);
  }
  BasicHelper__ForEach_object_(
    transformsShiftYByInsertGrandUi,
    (System_Action_T__o *)_9__57_0,
    (const MethodInfo_30C93B0 *)Method_BasicHelper_ForEach_Transform___);
}


void ServantStatusListViewItemDrawMain__Awake(ServantStatusListViewItemDrawMain_o *this, const MethodInfo *method)
{
  ServantStatusListViewItemDrawMain_o *v2; // x19
  struct UISprite_o *baseSprite; // x8
  ServantStatusListViewItemDrawMain_o *v4; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  ServantStatusListViewItemDrawMain_o *v7; // x21
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  ServantStatusListViewItemDrawMain_o *v10; // x21
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  ServantStatusListViewItemDrawMain_o *v13; // x21
  long double inited; // q0
  System_Collections_Generic_IEnumerable_TSource__o *transformsShiftYByInsertGrandUi; // x1
  _QWORD *v16; // x21
  __int64 v17; // x8
  __int64 v18; // x0
  __int64 v19; // x0
  System_Collections_Generic_IEnumerable_T__o *v20; // x0
  System_Collections_Generic_IEnumerable_T__o *v21; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0
  ServantStatusListViewItemDrawMain___c_c *v23; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x20
  System_Func_object__object__o *_9__53_0; // x21
  Il2CppObject *v26; // x22
  struct ServantStatusListViewItemDrawMain___c_StaticFields *static_fields; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  System_Func_T__TResult__o *_9__53_1; // x22
  Il2CppObject *v31; // x23
  struct ServantStatusListViewItemDrawMain___c_StaticFields *v32; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  System_Collections_Generic_Dictionary_TKey__TElement__o *v35; // x1
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  __int64 v38; // x0

  v2 = this;
  if ( (byte_4C345E9 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Array_Empty_Transform___);
    sub_1C32C20(&Method_BasicHelper_ExcludeNull_Transform___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Concat_Transform___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Distinct_Transform___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToDictionary_Transform__Transform__float___);
    sub_1C32C20(&System_Func_Transform__float__TypeInfo);
    sub_1C32C20(&System_Func_Transform__Transform__TypeInfo);
    sub_1C32C20(&UnityEngine_Transform___TypeInfo);
    sub_1C32C20(&Method_ServantStatusListViewItemDrawMain___c__Awake_b__53_0__);
    sub_1C32C20(&Method_ServantStatusListViewItemDrawMain___c__Awake_b__53_1__);
    this = (ServantStatusListViewItemDrawMain_o *)sub_1C32C20(&ServantStatusListViewItemDrawMain___c_TypeInfo);
    byte_4C345E9 = 1;
  }
  baseSprite = v2->fields.baseSprite;
  if ( !baseSprite )
    goto LABEL_40;
  v2->fields.baseSpriteHeightBase = baseSprite->fields.mHeight;
  this = (ServantStatusListViewItemDrawMain_o *)sub_1C32CC8(UnityEngine_Transform___TypeInfo, 3);
  if ( !v2->fields.baseUi )
    goto LABEL_40;
  v4 = this;
  this = (ServantStatusListViewItemDrawMain_o *)UnityEngine_GameObject__get_transform(v2->fields.baseUi, 0);
  if ( !v4 )
    goto LABEL_40;
  v7 = this;
  if ( this )
  {
    this = (ServantStatusListViewItemDrawMain_o *)sub_1C32D5C(this, v4->klass->_1.element_class);
    if ( !this )
      goto LABEL_42;
  }
  if ( !LODWORD(v4->fields.m_CancellationTokenSource) )
    goto LABEL_41;
  *(_QWORD *)&v4->fields.dispMode = v7;
  sub_1C32BC4((CGThumbnailListItem_o *)&v4->fields.dispMode, (int32_t)v7, v5, v6);
  this = (ServantStatusListViewItemDrawMain_o *)v2->fields.mainContentsRoot;
  if ( !this )
    goto LABEL_40;
  this = (ServantStatusListViewItemDrawMain_o *)UnityEngine_GameObject__get_transform(
                                                  (UnityEngine_GameObject_o *)this,
                                                  0);
  v10 = this;
  if ( this )
  {
    this = (ServantStatusListViewItemDrawMain_o *)sub_1C32D5C(this, v4->klass->_1.element_class);
    if ( !this )
    {
LABEL_42:
      v38 = sub_1C32EA0();
      sub_1C32D48(v38, 0);
    }
  }
  if ( LODWORD(v4->fields.m_CancellationTokenSource) <= 1 )
    goto LABEL_41;
  v4->fields.baseButton = (struct UICommonButton_o *)v10;
  sub_1C32BC4((CGThumbnailListItem_o *)&v4->fields.baseButton, (int32_t)v10, v8, v9);
  this = (ServantStatusListViewItemDrawMain_o *)v2->fields.combineRoot;
  if ( !this )
LABEL_40:
    sub_1C32E7C(this);
  this = (ServantStatusListViewItemDrawMain_o *)UnityEngine_GameObject__get_transform(
                                                  (UnityEngine_GameObject_o *)this,
                                                  0);
  v13 = this;
  if ( this )
  {
    this = (ServantStatusListViewItemDrawMain_o *)sub_1C32D5C(this, v4->klass->_1.element_class);
    if ( !this )
      goto LABEL_42;
  }
  if ( LODWORD(v4->fields.m_CancellationTokenSource) <= 2 )
LABEL_41:
    sub_1C32E84(this);
  v4->fields.servantTexture = (struct UITexture_o *)v13;
  sub_1C32BC4((CGThumbnailListItem_o *)&v4->fields.servantTexture, (int32_t)v13, v11, v12);
  transformsShiftYByInsertGrandUi = (System_Collections_Generic_IEnumerable_TSource__o *)v2->fields.transformsShiftYByInsertGrandUi;
  if ( !transformsShiftYByInsertGrandUi )
  {
    v16 = Method_System_Array_Empty_Transform___;
    v17 = *((_QWORD *)Method_System_Array_Empty_Transform___ + 7);
    if ( !v17 )
    {
      sub_1C83390(Method_System_Array_Empty_Transform___);
      v17 = v16[7];
    }
    v18 = *(_QWORD *)(v17 + 16);
    if ( (*(_BYTE *)(v18 + 309) & 1) == 0 )
      v18 = sub_1C83334(inited);
    if ( !*(_DWORD *)(v18 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v18);
    v19 = *(_QWORD *)(v16[7] + 16LL);
    if ( (*(_BYTE *)(v19 + 309) & 1) == 0 )
      v19 = sub_1C83334(inited);
    transformsShiftYByInsertGrandUi = **(System_Collections_Generic_IEnumerable_TSource__o ***)(v19 + 184);
  }
  v20 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Concat_object_(
                                                         (System_Collections_Generic_IEnumerable_TSource__o *)v4,
                                                         transformsShiftYByInsertGrandUi,
                                                         (const MethodInfo_30F9DF8 *)Method_System_Linq_Enumerable_Concat_Transform___);
  v21 = BasicHelper__ExcludeNull_object_(v20, (const MethodInfo_30C70E4 *)Method_BasicHelper_ExcludeNull_Transform___);
  v22 = System_Linq_Enumerable__Distinct_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v21,
          (const MethodInfo_3100694 *)Method_System_Linq_Enumerable_Distinct_Transform___);
  v23 = ServantStatusListViewItemDrawMain___c_TypeInfo;
  v24 = v22;
  if ( !ServantStatusListViewItemDrawMain___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawMain___c_TypeInfo);
    v23 = ServantStatusListViewItemDrawMain___c_TypeInfo;
  }
  _9__53_0 = (System_Func_object__object__o *)v23->static_fields->__9__53_0;
  if ( !_9__53_0 )
  {
    if ( !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      v23 = ServantStatusListViewItemDrawMain___c_TypeInfo;
    }
    v26 = (Il2CppObject *)v23->static_fields->__9;
    _9__53_0 = (System_Func_object__object__o *)sub_1C32E6C(System_Func_Transform__Transform__TypeInfo);
    System_Func_object__object____ctor(_9__53_0, v26, Method_ServantStatusListViewItemDrawMain___c__Awake_b__53_0__, 0);
    static_fields = ServantStatusListViewItemDrawMain___c_TypeInfo->static_fields;
    static_fields->__9__53_0 = (struct System_Func_Transform__Transform__o *)_9__53_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__53_0, (int32_t)_9__53_0, v28, v29);
    v23 = ServantStatusListViewItemDrawMain___c_TypeInfo;
  }
  if ( !v23->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v23);
    v23 = ServantStatusListViewItemDrawMain___c_TypeInfo;
  }
  _9__53_1 = (System_Func_T__TResult__o *)v23->static_fields->__9__53_1;
  if ( !_9__53_1 )
  {
    if ( !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      v23 = ServantStatusListViewItemDrawMain___c_TypeInfo;
    }
    v31 = (Il2CppObject *)v23->static_fields->__9;
    _9__53_1 = (System_Func_T__TResult__o *)sub_1C32E6C(System_Func_Transform__float__TypeInfo);
    System_Func_object__float____ctor(_9__53_1, v31, Method_ServantStatusListViewItemDrawMain___c__Awake_b__53_1__, 0);
    v32 = ServantStatusListViewItemDrawMain___c_TypeInfo->static_fields;
    v32->__9__53_1 = (struct System_Func_Transform__float__o *)_9__53_1;
    sub_1C32BC4((CGThumbnailListItem_o *)&v32->__9__53_1, (int32_t)_9__53_1, v33, v34);
  }
  v35 = System_Linq_Enumerable__ToDictionary_object__object__float_(
          v24,
          (System_Func_TSource__TKey__o *)_9__53_0,
          (System_Func_TSource__TElement__o *)_9__53_1,
          (const MethodInfo_311D4F4 *)Method_System_Linq_Enumerable_ToDictionary_Transform__Transform__float___);
  v2->fields.dynamicTransformsToOriginalPosYMap = (struct System_Collections_Generic_Dictionary_Transform__float__o *)v35;
  sub_1C32BC4((CGThumbnailListItem_o *)&v2->fields.dynamicTransformsToOriginalPosYMap, (int32_t)v35, v36, v37);
}


int32_t ServantStatusListViewItemDrawMain__GetKind(ServantStatusListViewItemDrawMain_o *this, const MethodInfo *method)
{
  return 1;
}


void ServantStatusListViewItemDrawMain__GetServantIdAndLimitCount(
        ServantStatusListViewItemDrawMain_o *this,
        int32_t *svtId,
        int32_t *limitCount,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  struct ServantEntity_o *TransformedServant_k__BackingField; // x8
  int32_t TransformedServantDispLimitCount_k__BackingField; // w20
  int32_t limitMax; // w21
  int32_t ServantLimitCountSealAfter; // w0
  int32_t ConvertOverwritePortraitLimitCount; // w21

  if ( (byte_4C345ED & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C32C20(&ImageLimitCount_TypeInfo);
    this = (ServantStatusListViewItemDrawMain_o *)sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C345ED = 1;
  }
  if ( !item )
    goto LABEL_15;
  if ( !item->fields._IsTransformed_k__BackingField )
  {
    *svtId = ServantStatusListViewItem__get_SvtId(item, 0);
    ConvertOverwritePortraitLimitCount = ServantStatusListViewItem__get_ConvertOverwritePortraitLimitCount(item, 0);
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    *limitCount = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(ConvertOverwritePortraitLimitCount, 0);
    this = (ServantStatusListViewItemDrawMain_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (ServantStatusListViewItemDrawMain_o *)DataManager__GetMasterData_object_(
                                                      (DataManager_o *)this,
                                                      (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      if ( this )
      {
        ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                       (ServantLimitImageMaster_o *)this,
                                       *svtId,
                                       *limitCount,
                                       0);
        goto LABEL_14;
      }
    }
LABEL_15:
    sub_1C32E7C(this);
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
                                 0);
LABEL_14:
  *limitCount = ServantLimitCountSealAfter;
}


void ServantStatusListViewItemDrawMain__ModifyPortrait(
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
  if ( (byte_4C345EF & 1) == 0 )
  {
    this = (ServantStatusListViewItemDrawMain_o *)sub_1C32C20(&ServantAssetLoadManager_TypeInfo);
    byte_4C345EF = 1;
  }
  *(_QWORD *)limitCount = 0;
  if ( v5->fields.isStart )
  {
    ServantStatusListViewItemDrawMain__GetServantIdAndLimitCount(this, &limitCount[1], limitCount, item, v3);
    servantTexture = v5->fields.servantTexture;
    v8 = limitCount[0];
    v7 = limitCount[1];
    if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    ServantAssetLoadManager__loadStatusFace(servantTexture, v7, v8, 0);
  }
}


void ServantStatusListViewItemDrawMain__ModifyRandomLimitCountSetting(
        ServantStatusListViewItemDrawMain_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  ServantStatusListViewItemDrawMain_o *v6; // x0
  UITexture_o *servantTexture; // x21
  int32_t v8; // w19
  int32_t v9; // w20
  int32_t limitCount[2]; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C345F0 & 1) == 0 )
  {
    sub_1C32C20(&RandomLimitCountManager_TypeInfo);
    sub_1C32C20(&ServantAssetLoadManager_TypeInfo);
    byte_4C345F0 = 1;
  }
  *(_QWORD *)limitCount = 0;
  if ( this->fields.isStart )
  {
    if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    if ( !byte_4C3367D )
    {
      sub_1C32C20(&RandomLimitCountManager_TypeInfo);
      byte_4C3367D = 1;
    }
    v6 = (ServantStatusListViewItemDrawMain_o *)RandomLimitCountManager_TypeInfo;
    if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
      v6 = (ServantStatusListViewItemDrawMain_o *)RandomLimitCountManager_TypeInfo;
    }
    if ( LOBYTE(v6->fields.friendshipGauge->monitor) )
    {
      ServantStatusListViewItemDrawMain__GetServantIdAndLimitCount(v6, &limitCount[1], limitCount, item, v3);
      servantTexture = this->fields.servantTexture;
      v9 = limitCount[0];
      v8 = limitCount[1];
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      ServantAssetLoadManager__loadStatusFace(servantTexture, v8, v9, 0);
    }
  }
}


void ServantStatusListViewItemDrawMain__ModifyStatus(
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
  if ( (byte_4C345EE & 1) == 0 )
  {
    this = (ServantStatusListViewItemDrawMain_o *)sub_1C32C20(&ServantAssetLoadManager_TypeInfo);
    byte_4C345EE = 1;
  }
  limitCount = 0;
  if ( !item )
    sub_1C32E7C(this);
  v5 = (ServantStatusListViewItemDrawMain_o *)ServantStatusListViewItem__get_SvtId(item, 0);
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
    ServantAssetLoadManager__loadStatusFace(servantTexture, v8, v9, 0);
  }
}


void ServantStatusListViewItemDrawMain__OnClickUnSealedQuestTransitionButton(
        ServantStatusListViewItemDrawMain_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  int32_t questId; // w8
  UnityEngine_GameObject_o *inputMessageObject; // x19
  Il2CppObject *v11; // x0
  int32_t v12; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4C345F1 & 1) == 0 )
  {
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&StringLiteral_9877/*"OnClickUnSealedQuestTransition"*/);
    byte_4C345F1 = 1;
  }
  questId = this->fields.questId;
  if ( questId )
  {
    inputMessageObject = this->fields.inputMessageObject;
    v12 = questId;
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v12, v2, v3, v4, v5, v6, v7);
    if ( !inputMessageObject )
      sub_1C32E7C(v11);
    UnityEngine_GameObject__SendMessage_71205428(inputMessageObject, (System_String_o *)StringLiteral_9877/*"OnClickUnSealedQuestTransition"*/, v11, 0);
  }
}


void ServantStatusListViewItemDrawMain__ResizeCollider(
        ServantStatusListViewItemDrawMain_o *this,
        const MethodInfo *method)
{
  UnityEngine_BoxCollider_o *baseCollider; // x0
  struct UISprite_o *baseSprite; // x8
  float mHeight; // s1
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4

  baseCollider = this->fields.baseCollider;
  if ( !baseCollider
    || (size = UnityEngine_BoxCollider__get_size(baseCollider, 0), (baseSprite = this->fields.baseSprite) == 0)
    || (baseCollider = this->fields.baseCollider) == 0 )
  {
    sub_1C32E7C(baseCollider);
  }
  mHeight = (float)baseSprite->fields.mHeight;
  UnityEngine_BoxCollider__set_size(baseCollider, size, 0);
}


void ServantStatusListViewItemDrawMain__SetBaseView(
        ServantStatusListViewItemDrawMain_o *this,
        const MethodInfo *method)
{
  ServantStatusListViewItemDrawMain___c_c *v3; // x0
  System_Collections_Generic_IEnumerable_T__o *dynamicTransformsToOriginalPosYMap; // x20
  System_Action_T__o *_9__55_0; // x21
  Il2CppObject *v6; // x22
  struct ServantStatusListViewItemDrawMain___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  UIWidget_o *baseSprite; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4C345EA & 1) == 0 )
  {
    sub_1C32C20(&System_Action_KeyValuePair_Transform__float___TypeInfo);
    sub_1C32C20(&Method_BasicHelper_ForEach_KeyValuePair_Transform__float____);
    sub_1C32C20(&Method_ServantStatusListViewItemDrawMain___c__SetBaseView_b__55_0__);
    sub_1C32C20(&ServantStatusListViewItemDrawMain___c_TypeInfo);
    byte_4C345EA = 1;
  }
  v3 = ServantStatusListViewItemDrawMain___c_TypeInfo;
  dynamicTransformsToOriginalPosYMap = (System_Collections_Generic_IEnumerable_T__o *)this->fields.dynamicTransformsToOriginalPosYMap;
  if ( !ServantStatusListViewItemDrawMain___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawMain___c_TypeInfo);
    v3 = ServantStatusListViewItemDrawMain___c_TypeInfo;
  }
  _9__55_0 = (System_Action_T__o *)v3->static_fields->__9__55_0;
  if ( !_9__55_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = ServantStatusListViewItemDrawMain___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__55_0 = (System_Action_T__o *)sub_1C32E6C(System_Action_KeyValuePair_Transform__float___TypeInfo);
    System_Action_KeyValuePair_object__float_____ctor(
      _9__55_0,
      v6,
      Method_ServantStatusListViewItemDrawMain___c__SetBaseView_b__55_0__,
      0);
    static_fields = ServantStatusListViewItemDrawMain___c_TypeInfo->static_fields;
    static_fields->__9__55_0 = (struct System_Action_KeyValuePair_Transform__float___o *)_9__55_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__55_0, (int32_t)_9__55_0, v8, v9);
  }
  BasicHelper__ForEach_KeyValuePair_object__float__(
    dynamicTransformsToOriginalPosYMap,
    _9__55_0,
    (const MethodInfo_30C8474 *)Method_BasicHelper_ForEach_KeyValuePair_Transform__float____);
  baseSprite = (UIWidget_o *)this->fields.baseSprite;
  if ( !baseSprite )
    sub_1C32E7C(0);
  UIWidget__set_height(baseSprite, this->fields.baseSpriteHeightBase, 0);
  ServantStatusListViewItemDrawMain__ResizeCollider(this, v11);
}


void ServantStatusListViewItemDrawMain__SetItem(
        ServantStatusListViewItemDrawMain_o *this,
        ServantStatusListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  UIExtrusionLabel_o *levelLabel; // x21
  System_String_o *svtEntity; // x0
  UILabel_o *maxLevelLabel; // x21
  UILabel_o *costLabel; // x21
  bool IsStatusUp; // w0
  UIIconLabel_o *attackIconLabel; // x21
  bool v13; // w23
  int32_t Atk; // w22
  UIIconLabel_o *hpIconLabel; // x21
  int v16; // w23
  UIIconLabel_o *v17; // x21
  int32_t Hp; // w22
  int v19; // w23
  int32_t AdjustAtk; // w0
  UIIconLabel_o *reinforceAttackIconLabel; // x21
  int32_t v22; // w24
  int v23; // w22
  BalanceConfig_c *v24; // x8
  int32_t AdjustHp; // w0
  UIIconLabel_o *reinforceHpIconLabel; // x21
  int32_t v27; // w24
  BalanceConfig_c *v28; // x8
  int v29; // w22
  UnityEngine_Object_o *addedHpByGrandIconLabel; // x21
  UnityEngine_Object_o *addedAtkByGrandIconLabel; // x21
  UIIconLabel_o *v32; // x21
  UIIconLabel_o *v33; // x21
  UILabel_o *lateExpLabel; // x21
  int32_t v35; // w22
  ServantStatusLimitCountGauge_o *limitCountGauge; // x21
  struct ServantEntity_o *v37; // x8
  UnityEngine_Object_o *tdStrengthStatusSprite; // x21
  UISprite_o *v39; // x21
  SkillInfo_array *v40; // x8
  unsigned int v41; // w25
  unsigned __int64 v42; // x26
  __int64 max_length; // x27
  int *v44; // x22
  int32_t v45; // w21
  int32_t IconCnt; // w21
  int v47; // w22
  int i; // w29
  struct UISprite_array *skillStrengthStatusLabelList; // x8
  UISprite_o *v50; // x23
  __int64 v51; // x9
  struct UISprite_array *v52; // x8
  int v53; // w21
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x21
  UnityEngine_GameObject_o *gameObject; // x21
  UnityEngine_Object_o *baseButton; // x21
  UserServantEntity_o *userSvtEntity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x28
  bool IsHeroine; // w0
  int32_t v60; // w9
  bool v61; // w23
  int32_t v62; // w8
  _BOOL4 v63; // w21
  _BOOL4 v64; // w22
  int v65; // w29
  _BOOL4 v66; // w23
  _BOOL4 v67; // w24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v68; // x8
  ServantLimitImageMaster_o *v69; // x25
  __int64 v70; // x26
  __int64 v71; // x27
  int32_t v72; // w26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v73; // x8
  __int64 v74; // x26
  __int64 v75; // x27
  int32_t v76; // w26
  int32_t v77; // w0
  int32_t ServantLimitCountSealedQuestOpen; // w0
  _BOOL4 CanMoveCombine_k__BackingField; // w8
  _BOOL4 v80; // w25
  UnityEngine_GameObject_o *reinforceObject; // x0
  float v82; // s0
  UnityEngine_GameObject_o *v83; // x0
  int v84; // w8
  UnityEngine_GameObject_o *limitCountUpObject; // x0
  float v86; // s0
  float v87; // s8
  float v88; // s0
  UnityEngine_GameObject_o **p_levelExceedObject; // x8
  const MethodInfo *v90; // x2
  _BOOL4 IsTransformServant_k__BackingField; // w21
  UILabel_o *transformNameLabel; // x21
  const MethodInfo *v93; // x2
  const MethodInfo *v94; // x1
  const MethodInfo *v95; // x1
  int32_t maxFriendshipRank[2]; // [xsp+20h] [xbp-B0h] BYREF
  __int64 fraction; // [xsp+28h] [xbp-A8h] BYREF
  int32_t max[2]; // [xsp+30h] [xbp-A0h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+38h] [xbp-98h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+40h] [xbp-90h] BYREF
  __int64 barExp; // [xsp+48h] [xbp-88h] BYREF
  int32_t exp[2]; // [xsp+50h] [xbp-80h] BYREF
  int32_t secondMaxAdjustAtk[2]; // [xsp+58h] [xbp-78h] BYREF
  int32_t maxAjustAtk[2]; // [xsp+68h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v105; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v106; // 0:x0.16

  if ( (byte_4C345EB & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&ServantSkillStrengthStatus_TypeInfo);
    sub_1C32C20(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C345EB = 1;
  }
  *(_QWORD *)maxAjustAtk = 0;
  *(_QWORD *)exp = 0;
  *(_QWORD *)secondMaxAdjustAtk = 0;
  tdInfo = 0;
  barExp = 0;
  *(_QWORD *)max = 0;
  skillInfoList = 0;
  *(_QWORD *)maxFriendshipRank = 0;
  fraction = 0;
  this->fields.dispMode = mode;
  if ( item && mode )
  {
    ServantStatusListViewItemDrawMain__SetBaseView(this, (const MethodInfo *)item);
    levelLabel = this->fields.levelLabel;
    exp[1] = ServantStatusListViewItem__get_Level(item, 0);
    svtEntity = System_Int32__ToString((int32_t)&exp[1], 0);
    if ( !levelLabel )
      goto LABEL_236;
    UIExtrusionLabel__set_text(levelLabel, svtEntity, 0);
    maxLevelLabel = this->fields.maxLevelLabel;
    exp[1] = ServantStatusListViewItem__get_MaxLevel(item, 0);
    svtEntity = System_Int32__ToString((int32_t)&exp[1], 0);
    if ( !maxLevelLabel )
      goto LABEL_236;
    UILabel__set_text(maxLevelLabel, svtEntity, 0);
    costLabel = this->fields.costLabel;
    exp[1] = ServantStatusListViewItem__get_Cost(item, 0);
    svtEntity = System_Int32__ToString((int32_t)&exp[1], 0);
    if ( !costLabel )
      goto LABEL_236;
    UILabel__set_text(costLabel, svtEntity, 0);
    svtEntity = (System_String_o *)item->fields.svtEntity;
    if ( !svtEntity )
      goto LABEL_236;
    IsStatusUp = ServantEntity__get_IsStatusUp((ServantEntity_o *)svtEntity, 0);
    attackIconLabel = this->fields.attackIconLabel;
    v13 = IsStatusUp;
    Atk = ServantStatusListViewItem__get_Atk(item, 0);
    if ( v13 )
    {
      svtEntity = (System_String_o *)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      if ( !attackIconLabel )
        goto LABEL_236;
      UIIconLabel__Set_41010828(
        attackIconLabel,
        39,
        BalanceConfig_TypeInfo->static_fields->StatusUpAdjustAtk * Atk,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0);
      hpIconLabel = this->fields.hpIconLabel;
      svtEntity = (System_String_o *)ServantStatusListViewItem__get_Hp(item, 0);
      if ( !hpIconLabel )
        goto LABEL_236;
      UIIconLabel__Set_41010828(
        hpIconLabel,
        38,
        BalanceConfig_TypeInfo->static_fields->StatusUpAdjustHp * (_DWORD)svtEntity,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0);
    }
    else
    {
      svtEntity = (System_String_o *)ServantStatusListViewItem__get_AdjustAtk(item, 0);
      if ( !item->fields._GrandInfo_k__BackingField )
        goto LABEL_236;
      v16 = (int)svtEntity;
      svtEntity = (System_String_o *)UserServantGrandInfo__get_AddedAtk(item->fields._GrandInfo_k__BackingField, 0);
      if ( !attackIconLabel )
        goto LABEL_236;
      UIIconLabel__Set_41010828(attackIconLabel, 5, Atk, (_DWORD)svtEntity + v16, 0, 0, 0, 0, 0, 0, 0);
      v17 = this->fields.hpIconLabel;
      Hp = ServantStatusListViewItem__get_Hp(item, 0);
      svtEntity = (System_String_o *)ServantStatusListViewItem__get_AdjustHp(item, 0);
      if ( !item->fields._GrandInfo_k__BackingField )
        goto LABEL_236;
      v19 = (int)svtEntity;
      svtEntity = (System_String_o *)UserServantGrandInfo__get_AddedHp(item->fields._GrandInfo_k__BackingField, 0);
      if ( !v17 )
        goto LABEL_236;
      UIIconLabel__Set_41010828(v17, 3, Hp, (_DWORD)svtEntity + v19, 0, 0, 0, 0, 0, 0, 0);
    }
    if ( ServantStatusListViewItem__GetAdjustMax(
           item,
           &maxAjustAtk[1],
           maxAjustAtk,
           &secondMaxAdjustAtk[1],
           secondMaxAdjustAtk,
           0) )
    {
      AdjustAtk = ServantStatusListViewItem__get_AdjustAtk(item, 0);
      reinforceAttackIconLabel = this->fields.reinforceAttackIconLabel;
      if ( AdjustAtk >= maxAjustAtk[0] )
        v22 = secondMaxAdjustAtk[0];
      else
        v22 = maxAjustAtk[0];
      svtEntity = (System_String_o *)ServantStatusListViewItem__get_AdjustAtk(item, 0);
      v23 = (int)svtEntity;
      v24 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v24 = BalanceConfig_TypeInfo;
      }
      if ( !reinforceAttackIconLabel )
        goto LABEL_236;
      UIIconLabel__Set_41010828(
        reinforceAttackIconLabel,
        45,
        v24->static_fields->StatusUpAdjustHp * v23,
        v24->static_fields->StatusUpAdjustHp * v22,
        0,
        0,
        0,
        0,
        0,
        0,
        0);
      svtEntity = (System_String_o *)this->fields.reinforceAttackMaxLabel;
      if ( !svtEntity )
        goto LABEL_236;
      UILabel__set_text((UILabel_o *)svtEntity, (System_String_o *)StringLiteral_1/*""*/, 0);
      AdjustHp = ServantStatusListViewItem__get_AdjustHp(item, 0);
      reinforceHpIconLabel = this->fields.reinforceHpIconLabel;
      if ( AdjustHp >= maxAjustAtk[1] )
        v27 = secondMaxAdjustAtk[1];
      else
        v27 = maxAjustAtk[1];
      svtEntity = (System_String_o *)ServantStatusListViewItem__get_AdjustHp(item, 0);
      v28 = BalanceConfig_TypeInfo;
      v29 = (int)svtEntity;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v28 = BalanceConfig_TypeInfo;
      }
      if ( !reinforceHpIconLabel )
        goto LABEL_236;
      UIIconLabel__Set_41010828(
        reinforceHpIconLabel,
        44,
        v28->static_fields->StatusUpAdjustHp * v29,
        v28->static_fields->StatusUpAdjustHp * v27,
        0,
        0,
        0,
        0,
        0,
        0,
        0);
    }
    else
    {
      svtEntity = (System_String_o *)this->fields.reinforceAttackIconLabel;
      if ( !svtEntity )
        goto LABEL_236;
      UIIconLabel__Clear((UIIconLabel_o *)svtEntity, 0);
      svtEntity = (System_String_o *)this->fields.reinforceAttackMaxLabel;
      if ( !svtEntity )
        goto LABEL_236;
      UILabel__set_text((UILabel_o *)svtEntity, (System_String_o *)StringLiteral_1/*""*/, 0);
      svtEntity = (System_String_o *)this->fields.reinforceHpIconLabel;
      if ( !svtEntity )
        goto LABEL_236;
      UIIconLabel__Clear((UIIconLabel_o *)svtEntity, 0);
    }
    svtEntity = (System_String_o *)this->fields.reinforceHpMaxLabel;
    if ( !svtEntity )
      goto LABEL_236;
    UILabel__set_text((UILabel_o *)svtEntity, (System_String_o *)StringLiteral_1/*""*/, 0);
    addedHpByGrandIconLabel = (UnityEngine_Object_o *)this->fields.addedHpByGrandIconLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(addedHpByGrandIconLabel, 0, 0) )
    {
      addedAtkByGrandIconLabel = (UnityEngine_Object_o *)this->fields.addedAtkByGrandIconLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(addedAtkByGrandIconLabel, 0, 0) )
      {
        svtEntity = (System_String_o *)item->fields._GrandInfo_k__BackingField;
        if ( !svtEntity )
          goto LABEL_236;
        svtEntity = (System_String_o *)UserServantGrandInfo__IsValid((UserServantGrandInfo_o *)svtEntity, 0);
        v32 = this->fields.addedHpByGrandIconLabel;
        if ( ((unsigned __int8)svtEntity & 1) != 0 )
        {
          svtEntity = (System_String_o *)item->fields._GrandInfo_k__BackingField;
          if ( !svtEntity )
            goto LABEL_236;
          svtEntity = (System_String_o *)UserServantGrandInfo__get_AddedHp((UserServantGrandInfo_o *)svtEntity, 0);
          if ( !v32 )
            goto LABEL_236;
          UIIconLabel__Set_41010828(v32, 58, (int32_t)svtEntity, 0, 0, 0, 0, 0, 0, 0, 0);
          svtEntity = (System_String_o *)item->fields._GrandInfo_k__BackingField;
          if ( !svtEntity )
            goto LABEL_236;
          v33 = this->fields.addedAtkByGrandIconLabel;
          svtEntity = (System_String_o *)UserServantGrandInfo__get_AddedAtk((UserServantGrandInfo_o *)svtEntity, 0);
          if ( !v33 )
            goto LABEL_236;
          UIIconLabel__Set_41010828(v33, 59, (int32_t)svtEntity, 0, 0, 0, 0, 0, 0, 0, 0);
        }
        else
        {
          if ( !v32 )
            goto LABEL_236;
          UIIconLabel__Clear(this->fields.addedHpByGrandIconLabel, 0);
          svtEntity = (System_String_o *)this->fields.addedAtkByGrandIconLabel;
          if ( !svtEntity )
            goto LABEL_236;
          UIIconLabel__Clear((UIIconLabel_o *)svtEntity, 0);
        }
      }
    }
    svtEntity = (System_String_o *)ServantStatusListViewItem__GetExpInfo(
                                     item,
                                     exp,
                                     (int32_t *)&barExp + 1,
                                     (float *)&barExp,
                                     0);
    if ( !this->fields.expBase )
      goto LABEL_236;
    if ( ((unsigned __int8)svtEntity & 1) != 0 )
    {
      UnityEngine_GameObject__SetActive(this->fields.expBase, 1, 0);
      svtEntity = (System_String_o *)this->fields.lateExpBase;
      if ( !svtEntity )
        goto LABEL_236;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, SHIDWORD(barExp) > 0, 0);
      lateExpLabel = this->fields.lateExpLabel;
      v35 = HIDWORD(barExp);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      svtEntity = LocalizationManager__GetNumberFormat(v35, 0);
      if ( !lateExpLabel )
        goto LABEL_236;
      UILabel__set_text(lateExpLabel, svtEntity, 0);
      svtEntity = (System_String_o *)this->fields.expBar;
      if ( !svtEntity )
        goto LABEL_236;
      UIProgressBar__set_value((UIProgressBar_o *)svtEntity, *(float *)&barExp, 0);
    }
    else
    {
      UnityEngine_GameObject__SetActive(this->fields.expBase, 0, 0);
    }
    limitCountGauge = this->fields.limitCountGauge;
    svtEntity = (System_String_o *)ServantStatusListViewItem__get_LimitCount(item, 0);
    v37 = item->fields.svtEntity;
    if ( !v37 || !limitCountGauge )
      goto LABEL_236;
    ServantStatusLimitCountGauge__Set(limitCountGauge, (int32_t)svtEntity, v37->fields.limitMax, 0);
    tdStrengthStatusSprite = (UnityEngine_Object_o *)this->fields.tdStrengthStatusSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(tdStrengthStatusSprite, 0, 0) )
    {
      svtEntity = (System_String_o *)ServantStatusListViewItem__GetNpInfo(item, &tdInfo, 0);
      if ( !tdInfo )
        goto LABEL_236;
      v39 = this->fields.tdStrengthStatusSprite;
      svtEntity = StrengthStatus__GetTreasureDeviceIconName(
                    tdInfo->fields.strengthStatus,
                    tdInfo->fields.treasureDeviceNum,
                    0);
      if ( !v39 )
        goto LABEL_236;
      UISprite__set_spriteName(v39, svtEntity, 0);
    }
    if ( this->fields.skillStrengthStatusLabelList )
    {
      ServantStatusListViewItem__GetSkillInfo(item, &skillInfoList, 0, 0);
      v40 = skillInfoList;
      if ( skillInfoList && (int)skillInfoList->max_length >= 1 )
      {
        v41 = 0;
        v42 = 0;
        max_length = (unsigned int)skillInfoList->max_length;
        while ( v42 < LODWORD(v40->max_length) )
        {
          v44 = (int *)v40->m_Items[v42];
          if ( v44 && v44[4] >= 1 && v44[12] )
          {
            v45 = v44[13];
            if ( !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
            IconCnt = ServantSkillStrengthStatus__GetIconCnt(v45, 0);
            svtEntity = (System_String_o *)ServantSkillStrengthStatus__GetStrengthenedCnt(v44[12], v44[13], 0);
            if ( IconCnt >= 1 )
            {
              v47 = (int)svtEntity;
              for ( i = 0; i != IconCnt; ++i )
              {
                skillStrengthStatusLabelList = this->fields.skillStrengthStatusLabelList;
                if ( !skillStrengthStatusLabelList )
                  goto LABEL_236;
                if ( v41 + i >= LODWORD(skillStrengthStatusLabelList->max_length) )
                  goto LABEL_237;
                svtEntity = (System_String_o *)ServantSkillStrengthStatus_TypeInfo;
                v50 = skillStrengthStatusLabelList->m_Items[v41 + i];
                if ( !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
                  svtEntity = (System_String_o *)ServantSkillStrengthStatus_TypeInfo;
                }
                if ( i >= v47 )
                {
                  if ( !v50 )
                    goto LABEL_236;
                  v51 = 32;
                }
                else
                {
                  if ( !v50 )
                    goto LABEL_236;
                  v51 = 24;
                }
                UISprite__set_spriteName(v50, *(System_String_o **)(*(_QWORD *)&svtEntity[7].fields + v51), 0);
              }
              v41 += i;
            }
          }
          if ( ++v42 == max_length )
            goto LABEL_100;
          v40 = skillInfoList;
          if ( !skillInfoList )
            goto LABEL_236;
        }
LABEL_237:
        sub_1C32E84(svtEntity);
      }
      v41 = 0;
LABEL_100:
      v52 = this->fields.skillStrengthStatusLabelList;
      if ( !v52 )
        goto LABEL_236;
      v53 = v52->max_length;
      if ( (int)v41 < v53 )
      {
        while ( v41 < LODWORD(v52->max_length) )
        {
          svtEntity = (System_String_o *)v52->m_Items[v41];
          if ( !svtEntity )
            goto LABEL_236;
          UISprite__set_spriteName((UISprite_o *)svtEntity, 0, 0);
          if ( v53 == ++v41 )
            goto LABEL_107;
          v52 = this->fields.skillStrengthStatusLabelList;
          if ( !v52 )
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
    svtEntity = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)svtEntity, 0);
    if ( !svtEntity )
      goto LABEL_236;
    if ( userSvtCollectionEntity )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 1, 0);
      ServantStatusListViewItem__GetFriendshipInfo(item, &max[1], max, (int32_t *)&fraction + 1, (float *)&fraction, 0);
      svtEntity = (System_String_o *)this->fields.friendshipGauge;
      if ( !svtEntity )
        goto LABEL_236;
      ServantStatusFriendshipGauge__Set(
        (ServantStatusFriendshipGauge_o *)svtEntity,
        max[1],
        max[0],
        SHIDWORD(fraction),
        *(float *)&fraction,
        0);
    }
    else
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 0, 0);
    }
    svtEntity = (System_String_o *)this->fields.eventJoinSprite;
    if ( !svtEntity
      || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)svtEntity, 0),
          svtEntity = (System_String_o *)ServantStatusListViewItem__get_IsEventJoin(item, 0),
          !gameObject) )
    {
LABEL_236:
      sub_1C32E7C(svtEntity);
    }
    UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)svtEntity & 1, 0);
    baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__op_Inequality(baseButton, 0, 0);
    if ( !item->fields._IsDisplayCombineButton_k__BackingField
      || (p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&item->fields.userSvtEntity,
          (userSvtEntity = item->fields.userSvtEntity) == 0) )
    {
LABEL_224:
      svtEntity = (System_String_o *)this->fields.transformNameSprite;
      if ( svtEntity )
      {
        IsTransformServant_k__BackingField = item->fields._IsTransformServant_k__BackingField;
        svtEntity = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)svtEntity, 0);
        if ( svtEntity )
        {
          if ( IsTransformServant_k__BackingField )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 1, 0);
            transformNameLabel = this->fields.transformNameLabel;
            svtEntity = ServantStatusListViewItem__GetTransformName(item, 0);
            if ( !transformNameLabel )
              goto LABEL_236;
            UILabel__set_text(transformNameLabel, svtEntity, 0);
            ServantStatusListViewItemDrawMain__AddAreaHeight(this, this->fields.transformNameAddHeight, v93);
            GameObjectExtensions__AddLocalPositionY(
              this->fields.mainContentsRoot,
              (float)-this->fields.transformNameAddHeight,
              0);
            GameObjectExtensions__AddLocalPositionY(
              this->fields.combineRoot,
              (float)-this->fields.transformNameAddHeight,
              0);
          }
          else
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 0, 0);
          }
          svtEntity = (System_String_o *)item->fields._GrandInfo_k__BackingField;
          if ( svtEntity )
          {
            if ( UserServantGrandInfo__IsValid((UserServantGrandInfo_o *)svtEntity, 0) )
              ServantStatusListViewItemDrawMain__AdjustLayoutByInsertGrandEnforcementInfo(this, v94);
            ServantStatusListViewItemDrawMain__ResizeCollider(this, v94);
            ServantStatusListViewItemDrawMain__AdjustBaseUiPosY(this, v95);
            return;
          }
        }
      }
      goto LABEL_236;
    }
    IsHeroine = UserServantEntity__IsHeroine(userSvtEntity, 0);
    v60 = -1;
    maxFriendshipRank[0] = -1;
    maxFriendshipRank[1] = -1;
    v61 = IsHeroine;
    if ( item->fields.userSvtCollectionEntity )
    {
      UserServantCollectionEntity__getFriendShipRankInfo(
        item->fields.userSvtCollectionEntity,
        &maxFriendshipRank[1],
        maxFriendshipRank,
        0);
      v60 = maxFriendshipRank[0];
      v62 = maxFriendshipRank[1];
    }
    else
    {
      v62 = -1;
    }
    v63 = 0;
    if ( v62 == v60 && ((v60 | v62) & 0x80000000) == 0 )
    {
      svtEntity = (System_String_o *)*p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_236;
      if ( !UserServantEntity__isExceedFriendshipMax((UserServantEntity_o *)svtEntity, 0) )
      {
        svtEntity = (System_String_o *)*p_userSvtEntity;
        if ( !*p_userSvtEntity )
          goto LABEL_236;
        if ( !UserServantEntity__IsEventJoin((UserServantEntity_o *)svtEntity, 0) )
        {
          if ( v61 )
          {
            svtEntity = (System_String_o *)*p_userSvtEntity;
            if ( !*p_userSvtEntity )
              goto LABEL_236;
            if ( !UserServantEntity__IsUseFriendshipExceedItemHeroine((UserServantEntity_o *)svtEntity, 0) )
            {
              v63 = 0;
              v64 = 0;
              v65 = 0;
              goto LABEL_143;
            }
          }
          svtEntity = (System_String_o *)this->fields.bondLimitUpObject;
          if ( !svtEntity )
            goto LABEL_236;
          v63 = 1;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 1, 0);
          svtEntity = (System_String_o *)this->fields.bondLimitUpButton;
          if ( !svtEntity )
            goto LABEL_236;
          BYTE1(svtEntity[4].klass) = 1;
          UICommonButton__SetEnable((UICommonButton_o *)svtEntity, item->fields._CanMoveCombine_k__BackingField, 0);
          if ( !v61 )
            goto LABEL_130;
          goto LABEL_142;
        }
      }
      v63 = 0;
    }
    if ( !v61 )
    {
LABEL_130:
      svtEntity = (System_String_o *)*p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_236;
      if ( UserServantEntity__isLevelMax((UserServantEntity_o *)svtEntity, 0) )
      {
        svtEntity = (System_String_o *)*p_userSvtEntity;
        if ( !*p_userSvtEntity )
          goto LABEL_236;
        if ( !UserServantEntity__isLimitCountMax((UserServantEntity_o *)svtEntity, 0) )
        {
          svtEntity = (System_String_o *)this->fields.limitCountUpButton;
          if ( !svtEntity )
            goto LABEL_236;
          v64 = 1;
          BYTE1(svtEntity[4].klass) = 1;
          v65 = v63 + 1;
          UICommonButton__SetEnable((UICommonButton_o *)svtEntity, item->fields._CanMoveCombine_k__BackingField, 0);
          goto LABEL_143;
        }
      }
    }
LABEL_142:
    v64 = 0;
    v65 = v63;
LABEL_143:
    svtEntity = (System_String_o *)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_236;
    if ( !UserServantEntity__isLevelMax((UserServantEntity_o *)svtEntity, 0) )
      goto LABEL_156;
    svtEntity = (System_String_o *)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_236;
    if ( UserServantEntity__isExceedLvMax((UserServantEntity_o *)svtEntity, 0) )
      goto LABEL_156;
    svtEntity = (System_String_o *)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_236;
    if ( UserServantEntity__IsEventJoin((UserServantEntity_o *)svtEntity, 0) )
      goto LABEL_156;
    svtEntity = (System_String_o *)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_236;
    if ( !UserServantEntity__isLimitCountMax((UserServantEntity_o *)svtEntity, 0) )
      goto LABEL_156;
    if ( !v61 )
      goto LABEL_154;
    svtEntity = (System_String_o *)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_236;
    if ( !UserServantEntity__IsUseLevelExceedItemHeroine((UserServantEntity_o *)svtEntity, 0) )
    {
LABEL_156:
      v66 = 0;
    }
    else
    {
LABEL_154:
      svtEntity = (System_String_o *)this->fields.levelExceedButton;
      if ( !svtEntity )
        goto LABEL_236;
      v66 = 1;
      BYTE1(svtEntity[4].klass) = 1;
      ++v65;
      UICommonButton__SetEnable((UICommonButton_o *)svtEntity, item->fields._CanMoveCombine_k__BackingField, 0);
    }
    svtEntity = (System_String_o *)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_236;
    if ( UserServantEntity__IsLeave((UserServantEntity_o *)svtEntity, 0) )
      goto LABEL_159;
    svtEntity = (System_String_o *)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_236;
    if ( !UserServantEntity__isLevelMax((UserServantEntity_o *)svtEntity, 0) )
      goto LABEL_166;
    svtEntity = (System_String_o *)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_236;
    if ( !UserServantEntity__isSecondAdjustAtkMax((UserServantEntity_o *)svtEntity, 0) )
      goto LABEL_166;
    svtEntity = (System_String_o *)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_236;
    if ( UserServantEntity__isSecondAdjustHpMax((UserServantEntity_o *)svtEntity, 0) )
    {
LABEL_159:
      v67 = 0;
    }
    else
    {
LABEL_166:
      svtEntity = (System_String_o *)this->fields.reinforceButton;
      if ( !svtEntity )
        goto LABEL_236;
      v67 = 1;
      BYTE1(svtEntity[4].klass) = 1;
      ++v65;
      UICommonButton__SetEnable((UICommonButton_o *)svtEntity, item->fields._CanMoveCombine_k__BackingField, 0);
    }
    svtEntity = (System_String_o *)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_236;
    if ( UserServantEntity__IsHeroine((UserServantEntity_o *)svtEntity, 0) )
      goto LABEL_191;
    svtEntity = (System_String_o *)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_236;
    if ( !UserServantEntity__isLimitCountMax((UserServantEntity_o *)svtEntity, 0) )
      goto LABEL_191;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    svtEntity = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    v68 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_236;
    v69 = (ServantLimitImageMaster_o *)svtEntity;
    v71 = *(_QWORD *)&v68[5].fields.currentCryptoKey;
    v70 = *(_QWORD *)&v68[5].fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v105.fields.currentCryptoKey = v71;
    *(_QWORD *)&v105.fields.fakeValue = v70;
    svtEntity = (System_String_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v105, 0);
    if ( !*p_userSvtEntity )
      goto LABEL_236;
    v72 = (int)svtEntity;
    svtEntity = (System_String_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
                                     (*p_userSvtEntity)[6],
                                     0);
    if ( !v69 )
      goto LABEL_236;
    svtEntity = (System_String_o *)ServantLimitImageMaster__IsServantLimitCountSeal(v69, v72, (int32_t)svtEntity, 0);
    if ( ((unsigned __int8)svtEntity & 1) == 0 )
      goto LABEL_191;
    v73 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_236;
    v75 = *(_QWORD *)&v73[5].fields.currentCryptoKey;
    v74 = *(_QWORD *)&v73[5].fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v106.fields.currentCryptoKey = v75;
    *(_QWORD *)&v106.fields.fakeValue = v74;
    svtEntity = (System_String_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v106, 0);
    if ( !*p_userSvtEntity )
      goto LABEL_236;
    v76 = (int)svtEntity;
    v77 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784((*p_userSvtEntity)[6], 0);
    ServantLimitCountSealedQuestOpen = ServantLimitImageMaster__GetServantLimitCountSealedQuestOpen(v69, v76, v77, 0);
    this->fields.questId = ServantLimitCountSealedQuestOpen;
    if ( !ServantLimitCountSealedQuestOpen )
      goto LABEL_191;
    svtEntity = (System_String_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    if ( !svtEntity )
      goto LABEL_236;
    if ( clsQuestCheck__CheckQuestPlayableNow((clsQuestCheck_o *)svtEntity, this->fields.questId, 0, 0) )
    {
      svtEntity = (System_String_o *)this->fields.unSealedQuestTransitionButton;
      if ( !svtEntity )
        goto LABEL_236;
      BYTE1(svtEntity[4].klass) = 1;
      CanMoveCombine_k__BackingField = item->fields._CanMoveCombine_k__BackingField;
      ++v65;
      if ( item->fields._CanMoveCombine_k__BackingField )
        CanMoveCombine_k__BackingField = item->fields.isEnableServantQuest;
      UICommonButton__SetEnable((UICommonButton_o *)svtEntity, CanMoveCombine_k__BackingField, 0);
      v80 = 1;
    }
    else
    {
LABEL_191:
      v80 = 0;
    }
    if ( v63 )
    {
      if ( v67 )
      {
        if ( v65 == 3 )
        {
          reinforceObject = this->fields.reinforceObject;
          v82 = -20.0;
          goto LABEL_203;
        }
        if ( v65 == 2 )
        {
          reinforceObject = this->fields.reinforceObject;
          v82 = 100.0;
LABEL_203:
          GameObjectExtensions__SetLocalPositionX(reinforceObject, v82, 0);
        }
      }
      if ( !v66 )
        goto LABEL_215;
      limitCountUpObject = this->fields.limitCountUpObject;
      v86 = -20.0;
      v87 = -20.0;
      goto LABEL_213;
    }
    if ( v67 )
    {
      switch ( v65 )
      {
        case 3:
          v83 = this->fields.reinforceObject;
          v88 = -20.0;
LABEL_209:
          GameObjectExtensions__SetLocalPositionX(v83, v88, 0);
          break;
        case 2:
          v83 = this->fields.reinforceObject;
          v84 = 1120403456;
          goto LABEL_208;
        case 1:
          v83 = this->fields.reinforceObject;
          v84 = 1130102784;
LABEL_208:
          v88 = *(float *)&v84;
          goto LABEL_209;
      }
    }
    if ( v66 )
    {
      p_levelExceedObject = &this->fields.levelExceedObject;
      v87 = 220.0;
LABEL_214:
      GameObjectExtensions__SetLocalPositionX(*p_levelExceedObject, v87, 0);
LABEL_215:
      svtEntity = (System_String_o *)this->fields.bondLimitUpObject;
      if ( !svtEntity )
        goto LABEL_236;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, v63, 0);
      svtEntity = (System_String_o *)this->fields.limitCountUpObject;
      if ( !svtEntity )
        goto LABEL_236;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, v64, 0);
      svtEntity = (System_String_o *)this->fields.levelExceedObject;
      if ( !svtEntity )
        goto LABEL_236;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, v66, 0);
      svtEntity = (System_String_o *)this->fields.reinforceObject;
      if ( !svtEntity )
        goto LABEL_236;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, v67, 0);
      svtEntity = (System_String_o *)this->fields.unSealedQuestTransitionObject;
      if ( !svtEntity )
        goto LABEL_236;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, v80, 0);
      if ( v63 || v66 || v64 || v67 || v80 )
      {
        svtEntity = (System_String_o *)this->fields.reinforceMaskSprite;
        if ( !svtEntity )
          goto LABEL_236;
        svtEntity = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)svtEntity, 0);
        if ( !svtEntity )
          goto LABEL_236;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 1, 0);
        ServantStatusListViewItemDrawMain__AddAreaHeight(this, 46, v90);
      }
      goto LABEL_224;
    }
    limitCountUpObject = this->fields.limitCountUpObject;
    v87 = 220.0;
    v86 = 220.0;
LABEL_213:
    GameObjectExtensions__SetLocalPositionX(limitCountUpObject, v86, 0);
    p_levelExceedObject = &this->fields.unSealedQuestTransitionObject;
    goto LABEL_214;
  }
}


void ServantStatusListViewItemDrawMain___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C345F2 & 1) == 0 )
  {
    sub_1C32C20(&ServantStatusListViewItemDrawMain___c_TypeInfo);
    byte_4C345F2 = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(ServantStatusListViewItemDrawMain___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantStatusListViewItemDrawMain___c_TypeInfo->static_fields->__9 = (struct ServantStatusListViewItemDrawMain___c_o *)v1;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)ServantStatusListViewItemDrawMain___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void ServantStatusListViewItemDrawMain___c___ctor(
        ServantStatusListViewItemDrawMain___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ServantStatusListViewItemDrawMain___c___AdjustLayoutByInsertGrandEnforcementInfo_b__57_0(
        ServantStatusListViewItemDrawMain___c_o *this,
        UnityEngine_Transform_o *x,
        const MethodInfo *method)
{
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( !x
    || (this = (ServantStatusListViewItemDrawMain___c_o *)UnityEngine_Component__get_transform(
                                                            (UnityEngine_Component_o *)x,
                                                            0)) == 0 )
  {
    sub_1C32E7C(this);
  }
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  TransformHelper__SetLocalPositionY(x, localPosition.fields.y + -25.0, 0);
}


UnityEngine_Transform_o *ServantStatusListViewItemDrawMain___c___Awake_b__53_0(
        ServantStatusListViewItemDrawMain___c_o *this,
        UnityEngine_Transform_o *x,
        const MethodInfo *method)
{
  return x;
}


float ServantStatusListViewItemDrawMain___c___Awake_b__53_1(
        ServantStatusListViewItemDrawMain___c_o *this,
        UnityEngine_Transform_o *x,
        const MethodInfo *method)
{
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( !x )
    sub_1C32E7C(this);
  localPosition = UnityEngine_Transform__get_localPosition(x, 0);
  return localPosition.fields.y;
}


void ServantStatusListViewItemDrawMain___c___SetBaseView_b__55_0(
        ServantStatusListViewItemDrawMain___c_o *this,
        System_Collections_Generic_KeyValuePair_Transform__float__o x,
        const MethodInfo *method)
{
  float value; // w19
  UnityEngine_Transform_o *key; // x20

  value = x.fields.value;
  key = x.fields.key;
  if ( (byte_4C345F3 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_KeyValuePair_Transform__float__get_Key__);
    sub_1C32C20(&Method_System_Collections_Generic_KeyValuePair_Transform__float__get_Value__);
    byte_4C345F3 = 1;
  }
  TransformHelper__SetLocalPositionY(key, value, 0);
}