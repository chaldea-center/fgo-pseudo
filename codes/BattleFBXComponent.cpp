void __fastcall BattleFBXComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
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
  struct BattleFBXComponent_StaticFields *static_fields; // x0
  int32_t v24; // w1
  int32_t v25; // w1
  struct BattleFBXComponent_StaticFields *v26; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  int32_t v29; // w1
  struct BattleFBXComponent_StaticFields *v30; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  int32_t v33; // w1
  struct BattleFBXComponent_StaticFields *v34; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  int32_t v37; // w1
  struct BattleFBXComponent_StaticFields *v38; // x0
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  int32_t v41; // w1
  struct BattleFBXComponent_StaticFields *v42; // x0
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  int32_t v45; // w1
  struct BattleFBXComponent_StaticFields *v46; // x0
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  int32_t v49; // w1
  struct BattleFBXComponent_StaticFields *v50; // x0
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  __int64 v53; // x0
  __int64 v54; // x1
  __int64 v55; // x2
  const MethodInfo *v56; // x3
  __int64 v57; // x19
  int32_t v58; // w1
  const MethodInfo *v59; // x3
  int32_t v60; // w1
  const MethodInfo *v61; // x3
  int32_t v62; // w1
  const MethodInfo *v63; // x3
  int32_t v64; // w1
  const MethodInfo *v65; // x3
  int32_t v66; // w1
  const MethodInfo *v67; // x3
  int32_t v68; // w1
  const MethodInfo *v69; // x3
  int32_t v70; // w1
  const MethodInfo *v71; // x3
  int32_t v72; // w1
  const MethodInfo *v73; // x3
  int32_t v74; // w1
  const MethodInfo *v75; // x3
  int32_t v76; // w1
  struct BattleFBXComponent_StaticFields *v77; // x0
  int32_t v78; // w2
  const MethodInfo *v79; // x3

  if ( (byte_4B048DD & 1) == 0 )
  {
    sub_1BC3008(&BattleFBXComponent_TypeInfo, v1);
    sub_1BC3008(&string___TypeInfo, v4);
    sub_1BC3008(&StringLiteral_7246/*"Hidden/Particle/MultiplyAdd1Pass-Stencil"*/, v5);
    sub_1BC3008(&StringLiteral_6355/*"FGO_CH/AlphaBlendSingle"*/, v6);
    sub_1BC3008(&StringLiteral_18810/*"en_weapon_"*/, v7);
    sub_1BC3008(&StringLiteral_6357/*"FGO_CH/Base"*/, v8);
    sub_1BC3008(&StringLiteral_16414/*"_level"*/, v9);
    sub_1BC3008(&StringLiteral_6354/*"FGO_Battle/Particle/Base-Stencil"*/, v10);
    sub_1BC3008(&StringLiteral_6353/*"FGO_Battle/Particle/Base"*/, v11);
    sub_1BC3008(&StringLiteral_6358/*"FGO_CH/SingleFlat"*/, v12);
    sub_1BC3008(&StringLiteral_7245/*"Hidden/Particle/MultiplyAdd1Pass"*/, v13);
    sub_1BC3008(&StringLiteral_18806/*"en_item_"*/, v14);
    sub_1BC3008(&StringLiteral_17800/*"chrnode_"*/, v15);
    sub_1BC3008(&StringLiteral_20879/*"joint_sideflip_"*/, v16);
    sub_1BC3008(&StringLiteral_7243/*"Hidden/Particle/MultiplyAdd"*/, v17);
    sub_1BC3008(&StringLiteral_2381/*"Assets/AssetStorages/NoblePhantasm/"*/, v18);
    sub_1BC3008(&StringLiteral_7244/*"Hidden/Particle/MultiplyAdd-Stencil"*/, v19);
    sub_1BC3008(&StringLiteral_6356/*"FGO_CH/AlphaBlendSingleFlat"*/, v20);
    sub_1BC3008(&StringLiteral_22530/*"prefabn_"*/, v21);
    sub_1BC3008(&StringLiteral_2382/*"Assets/AssetStorages/Servants/"*/, v22);
    byte_4B048DD = 1;
  }
  static_fields = BattleFBXComponent_TypeInfo->static_fields;
  static_fields->EnableEvent = 1;
  static_fields->animFps = 30.0;
  v24 = StringLiteral_16414/*"_level"*/;
  static_fields->levelMarker = (struct System_String_o *)StringLiteral_16414/*"_level"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->levelMarker, v24, v2, v3);
  v25 = StringLiteral_22530/*"prefabn_"*/;
  v26 = BattleFBXComponent_TypeInfo->static_fields;
  v26->prefabMarker = (struct System_String_o *)StringLiteral_22530/*"prefabn_"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v26->prefabMarker, v25, v27, v28);
  v29 = StringLiteral_17800/*"chrnode_"*/;
  v30 = BattleFBXComponent_TypeInfo->static_fields;
  v30->chrnodeMarker = (struct System_String_o *)StringLiteral_17800/*"chrnode_"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v30->chrnodeMarker, v29, v31, v32);
  v33 = StringLiteral_20879/*"joint_sideflip_"*/;
  v34 = BattleFBXComponent_TypeInfo->static_fields;
  v34->sideflipMarker = (struct System_String_o *)StringLiteral_20879/*"joint_sideflip_"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v34->sideflipMarker, v33, v35, v36);
  v37 = StringLiteral_18806/*"en_item_"*/;
  v38 = BattleFBXComponent_TypeInfo->static_fields;
  v38->enItemMarker = (struct System_String_o *)StringLiteral_18806/*"en_item_"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v38->enItemMarker, v37, v39, v40);
  v41 = StringLiteral_18810/*"en_weapon_"*/;
  v42 = BattleFBXComponent_TypeInfo->static_fields;
  v42->enWeaponMarker = (struct System_String_o *)StringLiteral_18810/*"en_weapon_"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v42->enWeaponMarker, v41, v43, v44);
  v45 = StringLiteral_2381/*"Assets/AssetStorages/NoblePhantasm/"*/;
  v46 = BattleFBXComponent_TypeInfo->static_fields;
  v46->npPathHead = (struct System_String_o *)StringLiteral_2381/*"Assets/AssetStorages/NoblePhantasm/"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v46->npPathHead, v45, v47, v48);
  v49 = StringLiteral_2382/*"Assets/AssetStorages/Servants/"*/;
  v50 = BattleFBXComponent_TypeInfo->static_fields;
  v50->svtPathHead = (struct System_String_o *)StringLiteral_2382/*"Assets/AssetStorages/Servants/"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v50->svtPathHead, v49, v51, v52);
  v53 = sub_1BC30B0(string___TypeInfo, 10LL);
  if ( !v53 )
    sub_1BC3264(0LL, v54);
  v57 = v53;
  if ( !*(_DWORD *)(v53 + 24) )
    goto LABEL_15;
  v58 = StringLiteral_6357/*"FGO_CH/Base"*/;
  *(_QWORD *)(v53 + 32) = StringLiteral_6357/*"FGO_CH/Base"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v53 + 32), v58, v55, v56);
  if ( *(_DWORD *)(v57 + 24) <= 1u )
    goto LABEL_15;
  v60 = StringLiteral_6355/*"FGO_CH/AlphaBlendSingle"*/;
  *(_QWORD *)(v57 + 40) = StringLiteral_6355/*"FGO_CH/AlphaBlendSingle"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v57 + 40), v60, v55, v59);
  if ( *(_DWORD *)(v57 + 24) <= 2u )
    goto LABEL_15;
  v62 = StringLiteral_6353/*"FGO_Battle/Particle/Base"*/;
  *(_QWORD *)(v57 + 48) = StringLiteral_6353/*"FGO_Battle/Particle/Base"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v57 + 48), v62, v55, v61);
  if ( *(_DWORD *)(v57 + 24) <= 3u )
    goto LABEL_15;
  v64 = StringLiteral_7243/*"Hidden/Particle/MultiplyAdd"*/;
  *(_QWORD *)(v57 + 56) = StringLiteral_7243/*"Hidden/Particle/MultiplyAdd"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v57 + 56), v64, v55, v63);
  if ( *(_DWORD *)(v57 + 24) <= 4u )
    goto LABEL_15;
  v66 = StringLiteral_7245/*"Hidden/Particle/MultiplyAdd1Pass"*/;
  *(_QWORD *)(v57 + 64) = StringLiteral_7245/*"Hidden/Particle/MultiplyAdd1Pass"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v57 + 64), v66, v55, v65);
  if ( *(_DWORD *)(v57 + 24) <= 5u )
    goto LABEL_15;
  v68 = StringLiteral_6356/*"FGO_CH/AlphaBlendSingleFlat"*/;
  *(_QWORD *)(v57 + 72) = StringLiteral_6356/*"FGO_CH/AlphaBlendSingleFlat"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v57 + 72), v68, v55, v67);
  if ( *(_DWORD *)(v57 + 24) <= 6u )
    goto LABEL_15;
  v70 = StringLiteral_6354/*"FGO_Battle/Particle/Base-Stencil"*/;
  *(_QWORD *)(v57 + 80) = StringLiteral_6354/*"FGO_Battle/Particle/Base-Stencil"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v57 + 80), v70, v55, v69);
  if ( *(_DWORD *)(v57 + 24) <= 7u
    || (v72 = StringLiteral_7244/*"Hidden/Particle/MultiplyAdd-Stencil"*/,
        *(_QWORD *)(v57 + 88) = StringLiteral_7244/*"Hidden/Particle/MultiplyAdd-Stencil"*/,
        sub_1BC2FAC((CGThumbnailListItem_o *)(v57 + 88), v72, v55, v71),
        *(_DWORD *)(v57 + 24) <= 8u)
    || (v74 = StringLiteral_7246/*"Hidden/Particle/MultiplyAdd1Pass-Stencil"*/,
        *(_QWORD *)(v57 + 96) = StringLiteral_7246/*"Hidden/Particle/MultiplyAdd1Pass-Stencil"*/,
        sub_1BC2FAC((CGThumbnailListItem_o *)(v57 + 96), v74, v55, v73),
        *(_DWORD *)(v57 + 24) <= 9u) )
  {
LABEL_15:
    sub_1BC326C(v53, v54, v55);
  }
  v76 = StringLiteral_6358/*"FGO_CH/SingleFlat"*/;
  *(_QWORD *)(v57 + 104) = StringLiteral_6358/*"FGO_CH/SingleFlat"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v57 + 104), v76, v55, v75);
  v77 = BattleFBXComponent_TypeInfo->static_fields;
  v77->yTransparenceShaderNames = (struct System_String_array *)v57;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v77->yTransparenceShaderNames, v57, v78, v79);
}


void __fastcall BattleFBXComponent___ctor(BattleFBXComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_Dictionary_object__object__o *v10; // x20
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Collections_Generic_Dictionary_object__object__o *v13; // x20
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_Collections_Generic_List_object__o *v16; // x20
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Collections_Generic_Dictionary_object__object__o *v19; // x20
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v22; // x20
  int32_t v23; // w2
  const MethodInfo *v24; // x3

  if ( (byte_4B048DC & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__string___ctor__, method);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__GameObject___ctor__, v3);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_KeyValuePair_string__Material___float___ctor__, v4);
    sub_1BC3008(&System_Collections_Generic_Dictionary_string__GameObject__TypeInfo, v5);
    sub_1BC3008(&System_Collections_Generic_Dictionary_string__string__TypeInfo, v6);
    sub_1BC3008(&System_Collections_Generic_Dictionary_KeyValuePair_string__Material___float__TypeInfo, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_Renderer___ctor__, v8);
    sub_1BC3008(&System_Collections_Generic_List_Renderer__TypeInfo, v9);
    byte_4B048DC = 1;
  }
  v10 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BC3254(System_Collections_Generic_Dictionary_string__string__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v10,
    (const MethodInfo_336C638 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  this->fields.RealAnimNames = (struct System_Collections_Generic_Dictionary_string__string__o *)v10;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.RealAnimNames, (int32_t)v10, v11, v12);
  v13 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BC3254(System_Collections_Generic_Dictionary_string__string__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v13,
    (const MethodInfo_336C638 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  this->fields.CommonAnimNames = (struct System_Collections_Generic_Dictionary_string__string__o *)v13;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.CommonAnimNames, (int32_t)v13, v14, v15);
  this->fields.timescale = 1.0;
  v16 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_Renderer__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_Renderer___ctor__);
  this->fields.enableRendererList = (struct System_Collections_Generic_List_Renderer__o *)v16;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.enableRendererList, (int32_t)v16, v17, v18);
  v19 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BC3254(System_Collections_Generic_Dictionary_string__GameObject__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v19,
    (const MethodInfo_336C638 *)Method_System_Collections_Generic_Dictionary_string__GameObject___ctor__);
  this->fields.actorEffectDict = (struct System_Collections_Generic_Dictionary_string__GameObject__o *)v19;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.actorEffectDict, (int32_t)v19, v20, v21);
  v22 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1BC3254(System_Collections_Generic_Dictionary_KeyValuePair_string__Material___float__TypeInfo);
  System_Collections_Generic_Dictionary_KeyValuePair_object__object___float____ctor(
    v22,
    (const MethodInfo_32C5DFC *)Method_System_Collections_Generic_Dictionary_KeyValuePair_string__Material___float___ctor__);
  this->fields.tempMaterialPropertyDict = (struct System_Collections_Generic_Dictionary_KeyValuePair_string__Material___float__o *)v22;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.tempMaterialPropertyDict, (int32_t)v22, v23, v24);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleFBXComponent__AnimUpdate(BattleFBXComponent_o *this, float deltaTime, const MethodInfo *method)
{
  long double v3; // q8
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  float v8; // s9
  UnityEngine_Object_o *rootTransform; // x20
  UnityEngine_Object_o *animationComponent; // x20
  __int64 v11; // x1
  __int64 wrapMode; // x0
  UnityEngine_TrackedReference_o *Item; // x0
  UnityEngine_Object_o *simpleAnimationComponent; // x20
  UnityEngine_Object_o *v15; // x20
  float v16; // s8
  UnityEngine_Animation_o *v17; // x8
  float v18; // s8
  float v19; // s8
  float length; // s0
  UnityEngine_Object_o *v21; // x20
  __int64 v22; // x8
  float currentAnimTime; // s8
  __int64 v24; // x20
  __int64 v25; // x9
  SimpleAnimation_State_c **v26; // x10
  __int64 v27; // x0
  __int64 v28; // x8
  __int64 v29; // x9
  SimpleAnimation_State_c **v30; // x10
  __int64 v31; // x0
  __int64 v32; // x8
  __int64 v33; // x9
  SimpleAnimation_State_c **v34; // x10
  __int64 v35; // x0
  __int64 v36; // x8
  __int64 v37; // x9
  SimpleAnimation_State_c **v38; // x10
  __int64 v39; // x0
  __int64 v40; // x8
  __int64 v41; // x9
  SimpleAnimation_State_c **v42; // x10
  __int64 v43; // x0
  float i; // s8
  __int64 v45; // x8
  __int64 v46; // x9
  SimpleAnimation_State_c **v47; // x10
  __int64 v48; // x0
  __int64 v49; // x8
  float v50; // s8
  __int64 v51; // x9
  SimpleAnimation_State_c **v52; // x10
  __int64 v53; // x0
  UnityEngine_Object_o *v54; // x20
  UnityEngine_Object_o *v55; // x20
  UnityEngine_TrackedReference_o *v56; // x0
  UnityEngine_Object_o *v57; // x20
  BattleFBXComponent_c *v58; // x0
  System_String_o *currentCommonAnimName; // x20
  __int64 v60; // x2
  struct BattleFBXComponent_AnimEvent_array_array *eventlist; // x8
  BattleFBXComponent_AnimEvent_array *v62; // x24
  int currentEventIndex; // w25
  __int64 j; // x8
  BattleFBXComponent_AnimEvent_o *v65; // x20
  float time; // s0
  float v67; // s1
  bool v68; // nf
  float v69; // s1
  UnityEngine_Object_o *v70; // x21
  __int64 v71; // x8
  __int64 v72; // x21
  __int64 v73; // x9
  SimpleAnimation_State_c **v74; // x10
  __int64 v75; // x0
  _BOOL4 isDirty; // w27
  UnityEngine_Object_o *billBoard; // x21
  const MethodInfo *v78; // x2
  _BOOL4 v79; // w8
  BattleFBXComponent_c *v80; // x0
  UnityEngine_Object_o *v81; // x20
  float animFps; // s8
  float v83; // s0
  int v84; // w21
  __int64 v85; // x8
  __int64 v86; // x20
  __int64 v87; // x9
  SimpleAnimation_State_c **v88; // x10
  __int64 v89; // x0

  v3 = *(long double *)&deltaTime;
  if ( (byte_4B048B9 & 1) == 0 )
  {
    sub_1BC3008(&AnimationList_TypeInfo, method);
    sub_1BC3008(&BattleFBXComponent_TypeInfo, v5);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v6);
    sub_1BC3008(&SimpleAnimation_State_TypeInfo, v7);
    byte_4B048B9 = 1;
  }
  v8 = this->fields.timescale * *(float *)&v3;
  if ( v8 == 0.0 || this->fields.isStop )
    return;
  rootTransform = (UnityEngine_Object_o *)this->fields.rootTransform;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(rootTransform, 0LL, 0LL) || !this->fields.currentAnimName )
    return;
  animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(animationComponent, 0LL, 0LL) )
  {
    wrapMode = (__int64)this->fields.animationComponent;
    if ( !wrapMode )
      goto LABEL_39;
    if ( !UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)wrapMode, 0LL) )
      return;
    wrapMode = (__int64)this->fields.animationComponent;
    if ( !wrapMode )
      goto LABEL_39;
    Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                               (UnityEngine_Animation_o *)wrapMode,
                                               this->fields.currentAnimName,
                                               0LL);
    if ( UnityEngine_TrackedReference__op_Equality(Item, 0LL, 0LL) )
      return;
  }
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0LL, 0LL) )
  {
    wrapMode = (__int64)this->fields.simpleAnimationComponent;
    if ( !wrapMode )
      goto LABEL_39;
    if ( !SimpleAnimation__get_isPlaying((SimpleAnimation_o *)wrapMode, 0LL) )
      return;
    wrapMode = (__int64)this->fields.simpleAnimationComponent;
    if ( !wrapMode )
      goto LABEL_39;
    if ( !SimpleAnimation__get_Item((SimpleAnimation_o *)wrapMode, this->fields.currentAnimName, 0LL) )
      return;
  }
  v15 = (UnityEngine_Object_o *)this->fields.animationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v15, 0LL, 0LL) )
  {
    v21 = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v21, 0LL, 0LL) )
      goto LABEL_102;
    wrapMode = (__int64)this->fields.simpleAnimationComponent;
    if ( wrapMode )
    {
      wrapMode = (__int64)SimpleAnimation__get_Item((SimpleAnimation_o *)wrapMode, this->fields.currentAnimName, 0LL);
      if ( wrapMode )
      {
        v22 = *(_QWORD *)wrapMode;
        currentAnimTime = this->fields.currentAnimTime;
        v24 = wrapMode;
        v25 = *(unsigned __int16 *)(*(_QWORD *)wrapMode + 302LL);
        if ( *(_WORD *)(*(_QWORD *)wrapMode + 302LL) )
        {
          v26 = (SimpleAnimation_State_c **)(*(_QWORD *)(v22 + 176) + 8LL);
          while ( *(v26 - 1) != SimpleAnimation_State_TypeInfo )
          {
            --v25;
            v26 += 2;
            if ( !v25 )
              goto LABEL_49;
          }
          v27 = v22 + 16LL * (*(_DWORD *)v26 + 14) + 312;
        }
        else
        {
LABEL_49:
          v27 = sub_1C13570(wrapMode, SimpleAnimation_State_TypeInfo, 14LL);
        }
        wrapMode = (*(__int64 (__fastcall **)(__int64, _QWORD))v27)(v24, *(_QWORD *)(v27 + 8));
        if ( wrapMode )
        {
          if ( currentAnimTime < UnityEngine_AnimationClip__get_length((UnityEngine_AnimationClip_o *)wrapMode, 0LL) )
            goto LABEL_102;
          v28 = *(_QWORD *)v24;
          v29 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
          {
            v30 = (SimpleAnimation_State_c **)(*(_QWORD *)(v28 + 176) + 8LL);
            while ( *(v30 - 1) != SimpleAnimation_State_TypeInfo )
            {
              --v29;
              v30 += 2;
              if ( !v29 )
                goto LABEL_59;
            }
            v31 = v28 + 16LL * (*(_DWORD *)v30 + 19) + 312;
          }
          else
          {
LABEL_59:
            v31 = sub_1C13570(v24, SimpleAnimation_State_TypeInfo, 19LL);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v31)(v24, *(_QWORD *)(v31 + 8)) & 1) != 0 )
            goto LABEL_70;
          v32 = *(_QWORD *)v24;
          v33 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
          {
            v34 = (SimpleAnimation_State_c **)(*(_QWORD *)(v32 + 176) + 8LL);
            while ( *(v34 - 1) != SimpleAnimation_State_TypeInfo )
            {
              --v33;
              v34 += 2;
              if ( !v33 )
                goto LABEL_66;
            }
            v35 = v32 + 16LL * (*(_DWORD *)v34 + 14) + 312;
          }
          else
          {
LABEL_66:
            v35 = sub_1C13570(v24, SimpleAnimation_State_TypeInfo, 14LL);
          }
          wrapMode = (*(__int64 (__fastcall **)(__int64, _QWORD))v35)(v24, *(_QWORD *)(v35 + 8));
          if ( wrapMode )
          {
            if ( UnityEngine_Motion__get_isLooping((UnityEngine_Motion_o *)wrapMode, 0LL) )
            {
LABEL_84:
              for ( i = this->fields.currentAnimTime; ; this->fields.currentAnimTime = i )
              {
                v45 = *(_QWORD *)v24;
                v46 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
                if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
                {
                  v47 = (SimpleAnimation_State_c **)(*(_QWORD *)(v45 + 176) + 8LL);
                  while ( *(v47 - 1) != SimpleAnimation_State_TypeInfo )
                  {
                    --v46;
                    v47 += 2;
                    if ( !v46 )
                      goto LABEL_89;
                  }
                  v48 = v45 + 16LL * (*(_DWORD *)v47 + 14) + 312;
                }
                else
                {
LABEL_89:
                  v48 = sub_1C13570(v24, SimpleAnimation_State_TypeInfo, 14LL);
                }
                wrapMode = (*(__int64 (__fastcall **)(__int64, _QWORD))v48)(v24, *(_QWORD *)(v48 + 8));
                if ( !wrapMode )
                  goto LABEL_39;
                if ( i < UnityEngine_AnimationClip__get_length((UnityEngine_AnimationClip_o *)wrapMode, 0LL) )
                  break;
                v49 = *(_QWORD *)v24;
                v50 = this->fields.currentAnimTime;
                v51 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
                if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
                {
                  v52 = (SimpleAnimation_State_c **)(*(_QWORD *)(v49 + 176) + 8LL);
                  while ( *(v52 - 1) != SimpleAnimation_State_TypeInfo )
                  {
                    --v51;
                    v52 += 2;
                    if ( !v51 )
                      goto LABEL_97;
                  }
                  v53 = v49 + 16LL * (*(_DWORD *)v52 + 14) + 312;
                }
                else
                {
LABEL_97:
                  v53 = sub_1C13570(v24, SimpleAnimation_State_TypeInfo, 14LL);
                }
                wrapMode = (*(__int64 (__fastcall **)(__int64, _QWORD))v53)(v24, *(_QWORD *)(v53 + 8));
                if ( !wrapMode )
                  goto LABEL_39;
                i = v50 - UnityEngine_AnimationClip__get_length((UnityEngine_AnimationClip_o *)wrapMode, 0LL);
              }
LABEL_101:
              this->fields.currentEventIndex = 0;
              goto LABEL_102;
            }
LABEL_70:
            v36 = *(_QWORD *)v24;
            v37 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
            if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
            {
              v38 = (SimpleAnimation_State_c **)(*(_QWORD *)(v36 + 176) + 8LL);
              while ( *(v38 - 1) != SimpleAnimation_State_TypeInfo )
              {
                --v37;
                v38 += 2;
                if ( !v37 )
                  goto LABEL_74;
              }
              v39 = v36 + 16LL * (*(_DWORD *)v38 + 19) + 312;
            }
            else
            {
LABEL_74:
              v39 = sub_1C13570(v24, SimpleAnimation_State_TypeInfo, 19LL);
            }
            if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v39)(v24, *(_QWORD *)(v39 + 8)) & 1) == 0 )
              goto LABEL_163;
            v40 = *(_QWORD *)v24;
            v41 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
            if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
            {
              v42 = (SimpleAnimation_State_c **)(*(_QWORD *)(v40 + 176) + 8LL);
              while ( *(v42 - 1) != SimpleAnimation_State_TypeInfo )
              {
                --v41;
                v42 += 2;
                if ( !v41 )
                  goto LABEL_81;
              }
              v43 = v40 + 16LL * (*(_DWORD *)v42 + 17) + 312;
            }
            else
            {
LABEL_81:
              v43 = sub_1C13570(v24, SimpleAnimation_State_TypeInfo, 17LL);
            }
            if ( (*(unsigned int (__fastcall **)(__int64, _QWORD))v43)(v24, *(_QWORD *)(v43 + 8)) != 2 )
            {
LABEL_163:
              wrapMode = (__int64)this->fields.simpleAnimationComponent;
              if ( wrapMode )
              {
                SimpleAnimation__Stop((SimpleAnimation_o *)wrapMode, 0LL);
                return;
              }
              goto LABEL_39;
            }
            goto LABEL_84;
          }
        }
      }
    }
LABEL_39:
    sub_1BC3264(wrapMode, v11);
  }
  wrapMode = (__int64)this->fields.animationComponent;
  if ( !wrapMode )
    goto LABEL_39;
  v16 = this->fields.currentAnimTime;
  wrapMode = (__int64)UnityEngine_Animation__get_Item(
                        (UnityEngine_Animation_o *)wrapMode,
                        this->fields.currentAnimName,
                        0LL);
  if ( !wrapMode )
    goto LABEL_39;
  if ( v16 >= UnityEngine_AnimationState__get_length((UnityEngine_AnimationState_o *)wrapMode, 0LL) )
  {
    wrapMode = (__int64)this->fields.animationComponent;
    if ( wrapMode )
    {
      wrapMode = (__int64)UnityEngine_Animation__get_Item(
                            (UnityEngine_Animation_o *)wrapMode,
                            this->fields.currentAnimName,
                            0LL);
      if ( wrapMode )
      {
        wrapMode = UnityEngine_AnimationState__get_wrapMode((UnityEngine_AnimationState_o *)wrapMode, 0LL);
        v17 = this->fields.animationComponent;
        if ( (_DWORD)wrapMode == 2 )
        {
          if ( v17 )
          {
            v18 = this->fields.currentAnimTime;
            do
            {
              wrapMode = (__int64)UnityEngine_Animation__get_Item(v17, this->fields.currentAnimName, 0LL);
              if ( !wrapMode )
                break;
              if ( v18 < UnityEngine_AnimationState__get_length((UnityEngine_AnimationState_o *)wrapMode, 0LL) )
                goto LABEL_101;
              wrapMode = (__int64)this->fields.animationComponent;
              if ( !wrapMode )
                break;
              v19 = this->fields.currentAnimTime;
              wrapMode = (__int64)UnityEngine_Animation__get_Item(
                                    (UnityEngine_Animation_o *)wrapMode,
                                    this->fields.currentAnimName,
                                    0LL);
              if ( !wrapMode )
                break;
              length = UnityEngine_AnimationState__get_length((UnityEngine_AnimationState_o *)wrapMode, 0LL);
              v17 = this->fields.animationComponent;
              v18 = v19 - length;
              this->fields.currentAnimTime = v18;
            }
            while ( v17 );
          }
        }
        else if ( v17 )
        {
          UnityEngine_Animation__Stop(v17, 0LL);
          return;
        }
      }
    }
    goto LABEL_39;
  }
LABEL_102:
  v54 = (UnityEngine_Object_o *)this->fields.rootTransform;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v54, 0LL, 0LL) && this->fields.currentAnimName )
  {
    v55 = (UnityEngine_Object_o *)this->fields.animationComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v55, 0LL, 0LL) )
    {
      wrapMode = (__int64)this->fields.animationComponent;
      if ( !wrapMode )
        goto LABEL_39;
      if ( UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)wrapMode, 0LL) )
      {
        wrapMode = (__int64)this->fields.animationComponent;
        if ( !wrapMode )
          goto LABEL_39;
        v56 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                                  (UnityEngine_Animation_o *)wrapMode,
                                                  this->fields.currentAnimName,
                                                  0LL);
        if ( UnityEngine_TrackedReference__op_Inequality(v56, 0LL, 0LL) )
          goto LABEL_120;
      }
    }
    v57 = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v57, 0LL, 0LL) )
    {
      wrapMode = (__int64)this->fields.simpleAnimationComponent;
      if ( !wrapMode )
        goto LABEL_39;
      if ( !SimpleAnimation__get_isPlaying((SimpleAnimation_o *)wrapMode, 0LL) )
        return;
      wrapMode = (__int64)this->fields.simpleAnimationComponent;
      if ( !wrapMode )
        goto LABEL_39;
      if ( !SimpleAnimation__get_Item((SimpleAnimation_o *)wrapMode, this->fields.currentAnimName, 0LL) )
        return;
LABEL_120:
      v58 = BattleFBXComponent_TypeInfo;
      if ( !BattleFBXComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
        v58 = BattleFBXComponent_TypeInfo;
      }
      if ( v58->static_fields->EnableEvent && this->fields.eventlist )
      {
        currentCommonAnimName = this->fields.currentCommonAnimName;
        if ( !AnimationList_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AnimationList_TypeInfo);
        wrapMode = AnimationList__getIndex(currentCommonAnimName, 0LL);
        if ( (wrapMode & 0x80000000) == 0 )
        {
          eventlist = this->fields.eventlist;
          if ( !eventlist )
            goto LABEL_39;
          if ( (unsigned int)wrapMode >= eventlist->max_length )
LABEL_190:
            sub_1BC326C(wrapMode, v11, v60);
          v62 = eventlist->m_Items[(unsigned int)wrapMode];
          if ( v62 )
          {
            currentEventIndex = this->fields.currentEventIndex;
            for ( j = *(_QWORD *)&v62->max_length; currentEventIndex < (int)j; ++currentEventIndex )
            {
              if ( currentEventIndex >= (unsigned int)j )
                goto LABEL_190;
              v65 = v62->m_Items[currentEventIndex];
              if ( !v65 )
                goto LABEL_39;
              time = v65->fields.time;
              v67 = this->fields.currentAnimTime;
              v68 = time < v67;
              v69 = v8 + v67;
              if ( v68 || time >= v69 )
              {
                if ( time >= v69 )
                {
                  this->fields.currentEventIndex = currentEventIndex;
                  break;
                }
              }
              else
              {
                v70 = (UnityEngine_Object_o *)this->fields.animationComponent;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(v70, 0LL, 0LL) )
                {
                  wrapMode = (__int64)this->fields.animationComponent;
                  if ( !wrapMode )
                    goto LABEL_39;
                  wrapMode = (__int64)UnityEngine_Animation__get_Item(
                                        (UnityEngine_Animation_o *)wrapMode,
                                        this->fields.currentAnimName,
                                        0LL);
                  if ( !wrapMode )
                    goto LABEL_39;
                  UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)wrapMode, v65->fields.time, 0LL);
                  wrapMode = (__int64)this->fields.animationComponent;
                  if ( !wrapMode )
                    goto LABEL_39;
                  UnityEngine_Animation__Sample((UnityEngine_Animation_o *)wrapMode, 0LL);
                }
                else
                {
                  wrapMode = (__int64)this->fields.simpleAnimationComponent;
                  if ( !wrapMode )
                    goto LABEL_39;
                  wrapMode = (__int64)SimpleAnimation__get_Item(
                                        (SimpleAnimation_o *)wrapMode,
                                        this->fields.currentAnimName,
                                        0LL);
                  if ( !wrapMode )
                    goto LABEL_39;
                  v71 = *(_QWORD *)wrapMode;
                  *(float *)&v3 = v65->fields.time;
                  v72 = wrapMode;
                  v73 = *(unsigned __int16 *)(*(_QWORD *)wrapMode + 302LL);
                  if ( *(_WORD *)(*(_QWORD *)wrapMode + 302LL) )
                  {
                    v74 = (SimpleAnimation_State_c **)(*(_QWORD *)(v71 + 176) + 8LL);
                    while ( *(v74 - 1) != SimpleAnimation_State_TypeInfo )
                    {
                      --v73;
                      v74 += 2;
                      if ( !v73 )
                        goto LABEL_150;
                    }
                    v75 = v71 + 16LL * (*(_DWORD *)v74 + 4) + 312;
                  }
                  else
                  {
LABEL_150:
                    v75 = sub_1C13570(wrapMode, SimpleAnimation_State_TypeInfo, 4LL);
                  }
                  (*(void (__fastcall **)(__int64, _QWORD, long double))v75)(v72, *(_QWORD *)(v75 + 8), v3);
                  wrapMode = (__int64)this->fields.simpleAnimationComponent;
                  if ( !wrapMode )
                    goto LABEL_39;
                  SimpleAnimation__Sample((SimpleAnimation_o *)wrapMode, 0LL);
                }
                isDirty = this->fields.isDirty;
                this->fields.isDirty = 0;
                billBoard = (UnityEngine_Object_o *)this->fields.billBoard;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(billBoard, 0LL, 0LL) )
                {
                  wrapMode = (__int64)this->fields.billBoard;
                  if ( !wrapMode )
                    goto LABEL_39;
                  BillBoard__UpdateBillboard((BillBoard_o *)wrapMode, 0LL);
                }
                BattleFBXComponent__OnAnimEvent(this, v65, v78);
                v79 = this->fields.isDirty;
                this->fields.isDirty = v79 || isDirty;
                if ( v79 || isDirty )
                {
                  if ( !v79 )
                    this->fields.currentAnimTime = v65->fields.time;
                  this->fields.isDirty = 0;
                  return;
                }
                j = *(_QWORD *)&v62->max_length;
              }
            }
          }
        }
      }
      v80 = BattleFBXComponent_TypeInfo;
      if ( !BattleFBXComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
        v80 = BattleFBXComponent_TypeInfo;
      }
      v81 = (UnityEngine_Object_o *)this->fields.animationComponent;
      animFps = v80->static_fields->animFps;
      v83 = animFps * this->fields.currentAnimTime;
      if ( v83 == INFINITY )
        v84 = 0x80000000;
      else
        v84 = (int)v83;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v81, 0LL, 0LL) )
      {
        wrapMode = (__int64)this->fields.animationComponent;
        if ( !wrapMode )
          goto LABEL_39;
        wrapMode = (__int64)UnityEngine_Animation__get_Item(
                              (UnityEngine_Animation_o *)wrapMode,
                              this->fields.currentAnimName,
                              0LL);
        if ( !wrapMode )
          goto LABEL_39;
        UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)wrapMode, (float)v84 / animFps, 0LL);
      }
      else
      {
        wrapMode = (__int64)this->fields.simpleAnimationComponent;
        if ( !wrapMode )
          goto LABEL_39;
        wrapMode = (__int64)SimpleAnimation__get_Item((SimpleAnimation_o *)wrapMode, this->fields.currentAnimName, 0LL);
        if ( !wrapMode )
          goto LABEL_39;
        v85 = *(_QWORD *)wrapMode;
        v86 = wrapMode;
        v87 = *(unsigned __int16 *)(*(_QWORD *)wrapMode + 302LL);
        *(float *)&v3 = (float)v84 / animFps;
        if ( *(_WORD *)(*(_QWORD *)wrapMode + 302LL) )
        {
          v88 = (SimpleAnimation_State_c **)(*(_QWORD *)(v85 + 176) + 8LL);
          while ( *(v88 - 1) != SimpleAnimation_State_TypeInfo )
          {
            --v87;
            v88 += 2;
            if ( !v87 )
              goto LABEL_182;
          }
          v89 = v85 + 16LL * (*(_DWORD *)v88 + 4) + 312;
        }
        else
        {
LABEL_182:
          v89 = sub_1C13570(wrapMode, SimpleAnimation_State_TypeInfo, 4LL);
        }
        (*(void (__fastcall **)(__int64, _QWORD, long double))v89)(v86, *(_QWORD *)(v89 + 8), v3);
      }
      this->fields.currentAnimTime = v8 + this->fields.currentAnimTime;
    }
  }
}


System_Collections_IEnumerator_o *__fastcall BattleFBXComponent__AnimationCheck(
        BattleFBXComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4B048CA & 1) == 0 )
  {
    sub_1BC3008(&BattleFBXComponent__AnimationCheck_d__70_TypeInfo, method);
    byte_4B048CA = 1;
  }
  v3 = sub_1BC3254(BattleFBXComponent__AnimationCheck_d__70_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall BattleFBXComponent__AttachCl(BattleFBXComponent_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall BattleFBXComponent__Awake(BattleFBXComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( this->fields.isAutoPlay )
    BattleFBXComponent__playAnimation(this, this->fields.animename, v2);
}


void __fastcall BattleFBXComponent__ChangeActorLimitCount(BattleFBXComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1
  Il2CppObject *Component_object; // x20
  int32_t ServantId; // w21
  int32_t LimitCount; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4B048BE & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, method);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v3);
    byte_4B048BE = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                             (UnityEngine_Object_o *)Component_object,
                                             0LL,
                                             0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( Component_object )
    {
      ServantId = BattleActorControl__getServantId((BattleActorControl_o *)Component_object, 0LL);
      LimitCount = BattleActorControl__getLimitCount((BattleActorControl_o *)Component_object, 0LL);
      BattleFBXComponent__SetEvolutionLevel(this, ServantId, LimitCount, v9);
      return;
    }
LABEL_10:
    sub_1BC3264(gameObject, v5);
  }
}


UnityEngine_GameObject_o *__fastcall BattleFBXComponent__CreatePrefabNode(
        BattleFBXComponent_o *this,
        UnityEngine_Transform_o *node,
        int32_t svtId,
        int32_t limitcount,
        const MethodInfo *method)
{
  BattleFBXComponent_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x2
  System_String_o *CommonAnimNames; // x23
  UnityEngine_Object_o *Manager__loadActorEffectFromActor; // x21
  bool v19; // w8
  Il2CppObject *v20; // x21
  bool v21; // w8
  Il2CppObject *v22; // x22
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  UnityEngine_Transform_o *transform; // x23
  BattleFBXComponent_o *v26; // x23
  BattleFBXComponent_o *v27; // x23
  BattleFBXComponent_o *v28; // x23
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  __int64 v31; // x8
  _QWORD *v32; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v34; // x8
  System_Collections_Generic_Dictionary_object__object__o *actorEffectDict; // x22
  System_String_o *name; // x0
  BattleFBXComponent_o *v37; // x20
  bool v38; // w8
  Il2CppObject *v39; // x1
  BattleFBXComponent_o *v40; // x19

  v8 = this;
  if ( (byte_4B048C0 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__GameObject__Add__, node);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__GameObject__ContainsKey__, v9);
    sub_1BC3008(&Method_UnityEngine_GameObject_AddComponent_ObjectScaleEnabler___, v10);
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject__Add__, v11);
    sub_1BC3008(&Method_UnityEngine_Object_Instantiate_GameObject___, v12);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v13);
    sub_1BC3008(&ServantAssetLoadManager_TypeInfo, v14);
    this = (BattleFBXComponent_o *)sub_1BC3008(&StringLiteral_16385/*"_aDd"*/, v15);
    byte_4B048C0 = 1;
  }
  if ( !node )
    goto LABEL_43;
  this = (BattleFBXComponent_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)node, 0LL);
  if ( !this )
    goto LABEL_43;
  this = (BattleFBXComponent_o *)System_String__Split((System_String_o *)this, 0x5Fu, 0, 0LL);
  if ( !this )
    goto LABEL_43;
  if ( LODWORD(this->fields.m_CancellationTokenSource) <= 1 )
    sub_1BC326C(this, node, v16);
  CommonAnimNames = (System_String_o *)this->fields.CommonAnimNames;
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  Manager__loadActorEffectFromActor = (UnityEngine_Object_o *)ServantAssetLoadManager__loadActorEffectFromActor(
                                                                svtId,
                                                                limitcount,
                                                                0,
                                                                CommonAnimNames,
                                                                0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v19 = UnityEngine_Object__op_Inequality(Manager__loadActorEffectFromActor, 0LL, 0LL);
  this = 0LL;
  if ( v19 )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v20 = UnityEngine_Object__Instantiate_object_(
            (Il2CppObject *)Manager__loadActorEffectFromActor,
            (const MethodInfo_308AE24 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    v21 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v20, 0LL, 0LL);
    this = 0LL;
    if ( v21 )
    {
      if ( v20 )
      {
        v22 = UnityEngine_GameObject__AddComponent_object_(
                (UnityEngine_GameObject_o *)v20,
                (const MethodInfo_30558B0 *)Method_UnityEngine_GameObject_AddComponent_ObjectScaleEnabler___);
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v20, 0, 0LL);
        if ( v22 )
        {
          v22[2].klass = (Il2CppClass *)node;
          sub_1BC2FAC((CGThumbnailListItem_o *)&v22[2], (int32_t)node, v23, v24);
          transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v20, 0LL);
          this = (BattleFBXComponent_o *)UnityEngine_Transform__get_parent(node, 0LL);
          if ( this )
          {
            this = (BattleFBXComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
            if ( transform )
            {
              UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)this, 0LL);
              this = (BattleFBXComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v20, 0LL);
              v26 = this;
              if ( !byte_4AFBDB1 )
              {
                this = (BattleFBXComponent_o *)sub_1BC3008(&UnityEngine_Vector3_TypeInfo, node);
                byte_4AFBDB1 = 1;
              }
              if ( v26 )
              {
                UnityEngine_Transform__set_localPosition(
                  (UnityEngine_Transform_o *)v26,
                  UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
                  0LL);
                this = (BattleFBXComponent_o *)UnityEngine_GameObject__get_transform(
                                                 (UnityEngine_GameObject_o *)v20,
                                                 0LL);
                v27 = this;
                if ( !byte_4AFBDB1 )
                {
                  this = (BattleFBXComponent_o *)sub_1BC3008(&UnityEngine_Vector3_TypeInfo, node);
                  byte_4AFBDB1 = 1;
                }
                if ( v27 )
                {
                  UnityEngine_Transform__set_localEulerAngles(
                    (UnityEngine_Transform_o *)v27,
                    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
                    0LL);
                  this = (BattleFBXComponent_o *)UnityEngine_GameObject__get_transform(
                                                   (UnityEngine_GameObject_o *)v20,
                                                   0LL);
                  v28 = this;
                  if ( !byte_4AFBDB6 )
                  {
                    this = (BattleFBXComponent_o *)sub_1BC3008(&UnityEngine_Vector3_TypeInfo, node);
                    byte_4AFBDB6 = 1;
                  }
                  if ( v28 )
                  {
                    UnityEngine_Transform__set_localScale(
                      (UnityEngine_Transform_o *)v28,
                      UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
                      0LL);
                    ObjectScaleEnabler__OnUpdate((ObjectScaleEnabler_o *)v22, 0LL);
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v20, 1, 0LL);
                    this = (BattleFBXComponent_o *)v8->fields.PrefabNodes;
                    if ( this )
                    {
                      v31 = *(_QWORD *)&this->fields.m_CachedPtr;
                      v32 = Method_System_Collections_Generic_List_GameObject__Add__;
                      ++HIDWORD(this->fields.m_CancellationTokenSource);
                      if ( v31 )
                      {
                        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
                        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v31 + 24) )
                        {
                          System_Collections_Generic_List_object___AddWithResize(
                            (System_Collections_Generic_List_object__o *)this,
                            v20,
                            *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
                        }
                        else
                        {
                          v34 = v31 + 8 * m_CancellationTokenSource_low;
                          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
                          *(_QWORD *)(v34 + 32) = v20;
                          sub_1BC2FAC((CGThumbnailListItem_o *)(v34 + 32), (int32_t)v20, v29, v30);
                        }
                        actorEffectDict = (System_Collections_Generic_Dictionary_object__object__o *)v8->fields.actorEffectDict;
                        this = (BattleFBXComponent_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)node, 0LL);
                        if ( actorEffectDict )
                        {
                          if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                 actorEffectDict,
                                 (Il2CppObject *)this,
                                 (const MethodInfo_336D1DC *)Method_System_Collections_Generic_Dictionary_string__GameObject__ContainsKey__) )
                          {
                            name = UnityEngine_Object__get_name((UnityEngine_Object_o *)node, 0LL);
                            this = (BattleFBXComponent_o *)System_String__Concat_62348648(
                                                             name,
                                                             (System_String_o *)StringLiteral_16385/*"_aDd"*/,
                                                             0LL);
                            if ( v8->fields.actorEffectDict )
                            {
                              v37 = this;
                              v38 = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                      (System_Collections_Generic_Dictionary_object__object__o *)v8->fields.actorEffectDict,
                                      (Il2CppObject *)this,
                                      (const MethodInfo_336D1DC *)Method_System_Collections_Generic_Dictionary_string__GameObject__ContainsKey__);
                              this = (BattleFBXComponent_o *)v20;
                              if ( v38 )
                                return (UnityEngine_GameObject_o *)this;
                              this = (BattleFBXComponent_o *)v8->fields.actorEffectDict;
                              if ( this )
                              {
                                v39 = (Il2CppObject *)v37;
LABEL_41:
                                System_Collections_Generic_Dictionary_object__object___Add(
                                  (System_Collections_Generic_Dictionary_object__object__o *)this,
                                  v39,
                                  v20,
                                  (const MethodInfo_336CFE8 *)Method_System_Collections_Generic_Dictionary_string__GameObject__Add__);
                                return (UnityEngine_GameObject_o *)v20;
                              }
                            }
                          }
                          else
                          {
                            v40 = (BattleFBXComponent_o *)v8->fields.actorEffectDict;
                            this = (BattleFBXComponent_o *)UnityEngine_Object__get_name(
                                                             (UnityEngine_Object_o *)node,
                                                             0LL);
                            if ( v40 )
                            {
                              v39 = (Il2CppObject *)this;
                              this = v40;
                              goto LABEL_41;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_43:
      sub_1BC3264(this, node);
    }
  }
  return (UnityEngine_GameObject_o *)this;
}


void __fastcall BattleFBXComponent__DebugPrint(
        BattleFBXComponent_o *this,
        System_String_o *str,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleFBXComponent__DestroyPrefabNode(BattleFBXComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_GameObject__o *PrefabNodes; // x0
  Il2CppObject *current; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  struct System_Collections_Generic_List_GameObject__o *v12; // x8
  int32_t size; // w2
  int v14; // w9
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B048BD & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject__Clear__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v6);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v7);
    byte_4B048BD = 1;
  }
  memset(&v15, 0, sizeof(v15));
  PrefabNodes = this->fields.PrefabNodes;
  if ( PrefabNodes )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      (System_Collections_Generic_List_object__o *)PrefabNodes,
      (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v15.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_70034300((UnityEngine_Object_o *)current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    v12 = this->fields.PrefabNodes;
    if ( !v12 )
      sub_1BC3264(v10, v11);
    size = v12->fields._size;
    v14 = v12->fields._version + 1;
    v12->fields._size = 0;
    v12->fields._version = v14;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v12->fields._items, 0, size, 0LL);
  }
}


float __fastcall BattleFBXComponent__GetCurrentTimeScale(BattleFBXComponent_o *this, const MethodInfo *method)
{
  return this->fields.timescale;
}


UnityEngine_GameObject_o *__fastcall BattleFBXComponent__GetPrefabNode(
        BattleFBXComponent_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_List_GameObject__o *PrefabNodes; // x0
  _BOOL8 v10; // x0
  __int64 v11; // x1
  Il2CppObject *current; // x20
  UnityEngine_Object_o *transform; // x0
  __int64 v14; // x1
  System_String_o *v15; // x0
  __int64 v16; // x1
  System_String_o *v17; // x21
  _DWORD *v18; // x22
  _BOOL8 v19; // x0
  __int64 v20; // x1
  __int64 v21; // x1
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B048CE & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, name);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1BC3008(&StringLiteral_680/*"(Clone)"*/, v8);
    byte_4B048CE = 1;
  }
  memset(&v24, 0, sizeof(v24));
  PrefabNodes = this->fields.PrefabNodes;
  if ( !PrefabNodes )
    sub_1BC3264(0LL, name);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    (System_Collections_Generic_List_object__o *)PrefabNodes,
    (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v24 = v23;
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    if ( !v10 )
      break;
    current = v24.fields._current;
    if ( !v24.fields._current )
      sub_1BC3264(v10, v11);
    transform = (UnityEngine_Object_o *)UnityEngine_GameObject__get_transform(
                                          (UnityEngine_GameObject_o *)v24.fields._current,
                                          0LL);
    if ( !transform )
      sub_1BC3264(0LL, v14);
    v15 = UnityEngine_Object__get_name(transform, 0LL);
    v17 = v15;
    if ( !v15 )
      sub_1BC3264(0LL, v16);
    v18 = StringLiteral_680/*"(Clone)"*/;
    v19 = System_String__EndsWith(v15, (System_String_o *)StringLiteral_680/*"(Clone)"*/, 0LL);
    if ( v19 )
    {
      if ( !v18 )
        sub_1BC3264(v19, v20);
      v17 = System_String__Substring_62394572(v17, 0, v17->fields._stringLength - v18[4], 0LL);
      if ( !v17 )
        sub_1BC3264(0LL, v21);
    }
    if ( System_String__Equals_62383952(v17, name, 0LL) )
      goto LABEL_15;
  }
  current = 0LL;
LABEL_15:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (UnityEngine_GameObject_o *)current;
}


System_String_o *__fastcall BattleFBXComponent__GetRealAnimName(
        BattleFBXComponent_o *this,
        System_String_o *targetName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *RealAnimNames; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *v8; // x0

  if ( (byte_4B048D9 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__, targetName);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__, v5);
    byte_4B048D9 = 1;
  }
  RealAnimNames = this->fields.RealAnimNames;
  if ( !RealAnimNames
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)RealAnimNames,
          (Il2CppObject *)targetName,
          (const MethodInfo_336D1DC *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
  {
    return targetName;
  }
  v8 = this->fields.RealAnimNames;
  if ( !v8 )
    sub_1BC3264(0LL, v7);
  return (System_String_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                              (System_Collections_Generic_Dictionary_object__object__o *)v8,
                              (Il2CppObject *)targetName,
                              (const MethodInfo_336CF68 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
}


void __fastcall BattleFBXComponent__InitAnimNameDict(BattleFBXComponent_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__string__o *RealAnimNames; // x0

  if ( (byte_4B048B7 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__string__Clear__, method);
    byte_4B048B7 = 1;
  }
  RealAnimNames = this->fields.RealAnimNames;
  if ( !RealAnimNames
    || (System_Collections_Generic_Dictionary_object__object___Clear(
          (System_Collections_Generic_Dictionary_object__object__o *)RealAnimNames,
          (const MethodInfo_336D170 *)Method_System_Collections_Generic_Dictionary_string__string__Clear__),
        (RealAnimNames = this->fields.CommonAnimNames) == 0LL) )
  {
    sub_1BC3264(RealAnimNames, method);
  }
  System_Collections_Generic_Dictionary_object__object___Clear(
    (System_Collections_Generic_Dictionary_object__object__o *)RealAnimNames,
    (const MethodInfo_336D170 *)Method_System_Collections_Generic_Dictionary_string__string__Clear__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleFBXComponent__IsMatchCurrentCommonAnimName(
        BattleFBXComponent_o *this,
        int32_t animName,
        bool exceptNullOrEmpty,
        const MethodInfo *method)
{
  System_String_o *currentCommonAnimName; // x19
  System_String_o *v8; // x0
  System_String_o *v10; // x0
  __int64 v11; // x1
  System_Enum_o v13; // [xsp+8h] [xbp-48h] BYREF
  int32_t v14; // [xsp+18h] [xbp-38h]

  if ( (byte_4B048B5 & 1) == 0 )
  {
    sub_1BC3008(&HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo, *(_QWORD *)&animName);
    byte_4B048B5 = 1;
  }
  currentCommonAnimName = this->fields.currentCommonAnimName;
  if ( exceptNullOrEmpty )
  {
    v13.klass = (System_Enum_c *)HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo;
    v13.monitor = (void *)-1LL;
    v14 = animName;
    v8 = System_Enum__ToString(&v13, 0LL);
    return BasicHelper__EqualExceptNullOrEmpty(currentCommonAnimName, v8, 0LL);
  }
  else
  {
    v13.klass = (System_Enum_c *)HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo;
    v13.monitor = (void *)-1LL;
    v14 = animName;
    v10 = System_Enum__ToString(&v13, 0LL);
    if ( !currentCommonAnimName )
      sub_1BC3264(v10, v11);
    return System_String__Equals_62383952(currentCommonAnimName, v10, 0LL);
  }
}


bool __fastcall BattleFBXComponent__IsYTransparenceShader(BattleFBXComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *enableRendererList; // x0
  int32_t v10; // w20
  int32_t size; // w27
  Il2CppObject *Item; // x21
  __int64 v13; // x2
  __int64 v14; // x8
  System_Collections_Generic_List_object__o *v15; // x21
  unsigned __int64 v16; // x29
  UnityEngine_Object_o *v17; // x23
  __int64 v18; // x22
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  BattleFBXComponent_c *v21; // x0
  System_Object_array *yTransparenceShaderNames; // x23
  System_Func_object__bool__o *v23; // x24

  if ( (byte_4B048D1 & 1) == 0 )
  {
    sub_1BC3008(&Method_BasicHelper_Any_string____76812616, method);
    sub_1BC3008(&BattleFBXComponent_TypeInfo, v2);
    sub_1BC3008(&System_Func_string__bool__TypeInfo, v3);
    sub_1BC3008(&Method_System_Collections_Generic_List_Renderer__get_Count__, v4);
    sub_1BC3008(&Method_System_Collections_Generic_List_Renderer__get_Item__, v5);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v6);
    sub_1BC3008(&Method_BattleFBXComponent___c__DisplayClass80_0__IsYTransparenceShader_b__0__, v7);
    sub_1BC3008(&BattleFBXComponent___c__DisplayClass80_0_TypeInfo, v8);
    byte_4B048D1 = 1;
  }
  enableRendererList = (System_Collections_Generic_List_object__o *)this->fields.enableRendererList;
  if ( !enableRendererList )
LABEL_26:
    sub_1BC3264(enableRendererList, method);
  v10 = 0;
  while ( 1 )
  {
    size = enableRendererList->fields._size;
    if ( v10 >= size )
      return v10 < size;
    Item = System_Collections_Generic_List_object___get_Item(
             enableRendererList,
             v10,
             (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_Renderer__get_Item__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    enableRendererList = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Equality(
                                                                        (UnityEngine_Object_o *)Item,
                                                                        0LL,
                                                                        0LL);
    if ( ((unsigned __int8)enableRendererList & 1) == 0 )
    {
      if ( !Item )
        goto LABEL_26;
      if ( UnityEngine_Renderer__get_sharedMaterials((UnityEngine_Renderer_o *)Item, 0LL) )
      {
        enableRendererList = (System_Collections_Generic_List_object__o *)UnityEngine_Renderer__get_sharedMaterials(
                                                                            (UnityEngine_Renderer_o *)Item,
                                                                            0LL);
        if ( !enableRendererList )
          goto LABEL_26;
        v14 = *(_QWORD *)&enableRendererList->fields._size;
        v15 = enableRendererList;
        if ( (int)v14 >= 1 )
        {
          v16 = 0LL;
          do
          {
            if ( v16 >= (unsigned int)v14 )
              sub_1BC326C(enableRendererList, method, v13);
            v17 = (UnityEngine_Object_o *)*((_QWORD *)&v15->fields._syncRoot + v16);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            enableRendererList = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Inequality(
                                                                                v17,
                                                                                0LL,
                                                                                0LL);
            if ( ((unsigned __int8)enableRendererList & 1) != 0 )
            {
              v18 = sub_1BC3254(BattleFBXComponent___c__DisplayClass80_0_TypeInfo);
              System_Object___ctor((Il2CppObject *)v18, 0LL);
              if ( !v17 )
                goto LABEL_26;
              enableRendererList = (System_Collections_Generic_List_object__o *)UnityEngine_Material__get_shader(
                                                                                  (UnityEngine_Material_o *)v17,
                                                                                  0LL);
              if ( !enableRendererList )
                goto LABEL_26;
              enableRendererList = (System_Collections_Generic_List_object__o *)UnityEngine_Object__get_name(
                                                                                  (UnityEngine_Object_o *)enableRendererList,
                                                                                  0LL);
              if ( !v18 )
                goto LABEL_26;
              *(_QWORD *)(v18 + 16) = enableRendererList;
              sub_1BC2FAC((CGThumbnailListItem_o *)(v18 + 16), (int32_t)enableRendererList, v19, v20);
              v21 = BattleFBXComponent_TypeInfo;
              if ( !BattleFBXComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
                v21 = BattleFBXComponent_TypeInfo;
              }
              yTransparenceShaderNames = (System_Object_array *)v21->static_fields->yTransparenceShaderNames;
              v23 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_string__bool__TypeInfo);
              System_Func_object__bool____ctor(
                v23,
                (Il2CppObject *)v18,
                Method_BattleFBXComponent___c__DisplayClass80_0__IsYTransparenceShader_b__0__,
                0LL);
              enableRendererList = (System_Collections_Generic_List_object__o *)BasicHelper__Any_object__50246536(
                                                                                  yTransparenceShaderNames,
                                                                                  (System_Func_T__bool__o *)v23,
                                                                                  (const MethodInfo_2FEB388 *)Method_BasicHelper_Any_string____76812616);
              if ( ((unsigned __int8)enableRendererList & 1) != 0 )
                return v10 < size;
            }
            LODWORD(v14) = v15->fields._size;
          }
          while ( (__int64)++v16 < (int)v14 );
        }
      }
    }
    ++v10;
    enableRendererList = (System_Collections_Generic_List_object__o *)this->fields.enableRendererList;
    if ( !enableRendererList )
      goto LABEL_26;
  }
}


void __fastcall BattleFBXComponent__OnAnimEvent(
        BattleFBXComponent_o *this,
        BattleFBXComponent_AnimEvent_o *ev,
        const MethodInfo *method)
{
  BattleFBXComponent_c *v5; // x0
  struct BattleFBXComponent_onEventDelegate_o *OnEvent; // x8

  if ( (byte_4B048BB & 1) == 0 )
  {
    sub_1BC3008(&BattleFBXComponent_TypeInfo, ev);
    byte_4B048BB = 1;
  }
  v5 = BattleFBXComponent_TypeInfo;
  if ( !BattleFBXComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
    v5 = BattleFBXComponent_TypeInfo;
  }
  if ( v5->static_fields->EnableEvent )
  {
    OnEvent = this->fields.OnEvent;
    if ( OnEvent )
    {
      if ( !ev )
        sub_1BC3264(v5, ev);
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, struct System_String_o *, _QWORD))OnEvent->fields.m_target)(
        OnEvent->fields.original_method_info,
        ev->fields.tag,
        *(_QWORD *)&OnEvent->fields.extra_arg);
    }
  }
}


void __fastcall BattleFBXComponent__OnAnimEvent_44854472(
        BattleFBXComponent_o *this,
        UnityEngine_AnimationEvent_o *ev,
        const MethodInfo *method)
{
  System_String_o *stringParameter; // x0
  __int64 v6; // x2
  struct BattleFBXComponent_onEventDelegate_o *OnEvent; // x8

  if ( (byte_4B048CB & 1) == 0 )
  {
    sub_1BC3008(&BattleFBXComponent_TypeInfo, ev);
    byte_4B048CB = 1;
  }
  stringParameter = (System_String_o *)BattleFBXComponent_TypeInfo;
  if ( !BattleFBXComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
    stringParameter = (System_String_o *)BattleFBXComponent_TypeInfo;
  }
  if ( **(_BYTE **)&stringParameter[7].fields )
  {
    if ( !ev )
      goto LABEL_13;
    stringParameter = UnityEngine_AnimationEvent__get_stringParameter(ev, 0LL);
    if ( !stringParameter )
      goto LABEL_13;
    stringParameter = (System_String_o *)System_String__Split(stringParameter, 0x3Au, 0, 0LL);
    if ( !stringParameter )
      goto LABEL_13;
    if ( !LODWORD(stringParameter[1].klass) )
      sub_1BC326C(stringParameter, ev, v6);
    OnEvent = this->fields.OnEvent;
    if ( !OnEvent )
LABEL_13:
      sub_1BC3264(stringParameter, ev);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, void *, _QWORD))OnEvent->fields.m_target)(
      OnEvent->fields.original_method_info,
      stringParameter[1].monitor,
      *(_QWORD *)&OnEvent->fields.extra_arg);
  }
}


void __fastcall BattleFBXComponent__OnEnable(BattleFBXComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *animename; // x0
  const MethodInfo *v5; // x2
  System_String_o *v6; // x20
  System_String_o *v7; // x0
  System_String_o *v8; // x0
  const MethodInfo *v9; // x2
  System_Enum_o v10; // [xsp+8h] [xbp-48h] BYREF
  int v11; // [xsp+18h] [xbp-38h]

  if ( (byte_4B048CD & 1) == 0 )
  {
    sub_1BC3008(&HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo, method);
    sub_1BC3008(&StringLiteral_24479/*"wait"*/, v3);
    byte_4B048CD = 1;
  }
  animename = this->fields.animename;
  if ( animename )
  {
    if ( System_String__StartsWith(animename, (System_String_o *)StringLiteral_24479/*"wait"*/, 0LL) )
    {
      BattleFBXComponent__playAnimation(this, (System_String_o *)StringLiteral_24479/*"wait"*/, v5);
    }
    else
    {
      v6 = this->fields.animename;
      v11 = 46;
      v10.klass = (System_Enum_c *)HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo;
      v10.monitor = (void *)-1LL;
      v7 = System_Enum__ToString(&v10, 0LL);
      if ( System_String__op_Equality(v6, v7, 0LL) )
      {
        v11 = 46;
        v10.klass = (System_Enum_c *)HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo;
        v10.monitor = (void *)-1LL;
        v8 = System_Enum__ToString(&v10, 0LL);
        BattleFBXComponent__playAnimation(this, v8, v9);
      }
    }
  }
}


void __fastcall BattleFBXComponent__RevertDefaultAnimation(BattleFBXComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *simpleAnimationComponent; // x20
  UnityEngine_AnimationClip_o **p_defSimpleAnimClip; // x20
  UnityEngine_Object_o *defSimpleAnimClip; // x21
  __int64 v6; // x1
  SimpleAnimation_o *v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  UnityEngine_Object_o *animationComponent; // x20
  UnityEngine_Object_o *defAnimClip; // x21

  if ( (byte_4B048DB & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    byte_4B048DB = 1;
  }
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0LL, 0LL) )
  {
    p_defSimpleAnimClip = &this->fields.defSimpleAnimClip;
    defSimpleAnimClip = (UnityEngine_Object_o *)this->fields.defSimpleAnimClip;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(defSimpleAnimClip, 0LL, 0LL) )
    {
      v7 = this->fields.simpleAnimationComponent;
      if ( v7 )
      {
        SimpleAnimation__set_clip(v7, *p_defSimpleAnimClip, 0LL);
LABEL_19:
        *p_defSimpleAnimClip = 0LL;
        sub_1BC2FAC((CGThumbnailListItem_o *)p_defSimpleAnimClip, 0, v8, v9);
        return;
      }
      goto LABEL_21;
    }
  }
  animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(animationComponent, 0LL, 0LL) )
  {
    p_defSimpleAnimClip = &this->fields.defAnimClip;
    defAnimClip = (UnityEngine_Object_o *)this->fields.defAnimClip;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(defAnimClip, 0LL, 0LL) )
    {
      v7 = (SimpleAnimation_o *)this->fields.animationComponent;
      if ( v7 )
      {
        UnityEngine_Animation__set_clip((UnityEngine_Animation_o *)v7, *p_defSimpleAnimClip, 0LL);
        goto LABEL_19;
      }
LABEL_21:
      sub_1BC3264(v7, v6);
    }
  }
}


void __fastcall BattleFBXComponent__RevertShaderFloatProperty(BattleFBXComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *tempMaterialPropertyDict; // x0
  __int128 v13; // kr00_16
  float v14; // s8
  _BOOL8 v15; // x0
  __int64 v16; // x1
  __int128 v17; // [xsp+0h] [xbp-80h] BYREF
  __int128 v18; // [xsp+10h] [xbp-70h]
  __int128 v19; // [xsp+20h] [xbp-60h]

  if ( (byte_4B048D4 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_KeyValuePair_string__Material___float__Clear__, method);
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_KeyValuePair_string__Material___float__GetEnumerator__,
      v3);
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_string__Material___float__Dispose__,
      v4);
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_string__Material___float__MoveNext__,
      v5);
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_string__Material___float__get_Current__,
      v6);
    sub_1BC3008(&Method_System_Collections_Generic_KeyValuePair_KeyValuePair_string__Material___float__get_Key__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_KeyValuePair_string__Material__get_Key__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_KeyValuePair_KeyValuePair_string__Material___float__get_Value__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_KeyValuePair_string__Material__get_Value__, v10);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v11);
    byte_4B048D4 = 1;
  }
  v18 = 0u;
  v19 = 0u;
  v17 = 0u;
  tempMaterialPropertyDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.tempMaterialPropertyDict;
  if ( !tempMaterialPropertyDict )
    goto LABEL_14;
  System_Collections_Generic_Dictionary_KeyValuePair_object__object___float___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v17,
    tempMaterialPropertyDict,
    (const MethodInfo_32C6C14 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_string__Material___float__GetEnumerator__);
  while ( System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_object__object___float___MoveNext(
            (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v17,
            (const MethodInfo_344D964 *)Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_string__Material___float__MoveNext__) )
  {
    v13 = v18;
    v14 = *(float *)&v19;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality(*((UnityEngine_Object_o **)&v13 + 1), 0LL, 0LL);
    if ( v15 )
    {
      if ( !*((_QWORD *)&v13 + 1) )
        sub_1BC3264(v15, v16);
      UnityEngine_Material__SetFloat(*((UnityEngine_Material_o **)&v13 + 1), (System_String_o *)v13, v14, 0LL);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_object__object___float___Dispose(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v17,
    (const MethodInfo_344DAA0 *)Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_string__Material___float__Dispose__);
  tempMaterialPropertyDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.tempMaterialPropertyDict;
  if ( !tempMaterialPropertyDict )
LABEL_14:
    sub_1BC3264(tempMaterialPropertyDict, method);
  System_Collections_Generic_Dictionary_KeyValuePair_object__object___float___Clear(
    tempMaterialPropertyDict,
    (const MethodInfo_32C6980 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_string__Material___float__Clear__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleFBXComponent__SetActiveActorEffectAll(
        BattleFBXComponent_o *this,
        bool isActive,
        const MethodInfo *method)
{
  _BOOL4 v3; // w19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_Dictionary_string__GameObject__o *actorEffectDict; // x0
  _BOOL8 v10; // x0
  __int64 v11; // x1
  Il2CppObject *value; // x20
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v13; // [xsp+0h] [xbp-60h] BYREF

  v3 = isActive;
  if ( (byte_4B048D8 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__GameObject__GetEnumerator__, isActive);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_Enumerator_string__GameObject__Dispose__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_Enumerator_string__GameObject__MoveNext__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_Enumerator_string__GameObject__get_Current__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_KeyValuePair_string__GameObject__get_Value__, v8);
    byte_4B048D8 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  actorEffectDict = this->fields.actorEffectDict;
  if ( !actorEffectDict )
    sub_1BC3264(0LL, isActive);
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v13,
    (System_Collections_Generic_Dictionary_object__object__o *)actorEffectDict,
    (const MethodInfo_336D418 *)Method_System_Collections_Generic_Dictionary_string__GameObject__GetEnumerator__);
  while ( 1 )
  {
    v10 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            &v13,
            (const MethodInfo_346847C *)Method_System_Collections_Generic_Dictionary_Enumerator_string__GameObject__MoveNext__);
    if ( !v10 )
      break;
    value = v13.fields._current.fields.value;
    if ( !v13.fields._current.fields.value )
      sub_1BC3264(v10, v11);
    if ( ((UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)v13.fields._current.fields.value, 0LL) ^ v3) & 1) != 0 )
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)value, v3, 0LL);
  }
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v13,
    (const MethodInfo_346859C *)Method_System_Collections_Generic_Dictionary_Enumerator_string__GameObject__Dispose__);
}


void __fastcall BattleFBXComponent__SetActiveActorEffectFromEffectName(
        BattleFBXComponent_o *this,
        System_String_o *effectName,
        bool isActive,
        const MethodInfo *method)
{
  _BOOL4 v4; // w19
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct System_Collections_Generic_Dictionary_string__GameObject__o *actorEffectDict; // x0
  __int64 v13; // x1
  Il2CppObject *value; // x21
  _BOOL8 v15; // x0
  __int64 v16; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v17; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v18; // [xsp+30h] [xbp-60h] BYREF

  v4 = isActive;
  if ( (byte_4B048D7 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__GameObject__GetEnumerator__, effectName);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_Enumerator_string__GameObject__Dispose__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_Enumerator_string__GameObject__MoveNext__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_Enumerator_string__GameObject__get_Current__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_KeyValuePair_string__GameObject__get_Key__, v10);
    sub_1BC3008(&Method_System_Collections_Generic_KeyValuePair_string__GameObject__get_Value__, v11);
    byte_4B048D7 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  actorEffectDict = this->fields.actorEffectDict;
  if ( !actorEffectDict )
    sub_1BC3264(0LL, effectName);
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v17,
    (System_Collections_Generic_Dictionary_object__object__o *)actorEffectDict,
    (const MethodInfo_336D418 *)Method_System_Collections_Generic_Dictionary_string__GameObject__GetEnumerator__);
  v18 = v17;
  while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            &v18,
            (const MethodInfo_346847C *)Method_System_Collections_Generic_Dictionary_Enumerator_string__GameObject__MoveNext__) )
  {
    if ( !v18.fields._current.fields.key )
      sub_1BC3264(0LL, v13);
    value = v18.fields._current.fields.value;
    v15 = System_String__Contains((System_String_o *)v18.fields._current.fields.key, effectName, 0LL);
    if ( v15 )
    {
      if ( !value )
        sub_1BC3264(v15, v16);
      if ( ((UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)value, 0LL) ^ v4) & 1) != 0 )
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)value, v4, 0LL);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v18,
    (const MethodInfo_346859C *)Method_System_Collections_Generic_Dictionary_Enumerator_string__GameObject__Dispose__);
}


void __fastcall BattleFBXComponent__SetActiveActorEffectFromNodeName(
        BattleFBXComponent_o *this,
        System_String_o *nodeName,
        bool isActive,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_object__object__o *actorEffectDict; // x0
  UnityEngine_GameObject_o *v9; // x20

  if ( (byte_4B048D6 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__GameObject__ContainsKey__, nodeName);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__GameObject__get_Item__, v7);
    byte_4B048D6 = 1;
  }
  actorEffectDict = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.actorEffectDict;
  if ( !actorEffectDict )
    goto LABEL_10;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          actorEffectDict,
          (Il2CppObject *)nodeName,
          (const MethodInfo_336D1DC *)Method_System_Collections_Generic_Dictionary_string__GameObject__ContainsKey__) )
    return;
  actorEffectDict = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.actorEffectDict;
  if ( !actorEffectDict
    || (actorEffectDict = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                       actorEffectDict,
                                                                                       (Il2CppObject *)nodeName,
                                                                                       (const MethodInfo_336CF68 *)Method_System_Collections_Generic_Dictionary_string__GameObject__get_Item__)) == 0LL )
  {
LABEL_10:
    sub_1BC3264(actorEffectDict, nodeName);
  }
  v9 = (UnityEngine_GameObject_o *)actorEffectDict;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)actorEffectDict, 0LL) != isActive )
    UnityEngine_GameObject__SetActive(v9, isActive, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleFBXComponent__SetConnectPrefabNode(
        BattleFBXComponent_o *this,
        System_String_o *name,
        bool isConnect,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *PrefabNode; // x21
  const MethodInfo *v8; // x3

  if ( (byte_4B048CF & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, name);
    byte_4B048CF = 1;
  }
  PrefabNode = BattleFBXComponent__GetPrefabNode(this, name, (const MethodInfo *)isConnect);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)PrefabNode, 0LL, 0LL) )
    BattleFBXComponent__SetConnectPrefabNode_44857220(this, PrefabNode, isConnect, v8);
}


void __fastcall BattleFBXComponent__SetConnectPrefabNode_44857220(
        BattleFBXComponent_o *this,
        UnityEngine_GameObject_o *obj,
        bool isConnect,
        const MethodInfo *method)
{
  UnityEngine_Component_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UnityEngine_Object_o *Component_object; // x20
  UnityEngine_Transform_o *monitor; // x20
  BattleFBXComponent_o *v12; // x21
  BattleFBXComponent_o *v13; // x21
  Il2CppObject *v14; // x20
  UnityEngine_Transform_o *transform; // x21
  Il2CppObject *v16; // x20

  v6 = (UnityEngine_Component_o *)this;
  if ( (byte_4B048D0 & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_Component_GetComponent_BattleActorControl___, obj);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v7);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_ObjectScaleEnabler___, v8);
    this = (BattleFBXComponent_o *)sub_1BC3008(&UnityEngine_Object_TypeInfo, v9);
    byte_4B048D0 = 1;
  }
  if ( !obj )
    goto LABEL_29;
  if ( isConnect )
  {
    Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 obj,
                                                 (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_ObjectScaleEnabler___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattleFBXComponent_o *)UnityEngine_Object__op_Inequality(Component_object, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_29;
      monitor = (UnityEngine_Transform_o *)Component_object[1].monitor;
      this = (BattleFBXComponent_o *)UnityEngine_GameObject__get_transform(obj, 0LL);
      if ( !monitor )
        goto LABEL_29;
      v12 = this;
      this = (BattleFBXComponent_o *)UnityEngine_Transform__get_parent(monitor, 0LL);
      if ( !this )
        goto LABEL_29;
      this = (BattleFBXComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !v12 )
        goto LABEL_29;
      UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)v12, (UnityEngine_Transform_o *)this, 0LL);
      this = (BattleFBXComponent_o *)UnityEngine_GameObject__get_transform(obj, 0LL);
      v13 = this;
      if ( !byte_4AFBDB6 )
      {
        this = (BattleFBXComponent_o *)sub_1BC3008(&UnityEngine_Vector3_TypeInfo, obj);
        byte_4AFBDB6 = 1;
      }
      if ( !v13 )
        goto LABEL_29;
      UnityEngine_Transform__set_localScale(
        (UnityEngine_Transform_o *)v13,
        UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
        0LL);
      v14 = UnityEngine_Component__GetComponent_object_(
              (UnityEngine_Component_o *)monitor,
              (const MethodInfo_2FF8634 *)Method_UnityEngine_Component_GetComponent_BattleActorControl___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (BattleFBXComponent_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v14, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( v14 )
        {
          BattleActorControl__AddChildNodesRenderer((BattleActorControl_o *)v14, obj, 0LL);
          return;
        }
LABEL_29:
        sub_1BC3264(this, obj);
      }
    }
  }
  else
  {
    transform = UnityEngine_GameObject__get_transform(obj, 0LL);
    this = (BattleFBXComponent_o *)UnityEngine_Component__get_transform(v6, 0LL);
    if ( !this )
      goto LABEL_29;
    this = (BattleFBXComponent_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)this, 0LL);
    if ( !transform )
      goto LABEL_29;
    UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)this, 0LL);
    this = (BattleFBXComponent_o *)UnityEngine_Component__get_gameObject(v6, 0LL);
    if ( !this )
      goto LABEL_29;
    v16 = UnityEngine_GameObject__GetComponent_object_(
            (UnityEngine_GameObject_o *)this,
            (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattleFBXComponent_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v16, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !v16 )
        goto LABEL_29;
      BattleActorControl__RemoveChildNodesRenderer((BattleActorControl_o *)v16, obj, 0LL);
    }
  }
}


void __fastcall BattleFBXComponent__SetEvolutionLevel(
        BattleFBXComponent_o *this,
        int32_t svtId,
        int32_t limitcount,
        const MethodInfo *method)
{
  UnityEngine_Component_o *rootTransform; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v9; // x4

  rootTransform = (UnityEngine_Component_o *)this->fields.rootTransform;
  if ( !rootTransform )
    sub_1BC3264(0LL, svtId);
  gameObject = UnityEngine_Component__get_gameObject(rootTransform, 0LL);
  BattleFBXComponent__inSetEvolutionLevel(this, gameObject, svtId, limitcount, v9);
}


void __fastcall BattleFBXComponent__SetTempDefaultAnimation(
        BattleFBXComponent_o *this,
        System_String_o *updateAnimName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  System_String_o *RealAnimName; // x0
  UnityEngine_Object_o *simpleAnimationComponent; // x21
  System_String_o *v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  struct SimpleAnimation_o *v12; // x8
  UnityEngine_Object_o *monitor; // x21
  SimpleAnimation_State_o *Item; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v16; // x20
  __int64 v17; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 p_method; // x0
  UnityEngine_Object_o *animationComponent; // x21
  UnityEngine_Object_o *clip; // x21
  UnityEngine_TrackedReference_o *v22; // x20
  UnityEngine_Object_o *v23; // x21
  UnityEngine_Object_o *v24; // x22
  struct UnityEngine_AnimationClip_o *v25; // x0
  struct UnityEngine_AnimationClip_o **p_defAnimClip; // x19
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  UnityEngine_Animation_o *v29; // x19
  struct SimpleAnimation_o *v30; // x8
  UnityEngine_Object_o *v31; // x21
  UnityEngine_Object_o *v32; // x22
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  struct SimpleAnimation_o *v35; // x8
  struct UnityEngine_AnimationClip_o *v36; // x1
  struct UnityEngine_AnimationClip_o **p_defSimpleAnimClip; // x19
  SimpleAnimation_State_c *v38; // x8
  SimpleAnimation_o *v39; // x19
  __int64 v40; // x9
  SimpleAnimation_State_c **v41; // x10
  __int64 v42; // x0

  if ( (byte_4B048DA & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, updateAnimName);
    sub_1BC3008(&SimpleAnimation_State_TypeInfo, v5);
    byte_4B048DA = 1;
  }
  if ( !System_String__IsNullOrEmpty(updateAnimName, 0LL) )
  {
    RealAnimName = BattleFBXComponent__GetRealAnimName(this, updateAnimName, v6);
    simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
    v9 = RealAnimName;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v10 = UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0LL, 0LL);
    if ( (v10 & 1) == 0 )
      goto LABEL_18;
    v12 = this->fields.simpleAnimationComponent;
    if ( !v12 )
      goto LABEL_50;
    monitor = (UnityEngine_Object_o *)v12[1].monitor;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
    {
      v10 = (__int64)this->fields.simpleAnimationComponent;
      if ( !v10 )
        goto LABEL_50;
      Item = SimpleAnimation__get_Item((SimpleAnimation_o *)v10, v9, 0LL);
      if ( Item )
      {
        klass = Item->klass;
        v16 = Item;
        v17 = *(unsigned __int16 *)(&Item->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&Item->klass->_2.bitflags2 + 3) )
        {
          p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
          while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            --v17;
            p_offset += 2;
            if ( !v17 )
              goto LABEL_17;
          }
          p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 14].method;
        }
        else
        {
LABEL_17:
          p_method = sub_1C13570(Item, SimpleAnimation_State_TypeInfo, 14LL);
        }
        v10 = (*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))p_method)(v16, *(_QWORD *)(p_method + 8));
        v30 = this->fields.simpleAnimationComponent;
        if ( !v30 )
          goto LABEL_50;
        v31 = (UnityEngine_Object_o *)v10;
        v32 = (UnityEngine_Object_o *)v30[1].monitor;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v10 = UnityEngine_Object__op_Inequality(v31, v32, 0LL);
        if ( (v10 & 1) != 0 )
        {
          v35 = this->fields.simpleAnimationComponent;
          if ( v35 )
          {
            v36 = (struct UnityEngine_AnimationClip_o *)v35[1].monitor;
            this->fields.defSimpleAnimClip = v36;
            p_defSimpleAnimClip = &this->fields.defSimpleAnimClip;
            sub_1BC2FAC((CGThumbnailListItem_o *)p_defSimpleAnimClip, (int32_t)v36, v33, v34);
            v38 = v16->klass;
            v39 = (SimpleAnimation_o *)*(p_defSimpleAnimClip - 17);
            v40 = *(unsigned __int16 *)(&v16->klass->_2.bitflags2 + 3);
            if ( *(_WORD *)(&v16->klass->_2.bitflags2 + 3) )
            {
              v41 = (SimpleAnimation_State_c **)&v38->_1.interfaceOffsets->offset;
              while ( *(v41 - 1) != SimpleAnimation_State_TypeInfo )
              {
                --v40;
                v41 += 2;
                if ( !v40 )
                  goto LABEL_45;
              }
              v42 = (__int64)&v38->vtable[*(_DWORD *)v41 + 14].method;
            }
            else
            {
LABEL_45:
              v42 = sub_1C13570(v16, SimpleAnimation_State_TypeInfo, 14LL);
            }
            v10 = (*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v42)(v16, *(_QWORD *)(v42 + 8));
            if ( v39 )
            {
              SimpleAnimation__set_clip(v39, (UnityEngine_AnimationClip_o *)v10, 0LL);
              return;
            }
          }
LABEL_50:
          sub_1BC3264(v10, v11);
        }
      }
    }
    else
    {
LABEL_18:
      animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(animationComponent, 0LL, 0LL) )
      {
        v10 = (__int64)this->fields.animationComponent;
        if ( !v10 )
          goto LABEL_50;
        clip = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip((UnityEngine_Animation_o *)v10, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(clip, 0LL, 0LL) )
        {
          v10 = (__int64)this->fields.animationComponent;
          if ( !v10 )
            goto LABEL_50;
          v22 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                                    (UnityEngine_Animation_o *)v10,
                                                    v9,
                                                    0LL);
          v10 = UnityEngine_TrackedReference__op_Inequality(v22, 0LL, 0LL);
          if ( (v10 & 1) != 0 )
          {
            if ( !v22 )
              goto LABEL_50;
            v10 = (__int64)UnityEngine_AnimationState__get_clip((UnityEngine_AnimationState_o *)v22, 0LL);
            if ( !this->fields.animationComponent )
              goto LABEL_50;
            v23 = (UnityEngine_Object_o *)v10;
            v24 = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(this->fields.animationComponent, 0LL);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(v23, v24, 0LL) )
            {
              v10 = (__int64)this->fields.animationComponent;
              if ( v10 )
              {
                v25 = UnityEngine_Animation__get_clip((UnityEngine_Animation_o *)v10, 0LL);
                this->fields.defAnimClip = v25;
                p_defAnimClip = &this->fields.defAnimClip;
                sub_1BC2FAC((CGThumbnailListItem_o *)p_defAnimClip, (int32_t)v25, v27, v28);
                v29 = (UnityEngine_Animation_o *)*(p_defAnimClip - 19);
                v10 = (__int64)UnityEngine_AnimationState__get_clip((UnityEngine_AnimationState_o *)v22, 0LL);
                if ( v29 )
                {
                  UnityEngine_Animation__set_clip(v29, (UnityEngine_AnimationClip_o *)v10, 0LL);
                  return;
                }
              }
              goto LABEL_50;
            }
          }
        }
      }
    }
  }
}


void __fastcall BattleFBXComponent__SetTempShaderFloatProperty(
        BattleFBXComponent_o *this,
        float value,
        System_String_o *propertyName,
        const MethodInfo *method)
{
  System_String_o *v4; // x19
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *enableRendererList; // x0
  const MethodInfo_36A0B70 **v13; // x24
  UnityEngine_Object_c **v14; // x25
  Il2CppObject **v15; // x20
  const MethodInfo_32C69EC **v16; // x27
  int32_t v17; // w21
  Il2CppObject *Item; // x22
  __int64 v19; // x8
  System_Collections_Generic_List_object__o *v20; // x22
  unsigned __int64 v21; // x29
  Il2CppObject **p_syncRoot; // x28
  UnityEngine_Object_o *v23; // x23
  const MethodInfo_35DEA90 *v24; // x4
  System_Collections_Generic_List_object__o *v25; // x21
  const MethodInfo_32C69EC **v26; // x22
  Il2CppObject **v27; // x27
  UnityEngine_Object_c **v28; // x20
  const MethodInfo_36A0B70 **v29; // x28
  System_String_o *v30; // x1
  BattleFBXComponent_o *v31; // x19
  System_Collections_Generic_Dictionary_TKey__TValue__o *tempMaterialPropertyDict; // x24
  Il2CppObject *key; // x25
  Il2CppObject *v34; // x26
  UnityEngine_Material_o *v35; // x0
  System_String_o *v36; // x23
  float Float; // s0
  Il2CppObject **v38; // [xsp+8h] [xbp-88h]
  System_Collections_Generic_KeyValuePair_object__object__o v39; // [xsp+10h] [xbp-80h] BYREF
  int32_t v40; // [xsp+2Ch] [xbp-64h]
  System_Collections_Generic_KeyValuePair_object__object__o v41; // 0:x0.16
  System_Collections_Generic_KeyValuePair_object__object__o v42; // 0:x1.16

  v4 = propertyName;
  if ( (byte_4B048D3 & 1) == 0 )
  {
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_KeyValuePair_string__Material___float__ContainsKey__,
      propertyName);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_KeyValuePair_string__Material___float__set_Item__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_KeyValuePair_string__Material___ctor__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_Renderer__get_Count__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_Renderer__get_Item__, v10);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v11);
    byte_4B048D3 = 1;
  }
  v39.fields.key = 0LL;
  v39.fields.value = 0LL;
  enableRendererList = (System_Collections_Generic_List_object__o *)this->fields.enableRendererList;
  if ( !enableRendererList )
LABEL_29:
    sub_1BC3264(enableRendererList, propertyName);
  v13 = (const MethodInfo_36A0B70 **)&Method_System_Collections_Generic_List_Renderer__get_Item__;
  v14 = &UnityEngine_Object_TypeInfo;
  v15 = (Il2CppObject **)&Method_System_Collections_Generic_KeyValuePair_string__Material___ctor__;
  v16 = (const MethodInfo_32C69EC **)&Method_System_Collections_Generic_Dictionary_KeyValuePair_string__Material___float__ContainsKey__;
  v17 = 0;
  while ( v17 < enableRendererList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(enableRendererList, v17, *v13);
    if ( !(*v14)->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(*v14);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Item, 0LL, 0LL) )
    {
      enableRendererList = (System_Collections_Generic_List_object__o *)this->fields.enableRendererList;
      if ( !enableRendererList )
        goto LABEL_29;
      enableRendererList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                          enableRendererList,
                                                                          v17,
                                                                          *v13);
      if ( !enableRendererList )
        goto LABEL_29;
      if ( UnityEngine_Renderer__get_sharedMaterials((UnityEngine_Renderer_o *)enableRendererList, 0LL) )
      {
        enableRendererList = (System_Collections_Generic_List_object__o *)this->fields.enableRendererList;
        if ( !enableRendererList )
          goto LABEL_29;
        enableRendererList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                            enableRendererList,
                                                                            v17,
                                                                            *v13);
        if ( !enableRendererList )
          goto LABEL_29;
        enableRendererList = (System_Collections_Generic_List_object__o *)UnityEngine_Renderer__get_sharedMaterials(
                                                                            (UnityEngine_Renderer_o *)enableRendererList,
                                                                            0LL);
        if ( enableRendererList )
        {
          v19 = *(_QWORD *)&enableRendererList->fields._size;
          v20 = enableRendererList;
          if ( (int)v19 >= 1 )
          {
            v21 = 0LL;
            p_syncRoot = &enableRendererList->fields._syncRoot;
            v40 = v17;
            v38 = &enableRendererList->fields._syncRoot;
            do
            {
              if ( v21 >= (unsigned int)v19 )
                sub_1BC326C(enableRendererList, propertyName, method);
              v23 = (UnityEngine_Object_o *)p_syncRoot[v21];
              if ( !(*v14)->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(*v14);
              enableRendererList = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Inequality(
                                                                                  v23,
                                                                                  0LL,
                                                                                  0LL);
              if ( ((unsigned __int8)enableRendererList & 1) != 0 )
              {
                if ( !v23 )
                  goto LABEL_29;
                enableRendererList = (System_Collections_Generic_List_object__o *)UnityEngine_Material__HasProperty_69900436(
                                                                                    (UnityEngine_Material_o *)v23,
                                                                                    v4,
                                                                                    0LL);
                if ( ((unsigned __int8)enableRendererList & 1) != 0 )
                {
                  v41.fields.key = (Il2CppObject *)&v39;
                  v41.fields.value = (Il2CppObject *)v4;
                  System_Collections_Generic_KeyValuePair_object__object____ctor(v41, (Il2CppObject *)v23, *v15, v24);
                  enableRendererList = (System_Collections_Generic_List_object__o *)this->fields.tempMaterialPropertyDict;
                  if ( !enableRendererList )
                    goto LABEL_29;
                  enableRendererList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_Dictionary_KeyValuePair_object__object___float___ContainsKey(
                                                                                      (System_Collections_Generic_Dictionary_TKey__TValue__o *)enableRendererList,
                                                                                      v39,
                                                                                      *v16);
                  if ( ((unsigned __int8)enableRendererList & 1) == 0 )
                  {
                    v25 = v20;
                    v26 = v16;
                    v27 = v15;
                    v28 = v14;
                    v29 = v13;
                    v30 = v4;
                    v31 = this;
                    tempMaterialPropertyDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.tempMaterialPropertyDict;
                    key = v39.fields.key;
                    v34 = v39.fields.value;
                    v35 = (UnityEngine_Material_o *)v23;
                    v36 = v30;
                    Float = UnityEngine_Material__GetFloat(v35, v30, 0LL);
                    if ( !tempMaterialPropertyDict )
                      goto LABEL_29;
                    v42.fields.key = key;
                    v42.fields.value = v34;
                    System_Collections_Generic_Dictionary_KeyValuePair_object__object___float___set_Item(
                      tempMaterialPropertyDict,
                      v42,
                      Float,
                      (const MethodInfo_32C67CC *)Method_System_Collections_Generic_Dictionary_KeyValuePair_string__Material___float__set_Item__);
                    v13 = v29;
                    v14 = v28;
                    v15 = v27;
                    v16 = v26;
                    v20 = v25;
                    v17 = v40;
                    p_syncRoot = v38;
                    this = v31;
                    v4 = v36;
                  }
                }
              }
              LODWORD(v19) = v20->fields._size;
              ++v21;
            }
            while ( (__int64)v21 < (int)v19 );
          }
        }
      }
    }
    enableRendererList = (System_Collections_Generic_List_object__o *)this->fields.enableRendererList;
    ++v17;
    if ( !enableRendererList )
      goto LABEL_29;
  }
  BattleFBXComponent__SetYTransparenceShaderProperty(this, value, v4, method);
}


void __fastcall BattleFBXComponent__SetWrapMode(
        BattleFBXComponent_o *this,
        System_String_o *animName,
        int32_t wrapMode,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UnityEngine_Object_o *animationComponent; // x22
  __int64 v9; // x1
  UnityEngine_Animation_o *v10; // x0
  UnityEngine_TrackedReference_o *Item; // x20
  UnityEngine_Object_o *simpleAnimationComponent; // x22
  SimpleAnimation_State_o *v13; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v15; // x20
  __int64 v16; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 p_method; // x0

  if ( (byte_4B048BA & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, animName);
    sub_1BC3008(&SimpleAnimation_State_TypeInfo, v7);
    byte_4B048BA = 1;
  }
  BattleFBXComponent__setupAnimation(this, (const MethodInfo *)animName);
  animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(animationComponent, 0LL, 0LL) )
  {
    v10 = this->fields.animationComponent;
    if ( !v10 )
      goto LABEL_23;
    Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v10, animName, 0LL);
    v10 = (UnityEngine_Animation_o *)UnityEngine_TrackedReference__op_Inequality(Item, 0LL, 0LL);
    if ( ((unsigned __int8)v10 & 1) != 0 )
    {
      if ( Item )
      {
        UnityEngine_AnimationState__set_wrapMode((UnityEngine_AnimationState_o *)Item, wrapMode, 0LL);
        return;
      }
LABEL_23:
      sub_1BC3264(v10, v9);
    }
  }
  else
  {
    simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0LL, 0LL) )
    {
      v10 = (UnityEngine_Animation_o *)this->fields.simpleAnimationComponent;
      if ( !v10 )
        goto LABEL_23;
      v13 = SimpleAnimation__get_Item((SimpleAnimation_o *)v10, animName, 0LL);
      if ( v13 )
      {
        klass = v13->klass;
        v15 = v13;
        v16 = *(unsigned __int16 *)(&v13->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&v13->klass->_2.bitflags2 + 3) )
        {
          p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
          while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            --v16;
            p_offset += 2;
            if ( !v16 )
              goto LABEL_19;
          }
          p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 18].method;
        }
        else
        {
LABEL_19:
          p_method = sub_1C13570(v13, SimpleAnimation_State_TypeInfo, 18LL);
        }
        (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD, _QWORD))p_method)(
          v15,
          (unsigned int)wrapMode,
          *(_QWORD *)(p_method + 8));
      }
    }
  }
}


void __fastcall BattleFBXComponent__SetYTransparenceShaderProperty(
        BattleFBXComponent_o *this,
        float value,
        System_String_o *propertyName,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *enableRendererList; // x0
  int32_t v10; // w21
  Il2CppObject *Item; // x22
  __int64 v12; // x2
  __int64 v13; // x8
  System_Collections_Generic_List_object__o *v14; // x22
  unsigned __int64 v15; // x26
  UnityEngine_Object_o *v16; // x23

  if ( (byte_4B048D2 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_Renderer__get_Count__, propertyName);
    sub_1BC3008(&Method_System_Collections_Generic_List_Renderer__get_Item__, v7);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v8);
    byte_4B048D2 = 1;
  }
  enableRendererList = (System_Collections_Generic_List_object__o *)this->fields.enableRendererList;
  if ( !enableRendererList )
LABEL_26:
    sub_1BC3264(enableRendererList, propertyName);
  v10 = 0;
  while ( v10 < enableRendererList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             enableRendererList,
             v10,
             (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_Renderer__get_Item__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0LL, 0LL) )
    {
      enableRendererList = (System_Collections_Generic_List_object__o *)this->fields.enableRendererList;
      if ( !enableRendererList )
        goto LABEL_26;
      enableRendererList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                          enableRendererList,
                                                                          v10,
                                                                          (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_Renderer__get_Item__);
      if ( !enableRendererList )
        goto LABEL_26;
      if ( UnityEngine_Renderer__get_sharedMaterials((UnityEngine_Renderer_o *)enableRendererList, 0LL) )
      {
        enableRendererList = (System_Collections_Generic_List_object__o *)this->fields.enableRendererList;
        if ( !enableRendererList )
          goto LABEL_26;
        enableRendererList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                            enableRendererList,
                                                                            v10,
                                                                            (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_Renderer__get_Item__);
        if ( !enableRendererList )
          goto LABEL_26;
        enableRendererList = (System_Collections_Generic_List_object__o *)UnityEngine_Renderer__get_sharedMaterials(
                                                                            (UnityEngine_Renderer_o *)enableRendererList,
                                                                            0LL);
        if ( !enableRendererList )
          goto LABEL_26;
        v13 = *(_QWORD *)&enableRendererList->fields._size;
        v14 = enableRendererList;
        if ( (int)v13 >= 1 )
        {
          v15 = 0LL;
          do
          {
            if ( v15 >= (unsigned int)v13 )
              sub_1BC326C(enableRendererList, propertyName, v12);
            v16 = (UnityEngine_Object_o *)*((_QWORD *)&v14->fields._syncRoot + v15);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            enableRendererList = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Inequality(
                                                                                v16,
                                                                                0LL,
                                                                                0LL);
            if ( ((unsigned __int8)enableRendererList & 1) != 0 )
            {
              if ( !v16 )
                goto LABEL_26;
              enableRendererList = (System_Collections_Generic_List_object__o *)UnityEngine_Material__HasProperty_69900436(
                                                                                  (UnityEngine_Material_o *)v16,
                                                                                  propertyName,
                                                                                  0LL);
              if ( ((unsigned __int8)enableRendererList & 1) != 0 )
                UnityEngine_Material__SetFloat((UnityEngine_Material_o *)v16, propertyName, value, 0LL);
            }
            LODWORD(v13) = v14->fields._size;
            ++v15;
          }
          while ( (__int64)v15 < (int)v13 );
        }
      }
    }
    enableRendererList = (System_Collections_Generic_List_object__o *)this->fields.enableRendererList;
    ++v10;
    if ( !enableRendererList )
      goto LABEL_26;
  }
}


void __fastcall BattleFBXComponent__Start(BattleFBXComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  Il2CppObject *Component_object; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4B048B8 & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_BillBoard___, method);
    byte_4B048B8 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BC3264(0LL, v4);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_BillBoard___);
  this->fields.billBoard = (struct BillBoard_o *)Component_object;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.billBoard, (int32_t)Component_object, v6, v7);
}


void __fastcall BattleFBXComponent__Update(BattleFBXComponent_o *this, const MethodInfo *method)
{
  float deltaTime; // s0
  const MethodInfo *v4; // x1

  deltaTime = UnityEngine_Time__get_deltaTime(0LL);
  BattleFBXComponent__AnimUpdate(this, deltaTime, v4);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleFBXComponent__changeActiveEffect(
        BattleFBXComponent_o *this,
        bool active,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *componentsXWeaponTrail; // x0
  Il2CppObject *current; // x20
  _BOOL8 v11; // x0
  __int64 v12; // x1
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4B048C1 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_XWeaponTrail__Dispose__, active);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_XWeaponTrail__MoveNext__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_XWeaponTrail__get_Current__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_XWeaponTrail__GetEnumerator__, v7);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v8);
    byte_4B048C1 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  componentsXWeaponTrail = (System_Collections_Generic_List_object__o *)this->fields.componentsXWeaponTrail;
  if ( !componentsXWeaponTrail )
    sub_1BC3264(0LL, active);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    componentsXWeaponTrail,
    (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_XWeaponTrail__GetEnumerator__);
  v14 = v13;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v14,
            (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_XWeaponTrail__MoveNext__) )
  {
    current = v14.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v11 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( !v11 )
    {
      if ( active )
      {
        if ( !current )
          sub_1BC3264(v11, v12);
        XWeaponTrail__Activate((XWeaponTrail_o *)current, 0LL);
      }
      else
      {
        if ( !current )
          sub_1BC3264(v11, v12);
        XWeaponTrail__Deactivate((XWeaponTrail_o *)current, 0LL);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v14,
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_XWeaponTrail__Dispose__);
}


bool __fastcall BattleFBXComponent__checkAnimation(
        BattleFBXComponent_o *this,
        System_String_o *filename,
        const MethodInfo *method)
{
  Il2CppObject *Item; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_Dictionary_object__object__o *RealAnimNames; // x0
  UnityEngine_Object_o *animationComponent; // x21
  UnityEngine_TrackedReference_o *v9; // x0
  UnityEngine_Object_o *simpleAnimationComponent; // x21

  Item = (Il2CppObject *)filename;
  if ( (byte_4B048C5 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__, filename);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__, v5);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v6);
    byte_4B048C5 = 1;
  }
  RealAnimNames = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.RealAnimNames;
  if ( !RealAnimNames )
    goto LABEL_18;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         RealAnimNames,
         Item,
         (const MethodInfo_336D1DC *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
  {
    RealAnimNames = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.RealAnimNames;
    if ( !RealAnimNames )
      goto LABEL_18;
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             RealAnimNames,
             Item,
             (const MethodInfo_336CF68 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
  }
  animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(animationComponent, 0LL, 0LL) )
  {
    RealAnimNames = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.animationComponent;
    if ( RealAnimNames )
    {
      v9 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                               (UnityEngine_Animation_o *)RealAnimNames,
                                               (System_String_o *)Item,
                                               0LL);
      return UnityEngine_TrackedReference__op_Inequality(v9, 0LL, 0LL);
    }
LABEL_18:
    sub_1BC3264(RealAnimNames, filename);
  }
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0LL, 0LL) )
    return 0;
  RealAnimNames = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.simpleAnimationComponent;
  if ( !RealAnimNames )
    goto LABEL_18;
  return SimpleAnimation__get_Item((SimpleAnimation_o *)RealAnimNames, (System_String_o *)Item, 0LL) != 0LL;
}


float __fastcall BattleFBXComponent__getLength(BattleFBXComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *rootTransform; // x20
  UnityEngine_Object_o *animationComponent; // x20
  __int64 v7; // x1
  UnityEngine_Animation_o *v8; // x0
  UnityEngine_TrackedReference_o *Item; // x0
  UnityEngine_Object_o *simpleAnimationComponent; // x20
  UnityEngine_Animation_c *klass; // x8
  UnityEngine_Animation_o *v13; // x19
  __int64 v14; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v16; // x0

  if ( (byte_4B048BC & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    sub_1BC3008(&SimpleAnimation_State_TypeInfo, v3);
    sub_1BC3008(&StringLiteral_1/*""*/, v4);
    byte_4B048BC = 1;
  }
  rootTransform = (UnityEngine_Object_o *)this->fields.rootTransform;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(rootTransform, 0LL, 0LL)
    || !System_String__op_Inequality(this->fields.currentAnimName, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
  {
    return 0.0;
  }
  animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(animationComponent, 0LL, 0LL) )
  {
    v8 = this->fields.animationComponent;
    if ( !v8 )
      goto LABEL_31;
    Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v8, this->fields.currentAnimName, 0LL);
    if ( UnityEngine_TrackedReference__op_Inequality(Item, 0LL, 0LL) )
    {
      v8 = this->fields.animationComponent;
      if ( v8 )
      {
        v8 = (UnityEngine_Animation_o *)UnityEngine_Animation__get_Item(v8, this->fields.currentAnimName, 0LL);
        if ( v8 )
          return UnityEngine_AnimationState__get_length((UnityEngine_AnimationState_o *)v8, 0LL);
      }
LABEL_31:
      sub_1BC3264(v8, v7);
    }
  }
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0LL, 0LL) )
    return 0.0;
  v8 = (UnityEngine_Animation_o *)this->fields.simpleAnimationComponent;
  if ( !v8 )
    goto LABEL_31;
  if ( !SimpleAnimation__get_Item((SimpleAnimation_o *)v8, this->fields.currentAnimName, 0LL) )
    return 0.0;
  v8 = (UnityEngine_Animation_o *)this->fields.simpleAnimationComponent;
  if ( !v8 )
    goto LABEL_31;
  v8 = (UnityEngine_Animation_o *)SimpleAnimation__get_Item((SimpleAnimation_o *)v8, this->fields.currentAnimName, 0LL);
  if ( !v8 )
    goto LABEL_31;
  klass = v8->klass;
  v13 = v8;
  v14 = *(unsigned __int16 *)(&v8->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v8->klass->_2.bitflags2 + 3) )
  {
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v14;
      p_offset += 2;
      if ( !v14 )
        goto LABEL_26;
    }
    v16 = (__int64)(&klass[1]._1.methods + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_26:
    v16 = sub_1C13570(v8, SimpleAnimation_State_TypeInfo, 14LL);
  }
  v8 = (UnityEngine_Animation_o *)(*(__int64 (__fastcall **)(UnityEngine_Animation_o *, _QWORD))v16)(
                                    v13,
                                    *(_QWORD *)(v16 + 8));
  if ( !v8 )
    goto LABEL_31;
  return UnityEngine_AnimationClip__get_length((UnityEngine_AnimationClip_o *)v8, 0LL);
}


System_String_o *__fastcall BattleFBXComponent__getRealAnimationName(
        BattleFBXComponent_o *this,
        System_String_o *animationName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *RealAnimNames; // x0
  __int64 v8; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *v9; // x0

  if ( (byte_4B048D5 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__, animationName);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__, v5);
    sub_1BC3008(&string_TypeInfo, v6);
    byte_4B048D5 = 1;
  }
  RealAnimNames = this->fields.RealAnimNames;
  if ( !RealAnimNames
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)RealAnimNames,
          (Il2CppObject *)animationName,
          (const MethodInfo_336D1DC *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
  {
    return string_TypeInfo->static_fields->Empty;
  }
  v9 = this->fields.RealAnimNames;
  if ( !v9 )
    sub_1BC3264(0LL, v8);
  return (System_String_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                              (System_Collections_Generic_Dictionary_object__object__o *)v9,
                              (Il2CppObject *)animationName,
                              (const MethodInfo_336CF68 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
}


float __fastcall BattleFBXComponent__getTagTime(
        BattleFBXComponent_o *this,
        System_String_o *animname,
        System_String_o *tag,
        const MethodInfo *method)
{
  Il2CppObject *Item; // x21
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *CommonAnimNames; // x0
  __int64 v10; // x1
  System_Collections_Generic_Dictionary_object__object__o *Index; // x0
  __int64 v12; // x2
  float v13; // s8
  struct BattleFBXComponent_AnimEvent_array_array *eventlist; // x8
  BattleFBXComponent_AnimEvent_array *v15; // x20
  __int64 v16; // x8
  __int64 i; // x21
  BattleFBXComponent_AnimEvent_o *v18; // x23

  Item = (Il2CppObject *)animname;
  if ( (byte_4B048C8 & 1) == 0 )
  {
    sub_1BC3008(&AnimationList_TypeInfo, animname);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__, v8);
    byte_4B048C8 = 1;
  }
  CommonAnimNames = this->fields.CommonAnimNames;
  if ( CommonAnimNames
    && System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)CommonAnimNames,
         Item,
         (const MethodInfo_336D1DC *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
  {
    Index = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.CommonAnimNames;
    if ( !Index )
      goto LABEL_25;
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             Index,
             Item,
             (const MethodInfo_336CF68 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
  }
  if ( !AnimationList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AnimationList_TypeInfo);
  Index = (System_Collections_Generic_Dictionary_object__object__o *)AnimationList__getIndex(
                                                                       (System_String_o *)Item,
                                                                       0LL);
  v13 = 0.0;
  if ( ((unsigned int)Index & 0x80000000) != 0 )
    return v13;
  eventlist = this->fields.eventlist;
  if ( !eventlist )
LABEL_25:
    sub_1BC3264(Index, v10);
  if ( (unsigned int)Index >= eventlist->max_length )
LABEL_24:
    sub_1BC326C(Index, v10, v12);
  v15 = eventlist->m_Items[(unsigned int)Index];
  if ( v15 )
  {
    v16 = *(_QWORD *)&v15->max_length;
    if ( (int)v16 >= 1 )
    {
      for ( i = 0LL; (int)i < (int)v16; ++i )
      {
        if ( (unsigned int)i >= (unsigned int)v16 )
          goto LABEL_24;
        v18 = v15->m_Items[i];
        if ( !v18 )
          goto LABEL_25;
        Index = (System_Collections_Generic_Dictionary_object__object__o *)v18->fields.tag;
        if ( Index )
        {
          Index = (System_Collections_Generic_Dictionary_object__object__o *)System_String__Equals_62383952(
                                                                               (System_String_o *)Index,
                                                                               tag,
                                                                               0LL);
          if ( ((unsigned __int8)Index & 1) != 0 )
            return v18->fields.time;
          v16 = *(_QWORD *)&v15->max_length;
        }
      }
    }
  }
  return v13;
}


System_String_o *__fastcall BattleFBXComponent__get_CurrentAnimName(
        BattleFBXComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.currentAnimName;
}


float __fastcall BattleFBXComponent__get_CurrentAnimTime(BattleFBXComponent_o *this, const MethodInfo *method)
{
  return this->fields.currentAnimTime;
}


System_String_o *__fastcall BattleFBXComponent__get_CurrentCommonAnimName(
        BattleFBXComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.currentCommonAnimName;
}


UnityEngine_Transform_o *__fastcall BattleFBXComponent__get_RootTransform(
        BattleFBXComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.rootTransform;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleFBXComponent__inSetEvolutionLevel(
        BattleFBXComponent_o *this,
        UnityEngine_GameObject_o *gameObject,
        int32_t svtId,
        int32_t limitcount,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *v5; // x24
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
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
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  __int64 v42; // x1
  __int64 v43; // x1
  System_Collections_Generic_Dictionary_object__object__o *actorEffectDict; // x0
  const MethodInfo *v45; // x1
  System_Collections_Generic_List_object__o *v46; // x20
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  System_Collections_Generic_List_object__o *v49; // x20
  struct System_Collections_Generic_List_XWeaponTrail__o **p_componentsXWeaponTrail; // x26
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  struct System_Collections_Generic_List_Renderer__o *enableRendererList; // x8
  int32_t size; // w2
  int v55; // w9
  System_Object_array *ComponentsInChildren_object; // x0
  BattleFBXComponent___c_c *v57; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v58; // x25
  System_Func_object__bool__o *_9__57_0; // x20
  Il2CppObject *v60; // x21
  struct BattleFBXComponent___c_StaticFields *static_fields; // x0
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v64; // x20
  int32_t LimitImageIndex; // w27
  System_Collections_Generic_Dictionary_object__object__o *v66; // x19
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  __int64 v68; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v71; // x0
  __int64 v72; // x1
  __int64 v73; // x23
  __int64 v74; // x8
  __int64 v75; // x9
  int *v76; // x10
  __int64 v77; // x0
  __int64 v78; // x8
  __int64 v79; // x9
  int *v80; // x10
  __int64 v81; // x0
  UnityEngine_Object_o *v82; // x0
  __int64 v83; // x1
  UnityEngine_Component_o *v84; // x28
  __int64 v85; // x1
  System_String_o *name; // x20
  BattleFBXComponent_c *v87; // x0
  UnityEngine_GameObject_o *v88; // x0
  __int64 v89; // x1
  Il2CppObject *Component_object; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v92; // x1
  float v93; // s0
  float v94; // s1
  float v95; // s2
  System_String_o *v96; // x20
  __int64 v97; // x1
  System_String_o *v98; // x21
  BattleFBXComponent_c *v99; // x0
  __int64 v100; // x0
  __int64 v101; // x1
  Il2CppObject *v102; // x29
  System_String_o *v103; // x0
  __int64 v104; // x1
  int32_t v105; // w20
  System_String_o *v106; // x0
  __int64 v107; // x1
  System_String_o *v108; // x0
  __int64 v109; // x1
  System_String_o *v110; // x20
  int32_t v111; // w2
  __int64 v112; // x1
  System_String_array *v113; // x0
  __int64 v114; // x1
  __int64 v115; // x2
  System_String_array *v116; // x20
  __int64 v117; // x8
  unsigned __int64 v118; // x22
  System_String_o *v119; // x21
  bool v120; // w21
  UnityEngine_Object_o *PrefabNode; // x20
  __int64 v122; // x1
  System_String_o *v123; // x20
  BattleFBXComponent_c *v124; // x0
  const MethodInfo *v125; // x4
  __int64 v126; // x1
  System_String_o *v127; // x20
  BattleFBXComponent_c *v128; // x0
  UnityEngine_GameObject_o *v129; // x0
  __int64 v130; // x1
  Il2CppObject *v131; // x22
  _BOOL8 v132; // x0
  __int64 v133; // x1
  System_String_o *v134; // x0
  __int64 v135; // x1
  UnityEngine_Transform_o *v136; // x22
  UnityEngine_Transform_o *v137; // x0
  __int64 v138; // x1
  float v139; // s8
  UnityEngine_Transform_o *v140; // x0
  __int64 v141; // x1
  float y; // s9
  UnityEngine_Transform_o *v143; // x0
  __int64 v144; // x1
  __int64 v145; // x0
  __int64 v146; // x1
  int v147; // s2
  float v148; // s0
  float v149; // s1
  UnityEngine_Transform_o *v150; // x0
  __int64 v151; // x1
  _BOOL8 v152; // x0
  __int64 v153; // x1
  System_Object_array *ComponentsInChildren_object__50685372; // x0
  __int64 v155; // x1
  __int64 v156; // x2
  const MethodInfo *v157; // x3
  System_Object_array *v158; // x20
  __int64 v159; // x8
  unsigned __int64 v160; // x22
  System_Collections_Generic_List_object__o *v161; // x0
  Il2CppObject *v162; // x1
  struct System_Object_array *items; // x8
  _QWORD *v164; // x9
  __int64 v165; // x10
  Il2CppClass **v166; // x8
  Il2CppObject *v167; // x20
  UnityEngine_GameObject_o *v168; // x22
  __int64 v169; // x0
  __int64 v170; // x1
  __int64 v171; // x1
  int32_t v172; // w2
  const MethodInfo *v173; // x3
  System_Collections_Generic_List_object__o *monitor; // x0
  struct System_Object_array *v175; // x8
  _QWORD *v176; // x9
  __int64 v177; // x10
  Il2CppClass **v178; // x8
  __int64 v179; // x0
  __int64 v180; // x1
  __int64 v181; // x8
  __int64 v182; // x9
  int *v183; // x10
  __int64 v184; // x0
  __int64 v185; // x1
  __int64 v186; // x2
  const MethodInfo *v187; // x3
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *entries; // x8
  System_Collections_Generic_Dictionary_object__object__o *v189; // x20
  unsigned __int64 v190; // x19
  struct System_Int32_array *buckets; // x8
  _QWORD *v192; // x9
  __int64 entries_low; // x10
  __int64 v194; // x8
  const MethodInfo *v195; // x3
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *v196; // x8
  System_Collections_Generic_Dictionary_object__object__o *v197; // x20
  unsigned __int64 v198; // x19
  struct System_Int32_array *v199; // x8
  _QWORD *v200; // x9
  __int64 v201; // x10
  __int64 v202; // x8
  BattleFBXComponent___c_c *v203; // x0
  System_Func_object__bool__o *_9__57_1; // x19
  Il2CppObject *v205; // x20
  struct BattleFBXComponent___c_StaticFields *v206; // x0
  int32_t v207; // w2
  const MethodInfo *v208; // x3
  System_Collections_Generic_Dictionary_object__object__c *v209; // x8
  System_Collections_Generic_Dictionary_object__object__o *v210; // x19
  __int64 v211; // x9
  int *v212; // x10
  __int64 v213; // x0
  __int64 v214; // x1
  __int64 v215; // x19
  __int64 v216; // x8
  __int64 v217; // x9
  int *v218; // x10
  __int64 v219; // x0
  __int64 v220; // x8
  __int64 v221; // x9
  int *v222; // x10
  __int64 v223; // x0
  UnityEngine_Object_o *v224; // x0
  __int64 v225; // x1
  UnityEngine_Transform_o *v226; // x20
  __int64 v227; // x1
  System_String_o *v228; // x21
  BattleFBXComponent_c *v229; // x0
  struct System_String_o *enItemMarker; // x8
  System_String_o *v231; // x22
  UnityEngine_Transform_o *parent; // x21
  System_String_o *v233; // x0
  UnityEngine_Object_o *v234; // x21
  UnityEngine_GameObject_o *v235; // x0
  __int64 v236; // x1
  Il2CppObject *v237; // x0
  __int64 v238; // x1
  int32_t v239; // w2
  const MethodInfo *v240; // x3
  Il2CppObject *v241; // x20
  __int64 v242; // x8
  __int64 v243; // x9
  int *v244; // x10
  __int64 v245; // x0
  char v246; // [xsp+24h] [xbp-CCh]
  UnityEngine_Component_o *v249; // [xsp+30h] [xbp-C0h]
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v250; // [xsp+38h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o i; // [xsp+50h] [xbp-A0h] BYREF
  int32_t result; // [xsp+6Ch] [xbp-84h] BYREF
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4

  v5 = gameObject;
  if ( (byte_4B048BF & 1) == 0 )
  {
    sub_1BC3008(&BattleFBXComponent_TypeInfo, gameObject);
    sub_1BC3008(&Method_UnityEngine_Component_GetComponent_SkinnedMeshRenderer___, v7);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__GameObject__Clear__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__SkinnedMeshRenderer___ctor__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__SkinnedMeshRenderer__get_Values__, v10);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__SkinnedMeshRenderer__set_Item__, v11);
    sub_1BC3008(&System_Collections_Generic_Dictionary_string__SkinnedMeshRenderer__TypeInfo, v12);
    sub_1BC3008(&Method_System_Linq_Enumerable_Where_Transform___, v13);
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__SkinnedMeshRenderer__Dispose__,
      v14);
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__SkinnedMeshRenderer__MoveNext__,
      v15);
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__SkinnedMeshRenderer__get_Current__,
      v16);
    sub_1BC3008(&System_Func_Transform__bool__TypeInfo, v17);
    sub_1BC3008(&Method_UnityEngine_GameObject_AddComponent_LookAtTarget___, v18);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v19);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponentsInChildren_MeshRenderer___, v20);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystemRenderer___, v21);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponentsInChildren_Transform____76879552, v22);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponentsInChildren_XWeaponTrail___, v23);
    sub_1BC3008(&System_IDisposable_TypeInfo, v24);
    sub_1BC3008(&System_Collections_Generic_IEnumerable_Transform__TypeInfo, v25);
    sub_1BC3008(&System_Collections_Generic_IEnumerator_Transform__TypeInfo, v26);
    sub_1BC3008(&System_Collections_IEnumerator_TypeInfo, v27);
    sub_1BC3008(&Method_System_Collections_Generic_List_Renderer__Add__, v28);
    sub_1BC3008(&Method_System_Collections_Generic_List_XWeaponTrail__Add__, v29);
    sub_1BC3008(&Method_System_Collections_Generic_List_Renderer__Clear__, v30);
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject___ctor__, v31);
    sub_1BC3008(&Method_System_Collections_Generic_List_XWeaponTrail___ctor__, v32);
    sub_1BC3008(&System_Collections_Generic_List_XWeaponTrail__TypeInfo, v33);
    sub_1BC3008(&System_Collections_Generic_List_GameObject__TypeInfo, v34);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v35);
    sub_1BC3008(&ServantAssetLoadManager_TypeInfo, v36);
    sub_1BC3008(&Method_BattleFBXComponent___c__inSetEvolutionLevel_b__57_0__, v37);
    sub_1BC3008(&Method_BattleFBXComponent___c__inSetEvolutionLevel_b__57_1__, v38);
    sub_1BC3008(&BattleFBXComponent___c_TypeInfo, v39);
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_string__SkinnedMeshRenderer__GetEnumerator__,
      v40);
    sub_1BC3008(&StringLiteral_113/*" "*/, v41);
    sub_1BC3008(&StringLiteral_23367/*"spiral"*/, v42);
    sub_1BC3008(&StringLiteral_3083/*"Battle2D"*/, v43);
    byte_4B048BF = 1;
  }
  result = 0;
  memset(&i, 0, sizeof(i));
  actorEffectDict = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.actorEffectDict;
  if ( !actorEffectDict )
    goto LABEL_209;
  System_Collections_Generic_Dictionary_object__object___Clear(
    actorEffectDict,
    (const MethodInfo_336D170 *)Method_System_Collections_Generic_Dictionary_string__GameObject__Clear__);
  BattleFBXComponent__DestroyPrefabNode(this, v45);
  v46 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v46,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.PrefabNodes = (struct System_Collections_Generic_List_GameObject__o *)v46;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.PrefabNodes, (int32_t)v46, v47, v48);
  v49 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_XWeaponTrail__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v49,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_XWeaponTrail___ctor__);
  this->fields.componentsXWeaponTrail = (struct System_Collections_Generic_List_XWeaponTrail__o *)v49;
  p_componentsXWeaponTrail = &this->fields.componentsXWeaponTrail;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.componentsXWeaponTrail, (int32_t)v49, v51, v52);
  enableRendererList = this->fields.enableRendererList;
  if ( !enableRendererList )
    goto LABEL_209;
  size = enableRendererList->fields._size;
  v55 = enableRendererList->fields._version + 1;
  enableRendererList->fields._size = 0;
  enableRendererList->fields._version = v55;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)enableRendererList->fields._items, 0, size, 0LL);
  if ( !v5 )
    goto LABEL_209;
  ComponentsInChildren_object = UnityEngine_GameObject__GetComponentsInChildren_object_(
                                  v5,
                                  1,
                                  (const MethodInfo_3056638 *)Method_UnityEngine_GameObject_GetComponentsInChildren_Transform____76879552);
  v57 = BattleFBXComponent___c_TypeInfo;
  v58 = (System_Collections_Generic_IEnumerable_TSource__o *)ComponentsInChildren_object;
  if ( !BattleFBXComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFBXComponent___c_TypeInfo);
    v57 = BattleFBXComponent___c_TypeInfo;
  }
  _9__57_0 = (System_Func_object__bool__o *)v57->static_fields->__9__57_0;
  if ( !_9__57_0 )
  {
    if ( !v57->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v57);
      v57 = BattleFBXComponent___c_TypeInfo;
    }
    v60 = (Il2CppObject *)v57->static_fields->__9;
    _9__57_0 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_Transform__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__57_0, v60, Method_BattleFBXComponent___c__inSetEvolutionLevel_b__57_0__, 0LL);
    static_fields = BattleFBXComponent___c_TypeInfo->static_fields;
    static_fields->__9__57_0 = (struct System_Func_Transform__bool__o *)_9__57_0;
    sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__57_0, (int32_t)_9__57_0, v62, v63);
  }
  v64 = System_Linq_Enumerable__Where_object_(
          v58,
          (System_Func_TSource__bool__o *)_9__57_0,
          (const MethodInfo_3044F10 *)Method_System_Linq_Enumerable_Where_Transform___);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  LimitImageIndex = ServantAssetLoadManager__GetLimitImageIndex(svtId, limitcount, 1, 0LL);
  v66 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BC3254(System_Collections_Generic_Dictionary_string__SkinnedMeshRenderer__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v66,
    (const MethodInfo_336C638 *)Method_System_Collections_Generic_Dictionary_string__SkinnedMeshRenderer___ctor__);
  if ( !v64 )
    goto LABEL_209;
  klass = v64->klass;
  v249 = (UnityEngine_Component_o *)this;
  v68 = *(unsigned __int16 *)(&v64->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v64->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_Transform__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_Transform__TypeInfo )
    {
      --v68;
      p_offset += 4;
      if ( !v68 )
        goto LABEL_21;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_21:
    p_method = sub_1C13570(v64, System_Collections_Generic_IEnumerable_Transform__TypeInfo, 0LL);
  }
  v71 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
          v64,
          *(_QWORD *)(p_method + 8));
  v73 = v71;
  v246 = 1;
  while ( 1 )
  {
    if ( !v73 )
      sub_1BC3264(v71, v72);
    v74 = *(_QWORD *)v73;
    v75 = *(unsigned __int16 *)(*(_QWORD *)v73 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v73 + 302LL) )
    {
      v76 = (int *)(*(_QWORD *)(v74 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v76 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v75;
        v76 += 4;
        if ( !v75 )
          goto LABEL_29;
      }
      v77 = v74 + 16LL * *v76 + 312;
    }
    else
    {
LABEL_29:
      v77 = sub_1C13570(v73, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v77)(v73, *(_QWORD *)(v77 + 8)) & 1) == 0 )
      break;
    v78 = *(_QWORD *)v73;
    v79 = *(unsigned __int16 *)(*(_QWORD *)v73 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v73 + 302LL) )
    {
      v80 = (int *)(*(_QWORD *)(v78 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_Transform__c **)v80 - 1) != System_Collections_Generic_IEnumerator_Transform__TypeInfo )
      {
        --v79;
        v80 += 4;
        if ( !v79 )
          goto LABEL_36;
      }
      v81 = v78 + 16LL * *v80 + 312;
    }
    else
    {
LABEL_36:
      v81 = sub_1C13570(v73, System_Collections_Generic_IEnumerator_Transform__TypeInfo, 0LL);
    }
    v82 = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v81)(v73, *(_QWORD *)(v81 + 8));
    v84 = (UnityEngine_Component_o *)v82;
    if ( !v82 )
      sub_1BC3264(0LL, v83);
    name = UnityEngine_Object__get_name(v82, 0LL);
    v87 = BattleFBXComponent_TypeInfo;
    if ( !BattleFBXComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
    if ( !name )
      sub_1BC3264(v87, v85);
    if ( System_String__StartsWith(name, BattleFBXComponent_TypeInfo->static_fields->sideflipMarker, 0LL) )
    {
      v88 = UnityEngine_Component__get_gameObject(v249, 0LL);
      if ( !v88 )
        sub_1BC3264(0LL, v89);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           v88,
                           (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v71 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
      if ( (v71 & 1) != 0 )
      {
        transform = UnityEngine_Component__get_transform(v84, 0LL);
        if ( !Component_object )
          sub_1BC3264(transform, v92);
        if ( !transform )
          sub_1BC3264(0LL, v92);
        if ( LOBYTE(Component_object[33].monitor) )
          v93 = -1.0;
        else
          v93 = 1.0;
        v94 = 1.0;
        v95 = 1.0;
        UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v93, 0LL);
      }
    }
    else
    {
      v96 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v84, 0LL);
      v98 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v84, 0LL);
      v99 = BattleFBXComponent_TypeInfo;
      if ( !BattleFBXComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
      if ( !v98 )
        sub_1BC3264(v99, v97);
      v100 = System_String__IndexOf_62407024(v98, BattleFBXComponent_TypeInfo->static_fields->levelMarker, 0LL);
      if ( !v96 )
        sub_1BC3264(v100, v101);
      v102 = (Il2CppObject *)System_String__Substring_62394572(v96, 0, v100, 0LL);
      v103 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v84, 0LL);
      if ( !v103 )
        sub_1BC3264(0LL, v104);
      v105 = System_String__IndexOf_62407024(v103, BattleFBXComponent_TypeInfo->static_fields->levelMarker, 0LL);
      v106 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v84, 0LL);
      if ( !v106 )
        sub_1BC3264(0LL, v107);
      v108 = System_String__Substring(v106, v105 + 7, 0LL);
      v110 = v108;
      if ( !v108 )
        sub_1BC3264(0LL, v109);
      if ( (System_String__IndexOf_62407024(v108, (System_String_o *)StringLiteral_113/*" "*/, 0LL) & 0x80000000) == 0 )
      {
        v111 = System_String__IndexOf_62407024(v110, (System_String_o *)StringLiteral_113/*" "*/, 0LL);
        v110 = System_String__Substring_62394572(v110, 0, v111, 0LL);
        if ( !v110 )
          sub_1BC3264(0LL, v112);
      }
      v113 = System_String__Split(v110, 0x5Fu, 0, 0LL);
      v116 = v113;
      if ( !v113 )
        sub_1BC3264(0LL, v114);
      v117 = *(_QWORD *)&v113->max_length;
      if ( (int)v117 < 1 )
      {
LABEL_69:
        v120 = 0;
        PrefabNode = 0LL;
      }
      else
      {
        v118 = 0LL;
        while ( 1 )
        {
          if ( v118 >= (unsigned int)v117 )
            sub_1BC326C(v113, v114, v115);
          v119 = v116->m_Items[v118];
          result = 99;
          v113 = (System_String_array *)System_Int32__TryParse(v119, &result, 0LL);
          if ( ((unsigned __int8)v113 & 1) != 0 )
          {
            v113 = (System_String_array *)System_Int32__Parse(v119, 0LL);
            if ( (_DWORD)v113 == LimitImageIndex )
              break;
          }
          LODWORD(v117) = v116->max_length;
          if ( (__int64)++v118 >= (int)v117 )
            goto LABEL_69;
        }
        v123 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v84, 0LL);
        v124 = BattleFBXComponent_TypeInfo;
        if ( !BattleFBXComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
        if ( !v123 )
          sub_1BC3264(v124, v122);
        if ( System_String__StartsWith(v123, BattleFBXComponent_TypeInfo->static_fields->prefabMarker, 0LL) )
          goto LABEL_78;
        v127 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v84, 0LL);
        v128 = BattleFBXComponent_TypeInfo;
        if ( !BattleFBXComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
        if ( !v127 )
          sub_1BC3264(v128, v126);
        if ( System_String__StartsWith(v127, BattleFBXComponent_TypeInfo->static_fields->chrnodeMarker, 0LL) )
LABEL_78:
          PrefabNode = (UnityEngine_Object_o *)BattleFBXComponent__CreatePrefabNode(
                                                 (BattleFBXComponent_o *)v249,
                                                 (UnityEngine_Transform_o *)v84,
                                                 svtId,
                                                 limitcount,
                                                 v125);
        else
          PrefabNode = 0LL;
        v120 = 1;
      }
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(PrefabNode, 0LL, 0LL) )
      {
        v129 = UnityEngine_Component__get_gameObject(v249, 0LL);
        if ( !v129 )
          sub_1BC3264(0LL, v130);
        v131 = UnityEngine_GameObject__GetComponent_object_(
                 v129,
                 (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v132 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v131, 0LL, 0LL);
        if ( v132 )
        {
          if ( !v131 )
            sub_1BC3264(v132, v133);
          if ( LOBYTE(v131[33].monitor) )
          {
            if ( !PrefabNode )
              sub_1BC3264(v132, v133);
            v134 = UnityEngine_Object__get_name(PrefabNode, 0LL);
            if ( !v134 )
              sub_1BC3264(0LL, v135);
            if ( (System_String__IndexOf_62407024(v134, (System_String_o *)StringLiteral_23367/*"spiral"*/, 0LL) & 0x80000000) == 0 )
            {
              v136 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)PrefabNode, 0LL);
              v137 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)PrefabNode, 0LL);
              if ( !v137 )
                sub_1BC3264(0LL, v138);
              LODWORD(v139) = (unsigned int)UnityEngine_Transform__get_localScale(v137, 0LL);
              v140 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)PrefabNode, 0LL);
              if ( !v140 )
                sub_1BC3264(0LL, v141);
              localScale = UnityEngine_Transform__get_localScale(v140, 0LL);
              y = localScale.fields.y;
              v143 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)PrefabNode, 0LL);
              if ( !v143 )
                sub_1BC3264(0LL, v144);
              *(UnityEngine_Vector3_o *)(&v147 - 2) = UnityEngine_Transform__get_localScale(v143, 0LL);
              if ( !v136 )
                sub_1BC3264(v145, v146);
              v148 = -v139;
              v149 = y;
              UnityEngine_Transform__set_localScale(v136, *(UnityEngine_Vector3_o *)(&v147 - 2), 0LL);
              v150 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)PrefabNode, 0LL);
              if ( !v150 )
                sub_1BC3264(0LL, v151);
              UnityEngine_Transform__Rotate_70058976(v150, 0.0, 180.0, 0.0, 0LL);
            }
          }
        }
      }
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v152 = UnityEngine_Object__op_Inequality(PrefabNode, 0LL, 0LL);
      if ( v152 )
      {
        if ( !PrefabNode )
          sub_1BC3264(v152, v153);
        ComponentsInChildren_object__50685372 = UnityEngine_GameObject__GetComponentsInChildren_object__50685372(
                                                  (UnityEngine_GameObject_o *)PrefabNode,
                                                  (const MethodInfo_30565BC *)Method_UnityEngine_GameObject_GetComponentsInChildren_XWeaponTrail___);
        v158 = ComponentsInChildren_object__50685372;
        if ( !ComponentsInChildren_object__50685372 )
          sub_1BC3264(0LL, v155);
        v159 = *(_QWORD *)&ComponentsInChildren_object__50685372->max_length;
        if ( (int)v159 >= 1 )
        {
          v160 = 0LL;
          do
          {
            if ( v160 >= (unsigned int)v159 )
              sub_1BC326C(ComponentsInChildren_object__50685372, v155, v156);
            v161 = (System_Collections_Generic_List_object__o *)*p_componentsXWeaponTrail;
            if ( !*p_componentsXWeaponTrail )
              sub_1BC3264(0LL, v155);
            v162 = v158->m_Items[v160];
            items = v161->fields._items;
            v164 = Method_System_Collections_Generic_List_XWeaponTrail__Add__;
            ++v161->fields._version;
            if ( !items )
              sub_1BC3264(v161, v162);
            v165 = v161->fields._size;
            if ( (unsigned int)v165 >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v161,
                v162,
                *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v164[4] + 192LL) + 112LL));
            }
            else
            {
              v166 = &items->obj.klass + v165;
              v161->fields._size = v165 + 1;
              v166[4] = (Il2CppClass *)v162;
              sub_1BC2FAC((CGThumbnailListItem_o *)(v166 + 4), (int32_t)v162, v156, v157);
            }
            LODWORD(v159) = v158->max_length;
            ++v160;
          }
          while ( (__int64)v160 < (int)v159 );
        }
      }
      v167 = UnityEngine_Component__GetComponent_object_(
               v84,
               (const MethodInfo_2FF8634 *)Method_UnityEngine_Component_GetComponent_SkinnedMeshRenderer___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v71 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v167, 0LL, 0LL);
      if ( (v71 & 1) != 0 )
      {
        v168 = UnityEngine_Component__get_gameObject(v84, 0LL);
        v169 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_3083/*"Battle2D"*/, 0LL);
        if ( !v168 )
          sub_1BC3264(v169, (unsigned int)v169);
        UnityEngine_GameObject__set_layer(v168, v169, 0LL);
        if ( !v66 )
          sub_1BC3264(0LL, v170);
        System_Collections_Generic_Dictionary_object__object___set_Item(
          v66,
          v102,
          v167,
          (const MethodInfo_336CFD4 *)Method_System_Collections_Generic_Dictionary_string__SkinnedMeshRenderer__set_Item__);
        monitor = (System_Collections_Generic_List_object__o *)v249[6].monitor;
        if ( !monitor )
          sub_1BC3264(0LL, v171);
        v175 = monitor->fields._items;
        v176 = Method_System_Collections_Generic_List_Renderer__Add__;
        ++monitor->fields._version;
        if ( !v175 )
          sub_1BC3264(monitor, v171);
        v177 = monitor->fields._size;
        if ( (unsigned int)v177 >= v175->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            monitor,
            v167,
            *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v176[4] + 192LL) + 112LL));
        }
        else
        {
          v178 = &v175->obj.klass + v177;
          monitor->fields._size = v177 + 1;
          v178[4] = (Il2CppClass *)v167;
          sub_1BC2FAC((CGThumbnailListItem_o *)(v178 + 4), (int32_t)v167, v172, v173);
        }
        if ( !v167 )
          sub_1BC3264(v179, v180);
        UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)v167, v120, 0LL);
        v246 &= !v120;
      }
    }
  }
  v181 = *(_QWORD *)v73;
  v182 = *(unsigned __int16 *)(*(_QWORD *)v73 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v73 + 302LL) )
  {
    v183 = (int *)(*(_QWORD *)(v181 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v183 - 1) != System_IDisposable_TypeInfo )
    {
      --v182;
      v183 += 4;
      if ( !v182 )
        goto LABEL_129;
    }
    v184 = v181 + 16LL * *v183 + 312;
  }
  else
  {
LABEL_129:
    v184 = sub_1C13570(v73, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v184)(v73, *(_QWORD *)(v184 + 8));
  if ( (v246 & 1) != 0 )
  {
    actorEffectDict = v66;
    if ( !v66 )
      goto LABEL_209;
    actorEffectDict = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                   v66,
                                                                                   (const MethodInfo_336CE18 *)Method_System_Collections_Generic_Dictionary_string__SkinnedMeshRenderer__get_Values__);
    if ( !actorEffectDict )
      goto LABEL_209;
    System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
      &v250,
      (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)actorEffectDict,
      (const MethodInfo_39D37E4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__SkinnedMeshRenderer__GetEnumerator__);
    for ( i = v250;
          System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &i,
            (const MethodInfo_34691A4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__SkinnedMeshRenderer__MoveNext__);
          UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)i.fields._currentValue, 1, 0LL) )
    {
      if ( !i.fields._currentValue )
        sub_1BC3264(0LL, v185);
    }
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
      &i,
      (const MethodInfo_34691A0 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__SkinnedMeshRenderer__Dispose__);
  }
  actorEffectDict = (System_Collections_Generic_Dictionary_object__object__o *)UnityEngine_GameObject__GetComponentsInChildren_object__50685372(
                                                                                 v5,
                                                                                 (const MethodInfo_30565BC *)Method_UnityEngine_GameObject_GetComponentsInChildren_MeshRenderer___);
  if ( !actorEffectDict )
    goto LABEL_209;
  entries = actorEffectDict->fields._entries;
  v189 = actorEffectDict;
  if ( (int)entries >= 1 )
  {
    v190 = 0LL;
    while ( v190 < (unsigned int)entries )
    {
      actorEffectDict = (System_Collections_Generic_Dictionary_object__object__o *)v249[6].monitor;
      if ( !actorEffectDict )
        goto LABEL_209;
      gameObject = (UnityEngine_GameObject_o *)*((_QWORD *)&v189->fields._count + v190);
      buckets = actorEffectDict->fields._buckets;
      v192 = Method_System_Collections_Generic_List_Renderer__Add__;
      ++HIDWORD(actorEffectDict->fields._entries);
      if ( !buckets )
        goto LABEL_209;
      entries_low = SLODWORD(actorEffectDict->fields._entries);
      if ( (unsigned int)entries_low >= buckets->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)actorEffectDict,
          (Il2CppObject *)gameObject,
          *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v192[4] + 192LL) + 112LL));
      }
      else
      {
        v194 = (__int64)buckets + 8 * entries_low;
        LODWORD(actorEffectDict->fields._entries) = entries_low + 1;
        *(_QWORD *)(v194 + 32) = gameObject;
        sub_1BC2FAC((CGThumbnailListItem_o *)(v194 + 32), (int32_t)gameObject, v186, v187);
      }
      LODWORD(entries) = v189->fields._entries;
      if ( (__int64)++v190 >= (int)entries )
        goto LABEL_149;
    }
LABEL_213:
    sub_1BC326C(actorEffectDict, gameObject, v186);
  }
LABEL_149:
  actorEffectDict = (System_Collections_Generic_Dictionary_object__object__o *)UnityEngine_GameObject__GetComponentsInChildren_object__50685372(
                                                                                 v5,
                                                                                 (const MethodInfo_30565BC *)Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystemRenderer___);
  if ( !actorEffectDict )
    goto LABEL_209;
  v196 = actorEffectDict->fields._entries;
  v197 = actorEffectDict;
  if ( (int)v196 >= 1 )
  {
    v198 = 0LL;
    while ( v198 < (unsigned int)v196 )
    {
      actorEffectDict = (System_Collections_Generic_Dictionary_object__object__o *)v249[6].monitor;
      if ( !actorEffectDict )
        goto LABEL_209;
      gameObject = (UnityEngine_GameObject_o *)*((_QWORD *)&v197->fields._count + v198);
      v199 = actorEffectDict->fields._buckets;
      v200 = Method_System_Collections_Generic_List_Renderer__Add__;
      ++HIDWORD(actorEffectDict->fields._entries);
      if ( !v199 )
        goto LABEL_209;
      v201 = SLODWORD(actorEffectDict->fields._entries);
      if ( (unsigned int)v201 >= v199->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)actorEffectDict,
          (Il2CppObject *)gameObject,
          *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v200[4] + 192LL) + 112LL));
      }
      else
      {
        v202 = (__int64)v199 + 8 * v201;
        LODWORD(actorEffectDict->fields._entries) = v201 + 1;
        *(_QWORD *)(v202 + 32) = gameObject;
        sub_1BC2FAC((CGThumbnailListItem_o *)(v202 + 32), (int32_t)gameObject, v186, v195);
      }
      LODWORD(v196) = v197->fields._entries;
      if ( (__int64)++v198 >= (int)v196 )
        goto LABEL_159;
    }
    goto LABEL_213;
  }
LABEL_159:
  v203 = BattleFBXComponent___c_TypeInfo;
  if ( !BattleFBXComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFBXComponent___c_TypeInfo);
    v203 = BattleFBXComponent___c_TypeInfo;
  }
  _9__57_1 = (System_Func_object__bool__o *)v203->static_fields->__9__57_1;
  if ( !_9__57_1 )
  {
    if ( !v203->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v203);
      v203 = BattleFBXComponent___c_TypeInfo;
    }
    v205 = (Il2CppObject *)v203->static_fields->__9;
    _9__57_1 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_Transform__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__57_1, v205, Method_BattleFBXComponent___c__inSetEvolutionLevel_b__57_1__, 0LL);
    v206 = BattleFBXComponent___c_TypeInfo->static_fields;
    v206->__9__57_1 = (struct System_Func_Transform__bool__o *)_9__57_1;
    sub_1BC2FAC((CGThumbnailListItem_o *)&v206->__9__57_1, (int32_t)_9__57_1, v207, v208);
  }
  actorEffectDict = (System_Collections_Generic_Dictionary_object__object__o *)System_Linq_Enumerable__Where_object_(
                                                                                 v58,
                                                                                 (System_Func_TSource__bool__o *)_9__57_1,
                                                                                 (const MethodInfo_3044F10 *)Method_System_Linq_Enumerable_Where_Transform___);
  if ( !actorEffectDict )
LABEL_209:
    sub_1BC3264(actorEffectDict, gameObject);
  v209 = actorEffectDict->klass;
  v210 = actorEffectDict;
  v211 = *(unsigned __int16 *)(&actorEffectDict->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&actorEffectDict->klass->_2.bitflags2 + 3) )
  {
    v212 = &v209->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_Transform__c **)v212 - 1) != System_Collections_Generic_IEnumerable_Transform__TypeInfo )
    {
      --v211;
      v212 += 4;
      if ( !v211 )
        goto LABEL_170;
    }
    v213 = (__int64)(&v209->vtable._0_Equals.method + 2 * *v212);
  }
  else
  {
LABEL_170:
    v213 = sub_1C13570(actorEffectDict, System_Collections_Generic_IEnumerable_Transform__TypeInfo, 0LL);
  }
  v215 = (*(__int64 (__fastcall **)(System_Collections_Generic_Dictionary_object__object__o *, _QWORD))v213)(
           v210,
           *(_QWORD *)(v213 + 8));
  if ( !v215 )
    sub_1BC3264(0LL, v214);
  while ( 1 )
  {
    v216 = *(_QWORD *)v215;
    v217 = *(unsigned __int16 *)(*(_QWORD *)v215 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v215 + 302LL) )
    {
      v218 = (int *)(*(_QWORD *)(v216 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v218 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v217;
        v218 += 4;
        if ( !v217 )
          goto LABEL_177;
      }
      v219 = v216 + 16LL * *v218 + 312;
    }
    else
    {
LABEL_177:
      v219 = sub_1C13570(v215, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v219)(v215, *(_QWORD *)(v219 + 8)) & 1) == 0 )
      break;
    v220 = *(_QWORD *)v215;
    v221 = *(unsigned __int16 *)(*(_QWORD *)v215 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v215 + 302LL) )
    {
      v222 = (int *)(*(_QWORD *)(v220 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_Transform__c **)v222 - 1) != System_Collections_Generic_IEnumerator_Transform__TypeInfo )
      {
        --v221;
        v222 += 4;
        if ( !v221 )
          goto LABEL_184;
      }
      v223 = v220 + 16LL * *v222 + 312;
    }
    else
    {
LABEL_184:
      v223 = sub_1C13570(v215, System_Collections_Generic_IEnumerator_Transform__TypeInfo, 0LL);
    }
    v224 = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v223)(v215, *(_QWORD *)(v223 + 8));
    v226 = (UnityEngine_Transform_o *)v224;
    if ( !v224 )
      sub_1BC3264(0LL, v225);
    v228 = UnityEngine_Object__get_name(v224, 0LL);
    v229 = BattleFBXComponent_TypeInfo;
    if ( !BattleFBXComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
      v229 = BattleFBXComponent_TypeInfo;
    }
    enItemMarker = v229->static_fields->enItemMarker;
    if ( !enItemMarker )
      sub_1BC3264(v229, v227);
    if ( !v228 )
      sub_1BC3264(v229, v227);
    v231 = System_String__Substring(v228, enItemMarker->fields._stringLength, 0LL);
    parent = UnityEngine_Transform__get_parent(v226, 0LL);
    v233 = System_String__Concat_62348648(BattleFBXComponent_TypeInfo->static_fields->enWeaponMarker, v231, 0LL);
    if ( !parent )
      sub_1BC3264(v233, v233);
    v234 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(parent, v233, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v234, 0LL, 0LL) )
    {
      v235 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v226, 0LL);
      if ( !v235 )
        sub_1BC3264(0LL, v236);
      v237 = UnityEngine_GameObject__AddComponent_object_(
               v235,
               (const MethodInfo_30558B0 *)Method_UnityEngine_GameObject_AddComponent_LookAtTarget___);
      v241 = v237;
      if ( !v237 )
        sub_1BC3264(0LL, v238);
      v237[2].monitor = v234;
      sub_1BC2FAC((CGThumbnailListItem_o *)&v237[2].monitor, (int32_t)v234, v239, v240);
      LODWORD(v241[3].klass) = 1120403456;
    }
  }
  v242 = *(_QWORD *)v215;
  v243 = *(unsigned __int16 *)(*(_QWORD *)v215 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v215 + 302LL) )
  {
    v244 = (int *)(*(_QWORD *)(v242 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v244 - 1) != System_IDisposable_TypeInfo )
    {
      --v243;
      v244 += 4;
      if ( !v243 )
        goto LABEL_202;
    }
    v245 = v242 + 16LL * *v244 + 312;
  }
  else
  {
LABEL_202:
    v245 = sub_1C13570(v215, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v245)(v215, *(_QWORD *)(v245 + 8));
}


void __fastcall BattleFBXComponent__loadAnimationEvents(
        BattleFBXComponent_o *this,
        UnityEngine_TextAsset_o *data,
        int32_t svtId,
        int32_t level,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
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
  __int64 v23; // x1
  struct BattleFBXComponent_AnimEvent_array_array *v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32_t LimitImageIndex; // w21
  __int64 Instance; // x0
  __int64 v29; // x1
  System_String_o *text; // x22
  __int64 v31; // x2
  int v32; // w8
  int v33; // w8
  __int64 v34; // x22
  BattleFBXComponent_c **v35; // x28
  unsigned int v36; // w29
  System_String_o *v37; // x23
  __int64 v38; // x8
  __int64 v39; // x23
  System_String_o *v40; // x25
  int32_t v41; // w26
  System_String_o *v42; // x27
  BattleFBXComponent_c *v43; // x0
  int32_t v44; // w0
  int32_t Index; // w24
  int32_t v46; // w20
  System_Collections_Generic_List_object__o *v47; // x25
  struct BattleFBXComponent_AnimEvent_array_array *v48; // x21
  __int64 v49; // x19
  int v50; // w8
  int v51; // w26
  float v52; // s0
  float v53; // s8
  unsigned int v54; // w9
  int v55; // w21
  BattleFBXComponent_c **v56; // x19
  __int64 v57; // x28
  __int64 v58; // x27
  float v59; // s9
  __int64 v60; // x26
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  int32_t v63; // w2
  const MethodInfo *v64; // x3
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  struct System_Object_array *items; // x8
  _QWORD *v68; // x9
  __int64 size; // x10
  Il2CppClass **v70; // x0
  const MethodInfo *v71; // x3
  __int64 v72; // x23
  Il2CppClass **v73; // x0
  __int64 v74; // x0
  BattleFBXComponent_o *v75; // [xsp+8h] [xbp-88h]
  struct BattleFBXComponent_AnimEvent_array_array **p_eventlist; // [xsp+10h] [xbp-80h]
  Il2CppObject *entity; // [xsp+18h] [xbp-78h] BYREF

  if ( (byte_4B048CC & 1) == 0 )
  {
    sub_1BC3008(&BattleFBXComponent_AnimEvent_____TypeInfo, data);
    sub_1BC3008(&BattleFBXComponent_AnimEvent_TypeInfo, v9);
    sub_1BC3008(&AnimationList_TypeInfo, v10);
    sub_1BC3008(&BattleFBXComponent_TypeInfo, v11);
    sub_1BC3008(&char___TypeInfo, v12);
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantMaster___, v13);
    sub_1BC3008(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v14);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__, v15);
    sub_1BC3008(&Method_System_Collections_Generic_List_BattleFBXComponent_AnimEvent__Add__, v16);
    sub_1BC3008(&Method_System_Collections_Generic_List_BattleFBXComponent_AnimEvent__ToArray__, v17);
    sub_1BC3008(&Method_System_Collections_Generic_List_BattleFBXComponent_AnimEvent___ctor__, v18);
    sub_1BC3008(&System_Collections_Generic_List_BattleFBXComponent_AnimEvent__TypeInfo, v19);
    sub_1BC3008(&ServantAssetLoadManager_TypeInfo, v20);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_1BC3008(&StringLiteral_368/*"#"*/, v22);
    sub_1BC3008(&StringLiteral_806/*","*/, v23);
    byte_4B048CC = 1;
  }
  entity = 0LL;
  BattleFBXComponent__InitAnimNameDict(this, (const MethodInfo *)data);
  v24 = (struct BattleFBXComponent_AnimEvent_array_array *)sub_1BC30B0(BattleFBXComponent_AnimEvent_____TypeInfo, 106LL);
  this->fields.eventlist = v24;
  p_eventlist = &this->fields.eventlist;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.eventlist, (int32_t)v24, v25, v26);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  LimitImageIndex = ServantAssetLoadManager__GetLimitImageIndex(svtId, level, 1, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_71;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_71;
  Instance = DataMasterBase_object__object__int___TryGetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               &entity,
               svtId,
               (const MethodInfo_32AF0BC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
  if ( (Instance & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_71;
    if ( HIDWORD(entity[5].klass) == 4 )
      LimitImageIndex = 1;
  }
  if ( !data )
    goto LABEL_71;
  text = UnityEngine_TextAsset__get_text(data, 0LL);
  Instance = sub_1BC30B0(char___TypeInfo, 2LL);
  if ( !Instance )
    goto LABEL_71;
  v32 = *(_DWORD *)(Instance + 24);
  v29 = Instance;
  if ( !v32 )
    goto LABEL_72;
  *(_WORD *)(Instance + 32) = 13;
  if ( v32 == 1 )
    goto LABEL_72;
  *(_WORD *)(Instance + 34) = 10;
  if ( !text
    || (v75 = this, (Instance = (__int64)System_String__Split_62397724(text, (System_Char_array *)Instance, 0LL)) == 0) )
  {
LABEL_71:
    sub_1BC3264(Instance, v29);
  }
  v33 = *(_DWORD *)(Instance + 24);
  v34 = Instance;
  if ( v33 >= 1 )
  {
    v35 = &BattleFBXComponent_TypeInfo;
    v36 = 0;
    while ( v36 < v33 )
    {
      Instance = (__int64)StringLiteral_806/*","*/;
      if ( !StringLiteral_806/*","*/ )
        goto LABEL_71;
      v37 = *(System_String_o **)(v34 + 8LL * (int)v36 + 32);
      Instance = System_String__get_Chars((System_String_o *)StringLiteral_806/*","*/, 0, 0LL);
      if ( !v37 )
        goto LABEL_71;
      Instance = (__int64)System_String__Split(v37, Instance, 0, 0LL);
      if ( !Instance )
        goto LABEL_71;
      v38 = *(_QWORD *)(Instance + 24);
      v39 = Instance;
      if ( v38 )
      {
        if ( !(_DWORD)v38 )
          break;
        Instance = *(_QWORD *)(Instance + 32);
        if ( !Instance )
          goto LABEL_71;
        Instance = System_String__StartsWith((System_String_o *)Instance, (System_String_o *)StringLiteral_368/*"#"*/, 0LL);
        if ( (Instance & 1) == 0 && *(int *)(v39 + 24) >= 6 )
        {
          Instance = System_Int32__Parse(*(System_String_o **)(v39 + 32), 0LL);
          if ( *(_DWORD *)(v39 + 24) <= 1u )
            break;
          if ( (_DWORD)Instance == LimitImageIndex )
          {
            Instance = (__int64)*v35;
            v40 = *(System_String_o **)(v39 + 40);
            if ( !(*v35)->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(Instance);
            if ( !v40 )
              goto LABEL_71;
            v41 = System_String__IndexOf_62407024(v40, (*v35)->static_fields->levelMarker, 0LL);
            v42 = v40;
            if ( (v41 & 0x80000000) == 0 )
            {
              v43 = *v35;
              if ( !(*v35)->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v43);
                v43 = *v35;
              }
              v44 = System_String__IndexOf_62407024(v40, v43->static_fields->levelMarker, 0LL);
              v42 = System_String__Substring_62394572(v40, 0, v44, 0LL);
            }
            if ( !AnimationList_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AnimationList_TypeInfo);
            Index = AnimationList__getIndex(v42, 0LL);
            if ( (v41 & 0x80000000) == 0 )
            {
              Instance = (__int64)v75->fields.RealAnimNames;
              if ( !Instance )
                goto LABEL_71;
              System_Collections_Generic_Dictionary_object__object___set_Item(
                (System_Collections_Generic_Dictionary_object__object__o *)Instance,
                (Il2CppObject *)v42,
                (Il2CppObject *)v40,
                (const MethodInfo_336CFD4 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
              Instance = (__int64)v75->fields.CommonAnimNames;
              if ( !Instance )
                goto LABEL_71;
              System_Collections_Generic_Dictionary_object__object___set_Item(
                (System_Collections_Generic_Dictionary_object__object__o *)Instance,
                (Il2CppObject *)v40,
                (Il2CppObject *)v42,
                (const MethodInfo_336CFD4 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
            }
            v46 = LimitImageIndex;
            v47 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_BattleFBXComponent_AnimEvent__TypeInfo);
            System_Collections_Generic_List_object____ctor(
              v47,
              (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_BattleFBXComponent_AnimEvent___ctor__);
            v48 = *p_eventlist;
            if ( !*p_eventlist )
              goto LABEL_71;
            if ( Index >= v48->max_length )
              break;
            v49 = Index;
            if ( !v48->m_Items[Index] )
            {
              v50 = *(_DWORD *)(v39 + 24);
              if ( v50 >= 3 )
              {
                v51 = 2;
                do
                {
                  if ( v51 >= (unsigned int)v50 )
                    goto LABEL_72;
                  Instance = *(_QWORD *)(v39 + 8LL * v51 + 32);
                  if ( !Instance )
                    goto LABEL_71;
                  if ( !*(_DWORD *)(Instance + 16) )
                    break;
                  v52 = System_Single__Parse((System_String_o *)Instance, 0LL);
                  Instance = (__int64)*v35;
                  v53 = v52;
                  if ( !(*v35)->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(Instance);
                    Instance = (__int64)*v35;
                  }
                  v54 = *(_DWORD *)(v39 + 24);
                  if ( v51 + 1 >= v54 )
                    goto LABEL_72;
                  v55 = v51 + 2;
                  if ( v51 + 2 >= v54 )
                    goto LABEL_72;
                  v56 = v35;
                  v57 = *(_QWORD *)(v39 + 8LL * (v51 + 1) + 32);
                  v58 = *(_QWORD *)(v39 + 8LL * (v51 + 2) + 32);
                  v59 = *(float *)(*(_QWORD *)(Instance + 184) + 4LL);
                  v60 = sub_1BC3254(BattleFBXComponent_AnimEvent_TypeInfo);
                  System_Object___ctor((Il2CppObject *)v60, 0LL);
                  if ( !v60 )
                    goto LABEL_71;
                  *(float *)(v60 + 16) = v53 / v59;
                  *(_QWORD *)(v60 + 24) = v57;
                  sub_1BC2FAC((CGThumbnailListItem_o *)(v60 + 24), v57, v61, v62);
                  *(_QWORD *)(v60 + 32) = v58;
                  sub_1BC2FAC((CGThumbnailListItem_o *)(v60 + 32), v58, v63, v64);
                  if ( !v47 )
                    goto LABEL_71;
                  items = v47->fields._items;
                  v68 = Method_System_Collections_Generic_List_BattleFBXComponent_AnimEvent__Add__;
                  ++v47->fields._version;
                  if ( !items )
                    goto LABEL_71;
                  size = v47->fields._size;
                  v35 = v56;
                  if ( (unsigned int)size >= items->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v47,
                      (Il2CppObject *)v60,
                      *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v70 = &items->obj.klass + size;
                    v47->fields._size = size + 1;
                    v70[4] = (Il2CppClass *)v60;
                    sub_1BC2FAC((CGThumbnailListItem_o *)(v70 + 4), v60, v65, v66);
                  }
                  v50 = *(_DWORD *)(v39 + 24);
                  v51 = v55 + 1;
                }
                while ( v55 + 1 < v50 );
                v49 = Index;
                v48 = *p_eventlist;
              }
            }
            if ( !v47 )
              goto LABEL_71;
            Instance = (__int64)System_Collections_Generic_List_object___ToArray(
                                  v47,
                                  (const MethodInfo_36A2998 *)Method_System_Collections_Generic_List_BattleFBXComponent_AnimEvent__ToArray__);
            if ( !v48 )
              goto LABEL_71;
            v72 = Instance;
            if ( Instance )
            {
              Instance = sub_1BC3144(Instance, v48->obj.klass->_1.element_class);
              if ( !Instance )
              {
                v74 = sub_1BC3288(0LL);
                sub_1BC3130(v74, 0LL);
              }
            }
            if ( Index >= v48->max_length )
              break;
            v73 = &v48->obj.klass + v49;
            v73[4] = (Il2CppClass *)v72;
            sub_1BC2FAC((CGThumbnailListItem_o *)(v73 + 4), v72, v31, v71);
            LimitImageIndex = v46;
          }
        }
      }
      v33 = *(_DWORD *)(v34 + 24);
      if ( (int)++v36 >= v33 )
        return;
    }
LABEL_72:
    sub_1BC326C(Instance, v29, v31);
  }
}


void __fastcall BattleFBXComponent__playAnimation(
        BattleFBXComponent_o *this,
        System_String_o *filename,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  const MethodInfo *v4; // x4
  __int64 v7; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v9; // x1

  if ( (byte_4B048C6 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_2261/*"AnimationCheck"*/, filename);
    sub_1BC3008(&StringLiteral_1/*""*/, v7);
    byte_4B048C6 = 1;
  }
  BattleFBXComponent__playAnimationTimeline(this, filename, (System_String_o *)StringLiteral_1/*""*/, v3, v4);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BC3264(0LL, v9);
  if ( UnityEngine_GameObject__get_activeInHierarchy(gameObject, 0LL) )
  {
    UnityEngine_MonoBehaviour__StopCoroutine_70020800(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_2261/*"AnimationCheck"*/,
      0LL);
    UnityEngine_MonoBehaviour__StartCoroutine(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_2261/*"AnimationCheck"*/,
      0LL);
  }
}


void __fastcall BattleFBXComponent__playAnimationFromTag(
        BattleFBXComponent_o *this,
        System_String_o *animname,
        System_String_o *tag,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_String_o *currentAnimName; // x21
  System_String_o *currentCommonAnimName; // x1
  const MethodInfo *v10; // x3
  long double v11; // q0
  UnityEngine_Object_o *animationComponent; // x22
  long double v13; // q8
  __int64 v14; // x1
  UnityEngine_Animation_o *Item; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  UnityEngine_Object_o *simpleAnimationComponent; // x22
  UnityEngine_Animation_c *klass; // x8
  UnityEngine_Animation_o *v20; // x22
  __int64 v21; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v23; // x0
  UnityEngine_Animation_c *v24; // x8
  UnityEngine_Animation_o *v25; // x22
  __int64 v26; // x9
  SimpleAnimation_State_c **v27; // x10
  __int64 v28; // x0

  if ( (byte_4B048C7 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, animname);
    sub_1BC3008(&SimpleAnimation_State_TypeInfo, v7);
    byte_4B048C7 = 1;
  }
  BattleFBXComponent__playAnimation(this, animname, (const MethodInfo *)tag);
  currentAnimName = this->fields.currentAnimName;
  currentCommonAnimName = this->fields.currentCommonAnimName;
  this->fields.isDirty = 1;
  *(float *)&v11 = BattleFBXComponent__getTagTime(this, currentCommonAnimName, tag, v10);
  animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
  v13 = v11;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(animationComponent, 0LL, 0LL) )
  {
    Item = this->fields.animationComponent;
    if ( Item )
    {
      Item = (UnityEngine_Animation_o *)UnityEngine_Animation__get_Item(Item, currentAnimName, 0LL);
      if ( Item )
      {
        UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)Item, *(float *)&v13, 0LL);
        Item = this->fields.animationComponent;
        if ( Item )
        {
          Item = (UnityEngine_Animation_o *)UnityEngine_Animation__get_Item(Item, currentAnimName, 0LL);
          if ( Item )
          {
            UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)Item, 0.0, 0LL);
            goto LABEL_31;
          }
        }
      }
    }
LABEL_32:
    sub_1BC3264(Item, v14);
  }
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0LL, 0LL) )
  {
    Item = (UnityEngine_Animation_o *)this->fields.simpleAnimationComponent;
    if ( !Item )
      goto LABEL_32;
    Item = (UnityEngine_Animation_o *)SimpleAnimation__get_Item((SimpleAnimation_o *)Item, currentAnimName, 0LL);
    if ( !Item )
      goto LABEL_32;
    klass = Item->klass;
    v20 = Item;
    v21 = *(unsigned __int16 *)(&Item->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Item->klass->_2.bitflags2 + 3) )
    {
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v21;
        p_offset += 2;
        if ( !v21 )
          goto LABEL_20;
      }
      v23 = (__int64)(&klass->vtable._4_GetEnumerator.method + 2 * *(_DWORD *)p_offset);
    }
    else
    {
LABEL_20:
      v23 = sub_1C13570(Item, SimpleAnimation_State_TypeInfo, 4LL);
    }
    (*(void (__fastcall **)(UnityEngine_Animation_o *, _QWORD, long double))v23)(v20, *(_QWORD *)(v23 + 8), v13);
    Item = (UnityEngine_Animation_o *)this->fields.simpleAnimationComponent;
    if ( !Item )
      goto LABEL_32;
    Item = (UnityEngine_Animation_o *)SimpleAnimation__get_Item((SimpleAnimation_o *)Item, currentAnimName, 0LL);
    if ( !Item )
      goto LABEL_32;
    v24 = Item->klass;
    v25 = Item;
    v26 = *(unsigned __int16 *)(&Item->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Item->klass->_2.bitflags2 + 3) )
    {
      v27 = (SimpleAnimation_State_c **)&v24->_1.interfaceOffsets->offset;
      while ( *(v27 - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v26;
        v27 += 2;
        if ( !v26 )
          goto LABEL_28;
      }
      v28 = (__int64)(&v24[1]._1.this_arg.bits + 4 * *(_DWORD *)v27);
    }
    else
    {
LABEL_28:
      v28 = sub_1C13570(Item, SimpleAnimation_State_TypeInfo, 8LL);
    }
    (*(void (__fastcall **)(UnityEngine_Animation_o *, _QWORD, float))v28)(v25, *(_QWORD *)(v28 + 8), 0.0);
  }
LABEL_31:
  this->fields.currentAnimName = currentAnimName;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.currentAnimName, (int32_t)currentAnimName, v16, v17);
  this->fields.currentAnimTime = *(float *)&v13;
  this->fields.currentEventIndex = 0;
  this->fields.isStop = 0;
}


void __fastcall BattleFBXComponent__playAnimationTimeline(
        BattleFBXComponent_o *this,
        System_String_o *filename,
        System_String_o *startEvent,
        System_String_o *stopEvent,
        const MethodInfo *method)
{
  System_String_o *Item; // x21
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v13; // x1
  Il2CppObject *Component_object; // x22
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *RealAnimNames; // x0
  struct System_Collections_Generic_Dictionary_string__string__o *v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  UnityEngine_Object_o *animationComponent; // x22
  __int64 v23; // x1
  UnityEngine_Animation_o *v24; // x0
  __int64 v25; // x1
  UnityEngine_Animation_o *v26; // x0
  UnityEngine_TrackedReference_o *v27; // x0
  __int64 v28; // x1
  UnityEngine_Animation_o *v29; // x0
  UnityEngine_AnimationState_o *v30; // x0
  __int64 v31; // x1
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  UnityEngine_Object_o *simpleAnimationComponent; // x22
  __int64 v35; // x1
  SimpleAnimation_o *v36; // x0
  __int64 v37; // x1
  SimpleAnimation_o *v38; // x0
  __int64 v39; // x1
  SimpleAnimation_o *v40; // x0
  SimpleAnimation_State_o *v41; // x0
  __int64 v42; // x1
  SimpleAnimation_State_o *v43; // x22
  SimpleAnimation_State_c *klass; // x8
  __int64 v45; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 p_method; // x0
  const MethodInfo *v48; // x3
  const MethodInfo *v49; // x1

  Item = filename;
  if ( (byte_4B048C4 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__, filename);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__, v8);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v9);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v10);
    sub_1BC3008(&SimpleAnimation_State_TypeInfo, v11);
    byte_4B048C4 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_41;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                             (UnityEngine_Object_o *)Component_object,
                                             0LL,
                                             0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( Component_object )
    {
      Item = BattleActorControl__OverwriteAnimation((BattleActorControl_o *)Component_object, Item, 1, 0LL);
      LOBYTE(Component_object[23].klass) = 1;
      goto LABEL_9;
    }
LABEL_41:
    sub_1BC3264(gameObject, v13);
  }
LABEL_9:
  this->fields.currentCommonAnimName = Item;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.currentCommonAnimName, (int32_t)Item, v15, v16);
  RealAnimNames = this->fields.RealAnimNames;
  if ( RealAnimNames
    && System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)RealAnimNames,
         (Il2CppObject *)Item,
         (const MethodInfo_336D1DC *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
  {
    v19 = this->fields.RealAnimNames;
    if ( !v19 )
      sub_1BC3264(0LL, v17);
    Item = (System_String_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                (System_Collections_Generic_Dictionary_object__object__o *)v19,
                                (Il2CppObject *)Item,
                                (const MethodInfo_336CF68 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
  }
  BattleFBXComponent__setupAnimation(this, v17);
  this->fields.currentAnimName = Item;
  this->fields.isDirty = 1;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.currentAnimName, (int32_t)Item, v20, v21);
  *(_QWORD *)&this->fields.currentAnimTime = 0LL;
  this->fields.isStop = 0;
  animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(animationComponent, 0LL, 0LL) )
  {
    v24 = this->fields.animationComponent;
    if ( !v24 )
      sub_1BC3264(0LL, v23);
    UnityEngine_Animation__Play_69779584(v24, Item, 0LL);
    v26 = this->fields.animationComponent;
    if ( !v26 )
      sub_1BC3264(0LL, v25);
    v27 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v26, Item, 0LL);
    if ( !UnityEngine_TrackedReference__op_Equality(v27, 0LL, 0LL) )
    {
      v29 = this->fields.animationComponent;
      if ( !v29 )
        sub_1BC3264(0LL, v28);
      v30 = UnityEngine_Animation__get_Item(v29, Item, 0LL);
      if ( !v30 )
        sub_1BC3264(0LL, v31);
      UnityEngine_AnimationState__set_speed(v30, 0.0, 0LL);
LABEL_37:
      this->fields.animename = Item;
      sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.animename, (int32_t)Item, v32, v33);
      if ( startEvent )
      {
        if ( startEvent->fields._stringLength >= 1 )
        {
          this->fields.currentAnimTime = BattleFBXComponent__getTagTime(this, Item, startEvent, v48);
          BattleFBXComponent__AnimUpdate(this, 0.0, v49);
        }
      }
    }
  }
  else
  {
    simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0LL, 0LL) )
      goto LABEL_37;
    v36 = this->fields.simpleAnimationComponent;
    if ( !v36 )
      sub_1BC3264(0LL, v35);
    SimpleAnimation__Play_65293968(v36, Item, 0LL);
    v38 = this->fields.simpleAnimationComponent;
    if ( !v38 )
      sub_1BC3264(0LL, v37);
    if ( SimpleAnimation__get_Item(v38, Item, 0LL) )
    {
      v40 = this->fields.simpleAnimationComponent;
      if ( !v40 )
        sub_1BC3264(0LL, v39);
      v41 = SimpleAnimation__get_Item(v40, Item, 0LL);
      v43 = v41;
      if ( !v41 )
        sub_1BC3264(0LL, v42);
      klass = v41->klass;
      v45 = *(unsigned __int16 *)(&v41->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v41->klass->_2.bitflags2 + 3) )
      {
        p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v45;
          p_offset += 2;
          if ( !v45 )
            goto LABEL_34;
        }
        p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 8].method;
      }
      else
      {
LABEL_34:
        p_method = sub_1C13570(v41, SimpleAnimation_State_TypeInfo, 8LL);
      }
      (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD, float))p_method)(v43, *(_QWORD *)(p_method + 8), 0.0);
      goto LABEL_37;
    }
  }
}


void __fastcall BattleFBXComponent__setCurrentAnimTime(
        BattleFBXComponent_o *this,
        float time,
        const MethodInfo *method)
{
  this->fields.currentAnimTime = time;
}


void __fastcall BattleFBXComponent__setTimeScale(BattleFBXComponent_o *this, float timescale, const MethodInfo *method)
{
  this->fields.timescale = timescale;
}


void __fastcall BattleFBXComponent__set_RootTransform(
        BattleFBXComponent_o *this,
        UnityEngine_Transform_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Component_o *rootTransform; // x0
  Il2CppObject *Component_object; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  Il2CppObject *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4B048B6 & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_Animation___, value);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v6);
    byte_4B048B6 = 1;
  }
  this->fields.rootTransform = value;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.rootTransform, (int32_t)value, (int32_t)method, v3);
  rootTransform = (UnityEngine_Component_o *)this->fields.rootTransform;
  if ( !rootTransform
    || (rootTransform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(rootTransform, 0LL)) == 0LL
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)rootTransform,
                             (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_Animation___),
        this->fields.animationComponent = (struct UnityEngine_Animation_o *)Component_object,
        sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.animationComponent, (int32_t)Component_object, v10, v11),
        (rootTransform = (UnityEngine_Component_o *)this->fields.rootTransform) == 0LL)
    || (rootTransform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(rootTransform, 0LL)) == 0LL )
  {
    sub_1BC3264(rootTransform, v7);
  }
  v12 = UnityEngine_GameObject__GetComponent_object_(
          (UnityEngine_GameObject_o *)rootTransform,
          (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  this->fields.simpleAnimationComponent = (struct SimpleAnimation_o *)v12;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.simpleAnimationComponent, (int32_t)v12, v13, v14);
}


void __fastcall BattleFBXComponent__setupAnimation(BattleFBXComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *rootTransform; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v7; // x1
  UnityEngine_Transform_o *v8; // x0
  const MethodInfo *v9; // x2
  BattleFBXComponent_c *v10; // x0
  UnityEngine_Object_o *v11; // x20
  UnityEngine_Transform_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4B048C3 & 1) == 0 )
  {
    sub_1BC3008(&BattleFBXComponent_TypeInfo, method);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v3);
    sub_1BC3008(&StringLiteral_17798/*"chr"*/, v4);
    byte_4B048C3 = 1;
  }
  rootTransform = (UnityEngine_Object_o *)this->fields.rootTransform;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(rootTransform, 0LL, 0LL) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform )
      sub_1BC3264(0LL, v7);
    v8 = UnityEngine_Transform__Find(transform, (System_String_o *)StringLiteral_17798/*"chr"*/, 0LL);
    BattleFBXComponent__set_RootTransform(this, v8, v9);
    v10 = BattleFBXComponent_TypeInfo;
    if ( !BattleFBXComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
      v10 = BattleFBXComponent_TypeInfo;
    }
    v10->static_fields->EnableEvent = 0;
  }
  v11 = (UnityEngine_Object_o *)this->fields.rootTransform;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v11, 0LL, 0LL) )
  {
    v12 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    BattleFBXComponent__set_RootTransform(this, v12, v13);
  }
}


void __fastcall BattleFBXComponent__stopAnimation(BattleFBXComponent_o *this, const MethodInfo *method)
{
  this->fields.isStop = 1;
}


void __fastcall BattleFBXComponent__stopAnimationCheck(BattleFBXComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4B048C9 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_2261/*"AnimationCheck"*/, method);
    byte_4B048C9 = 1;
  }
  UnityEngine_MonoBehaviour__StopCoroutine_70020800(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_2261/*"AnimationCheck"*/,
    0LL);
}


void __fastcall BattleFBXComponent__stopParticle(BattleFBXComponent_o *this, const MethodInfo *method)
{
  void *gameObject; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  int v6; // w8
  void *v7; // x19
  unsigned int v8; // w20

  if ( (byte_4B048C2 & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem___, method);
    byte_4B048C2 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_12;
  gameObject = UnityEngine_GameObject__GetComponentsInChildren_object__50685372(
                 (UnityEngine_GameObject_o *)gameObject,
                 (const MethodInfo_30565BC *)Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem___);
  if ( !gameObject )
    goto LABEL_12;
  v6 = *((_DWORD *)gameObject + 6);
  v7 = gameObject;
  if ( v6 >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= v6 )
        sub_1BC326C(gameObject, v4, v5);
      gameObject = (void *)*((_QWORD *)v7 + (int)v8 + 4);
      if ( !gameObject )
        break;
      UnityEngine_ParticleSystem__Stop_70318060((UnityEngine_ParticleSystem_o *)gameObject, 0LL);
      v6 = *((_DWORD *)v7 + 6);
      if ( (int)++v8 >= v6 )
        return;
    }
LABEL_12:
    sub_1BC3264(gameObject, v4);
  }
}


void __fastcall BattleFBXComponent_AnimEvent___ctor(BattleFBXComponent_AnimEvent_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleFBXComponent__AnimationCheck_d__70___ctor(
        BattleFBXComponent__AnimationCheck_d__70_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleFBXComponent__AnimationCheck_d__70__MoveNext(
        BattleFBXComponent__AnimationCheck_d__70_o *this,
        const MethodInfo *method)
{
  BattleFBXComponent__AnimationCheck_d__70_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct BattleFBXComponent_o *_4__this; // x21
  UnityEngine_Object_o *animationComponent; // x20
  UnityEngine_Object_o *simpleAnimationComponent; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  CGThumbnailListItem_o *p__2__current; // x19
  bool result; // w0
  CGThumbnailListItem_o *v12; // x19
  int v13; // w8
  Il2CppObject *animename; // x19
  struct BattleFBXComponent_onEventDelegate_o *Complete; // x8

  v2 = this;
  if ( (byte_4B048E1 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__, method);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__, v3);
    this = (BattleFBXComponent__AnimationCheck_d__70_o *)sub_1BC3008(&UnityEngine_Object_TypeInfo, v4);
    byte_4B048E1 = 1;
  }
  _4__this = v2->fields.__4__this;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_31;
      animationComponent = (UnityEngine_Object_o *)_4__this->fields.animationComponent;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(animationComponent, 0LL, 0LL) )
      {
LABEL_13:
        this = (BattleFBXComponent__AnimationCheck_d__70_o *)_4__this->fields.animationComponent;
        if ( this )
        {
          if ( UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)this, 0LL) )
          {
            v2->fields.__2__current = 0LL;
            p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
            sub_1BC2FAC(p__2__current, 0, v8, v9);
            result = 1;
            LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
            return result;
          }
          goto LABEL_20;
        }
        goto LABEL_31;
      }
      simpleAnimationComponent = (UnityEngine_Object_o *)_4__this->fields.simpleAnimationComponent;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0LL, 0LL) )
        goto LABEL_20;
LABEL_17:
      this = (BattleFBXComponent__AnimationCheck_d__70_o *)_4__this->fields.simpleAnimationComponent;
      if ( !this )
LABEL_31:
        sub_1BC3264(this, method);
      if ( !SimpleAnimation__get_isPlaying((SimpleAnimation_o *)this, 0LL) )
      {
LABEL_20:
        v2->fields.__2__current = 0LL;
        v12 = (CGThumbnailListItem_o *)&v2->fields.__2__current;
        sub_1BC2FAC(v12, 0, v8, v9);
        v13 = 3;
        goto LABEL_21;
      }
      v2->fields.__2__current = 0LL;
      v12 = (CGThumbnailListItem_o *)&v2->fields.__2__current;
      sub_1BC2FAC(v12, 0, v8, v9);
      v13 = 2;
LABEL_21:
      LODWORD(v12[-1].fields._ThumbnailSpritePath_k__BackingField) = v13;
      return 1;
    case 1:
      v2->fields.__1__state = -1;
      if ( _4__this )
        goto LABEL_13;
      goto LABEL_31;
    case 2:
      v2->fields.__1__state = -1;
      if ( _4__this )
        goto LABEL_17;
      goto LABEL_31;
    case 3:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_31;
      if ( !_4__this->fields.Complete )
        return 0;
      this = (BattleFBXComponent__AnimationCheck_d__70_o *)_4__this->fields.CommonAnimNames;
      if ( !this )
        goto LABEL_31;
      animename = (Il2CppObject *)_4__this->fields.animename;
      this = (BattleFBXComponent__AnimationCheck_d__70_o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                                             (System_Collections_Generic_Dictionary_object__object__o *)this,
                                                             animename,
                                                             (const MethodInfo_336D1DC *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_28;
      this = (BattleFBXComponent__AnimationCheck_d__70_o *)_4__this->fields.CommonAnimNames;
      if ( !this )
        goto LABEL_31;
      this = (BattleFBXComponent__AnimationCheck_d__70_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                             (System_Collections_Generic_Dictionary_object__object__o *)this,
                                                             animename,
                                                             (const MethodInfo_336CF68 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
      animename = (Il2CppObject *)this;
LABEL_28:
      Complete = _4__this->fields.Complete;
      if ( !Complete )
        goto LABEL_31;
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, Il2CppObject *, _QWORD))Complete->fields.m_target)(
        Complete->fields.original_method_info,
        animename,
        *(_QWORD *)&Complete->fields.extra_arg);
      return 0;
    default:
      return 0;
  }
}


Il2CppObject *__fastcall BattleFBXComponent__AnimationCheck_d__70__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleFBXComponent__AnimationCheck_d__70_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleFBXComponent__AnimationCheck_d__70__System_Collections_IEnumerator_Reset(
        BattleFBXComponent__AnimationCheck_d__70_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BC301C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BC3254(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BC301C(&Method_BattleFBXComponent__AnimationCheck_d__70_System_Collections_IEnumerator_Reset__);
  sub_1BC3130(v3, v4);
}


Il2CppObject *__fastcall BattleFBXComponent__AnimationCheck_d__70__System_Collections_IEnumerator_get_Current(
        BattleFBXComponent__AnimationCheck_d__70_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleFBXComponent__AnimationCheck_d__70__System_IDisposable_Dispose(
        BattleFBXComponent__AnimationCheck_d__70_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleFBXComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B048DE & 1) == 0 )
  {
    sub_1BC3008(&BattleFBXComponent___c_TypeInfo, v1);
    byte_4B048DE = 1;
  }
  v2 = (Il2CppObject *)sub_1BC3254(BattleFBXComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattleFBXComponent___c_TypeInfo->static_fields->__9 = (struct BattleFBXComponent___c_o *)v2;
  sub_1BC2FAC((CGThumbnailListItem_o *)BattleFBXComponent___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall BattleFBXComponent___c___ctor(BattleFBXComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleFBXComponent___c___inSetEvolutionLevel_b__57_0(
        BattleFBXComponent___c_o *this,
        UnityEngine_Transform_o *p,
        const MethodInfo *method)
{
  BattleFBXComponent___c_o *v4; // x20
  BattleFBXComponent___c_o *v6; // x19

  if ( (byte_4B048DF & 1) == 0 )
  {
    this = (BattleFBXComponent___c_o *)sub_1BC3008(&BattleFBXComponent_TypeInfo, p);
    byte_4B048DF = 1;
  }
  if ( !p )
    goto LABEL_15;
  this = (BattleFBXComponent___c_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)p, 0LL);
  if ( !this )
    goto LABEL_15;
  this = (BattleFBXComponent___c_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  v4 = this;
  if ( !BattleFBXComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
  if ( !v4 )
    goto LABEL_15;
  if ( System_String__Contains((System_String_o *)v4, BattleFBXComponent_TypeInfo->static_fields->levelMarker, 0LL) )
    return 1;
  this = (BattleFBXComponent___c_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)p, 0LL);
  if ( !this )
    goto LABEL_15;
  this = (BattleFBXComponent___c_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  v6 = this;
  if ( !BattleFBXComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
  if ( !v6 )
LABEL_15:
    sub_1BC3264(this, p);
  return System_String__Contains((System_String_o *)v6, BattleFBXComponent_TypeInfo->static_fields->sideflipMarker, 0LL);
}


bool __fastcall BattleFBXComponent___c___inSetEvolutionLevel_b__57_1(
        BattleFBXComponent___c_o *this,
        UnityEngine_Transform_o *p,
        const MethodInfo *method)
{
  BattleFBXComponent___c_o *v4; // x19

  if ( (byte_4B048E0 & 1) == 0 )
  {
    this = (BattleFBXComponent___c_o *)sub_1BC3008(&BattleFBXComponent_TypeInfo, p);
    byte_4B048E0 = 1;
  }
  if ( !p )
    goto LABEL_9;
  this = (BattleFBXComponent___c_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)p, 0LL);
  if ( !this )
    goto LABEL_9;
  this = (BattleFBXComponent___c_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  v4 = this;
  if ( !BattleFBXComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
  if ( !v4 )
LABEL_9:
    sub_1BC3264(this, p);
  return System_String__Contains((System_String_o *)v4, BattleFBXComponent_TypeInfo->static_fields->enItemMarker, 0LL);
}


void __fastcall BattleFBXComponent___c__DisplayClass80_0___ctor(
        BattleFBXComponent___c__DisplayClass80_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleFBXComponent___c__DisplayClass80_0___IsYTransparenceShader_b__0(
        BattleFBXComponent___c__DisplayClass80_0_o *this,
        System_String_o *shaderName,
        const MethodInfo *method)
{
  System_String_o *skinShaderName; // x0

  skinShaderName = this->fields.skinShaderName;
  if ( !skinShaderName )
    sub_1BC3264(0LL, shaderName);
  return System_String__StartsWith(skinShaderName, shaderName, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleFBXComponent_onEventDelegate___ctor(
        BattleFBXComponent_onEventDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  Il2CppObject *v9; // x8
  struct System_Reflection_MethodInfo_o *v10; // x9
  __int64 v11; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BC30C8(v6) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = (Il2CppObject *)sub_1A0FAA8;
LABEL_8:
      this->fields.m_target = v9;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v8 )
    {
      v9 = (Il2CppObject *)sub_1A0FA88;
      goto LABEL_8;
    }
    if ( !object )
    {
      v11 = sub_1BC3280(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BC3130(v11, 0LL);
    }
  }
  v10 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v10;
LABEL_9:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A0FA40;
}


System_IAsyncResult_o *__fastcall BattleFBXComponent_onEventDelegate__BeginInvoke(
        BattleFBXComponent_onEventDelegate_o *this,
        System_String_o *n,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  System_String_o *v6; // [xsp+0h] [xbp-20h] BYREF

  v6 = n;
  return (System_IAsyncResult_o *)sub_1BC2FBC(this, &v6, callback, object);
}


void __fastcall BattleFBXComponent_onEventDelegate__EndInvoke(
        BattleFBXComponent_onEventDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BC2FC0(result, 0LL, method);
}


void __fastcall BattleFBXComponent_onEventDelegate__Invoke(
        BattleFBXComponent_onEventDelegate_o *this,
        System_String_o *n,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    n,
    *(_QWORD *)&this->fields.extra_arg);
}