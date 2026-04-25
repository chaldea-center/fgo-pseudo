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
    sub_1CE6958(0, sizeY);
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
    sub_1CE6958(this, method);
  mHeight = baseSprite->fields.mHeight;
  baseSpriteHeightBase = this->fields.baseSpriteHeightBase;
  if ( !byte_4DFE732 )
  {
    sub_1CE6700(&System_Math_TypeInfo);
    byte_4DFE732 = 1;
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
  System_Action_object__o *_9__66_0; // x20
  Il2CppObject *v7; // x21
  struct ServantStatusListViewItemDrawMain___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  if ( (byte_4E01AA7 & 1) == 0 )
  {
    sub_1CE6700(&System_Action_Transform__TypeInfo);
    sub_1CE6700(&Method_BasicHelper_ForEach_Transform___);
    sub_1CE6700(&Method_ServantStatusListViewItemDrawMain___c__AdjustLayoutByInsertGrandEnforcementInfo_b__66_0__);
    sub_1CE6700(&ServantStatusListViewItemDrawMain___c_TypeInfo);
    byte_4E01AA7 = 1;
  }
  ServantStatusListViewItemDrawMain__AddAreaHeight(this, 25, v2);
  v4 = ServantStatusListViewItemDrawMain___c_TypeInfo;
  transformsShiftYByInsertGrandUi = (System_Collections_Generic_IEnumerable_T__o *)this->fields.transformsShiftYByInsertGrandUi;
  if ( !ServantStatusListViewItemDrawMain___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawMain___c_TypeInfo);
    v4 = ServantStatusListViewItemDrawMain___c_TypeInfo;
  }
  _9__66_0 = (System_Action_object__o *)v4->static_fields->__9__66_0;
  if ( !_9__66_0 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = ServantStatusListViewItemDrawMain___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v4->static_fields->__9;
    _9__66_0 = (System_Action_object__o *)sub_1CE694C(System_Action_Transform__TypeInfo);
    System_Action_object____ctor(
      _9__66_0,
      v7,
      Method_ServantStatusListViewItemDrawMain___c__AdjustLayoutByInsertGrandEnforcementInfo_b__66_0__,
      0);
    static_fields = ServantStatusListViewItemDrawMain___c_TypeInfo->static_fields;
    static_fields->__9__66_0 = (struct System_Action_Transform__o *)_9__66_0;
    sub_1CE66A4(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__66_0,
      (int32_t)_9__66_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  BasicHelper__ForEach_object_(
    transformsShiftYByInsertGrandUi,
    (System_Action_T__o *)_9__66_0,
    (const MethodInfo_31F00FC *)Method_BasicHelper_ForEach_Transform___);
}


void ServantStatusListViewItemDrawMain__Awake(ServantStatusListViewItemDrawMain_o *this, const MethodInfo *method)
{
  ServantStatusListViewItemDrawMain_o *v2; // x19
  struct UISprite_o *baseSprite; // x8
  ServantStatusListViewItemDrawMain_o *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  ServantStatusListViewItemDrawMain_o *v11; // x21
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  ServantStatusListViewItemDrawMain_o *v18; // x21
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  ServantStatusListViewItemDrawMain_o *v25; // x21
  long double inited; // q0
  System_Collections_Generic_IEnumerable_TSource__o *transformsShiftYByInsertGrandUi; // x1
  _QWORD *v28; // x21
  __int64 v29; // x8
  __int64 v30; // x0
  __int64 v31; // x0
  System_Collections_Generic_IEnumerable_T__o *v32; // x0
  System_Collections_Generic_IEnumerable_T__o *v33; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x0
  ServantStatusListViewItemDrawMain___c_c *v35; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x20
  System_Func_object__object__o *_9__62_0; // x21
  Il2CppObject *v38; // x22
  struct ServantStatusListViewItemDrawMain___c_StaticFields *static_fields; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  System_Func_T__TResult__o *_9__62_1; // x22
  Il2CppObject *v47; // x23
  struct ServantStatusListViewItemDrawMain___c_StaticFields *v48; // x0
  int32_t v49; // w2
  int32_t v50; // w3
  System_String_o *v51; // x4
  int32_t v52; // w5
  int64_t v53; // x6
  System_String_o *v54; // x7
  System_Collections_Generic_Dictionary_TKey__TElement__o *v55; // x1
  int32_t v56; // w2
  int32_t v57; // w3
  System_String_o *v58; // x4
  int32_t v59; // w5
  int64_t v60; // x6
  System_String_o *v61; // x7
  __int64 v62; // x0

  v2 = this;
  if ( (byte_4E01AA4 & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Array_Empty_Transform___);
    sub_1CE6700(&Method_BasicHelper_ExcludeNull_Transform___);
    sub_1CE6700(&Method_System_Linq_Enumerable_Concat_Transform___);
    sub_1CE6700(&Method_System_Linq_Enumerable_Distinct_Transform___);
    sub_1CE6700(&Method_System_Linq_Enumerable_ToDictionary_Transform__Transform__float___);
    sub_1CE6700(&System_Func_Transform__float__TypeInfo);
    sub_1CE6700(&System_Func_Transform__Transform__TypeInfo);
    sub_1CE6700(&UnityEngine_Transform___TypeInfo);
    sub_1CE6700(&Method_ServantStatusListViewItemDrawMain___c__Awake_b__62_0__);
    sub_1CE6700(&Method_ServantStatusListViewItemDrawMain___c__Awake_b__62_1__);
    this = (ServantStatusListViewItemDrawMain_o *)sub_1CE6700(&ServantStatusListViewItemDrawMain___c_TypeInfo);
    byte_4E01AA4 = 1;
  }
  baseSprite = v2->fields.baseSprite;
  if ( !baseSprite )
    goto LABEL_40;
  v2->fields.baseSpriteHeightBase = baseSprite->fields.mHeight;
  this = (ServantStatusListViewItemDrawMain_o *)sub_1CE67A8(UnityEngine_Transform___TypeInfo, 3);
  if ( !v2->fields.baseUi )
    goto LABEL_40;
  v4 = this;
  this = (ServantStatusListViewItemDrawMain_o *)UnityEngine_GameObject__get_transform(v2->fields.baseUi, 0);
  if ( !v4 )
    goto LABEL_40;
  v11 = this;
  if ( this )
  {
    this = (ServantStatusListViewItemDrawMain_o *)sub_1CE683C(this, v4->klass->_1.element_class);
    if ( !this )
      goto LABEL_42;
  }
  if ( !LODWORD(v4->fields.m_CancellationTokenSource) )
    goto LABEL_41;
  *(_QWORD *)&v4->fields.dispMode = v11;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v4->fields.dispMode, (int32_t)v11, v5, v6, v7, v8, v9, v10);
  this = (ServantStatusListViewItemDrawMain_o *)v2->fields.mainContentsRoot;
  if ( !this )
    goto LABEL_40;
  this = (ServantStatusListViewItemDrawMain_o *)UnityEngine_GameObject__get_transform(
                                                  (UnityEngine_GameObject_o *)this,
                                                  0);
  v18 = this;
  if ( this )
  {
    this = (ServantStatusListViewItemDrawMain_o *)sub_1CE683C(this, v4->klass->_1.element_class);
    if ( !this )
    {
LABEL_42:
      v62 = sub_1CE697C();
      sub_1CE6828(v62, 0);
    }
  }
  if ( LODWORD(v4->fields.m_CancellationTokenSource) <= 1 )
    goto LABEL_41;
  v4->fields.baseButton = (struct UICommonButton_o *)v18;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v4->fields.baseButton, (int32_t)v18, v12, v13, v14, v15, v16, v17);
  this = (ServantStatusListViewItemDrawMain_o *)v2->fields.combineRoot;
  if ( !this )
LABEL_40:
    sub_1CE6958(this, method);
  this = (ServantStatusListViewItemDrawMain_o *)UnityEngine_GameObject__get_transform(
                                                  (UnityEngine_GameObject_o *)this,
                                                  0);
  v25 = this;
  if ( this )
  {
    this = (ServantStatusListViewItemDrawMain_o *)sub_1CE683C(this, v4->klass->_1.element_class);
    if ( !this )
      goto LABEL_42;
  }
  if ( LODWORD(v4->fields.m_CancellationTokenSource) <= 2 )
LABEL_41:
    sub_1CE6960(this);
  v4->fields.servantTexture = (struct UITexture_o *)v25;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v4->fields.servantTexture, (int32_t)v25, v19, v20, v21, v22, v23, v24);
  transformsShiftYByInsertGrandUi = (System_Collections_Generic_IEnumerable_TSource__o *)v2->fields.transformsShiftYByInsertGrandUi;
  if ( !transformsShiftYByInsertGrandUi )
  {
    v28 = Method_System_Array_Empty_Transform___;
    v29 = *((_QWORD *)Method_System_Array_Empty_Transform___ + 7);
    if ( !v29 )
    {
      sub_1CBC7E4(Method_System_Array_Empty_Transform___);
      v29 = v28[7];
    }
    v30 = *(_QWORD *)(v29 + 16);
    if ( (*(_BYTE *)(v30 + 309) & 1) == 0 )
      v30 = sub_1CBC788(inited);
    if ( !*(_DWORD *)(v30 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v30);
    v31 = *(_QWORD *)(v28[7] + 16LL);
    if ( (*(_BYTE *)(v31 + 309) & 1) == 0 )
      v31 = sub_1CBC788(inited);
    transformsShiftYByInsertGrandUi = **(System_Collections_Generic_IEnumerable_TSource__o ***)(v31 + 184);
  }
  v32 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Concat_object_(
                                                         (System_Collections_Generic_IEnumerable_TSource__o *)v4,
                                                         transformsShiftYByInsertGrandUi,
                                                         (const MethodInfo_32204E8 *)Method_System_Linq_Enumerable_Concat_Transform___);
  v33 = BasicHelper__ExcludeNull_object_(v32, (const MethodInfo_31EDE30 *)Method_BasicHelper_ExcludeNull_Transform___);
  v34 = System_Linq_Enumerable__Distinct_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v33,
          (const MethodInfo_3226D84 *)Method_System_Linq_Enumerable_Distinct_Transform___);
  v35 = ServantStatusListViewItemDrawMain___c_TypeInfo;
  v36 = v34;
  if ( !ServantStatusListViewItemDrawMain___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawMain___c_TypeInfo);
    v35 = ServantStatusListViewItemDrawMain___c_TypeInfo;
  }
  _9__62_0 = (System_Func_object__object__o *)v35->static_fields->__9__62_0;
  if ( !_9__62_0 )
  {
    if ( !v35->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v35);
      v35 = ServantStatusListViewItemDrawMain___c_TypeInfo;
    }
    v38 = (Il2CppObject *)v35->static_fields->__9;
    _9__62_0 = (System_Func_object__object__o *)sub_1CE694C(System_Func_Transform__Transform__TypeInfo);
    System_Func_object__object____ctor(_9__62_0, v38, Method_ServantStatusListViewItemDrawMain___c__Awake_b__62_0__, 0);
    static_fields = ServantStatusListViewItemDrawMain___c_TypeInfo->static_fields;
    static_fields->__9__62_0 = (struct System_Func_Transform__Transform__o *)_9__62_0;
    sub_1CE66A4(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__62_0,
      (int32_t)_9__62_0,
      v40,
      v41,
      v42,
      v43,
      v44,
      v45);
    v35 = ServantStatusListViewItemDrawMain___c_TypeInfo;
  }
  if ( !v35->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v35);
    v35 = ServantStatusListViewItemDrawMain___c_TypeInfo;
  }
  _9__62_1 = (System_Func_T__TResult__o *)v35->static_fields->__9__62_1;
  if ( !_9__62_1 )
  {
    if ( !v35->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v35);
      v35 = ServantStatusListViewItemDrawMain___c_TypeInfo;
    }
    v47 = (Il2CppObject *)v35->static_fields->__9;
    _9__62_1 = (System_Func_T__TResult__o *)sub_1CE694C(System_Func_Transform__float__TypeInfo);
    System_Func_object__float____ctor(_9__62_1, v47, Method_ServantStatusListViewItemDrawMain___c__Awake_b__62_1__, 0);
    v48 = ServantStatusListViewItemDrawMain___c_TypeInfo->static_fields;
    v48->__9__62_1 = (struct System_Func_Transform__float__o *)_9__62_1;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v48->__9__62_1, (int32_t)_9__62_1, v49, v50, v51, v52, v53, v54);
  }
  v55 = System_Linq_Enumerable__ToDictionary_object__object__float_(
          v36,
          (System_Func_TSource__TKey__o *)_9__62_0,
          (System_Func_TSource__TElement__o *)_9__62_1,
          (const MethodInfo_32443EC *)Method_System_Linq_Enumerable_ToDictionary_Transform__Transform__float___);
  v2->fields.dynamicTransformsToOriginalPosYMap = (struct System_Collections_Generic_Dictionary_Transform__float__o *)v55;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&v2->fields.dynamicTransformsToOriginalPosYMap,
    (int32_t)v55,
    v56,
    v57,
    v58,
    v59,
    v60,
    v61);
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
  int32_t DispLimitCountStageSealAfterAtStageLimitCount; // w0

  if ( !item )
    sub_1CE6958(this, svtId);
  if ( item->fields._IsTransformed_k__BackingField )
  {
    *svtId = item->fields._TransformedSvtId_k__BackingField;
    DispLimitCountStageSealAfterAtStageLimitCount = ServantStatusListViewItem__GetDispLimitCountStageSealAfterAtStageLimitCount(
                                                      item,
                                                      1,
                                                      0);
  }
  else
  {
    *svtId = ServantStatusListViewItem__GetSvtId(item, 0, 0);
    DispLimitCountStageSealAfterAtStageLimitCount = ServantStatusListViewItem__GetPortraitLimitCountStageSealAfterAtStageLimitCount(
                                                      item,
                                                      0);
  }
  *limitCount = DispLimitCountStageSealAfterAtStageLimitCount;
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
  if ( (byte_4E01AA9 & 1) == 0 )
  {
    this = (ServantStatusListViewItemDrawMain_o *)sub_1CE6700(&ServantAssetLoadManager_TypeInfo);
    byte_4E01AA9 = 1;
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

  if ( (byte_4E01AAA & 1) == 0 )
  {
    sub_1CE6700(&RandomLimitCountManager_TypeInfo);
    sub_1CE6700(&ServantAssetLoadManager_TypeInfo);
    byte_4E01AAA = 1;
  }
  *(_QWORD *)limitCount = 0;
  if ( this->fields.isStart )
  {
    if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    if ( !byte_4E0020B )
    {
      sub_1CE6700(&RandomLimitCountManager_TypeInfo);
      byte_4E0020B = 1;
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
  if ( (byte_4E01AA8 & 1) == 0 )
  {
    this = (ServantStatusListViewItemDrawMain_o *)sub_1CE6700(&ServantAssetLoadManager_TypeInfo);
    byte_4E01AA8 = 1;
  }
  limitCount = 0;
  if ( !item )
    sub_1CE6958(this, item);
  v5 = (ServantStatusListViewItemDrawMain_o *)ServantStatusListViewItem__GetSvtId(item, 0, 0);
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


void ServantStatusListViewItemDrawMain__OnClickSaveTransform(
        ServantStatusListViewItemDrawMain_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x3

  if ( (byte_4E01AAC & 1) == 0 )
  {
    sub_1CE6700(&Method_ServantStatusListViewItemDrawMain_OnClickSaveTransform__);
    byte_4E01AAC = 1;
  }
  if ( item )
  {
    ServantStatusListViewItem__ChangeMainServant(item, 0);
    v5 = Method_ServantStatusListViewItemDrawMain_OnClickSaveTransform__;
    if ( (*((_BYTE *)Method_ServantStatusListViewItemDrawMain_OnClickSaveTransform__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1CE6718(Method_ServantStatusListViewItemDrawMain_OnClickSaveTransform__);
    v6 = (System_Reflection_MethodBase_o *)sub_1CE66E4(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
    ServantStatusListViewItemDrawMain__SetSavedTransformButton(
      this,
      0,
      item->fields._IsOpenSourceOtherSvt_k__BackingField,
      v7);
  }
}


void ServantStatusListViewItemDrawMain__OnClickUnSealedQuestTransitionButton(
        ServantStatusListViewItemDrawMain_o *this,
        const MethodInfo *method)
{
  int32_t questId; // w8
  UnityEngine_GameObject_o *inputMessageObject; // x19
  Il2CppObject *v5; // x0
  __int64 v6; // x1
  int32_t v7; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4E01AAB & 1) == 0 )
  {
    sub_1CE6700(&int_TypeInfo);
    sub_1CE6700(&StringLiteral_9954/*"OnClickUnSealedQuestTransition"*/);
    byte_4E01AAB = 1;
  }
  questId = this->fields.questId;
  if ( questId )
  {
    inputMessageObject = this->fields.inputMessageObject;
    v7 = questId;
    v5 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v7);
    if ( !inputMessageObject )
      sub_1CE6958(v5, v6);
    UnityEngine_GameObject__SendMessage_72899820(inputMessageObject, (System_String_o *)StringLiteral_9954/*"OnClickUnSealedQuestTransition"*/, v5, 0);
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
    sub_1CE6958(baseCollider, method);
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
  System_Action_T__o *_9__64_0; // x21
  Il2CppObject *v6; // x22
  struct ServantStatusListViewItemDrawMain___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  __int64 v14; // x1
  UIWidget_o *baseSprite; // x0
  const MethodInfo *v16; // x1

  if ( (byte_4E01AA5 & 1) == 0 )
  {
    sub_1CE6700(&System_Action_KeyValuePair_Transform__float___TypeInfo);
    sub_1CE6700(&Method_BasicHelper_ForEach_KeyValuePair_Transform__float____);
    sub_1CE6700(&Method_ServantStatusListViewItemDrawMain___c__SetBaseView_b__64_0__);
    sub_1CE6700(&ServantStatusListViewItemDrawMain___c_TypeInfo);
    byte_4E01AA5 = 1;
  }
  v3 = ServantStatusListViewItemDrawMain___c_TypeInfo;
  dynamicTransformsToOriginalPosYMap = (System_Collections_Generic_IEnumerable_T__o *)this->fields.dynamicTransformsToOriginalPosYMap;
  if ( !ServantStatusListViewItemDrawMain___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawMain___c_TypeInfo);
    v3 = ServantStatusListViewItemDrawMain___c_TypeInfo;
  }
  _9__64_0 = (System_Action_T__o *)v3->static_fields->__9__64_0;
  if ( !_9__64_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = ServantStatusListViewItemDrawMain___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__64_0 = (System_Action_T__o *)sub_1CE694C(System_Action_KeyValuePair_Transform__float___TypeInfo);
    System_Action_KeyValuePair_object__float_____ctor(
      _9__64_0,
      v6,
      Method_ServantStatusListViewItemDrawMain___c__SetBaseView_b__64_0__,
      0);
    static_fields = ServantStatusListViewItemDrawMain___c_TypeInfo->static_fields;
    static_fields->__9__64_0 = (struct System_Action_KeyValuePair_Transform__float___o *)_9__64_0;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)&static_fields->__9__64_0, (int32_t)_9__64_0, v8, v9, v10, v11, v12, v13);
  }
  BasicHelper__ForEach_KeyValuePair_object__float__(
    dynamicTransformsToOriginalPosYMap,
    _9__64_0,
    (const MethodInfo_31EF1C0 *)Method_BasicHelper_ForEach_KeyValuePair_Transform__float____);
  baseSprite = (UIWidget_o *)this->fields.baseSprite;
  if ( !baseSprite )
    sub_1CE6958(0, v14);
  UIWidget__set_height(baseSprite, this->fields.baseSpriteHeightBase, 0);
  ServantStatusListViewItemDrawMain__ResizeCollider(this, v16);
}


void ServantStatusListViewItemDrawMain__SetItem(
        ServantStatusListViewItemDrawMain_o *this,
        ServantStatusListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v7; // x20
  ServantStatusListViewItem_o *svtEntity; // x0
  const MethodInfo *v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  ServantStatusListViewItem_o **v16; // x21
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  const MethodInfo *v23; // x1
  UIExtrusionLabel_o *levelLabel; // x22
  UILabel_o *maxLevelLabel; // x22
  UILabel_o *costLabel; // x22
  UIIconLabel_o *attackIconLabel; // x22
  char v28; // w24
  int32_t Atk; // w23
  UIIconLabel_o *hpIconLabel; // x22
  int v31; // w24
  UIIconLabel_o *v32; // x22
  int32_t v33; // w23
  int v34; // w24
  int32_t v35; // w25
  UIIconLabel_o *reinforceAttackIconLabel; // x22
  int v37; // w23
  BalanceConfig_c *v38; // x8
  int32_t v39; // w25
  UIIconLabel_o *reinforceHpIconLabel; // x22
  BalanceConfig_c *v41; // x8
  int v42; // w23
  UnityEngine_Object_o *addedHpByGrandIconLabel; // x22
  UnityEngine_Object_o *addedAtkByGrandIconLabel; // x22
  UIIconLabel_o *v45; // x22
  UIIconLabel_o *v46; // x22
  UILabel_o *lateExpLabel; // x22
  int32_t v48; // w23
  ServantStatusLimitCountGauge_o *limitCountGauge; // x22
  struct ServantEntity_o *v50; // x8
  UnityEngine_Object_o *tdStrengthStatusSprite; // x22
  UISprite_o *v52; // x22
  SkillInfo_array *v53; // x8
  unsigned int v54; // w26
  unsigned __int64 v55; // x27
  __int64 max_length; // x28
  int *v57; // x23
  int32_t v58; // w22
  int32_t IconCnt; // w22
  int v60; // w23
  int i; // w25
  struct UISprite_array *skillStrengthStatusLabelList; // x8
  UISprite_o *v63; // x24
  __int64 v64; // x9
  struct UISprite_array *v65; // x8
  int v66; // w22
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x22
  UnityEngine_GameObject_o *v68; // x22
  UnityEngine_Object_o *baseButton; // x22
  ServantStatusListViewItem_o *v70; // x8
  UserServantEntity_o *userSvtEntity; // x0
  char v72; // w24
  int32_t v73; // w8
  int32_t v74; // w9
  _BOOL4 v75; // w22
  int v76; // w29
  _BOOL4 v77; // w23
  _BOOL4 v78; // w24
  _BOOL4 v79; // w25
  struct UserServantEntity_o *v80; // x8
  ServantLimitImageMaster_o *v81; // x26
  __int64 v82; // x27
  __int64 v83; // x28
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v84; // x8
  int32_t v85; // w27
  struct UserServantEntity_o *v86; // x8
  __int64 v87; // x27
  __int64 v88; // x28
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v89; // x8
  int32_t v90; // w27
  int32_t v91; // w0
  int32_t ServantLimitCountSealedQuestOpen; // w0
  ServantStatusListViewItem_o *v93; // x8
  _BOOL4 v94; // w8
  _BOOL4 v95; // w26
  UnityEngine_GameObject_o *v96; // x0
  float v97; // s0
  UnityEngine_GameObject_o *limitCountUpObject; // x0
  float v99; // s0
  float v100; // s8
  UnityEngine_GameObject_o *reinforceObject; // x0
  int v102; // w8
  float v103; // s0
  UnityEngine_GameObject_o **p_levelExceedObject; // x8
  const MethodInfo *v105; // x2
  UIWidget_o *transformNameLabel; // x22
  UIWidget_o *transformNameSprite; // x22
  UILabel_o *v108; // x22
  const MethodInfo *v109; // x2
  ServantStatusListViewItem_o *v110; // x8
  const MethodInfo *v111; // x3
  struct UICommonButton_o *saveTransformButton; // x8
  struct System_Collections_Generic_List_EventDelegate__o *onClick; // x8
  int32_t size; // w2
  int v115; // w9
  struct UICommonButton_o *v116; // x8
  System_Collections_Generic_List_object__o *v117; // x21
  EventDelegate_Callback_o *v118; // x22
  EventDelegate_o *v119; // x20
  int32_t v120; // w2
  int32_t v121; // w3
  System_String_o *v122; // x4
  int32_t v123; // w5
  int64_t v124; // x6
  System_String_o *v125; // x7
  struct System_Object_array *items; // x8
  _QWORD *v127; // x9
  __int64 v128; // x10
  Il2CppClass **v129; // x0
  const MethodInfo *v130; // x1
  int32_t maxFriendshipRank[2]; // [xsp+20h] [xbp-B0h] BYREF
  __int64 fraction; // [xsp+28h] [xbp-A8h] BYREF
  int32_t max[2]; // [xsp+30h] [xbp-A0h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+38h] [xbp-98h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+40h] [xbp-90h] BYREF
  __int64 barExp; // [xsp+48h] [xbp-88h] BYREF
  int32_t exp[2]; // [xsp+50h] [xbp-80h] BYREF
  int32_t secondMaxAdjustAtk[2]; // [xsp+58h] [xbp-78h] BYREF
  int32_t maxAjustAtk[2]; // [xsp+68h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v140; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v141; // 0:x0.16
  UnityEngine_Color_o TransformNameLabelColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o TransformNameSpriteColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4E01AA6 & 1) == 0 )
  {
    sub_1CE6700(&BalanceConfig_TypeInfo);
    sub_1CE6700(&EventDelegate_Callback_TypeInfo);
    sub_1CE6700(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    sub_1CE6700(&EventDelegate_TypeInfo);
    sub_1CE6700(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1CE6700(&Method_System_Collections_Generic_List_EventDelegate__Clear__);
    sub_1CE6700(&LocalizationManager_TypeInfo);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1CE6700(&ServantSkillStrengthStatus_TypeInfo);
    sub_1CE6700(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1CE6700(&Method_ServantStatusListViewItemDrawMain___c__DisplayClass65_0__SetItem_b__0__);
    sub_1CE6700(&ServantStatusListViewItemDrawMain___c__DisplayClass65_0_TypeInfo);
    sub_1CE6700(&StringLiteral_1/*""*/);
    byte_4E01AA6 = 1;
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
  v7 = sub_1CE694C(ServantStatusListViewItemDrawMain___c__DisplayClass65_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_131;
  *(_QWORD *)(v7 + 16) = this;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = item;
  v16 = (ServantStatusListViewItem_o **)(v7 + 24);
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v7 + 24), (int32_t)item, v17, v18, v19, v20, v21, v22);
  this->fields.dispMode = mode;
  if ( mode && *v16 )
  {
    ServantStatusListViewItemDrawMain__SetBaseView(this, v23);
    svtEntity = *v16;
    if ( !*v16 )
      goto LABEL_131;
    levelLabel = this->fields.levelLabel;
    exp[1] = ServantStatusListViewItem__get_Level(svtEntity, 0);
    svtEntity = (ServantStatusListViewItem_o *)System_Int32__ToString((int32_t)&exp[1], 0);
    if ( !levelLabel )
      goto LABEL_131;
    UIExtrusionLabel__set_text(levelLabel, (System_String_o *)svtEntity, 0);
    svtEntity = *v16;
    if ( !*v16 )
      goto LABEL_131;
    maxLevelLabel = this->fields.maxLevelLabel;
    exp[1] = ServantStatusListViewItem__get_MaxLevel(svtEntity, 0);
    svtEntity = (ServantStatusListViewItem_o *)System_Int32__ToString((int32_t)&exp[1], 0);
    if ( !maxLevelLabel )
      goto LABEL_131;
    UILabel__set_text(maxLevelLabel, (System_String_o *)svtEntity, 0);
    svtEntity = *v16;
    if ( !*v16 )
      goto LABEL_131;
    costLabel = this->fields.costLabel;
    exp[1] = ServantStatusListViewItem__get_Cost(svtEntity, 0);
    svtEntity = (ServantStatusListViewItem_o *)System_Int32__ToString((int32_t)&exp[1], 0);
    if ( !costLabel )
      goto LABEL_131;
    UILabel__set_text(costLabel, (System_String_o *)svtEntity, 0);
    if ( !*v16 )
      goto LABEL_131;
    svtEntity = (ServantStatusListViewItem_o *)(*v16)->fields.svtEntity;
    if ( !svtEntity )
      goto LABEL_131;
    svtEntity = (ServantStatusListViewItem_o *)ServantEntity__get_IsStatusUp((ServantEntity_o *)svtEntity, 0);
    if ( !*v16 )
      goto LABEL_131;
    attackIconLabel = this->fields.attackIconLabel;
    v28 = (char)svtEntity;
    Atk = ServantStatusListViewItem__get_Atk(*v16, 0);
    if ( (v28 & 1) != 0 )
    {
      svtEntity = (ServantStatusListViewItem_o *)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      if ( !attackIconLabel )
        goto LABEL_131;
      UIIconLabel__Set_42257736(
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
      svtEntity = *v16;
      if ( !*v16 )
        goto LABEL_131;
      hpIconLabel = this->fields.hpIconLabel;
      svtEntity = (ServantStatusListViewItem_o *)ServantStatusListViewItem__get_Hp(svtEntity, 0);
      if ( !hpIconLabel )
        goto LABEL_131;
      UIIconLabel__Set_42257736(
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
      svtEntity = *v16;
      if ( !*v16 )
        goto LABEL_131;
      svtEntity = (ServantStatusListViewItem_o *)ServantStatusListViewItem__get_AdjustAtk(svtEntity, 0);
      if ( !*v16 )
        goto LABEL_131;
      v31 = (int)svtEntity;
      svtEntity = (ServantStatusListViewItem_o *)(*v16)->fields._GrandInfo_k__BackingField;
      if ( !svtEntity )
        goto LABEL_131;
      svtEntity = (ServantStatusListViewItem_o *)UserServantGrandInfo__get_AddedAtk(
                                                   (UserServantGrandInfo_o *)svtEntity,
                                                   0);
      if ( !attackIconLabel )
        goto LABEL_131;
      UIIconLabel__Set_42257736(attackIconLabel, 5, Atk, (_DWORD)svtEntity + v31, 0, 0, 0, 0, 0, 0, 0);
      svtEntity = *v16;
      if ( !*v16 )
        goto LABEL_131;
      v32 = this->fields.hpIconLabel;
      svtEntity = (ServantStatusListViewItem_o *)ServantStatusListViewItem__get_Hp(svtEntity, 0);
      if ( !*v16 )
        goto LABEL_131;
      v33 = (int)svtEntity;
      svtEntity = (ServantStatusListViewItem_o *)ServantStatusListViewItem__get_AdjustHp(*v16, 0);
      if ( !*v16 )
        goto LABEL_131;
      v34 = (int)svtEntity;
      svtEntity = (ServantStatusListViewItem_o *)(*v16)->fields._GrandInfo_k__BackingField;
      if ( !svtEntity )
        goto LABEL_131;
      svtEntity = (ServantStatusListViewItem_o *)UserServantGrandInfo__get_AddedHp(
                                                   (UserServantGrandInfo_o *)svtEntity,
                                                   0);
      if ( !v32 )
        goto LABEL_131;
      UIIconLabel__Set_42257736(v32, 3, v33, (_DWORD)svtEntity + v34, 0, 0, 0, 0, 0, 0, 0);
    }
    svtEntity = *v16;
    if ( !*v16 )
      goto LABEL_131;
    if ( ServantStatusListViewItem__GetAdjustMax(
           svtEntity,
           &maxAjustAtk[1],
           maxAjustAtk,
           &secondMaxAdjustAtk[1],
           secondMaxAdjustAtk,
           0) )
    {
      svtEntity = *v16;
      if ( !*v16 )
        goto LABEL_131;
      svtEntity = (ServantStatusListViewItem_o *)ServantStatusListViewItem__get_AdjustAtk(svtEntity, 0);
      v35 = (int)svtEntity >= maxAjustAtk[0] ? secondMaxAdjustAtk[0] : maxAjustAtk[0];
      if ( !*v16 )
        goto LABEL_131;
      reinforceAttackIconLabel = this->fields.reinforceAttackIconLabel;
      svtEntity = (ServantStatusListViewItem_o *)ServantStatusListViewItem__get_AdjustAtk(*v16, 0);
      v37 = (int)svtEntity;
      v38 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v38 = BalanceConfig_TypeInfo;
      }
      if ( !reinforceAttackIconLabel )
        goto LABEL_131;
      UIIconLabel__Set_42257736(
        reinforceAttackIconLabel,
        45,
        v38->static_fields->StatusUpAdjustHp * v37,
        v38->static_fields->StatusUpAdjustHp * v35,
        0,
        0,
        0,
        0,
        0,
        0,
        0);
      svtEntity = (ServantStatusListViewItem_o *)this->fields.reinforceAttackMaxLabel;
      if ( !svtEntity )
        goto LABEL_131;
      UILabel__set_text((UILabel_o *)svtEntity, (System_String_o *)StringLiteral_1/*""*/, 0);
      svtEntity = *v16;
      if ( !*v16 )
        goto LABEL_131;
      svtEntity = (ServantStatusListViewItem_o *)ServantStatusListViewItem__get_AdjustHp(svtEntity, 0);
      v39 = (int)svtEntity >= maxAjustAtk[1] ? secondMaxAdjustAtk[1] : maxAjustAtk[1];
      if ( !*v16 )
        goto LABEL_131;
      reinforceHpIconLabel = this->fields.reinforceHpIconLabel;
      svtEntity = (ServantStatusListViewItem_o *)ServantStatusListViewItem__get_AdjustHp(*v16, 0);
      v41 = BalanceConfig_TypeInfo;
      v42 = (int)svtEntity;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v41 = BalanceConfig_TypeInfo;
      }
      if ( !reinforceHpIconLabel )
        goto LABEL_131;
      UIIconLabel__Set_42257736(
        reinforceHpIconLabel,
        44,
        v41->static_fields->StatusUpAdjustHp * v42,
        v41->static_fields->StatusUpAdjustHp * v39,
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
      svtEntity = (ServantStatusListViewItem_o *)this->fields.reinforceAttackIconLabel;
      if ( !svtEntity )
        goto LABEL_131;
      UIIconLabel__Clear((UIIconLabel_o *)svtEntity, 0);
      svtEntity = (ServantStatusListViewItem_o *)this->fields.reinforceAttackMaxLabel;
      if ( !svtEntity )
        goto LABEL_131;
      UILabel__set_text((UILabel_o *)svtEntity, (System_String_o *)StringLiteral_1/*""*/, 0);
      svtEntity = (ServantStatusListViewItem_o *)this->fields.reinforceHpIconLabel;
      if ( !svtEntity )
        goto LABEL_131;
      UIIconLabel__Clear((UIIconLabel_o *)svtEntity, 0);
    }
    svtEntity = (ServantStatusListViewItem_o *)this->fields.reinforceHpMaxLabel;
    if ( !svtEntity )
      goto LABEL_131;
    UILabel__set_text((UILabel_o *)svtEntity, (System_String_o *)StringLiteral_1/*""*/, 0);
    addedHpByGrandIconLabel = (UnityEngine_Object_o *)this->fields.addedHpByGrandIconLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(addedHpByGrandIconLabel, 0, 0) )
    {
      addedAtkByGrandIconLabel = (UnityEngine_Object_o *)this->fields.addedAtkByGrandIconLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      svtEntity = (ServantStatusListViewItem_o *)UnityEngine_Object__op_Inequality(addedAtkByGrandIconLabel, 0, 0);
      if ( ((unsigned __int8)svtEntity & 1) != 0 )
      {
        if ( !*v16 )
          goto LABEL_131;
        svtEntity = (ServantStatusListViewItem_o *)(*v16)->fields._GrandInfo_k__BackingField;
        if ( !svtEntity )
          goto LABEL_131;
        svtEntity = (ServantStatusListViewItem_o *)UserServantGrandInfo__IsValid((UserServantGrandInfo_o *)svtEntity, 0);
        v45 = this->fields.addedHpByGrandIconLabel;
        if ( ((unsigned __int8)svtEntity & 1) != 0 )
        {
          if ( !*v16 )
            goto LABEL_131;
          svtEntity = (ServantStatusListViewItem_o *)(*v16)->fields._GrandInfo_k__BackingField;
          if ( !svtEntity )
            goto LABEL_131;
          svtEntity = (ServantStatusListViewItem_o *)UserServantGrandInfo__get_AddedHp(
                                                       (UserServantGrandInfo_o *)svtEntity,
                                                       0);
          if ( !v45 )
            goto LABEL_131;
          UIIconLabel__Set_42257736(v45, 58, (int32_t)svtEntity, 0, 0, 0, 0, 0, 0, 0, 0);
          if ( !*v16 )
            goto LABEL_131;
          svtEntity = (ServantStatusListViewItem_o *)(*v16)->fields._GrandInfo_k__BackingField;
          if ( !svtEntity )
            goto LABEL_131;
          v46 = this->fields.addedAtkByGrandIconLabel;
          svtEntity = (ServantStatusListViewItem_o *)UserServantGrandInfo__get_AddedAtk(
                                                       (UserServantGrandInfo_o *)svtEntity,
                                                       0);
          if ( !v46 )
            goto LABEL_131;
          UIIconLabel__Set_42257736(v46, 59, (int32_t)svtEntity, 0, 0, 0, 0, 0, 0, 0, 0);
        }
        else
        {
          if ( !v45 )
            goto LABEL_131;
          UIIconLabel__Clear(this->fields.addedHpByGrandIconLabel, 0);
          svtEntity = (ServantStatusListViewItem_o *)this->fields.addedAtkByGrandIconLabel;
          if ( !svtEntity )
            goto LABEL_131;
          UIIconLabel__Clear((UIIconLabel_o *)svtEntity, 0);
        }
      }
    }
    svtEntity = *v16;
    if ( !*v16 )
      goto LABEL_131;
    svtEntity = (ServantStatusListViewItem_o *)ServantStatusListViewItem__GetExpInfo(
                                                 svtEntity,
                                                 exp,
                                                 (int32_t *)&barExp + 1,
                                                 (float *)&barExp,
                                                 0);
    if ( !this->fields.expBase )
      goto LABEL_131;
    if ( ((unsigned __int8)svtEntity & 1) != 0 )
    {
      UnityEngine_GameObject__SetActive(this->fields.expBase, 1, 0);
      svtEntity = (ServantStatusListViewItem_o *)this->fields.lateExpBase;
      if ( !svtEntity )
        goto LABEL_131;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, SHIDWORD(barExp) > 0, 0);
      lateExpLabel = this->fields.lateExpLabel;
      v48 = HIDWORD(barExp);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      svtEntity = (ServantStatusListViewItem_o *)LocalizationManager__GetNumberFormat(v48, 0);
      if ( !lateExpLabel )
        goto LABEL_131;
      UILabel__set_text(lateExpLabel, (System_String_o *)svtEntity, 0);
      svtEntity = (ServantStatusListViewItem_o *)this->fields.expBar;
      if ( !svtEntity )
        goto LABEL_131;
      UIProgressBar__set_value((UIProgressBar_o *)svtEntity, *(float *)&barExp, 0);
    }
    else
    {
      UnityEngine_GameObject__SetActive(this->fields.expBase, 0, 0);
    }
    svtEntity = *v16;
    if ( !*v16 )
      goto LABEL_131;
    limitCountGauge = this->fields.limitCountGauge;
    svtEntity = (ServantStatusListViewItem_o *)ServantStatusListViewItem__get_LimitCount(svtEntity, 0);
    if ( !*v16 )
      goto LABEL_131;
    v50 = (*v16)->fields.svtEntity;
    if ( !v50 || !limitCountGauge )
      goto LABEL_131;
    ServantStatusLimitCountGauge__Set(limitCountGauge, (int32_t)svtEntity, v50->fields.limitMax, 0);
    tdStrengthStatusSprite = (UnityEngine_Object_o *)this->fields.tdStrengthStatusSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    svtEntity = (ServantStatusListViewItem_o *)UnityEngine_Object__op_Inequality(tdStrengthStatusSprite, 0, 0);
    if ( ((unsigned __int8)svtEntity & 1) != 0 )
    {
      svtEntity = *v16;
      if ( !*v16 )
        goto LABEL_131;
      svtEntity = (ServantStatusListViewItem_o *)ServantStatusListViewItem__GetNpInfo(svtEntity, &tdInfo, 0);
      if ( !tdInfo )
        goto LABEL_131;
      v52 = this->fields.tdStrengthStatusSprite;
      svtEntity = (ServantStatusListViewItem_o *)StrengthStatus__GetTreasureDeviceIconName(
                                                   tdInfo->fields.strengthStatus,
                                                   tdInfo->fields.treasureDeviceNum,
                                                   0);
      if ( !v52 )
        goto LABEL_131;
      UISprite__set_spriteName(v52, (System_String_o *)svtEntity, 0);
    }
    if ( this->fields.skillStrengthStatusLabelList )
    {
      svtEntity = *v16;
      if ( !*v16 )
        goto LABEL_131;
      ServantStatusListViewItem__GetSkillInfo(svtEntity, &skillInfoList, 0, 0);
      v53 = skillInfoList;
      if ( skillInfoList && (int)skillInfoList->max_length >= 1 )
      {
        v54 = 0;
        v55 = 0;
        max_length = (unsigned int)skillInfoList->max_length;
        while ( v55 < LODWORD(v53->max_length) )
        {
          v57 = (int *)v53->m_Items[v55];
          if ( v57 && v57[4] >= 1 && v57[12] )
          {
            v58 = v57[13];
            if ( !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
            IconCnt = ServantSkillStrengthStatus__GetIconCnt(v58, 0);
            svtEntity = (ServantStatusListViewItem_o *)ServantSkillStrengthStatus__GetStrengthenedCnt(
                                                         v57[12],
                                                         v57[13],
                                                         0);
            if ( IconCnt >= 1 )
            {
              v60 = (int)svtEntity;
              for ( i = 0; i != IconCnt; ++i )
              {
                skillStrengthStatusLabelList = this->fields.skillStrengthStatusLabelList;
                if ( !skillStrengthStatusLabelList )
                  goto LABEL_131;
                if ( v54 + i >= LODWORD(skillStrengthStatusLabelList->max_length) )
                  goto LABEL_321;
                svtEntity = (ServantStatusListViewItem_o *)ServantSkillStrengthStatus_TypeInfo;
                v63 = skillStrengthStatusLabelList->m_Items[v54 + i];
                if ( !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
                  svtEntity = (ServantStatusListViewItem_o *)ServantSkillStrengthStatus_TypeInfo;
                }
                if ( i >= v60 )
                {
                  if ( !v63 )
                    goto LABEL_131;
                  v64 = 32;
                }
                else
                {
                  if ( !v63 )
                    goto LABEL_131;
                  v64 = 24;
                }
                UISprite__set_spriteName(
                  v63,
                  *(System_String_o **)((char *)&svtEntity->fields.commandCodeEntity->klass + v64),
                  0);
              }
              v54 += i;
            }
          }
          if ( ++v55 == max_length )
            goto LABEL_125;
          v53 = skillInfoList;
          if ( !skillInfoList )
            goto LABEL_131;
        }
LABEL_321:
        sub_1CE6960(svtEntity);
      }
      v54 = 0;
LABEL_125:
      v65 = this->fields.skillStrengthStatusLabelList;
      if ( !v65 )
        goto LABEL_131;
      v66 = v65->max_length;
      if ( (int)v54 < v66 )
      {
        while ( v54 < LODWORD(v65->max_length) )
        {
          svtEntity = (ServantStatusListViewItem_o *)v65->m_Items[v54];
          if ( !svtEntity )
            goto LABEL_131;
          UISprite__set_spriteName((UISprite_o *)svtEntity, 0, 0);
          if ( v66 == ++v54 )
            goto LABEL_132;
          v65 = this->fields.skillStrengthStatusLabelList;
          if ( !v65 )
            goto LABEL_131;
        }
        goto LABEL_321;
      }
    }
LABEL_132:
    if ( !*v16 )
      goto LABEL_131;
    svtEntity = (ServantStatusListViewItem_o *)this->fields.friendshipGauge;
    if ( !svtEntity )
      goto LABEL_131;
    userSvtCollectionEntity = (*v16)->fields.userSvtCollectionEntity;
    svtEntity = (ServantStatusListViewItem_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)svtEntity,
                                                 0);
    if ( !svtEntity )
      goto LABEL_131;
    if ( userSvtCollectionEntity )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 1, 0);
      svtEntity = *v16;
      if ( !*v16 )
        goto LABEL_131;
      ServantStatusListViewItem__GetFriendshipInfo(
        svtEntity,
        &max[1],
        max,
        (int32_t *)&fraction + 1,
        (float *)&fraction,
        0);
      svtEntity = (ServantStatusListViewItem_o *)this->fields.friendshipGauge;
      if ( !svtEntity )
        goto LABEL_131;
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
    svtEntity = (ServantStatusListViewItem_o *)this->fields.eventJoinSprite;
    if ( !svtEntity )
      goto LABEL_131;
    svtEntity = (ServantStatusListViewItem_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)svtEntity,
                                                 0);
    if ( !*v16 )
      goto LABEL_131;
    v68 = (UnityEngine_GameObject_o *)svtEntity;
    svtEntity = (ServantStatusListViewItem_o *)ServantStatusListViewItem__get_IsEventJoin(*v16, 0);
    if ( !v68 )
      goto LABEL_131;
    UnityEngine_GameObject__SetActive(v68, (unsigned __int8)svtEntity & 1, 0);
    baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    svtEntity = (ServantStatusListViewItem_o *)UnityEngine_Object__op_Inequality(baseButton, 0, 0);
    v70 = *v16;
    if ( !*v16 )
      goto LABEL_131;
    if ( !v70->fields._IsDisplayCombineButton_k__BackingField || (userSvtEntity = v70->fields.userSvtEntity) == 0 )
    {
LABEL_280:
      svtEntity = *v16;
      if ( !*v16 )
        goto LABEL_131;
      if ( ServantStatusListViewItem__get_AnyTransformServant(svtEntity, 0) )
      {
        svtEntity = *v16;
        if ( !*v16 )
          goto LABEL_131;
        transformNameLabel = (UIWidget_o *)this->fields.transformNameLabel;
        TransformNameLabelColor = ServantStatusListViewItem__get_TransformNameLabelColor(svtEntity, 0);
        if ( !transformNameLabel )
          goto LABEL_131;
        UIWidget__set_color(transformNameLabel, TransformNameLabelColor, 0);
        svtEntity = *v16;
        if ( !*v16 )
          goto LABEL_131;
        transformNameSprite = (UIWidget_o *)this->fields.transformNameSprite;
        TransformNameSpriteColor = ServantStatusListViewItem__get_TransformNameSpriteColor(svtEntity, 0);
        if ( !transformNameSprite )
          goto LABEL_131;
        UIWidget__set_color(transformNameSprite, TransformNameSpriteColor, 0);
        svtEntity = (ServantStatusListViewItem_o *)this->fields.transformNameSprite;
        if ( !svtEntity )
          goto LABEL_131;
        svtEntity = (ServantStatusListViewItem_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)svtEntity,
                                                     0);
        if ( !svtEntity )
          goto LABEL_131;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 1, 0);
        svtEntity = *v16;
        if ( !*v16 )
          goto LABEL_131;
        v108 = this->fields.transformNameLabel;
        svtEntity = (ServantStatusListViewItem_o *)ServantStatusListViewItem__GetTransformName(svtEntity, 0);
        if ( !v108 )
          goto LABEL_131;
        UILabel__set_text(v108, (System_String_o *)svtEntity, 0);
        ServantStatusListViewItemDrawMain__AddAreaHeight(this, this->fields.transformNameAddHeight, v109);
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
        svtEntity = (ServantStatusListViewItem_o *)this->fields.transformNameSprite;
        if ( !svtEntity )
          goto LABEL_131;
        svtEntity = (ServantStatusListViewItem_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)svtEntity,
                                                     0);
        if ( !svtEntity )
          goto LABEL_131;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 0, 0);
      }
      if ( *v16 )
      {
        svtEntity = (ServantStatusListViewItem_o *)(*v16)->fields._GrandInfo_k__BackingField;
        if ( svtEntity )
        {
          if ( UserServantGrandInfo__IsValid((UserServantGrandInfo_o *)svtEntity, 0) )
            ServantStatusListViewItemDrawMain__AdjustLayoutByInsertGrandEnforcementInfo(this, v9);
          svtEntity = *v16;
          if ( *v16 )
          {
            svtEntity = (ServantStatusListViewItem_o *)ServantStatusListViewItem__get_IsSaveTransformServant(
                                                         svtEntity,
                                                         0);
            if ( ((unsigned __int8)svtEntity & 1) == 0 )
              goto LABEL_319;
            v110 = *v16;
            if ( !*v16 )
              goto LABEL_131;
            if ( !v110->fields._IsOpenSourceMySvt_k__BackingField && !v110->fields._IsOpenSourceOtherSvt_k__BackingField )
              goto LABEL_319;
            svtEntity = (ServantStatusListViewItem_o *)this->fields.saveTransformButton;
            if ( !svtEntity )
              goto LABEL_131;
            svtEntity = (ServantStatusListViewItem_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)svtEntity,
                                                         0);
            if ( !svtEntity )
              goto LABEL_131;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 1, 0);
            svtEntity = *v16;
            if ( !*v16 )
              goto LABEL_131;
            svtEntity = (ServantStatusListViewItem_o *)ServantStatusListViewItem__CheckCurrentMainServant(svtEntity, 0);
            if ( !*v16 )
              goto LABEL_131;
            ServantStatusListViewItemDrawMain__SetSavedTransformButton(
              this,
              ((unsigned __int8)svtEntity & 1) == 0,
              (*v16)->fields._IsOpenSourceOtherSvt_k__BackingField,
              v111);
            saveTransformButton = this->fields.saveTransformButton;
            if ( !saveTransformButton )
              goto LABEL_131;
            onClick = saveTransformButton->fields.onClick;
            if ( !onClick )
              goto LABEL_131;
            size = onClick->fields._size;
            v115 = onClick->fields._version + 1;
            onClick->fields._size = 0;
            onClick->fields._version = v115;
            if ( size >= 1 )
              System_Array__Clear((System_Array_o *)onClick->fields._items, 0, size, 0);
            if ( !*v16 )
              goto LABEL_131;
            if ( !(*v16)->fields._IsOpenSourceMySvt_k__BackingField )
            {
LABEL_319:
              ServantStatusListViewItemDrawMain__ResizeCollider(this, v9);
              ServantStatusListViewItemDrawMain__AdjustBaseUiPosY(this, v130);
              return;
            }
            v116 = this->fields.saveTransformButton;
            if ( v116 )
            {
              v117 = (System_Collections_Generic_List_object__o *)v116->fields.onClick;
              v118 = (EventDelegate_Callback_o *)sub_1CE694C(EventDelegate_Callback_TypeInfo);
              EventDelegate_Callback___ctor(
                v118,
                (Il2CppObject *)v7,
                Method_ServantStatusListViewItemDrawMain___c__DisplayClass65_0__SetItem_b__0__,
                0);
              v119 = (EventDelegate_o *)sub_1CE694C(EventDelegate_TypeInfo);
              EventDelegate___ctor_50381160(v119, v118, 0);
              if ( v117 )
              {
                items = v117->fields._items;
                v127 = Method_System_Collections_Generic_List_EventDelegate__Add__;
                ++v117->fields._version;
                if ( items )
                {
                  v128 = v117->fields._size;
                  if ( (unsigned int)v128 >= LODWORD(items->max_length) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v117,
                      (Il2CppObject *)v119,
                      *(const MethodInfo_3905F68 **)(*(_QWORD *)(v127[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v129 = &items->obj.klass + v128;
                    v117->fields._size = v128 + 1;
                    v129[4] = (Il2CppClass *)v119;
                    sub_1CE66A4(
                      (GrandQuestFolderBoardItem_o *)(v129 + 4),
                      (int32_t)v119,
                      v120,
                      v121,
                      v122,
                      v123,
                      v124,
                      v125);
                  }
                  goto LABEL_319;
                }
              }
            }
          }
        }
      }
LABEL_131:
      sub_1CE6958(svtEntity, v9);
    }
    svtEntity = (ServantStatusListViewItem_o *)UserServantEntity__IsHeroine(userSvtEntity, 0);
    maxFriendshipRank[0] = -1;
    maxFriendshipRank[1] = -1;
    if ( !*v16 )
      goto LABEL_131;
    v72 = (char)svtEntity;
    svtEntity = (ServantStatusListViewItem_o *)(*v16)->fields.userSvtCollectionEntity;
    if ( svtEntity )
    {
      svtEntity = (ServantStatusListViewItem_o *)UserServantCollectionEntity__getFriendShipRankInfo(
                                                   (UserServantCollectionEntity_o *)svtEntity,
                                                   &maxFriendshipRank[1],
                                                   maxFriendshipRank,
                                                   0);
      v73 = maxFriendshipRank[0];
      v74 = maxFriendshipRank[1];
    }
    else
    {
      v73 = -1;
      v74 = -1;
    }
    v75 = 0;
    if ( v74 == v73 && ((v73 | v74) & 0x80000000) == 0 )
    {
      if ( !*v16 )
        goto LABEL_131;
      svtEntity = (ServantStatusListViewItem_o *)(*v16)->fields.userSvtEntity;
      if ( !svtEntity )
        goto LABEL_131;
      svtEntity = (ServantStatusListViewItem_o *)UserServantEntity__isExceedFriendshipMax(
                                                   (UserServantEntity_o *)svtEntity,
                                                   0);
      if ( ((unsigned __int8)svtEntity & 1) == 0 )
      {
        if ( !*v16 )
          goto LABEL_131;
        svtEntity = (ServantStatusListViewItem_o *)(*v16)->fields.userSvtEntity;
        if ( !svtEntity )
          goto LABEL_131;
        svtEntity = (ServantStatusListViewItem_o *)UserServantEntity__IsEventJoin((UserServantEntity_o *)svtEntity, 0);
        if ( ((unsigned __int8)svtEntity & 1) == 0 )
        {
          if ( (v72 & 1) != 0 )
          {
            if ( !*v16 )
              goto LABEL_131;
            svtEntity = (ServantStatusListViewItem_o *)(*v16)->fields.userSvtEntity;
            if ( !svtEntity )
              goto LABEL_131;
            svtEntity = (ServantStatusListViewItem_o *)UserServantEntity__IsUseFriendshipExceedItemHeroine(
                                                         (UserServantEntity_o *)svtEntity,
                                                         0);
            if ( ((unsigned __int8)svtEntity & 1) == 0 )
            {
              v75 = 0;
              v77 = 0;
              v76 = 0;
LABEL_180:
              if ( !*v16 )
                goto LABEL_131;
              svtEntity = (ServantStatusListViewItem_o *)(*v16)->fields.userSvtEntity;
              if ( !svtEntity )
                goto LABEL_131;
              svtEntity = (ServantStatusListViewItem_o *)UserServantEntity__isLevelMax(
                                                           (UserServantEntity_o *)svtEntity,
                                                           0);
              if ( ((unsigned __int8)svtEntity & 1) == 0 )
                goto LABEL_199;
              if ( !*v16 )
                goto LABEL_131;
              svtEntity = (ServantStatusListViewItem_o *)(*v16)->fields.userSvtEntity;
              if ( !svtEntity )
                goto LABEL_131;
              svtEntity = (ServantStatusListViewItem_o *)UserServantEntity__isExceedLvMax(
                                                           (UserServantEntity_o *)svtEntity,
                                                           0);
              if ( ((unsigned __int8)svtEntity & 1) != 0 )
                goto LABEL_199;
              if ( !*v16 )
                goto LABEL_131;
              svtEntity = (ServantStatusListViewItem_o *)(*v16)->fields.userSvtEntity;
              if ( !svtEntity )
                goto LABEL_131;
              svtEntity = (ServantStatusListViewItem_o *)UserServantEntity__IsEventJoin(
                                                           (UserServantEntity_o *)svtEntity,
                                                           0);
              if ( ((unsigned __int8)svtEntity & 1) != 0 )
                goto LABEL_199;
              if ( !*v16 )
                goto LABEL_131;
              svtEntity = (ServantStatusListViewItem_o *)(*v16)->fields.userSvtEntity;
              if ( !svtEntity )
                goto LABEL_131;
              svtEntity = (ServantStatusListViewItem_o *)UserServantEntity__isLimitCountMax(
                                                           (UserServantEntity_o *)svtEntity,
                                                           0);
              if ( ((unsigned __int8)svtEntity & 1) == 0 )
                goto LABEL_199;
              if ( (v72 & 1) == 0 )
                goto LABEL_196;
              if ( !*v16 )
                goto LABEL_131;
              svtEntity = (ServantStatusListViewItem_o *)(*v16)->fields.userSvtEntity;
              if ( !svtEntity )
                goto LABEL_131;
              svtEntity = (ServantStatusListViewItem_o *)UserServantEntity__IsUseLevelExceedItemHeroine(
                                                           (UserServantEntity_o *)svtEntity,
                                                           0);
              if ( ((unsigned __int8)svtEntity & 1) == 0 )
              {
LABEL_199:
                v78 = 0;
              }
              else
              {
LABEL_196:
                svtEntity = (ServantStatusListViewItem_o *)this->fields.levelExceedButton;
                if ( !svtEntity )
                  goto LABEL_131;
                BYTE1(svtEntity->fields.equipTargetInfo) = 1;
                if ( !*v16 )
                  goto LABEL_131;
                ++v76;
                UICommonButton__SetEnable(
                  (UICommonButton_o *)svtEntity,
                  (*v16)->fields._CanMoveCombine_k__BackingField,
                  0);
                v78 = 1;
              }
              if ( !*v16 )
                goto LABEL_131;
              svtEntity = (ServantStatusListViewItem_o *)(*v16)->fields.userSvtEntity;
              if ( !svtEntity )
                goto LABEL_131;
              svtEntity = (ServantStatusListViewItem_o *)UserServantEntity__IsLeave((UserServantEntity_o *)svtEntity, 0);
              if ( ((unsigned __int8)svtEntity & 1) != 0 )
                goto LABEL_203;
              if ( !*v16 )
                goto LABEL_131;
              svtEntity = (ServantStatusListViewItem_o *)(*v16)->fields.userSvtEntity;
              if ( !svtEntity )
                goto LABEL_131;
              svtEntity = (ServantStatusListViewItem_o *)UserServantEntity__isLevelMax(
                                                           (UserServantEntity_o *)svtEntity,
                                                           0);
              if ( ((unsigned __int8)svtEntity & 1) == 0 )
                goto LABEL_213;
              if ( !*v16 )
                goto LABEL_131;
              svtEntity = (ServantStatusListViewItem_o *)(*v16)->fields.userSvtEntity;
              if ( !svtEntity )
                goto LABEL_131;
              svtEntity = (ServantStatusListViewItem_o *)UserServantEntity__isSecondAdjustAtkMax(
                                                           (UserServantEntity_o *)svtEntity,
                                                           0);
              if ( ((unsigned __int8)svtEntity & 1) == 0 )
                goto LABEL_213;
              if ( !*v16 )
                goto LABEL_131;
              svtEntity = (ServantStatusListViewItem_o *)(*v16)->fields.userSvtEntity;
              if ( !svtEntity )
                goto LABEL_131;
              svtEntity = (ServantStatusListViewItem_o *)UserServantEntity__isSecondAdjustHpMax(
                                                           (UserServantEntity_o *)svtEntity,
                                                           0);
              if ( ((unsigned __int8)svtEntity & 1) != 0 )
              {
LABEL_203:
                v79 = 0;
              }
              else
              {
LABEL_213:
                svtEntity = (ServantStatusListViewItem_o *)this->fields.reinforceButton;
                if ( !svtEntity )
                  goto LABEL_131;
                BYTE1(svtEntity->fields.equipTargetInfo) = 1;
                if ( !*v16 )
                  goto LABEL_131;
                ++v76;
                UICommonButton__SetEnable(
                  (UICommonButton_o *)svtEntity,
                  (*v16)->fields._CanMoveCombine_k__BackingField,
                  0);
                v79 = 1;
              }
              if ( !*v16 )
                goto LABEL_131;
              svtEntity = (ServantStatusListViewItem_o *)(*v16)->fields.userSvtEntity;
              if ( !svtEntity )
                goto LABEL_131;
              svtEntity = (ServantStatusListViewItem_o *)UserServantEntity__IsHeroine(
                                                           (UserServantEntity_o *)svtEntity,
                                                           0);
              if ( ((unsigned __int8)svtEntity & 1) != 0 )
                goto LABEL_245;
              if ( !*v16 )
                goto LABEL_131;
              svtEntity = (ServantStatusListViewItem_o *)(*v16)->fields.userSvtEntity;
              if ( !svtEntity )
                goto LABEL_131;
              if ( !UserServantEntity__isLimitCountMax((UserServantEntity_o *)svtEntity, 0) )
                goto LABEL_245;
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              svtEntity = (ServantStatusListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
              if ( !*v16 )
                goto LABEL_131;
              v80 = (*v16)->fields.userSvtEntity;
              if ( !v80 )
                goto LABEL_131;
              v81 = (ServantLimitImageMaster_o *)svtEntity;
              v83 = *(_QWORD *)&v80->fields.svtId.fields.currentCryptoKey;
              v82 = *(_QWORD *)&v80->fields.svtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v140.fields.currentCryptoKey = v83;
              *(_QWORD *)&v140.fields.fakeValue = v82;
              svtEntity = (ServantStatusListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(
                                                           v140,
                                                           0);
              if ( !*v16 )
                goto LABEL_131;
              v84 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*v16)->fields.userSvtEntity;
              if ( !v84 )
                goto LABEL_131;
              v85 = (int)svtEntity;
              svtEntity = (ServantStatusListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(
                                                           v84[6],
                                                           0);
              if ( !v81 )
                goto LABEL_131;
              svtEntity = (ServantStatusListViewItem_o *)ServantLimitImageMaster__IsServantLimitCountSeal(
                                                           v81,
                                                           v85,
                                                           (int32_t)svtEntity,
                                                           0);
              if ( ((unsigned __int8)svtEntity & 1) == 0 )
                goto LABEL_245;
              if ( !*v16 )
                goto LABEL_131;
              v86 = (*v16)->fields.userSvtEntity;
              if ( !v86 )
                goto LABEL_131;
              v88 = *(_QWORD *)&v86->fields.svtId.fields.currentCryptoKey;
              v87 = *(_QWORD *)&v86->fields.svtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v141.fields.currentCryptoKey = v88;
              *(_QWORD *)&v141.fields.fakeValue = v87;
              svtEntity = (ServantStatusListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(
                                                           v141,
                                                           0);
              if ( !*v16 )
                goto LABEL_131;
              v89 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*v16)->fields.userSvtEntity;
              if ( !v89 )
                goto LABEL_131;
              v90 = (int)svtEntity;
              v91 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v89[6], 0);
              ServantLimitCountSealedQuestOpen = ServantLimitImageMaster__GetServantLimitCountSealedQuestOpen(
                                                   v81,
                                                   v90,
                                                   v91,
                                                   0);
              this->fields.questId = ServantLimitCountSealedQuestOpen;
              if ( !ServantLimitCountSealedQuestOpen )
                goto LABEL_245;
              svtEntity = (ServantStatusListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3B55234 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
              if ( !svtEntity )
                goto LABEL_131;
              if ( clsQuestCheck__CheckQuestPlayableNow((clsQuestCheck_o *)svtEntity, this->fields.questId, 0, 0) )
              {
                svtEntity = (ServantStatusListViewItem_o *)this->fields.unSealedQuestTransitionButton;
                if ( !svtEntity )
                  goto LABEL_131;
                BYTE1(svtEntity->fields.equipTargetInfo) = 1;
                v93 = *v16;
                if ( !*v16 )
                  goto LABEL_131;
                ++v76;
                v94 = v93->fields._CanMoveCombine_k__BackingField && v93->fields.isEnableServantQuest;
                UICommonButton__SetEnable((UICommonButton_o *)svtEntity, v94, 0);
                v95 = 1;
                if ( !v75 )
                {
LABEL_257:
                  if ( v79 )
                  {
                    switch ( v76 )
                    {
                      case 3:
                        reinforceObject = this->fields.reinforceObject;
                        v103 = -20.0;
LABEL_265:
                        GameObjectExtensions__SetLocalPositionX(reinforceObject, v103, 0);
                        break;
                      case 2:
                        reinforceObject = this->fields.reinforceObject;
                        v102 = 1120403456;
                        goto LABEL_264;
                      case 1:
                        reinforceObject = this->fields.reinforceObject;
                        v102 = 1130102784;
LABEL_264:
                        v103 = *(float *)&v102;
                        goto LABEL_265;
                    }
                  }
                  if ( v78 )
                  {
                    p_levelExceedObject = &this->fields.levelExceedObject;
                    v100 = 220.0;
LABEL_270:
                    GameObjectExtensions__SetLocalPositionX(*p_levelExceedObject, v100, 0);
LABEL_271:
                    svtEntity = (ServantStatusListViewItem_o *)this->fields.bondLimitUpObject;
                    if ( !svtEntity )
                      goto LABEL_131;
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, v75, 0);
                    svtEntity = (ServantStatusListViewItem_o *)this->fields.limitCountUpObject;
                    if ( !svtEntity )
                      goto LABEL_131;
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, v77, 0);
                    svtEntity = (ServantStatusListViewItem_o *)this->fields.levelExceedObject;
                    if ( !svtEntity )
                      goto LABEL_131;
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, v78, 0);
                    svtEntity = (ServantStatusListViewItem_o *)this->fields.reinforceObject;
                    if ( !svtEntity )
                      goto LABEL_131;
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, v79, 0);
                    svtEntity = (ServantStatusListViewItem_o *)this->fields.unSealedQuestTransitionObject;
                    if ( !svtEntity )
                      goto LABEL_131;
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, v95, 0);
                    if ( v75 || v78 || v77 || v79 || v95 )
                    {
                      svtEntity = (ServantStatusListViewItem_o *)this->fields.reinforceMaskSprite;
                      if ( !svtEntity )
                        goto LABEL_131;
                      svtEntity = (ServantStatusListViewItem_o *)UnityEngine_Component__get_gameObject(
                                                                   (UnityEngine_Component_o *)svtEntity,
                                                                   0);
                      if ( !svtEntity )
                        goto LABEL_131;
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 1, 0);
                      ServantStatusListViewItemDrawMain__AddAreaHeight(this, 46, v105);
                    }
                    goto LABEL_280;
                  }
                  limitCountUpObject = this->fields.limitCountUpObject;
                  v100 = 220.0;
                  v99 = 220.0;
LABEL_269:
                  GameObjectExtensions__SetLocalPositionX(limitCountUpObject, v99, 0);
                  p_levelExceedObject = &this->fields.unSealedQuestTransitionObject;
                  goto LABEL_270;
                }
              }
              else
              {
LABEL_245:
                v95 = 0;
                if ( !v75 )
                  goto LABEL_257;
              }
              if ( v79 )
              {
                if ( v76 == 3 )
                {
                  v96 = this->fields.reinforceObject;
                  v97 = -20.0;
                  goto LABEL_251;
                }
                if ( v76 == 2 )
                {
                  v96 = this->fields.reinforceObject;
                  v97 = 100.0;
LABEL_251:
                  GameObjectExtensions__SetLocalPositionX(v96, v97, 0);
                }
              }
              if ( !v78 )
                goto LABEL_271;
              limitCountUpObject = this->fields.limitCountUpObject;
              v99 = -20.0;
              v100 = -20.0;
              goto LABEL_269;
            }
          }
          svtEntity = (ServantStatusListViewItem_o *)this->fields.bondLimitUpObject;
          if ( !svtEntity )
            goto LABEL_131;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 1, 0);
          svtEntity = (ServantStatusListViewItem_o *)this->fields.bondLimitUpButton;
          if ( !svtEntity )
            goto LABEL_131;
          BYTE1(svtEntity->fields.equipTargetInfo) = 1;
          if ( !*v16 )
            goto LABEL_131;
          UICommonButton__SetEnable((UICommonButton_o *)svtEntity, (*v16)->fields._CanMoveCombine_k__BackingField, 0);
          v75 = 1;
          if ( (v72 & 1) == 0 )
            goto LABEL_162;
          goto LABEL_179;
        }
      }
      v75 = 0;
    }
    if ( (v72 & 1) == 0 )
    {
LABEL_162:
      if ( !*v16 )
        goto LABEL_131;
      svtEntity = (ServantStatusListViewItem_o *)(*v16)->fields.userSvtEntity;
      if ( !svtEntity )
        goto LABEL_131;
      svtEntity = (ServantStatusListViewItem_o *)UserServantEntity__isLevelMax((UserServantEntity_o *)svtEntity, 0);
      if ( ((unsigned __int8)svtEntity & 1) != 0 )
      {
        if ( !*v16 )
          goto LABEL_131;
        svtEntity = (ServantStatusListViewItem_o *)(*v16)->fields.userSvtEntity;
        if ( !svtEntity )
          goto LABEL_131;
        svtEntity = (ServantStatusListViewItem_o *)UserServantEntity__isLimitCountMax(
                                                     (UserServantEntity_o *)svtEntity,
                                                     0);
        if ( ((unsigned __int8)svtEntity & 1) == 0 )
        {
          svtEntity = (ServantStatusListViewItem_o *)this->fields.limitCountUpButton;
          if ( !svtEntity )
            goto LABEL_131;
          BYTE1(svtEntity->fields.equipTargetInfo) = 1;
          if ( !*v16 )
            goto LABEL_131;
          v76 = v75 + 1;
          UICommonButton__SetEnable((UICommonButton_o *)svtEntity, (*v16)->fields._CanMoveCombine_k__BackingField, 0);
          v77 = 1;
          goto LABEL_180;
        }
      }
    }
LABEL_179:
    v77 = 0;
    v76 = v75;
    goto LABEL_180;
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusListViewItemDrawMain__SetSavedTransformButton(
        ServantStatusListViewItemDrawMain_o *this,
        bool isCanSave,
        bool isOtherSvt,
        const MethodInfo *method)
{
  System_String_o **v7; // x22
  System_String_o **v8; // x24
  System_String_o **v9; // x8
  UICommonButton_o *saveTransformButton; // x0
  __int64 v11; // x1
  System_String_o *v12; // x22
  System_String_o *v13; // x24
  System_String_o *v14; // x23
  Il2CppObject *v15; // x25
  struct UICommonButton_o *v16; // x8
  System_String_o **v17; // x8
  bool v18; // zf
  UIRangeLabel_o *saveTransformButtonLabel; // x20
  float v20; // s0 OVERLAPPED
  float v21; // s1
  float v22; // s2
  float v23; // s3
  UIRangeLabel_o *v24; // x21
  Il2CppObject *component; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Color_o v26; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v27; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v28; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v29; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v30; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v31; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4E01AAD & 1) == 0 )
  {
    sub_1CE6700(&AtlasManager_TypeInfo);
    sub_1CE6700(&Method_UnityEngine_Component_TryGetComponent_UISprite___);
    sub_1CE6700(&LocalizationManager_TypeInfo);
    sub_1CE6700(&StringLiteral_416/*"#8E4040"*/);
    sub_1CE6700(&StringLiteral_11596/*"SAVE_TRANSFORM_BUTTON_DECISION"*/);
    sub_1CE6700(&StringLiteral_11595/*"SAVE_TRANSFORM_BUTTON_DECIDED"*/);
    sub_1CE6700(&StringLiteral_424/*"#FE4545"*/);
    sub_1CE6700(&StringLiteral_415/*"#808080"*/);
    sub_1CE6700(&StringLiteral_17636/*"btn_bg_21_2"*/);
    sub_1CE6700(&StringLiteral_404/*"#000000"*/);
    sub_1CE6700(&StringLiteral_17634/*"btn_bg_20_2"*/);
    byte_4E01AAD = 1;
  }
  component = 0;
  v7 = (System_String_o **)&StringLiteral_424/*"#FE4545"*/;
  v8 = (System_String_o **)&StringLiteral_17636/*"btn_bg_21_2"*/;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( isCanSave )
    v9 = (System_String_o **)&StringLiteral_11596/*"SAVE_TRANSFORM_BUTTON_DECISION"*/;
  else
    v9 = (System_String_o **)&StringLiteral_11595/*"SAVE_TRANSFORM_BUTTON_DECIDED"*/;
  if ( isCanSave )
  {
    v7 = (System_String_o **)&StringLiteral_404/*"#000000"*/;
    v8 = (System_String_o **)&StringLiteral_17634/*"btn_bg_20_2"*/;
  }
  saveTransformButton = (UICommonButton_o *)LocalizationManager__Get(*v9, 0);
  if ( !this->fields.saveTransformButton )
    goto LABEL_28;
  v12 = *v7;
  v13 = *v8;
  v14 = (System_String_o *)saveTransformButton;
  UnityEngine_Component__TryGetComponent_object_(
    (UnityEngine_Component_o *)this->fields.saveTransformButton,
    &component,
    (const MethodInfo_31FBC74 *)Method_UnityEngine_Component_TryGetComponent_UISprite___);
  v15 = component;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetDownloadCommonSprite((UISprite_o *)v15, v13, 0);
  saveTransformButton = this->fields.saveTransformButton;
  if ( !saveTransformButton )
    goto LABEL_28;
  UICommonButton__SetButtonEnable(saveTransformButton, 1, 1, 0);
  saveTransformButton = (UICommonButton_o *)this->fields.saveTransformButtonLabel;
  if ( !saveTransformButton )
    goto LABEL_28;
  v26.fields.r = 1.0;
  v26.fields.g = 1.0;
  v26.fields.b = 1.0;
  v26.fields.a = 1.0;
  UIRangeLabel__set_color((UIRangeLabel_o *)saveTransformButton, v26, 0);
  saveTransformButton = (UICommonButton_o *)this->fields.saveTransformButtonLabel;
  if ( !saveTransformButton )
    goto LABEL_28;
  UIRangeLabel__set_Text((UIRangeLabel_o *)saveTransformButton, v14, 0);
  if ( isOtherSvt )
  {
    v27.fields.r = 1.0;
    v27.fields.g = 1.0;
    v27.fields.b = 1.0;
    v27.fields.a = 1.0;
    v28 = ColorHelper__ParseColorCode_45269000((System_String_o *)StringLiteral_415/*"#808080"*/, v27, 0);
    v16 = this->fields.saveTransformButton;
    if ( v16 )
    {
      v16->fields.specifyDisabledColor = v28;
      saveTransformButton = (UICommonButton_o *)this->fields.saveTransformButtonLabel;
      if ( saveTransformButton )
      {
        UIRangeLabel__set_color((UIRangeLabel_o *)saveTransformButton, v28, 0);
        v17 = (System_String_o **)&StringLiteral_416/*"#8E4040"*/;
        v18 = !isCanSave;
        saveTransformButtonLabel = this->fields.saveTransformButtonLabel;
        v20 = 1.0;
        if ( !v18 )
          v17 = (System_String_o **)&StringLiteral_404/*"#000000"*/;
        v21 = 1.0;
        v22 = 1.0;
        v23 = 1.0;
        v29 = ColorHelper__ParseColorCode_45269000(*v17, *(UnityEngine_Color_o *)&v20, 0);
        if ( saveTransformButtonLabel )
        {
          UIRangeLabel__set_effectColor(saveTransformButtonLabel, v29, 0);
          saveTransformButton = this->fields.saveTransformButton;
          if ( saveTransformButton )
          {
            UICommonButton__SetButtonEnable(saveTransformButton, 0, 1, 0);
            return;
          }
        }
      }
    }
LABEL_28:
    sub_1CE6958(saveTransformButton, v11);
  }
  v24 = this->fields.saveTransformButtonLabel;
  v30.fields.r = 1.0;
  v30.fields.g = 1.0;
  v30.fields.b = 1.0;
  v30.fields.a = 1.0;
  v31 = ColorHelper__ParseColorCode_45269000(v12, v30, 0);
  if ( !v24 )
    goto LABEL_28;
  UIRangeLabel__set_effectColor(v24, v31, 0);
  saveTransformButton = this->fields.saveTransformButton;
  if ( !saveTransformButton )
    goto LABEL_28;
  UICommonButton__SetColliderEnable(saveTransformButton, isCanSave, 1, 0);
}


void ServantStatusListViewItemDrawMain___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4E01AAE & 1) == 0 )
  {
    sub_1CE6700(&ServantStatusListViewItemDrawMain___c_TypeInfo);
    byte_4E01AAE = 1;
  }
  v1 = (Il2CppObject *)sub_1CE694C(ServantStatusListViewItemDrawMain___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantStatusListViewItemDrawMain___c_TypeInfo->static_fields->__9 = (struct ServantStatusListViewItemDrawMain___c_o *)v1;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)ServantStatusListViewItemDrawMain___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ServantStatusListViewItemDrawMain___c___ctor(
        ServantStatusListViewItemDrawMain___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ServantStatusListViewItemDrawMain___c___AdjustLayoutByInsertGrandEnforcementInfo_b__66_0(
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
    sub_1CE6958(this, x);
  }
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  TransformHelper__SetLocalPositionY(x, localPosition.fields.y + -25.0, 0);
}


UnityEngine_Transform_o *ServantStatusListViewItemDrawMain___c___Awake_b__62_0(
        ServantStatusListViewItemDrawMain___c_o *this,
        UnityEngine_Transform_o *x,
        const MethodInfo *method)
{
  return x;
}


float ServantStatusListViewItemDrawMain___c___Awake_b__62_1(
        ServantStatusListViewItemDrawMain___c_o *this,
        UnityEngine_Transform_o *x,
        const MethodInfo *method)
{
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( !x )
    sub_1CE6958(this, 0);
  localPosition = UnityEngine_Transform__get_localPosition(x, 0);
  return localPosition.fields.y;
}


void ServantStatusListViewItemDrawMain___c___SetBaseView_b__64_0(
        ServantStatusListViewItemDrawMain___c_o *this,
        System_Collections_Generic_KeyValuePair_Transform__float__o x,
        const MethodInfo *method)
{
  float value; // w19
  UnityEngine_Transform_o *key; // x20

  value = x.fields.value;
  key = x.fields.key;
  if ( (byte_4E01AAF & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_KeyValuePair_Transform__float__get_Key__);
    sub_1CE6700(&Method_System_Collections_Generic_KeyValuePair_Transform__float__get_Value__);
    byte_4E01AAF = 1;
  }
  TransformHelper__SetLocalPositionY(key, value, 0);
}


void ServantStatusListViewItemDrawMain___c__DisplayClass65_0___ctor(
        ServantStatusListViewItemDrawMain___c__DisplayClass65_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ServantStatusListViewItemDrawMain___c__DisplayClass65_0___SetItem_b__0(
        ServantStatusListViewItemDrawMain___c__DisplayClass65_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1CE6958(this, method);
  ServantStatusListViewItemDrawMain__OnClickSaveTransform(this->fields.__4__this, this->fields.item, v2);
}