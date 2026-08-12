void ServantStatusListViewItemDrawMain___ctor(ServantStatusListViewItemDrawMain_o *this, const MethodInfo *method)
{
  this->fields.transformNameAddHeight = 34;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusListViewItemDrawMain__AddAreaHeight(
        ServantStatusListViewItemDrawMain_o *this,
        int32_t sizeY,
        const MethodInfo *method)
{
  UIWidget_o *baseSprite; // x0

  baseSprite = (UIWidget_o *)this->fields.baseSprite;
  if ( !baseSprite )
    sub_2213CDC(0, *(_QWORD *)&sizeY);
  UIWidget__set_height(baseSprite, baseSprite->fields.mHeight + sizeY, 0);
}


void ServantStatusListViewItemDrawMain__AdjustBaseUiPosY(
        ServantStatusListViewItemDrawMain_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct UISprite_o *baseSprite; // x8
  int32_t mHeight; // w20
  int32_t baseSpriteHeightBase; // w21
  float v7; // s0
  float v8; // s0

  baseSprite = this->fields.baseSprite;
  if ( !baseSprite )
    sub_2213CDC(this, method);
  mHeight = baseSprite->fields.mHeight;
  baseSpriteHeightBase = this->fields.baseSpriteHeightBase;
  if ( !byte_596A15B )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_596A15B = 1;
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, method, v2);
  v7 = ceilf(vcvts_n_f32_s32(mHeight - baseSpriteHeightBase, 1u));
  if ( v7 == INFINITY )
    v8 = -2147500000.0;
  else
    v8 = (float)(int)v7;
  GameObjectExtensions__SetLocalPositionY(this->fields.baseUi, v8, 0);
}


void ServantStatusListViewItemDrawMain__AdjustLayoutByInsertGrandEnforcementInfo(
        ServantStatusListViewItemDrawMain_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  ServantStatusListViewItemDrawMain___c_c *v6; // x0
  System_Collections_Generic_IEnumerable_T__o *transformsShiftYByInsertGrandUi; // x19
  struct ServantStatusListViewItemDrawMain___c_StaticFields *static_fields; // x8
  System_Action_object__o *_9__66_0; // x20
  Il2CppObject *v10; // x21
  struct ServantStatusListViewItemDrawMain___c_StaticFields *v11; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_596D34F & 1) == 0 )
  {
    sub_2213A60(&System_Action_Transform__TypeInfo);
    sub_2213A60(&Method_BasicHelper_ForEach_Transform___);
    sub_2213A60(&Method_ServantStatusListViewItemDrawMain___c__AdjustLayoutByInsertGrandEnforcementInfo_b__66_0__);
    sub_2213A60(&ServantStatusListViewItemDrawMain___c_TypeInfo);
    byte_596D34F = 1;
  }
  ServantStatusListViewItemDrawMain__AddAreaHeight(this, 25, v2);
  v6 = ServantStatusListViewItemDrawMain___c_TypeInfo;
  transformsShiftYByInsertGrandUi = (System_Collections_Generic_IEnumerable_T__o *)this->fields.transformsShiftYByInsertGrandUi;
  if ( !*(&ServantStatusListViewItemDrawMain___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawMain___c_TypeInfo, v4, v5);
    v6 = ServantStatusListViewItemDrawMain___c_TypeInfo;
  }
  static_fields = v6->static_fields;
  _9__66_0 = (System_Action_object__o *)static_fields->__9__66_0;
  if ( !_9__66_0 )
  {
    if ( !*(&v6->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v6, v4, v5);
      static_fields = ServantStatusListViewItemDrawMain___c_TypeInfo->static_fields;
    }
    v10 = (Il2CppObject *)static_fields->__9;
    _9__66_0 = (System_Action_object__o *)sub_2213CCC(System_Action_Transform__TypeInfo);
    System_Action_object____ctor(
      _9__66_0,
      v10,
      Method_ServantStatusListViewItemDrawMain___c__AdjustLayoutByInsertGrandEnforcementInfo_b__66_0__,
      0);
    v11 = ServantStatusListViewItemDrawMain___c_TypeInfo->static_fields;
    v11->__9__66_0 = (struct System_Action_Transform__o *)_9__66_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v11->__9__66_0, (int32_t)_9__66_0, v12, v13, v14, v15, v16, v17);
  }
  BasicHelper__ForEach_object_(
    transformsShiftYByInsertGrandUi,
    (System_Action_T__o *)_9__66_0,
    (const MethodInfo_381282C *)Method_BasicHelper_ForEach_Transform___);
}


void ServantStatusListViewItemDrawMain__Awake(ServantStatusListViewItemDrawMain_o *this, const MethodInfo *method)
{
  ServantStatusListViewItemDrawMain_o *v2; // x19
  struct UISprite_o *baseSprite; // x8
  Il2CppClass *v4; // x0
  ServantStatusListViewItemDrawMain_o *v5; // x20
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  ServantStatusListViewItemDrawMain_o *v12; // x21
  __int64 v13; // x1
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  ServantStatusListViewItemDrawMain_o *v20; // x21
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  ServantStatusListViewItemDrawMain_o *v27; // x21
  __int64 v28; // x2
  long double v29; // q0
  System_Collections_Generic_IEnumerable_TSource__o *transformsShiftYByInsertGrandUi; // x1
  _QWORD *v31; // x21
  __int64 v32; // x8
  __int64 v33; // x0
  __int64 v34; // x0
  System_Collections_Generic_IEnumerable_T__o *v35; // x0
  System_Collections_Generic_IEnumerable_T__o *v36; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x0
  __int64 v38; // x1
  __int64 v39; // x2
  ServantStatusListViewItemDrawMain___c_c *v40; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v41; // x20
  struct ServantStatusListViewItemDrawMain___c_StaticFields *static_fields; // x9
  System_Func_object__object__o *_9__62_0; // x21
  Il2CppObject *v44; // x22
  struct ServantStatusListViewItemDrawMain___c_StaticFields *v45; // x0
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  struct ServantStatusListViewItemDrawMain___c_StaticFields *v52; // x9
  System_Func_T__TResult__o *_9__62_1; // x22
  Il2CppObject *v54; // x23
  struct ServantStatusListViewItemDrawMain___c_StaticFields *v55; // x0
  System_String_o *v56; // x2
  System_String_o *v57; // x3
  int32_t v58; // w4
  int32_t v59; // w5
  bool v60; // w6
  bool v61; // w7
  System_Collections_Generic_Dictionary_TKey__TElement__o *v62; // x1
  System_String_o *v63; // x2
  System_String_o *v64; // x3
  int32_t v65; // w4
  int32_t v66; // w5
  bool v67; // w6
  bool v68; // w7
  __int64 v69; // x0

  v2 = this;
  if ( (byte_596D34C & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_Empty_Transform___);
    sub_2213A60(&Method_BasicHelper_ExcludeNull_Transform___);
    sub_2213A60(&Method_System_Linq_Enumerable_Concat_Transform___);
    sub_2213A60(&Method_System_Linq_Enumerable_Distinct_Transform___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToDictionary_Transform__Transform__float___);
    sub_2213A60(&System_Func_Transform__float__TypeInfo);
    sub_2213A60(&System_Func_Transform__Transform__TypeInfo);
    sub_2213A60(&UnityEngine_Transform___TypeInfo);
    sub_2213A60(&Method_ServantStatusListViewItemDrawMain___c__Awake_b__62_0__);
    sub_2213A60(&Method_ServantStatusListViewItemDrawMain___c__Awake_b__62_1__);
    this = (ServantStatusListViewItemDrawMain_o *)sub_2213A60(&ServantStatusListViewItemDrawMain___c_TypeInfo);
    byte_596D34C = 1;
  }
  baseSprite = v2->fields.baseSprite;
  if ( !baseSprite )
    goto LABEL_40;
  v4 = UnityEngine_Transform___TypeInfo;
  v2->fields.baseSpriteHeightBase = baseSprite->fields.mHeight;
  this = (ServantStatusListViewItemDrawMain_o *)sub_2213B20(v4, 3);
  if ( !v2->fields.baseUi )
    goto LABEL_40;
  v5 = this;
  this = (ServantStatusListViewItemDrawMain_o *)UnityEngine_GameObject__get_transform(v2->fields.baseUi, 0);
  if ( !v5 )
    goto LABEL_40;
  v12 = this;
  if ( this )
  {
    this = (ServantStatusListViewItemDrawMain_o *)sub_2213BB4(this, v5->klass->_1.element_class);
    if ( !this )
      goto LABEL_42;
  }
  if ( !LODWORD(v5->fields.m_CancellationTokenSource) )
    goto LABEL_41;
  *(_QWORD *)&v5->fields.dispMode = v12;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v5->fields.dispMode, (int32_t)v12, v6, v7, v8, v9, v10, v11);
  this = (ServantStatusListViewItemDrawMain_o *)v2->fields.mainContentsRoot;
  if ( !this )
    goto LABEL_40;
  this = (ServantStatusListViewItemDrawMain_o *)UnityEngine_GameObject__get_transform(
                                                  (UnityEngine_GameObject_o *)this,
                                                  0);
  v20 = this;
  if ( this )
  {
    this = (ServantStatusListViewItemDrawMain_o *)sub_2213BB4(this, v5->klass->_1.element_class);
    if ( !this )
    {
LABEL_42:
      v69 = sub_2213D00(this, v13);
      sub_2213BA0(v69, 0);
    }
  }
  if ( ((__int64)v5->fields.m_CancellationTokenSource & 0xFFFFFFFE) == 0 )
    goto LABEL_41;
  v5->fields.baseButton = (struct UICommonButton_o *)v20;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v5->fields.baseButton, (int32_t)v20, v14, v15, v16, v17, v18, v19);
  this = (ServantStatusListViewItemDrawMain_o *)v2->fields.combineRoot;
  if ( !this )
LABEL_40:
    sub_2213CDC(this, method);
  this = (ServantStatusListViewItemDrawMain_o *)UnityEngine_GameObject__get_transform(
                                                  (UnityEngine_GameObject_o *)this,
                                                  0);
  v27 = this;
  if ( this )
  {
    this = (ServantStatusListViewItemDrawMain_o *)sub_2213BB4(this, v5->klass->_1.element_class);
    if ( !this )
      goto LABEL_42;
  }
  if ( LODWORD(v5->fields.m_CancellationTokenSource) <= 2 )
LABEL_41:
    sub_2213CE4(this);
  v5->fields.servantTexture = (struct UITexture_o *)v27;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v5->fields.servantTexture,
    (int32_t)v27,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  transformsShiftYByInsertGrandUi = (System_Collections_Generic_IEnumerable_TSource__o *)v2->fields.transformsShiftYByInsertGrandUi;
  if ( !transformsShiftYByInsertGrandUi )
  {
    v31 = Method_System_Array_Empty_Transform___;
    v32 = *((_QWORD *)Method_System_Array_Empty_Transform___ + 7);
    if ( !v32 )
    {
      sub_224B964(Method_System_Array_Empty_Transform___);
      v32 = v31[7];
    }
    v33 = *(_QWORD *)(v32 + 16);
    if ( (*(_WORD *)(v33 + 309) & 1) == 0 )
      v33 = sub_224B908(v29);
    if ( !*(_DWORD *)(v33 + 228) )
      *(__n128 *)&v29 = j_il2cpp_runtime_class_init_0(v33, transformsShiftYByInsertGrandUi, v28);
    v34 = *(_QWORD *)(v31[7] + 16LL);
    if ( (*(_WORD *)(v34 + 309) & 1) == 0 )
      v34 = sub_224B908(v29);
    transformsShiftYByInsertGrandUi = **(System_Collections_Generic_IEnumerable_TSource__o ***)(v34 + 184);
  }
  v35 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Concat_object_(
                                                         (System_Collections_Generic_IEnumerable_TSource__o *)v5,
                                                         transformsShiftYByInsertGrandUi,
                                                         (const MethodInfo_387607C *)Method_System_Linq_Enumerable_Concat_Transform___);
  v36 = BasicHelper__ExcludeNull_object_(v35, (const MethodInfo_381076C *)Method_BasicHelper_ExcludeNull_Transform___);
  v37 = System_Linq_Enumerable__Distinct_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v36,
          (const MethodInfo_387C6A4 *)Method_System_Linq_Enumerable_Distinct_Transform___);
  v40 = ServantStatusListViewItemDrawMain___c_TypeInfo;
  v41 = v37;
  if ( !*(&ServantStatusListViewItemDrawMain___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawMain___c_TypeInfo, v38, v39);
    v40 = ServantStatusListViewItemDrawMain___c_TypeInfo;
  }
  static_fields = v40->static_fields;
  _9__62_0 = (System_Func_object__object__o *)static_fields->__9__62_0;
  if ( !_9__62_0 )
  {
    if ( !*(&v40->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v40, v38, v39);
      static_fields = ServantStatusListViewItemDrawMain___c_TypeInfo->static_fields;
    }
    v44 = (Il2CppObject *)static_fields->__9;
    _9__62_0 = (System_Func_object__object__o *)sub_2213CCC(System_Func_Transform__Transform__TypeInfo);
    System_Func_object__object____ctor(_9__62_0, v44, Method_ServantStatusListViewItemDrawMain___c__Awake_b__62_0__, 0);
    v45 = ServantStatusListViewItemDrawMain___c_TypeInfo->static_fields;
    v45->__9__62_0 = (struct System_Func_Transform__Transform__o *)_9__62_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v45->__9__62_0, (int32_t)_9__62_0, v46, v47, v48, v49, v50, v51);
    v40 = ServantStatusListViewItemDrawMain___c_TypeInfo;
  }
  if ( !*(&v40->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v40, v38, v39);
    v40 = ServantStatusListViewItemDrawMain___c_TypeInfo;
  }
  v52 = v40->static_fields;
  _9__62_1 = (System_Func_T__TResult__o *)v52->__9__62_1;
  if ( !_9__62_1 )
  {
    if ( !*(&v40->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v40, v38, v39);
      v52 = ServantStatusListViewItemDrawMain___c_TypeInfo->static_fields;
    }
    v54 = (Il2CppObject *)v52->__9;
    _9__62_1 = (System_Func_T__TResult__o *)sub_2213CCC(System_Func_Transform__float__TypeInfo);
    System_Func_object__float____ctor(_9__62_1, v54, Method_ServantStatusListViewItemDrawMain___c__Awake_b__62_1__, 0);
    v55 = ServantStatusListViewItemDrawMain___c_TypeInfo->static_fields;
    v55->__9__62_1 = (struct System_Func_Transform__float__o *)_9__62_1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v55->__9__62_1, (int32_t)_9__62_1, v56, v57, v58, v59, v60, v61);
  }
  v62 = System_Linq_Enumerable__ToDictionary_object__object__float_(
          v41,
          (System_Func_TSource__TKey__o *)_9__62_0,
          (System_Func_TSource__TElement__o *)_9__62_1,
          (const MethodInfo_389C6C4 *)Method_System_Linq_Enumerable_ToDictionary_Transform__Transform__float___);
  v2->fields.dynamicTransformsToOriginalPosYMap = (struct System_Collections_Generic_Dictionary_Transform__float__o *)v62;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v2->fields.dynamicTransformsToOriginalPosYMap,
    (int32_t)v62,
    v63,
    v64,
    v65,
    v66,
    v67,
    v68);
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
    sub_2213CDC(this, svtId);
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
  _BOOL4 isStart; // w8
  __int64 v7; // x1
  __int64 v8; // x2
  UITexture_o *servantTexture; // x19
  int32_t v10; // w20
  int32_t v11; // w21
  int32_t limitCount[2]; // [xsp+8h] [xbp-28h] BYREF

  v5 = this;
  if ( (byte_596D351 & 1) == 0 )
  {
    this = (ServantStatusListViewItemDrawMain_o *)sub_2213A60(&ServantAssetLoadManager_TypeInfo);
    byte_596D351 = 1;
  }
  isStart = v5->fields.isStart;
  *(_QWORD *)limitCount = 0;
  if ( isStart )
  {
    ServantStatusListViewItemDrawMain__GetServantIdAndLimitCount(this, &limitCount[1], limitCount, item, v3);
    servantTexture = v5->fields.servantTexture;
    v11 = limitCount[0];
    v10 = limitCount[1];
    if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v7, v8);
    ServantAssetLoadManager__loadStatusFace(servantTexture, v10, v11, 0);
  }
}


void ServantStatusListViewItemDrawMain__ModifyRandomLimitCountSetting(
        ServantStatusListViewItemDrawMain_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  _BOOL4 isStart; // w8
  ServantStatusListViewItemDrawMain_o *v7; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  UITexture_o *servantTexture; // x19
  int32_t v11; // w20
  int32_t v12; // w21
  int32_t limitCount[2]; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_596D352 & 1) == 0 )
  {
    sub_2213A60(&RandomLimitCountManager_TypeInfo);
    sub_2213A60(&ServantAssetLoadManager_TypeInfo);
    byte_596D352 = 1;
  }
  isStart = this->fields.isStart;
  *(_QWORD *)limitCount = 0;
  if ( isStart )
  {
    if ( !*(&RandomLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, item, method);
    if ( !byte_596C1A0 )
    {
      sub_2213A60(&RandomLimitCountManager_TypeInfo);
      byte_596C1A0 = 1;
    }
    v7 = (ServantStatusListViewItemDrawMain_o *)RandomLimitCountManager_TypeInfo;
    if ( !*(&RandomLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, item, method);
      v7 = (ServantStatusListViewItemDrawMain_o *)RandomLimitCountManager_TypeInfo;
    }
    if ( LOBYTE(v7->fields.friendshipGauge->monitor) )
    {
      ServantStatusListViewItemDrawMain__GetServantIdAndLimitCount(v7, &limitCount[1], limitCount, item, v3);
      servantTexture = this->fields.servantTexture;
      v12 = limitCount[0];
      v11 = limitCount[1];
      if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v8, v9);
      ServantAssetLoadManager__loadStatusFace(servantTexture, v11, v12, 0);
    }
  }
}


void ServantStatusListViewItemDrawMain__ModifyStatus(
        ServantStatusListViewItemDrawMain_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  ServantStatusListViewItemDrawMain_o *v4; // x19
  ServantStatusListViewItemDrawMain_o *SvtId; // x0
  const MethodInfo *v6; // x4
  __int64 v7; // x1
  __int64 v8; // x2
  UITexture_o *servantTexture; // x19
  int32_t v10; // w20
  int32_t v11; // w21
  int32_t limitCount[2]; // [xsp+8h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_596D350 & 1) == 0 )
  {
    this = (ServantStatusListViewItemDrawMain_o *)sub_2213A60(&ServantAssetLoadManager_TypeInfo);
    byte_596D350 = 1;
  }
  *(_QWORD *)limitCount = 0;
  if ( !item )
    sub_2213CDC(this, item);
  SvtId = (ServantStatusListViewItemDrawMain_o *)ServantStatusListViewItem__GetSvtId(item, 0, 0);
  limitCount[1] = (int)SvtId;
  if ( (int)SvtId >= 1 )
  {
    v4->fields.isStart = 1;
    ServantStatusListViewItemDrawMain__GetServantIdAndLimitCount(SvtId, &limitCount[1], limitCount, item, v6);
    servantTexture = v4->fields.servantTexture;
    v11 = limitCount[0];
    v10 = limitCount[1];
    if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v7, v8);
    ServantAssetLoadManager__loadStatusFace(servantTexture, v10, v11, 0);
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

  if ( (byte_596D354 & 1) == 0 )
  {
    sub_2213A60(&Method_ServantStatusListViewItemDrawMain_OnClickSaveTransform__);
    byte_596D354 = 1;
  }
  if ( item )
  {
    ServantStatusListViewItem__ChangeMainServant(item, 0);
    v5 = Method_ServantStatusListViewItemDrawMain_OnClickSaveTransform__;
    if ( (*((_BYTE *)Method_ServantStatusListViewItemDrawMain_OnClickSaveTransform__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_2213A78(Method_ServantStatusListViewItemDrawMain_OnClickSaveTransform__);
    v6 = (System_Reflection_MethodBase_o *)sub_2213A44(v5, v5[4]);
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

  if ( (byte_596D353 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_10278/*"OnClickUnSealedQuestTransition"*/);
    byte_596D353 = 1;
  }
  questId = this->fields.questId;
  if ( questId )
  {
    inputMessageObject = this->fields.inputMessageObject;
    v7 = questId;
    v5 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v7);
    if ( !inputMessageObject )
      sub_2213CDC(v5, v6);
    UnityEngine_GameObject__SendMessage_83438088(inputMessageObject, (System_String_o *)StringLiteral_10278/*"OnClickUnSealedQuestTransition"*/, v5, 0);
  }
}


void ServantStatusListViewItemDrawMain__ResizeCollider(
        ServantStatusListViewItemDrawMain_o *this,
        const MethodInfo *method)
{
  UnityEngine_BoxCollider_o *baseCollider; // x0
  struct UISprite_o *baseSprite; // x8
  UnityEngine_Vector3_o size; // 0:kr00_12.12
  UnityEngine_Vector3_o v7; // 0:s0.4,4:s1.4,8:s2.4

  baseCollider = this->fields.baseCollider;
  if ( !baseCollider
    || (size = UnityEngine_BoxCollider__get_size(baseCollider, 0),
        v7.fields.x = size.fields.x,
        v7.fields.z = size.fields.z,
        (baseSprite = this->fields.baseSprite) == 0)
    || (baseCollider = this->fields.baseCollider) == 0 )
  {
    sub_2213CDC(baseCollider, method);
  }
  v7.fields.y = (float)baseSprite->fields.mHeight;
  UnityEngine_BoxCollider__set_size(baseCollider, v7, 0);
}


void ServantStatusListViewItemDrawMain__SetBaseView(
        ServantStatusListViewItemDrawMain_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  ServantStatusListViewItemDrawMain___c_c *v4; // x0
  System_Collections_Generic_IEnumerable_T__o *dynamicTransformsToOriginalPosYMap; // x20
  struct ServantStatusListViewItemDrawMain___c_StaticFields *static_fields; // x8
  System_Action_T__o *_9__64_0; // x21
  Il2CppObject *v8; // x22
  struct ServantStatusListViewItemDrawMain___c_StaticFields *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  __int64 v16; // x1
  UIWidget_o *baseSprite; // x0
  const MethodInfo *v18; // x1

  if ( (byte_596D34D & 1) == 0 )
  {
    sub_2213A60(&System_Action_KeyValuePair_Transform__float___TypeInfo);
    sub_2213A60(&Method_BasicHelper_ForEach_KeyValuePair_Transform__float____);
    sub_2213A60(&Method_ServantStatusListViewItemDrawMain___c__SetBaseView_b__64_0__);
    sub_2213A60(&ServantStatusListViewItemDrawMain___c_TypeInfo);
    byte_596D34D = 1;
  }
  v4 = ServantStatusListViewItemDrawMain___c_TypeInfo;
  dynamicTransformsToOriginalPosYMap = (System_Collections_Generic_IEnumerable_T__o *)this->fields.dynamicTransformsToOriginalPosYMap;
  if ( !*(&ServantStatusListViewItemDrawMain___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawMain___c_TypeInfo, method, v2);
    v4 = ServantStatusListViewItemDrawMain___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__64_0 = (System_Action_T__o *)static_fields->__9__64_0;
  if ( !_9__64_0 )
  {
    if ( !*(&v4->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v4, method, v2);
      static_fields = ServantStatusListViewItemDrawMain___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__64_0 = (System_Action_T__o *)sub_2213CCC(System_Action_KeyValuePair_Transform__float___TypeInfo);
    System_Action_KeyValuePair_object__float_____ctor(
      _9__64_0,
      v8,
      Method_ServantStatusListViewItemDrawMain___c__SetBaseView_b__64_0__,
      0);
    v9 = ServantStatusListViewItemDrawMain___c_TypeInfo->static_fields;
    v9->__9__64_0 = (struct System_Action_KeyValuePair_Transform__float___o *)_9__64_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v9->__9__64_0, (int32_t)_9__64_0, v10, v11, v12, v13, v14, v15);
  }
  BasicHelper__ForEach_KeyValuePair_object__float__(
    dynamicTransformsToOriginalPosYMap,
    _9__64_0,
    (const MethodInfo_3811A18 *)Method_BasicHelper_ForEach_KeyValuePair_Transform__float____);
  baseSprite = (UIWidget_o *)this->fields.baseSprite;
  if ( !baseSprite )
    sub_2213CDC(0, v16);
  UIWidget__set_height(baseSprite, this->fields.baseSpriteHeightBase, 0);
  ServantStatusListViewItemDrawMain__ResizeCollider(this, v18);
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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  ServantStatusListViewItem_o **v16; // x21
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  const MethodInfo *v23; // x1
  UIExtrusionLabel_o *levelLabel; // x22
  UILabel_o *maxLevelLabel; // x22
  UILabel_o *costLabel; // x22
  bool IsStatusUp; // w8
  UIIconLabel_o *attackIconLabel; // x22
  __int64 v29; // x2
  int v30; // w23
  UIIconLabel_o *hpIconLabel; // x22
  int32_t v32; // w23
  int v33; // w24
  UIIconLabel_o *v34; // x22
  int32_t v35; // w23
  int v36; // w24
  int32_t AdjustAtk; // w0
  int32_t v38; // w25
  int32_t v39; // w0
  UIIconLabel_o *reinforceAttackIconLabel; // x22
  __int64 v41; // x2
  int v42; // w23
  int32_t AdjustHp; // w0
  int32_t v44; // w25
  int32_t v45; // w0
  UIIconLabel_o *reinforceHpIconLabel; // x22
  __int64 v47; // x2
  int v48; // w23
  __int64 v49; // x1
  __int64 v50; // x2
  UnityEngine_Object_o *addedHpByGrandIconLabel; // x22
  __int64 v52; // x2
  UnityEngine_Object_o *addedAtkByGrandIconLabel; // x22
  UIIconLabel_o *v54; // x22
  UIIconLabel_o *v55; // x22
  bool ExpInfo; // w8
  __int64 v57; // x1
  __int64 v58; // x2
  UILabel_o *lateExpLabel; // x22
  int32_t v60; // w23
  ServantStatusLimitCountGauge_o *limitCountGauge; // x22
  struct ServantEntity_o *v62; // x8
  __int64 v63; // x1
  __int64 v64; // x2
  UnityEngine_Object_o *tdStrengthStatusSprite; // x22
  UISprite_o *v66; // x22
  __int64 v67; // x2
  unsigned __int64 v68; // x27
  unsigned int v69; // w26
  __int64 max_length; // x29
  SkillInfo_o *v71; // x23
  int32_t skillRecord; // w22
  int32_t IconCnt; // w22
  int v74; // w23
  int i; // w25
  struct UISprite_array *skillStrengthStatusLabelList; // x8
  unsigned int v77; // w9
  UISprite_o *v78; // x24
  System_String_o **p_ICON_SKILL_OFF; // x8
  struct UISprite_array *v80; // x8
  int v81; // w22
  __int64 v82; // x23
  struct UISprite_array *v83; // x8
  UnityEngine_GameObject_o *v84; // x22
  __int64 v85; // x1
  __int64 v86; // x2
  UnityEngine_Object_o *baseButton; // x22
  ServantStatusListViewItem_o *v88; // x8
  UserServantEntity_o *userSvtEntity; // x0
  ServantStatusListViewItem_o *v90; // x8
  char v91; // w24
  _BOOL4 v92; // w22
  _BOOL4 v93; // w23
  int v94; // w29
  ServantStatusListViewItem_o *v95; // x8
  _BOOL4 v96; // w24
  _BOOL4 v97; // w25
  _BOOL4 v98; // w26
  _BOOL4 v99; // w25
  ServantStatusListViewItem_o *v100; // x8
  __int64 v101; // x2
  __int64 v102; // x2
  struct UserServantEntity_o *v103; // x8
  ServantLimitImageMaster_o *v104; // x26
  __int64 v105; // x27
  __int64 v106; // x28
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v107; // x8
  int32_t v108; // w27
  __int64 v109; // x2
  struct UserServantEntity_o *v110; // x8
  __int64 v111; // x27
  __int64 v112; // x28
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v113; // x8
  int32_t v114; // w27
  int32_t v115; // w0
  int32_t ServantLimitCountSealedQuestOpen; // w0
  ServantStatusListViewItem_o *v117; // x8
  bool v118; // w1
  _BOOL4 v119; // w26
  float v120; // s0
  ServantStatusListViewItem_o *v121; // x8
  UnityEngine_GameObject_o *limitCountUpObject; // x0
  float v123; // s0
  float v124; // s8
  ServantStatusListViewItem_o *v125; // x8
  UnityEngine_GameObject_o **p_levelExceedObject; // x8
  const MethodInfo *v127; // x2
  UIWidget_o *transformNameLabel; // x22
  UIWidget_o *transformNameSprite; // x22
  UILabel_o *v130; // x22
  const MethodInfo *v131; // x2
  ServantStatusListViewItem_o *v132; // x8
  const MethodInfo *v133; // x3
  struct UICommonButton_o *saveTransformButton; // x8
  struct System_Collections_Generic_List_EventDelegate__o *onClick; // x8
  int32_t size; // w2
  int v137; // w9
  struct UICommonButton_o *v138; // x8
  System_Collections_Generic_List_object__o *v139; // x21
  EventDelegate_Callback_o *v140; // x22
  EventDelegate_o *v141; // x20
  System_String_o *v142; // x2
  System_String_o *v143; // x3
  int32_t v144; // w4
  int32_t v145; // w5
  bool v146; // w6
  bool v147; // w7
  struct System_Object_array *items; // x8
  _QWORD *v149; // x9
  __int64 v150; // x10
  Il2CppClass **v151; // x0
  const MethodInfo *v152; // x1
  int32_t addParamMaxAdjust1[2]; // [xsp+20h] [xbp-D0h] BYREF
  __int64 v154; // [xsp+28h] [xbp-C8h] BYREF
  int32_t maxAjustHp[2]; // [xsp+30h] [xbp-C0h] BYREF
  __int64 maxFriendshipRank; // [xsp+38h] [xbp-B8h] BYREF
  __int64 fraction; // [xsp+40h] [xbp-B0h] BYREF
  __int64 max; // [xsp+48h] [xbp-A8h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+50h] [xbp-A0h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+58h] [xbp-98h] BYREF
  __int64 barExp; // [xsp+60h] [xbp-90h] BYREF
  __int64 exp; // [xsp+68h] [xbp-88h] BYREF
  int32_t addParamMaxAdjust2[2]; // [xsp+70h] [xbp-80h] BYREF
  __int64 secondMaxAdjustAtk; // [xsp+78h] [xbp-78h] BYREF
  int32_t maxAjustAtk[2]; // [xsp+88h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v166; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v167; // 0:x0.16
  UnityEngine_Color_o TransformNameLabelColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o TransformNameSpriteColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_596D34E & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&EventDelegate_Callback_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&EventDelegate_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventDelegate__Clear__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&ServantSkillStrengthStatus_TypeInfo);
    sub_2213A60(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_2213A60(&Method_ServantStatusListViewItemDrawMain___c__DisplayClass65_0__SetItem_b__0__);
    sub_2213A60(&ServantStatusListViewItemDrawMain___c__DisplayClass65_0_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596D34E = 1;
  }
  *(_QWORD *)maxAjustAtk = 0;
  *(_QWORD *)addParamMaxAdjust2 = 0;
  secondMaxAdjustAtk = 0;
  barExp = 0;
  exp = 0;
  skillInfoList = 0;
  tdInfo = 0;
  fraction = 0;
  max = 0;
  *(_QWORD *)maxAjustHp = 0;
  maxFriendshipRank = 0;
  *(_QWORD *)addParamMaxAdjust1 = 0;
  v154 = 0;
  v7 = sub_2213CCC(ServantStatusListViewItemDrawMain___c__DisplayClass65_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_327;
  *(_QWORD *)(v7 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = item;
  v16 = (ServantStatusListViewItem_o **)(v7 + 24);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)item, v17, v18, v19, v20, v21, v22);
  this->fields.dispMode = mode;
  if ( mode && *v16 )
  {
    ServantStatusListViewItemDrawMain__SetBaseView(this, v23);
    svtEntity = *v16;
    if ( !*v16 )
      goto LABEL_327;
    levelLabel = this->fields.levelLabel;
    HIDWORD(exp) = ServantStatusListViewItem__get_Level(svtEntity, 0);
    svtEntity = (ServantStatusListViewItem_o *)System_Int32__ToString((int32_t)&exp + 4, 0);
    if ( !levelLabel )
      goto LABEL_327;
    UIExtrusionLabel__set_text(levelLabel, (System_String_o *)svtEntity, 0);
    svtEntity = *v16;
    if ( !*v16 )
      goto LABEL_327;
    maxLevelLabel = this->fields.maxLevelLabel;
    HIDWORD(exp) = ServantStatusListViewItem__get_MaxLevel(svtEntity, 0);
    svtEntity = (ServantStatusListViewItem_o *)System_Int32__ToString((int32_t)&exp + 4, 0);
    if ( !maxLevelLabel )
      goto LABEL_327;
    UILabel__set_text(maxLevelLabel, (System_String_o *)svtEntity, 0);
    svtEntity = *v16;
    if ( !*v16 )
      goto LABEL_327;
    costLabel = this->fields.costLabel;
    HIDWORD(exp) = ServantStatusListViewItem__get_Cost(svtEntity, 0);
    svtEntity = (ServantStatusListViewItem_o *)System_Int32__ToString((int32_t)&exp + 4, 0);
    if ( !costLabel )
      goto LABEL_327;
    UILabel__set_text(costLabel, (System_String_o *)svtEntity, 0);
    if ( !*v16 )
      goto LABEL_327;
    svtEntity = (ServantStatusListViewItem_o *)(*v16)->fields.svtEntity;
    if ( !svtEntity )
      goto LABEL_327;
    IsStatusUp = ServantEntity__get_IsStatusUp((ServantEntity_o *)svtEntity, 0);
    attackIconLabel = this->fields.attackIconLabel;
    svtEntity = *v16;
    if ( IsStatusUp )
    {
      if ( !svtEntity )
        goto LABEL_327;
      svtEntity = (ServantStatusListViewItem_o *)ServantStatusListViewItem__get_Atk(svtEntity, 0);
      v30 = (int)svtEntity;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v9, v29);
      if ( !attackIconLabel )
        goto LABEL_327;
      UIIconLabel__Set_48071660(
        attackIconLabel,
        39,
        BalanceConfig_TypeInfo->static_fields->StatusUpAdjustAtk * v30,
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
        goto LABEL_327;
      hpIconLabel = this->fields.hpIconLabel;
      svtEntity = (ServantStatusListViewItem_o *)ServantStatusListViewItem__get_Hp(svtEntity, 0);
      if ( !hpIconLabel )
        goto LABEL_327;
      UIIconLabel__Set_48071660(
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
      if ( !svtEntity )
        goto LABEL_327;
      svtEntity = (ServantStatusListViewItem_o *)ServantStatusListViewItem__get_Atk(svtEntity, 0);
      if ( !*v16 )
        goto LABEL_327;
      v32 = (int)svtEntity;
      svtEntity = (ServantStatusListViewItem_o *)ServantStatusListViewItem__get_AdjustAtk(*v16, 0);
      if ( !*v16 )
        goto LABEL_327;
      v33 = (int)svtEntity;
      svtEntity = (ServantStatusListViewItem_o *)(*v16)->fields._GrandInfo_k__BackingField;
      if ( !svtEntity )
        goto LABEL_327;
      svtEntity = (ServantStatusListViewItem_o *)UserServantGrandInfo__get_AddedAtk(
                                                   (UserServantGrandInfo_o *)svtEntity,
                                                   0);
      if ( !attackIconLabel )
        goto LABEL_327;
      UIIconLabel__Set_48071660(attackIconLabel, 5, v32, (_DWORD)svtEntity + v33, 0, 0, 0, 0, 0, 0, 0);
      svtEntity = *v16;
      if ( !*v16 )
        goto LABEL_327;
      v34 = this->fields.hpIconLabel;
      svtEntity = (ServantStatusListViewItem_o *)ServantStatusListViewItem__get_Hp(svtEntity, 0);
      if ( !*v16 )
        goto LABEL_327;
      v35 = (int)svtEntity;
      svtEntity = (ServantStatusListViewItem_o *)ServantStatusListViewItem__get_AdjustHp(*v16, 0);
      if ( !*v16 )
        goto LABEL_327;
      v36 = (int)svtEntity;
      svtEntity = (ServantStatusListViewItem_o *)(*v16)->fields._GrandInfo_k__BackingField;
      if ( !svtEntity )
        goto LABEL_327;
      svtEntity = (ServantStatusListViewItem_o *)UserServantGrandInfo__get_AddedHp(
                                                   (UserServantGrandInfo_o *)svtEntity,
                                                   0);
      if ( !v34 )
        goto LABEL_327;
      UIIconLabel__Set_48071660(v34, 3, v35, (_DWORD)svtEntity + v36, 0, 0, 0, 0, 0, 0, 0);
    }
    svtEntity = *v16;
    if ( !*v16 )
      goto LABEL_327;
    if ( ServantStatusListViewItem__GetAdjustMax(
           svtEntity,
           &maxAjustAtk[1],
           maxAjustAtk,
           (int32_t *)&secondMaxAdjustAtk + 1,
           (int32_t *)&secondMaxAdjustAtk,
           &addParamMaxAdjust2[1],
           addParamMaxAdjust2,
           0) )
    {
      svtEntity = *v16;
      if ( !*v16 )
        goto LABEL_327;
      AdjustAtk = ServantStatusListViewItem__get_AdjustAtk(svtEntity, 0);
      v38 = maxAjustAtk[0];
      if ( AdjustAtk >= maxAjustAtk[0] )
      {
        svtEntity = *v16;
        if ( !*v16 )
          goto LABEL_327;
        v39 = ServantStatusListViewItem__get_AdjustAtk(svtEntity, 0);
        v38 = secondMaxAdjustAtk;
        if ( v39 >= (int)secondMaxAdjustAtk && addParamMaxAdjust2[0] )
          v38 = addParamMaxAdjust2[0];
      }
      svtEntity = *v16;
      if ( !*v16 )
        goto LABEL_327;
      reinforceAttackIconLabel = this->fields.reinforceAttackIconLabel;
      svtEntity = (ServantStatusListViewItem_o *)ServantStatusListViewItem__get_AdjustAtk(svtEntity, 0);
      v42 = (int)svtEntity;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v9, v41);
      if ( !reinforceAttackIconLabel )
        goto LABEL_327;
      UIIconLabel__Set_48071660(
        reinforceAttackIconLabel,
        45,
        BalanceConfig_TypeInfo->static_fields->StatusUpAdjustHp * v42,
        BalanceConfig_TypeInfo->static_fields->StatusUpAdjustHp * v38,
        0,
        0,
        0,
        0,
        0,
        0,
        0);
      svtEntity = (ServantStatusListViewItem_o *)this->fields.reinforceAttackMaxLabel;
      if ( !svtEntity )
        goto LABEL_327;
      UILabel__set_text((UILabel_o *)svtEntity, (System_String_o *)StringLiteral_1/*""*/, 0);
      svtEntity = *v16;
      if ( !*v16 )
        goto LABEL_327;
      AdjustHp = ServantStatusListViewItem__get_AdjustHp(svtEntity, 0);
      v44 = maxAjustAtk[1];
      if ( AdjustHp >= maxAjustAtk[1] )
      {
        svtEntity = *v16;
        if ( !*v16 )
          goto LABEL_327;
        v45 = ServantStatusListViewItem__get_AdjustHp(svtEntity, 0);
        v44 = HIDWORD(secondMaxAdjustAtk);
        if ( v45 >= SHIDWORD(secondMaxAdjustAtk) && addParamMaxAdjust2[1] )
          v44 = addParamMaxAdjust2[1];
      }
      svtEntity = *v16;
      if ( !*v16 )
        goto LABEL_327;
      reinforceHpIconLabel = this->fields.reinforceHpIconLabel;
      svtEntity = (ServantStatusListViewItem_o *)ServantStatusListViewItem__get_AdjustHp(svtEntity, 0);
      v48 = (int)svtEntity;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v9, v47);
      if ( !reinforceHpIconLabel )
        goto LABEL_327;
      UIIconLabel__Set_48071660(
        reinforceHpIconLabel,
        44,
        BalanceConfig_TypeInfo->static_fields->StatusUpAdjustHp * v48,
        BalanceConfig_TypeInfo->static_fields->StatusUpAdjustHp * v44,
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
        goto LABEL_327;
      UIIconLabel__Clear((UIIconLabel_o *)svtEntity, 0);
      svtEntity = (ServantStatusListViewItem_o *)this->fields.reinforceAttackMaxLabel;
      if ( !svtEntity )
        goto LABEL_327;
      UILabel__set_text((UILabel_o *)svtEntity, (System_String_o *)StringLiteral_1/*""*/, 0);
      svtEntity = (ServantStatusListViewItem_o *)this->fields.reinforceHpIconLabel;
      if ( !svtEntity )
        goto LABEL_327;
      UIIconLabel__Clear((UIIconLabel_o *)svtEntity, 0);
    }
    svtEntity = (ServantStatusListViewItem_o *)this->fields.reinforceHpMaxLabel;
    if ( !svtEntity )
      goto LABEL_327;
    UILabel__set_text((UILabel_o *)svtEntity, (System_String_o *)StringLiteral_1/*""*/, 0);
    addedHpByGrandIconLabel = (UnityEngine_Object_o *)this->fields.addedHpByGrandIconLabel;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v49, v50);
    if ( UnityEngine_Object__op_Inequality(addedHpByGrandIconLabel, 0, 0) )
    {
      addedAtkByGrandIconLabel = (UnityEngine_Object_o *)this->fields.addedAtkByGrandIconLabel;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v52);
      svtEntity = (ServantStatusListViewItem_o *)UnityEngine_Object__op_Inequality(addedAtkByGrandIconLabel, 0, 0);
      if ( ((unsigned __int8)svtEntity & 1) != 0 )
      {
        if ( !*v16 )
          goto LABEL_327;
        svtEntity = (ServantStatusListViewItem_o *)(*v16)->fields._GrandInfo_k__BackingField;
        if ( !svtEntity )
          goto LABEL_327;
        svtEntity = (ServantStatusListViewItem_o *)UserServantGrandInfo__IsValid((UserServantGrandInfo_o *)svtEntity, 0);
        v54 = this->fields.addedHpByGrandIconLabel;
        if ( ((unsigned __int8)svtEntity & 1) != 0 )
        {
          if ( !*v16 )
            goto LABEL_327;
          svtEntity = (ServantStatusListViewItem_o *)(*v16)->fields._GrandInfo_k__BackingField;
          if ( !svtEntity )
            goto LABEL_327;
          svtEntity = (ServantStatusListViewItem_o *)UserServantGrandInfo__get_AddedHp(
                                                       (UserServantGrandInfo_o *)svtEntity,
                                                       0);
          if ( !v54 )
            goto LABEL_327;
          UIIconLabel__Set_48071660(v54, 58, (int32_t)svtEntity, 0, 0, 0, 0, 0, 0, 0, 0);
          if ( !*v16 )
            goto LABEL_327;
          svtEntity = (ServantStatusListViewItem_o *)(*v16)->fields._GrandInfo_k__BackingField;
          if ( !svtEntity )
            goto LABEL_327;
          v55 = this->fields.addedAtkByGrandIconLabel;
          svtEntity = (ServantStatusListViewItem_o *)UserServantGrandInfo__get_AddedAtk(
                                                       (UserServantGrandInfo_o *)svtEntity,
                                                       0);
          if ( !v55 )
            goto LABEL_327;
          UIIconLabel__Set_48071660(v55, 59, (int32_t)svtEntity, 0, 0, 0, 0, 0, 0, 0, 0);
        }
        else
        {
          if ( !v54 )
            goto LABEL_327;
          UIIconLabel__Clear(this->fields.addedHpByGrandIconLabel, 0);
          svtEntity = (ServantStatusListViewItem_o *)this->fields.addedAtkByGrandIconLabel;
          if ( !svtEntity )
            goto LABEL_327;
          UIIconLabel__Clear((UIIconLabel_o *)svtEntity, 0);
        }
      }
    }
    svtEntity = *v16;
    if ( !*v16 )
      goto LABEL_327;
    ExpInfo = ServantStatusListViewItem__GetExpInfo(
                svtEntity,
                (int32_t *)&exp,
                (int32_t *)&barExp + 1,
                (float *)&barExp,
                0);
    svtEntity = (ServantStatusListViewItem_o *)this->fields.expBase;
    if ( ExpInfo )
    {
      if ( !svtEntity )
        goto LABEL_327;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 1, 0);
      svtEntity = (ServantStatusListViewItem_o *)this->fields.lateExpBase;
      if ( !svtEntity )
        goto LABEL_327;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, SHIDWORD(barExp) > 0, 0);
      lateExpLabel = this->fields.lateExpLabel;
      v60 = HIDWORD(barExp);
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v57, v58);
      svtEntity = (ServantStatusListViewItem_o *)LocalizationManager__GetNumberFormat(v60, 0);
      if ( !lateExpLabel )
        goto LABEL_327;
      UILabel__set_text(lateExpLabel, (System_String_o *)svtEntity, 0);
      svtEntity = (ServantStatusListViewItem_o *)this->fields.expBar;
      if ( !svtEntity )
        goto LABEL_327;
      UIProgressBar__set_value((UIProgressBar_o *)svtEntity, *(float *)&barExp, 0);
    }
    else
    {
      if ( !svtEntity )
        goto LABEL_327;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 0, 0);
    }
    svtEntity = *v16;
    if ( !*v16 )
      goto LABEL_327;
    limitCountGauge = this->fields.limitCountGauge;
    svtEntity = (ServantStatusListViewItem_o *)ServantStatusListViewItem__get_LimitCount(svtEntity, 0);
    if ( !*v16 )
      goto LABEL_327;
    v62 = (*v16)->fields.svtEntity;
    if ( !v62 || !limitCountGauge )
      goto LABEL_327;
    ServantStatusLimitCountGauge__Set(limitCountGauge, (int32_t)svtEntity, v62->fields.limitMax, 0);
    tdStrengthStatusSprite = (UnityEngine_Object_o *)this->fields.tdStrengthStatusSprite;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v63, v64);
    svtEntity = (ServantStatusListViewItem_o *)UnityEngine_Object__op_Inequality(tdStrengthStatusSprite, 0, 0);
    if ( ((unsigned __int8)svtEntity & 1) != 0 )
    {
      svtEntity = *v16;
      if ( !*v16 )
        goto LABEL_327;
      svtEntity = (ServantStatusListViewItem_o *)ServantStatusListViewItem__GetNpInfo(svtEntity, &tdInfo, 0);
      if ( !tdInfo )
        goto LABEL_327;
      v66 = this->fields.tdStrengthStatusSprite;
      svtEntity = (ServantStatusListViewItem_o *)StrengthStatus__GetTreasureDeviceIconName(
                                                   tdInfo->fields.strengthStatus,
                                                   tdInfo->fields.treasureDeviceNum,
                                                   0);
      if ( !v66 )
        goto LABEL_327;
      UISprite__set_spriteName(v66, (System_String_o *)svtEntity, 0);
    }
    if ( this->fields.skillStrengthStatusLabelList )
    {
      svtEntity = *v16;
      if ( !*v16 )
        goto LABEL_327;
      ServantStatusListViewItem__GetSkillInfo(svtEntity, &skillInfoList, 0, 0);
      if ( skillInfoList && (int)skillInfoList->max_length >= 1 )
      {
        v68 = 0;
        v69 = 0;
        max_length = (unsigned int)skillInfoList->max_length;
        while ( skillInfoList )
        {
          if ( v68 >= LODWORD(skillInfoList->max_length) )
LABEL_328:
            sub_2213CE4(svtEntity);
          v71 = skillInfoList->m_Items[v68];
          if ( v71 && v71->fields.id >= 1 && v71->fields.strengthStatus )
          {
            skillRecord = v71->fields.skillRecord;
            if ( !*(&ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo, v9, v67);
            IconCnt = ServantSkillStrengthStatus__GetIconCnt(skillRecord, 0);
            svtEntity = (ServantStatusListViewItem_o *)ServantSkillStrengthStatus__GetStrengthenedCnt(
                                                         v71->fields.strengthStatus,
                                                         v71->fields.skillRecord,
                                                         0);
            if ( IconCnt >= 1 )
            {
              v74 = (int)svtEntity;
              for ( i = 0; i != IconCnt; ++i )
              {
                skillStrengthStatusLabelList = this->fields.skillStrengthStatusLabelList;
                v77 = v69 + i;
                if ( i >= v74 )
                {
                  if ( !skillStrengthStatusLabelList )
                    goto LABEL_327;
                  if ( v77 >= LODWORD(skillStrengthStatusLabelList->max_length) )
                    goto LABEL_328;
                  svtEntity = (ServantStatusListViewItem_o *)ServantSkillStrengthStatus_TypeInfo;
                  v78 = skillStrengthStatusLabelList->m_Items[v77];
                  if ( !*(&ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished + 1) )
                    j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo, v9, v67);
                  if ( !v78 )
                    goto LABEL_327;
                  p_ICON_SKILL_OFF = &ServantSkillStrengthStatus_TypeInfo->static_fields->ICON_SKILL_OFF;
                }
                else
                {
                  if ( !skillStrengthStatusLabelList )
                    goto LABEL_327;
                  if ( v77 >= LODWORD(skillStrengthStatusLabelList->max_length) )
                    goto LABEL_328;
                  svtEntity = (ServantStatusListViewItem_o *)ServantSkillStrengthStatus_TypeInfo;
                  v78 = skillStrengthStatusLabelList->m_Items[v77];
                  if ( !*(&ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished + 1) )
                    j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo, v9, v67);
                  if ( !v78 )
                    goto LABEL_327;
                  p_ICON_SKILL_OFF = &ServantSkillStrengthStatus_TypeInfo->static_fields->ICON_SKILL_ON;
                }
                UISprite__set_spriteName(v78, *p_ICON_SKILL_OFF, 0);
              }
              v69 += i;
            }
          }
          if ( ++v68 == max_length )
            goto LABEL_135;
        }
        goto LABEL_327;
      }
      v69 = 0;
LABEL_135:
      v80 = this->fields.skillStrengthStatusLabelList;
      if ( !v80 )
        goto LABEL_327;
      v81 = v80->max_length;
      if ( (int)v69 < v81 )
      {
        v82 = 8LL * (int)v69 + 32;
        do
        {
          v83 = this->fields.skillStrengthStatusLabelList;
          if ( !v83 )
            goto LABEL_327;
          if ( v69 >= LODWORD(v83->max_length) )
            goto LABEL_328;
          svtEntity = *(ServantStatusListViewItem_o **)((char *)&v83->obj.klass + v82);
          if ( !svtEntity )
            goto LABEL_327;
          UISprite__set_spriteName((UISprite_o *)svtEntity, 0, 0);
          ++v69;
          v82 += 8;
        }
        while ( v81 != v69 );
      }
    }
    if ( !*v16 )
      goto LABEL_327;
    svtEntity = (ServantStatusListViewItem_o *)this->fields.friendshipGauge;
    if ( (*v16)->fields.userSvtCollectionEntity )
    {
      if ( !svtEntity )
        goto LABEL_327;
      svtEntity = (ServantStatusListViewItem_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)svtEntity,
                                                   0);
      if ( !svtEntity )
        goto LABEL_327;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 1, 0);
      svtEntity = *v16;
      if ( !*v16 )
        goto LABEL_327;
      ServantStatusListViewItem__GetFriendshipInfo(
        svtEntity,
        (int32_t *)&max + 1,
        (int32_t *)&max,
        (int32_t *)&fraction + 1,
        (float *)&fraction,
        0);
      svtEntity = (ServantStatusListViewItem_o *)this->fields.friendshipGauge;
      if ( !svtEntity )
        goto LABEL_327;
      ServantStatusFriendshipGauge__Set(
        (ServantStatusFriendshipGauge_o *)svtEntity,
        SHIDWORD(max),
        max,
        SHIDWORD(fraction),
        *(float *)&fraction,
        0);
    }
    else
    {
      if ( !svtEntity )
        goto LABEL_327;
      svtEntity = (ServantStatusListViewItem_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)svtEntity,
                                                   0);
      if ( !svtEntity )
        goto LABEL_327;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 0, 0);
    }
    svtEntity = (ServantStatusListViewItem_o *)this->fields.eventJoinSprite;
    if ( !svtEntity )
      goto LABEL_327;
    svtEntity = (ServantStatusListViewItem_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)svtEntity,
                                                 0);
    if ( !*v16 )
      goto LABEL_327;
    v84 = (UnityEngine_GameObject_o *)svtEntity;
    svtEntity = (ServantStatusListViewItem_o *)ServantStatusListViewItem__get_IsEventJoin(*v16, 0);
    if ( !v84 )
      goto LABEL_327;
    UnityEngine_GameObject__SetActive(v84, (unsigned __int8)svtEntity & 1, 0);
    baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v85, v86);
    svtEntity = (ServantStatusListViewItem_o *)UnityEngine_Object__op_Inequality(baseButton, 0, 0);
    v88 = *v16;
    if ( !*v16 )
      goto LABEL_327;
    if ( !v88->fields._IsDisplayCombineButton_k__BackingField || (userSvtEntity = v88->fields.userSvtEntity) == 0 )
    {
LABEL_286:
      svtEntity = *v16;
      if ( !*v16 )
        goto LABEL_327;
      if ( ServantStatusListViewItem__get_AnyTransformServant(svtEntity, 0) )
      {
        svtEntity = *v16;
        if ( !*v16 )
          goto LABEL_327;
        transformNameLabel = (UIWidget_o *)this->fields.transformNameLabel;
        TransformNameLabelColor = ServantStatusListViewItem__get_TransformNameLabelColor(svtEntity, 0);
        if ( !transformNameLabel )
          goto LABEL_327;
        UIWidget__set_color(transformNameLabel, TransformNameLabelColor, 0);
        svtEntity = *v16;
        if ( !*v16 )
          goto LABEL_327;
        transformNameSprite = (UIWidget_o *)this->fields.transformNameSprite;
        TransformNameSpriteColor = ServantStatusListViewItem__get_TransformNameSpriteColor(svtEntity, 0);
        if ( !transformNameSprite )
          goto LABEL_327;
        UIWidget__set_color(transformNameSprite, TransformNameSpriteColor, 0);
        svtEntity = (ServantStatusListViewItem_o *)this->fields.transformNameSprite;
        if ( !svtEntity )
          goto LABEL_327;
        svtEntity = (ServantStatusListViewItem_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)svtEntity,
                                                     0);
        if ( !svtEntity )
          goto LABEL_327;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 1, 0);
        svtEntity = *v16;
        if ( !*v16 )
          goto LABEL_327;
        v130 = this->fields.transformNameLabel;
        svtEntity = (ServantStatusListViewItem_o *)ServantStatusListViewItem__GetTransformName(svtEntity, 0);
        if ( !v130 )
          goto LABEL_327;
        UILabel__set_text(v130, (System_String_o *)svtEntity, 0);
        ServantStatusListViewItemDrawMain__AddAreaHeight(this, this->fields.transformNameAddHeight, v131);
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
          goto LABEL_327;
        svtEntity = (ServantStatusListViewItem_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)svtEntity,
                                                     0);
        if ( !svtEntity )
          goto LABEL_327;
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
            if ( ((unsigned __int8)svtEntity & 1) != 0 )
            {
              v132 = *v16;
              if ( !*v16 )
                goto LABEL_327;
              if ( v132->fields._IsOpenSourceMySvt_k__BackingField || v132->fields._IsOpenSourceOtherSvt_k__BackingField )
              {
                svtEntity = (ServantStatusListViewItem_o *)this->fields.saveTransformButton;
                if ( !svtEntity )
                  goto LABEL_327;
                svtEntity = (ServantStatusListViewItem_o *)UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)svtEntity,
                                                             0);
                if ( !svtEntity )
                  goto LABEL_327;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 1, 0);
                svtEntity = *v16;
                if ( !*v16 )
                  goto LABEL_327;
                svtEntity = (ServantStatusListViewItem_o *)ServantStatusListViewItem__CheckCurrentMainServant(
                                                             svtEntity,
                                                             0);
                if ( !*v16 )
                  goto LABEL_327;
                ServantStatusListViewItemDrawMain__SetSavedTransformButton(
                  this,
                  ((unsigned __int8)svtEntity & 1) == 0,
                  (*v16)->fields._IsOpenSourceOtherSvt_k__BackingField,
                  v133);
                saveTransformButton = this->fields.saveTransformButton;
                if ( !saveTransformButton )
                  goto LABEL_327;
                onClick = saveTransformButton->fields.onClick;
                if ( !onClick )
                  goto LABEL_327;
                size = onClick->fields._size;
                v137 = onClick->fields._version + 1;
                onClick->fields._size = 0;
                onClick->fields._version = v137;
                if ( size >= 1 )
                  System_Array__Clear((System_Array_o *)onClick->fields._items, 0, size, 0);
                if ( !*v16 )
                  goto LABEL_327;
                if ( (*v16)->fields._IsOpenSourceMySvt_k__BackingField )
                {
                  v138 = this->fields.saveTransformButton;
                  if ( !v138 )
                    goto LABEL_327;
                  v139 = (System_Collections_Generic_List_object__o *)v138->fields.onClick;
                  v140 = (EventDelegate_Callback_o *)sub_2213CCC(EventDelegate_Callback_TypeInfo);
                  EventDelegate_Callback___ctor(
                    v140,
                    (Il2CppObject *)v7,
                    Method_ServantStatusListViewItemDrawMain___c__DisplayClass65_0__SetItem_b__0__,
                    0);
                  v141 = (EventDelegate_o *)sub_2213CCC(EventDelegate_TypeInfo);
                  EventDelegate___ctor_56337280(v141, v140, 0);
                  if ( !v139 )
                    goto LABEL_327;
                  items = v139->fields._items;
                  v149 = Method_System_Collections_Generic_List_EventDelegate__Add__;
                  ++v139->fields._version;
                  if ( !items )
                    goto LABEL_327;
                  v150 = v139->fields._size;
                  if ( (unsigned int)v150 >= LODWORD(items->max_length) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v139,
                      (Il2CppObject *)v141,
                      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v149[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v151 = &items->obj.klass + v150;
                    v139->fields._size = v150 + 1;
                    v151[4] = (Il2CppClass *)v141;
                    sub_2213A04(
                      (MissionNaviTransitionBoardItem_o *)(v151 + 4),
                      (int32_t)v141,
                      v142,
                      v143,
                      v144,
                      v145,
                      v146,
                      v147);
                  }
                }
              }
            }
            ServantStatusListViewItemDrawMain__ResizeCollider(this, v9);
            ServantStatusListViewItemDrawMain__AdjustBaseUiPosY(this, v152);
            return;
          }
        }
      }
LABEL_327:
      sub_2213CDC(svtEntity, v9);
    }
    svtEntity = (ServantStatusListViewItem_o *)UserServantEntity__IsHeroine(userSvtEntity, 0);
    v90 = *v16;
    maxFriendshipRank = -1;
    if ( !v90 )
      goto LABEL_327;
    v91 = (char)svtEntity;
    svtEntity = (ServantStatusListViewItem_o *)v90->fields.userSvtCollectionEntity;
    if ( svtEntity )
    {
      svtEntity = (ServantStatusListViewItem_o *)UserServantCollectionEntity__getFriendShipRankInfo(
                                                   (UserServantCollectionEntity_o *)svtEntity,
                                                   (int32_t *)&maxFriendshipRank + 1,
                                                   (int32_t *)&maxFriendshipRank,
                                                   0);
      v92 = 0;
      if ( maxFriendshipRank < 0
        || (maxFriendshipRank & 0x80000000) != 0
        || HIDWORD(maxFriendshipRank) != (_DWORD)maxFriendshipRank )
      {
LABEL_172:
        if ( (v91 & 1) == 0 )
        {
LABEL_173:
          if ( !*v16 )
            goto LABEL_327;
          svtEntity = (ServantStatusListViewItem_o *)(*v16)->fields.userSvtEntity;
          if ( !svtEntity )
            goto LABEL_327;
          svtEntity = (ServantStatusListViewItem_o *)UserServantEntity__isLevelMax((UserServantEntity_o *)svtEntity, 0);
          if ( ((unsigned __int8)svtEntity & 1) != 0 )
          {
            if ( !*v16 )
              goto LABEL_327;
            svtEntity = (ServantStatusListViewItem_o *)(*v16)->fields.userSvtEntity;
            if ( !svtEntity )
              goto LABEL_327;
            svtEntity = (ServantStatusListViewItem_o *)UserServantEntity__isLimitCountMax(
                                                         (UserServantEntity_o *)svtEntity,
                                                         0);
            if ( ((unsigned __int8)svtEntity & 1) == 0 )
            {
              svtEntity = (ServantStatusListViewItem_o *)this->fields.limitCountUpButton;
              if ( !svtEntity )
                goto LABEL_327;
              v121 = *v16;
              BYTE1(svtEntity->fields.equipTargetInfo) = 1;
              if ( !v121 )
                goto LABEL_327;
              v94 = v92 + 1;
              UICommonButton__SetEnable((UICommonButton_o *)svtEntity, v121->fields._CanMoveCombine_k__BackingField, 0);
              v93 = 1;
              goto LABEL_180;
            }
          }
        }
LABEL_179:
        v93 = 0;
        v94 = v92;
        goto LABEL_180;
      }
      if ( !*v16 )
        goto LABEL_327;
      svtEntity = (ServantStatusListViewItem_o *)(*v16)->fields.userSvtEntity;
      if ( !svtEntity )
        goto LABEL_327;
      svtEntity = (ServantStatusListViewItem_o *)UserServantEntity__isExceedFriendshipMax(
                                                   (UserServantEntity_o *)svtEntity,
                                                   0);
      if ( ((unsigned __int8)svtEntity & 1) == 0 )
      {
        if ( !*v16 )
          goto LABEL_327;
        svtEntity = (ServantStatusListViewItem_o *)(*v16)->fields.userSvtEntity;
        if ( !svtEntity )
          goto LABEL_327;
        svtEntity = (ServantStatusListViewItem_o *)UserServantEntity__IsEventJoin((UserServantEntity_o *)svtEntity, 0);
        if ( ((unsigned __int8)svtEntity & 1) == 0 )
        {
          if ( (v91 & 1) != 0 )
          {
            if ( !*v16 )
              goto LABEL_327;
            svtEntity = (ServantStatusListViewItem_o *)(*v16)->fields.userSvtEntity;
            if ( !svtEntity )
              goto LABEL_327;
            svtEntity = (ServantStatusListViewItem_o *)UserServantEntity__IsUseFriendshipExceedItemHeroine(
                                                         (UserServantEntity_o *)svtEntity,
                                                         0);
            if ( ((unsigned __int8)svtEntity & 1) == 0 )
            {
              v92 = 0;
              v93 = 0;
              v94 = 0;
LABEL_180:
              if ( !*v16 )
                goto LABEL_327;
              svtEntity = (ServantStatusListViewItem_o *)(*v16)->fields.userSvtEntity;
              if ( !svtEntity )
                goto LABEL_327;
              svtEntity = (ServantStatusListViewItem_o *)UserServantEntity__isLevelMax(
                                                           (UserServantEntity_o *)svtEntity,
                                                           0);
              if ( ((unsigned __int8)svtEntity & 1) == 0 )
                goto LABEL_199;
              if ( !*v16 )
                goto LABEL_327;
              svtEntity = (ServantStatusListViewItem_o *)(*v16)->fields.userSvtEntity;
              if ( !svtEntity )
                goto LABEL_327;
              svtEntity = (ServantStatusListViewItem_o *)UserServantEntity__isExceedLvMax(
                                                           (UserServantEntity_o *)svtEntity,
                                                           0);
              if ( ((unsigned __int8)svtEntity & 1) != 0 )
                goto LABEL_199;
              if ( !*v16 )
                goto LABEL_327;
              svtEntity = (ServantStatusListViewItem_o *)(*v16)->fields.userSvtEntity;
              if ( !svtEntity )
                goto LABEL_327;
              svtEntity = (ServantStatusListViewItem_o *)UserServantEntity__IsEventJoin(
                                                           (UserServantEntity_o *)svtEntity,
                                                           0);
              if ( ((unsigned __int8)svtEntity & 1) != 0 )
                goto LABEL_199;
              if ( !*v16 )
                goto LABEL_327;
              svtEntity = (ServantStatusListViewItem_o *)(*v16)->fields.userSvtEntity;
              if ( !svtEntity )
                goto LABEL_327;
              svtEntity = (ServantStatusListViewItem_o *)UserServantEntity__isLimitCountMax(
                                                           (UserServantEntity_o *)svtEntity,
                                                           0);
              if ( ((unsigned __int8)svtEntity & 1) == 0 )
                goto LABEL_199;
              if ( (v91 & 1) == 0 )
                goto LABEL_196;
              if ( !*v16 )
                goto LABEL_327;
              svtEntity = (ServantStatusListViewItem_o *)(*v16)->fields.userSvtEntity;
              if ( !svtEntity )
                goto LABEL_327;
              if ( !UserServantEntity__IsUseLevelExceedItemHeroine((UserServantEntity_o *)svtEntity, 0) )
              {
LABEL_199:
                v96 = 0;
              }
              else
              {
LABEL_196:
                svtEntity = (ServantStatusListViewItem_o *)this->fields.levelExceedButton;
                if ( !svtEntity )
                  goto LABEL_327;
                v95 = *v16;
                BYTE1(svtEntity->fields.equipTargetInfo) = 1;
                if ( !v95 )
                  goto LABEL_327;
                ++v94;
                UICommonButton__SetEnable((UICommonButton_o *)svtEntity, v95->fields._CanMoveCombine_k__BackingField, 0);
                v96 = 1;
              }
              svtEntity = *v16;
              if ( !*v16 )
                goto LABEL_327;
              svtEntity = (ServantStatusListViewItem_o *)ServantStatusListViewItem__GetAdjustMax(
                                                           svtEntity,
                                                           &maxAjustHp[1],
                                                           maxAjustHp,
                                                           (int32_t *)&v154 + 1,
                                                           (int32_t *)&v154,
                                                           &addParamMaxAdjust1[1],
                                                           addParamMaxAdjust1,
                                                           0);
              if ( ((unsigned __int8)svtEntity & 1) != 0 )
              {
                svtEntity = *v16;
                if ( !*v16 )
                  goto LABEL_327;
                svtEntity = (ServantStatusListViewItem_o *)ServantStatusListViewItem__get_AdjustHp(svtEntity, 0);
                if ( !*v16 )
                  goto LABEL_327;
                v97 = (int)svtEntity >= addParamMaxAdjust1[1];
                svtEntity = (ServantStatusListViewItem_o *)ServantStatusListViewItem__get_AdjustAtk(*v16, 0);
                v98 = (int)svtEntity >= addParamMaxAdjust1[0];
              }
              else
              {
                v98 = 0;
                v97 = 0;
              }
              if ( !*v16 )
                goto LABEL_327;
              svtEntity = (ServantStatusListViewItem_o *)(*v16)->fields.userSvtEntity;
              if ( !svtEntity )
                goto LABEL_327;
              svtEntity = (ServantStatusListViewItem_o *)UserServantEntity__IsLeave((UserServantEntity_o *)svtEntity, 0);
              if ( ((unsigned __int8)svtEntity & 1) != 0 )
                goto LABEL_212;
              if ( !*v16 )
                goto LABEL_327;
              svtEntity = (ServantStatusListViewItem_o *)(*v16)->fields.userSvtEntity;
              if ( !svtEntity )
                goto LABEL_327;
              svtEntity = (ServantStatusListViewItem_o *)UserServantEntity__isLevelMax(
                                                           (UserServantEntity_o *)svtEntity,
                                                           0);
              if ( ((unsigned int)svtEntity & (v98 && v97) & 1) != 0 )
              {
LABEL_212:
                v99 = 0;
              }
              else
              {
                svtEntity = (ServantStatusListViewItem_o *)this->fields.reinforceButton;
                if ( !svtEntity )
                  goto LABEL_327;
                v100 = *v16;
                BYTE1(svtEntity->fields.equipTargetInfo) = 1;
                if ( !v100 )
                  goto LABEL_327;
                ++v94;
                UICommonButton__SetEnable(
                  (UICommonButton_o *)svtEntity,
                  v100->fields._CanMoveCombine_k__BackingField,
                  0);
                v99 = 1;
              }
              if ( !*v16 )
                goto LABEL_327;
              svtEntity = (ServantStatusListViewItem_o *)(*v16)->fields.userSvtEntity;
              if ( !svtEntity )
                goto LABEL_327;
              svtEntity = (ServantStatusListViewItem_o *)UserServantEntity__IsHeroine(
                                                           (UserServantEntity_o *)svtEntity,
                                                           0);
              if ( ((unsigned __int8)svtEntity & 1) != 0 )
                goto LABEL_245;
              if ( !*v16 )
                goto LABEL_327;
              svtEntity = (ServantStatusListViewItem_o *)(*v16)->fields.userSvtEntity;
              if ( !svtEntity )
                goto LABEL_327;
              if ( !UserServantEntity__isLimitCountMax((UserServantEntity_o *)svtEntity, 0) )
                goto LABEL_245;
              if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v9, v101);
              svtEntity = (ServantStatusListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
              if ( !*v16 )
                goto LABEL_327;
              v103 = (*v16)->fields.userSvtEntity;
              if ( !v103 )
                goto LABEL_327;
              v104 = (ServantLimitImageMaster_o *)svtEntity;
              v105 = *(_QWORD *)&v103->fields.svtId.fields.currentCryptoKey;
              v106 = *(_QWORD *)&v103->fields.svtId.fields.fakeValue;
              if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v102);
              *(_QWORD *)&v166.fields.currentCryptoKey = v105;
              *(_QWORD *)&v166.fields.fakeValue = v106;
              svtEntity = (ServantStatusListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                           v166,
                                                           0);
              if ( !*v16 )
                goto LABEL_327;
              v107 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*v16)->fields.userSvtEntity;
              if ( !v107 )
                goto LABEL_327;
              v108 = (int)svtEntity;
              svtEntity = (ServantStatusListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                           v107[6],
                                                           0);
              if ( !v104 )
                goto LABEL_327;
              svtEntity = (ServantStatusListViewItem_o *)ServantLimitImageMaster__IsServantLimitCountSeal(
                                                           v104,
                                                           v108,
                                                           (int32_t)svtEntity,
                                                           0);
              if ( ((unsigned __int8)svtEntity & 1) == 0 )
                goto LABEL_245;
              if ( !*v16 )
                goto LABEL_327;
              v110 = (*v16)->fields.userSvtEntity;
              if ( !v110 )
                goto LABEL_327;
              v111 = *(_QWORD *)&v110->fields.svtId.fields.currentCryptoKey;
              v112 = *(_QWORD *)&v110->fields.svtId.fields.fakeValue;
              if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v109);
              *(_QWORD *)&v167.fields.currentCryptoKey = v111;
              *(_QWORD *)&v167.fields.fakeValue = v112;
              svtEntity = (ServantStatusListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                           v167,
                                                           0);
              if ( !*v16 )
                goto LABEL_327;
              v113 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*v16)->fields.userSvtEntity;
              if ( !v113 )
                goto LABEL_327;
              v114 = (int)svtEntity;
              v115 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v113[6], 0);
              ServantLimitCountSealedQuestOpen = ServantLimitImageMaster__GetServantLimitCountSealedQuestOpen(
                                                   v104,
                                                   v114,
                                                   v115,
                                                   0);
              this->fields.questId = ServantLimitCountSealedQuestOpen;
              if ( !ServantLimitCountSealedQuestOpen )
                goto LABEL_245;
              svtEntity = (ServantStatusListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
              if ( !svtEntity )
                goto LABEL_327;
              if ( clsQuestCheck__CheckQuestPlayableNow((clsQuestCheck_o *)svtEntity, this->fields.questId, 0, 0) )
              {
                svtEntity = (ServantStatusListViewItem_o *)this->fields.unSealedQuestTransitionButton;
                if ( !svtEntity )
                  goto LABEL_327;
                v117 = *v16;
                BYTE1(svtEntity->fields.equipTargetInfo) = 1;
                if ( !v117 )
                  goto LABEL_327;
                ++v94;
                v118 = v117->fields._CanMoveCombine_k__BackingField && v117->fields.isEnableServantQuest;
                UICommonButton__SetEnable((UICommonButton_o *)svtEntity, v118, 0);
                v119 = 1;
                if ( !v92 )
                  goto LABEL_269;
              }
              else
              {
LABEL_245:
                v119 = 0;
                if ( !v92 )
                {
LABEL_269:
                  if ( v99 && (unsigned int)(v94 - 1) <= 2 )
                    GameObjectExtensions__SetLocalPositionX(this->fields.reinforceObject, flt_ED9738[v94 - 1], 0);
                  if ( v96 )
                  {
                    p_levelExceedObject = &this->fields.levelExceedObject;
                    v124 = 220.0;
LABEL_276:
                    GameObjectExtensions__SetLocalPositionX(*p_levelExceedObject, v124, 0);
LABEL_277:
                    svtEntity = (ServantStatusListViewItem_o *)this->fields.bondLimitUpObject;
                    if ( !svtEntity )
                      goto LABEL_327;
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, v92, 0);
                    svtEntity = (ServantStatusListViewItem_o *)this->fields.limitCountUpObject;
                    if ( !svtEntity )
                      goto LABEL_327;
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, v93, 0);
                    svtEntity = (ServantStatusListViewItem_o *)this->fields.levelExceedObject;
                    if ( !svtEntity )
                      goto LABEL_327;
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, v96, 0);
                    svtEntity = (ServantStatusListViewItem_o *)this->fields.reinforceObject;
                    if ( !svtEntity )
                      goto LABEL_327;
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, v99, 0);
                    svtEntity = (ServantStatusListViewItem_o *)this->fields.unSealedQuestTransitionObject;
                    if ( !svtEntity )
                      goto LABEL_327;
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, v119, 0);
                    if ( v92 || v96 || v119 || v93 || v99 )
                    {
                      svtEntity = (ServantStatusListViewItem_o *)this->fields.reinforceMaskSprite;
                      if ( !svtEntity )
                        goto LABEL_327;
                      svtEntity = (ServantStatusListViewItem_o *)UnityEngine_Component__get_gameObject(
                                                                   (UnityEngine_Component_o *)svtEntity,
                                                                   0);
                      if ( !svtEntity )
                        goto LABEL_327;
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 1, 0);
                      ServantStatusListViewItemDrawMain__AddAreaHeight(this, 46, v127);
                    }
                    goto LABEL_286;
                  }
                  limitCountUpObject = this->fields.limitCountUpObject;
                  v124 = 220.0;
                  v123 = 220.0;
LABEL_275:
                  GameObjectExtensions__SetLocalPositionX(limitCountUpObject, v123, 0);
                  p_levelExceedObject = &this->fields.unSealedQuestTransitionObject;
                  goto LABEL_276;
                }
              }
              if ( v99 )
              {
                if ( v94 == 2 )
                {
                  v120 = 100.0;
                  goto LABEL_254;
                }
                if ( v94 == 3 )
                {
                  v120 = -20.0;
LABEL_254:
                  GameObjectExtensions__SetLocalPositionX(this->fields.reinforceObject, v120, 0);
                }
              }
              if ( !v96 )
                goto LABEL_277;
              limitCountUpObject = this->fields.limitCountUpObject;
              v123 = -20.0;
              v124 = -20.0;
              goto LABEL_275;
            }
          }
          svtEntity = (ServantStatusListViewItem_o *)this->fields.bondLimitUpObject;
          if ( !svtEntity )
            goto LABEL_327;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 1, 0);
          svtEntity = (ServantStatusListViewItem_o *)this->fields.bondLimitUpButton;
          if ( !svtEntity )
            goto LABEL_327;
          v125 = *v16;
          BYTE1(svtEntity->fields.equipTargetInfo) = 1;
          if ( !v125 )
            goto LABEL_327;
          UICommonButton__SetEnable((UICommonButton_o *)svtEntity, v125->fields._CanMoveCombine_k__BackingField, 0);
          v92 = 1;
          if ( (v91 & 1) == 0 )
            goto LABEL_173;
          goto LABEL_179;
        }
      }
    }
    v92 = 0;
    goto LABEL_172;
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
  int v8; // w8
  System_String_o **v9; // x8
  System_String_o **v10; // x24
  UICommonButton_o *saveTransformButton; // x0
  __int64 v12; // x1
  System_String_o *v13; // x23
  System_String_o *v14; // x22
  System_String_o *v15; // x24
  __int64 v16; // x1
  __int64 v17; // x2
  Il2CppObject *v18; // x25
  struct UICommonButton_o *v19; // x8
  bool v20; // zf
  System_String_o **v21; // x8
  UIRangeLabel_o *saveTransformButtonLabel; // x20
  UIRangeLabel_o *v26; // x21
  Il2CppObject *component; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Color_o v28; // 0:kr00_16.16
  UnityEngine_Color_o v29; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v30; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v31; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v32; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v33; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v34; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_596D355 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Component_TryGetComponent_UISprite___);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_441/*"#8E4040"*/);
    sub_2213A60(&StringLiteral_11982/*"SAVE_TRANSFORM_BUTTON_DECISION"*/);
    sub_2213A60(&StringLiteral_11981/*"SAVE_TRANSFORM_BUTTON_DECIDED"*/);
    sub_2213A60(&StringLiteral_449/*"#FE4545"*/);
    sub_2213A60(&StringLiteral_440/*"#808080"*/);
    sub_2213A60(&StringLiteral_18212/*"btn_bg_21_2"*/);
    sub_2213A60(&StringLiteral_429/*"#000000"*/);
    sub_2213A60(&StringLiteral_18210/*"btn_bg_20_2"*/);
    byte_596D355 = 1;
  }
  v7 = (System_String_o **)&StringLiteral_449/*"#FE4545"*/;
  v8 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
  component = 0;
  if ( !v8 )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, isCanSave, isOtherSvt);
  if ( isCanSave )
    v9 = (System_String_o **)&StringLiteral_11982/*"SAVE_TRANSFORM_BUTTON_DECISION"*/;
  else
    v9 = (System_String_o **)&StringLiteral_11981/*"SAVE_TRANSFORM_BUTTON_DECIDED"*/;
  if ( isCanSave )
  {
    v7 = (System_String_o **)&StringLiteral_429/*"#000000"*/;
    v10 = (System_String_o **)&StringLiteral_18210/*"btn_bg_20_2"*/;
  }
  else
  {
    v10 = (System_String_o **)&StringLiteral_18212/*"btn_bg_21_2"*/;
  }
  saveTransformButton = (UICommonButton_o *)LocalizationManager__Get(*v9, 0);
  if ( !this->fields.saveTransformButton )
    goto LABEL_29;
  v13 = (System_String_o *)saveTransformButton;
  v14 = *v7;
  v15 = *v10;
  UnityEngine_Component__TryGetComponent_object_(
    (UnityEngine_Component_o *)this->fields.saveTransformButton,
    &component,
    (const MethodInfo_3821BA4 *)Method_UnityEngine_Component_TryGetComponent_UISprite___);
  v18 = component;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v16, v17);
  AtlasManager__SetDownloadCommonSprite((UISprite_o *)v18, v15, 0);
  saveTransformButton = this->fields.saveTransformButton;
  if ( !saveTransformButton )
    goto LABEL_29;
  UICommonButton__SetButtonEnable(saveTransformButton, 1, 1, 0);
  saveTransformButton = (UICommonButton_o *)this->fields.saveTransformButtonLabel;
  if ( !saveTransformButton )
    goto LABEL_29;
  v29.fields.r = 1.0;
  v29.fields.g = 1.0;
  v29.fields.b = 1.0;
  v29.fields.a = 1.0;
  UIRangeLabel__set_color((UIRangeLabel_o *)saveTransformButton, v29, 0);
  saveTransformButton = (UICommonButton_o *)this->fields.saveTransformButtonLabel;
  if ( !saveTransformButton )
    goto LABEL_29;
  UIRangeLabel__set_Text((UIRangeLabel_o *)saveTransformButton, v13, 0);
  if ( isOtherSvt )
  {
    v30.fields.r = 1.0;
    v30.fields.g = 1.0;
    v30.fields.b = 1.0;
    v30.fields.a = 1.0;
    v28 = ColorHelper__ParseColorCode_51166816((System_String_o *)StringLiteral_440/*"#808080"*/, v30, 0);
    v19 = this->fields.saveTransformButton;
    if ( v19 )
    {
      v19->fields.specifyDisabledColor = v28;
      saveTransformButton = (UICommonButton_o *)this->fields.saveTransformButtonLabel;
      if ( saveTransformButton )
      {
        UIRangeLabel__set_color((UIRangeLabel_o *)saveTransformButton, v28, 0);
        v20 = !isCanSave;
        v31.fields.r = 1.0;
        v21 = (System_String_o **)&StringLiteral_441/*"#8E4040"*/;
        v31.fields.g = 1.0;
        v31.fields.b = 1.0;
        v31.fields.a = 1.0;
        saveTransformButtonLabel = this->fields.saveTransformButtonLabel;
        if ( !v20 )
          v21 = (System_String_o **)&StringLiteral_429/*"#000000"*/;
        v33 = ColorHelper__ParseColorCode_51166816(*v21, v31, 0);
        if ( saveTransformButtonLabel )
        {
          UIRangeLabel__set_effectColor(saveTransformButtonLabel, v33, 0);
          saveTransformButton = this->fields.saveTransformButton;
          if ( saveTransformButton )
          {
            UICommonButton__SetButtonEnable(saveTransformButton, 0, 1, 0);
            return;
          }
        }
      }
    }
LABEL_29:
    sub_2213CDC(saveTransformButton, v12);
  }
  v32.fields.r = 1.0;
  v32.fields.g = 1.0;
  v26 = this->fields.saveTransformButtonLabel;
  v32.fields.b = 1.0;
  v32.fields.a = 1.0;
  v34 = ColorHelper__ParseColorCode_51166816(v14, v32, 0);
  if ( !v26 )
    goto LABEL_29;
  UIRangeLabel__set_effectColor(v26, v34, 0);
  saveTransformButton = this->fields.saveTransformButton;
  if ( !saveTransformButton )
    goto LABEL_29;
  UICommonButton__SetColliderEnable(saveTransformButton, isCanSave, 1, 0);
}


void ServantStatusListViewItemDrawMain___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596D356 & 1) == 0 )
  {
    sub_2213A60(&ServantStatusListViewItemDrawMain___c_TypeInfo);
    byte_596D356 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(ServantStatusListViewItemDrawMain___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantStatusListViewItemDrawMain___c_TypeInfo->static_fields->__9 = (struct ServantStatusListViewItemDrawMain___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)ServantStatusListViewItemDrawMain___c_TypeInfo->static_fields,
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
  float v4; // s1

  if ( !x
    || (this = (ServantStatusListViewItemDrawMain___c_o *)UnityEngine_Component__get_transform(
                                                            (UnityEngine_Component_o *)x,
                                                            0)) == 0 )
  {
    sub_2213CDC(this, x);
  }
  v4 = COERCE_FLOAT(LODWORD(UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0).fields.y));
  TransformHelper__SetLocalPositionY(x, v4 + -25.0, 0);
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
  if ( !x )
    sub_2213CDC(this, 0);
  return UnityEngine_Transform__get_localPosition(x, 0).fields.y;
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
  if ( (byte_596D357 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_Transform__float__get_Key__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_Transform__float__get_Value__);
    byte_596D357 = 1;
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
    sub_2213CDC(this, method);
  ServantStatusListViewItemDrawMain__OnClickSaveTransform(this->fields.__4__this, this->fields.item, v2);
}