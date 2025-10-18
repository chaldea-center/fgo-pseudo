void BattleFBXComponent___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  struct BattleFBXComponent_StaticFields *static_fields; // x0
  int32_t v4; // w1
  int32_t v5; // w1
  struct BattleFBXComponent_StaticFields *v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w1
  struct BattleFBXComponent_StaticFields *v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w1
  struct BattleFBXComponent_StaticFields *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w1
  struct BattleFBXComponent_StaticFields *v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w1
  struct BattleFBXComponent_StaticFields *v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  int32_t v25; // w1
  struct BattleFBXComponent_StaticFields *v26; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  int32_t v29; // w1
  struct BattleFBXComponent_StaticFields *v30; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  __int64 v33; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  __int64 v36; // x19
  int32_t v37; // w1
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  int32_t v40; // w1
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  int32_t v43; // w1
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  int32_t v46; // w1
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  int32_t v49; // w1
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  int32_t v52; // w1
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  int32_t v55; // w1
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  int32_t v58; // w1
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  int32_t v61; // w1
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  int32_t v64; // w1
  struct BattleFBXComponent_StaticFields *v65; // x0
  int32_t v66; // w2
  const MethodInfo *v67; // x3

  if ( (byte_4C45A6E & 1) == 0 )
  {
    sub_1C37058(&BattleFBXComponent_TypeInfo);
    sub_1C37058(&string___TypeInfo);
    sub_1C37058(&StringLiteral_7322/*"Hidden/Particle/MultiplyAdd1Pass-Stencil"*/);
    sub_1C37058(&StringLiteral_6410/*"FGO_CH/AlphaBlendSingle"*/);
    sub_1C37058(&StringLiteral_18989/*"en_weapon_"*/);
    sub_1C37058(&StringLiteral_6412/*"FGO_CH/Base"*/);
    sub_1C37058(&StringLiteral_16563/*"_level"*/);
    sub_1C37058(&StringLiteral_6409/*"FGO_Battle/Particle/Base-Stencil"*/);
    sub_1C37058(&StringLiteral_6408/*"FGO_Battle/Particle/Base"*/);
    sub_1C37058(&StringLiteral_6413/*"FGO_CH/SingleFlat"*/);
    sub_1C37058(&StringLiteral_7321/*"Hidden/Particle/MultiplyAdd1Pass"*/);
    sub_1C37058(&StringLiteral_18985/*"en_item_"*/);
    sub_1C37058(&StringLiteral_17963/*"chrnode_"*/);
    sub_1C37058(&StringLiteral_21087/*"joint_sideflip_"*/);
    sub_1C37058(&StringLiteral_7319/*"Hidden/Particle/MultiplyAdd"*/);
    sub_1C37058(&StringLiteral_2398/*"Assets/AssetStorages/NoblePhantasm/"*/);
    sub_1C37058(&StringLiteral_7320/*"Hidden/Particle/MultiplyAdd-Stencil"*/);
    sub_1C37058(&StringLiteral_6411/*"FGO_CH/AlphaBlendSingleFlat"*/);
    sub_1C37058(&StringLiteral_22757/*"prefabn_"*/);
    sub_1C37058(&StringLiteral_2399/*"Assets/AssetStorages/Servants/"*/);
    byte_4C45A6E = 1;
  }
  static_fields = BattleFBXComponent_TypeInfo->static_fields;
  static_fields->EnableEvent = 1;
  static_fields->animFps = 30.0;
  v4 = StringLiteral_16563/*"_level"*/;
  static_fields->levelMarker = (struct System_String_o *)StringLiteral_16563/*"_level"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->levelMarker, v4, v1, v2);
  v5 = StringLiteral_22757/*"prefabn_"*/;
  v6 = BattleFBXComponent_TypeInfo->static_fields;
  v6->prefabMarker = (struct System_String_o *)StringLiteral_22757/*"prefabn_"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v6->prefabMarker, v5, v7, v8);
  v9 = StringLiteral_17963/*"chrnode_"*/;
  v10 = BattleFBXComponent_TypeInfo->static_fields;
  v10->chrnodeMarker = (struct System_String_o *)StringLiteral_17963/*"chrnode_"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v10->chrnodeMarker, v9, v11, v12);
  v13 = StringLiteral_21087/*"joint_sideflip_"*/;
  v14 = BattleFBXComponent_TypeInfo->static_fields;
  v14->sideflipMarker = (struct System_String_o *)StringLiteral_21087/*"joint_sideflip_"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v14->sideflipMarker, v13, v15, v16);
  v17 = StringLiteral_18985/*"en_item_"*/;
  v18 = BattleFBXComponent_TypeInfo->static_fields;
  v18->enItemMarker = (struct System_String_o *)StringLiteral_18985/*"en_item_"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v18->enItemMarker, v17, v19, v20);
  v21 = StringLiteral_18989/*"en_weapon_"*/;
  v22 = BattleFBXComponent_TypeInfo->static_fields;
  v22->enWeaponMarker = (struct System_String_o *)StringLiteral_18989/*"en_weapon_"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v22->enWeaponMarker, v21, v23, v24);
  v25 = StringLiteral_2398/*"Assets/AssetStorages/NoblePhantasm/"*/;
  v26 = BattleFBXComponent_TypeInfo->static_fields;
  v26->npPathHead = (struct System_String_o *)StringLiteral_2398/*"Assets/AssetStorages/NoblePhantasm/"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v26->npPathHead, v25, v27, v28);
  v29 = StringLiteral_2399/*"Assets/AssetStorages/Servants/"*/;
  v30 = BattleFBXComponent_TypeInfo->static_fields;
  v30->svtPathHead = (struct System_String_o *)StringLiteral_2399/*"Assets/AssetStorages/Servants/"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v30->svtPathHead, v29, v31, v32);
  v33 = sub_1C37100(string___TypeInfo, 10);
  if ( !v33 )
    sub_1C372B4(0);
  v36 = v33;
  if ( !*(_DWORD *)(v33 + 24) )
    goto LABEL_15;
  v37 = StringLiteral_6412/*"FGO_CH/Base"*/;
  *(_QWORD *)(v33 + 32) = StringLiteral_6412/*"FGO_CH/Base"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v33 + 32), v37, v34, v35);
  if ( *(_DWORD *)(v36 + 24) <= 1u )
    goto LABEL_15;
  v40 = StringLiteral_6410/*"FGO_CH/AlphaBlendSingle"*/;
  *(_QWORD *)(v36 + 40) = StringLiteral_6410/*"FGO_CH/AlphaBlendSingle"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v36 + 40), v40, v38, v39);
  if ( *(_DWORD *)(v36 + 24) <= 2u )
    goto LABEL_15;
  v43 = StringLiteral_6408/*"FGO_Battle/Particle/Base"*/;
  *(_QWORD *)(v36 + 48) = StringLiteral_6408/*"FGO_Battle/Particle/Base"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v36 + 48), v43, v41, v42);
  if ( *(_DWORD *)(v36 + 24) <= 3u )
    goto LABEL_15;
  v46 = StringLiteral_7319/*"Hidden/Particle/MultiplyAdd"*/;
  *(_QWORD *)(v36 + 56) = StringLiteral_7319/*"Hidden/Particle/MultiplyAdd"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v36 + 56), v46, v44, v45);
  if ( *(_DWORD *)(v36 + 24) <= 4u )
    goto LABEL_15;
  v49 = StringLiteral_7321/*"Hidden/Particle/MultiplyAdd1Pass"*/;
  *(_QWORD *)(v36 + 64) = StringLiteral_7321/*"Hidden/Particle/MultiplyAdd1Pass"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v36 + 64), v49, v47, v48);
  if ( *(_DWORD *)(v36 + 24) <= 5u )
    goto LABEL_15;
  v52 = StringLiteral_6411/*"FGO_CH/AlphaBlendSingleFlat"*/;
  *(_QWORD *)(v36 + 72) = StringLiteral_6411/*"FGO_CH/AlphaBlendSingleFlat"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v36 + 72), v52, v50, v51);
  if ( *(_DWORD *)(v36 + 24) <= 6u )
    goto LABEL_15;
  v55 = StringLiteral_6409/*"FGO_Battle/Particle/Base-Stencil"*/;
  *(_QWORD *)(v36 + 80) = StringLiteral_6409/*"FGO_Battle/Particle/Base-Stencil"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v36 + 80), v55, v53, v54);
  if ( *(_DWORD *)(v36 + 24) <= 7u
    || (v58 = StringLiteral_7320/*"Hidden/Particle/MultiplyAdd-Stencil"*/,
        *(_QWORD *)(v36 + 88) = StringLiteral_7320/*"Hidden/Particle/MultiplyAdd-Stencil"*/,
        sub_1C36FFC((CGThumbnailListItem_o *)(v36 + 88), v58, v56, v57),
        *(_DWORD *)(v36 + 24) <= 8u)
    || (v61 = StringLiteral_7322/*"Hidden/Particle/MultiplyAdd1Pass-Stencil"*/,
        *(_QWORD *)(v36 + 96) = StringLiteral_7322/*"Hidden/Particle/MultiplyAdd1Pass-Stencil"*/,
        sub_1C36FFC((CGThumbnailListItem_o *)(v36 + 96), v61, v59, v60),
        *(_DWORD *)(v36 + 24) <= 9u) )
  {
LABEL_15:
    sub_1C372BC(v33);
  }
  v64 = StringLiteral_6413/*"FGO_CH/SingleFlat"*/;
  *(_QWORD *)(v36 + 104) = StringLiteral_6413/*"FGO_CH/SingleFlat"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v36 + 104), v64, v62, v63);
  v65 = BattleFBXComponent_TypeInfo->static_fields;
  v65->yTransparenceShaderNames = (struct System_String_array *)v36;
  sub_1C36FFC((CGThumbnailListItem_o *)&v65->yTransparenceShaderNames, v36, v66, v67);
}


void BattleFBXComponent___ctor(BattleFBXComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  System_Collections_Generic_Dictionary_object__object__o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Collections_Generic_List_object__o *v9; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Collections_Generic_Dictionary_object__object__o *v12; // x20
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v15; // x20
  int32_t v16; // w2
  const MethodInfo *v17; // x3

  if ( (byte_4C45A6D & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__string___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__GameObject___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_KeyValuePair_string__Material___float___ctor__);
    sub_1C37058(&System_Collections_Generic_Dictionary_string__GameObject__TypeInfo);
    sub_1C37058(&System_Collections_Generic_Dictionary_string__string__TypeInfo);
    sub_1C37058(&System_Collections_Generic_Dictionary_KeyValuePair_string__Material___float__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_Renderer___ctor__);
    sub_1C37058(&System_Collections_Generic_List_Renderer__TypeInfo);
    byte_4C45A6D = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C372A4(System_Collections_Generic_Dictionary_string__string__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v3,
    (const MethodInfo_3462C80 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  this->fields.RealAnimNames = (struct System_Collections_Generic_Dictionary_string__string__o *)v3;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.RealAnimNames, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C372A4(System_Collections_Generic_Dictionary_string__string__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v6,
    (const MethodInfo_3462C80 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  this->fields.CommonAnimNames = (struct System_Collections_Generic_Dictionary_string__string__o *)v6;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.CommonAnimNames, (int32_t)v6, v7, v8);
  this->fields.timescale = 1.0;
  v9 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_Renderer__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_Renderer___ctor__);
  this->fields.enableRendererList = (struct System_Collections_Generic_List_Renderer__o *)v9;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.enableRendererList, (int32_t)v9, v10, v11);
  v12 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C372A4(System_Collections_Generic_Dictionary_string__GameObject__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v12,
    (const MethodInfo_3462C80 *)Method_System_Collections_Generic_Dictionary_string__GameObject___ctor__);
  this->fields.actorEffectDict = (struct System_Collections_Generic_Dictionary_string__GameObject__o *)v12;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.actorEffectDict, (int32_t)v12, v13, v14);
  v15 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C372A4(System_Collections_Generic_Dictionary_KeyValuePair_string__Material___float__TypeInfo);
  System_Collections_Generic_Dictionary_KeyValuePair_object__object___float____ctor(
    v15,
    (const MethodInfo_33B7E2C *)Method_System_Collections_Generic_Dictionary_KeyValuePair_string__Material___float___ctor__);
  this->fields.tempMaterialPropertyDict = (struct System_Collections_Generic_Dictionary_KeyValuePair_string__Material___float__o *)v15;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.tempMaterialPropertyDict, (int32_t)v15, v16, v17);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattleFBXComponent__AnimUpdate(BattleFBXComponent_o *this, float deltaTime, const MethodInfo *method)
{
  long double v3; // q8
  float v5; // s9
  UnityEngine_Object_o *rootTransform; // x20
  UnityEngine_Object_o *animationComponent; // x20
  __int64 wrapMode; // x0
  UnityEngine_TrackedReference_o *Item; // x0
  UnityEngine_Object_o *simpleAnimationComponent; // x20
  UnityEngine_Object_o *v11; // x20
  float v12; // s8
  UnityEngine_Animation_o *v13; // x8
  float v14; // s8
  float v15; // s8
  float length; // s0
  UnityEngine_Object_o *v17; // x20
  __int64 v18; // x8
  float currentAnimTime; // s8
  __int64 v20; // x20
  __int64 v21; // x9
  SimpleAnimation_State_c **v22; // x10
  __int64 v23; // x0
  __int64 v24; // x8
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
  float i; // s8
  __int64 v41; // x8
  __int64 v42; // x9
  SimpleAnimation_State_c **v43; // x10
  __int64 v44; // x0
  __int64 v45; // x8
  float v46; // s8
  __int64 v47; // x9
  SimpleAnimation_State_c **v48; // x10
  __int64 v49; // x0
  UnityEngine_Object_o *v50; // x20
  UnityEngine_Object_o *v51; // x20
  UnityEngine_TrackedReference_o *v52; // x0
  UnityEngine_Object_o *v53; // x20
  BattleFBXComponent_c *v54; // x0
  System_String_o *currentCommonAnimName; // x20
  struct BattleFBXComponent_AnimEvent_array_array *eventlist; // x8
  BattleFBXComponent_AnimEvent_array *v57; // x24
  int currentEventIndex; // w25
  il2cpp_array_size_t j; // x8
  BattleFBXComponent_AnimEvent_o *v60; // x20
  float time; // s0
  float v62; // s1
  bool v63; // nf
  float v64; // s1
  UnityEngine_Object_o *v65; // x21
  __int64 v66; // x8
  __int64 v67; // x21
  __int64 v68; // x9
  SimpleAnimation_State_c **v69; // x10
  __int64 v70; // x0
  _BOOL4 isDirty; // w27
  UnityEngine_Object_o *billBoard; // x21
  const MethodInfo *v73; // x2
  _BOOL4 v74; // w8
  BattleFBXComponent_c *v75; // x0
  UnityEngine_Object_o *v76; // x20
  float animFps; // s8
  float v78; // s0
  int v79; // w21
  __int64 v80; // x8
  __int64 v81; // x20
  __int64 v82; // x9
  SimpleAnimation_State_c **v83; // x10
  __int64 v84; // x0

  v3 = *(long double *)&deltaTime;
  if ( (byte_4C45A4A & 1) == 0 )
  {
    sub_1C37058(&AnimationList_TypeInfo);
    sub_1C37058(&BattleFBXComponent_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&SimpleAnimation_State_TypeInfo);
    byte_4C45A4A = 1;
  }
  v5 = this->fields.timescale * *(float *)&v3;
  if ( v5 == 0.0 || this->fields.isStop )
    return;
  rootTransform = (UnityEngine_Object_o *)this->fields.rootTransform;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(rootTransform, 0, 0) || !this->fields.currentAnimName )
    return;
  animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(animationComponent, 0, 0) )
  {
    wrapMode = (__int64)this->fields.animationComponent;
    if ( !wrapMode )
      goto LABEL_39;
    if ( !UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)wrapMode, 0) )
      return;
    wrapMode = (__int64)this->fields.animationComponent;
    if ( !wrapMode )
      goto LABEL_39;
    Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                               (UnityEngine_Animation_o *)wrapMode,
                                               this->fields.currentAnimName,
                                               0);
    if ( UnityEngine_TrackedReference__op_Equality(Item, 0, 0) )
      return;
  }
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0, 0) )
  {
    wrapMode = (__int64)this->fields.simpleAnimationComponent;
    if ( !wrapMode )
      goto LABEL_39;
    if ( !SimpleAnimation__get_isPlaying((SimpleAnimation_o *)wrapMode, 0) )
      return;
    wrapMode = (__int64)this->fields.simpleAnimationComponent;
    if ( !wrapMode )
      goto LABEL_39;
    if ( !SimpleAnimation__get_Item((SimpleAnimation_o *)wrapMode, this->fields.currentAnimName, 0) )
      return;
  }
  v11 = (UnityEngine_Object_o *)this->fields.animationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v11, 0, 0) )
  {
    v17 = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v17, 0, 0) )
      goto LABEL_102;
    wrapMode = (__int64)this->fields.simpleAnimationComponent;
    if ( wrapMode )
    {
      wrapMode = (__int64)SimpleAnimation__get_Item((SimpleAnimation_o *)wrapMode, this->fields.currentAnimName, 0);
      if ( wrapMode )
      {
        v18 = *(_QWORD *)wrapMode;
        currentAnimTime = this->fields.currentAnimTime;
        v20 = wrapMode;
        v21 = *(unsigned __int16 *)(*(_QWORD *)wrapMode + 302LL);
        if ( *(_WORD *)(*(_QWORD *)wrapMode + 302LL) )
        {
          v22 = (SimpleAnimation_State_c **)(*(_QWORD *)(v18 + 176) + 8LL);
          while ( *(v22 - 1) != SimpleAnimation_State_TypeInfo )
          {
            --v21;
            v22 += 2;
            if ( !v21 )
              goto LABEL_49;
          }
          v23 = v18 + 16LL * (*(_DWORD *)v22 + 14) + 312;
        }
        else
        {
LABEL_49:
          v23 = sub_1C87870(wrapMode, SimpleAnimation_State_TypeInfo, 14);
        }
        wrapMode = (*(__int64 (__fastcall **)(__int64, _QWORD))v23)(v20, *(_QWORD *)(v23 + 8));
        if ( wrapMode )
        {
          if ( currentAnimTime < UnityEngine_AnimationClip__get_length((UnityEngine_AnimationClip_o *)wrapMode, 0) )
            goto LABEL_102;
          v24 = *(_QWORD *)v20;
          v25 = *(unsigned __int16 *)(*(_QWORD *)v20 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v20 + 302LL) )
          {
            v26 = (SimpleAnimation_State_c **)(*(_QWORD *)(v24 + 176) + 8LL);
            while ( *(v26 - 1) != SimpleAnimation_State_TypeInfo )
            {
              --v25;
              v26 += 2;
              if ( !v25 )
                goto LABEL_59;
            }
            v27 = v24 + 16LL * (*(_DWORD *)v26 + 19) + 312;
          }
          else
          {
LABEL_59:
            v27 = sub_1C87870(v20, SimpleAnimation_State_TypeInfo, 19);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v27)(v20, *(_QWORD *)(v27 + 8)) & 1) != 0 )
            goto LABEL_70;
          v28 = *(_QWORD *)v20;
          v29 = *(unsigned __int16 *)(*(_QWORD *)v20 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v20 + 302LL) )
          {
            v30 = (SimpleAnimation_State_c **)(*(_QWORD *)(v28 + 176) + 8LL);
            while ( *(v30 - 1) != SimpleAnimation_State_TypeInfo )
            {
              --v29;
              v30 += 2;
              if ( !v29 )
                goto LABEL_66;
            }
            v31 = v28 + 16LL * (*(_DWORD *)v30 + 14) + 312;
          }
          else
          {
LABEL_66:
            v31 = sub_1C87870(v20, SimpleAnimation_State_TypeInfo, 14);
          }
          wrapMode = (*(__int64 (__fastcall **)(__int64, _QWORD))v31)(v20, *(_QWORD *)(v31 + 8));
          if ( wrapMode )
          {
            if ( UnityEngine_Motion__get_isLooping((UnityEngine_Motion_o *)wrapMode, 0) )
            {
LABEL_84:
              for ( i = this->fields.currentAnimTime; ; this->fields.currentAnimTime = i )
              {
                v41 = *(_QWORD *)v20;
                v42 = *(unsigned __int16 *)(*(_QWORD *)v20 + 302LL);
                if ( *(_WORD *)(*(_QWORD *)v20 + 302LL) )
                {
                  v43 = (SimpleAnimation_State_c **)(*(_QWORD *)(v41 + 176) + 8LL);
                  while ( *(v43 - 1) != SimpleAnimation_State_TypeInfo )
                  {
                    --v42;
                    v43 += 2;
                    if ( !v42 )
                      goto LABEL_89;
                  }
                  v44 = v41 + 16LL * (*(_DWORD *)v43 + 14) + 312;
                }
                else
                {
LABEL_89:
                  v44 = sub_1C87870(v20, SimpleAnimation_State_TypeInfo, 14);
                }
                wrapMode = (*(__int64 (__fastcall **)(__int64, _QWORD))v44)(v20, *(_QWORD *)(v44 + 8));
                if ( !wrapMode )
                  goto LABEL_39;
                if ( i < UnityEngine_AnimationClip__get_length((UnityEngine_AnimationClip_o *)wrapMode, 0) )
                  break;
                v45 = *(_QWORD *)v20;
                v46 = this->fields.currentAnimTime;
                v47 = *(unsigned __int16 *)(*(_QWORD *)v20 + 302LL);
                if ( *(_WORD *)(*(_QWORD *)v20 + 302LL) )
                {
                  v48 = (SimpleAnimation_State_c **)(*(_QWORD *)(v45 + 176) + 8LL);
                  while ( *(v48 - 1) != SimpleAnimation_State_TypeInfo )
                  {
                    --v47;
                    v48 += 2;
                    if ( !v47 )
                      goto LABEL_97;
                  }
                  v49 = v45 + 16LL * (*(_DWORD *)v48 + 14) + 312;
                }
                else
                {
LABEL_97:
                  v49 = sub_1C87870(v20, SimpleAnimation_State_TypeInfo, 14);
                }
                wrapMode = (*(__int64 (__fastcall **)(__int64, _QWORD))v49)(v20, *(_QWORD *)(v49 + 8));
                if ( !wrapMode )
                  goto LABEL_39;
                i = v46 - UnityEngine_AnimationClip__get_length((UnityEngine_AnimationClip_o *)wrapMode, 0);
              }
LABEL_101:
              this->fields.currentEventIndex = 0;
              goto LABEL_102;
            }
LABEL_70:
            v32 = *(_QWORD *)v20;
            v33 = *(unsigned __int16 *)(*(_QWORD *)v20 + 302LL);
            if ( *(_WORD *)(*(_QWORD *)v20 + 302LL) )
            {
              v34 = (SimpleAnimation_State_c **)(*(_QWORD *)(v32 + 176) + 8LL);
              while ( *(v34 - 1) != SimpleAnimation_State_TypeInfo )
              {
                --v33;
                v34 += 2;
                if ( !v33 )
                  goto LABEL_74;
              }
              v35 = v32 + 16LL * (*(_DWORD *)v34 + 19) + 312;
            }
            else
            {
LABEL_74:
              v35 = sub_1C87870(v20, SimpleAnimation_State_TypeInfo, 19);
            }
            if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v35)(v20, *(_QWORD *)(v35 + 8)) & 1) == 0 )
              goto LABEL_163;
            v36 = *(_QWORD *)v20;
            v37 = *(unsigned __int16 *)(*(_QWORD *)v20 + 302LL);
            if ( *(_WORD *)(*(_QWORD *)v20 + 302LL) )
            {
              v38 = (SimpleAnimation_State_c **)(*(_QWORD *)(v36 + 176) + 8LL);
              while ( *(v38 - 1) != SimpleAnimation_State_TypeInfo )
              {
                --v37;
                v38 += 2;
                if ( !v37 )
                  goto LABEL_81;
              }
              v39 = v36 + 16LL * (*(_DWORD *)v38 + 17) + 312;
            }
            else
            {
LABEL_81:
              v39 = sub_1C87870(v20, SimpleAnimation_State_TypeInfo, 17);
            }
            if ( (*(unsigned int (__fastcall **)(__int64, _QWORD))v39)(v20, *(_QWORD *)(v39 + 8)) != 2 )
            {
LABEL_163:
              wrapMode = (__int64)this->fields.simpleAnimationComponent;
              if ( wrapMode )
              {
                SimpleAnimation__Stop((SimpleAnimation_o *)wrapMode, 0);
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
    sub_1C372B4(wrapMode);
  }
  wrapMode = (__int64)this->fields.animationComponent;
  if ( !wrapMode )
    goto LABEL_39;
  v12 = this->fields.currentAnimTime;
  wrapMode = (__int64)UnityEngine_Animation__get_Item(
                        (UnityEngine_Animation_o *)wrapMode,
                        this->fields.currentAnimName,
                        0);
  if ( !wrapMode )
    goto LABEL_39;
  if ( v12 >= UnityEngine_AnimationState__get_length((UnityEngine_AnimationState_o *)wrapMode, 0) )
  {
    wrapMode = (__int64)this->fields.animationComponent;
    if ( wrapMode )
    {
      wrapMode = (__int64)UnityEngine_Animation__get_Item(
                            (UnityEngine_Animation_o *)wrapMode,
                            this->fields.currentAnimName,
                            0);
      if ( wrapMode )
      {
        wrapMode = UnityEngine_AnimationState__get_wrapMode((UnityEngine_AnimationState_o *)wrapMode, 0);
        v13 = this->fields.animationComponent;
        if ( (_DWORD)wrapMode == 2 )
        {
          if ( v13 )
          {
            v14 = this->fields.currentAnimTime;
            do
            {
              wrapMode = (__int64)UnityEngine_Animation__get_Item(v13, this->fields.currentAnimName, 0);
              if ( !wrapMode )
                break;
              if ( v14 < UnityEngine_AnimationState__get_length((UnityEngine_AnimationState_o *)wrapMode, 0) )
                goto LABEL_101;
              wrapMode = (__int64)this->fields.animationComponent;
              if ( !wrapMode )
                break;
              v15 = this->fields.currentAnimTime;
              wrapMode = (__int64)UnityEngine_Animation__get_Item(
                                    (UnityEngine_Animation_o *)wrapMode,
                                    this->fields.currentAnimName,
                                    0);
              if ( !wrapMode )
                break;
              length = UnityEngine_AnimationState__get_length((UnityEngine_AnimationState_o *)wrapMode, 0);
              v13 = this->fields.animationComponent;
              v14 = v15 - length;
              this->fields.currentAnimTime = v14;
            }
            while ( v13 );
          }
        }
        else if ( v13 )
        {
          UnityEngine_Animation__Stop(v13, 0);
          return;
        }
      }
    }
    goto LABEL_39;
  }
LABEL_102:
  v50 = (UnityEngine_Object_o *)this->fields.rootTransform;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v50, 0, 0) && this->fields.currentAnimName )
  {
    v51 = (UnityEngine_Object_o *)this->fields.animationComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v51, 0, 0) )
    {
      wrapMode = (__int64)this->fields.animationComponent;
      if ( !wrapMode )
        goto LABEL_39;
      if ( UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)wrapMode, 0) )
      {
        wrapMode = (__int64)this->fields.animationComponent;
        if ( !wrapMode )
          goto LABEL_39;
        v52 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                                  (UnityEngine_Animation_o *)wrapMode,
                                                  this->fields.currentAnimName,
                                                  0);
        if ( UnityEngine_TrackedReference__op_Inequality(v52, 0, 0) )
          goto LABEL_120;
      }
    }
    v53 = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v53, 0, 0) )
    {
      wrapMode = (__int64)this->fields.simpleAnimationComponent;
      if ( !wrapMode )
        goto LABEL_39;
      if ( !SimpleAnimation__get_isPlaying((SimpleAnimation_o *)wrapMode, 0) )
        return;
      wrapMode = (__int64)this->fields.simpleAnimationComponent;
      if ( !wrapMode )
        goto LABEL_39;
      if ( !SimpleAnimation__get_Item((SimpleAnimation_o *)wrapMode, this->fields.currentAnimName, 0) )
        return;
LABEL_120:
      v54 = BattleFBXComponent_TypeInfo;
      if ( !BattleFBXComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
        v54 = BattleFBXComponent_TypeInfo;
      }
      if ( v54->static_fields->EnableEvent && this->fields.eventlist )
      {
        currentCommonAnimName = this->fields.currentCommonAnimName;
        if ( !AnimationList_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AnimationList_TypeInfo);
        wrapMode = AnimationList__getIndex(currentCommonAnimName, 0);
        if ( (wrapMode & 0x80000000) == 0 )
        {
          eventlist = this->fields.eventlist;
          if ( !eventlist )
            goto LABEL_39;
          if ( (unsigned int)wrapMode >= LODWORD(eventlist->max_length) )
LABEL_190:
            sub_1C372BC(wrapMode);
          v57 = eventlist->m_Items[(unsigned int)wrapMode];
          if ( v57 )
          {
            currentEventIndex = this->fields.currentEventIndex;
            for ( j = v57->max_length; currentEventIndex < (int)j; ++currentEventIndex )
            {
              if ( currentEventIndex >= (unsigned int)j )
                goto LABEL_190;
              v60 = v57->m_Items[currentEventIndex];
              if ( !v60 )
                goto LABEL_39;
              time = v60->fields.time;
              v62 = this->fields.currentAnimTime;
              v63 = time < v62;
              v64 = v5 + v62;
              if ( v63 || time >= v64 )
              {
                if ( time >= v64 )
                {
                  this->fields.currentEventIndex = currentEventIndex;
                  break;
                }
              }
              else
              {
                v65 = (UnityEngine_Object_o *)this->fields.animationComponent;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(v65, 0, 0) )
                {
                  wrapMode = (__int64)this->fields.animationComponent;
                  if ( !wrapMode )
                    goto LABEL_39;
                  wrapMode = (__int64)UnityEngine_Animation__get_Item(
                                        (UnityEngine_Animation_o *)wrapMode,
                                        this->fields.currentAnimName,
                                        0);
                  if ( !wrapMode )
                    goto LABEL_39;
                  UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)wrapMode, v60->fields.time, 0);
                  wrapMode = (__int64)this->fields.animationComponent;
                  if ( !wrapMode )
                    goto LABEL_39;
                  UnityEngine_Animation__Sample((UnityEngine_Animation_o *)wrapMode, 0);
                }
                else
                {
                  wrapMode = (__int64)this->fields.simpleAnimationComponent;
                  if ( !wrapMode )
                    goto LABEL_39;
                  wrapMode = (__int64)SimpleAnimation__get_Item(
                                        (SimpleAnimation_o *)wrapMode,
                                        this->fields.currentAnimName,
                                        0);
                  if ( !wrapMode )
                    goto LABEL_39;
                  v66 = *(_QWORD *)wrapMode;
                  *(float *)&v3 = v60->fields.time;
                  v67 = wrapMode;
                  v68 = *(unsigned __int16 *)(*(_QWORD *)wrapMode + 302LL);
                  if ( *(_WORD *)(*(_QWORD *)wrapMode + 302LL) )
                  {
                    v69 = (SimpleAnimation_State_c **)(*(_QWORD *)(v66 + 176) + 8LL);
                    while ( *(v69 - 1) != SimpleAnimation_State_TypeInfo )
                    {
                      --v68;
                      v69 += 2;
                      if ( !v68 )
                        goto LABEL_150;
                    }
                    v70 = v66 + 16LL * (*(_DWORD *)v69 + 4) + 312;
                  }
                  else
                  {
LABEL_150:
                    v70 = sub_1C87870(wrapMode, SimpleAnimation_State_TypeInfo, 4);
                  }
                  (*(void (__fastcall **)(__int64, _QWORD, long double))v70)(v67, *(_QWORD *)(v70 + 8), v3);
                  wrapMode = (__int64)this->fields.simpleAnimationComponent;
                  if ( !wrapMode )
                    goto LABEL_39;
                  SimpleAnimation__Sample((SimpleAnimation_o *)wrapMode, 0);
                }
                isDirty = this->fields.isDirty;
                this->fields.isDirty = 0;
                billBoard = (UnityEngine_Object_o *)this->fields.billBoard;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(billBoard, 0, 0) )
                {
                  wrapMode = (__int64)this->fields.billBoard;
                  if ( !wrapMode )
                    goto LABEL_39;
                  BillBoard__UpdateBillboard((BillBoard_o *)wrapMode, 0);
                }
                BattleFBXComponent__OnAnimEvent(this, v60, v73);
                v74 = this->fields.isDirty;
                this->fields.isDirty = v74 || isDirty;
                if ( v74 || isDirty )
                {
                  if ( !v74 )
                    this->fields.currentAnimTime = v60->fields.time;
                  this->fields.isDirty = 0;
                  return;
                }
                j = v57->max_length;
              }
            }
          }
        }
      }
      v75 = BattleFBXComponent_TypeInfo;
      if ( !BattleFBXComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
        v75 = BattleFBXComponent_TypeInfo;
      }
      v76 = (UnityEngine_Object_o *)this->fields.animationComponent;
      animFps = v75->static_fields->animFps;
      v78 = animFps * this->fields.currentAnimTime;
      if ( v78 == INFINITY )
        v79 = 0x80000000;
      else
        v79 = (int)v78;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v76, 0, 0) )
      {
        wrapMode = (__int64)this->fields.animationComponent;
        if ( !wrapMode )
          goto LABEL_39;
        wrapMode = (__int64)UnityEngine_Animation__get_Item(
                              (UnityEngine_Animation_o *)wrapMode,
                              this->fields.currentAnimName,
                              0);
        if ( !wrapMode )
          goto LABEL_39;
        UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)wrapMode, (float)v79 / animFps, 0);
      }
      else
      {
        wrapMode = (__int64)this->fields.simpleAnimationComponent;
        if ( !wrapMode )
          goto LABEL_39;
        wrapMode = (__int64)SimpleAnimation__get_Item((SimpleAnimation_o *)wrapMode, this->fields.currentAnimName, 0);
        if ( !wrapMode )
          goto LABEL_39;
        v80 = *(_QWORD *)wrapMode;
        v81 = wrapMode;
        v82 = *(unsigned __int16 *)(*(_QWORD *)wrapMode + 302LL);
        *(float *)&v3 = (float)v79 / animFps;
        if ( *(_WORD *)(*(_QWORD *)wrapMode + 302LL) )
        {
          v83 = (SimpleAnimation_State_c **)(*(_QWORD *)(v80 + 176) + 8LL);
          while ( *(v83 - 1) != SimpleAnimation_State_TypeInfo )
          {
            --v82;
            v83 += 2;
            if ( !v82 )
              goto LABEL_182;
          }
          v84 = v80 + 16LL * (*(_DWORD *)v83 + 4) + 312;
        }
        else
        {
LABEL_182:
          v84 = sub_1C87870(wrapMode, SimpleAnimation_State_TypeInfo, 4);
        }
        (*(void (__fastcall **)(__int64, _QWORD, long double))v84)(v81, *(_QWORD *)(v84 + 8), v3);
      }
      this->fields.currentAnimTime = v5 + this->fields.currentAnimTime;
    }
  }
}


System_Collections_IEnumerator_o *BattleFBXComponent__AnimationCheck(
        BattleFBXComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C45A5B & 1) == 0 )
  {
    sub_1C37058(&BattleFBXComponent__AnimationCheck_d__70_TypeInfo);
    byte_4C45A5B = 1;
  }
  v3 = sub_1C372A4(BattleFBXComponent__AnimationCheck_d__70_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


void BattleFBXComponent__AttachCl(BattleFBXComponent_o *this, const MethodInfo *method)
{
  ;
}


void BattleFBXComponent__Awake(BattleFBXComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( this->fields.isAutoPlay )
    BattleFBXComponent__playAnimation(this, this->fields.animename, v2);
}


void BattleFBXComponent__ChangeActorLimitCount(BattleFBXComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x20
  int32_t ServantId; // w21
  int32_t LimitCount; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C45A4F & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C45A4F = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                             (UnityEngine_Object_o *)Component_object,
                                             0,
                                             0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( Component_object )
    {
      ServantId = BattleActorControl__getServantId((BattleActorControl_o *)Component_object, 0);
      LimitCount = BattleActorControl__getLimitCount((BattleActorControl_o *)Component_object, 0);
      BattleFBXComponent__SetEvolutionLevel(this, ServantId, LimitCount, v7);
      return;
    }
LABEL_10:
    sub_1C372B4(gameObject);
  }
}


UnityEngine_GameObject_o *BattleFBXComponent__CreatePrefabNode(
        BattleFBXComponent_o *this,
        UnityEngine_Transform_o *node,
        int32_t svtId,
        int32_t limitcount,
        const MethodInfo *method)
{
  BattleFBXComponent_o *v8; // x19
  System_String_o *CommonAnimNames; // x23
  UnityEngine_Object_o *Manager__loadActorEffectFromActor; // x21
  bool v11; // w8
  Il2CppObject *v12; // x21
  bool v13; // w8
  Il2CppObject *v14; // x22
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  UnityEngine_Transform_o *transform; // x23
  BattleFBXComponent_o *v18; // x23
  BattleFBXComponent_o *v19; // x23
  BattleFBXComponent_o *v20; // x23
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  intptr_t m_CachedPtr; // x8
  _QWORD *v24; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v26; // x8
  System_Collections_Generic_Dictionary_object__object__o *actorEffectDict; // x22
  System_String_o *name; // x0
  BattleFBXComponent_o *v29; // x20
  bool v30; // w8
  Il2CppObject *v31; // x1
  BattleFBXComponent_o *v32; // x19

  v8 = this;
  if ( (byte_4C45A51 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__GameObject__Add__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__GameObject__ContainsKey__);
    sub_1C37058(&Method_UnityEngine_GameObject_AddComponent_ObjectScaleEnabler___);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&ServantAssetLoadManager_TypeInfo);
    this = (BattleFBXComponent_o *)sub_1C37058(&StringLiteral_16533/*"_aDd"*/);
    byte_4C45A51 = 1;
  }
  if ( !node )
    goto LABEL_43;
  this = (BattleFBXComponent_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)node, 0);
  if ( !this )
    goto LABEL_43;
  this = (BattleFBXComponent_o *)System_String__Split((System_String_o *)this, 0x5Fu, 0, 0);
  if ( !this )
    goto LABEL_43;
  if ( LODWORD(this->fields.m_CancellationTokenSource) <= 1 )
    sub_1C372BC(this);
  CommonAnimNames = (System_String_o *)this->fields.CommonAnimNames;
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  Manager__loadActorEffectFromActor = (UnityEngine_Object_o *)ServantAssetLoadManager__loadActorEffectFromActor(
                                                                svtId,
                                                                limitcount,
                                                                0,
                                                                CommonAnimNames,
                                                                0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v11 = UnityEngine_Object__op_Inequality(Manager__loadActorEffectFromActor, 0, 0);
  this = 0;
  if ( v11 )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v12 = UnityEngine_Object__Instantiate_object_(
            (Il2CppObject *)Manager__loadActorEffectFromActor,
            (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    v13 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v12, 0, 0);
    this = 0;
    if ( v13 )
    {
      if ( !v12 )
        goto LABEL_43;
      v14 = UnityEngine_GameObject__AddComponent_object_(
              (UnityEngine_GameObject_o *)v12,
              (const MethodInfo_313F0F0 *)Method_UnityEngine_GameObject_AddComponent_ObjectScaleEnabler___);
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v12, 0, 0);
      if ( !v14 )
        goto LABEL_43;
      v14[2].klass = (Il2CppClass *)node;
      sub_1C36FFC((CGThumbnailListItem_o *)&v14[2], (int32_t)node, v15, v16);
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v12, 0);
      this = (BattleFBXComponent_o *)UnityEngine_Transform__get_parent(node, 0);
      if ( !this )
        goto LABEL_43;
      this = (BattleFBXComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      if ( !transform )
        goto LABEL_43;
      UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)this, 0);
      this = (BattleFBXComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v12, 0);
      v18 = this;
      if ( !byte_4C3C921 )
      {
        this = (BattleFBXComponent_o *)sub_1C37058(&UnityEngine_Vector3_TypeInfo);
        byte_4C3C921 = 1;
      }
      if ( !v18 )
        goto LABEL_43;
      UnityEngine_Transform__set_localPosition(
        (UnityEngine_Transform_o *)v18,
        UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
        0);
      this = (BattleFBXComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v12, 0);
      v19 = this;
      if ( !byte_4C3C921 )
      {
        this = (BattleFBXComponent_o *)sub_1C37058(&UnityEngine_Vector3_TypeInfo);
        byte_4C3C921 = 1;
      }
      if ( !v19 )
        goto LABEL_43;
      UnityEngine_Transform__set_localEulerAngles(
        (UnityEngine_Transform_o *)v19,
        UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
        0);
      this = (BattleFBXComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v12, 0);
      v20 = this;
      if ( !byte_4C3C926 )
      {
        this = (BattleFBXComponent_o *)sub_1C37058(&UnityEngine_Vector3_TypeInfo);
        byte_4C3C926 = 1;
      }
      if ( !v20 )
        goto LABEL_43;
      UnityEngine_Transform__set_localScale(
        (UnityEngine_Transform_o *)v20,
        UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
        0);
      ObjectScaleEnabler__OnUpdate((ObjectScaleEnabler_o *)v14, 0);
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v12, 1, 0);
      this = (BattleFBXComponent_o *)v8->fields.PrefabNodes;
      if ( !this )
        goto LABEL_43;
      m_CachedPtr = this->fields.m_CachedPtr;
      v24 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !m_CachedPtr )
        goto LABEL_43;
      m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          v12,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
      }
      else
      {
        v26 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
        LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v26 + 32) = v12;
        sub_1C36FFC((CGThumbnailListItem_o *)(v26 + 32), (int32_t)v12, v21, v22);
      }
      actorEffectDict = (System_Collections_Generic_Dictionary_object__object__o *)v8->fields.actorEffectDict;
      this = (BattleFBXComponent_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)node, 0);
      if ( !actorEffectDict )
        goto LABEL_43;
      if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
              actorEffectDict,
              (Il2CppObject *)this,
              (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__GameObject__ContainsKey__) )
      {
        v32 = (BattleFBXComponent_o *)v8->fields.actorEffectDict;
        this = (BattleFBXComponent_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)node, 0);
        if ( v32 )
        {
          v31 = (Il2CppObject *)this;
          this = v32;
          goto LABEL_41;
        }
LABEL_43:
        sub_1C372B4(this);
      }
      name = UnityEngine_Object__get_name((UnityEngine_Object_o *)node, 0);
      this = (BattleFBXComponent_o *)System_String__Concat_63561656(name, (System_String_o *)StringLiteral_16533/*"_aDd"*/, 0);
      if ( !v8->fields.actorEffectDict )
        goto LABEL_43;
      v29 = this;
      v30 = System_Collections_Generic_Dictionary_object__object___ContainsKey(
              (System_Collections_Generic_Dictionary_object__object__o *)v8->fields.actorEffectDict,
              (Il2CppObject *)this,
              (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__GameObject__ContainsKey__);
      this = (BattleFBXComponent_o *)v12;
      if ( !v30 )
      {
        this = (BattleFBXComponent_o *)v8->fields.actorEffectDict;
        if ( this )
        {
          v31 = (Il2CppObject *)v29;
LABEL_41:
          System_Collections_Generic_Dictionary_object__object___Add(
            (System_Collections_Generic_Dictionary_object__object__o *)this,
            v31,
            v12,
            (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__GameObject__Add__);
          return (UnityEngine_GameObject_o *)v12;
        }
        goto LABEL_43;
      }
    }
  }
  return (UnityEngine_GameObject_o *)this;
}


void BattleFBXComponent__DebugPrint(BattleFBXComponent_o *this, System_String_o *str, const MethodInfo *method)
{
  ;
}


void BattleFBXComponent__DestroyPrefabNode(BattleFBXComponent_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_GameObject__o *PrefabNodes; // x0
  Il2CppObject *current; // x20
  __int64 v5; // x0
  struct System_Collections_Generic_List_GameObject__o *v6; // x8
  int32_t size; // w2
  int v8; // w9
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C45A4E & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C45A4E = 1;
  }
  memset(&v9, 0, sizeof(v9));
  PrefabNodes = this->fields.PrefabNodes;
  if ( PrefabNodes )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v9,
      (System_Collections_Generic_List_object__o *)PrefabNodes,
      (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v9,
              (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v9.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71266752((UnityEngine_Object_o *)current, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v9,
      (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    v6 = this->fields.PrefabNodes;
    if ( !v6 )
      sub_1C372B4(v5);
    size = v6->fields._size;
    v8 = v6->fields._version + 1;
    v6->fields._size = 0;
    v6->fields._version = v8;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v6->fields._items, 0, size, 0);
  }
}


float BattleFBXComponent__GetCurrentTimeScale(BattleFBXComponent_o *this, const MethodInfo *method)
{
  return this->fields.timescale;
}


UnityEngine_GameObject_o *BattleFBXComponent__GetPrefabNode(
        BattleFBXComponent_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_GameObject__o *PrefabNodes; // x0
  _BOOL8 v6; // x0
  Il2CppObject *current; // x20
  UnityEngine_Object_o *transform; // x0
  System_String_o *v9; // x0
  System_String_o *v10; // x21
  _DWORD *v11; // x22
  _BOOL8 v12; // x0
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C45A5F & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C37058(&StringLiteral_685/*"(Clone)"*/);
    byte_4C45A5F = 1;
  }
  memset(&v15, 0, sizeof(v15));
  PrefabNodes = this->fields.PrefabNodes;
  if ( !PrefabNodes )
    sub_1C372B4(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    (System_Collections_Generic_List_object__o *)PrefabNodes,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v15 = v14;
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v15,
           (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    if ( !v6 )
      break;
    current = v15.fields._current;
    if ( !v15.fields._current )
      sub_1C372B4(v6);
    transform = (UnityEngine_Object_o *)UnityEngine_GameObject__get_transform(
                                          (UnityEngine_GameObject_o *)v15.fields._current,
                                          0);
    if ( !transform )
      sub_1C372B4(0);
    v9 = UnityEngine_Object__get_name(transform, 0);
    v10 = v9;
    if ( !v9 )
      sub_1C372B4(0);
    v11 = StringLiteral_685/*"(Clone)"*/;
    v12 = System_String__EndsWith(v9, (System_String_o *)StringLiteral_685/*"(Clone)"*/, 0);
    if ( v12 )
    {
      if ( !v11 )
        sub_1C372B4(v12);
      v10 = System_String__Substring_63607580(v10, 0, v10->fields._stringLength - v11[4], 0);
      if ( !v10 )
        sub_1C372B4(0);
    }
    if ( System_String__Equals_63596960(v10, name, 0) )
      goto LABEL_15;
  }
  current = 0;
LABEL_15:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v15,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (UnityEngine_GameObject_o *)current;
}


System_String_o *BattleFBXComponent__GetRealAnimName(
        BattleFBXComponent_o *this,
        System_String_o *targetName,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__string__o *RealAnimNames; // x0
  struct System_Collections_Generic_Dictionary_string__string__o *v6; // x0

  if ( (byte_4C45A6A & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    byte_4C45A6A = 1;
  }
  RealAnimNames = this->fields.RealAnimNames;
  if ( !RealAnimNames
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)RealAnimNames,
          (Il2CppObject *)targetName,
          (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
  {
    return targetName;
  }
  v6 = this->fields.RealAnimNames;
  if ( !v6 )
    sub_1C372B4(0);
  return (System_String_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                              (System_Collections_Generic_Dictionary_object__object__o *)v6,
                              (Il2CppObject *)targetName,
                              (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
}


void BattleFBXComponent__InitAnimNameDict(BattleFBXComponent_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__string__o *RealAnimNames; // x0

  if ( (byte_4C45A48 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__string__Clear__);
    byte_4C45A48 = 1;
  }
  RealAnimNames = this->fields.RealAnimNames;
  if ( !RealAnimNames
    || (System_Collections_Generic_Dictionary_object__object___Clear(
          (System_Collections_Generic_Dictionary_object__object__o *)RealAnimNames,
          (const MethodInfo_34637B8 *)Method_System_Collections_Generic_Dictionary_string__string__Clear__),
        (RealAnimNames = this->fields.CommonAnimNames) == 0) )
  {
    sub_1C372B4(RealAnimNames);
  }
  System_Collections_Generic_Dictionary_object__object___Clear(
    (System_Collections_Generic_Dictionary_object__object__o *)RealAnimNames,
    (const MethodInfo_34637B8 *)Method_System_Collections_Generic_Dictionary_string__string__Clear__);
}


bool BattleFBXComponent__IsMatchCurrentCommonAnimName(
        BattleFBXComponent_o *this,
        int32_t animName,
        bool exceptNullOrEmpty,
        const MethodInfo *method)
{
  System_String_o *currentCommonAnimName; // x19
  System_String_o *v8; // x0
  System_String_o *v10; // x0
  System_Enum_o v12; // [xsp+8h] [xbp-48h] BYREF
  int32_t v13; // [xsp+18h] [xbp-38h]

  if ( (byte_4C45A46 & 1) == 0 )
  {
    sub_1C37058(&HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo);
    byte_4C45A46 = 1;
  }
  currentCommonAnimName = this->fields.currentCommonAnimName;
  if ( exceptNullOrEmpty )
  {
    v12.klass = (System_Enum_c *)HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo;
    v12.monitor = (void *)-1LL;
    v13 = animName;
    v8 = System_Enum__ToString(&v12, 0);
    return BasicHelper__EqualExceptNullOrEmpty(currentCommonAnimName, v8, 0);
  }
  else
  {
    v12.klass = (System_Enum_c *)HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo;
    v12.monitor = (void *)-1LL;
    v13 = animName;
    v10 = System_Enum__ToString(&v12, 0);
    if ( !currentCommonAnimName )
      sub_1C372B4(v10);
    return System_String__Equals_63596960(currentCommonAnimName, v10, 0);
  }
}


bool BattleFBXComponent__IsYTransparenceShader(BattleFBXComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *enableRendererList; // x0
  int32_t v3; // w20
  int32_t size; // w27
  Il2CppObject *Item; // x21
  __int64 v6; // x8
  System_Collections_Generic_List_object__o *v7; // x21
  unsigned __int64 v8; // x29
  UnityEngine_Object_o *v9; // x23
  __int64 v10; // x22
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  BattleFBXComponent_c *v13; // x0
  System_Object_array *yTransparenceShaderNames; // x23
  System_Func_object__bool__o *v15; // x24

  if ( (byte_4C45A62 & 1) == 0 )
  {
    sub_1C37058(&Method_BasicHelper_Any_string____78108176);
    sub_1C37058(&BattleFBXComponent_TypeInfo);
    sub_1C37058(&System_Func_string__bool__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_Renderer__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_Renderer__get_Item__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_BattleFBXComponent___c__DisplayClass80_0__IsYTransparenceShader_b__0__);
    sub_1C37058(&BattleFBXComponent___c__DisplayClass80_0_TypeInfo);
    byte_4C45A62 = 1;
  }
  enableRendererList = (System_Collections_Generic_List_object__o *)this->fields.enableRendererList;
  if ( !enableRendererList )
LABEL_26:
    sub_1C372B4(enableRendererList);
  v3 = 0;
  while ( 1 )
  {
    size = enableRendererList->fields._size;
    if ( v3 >= size )
      return v3 < size;
    Item = System_Collections_Generic_List_object___get_Item(
             enableRendererList,
             v3,
             (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_Renderer__get_Item__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    enableRendererList = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Equality(
                                                                        (UnityEngine_Object_o *)Item,
                                                                        0,
                                                                        0);
    if ( ((unsigned __int8)enableRendererList & 1) == 0 )
    {
      if ( !Item )
        goto LABEL_26;
      if ( UnityEngine_Renderer__get_sharedMaterials((UnityEngine_Renderer_o *)Item, 0) )
      {
        enableRendererList = (System_Collections_Generic_List_object__o *)UnityEngine_Renderer__get_sharedMaterials(
                                                                            (UnityEngine_Renderer_o *)Item,
                                                                            0);
        if ( !enableRendererList )
          goto LABEL_26;
        v6 = *(_QWORD *)&enableRendererList->fields._size;
        v7 = enableRendererList;
        if ( (int)v6 >= 1 )
        {
          v8 = 0;
          do
          {
            if ( v8 >= (unsigned int)v6 )
              sub_1C372BC(enableRendererList);
            v9 = (UnityEngine_Object_o *)*((_QWORD *)&v7->fields._syncRoot + v8);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            enableRendererList = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Inequality(
                                                                                v9,
                                                                                0,
                                                                                0);
            if ( ((unsigned __int8)enableRendererList & 1) != 0 )
            {
              v10 = sub_1C372A4(BattleFBXComponent___c__DisplayClass80_0_TypeInfo);
              System_Object___ctor((Il2CppObject *)v10, 0);
              if ( !v9 )
                goto LABEL_26;
              enableRendererList = (System_Collections_Generic_List_object__o *)UnityEngine_Material__get_shader(
                                                                                  (UnityEngine_Material_o *)v9,
                                                                                  0);
              if ( !enableRendererList )
                goto LABEL_26;
              enableRendererList = (System_Collections_Generic_List_object__o *)UnityEngine_Object__get_name(
                                                                                  (UnityEngine_Object_o *)enableRendererList,
                                                                                  0);
              if ( !v10 )
                goto LABEL_26;
              *(_QWORD *)(v10 + 16) = enableRendererList;
              sub_1C36FFC((CGThumbnailListItem_o *)(v10 + 16), (int32_t)enableRendererList, v11, v12);
              v13 = BattleFBXComponent_TypeInfo;
              if ( !BattleFBXComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
                v13 = BattleFBXComponent_TypeInfo;
              }
              yTransparenceShaderNames = (System_Object_array *)v13->static_fields->yTransparenceShaderNames;
              v15 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_string__bool__TypeInfo);
              System_Func_object__bool____ctor(
                v15,
                (Il2CppObject *)v10,
                Method_BattleFBXComponent___c__DisplayClass80_0__IsYTransparenceShader_b__0__,
                0);
              enableRendererList = (System_Collections_Generic_List_object__o *)BasicHelper__Any_object__51187876(
                                                                                  yTransparenceShaderNames,
                                                                                  (System_Func_T__bool__o *)v15,
                                                                                  (const MethodInfo_30D10A4 *)Method_BasicHelper_Any_string____78108176);
              if ( ((unsigned __int8)enableRendererList & 1) != 0 )
                return v3 < size;
            }
            LODWORD(v6) = v7->fields._size;
          }
          while ( (__int64)++v8 < (int)v6 );
        }
      }
    }
    ++v3;
    enableRendererList = (System_Collections_Generic_List_object__o *)this->fields.enableRendererList;
    if ( !enableRendererList )
      goto LABEL_26;
  }
}


void BattleFBXComponent__OnAnimEvent(
        BattleFBXComponent_o *this,
        BattleFBXComponent_AnimEvent_o *ev,
        const MethodInfo *method)
{
  BattleFBXComponent_c *v5; // x0
  struct BattleFBXComponent_onEventDelegate_o *OnEvent; // x8

  if ( (byte_4C45A4C & 1) == 0 )
  {
    sub_1C37058(&BattleFBXComponent_TypeInfo);
    byte_4C45A4C = 1;
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
        sub_1C372B4(v5);
      ((void (__fastcall *)(intptr_t, struct System_String_o *, intptr_t))OnEvent->fields.invoke_impl)(
        OnEvent->fields.method_code,
        ev->fields.tag,
        OnEvent->fields.method);
    }
  }
}


void BattleFBXComponent__OnAnimEvent_46062332(
        BattleFBXComponent_o *this,
        UnityEngine_AnimationEvent_o *ev,
        const MethodInfo *method)
{
  System_String_o *stringParameter; // x0
  struct BattleFBXComponent_onEventDelegate_o *OnEvent; // x8

  if ( (byte_4C45A5C & 1) == 0 )
  {
    sub_1C37058(&BattleFBXComponent_TypeInfo);
    byte_4C45A5C = 1;
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
    stringParameter = UnityEngine_AnimationEvent__get_stringParameter(ev, 0);
    if ( !stringParameter )
      goto LABEL_13;
    stringParameter = (System_String_o *)System_String__Split(stringParameter, 0x3Au, 0, 0);
    if ( !stringParameter )
      goto LABEL_13;
    if ( !LODWORD(stringParameter[1].klass) )
      sub_1C372BC(stringParameter);
    OnEvent = this->fields.OnEvent;
    if ( !OnEvent )
LABEL_13:
      sub_1C372B4(stringParameter);
    ((void (__fastcall *)(intptr_t, void *, intptr_t))OnEvent->fields.invoke_impl)(
      OnEvent->fields.method_code,
      stringParameter[1].monitor,
      OnEvent->fields.method);
  }
}


void BattleFBXComponent__OnEnable(BattleFBXComponent_o *this, const MethodInfo *method)
{
  System_String_o *animename; // x0
  const MethodInfo *v4; // x2
  System_String_o *v5; // x20
  System_String_o *v6; // x0
  System_String_o *v7; // x0
  const MethodInfo *v8; // x2
  System_Enum_o v9; // [xsp+8h] [xbp-48h] BYREF
  int v10; // [xsp+18h] [xbp-38h]

  if ( (byte_4C45A5E & 1) == 0 )
  {
    sub_1C37058(&HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo);
    sub_1C37058(&StringLiteral_24718/*"wait"*/);
    byte_4C45A5E = 1;
  }
  animename = this->fields.animename;
  if ( animename )
  {
    if ( System_String__StartsWith(animename, (System_String_o *)StringLiteral_24718/*"wait"*/, 0) )
    {
      BattleFBXComponent__playAnimation(this, (System_String_o *)StringLiteral_24718/*"wait"*/, v4);
    }
    else
    {
      v5 = this->fields.animename;
      v10 = 46;
      v9.klass = (System_Enum_c *)HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo;
      v9.monitor = (void *)-1LL;
      v6 = System_Enum__ToString(&v9, 0);
      if ( System_String__op_Equality(v5, v6, 0) )
      {
        v10 = 46;
        v9.klass = (System_Enum_c *)HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo;
        v9.monitor = (void *)-1LL;
        v7 = System_Enum__ToString(&v9, 0);
        BattleFBXComponent__playAnimation(this, v7, v8);
      }
    }
  }
}


void BattleFBXComponent__RevertDefaultAnimation(BattleFBXComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *simpleAnimationComponent; // x20
  UnityEngine_AnimationClip_o **p_defSimpleAnimClip; // x20
  UnityEngine_Object_o *defSimpleAnimClip; // x21
  SimpleAnimation_o *v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  UnityEngine_Object_o *animationComponent; // x20
  UnityEngine_Object_o *defAnimClip; // x21

  if ( (byte_4C45A6C & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C45A6C = 1;
  }
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0, 0) )
  {
    p_defSimpleAnimClip = &this->fields.defSimpleAnimClip;
    defSimpleAnimClip = (UnityEngine_Object_o *)this->fields.defSimpleAnimClip;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(defSimpleAnimClip, 0, 0) )
    {
      v6 = this->fields.simpleAnimationComponent;
      if ( v6 )
      {
        SimpleAnimation__set_clip(v6, *p_defSimpleAnimClip, 0);
LABEL_19:
        *p_defSimpleAnimClip = 0;
        sub_1C36FFC((CGThumbnailListItem_o *)p_defSimpleAnimClip, 0, v7, v8);
        return;
      }
      goto LABEL_21;
    }
  }
  animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(animationComponent, 0, 0) )
  {
    p_defSimpleAnimClip = &this->fields.defAnimClip;
    defAnimClip = (UnityEngine_Object_o *)this->fields.defAnimClip;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(defAnimClip, 0, 0) )
    {
      v6 = (SimpleAnimation_o *)this->fields.animationComponent;
      if ( v6 )
      {
        UnityEngine_Animation__set_clip((UnityEngine_Animation_o *)v6, *p_defSimpleAnimClip, 0);
        goto LABEL_19;
      }
LABEL_21:
      sub_1C372B4(v6);
    }
  }
}


void BattleFBXComponent__RevertShaderFloatProperty(BattleFBXComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *tempMaterialPropertyDict; // x0
  __int128 v4; // kr00_16
  float v5; // s8
  _BOOL8 v6; // x0
  __int128 v7; // [xsp+0h] [xbp-80h] BYREF
  __int128 v8; // [xsp+10h] [xbp-70h]
  __int128 v9; // [xsp+20h] [xbp-60h]

  if ( (byte_4C45A65 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_KeyValuePair_string__Material___float__Clear__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_KeyValuePair_string__Material___float__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_string__Material___float__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_string__Material___float__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_string__Material___float__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_KeyValuePair_string__Material___float__get_Key__);
    sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_string__Material__get_Key__);
    sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_KeyValuePair_string__Material___float__get_Value__);
    sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_string__Material__get_Value__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C45A65 = 1;
  }
  v8 = 0u;
  v9 = 0u;
  v7 = 0u;
  tempMaterialPropertyDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.tempMaterialPropertyDict;
  if ( !tempMaterialPropertyDict )
    goto LABEL_14;
  System_Collections_Generic_Dictionary_KeyValuePair_object__object___float___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v7,
    tempMaterialPropertyDict,
    (const MethodInfo_33B8C44 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_string__Material___float__GetEnumerator__);
  while ( System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_object__object___float___MoveNext(
            (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v7,
            (const MethodInfo_3545A14 *)Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_string__Material___float__MoveNext__) )
  {
    v4 = v8;
    v5 = *(float *)&v9;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = UnityEngine_Object__op_Inequality(*((UnityEngine_Object_o **)&v4 + 1), 0, 0);
    if ( v6 )
    {
      if ( !*((_QWORD *)&v4 + 1) )
        sub_1C372B4(v6);
      UnityEngine_Material__SetFloat(*((UnityEngine_Material_o **)&v4 + 1), (System_String_o *)v4, v5, 0);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_object__object___float___Dispose(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v7,
    (const MethodInfo_3545B50 *)Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_string__Material___float__Dispose__);
  tempMaterialPropertyDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.tempMaterialPropertyDict;
  if ( !tempMaterialPropertyDict )
LABEL_14:
    sub_1C372B4(tempMaterialPropertyDict);
  System_Collections_Generic_Dictionary_KeyValuePair_object__object___float___Clear(
    tempMaterialPropertyDict,
    (const MethodInfo_33B89B0 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_string__Material___float__Clear__);
}


void BattleFBXComponent__SetActiveActorEffectAll(BattleFBXComponent_o *this, bool isActive, const MethodInfo *method)
{
  _BOOL4 v3; // w19
  struct System_Collections_Generic_Dictionary_string__GameObject__o *actorEffectDict; // x0
  _BOOL8 v6; // x0
  Il2CppObject *value; // x20
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v8; // [xsp+0h] [xbp-60h] BYREF

  v3 = isActive;
  if ( (byte_4C45A69 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__GameObject__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_string__GameObject__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_string__GameObject__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_string__GameObject__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_string__GameObject__get_Value__);
    byte_4C45A69 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  actorEffectDict = this->fields.actorEffectDict;
  if ( !actorEffectDict )
    sub_1C372B4(0);
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v8,
    (System_Collections_Generic_Dictionary_object__object__o *)actorEffectDict,
    (const MethodInfo_3463A60 *)Method_System_Collections_Generic_Dictionary_string__GameObject__GetEnumerator__);
  while ( 1 )
  {
    v6 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
           &v8,
           (const MethodInfo_35600DC *)Method_System_Collections_Generic_Dictionary_Enumerator_string__GameObject__MoveNext__);
    if ( !v6 )
      break;
    value = v8.fields._current.fields.value;
    if ( !v8.fields._current.fields.value )
      sub_1C372B4(v6);
    if ( ((UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)v8.fields._current.fields.value, 0)
         ^ v3)
        & 1) != 0 )
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)value, v3, 0);
  }
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v8,
    (const MethodInfo_35601FC *)Method_System_Collections_Generic_Dictionary_Enumerator_string__GameObject__Dispose__);
}


void BattleFBXComponent__SetActiveActorEffectFromEffectName(
        BattleFBXComponent_o *this,
        System_String_o *effectName,
        bool isActive,
        const MethodInfo *method)
{
  _BOOL4 v4; // w19
  struct System_Collections_Generic_Dictionary_string__GameObject__o *actorEffectDict; // x0
  Il2CppObject *value; // x21
  _BOOL8 v9; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v10; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v11; // [xsp+30h] [xbp-60h] BYREF

  v4 = isActive;
  if ( (byte_4C45A68 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__GameObject__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_string__GameObject__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_string__GameObject__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_string__GameObject__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_string__GameObject__get_Key__);
    sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_string__GameObject__get_Value__);
    byte_4C45A68 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  actorEffectDict = this->fields.actorEffectDict;
  if ( !actorEffectDict )
    sub_1C372B4(0);
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v10,
    (System_Collections_Generic_Dictionary_object__object__o *)actorEffectDict,
    (const MethodInfo_3463A60 *)Method_System_Collections_Generic_Dictionary_string__GameObject__GetEnumerator__);
  v11 = v10;
  while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            &v11,
            (const MethodInfo_35600DC *)Method_System_Collections_Generic_Dictionary_Enumerator_string__GameObject__MoveNext__) )
  {
    if ( !v11.fields._current.fields.key )
      sub_1C372B4(0);
    value = v11.fields._current.fields.value;
    v9 = System_String__Contains((System_String_o *)v11.fields._current.fields.key, effectName, 0);
    if ( v9 )
    {
      if ( !value )
        sub_1C372B4(v9);
      if ( ((UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)value, 0) ^ v4) & 1) != 0 )
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)value, v4, 0);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v11,
    (const MethodInfo_35601FC *)Method_System_Collections_Generic_Dictionary_Enumerator_string__GameObject__Dispose__);
}


void BattleFBXComponent__SetActiveActorEffectFromNodeName(
        BattleFBXComponent_o *this,
        System_String_o *nodeName,
        bool isActive,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *actorEffectDict; // x0
  UnityEngine_GameObject_o *v8; // x20

  if ( (byte_4C45A67 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__GameObject__ContainsKey__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__GameObject__get_Item__);
    byte_4C45A67 = 1;
  }
  actorEffectDict = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.actorEffectDict;
  if ( !actorEffectDict )
    goto LABEL_10;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          actorEffectDict,
          (Il2CppObject *)nodeName,
          (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__GameObject__ContainsKey__) )
    return;
  actorEffectDict = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.actorEffectDict;
  if ( !actorEffectDict
    || (actorEffectDict = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                       actorEffectDict,
                                                                                       (Il2CppObject *)nodeName,
                                                                                       (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__GameObject__get_Item__)) == 0 )
  {
LABEL_10:
    sub_1C372B4(actorEffectDict);
  }
  v8 = (UnityEngine_GameObject_o *)actorEffectDict;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)actorEffectDict, 0) != isActive )
    UnityEngine_GameObject__SetActive(v8, isActive, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattleFBXComponent__SetConnectPrefabNode(
        BattleFBXComponent_o *this,
        System_String_o *name,
        bool isConnect,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *PrefabNode; // x21
  const MethodInfo *v8; // x3

  if ( (byte_4C45A60 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C45A60 = 1;
  }
  PrefabNode = BattleFBXComponent__GetPrefabNode(this, name, (const MethodInfo *)isConnect);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)PrefabNode, 0, 0) )
    BattleFBXComponent__SetConnectPrefabNode_46065080(this, PrefabNode, isConnect, v8);
}


void BattleFBXComponent__SetConnectPrefabNode_46065080(
        BattleFBXComponent_o *this,
        UnityEngine_GameObject_o *obj,
        bool isConnect,
        const MethodInfo *method)
{
  UnityEngine_Component_o *v6; // x20
  UnityEngine_Object_o *Component_object; // x20
  UnityEngine_Transform_o *monitor; // x20
  BattleFBXComponent_o *v9; // x21
  BattleFBXComponent_o *v10; // x21
  Il2CppObject *v11; // x20
  UnityEngine_Transform_o *transform; // x21
  Il2CppObject *v13; // x20

  v6 = (UnityEngine_Component_o *)this;
  if ( (byte_4C45A61 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_BattleActorControl___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_ObjectScaleEnabler___);
    this = (BattleFBXComponent_o *)sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C45A61 = 1;
  }
  if ( !obj )
    goto LABEL_29;
  if ( isConnect )
  {
    Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 obj,
                                                 (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_ObjectScaleEnabler___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattleFBXComponent_o *)UnityEngine_Object__op_Inequality(Component_object, 0, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_29;
      monitor = (UnityEngine_Transform_o *)Component_object[1].monitor;
      this = (BattleFBXComponent_o *)UnityEngine_GameObject__get_transform(obj, 0);
      if ( !monitor )
        goto LABEL_29;
      v9 = this;
      this = (BattleFBXComponent_o *)UnityEngine_Transform__get_parent(monitor, 0);
      if ( !this )
        goto LABEL_29;
      this = (BattleFBXComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      if ( !v9 )
        goto LABEL_29;
      UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)v9, (UnityEngine_Transform_o *)this, 0);
      this = (BattleFBXComponent_o *)UnityEngine_GameObject__get_transform(obj, 0);
      v10 = this;
      if ( !byte_4C3C926 )
      {
        this = (BattleFBXComponent_o *)sub_1C37058(&UnityEngine_Vector3_TypeInfo);
        byte_4C3C926 = 1;
      }
      if ( !v10 )
        goto LABEL_29;
      UnityEngine_Transform__set_localScale(
        (UnityEngine_Transform_o *)v10,
        UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
        0);
      v11 = UnityEngine_Component__GetComponent_object_(
              (UnityEngine_Component_o *)monitor,
              (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_BattleActorControl___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (BattleFBXComponent_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v11, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( v11 )
        {
          BattleActorControl__AddChildNodesRenderer((BattleActorControl_o *)v11, obj, 0);
          return;
        }
LABEL_29:
        sub_1C372B4(this);
      }
    }
  }
  else
  {
    transform = UnityEngine_GameObject__get_transform(obj, 0);
    this = (BattleFBXComponent_o *)UnityEngine_Component__get_transform(v6, 0);
    if ( !this )
      goto LABEL_29;
    this = (BattleFBXComponent_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)this, 0);
    if ( !transform )
      goto LABEL_29;
    UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)this, 0);
    this = (BattleFBXComponent_o *)UnityEngine_Component__get_gameObject(v6, 0);
    if ( !this )
      goto LABEL_29;
    v13 = UnityEngine_GameObject__GetComponent_object_(
            (UnityEngine_GameObject_o *)this,
            (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattleFBXComponent_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v13, 0, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !v13 )
        goto LABEL_29;
      BattleActorControl__RemoveChildNodesRenderer((BattleActorControl_o *)v13, obj, 0);
    }
  }
}


void BattleFBXComponent__SetEvolutionLevel(
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
    sub_1C372B4(0);
  gameObject = UnityEngine_Component__get_gameObject(rootTransform, 0);
  BattleFBXComponent__inSetEvolutionLevel(this, gameObject, svtId, limitcount, v9);
}


void BattleFBXComponent__SetTempDefaultAnimation(
        BattleFBXComponent_o *this,
        System_String_o *updateAnimName,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  System_String_o *RealAnimName; // x0
  UnityEngine_Object_o *simpleAnimationComponent; // x21
  System_String_o *v8; // x20
  __int64 v9; // x0
  struct SimpleAnimation_o *v10; // x8
  UnityEngine_Object_o *m_Clip; // x21
  SimpleAnimation_State_o *Item; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v14; // x20
  __int64 v15; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v17; // x0
  UnityEngine_Object_o *animationComponent; // x21
  UnityEngine_Object_o *clip; // x21
  UnityEngine_TrackedReference_o *v20; // x20
  UnityEngine_Object_o *v21; // x21
  UnityEngine_Object_o *v22; // x22
  struct UnityEngine_AnimationClip_o *v23; // x0
  struct UnityEngine_AnimationClip_o **p_defAnimClip; // x19
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  UnityEngine_Animation_o *v27; // x19
  struct SimpleAnimation_o *v28; // x8
  UnityEngine_Object_o *v29; // x21
  UnityEngine_Object_o *v30; // x22
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  struct SimpleAnimation_o *v33; // x8
  struct UnityEngine_AnimationClip_o *v34; // x1
  struct UnityEngine_AnimationClip_o **p_defSimpleAnimClip; // x19
  SimpleAnimation_State_c *v36; // x8
  SimpleAnimation_o *v37; // x19
  __int64 v38; // x9
  SimpleAnimation_State_c **v39; // x10
  __int64 v40; // x0

  if ( (byte_4C45A6B & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&SimpleAnimation_State_TypeInfo);
    byte_4C45A6B = 1;
  }
  if ( !System_String__IsNullOrEmpty(updateAnimName, 0) )
  {
    RealAnimName = BattleFBXComponent__GetRealAnimName(this, updateAnimName, v5);
    simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
    v8 = RealAnimName;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v9 = UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0, 0);
    if ( (v9 & 1) == 0 )
      goto LABEL_18;
    v10 = this->fields.simpleAnimationComponent;
    if ( !v10 )
      goto LABEL_50;
    m_Clip = (UnityEngine_Object_o *)v10->fields.m_Clip;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(m_Clip, 0, 0) )
    {
      v9 = (__int64)this->fields.simpleAnimationComponent;
      if ( !v9 )
        goto LABEL_50;
      Item = SimpleAnimation__get_Item((SimpleAnimation_o *)v9, v8, 0);
      if ( Item )
      {
        klass = Item->klass;
        v14 = Item;
        v15 = *(unsigned __int16 *)&Item->klass->_2.rank;
        if ( *(_WORD *)&Item->klass->_2.rank )
        {
          p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
          while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            --v15;
            p_offset += 2;
            if ( !v15 )
              goto LABEL_17;
          }
          v17 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 14];
        }
        else
        {
LABEL_17:
          v17 = sub_1C87870(Item, SimpleAnimation_State_TypeInfo, 14);
        }
        v9 = (*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v17)(v14, *(_QWORD *)(v17 + 8));
        v28 = this->fields.simpleAnimationComponent;
        if ( !v28 )
          goto LABEL_50;
        v29 = (UnityEngine_Object_o *)v9;
        v30 = (UnityEngine_Object_o *)v28->fields.m_Clip;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v9 = UnityEngine_Object__op_Inequality(v29, v30, 0);
        if ( (v9 & 1) != 0 )
        {
          v33 = this->fields.simpleAnimationComponent;
          if ( v33 )
          {
            v34 = v33->fields.m_Clip;
            this->fields.defSimpleAnimClip = v34;
            p_defSimpleAnimClip = &this->fields.defSimpleAnimClip;
            sub_1C36FFC((CGThumbnailListItem_o *)p_defSimpleAnimClip, (int32_t)v34, v31, v32);
            v36 = v14->klass;
            v37 = (SimpleAnimation_o *)*(p_defSimpleAnimClip - 17);
            v38 = *(unsigned __int16 *)&v14->klass->_2.rank;
            if ( *(_WORD *)&v14->klass->_2.rank )
            {
              v39 = (SimpleAnimation_State_c **)&v36->_1.interfaceOffsets->offset;
              while ( *(v39 - 1) != SimpleAnimation_State_TypeInfo )
              {
                --v38;
                v39 += 2;
                if ( !v38 )
                  goto LABEL_45;
              }
              v40 = (__int64)&v36->vtable[*(_DWORD *)v39 + 14];
            }
            else
            {
LABEL_45:
              v40 = sub_1C87870(v14, SimpleAnimation_State_TypeInfo, 14);
            }
            v9 = (*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v40)(v14, *(_QWORD *)(v40 + 8));
            if ( v37 )
            {
              SimpleAnimation__set_clip(v37, (UnityEngine_AnimationClip_o *)v9, 0);
              return;
            }
          }
LABEL_50:
          sub_1C372B4(v9);
        }
      }
    }
    else
    {
LABEL_18:
      animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(animationComponent, 0, 0) )
      {
        v9 = (__int64)this->fields.animationComponent;
        if ( !v9 )
          goto LABEL_50;
        clip = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip((UnityEngine_Animation_o *)v9, 0);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(clip, 0, 0) )
        {
          v9 = (__int64)this->fields.animationComponent;
          if ( !v9 )
            goto LABEL_50;
          v20 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item((UnityEngine_Animation_o *)v9, v8, 0);
          v9 = UnityEngine_TrackedReference__op_Inequality(v20, 0, 0);
          if ( (v9 & 1) != 0 )
          {
            if ( !v20 )
              goto LABEL_50;
            v9 = (__int64)UnityEngine_AnimationState__get_clip((UnityEngine_AnimationState_o *)v20, 0);
            if ( !this->fields.animationComponent )
              goto LABEL_50;
            v21 = (UnityEngine_Object_o *)v9;
            v22 = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(this->fields.animationComponent, 0);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(v21, v22, 0) )
            {
              v9 = (__int64)this->fields.animationComponent;
              if ( v9 )
              {
                v23 = UnityEngine_Animation__get_clip((UnityEngine_Animation_o *)v9, 0);
                this->fields.defAnimClip = v23;
                p_defAnimClip = &this->fields.defAnimClip;
                sub_1C36FFC((CGThumbnailListItem_o *)p_defAnimClip, (int32_t)v23, v25, v26);
                v27 = (UnityEngine_Animation_o *)*(p_defAnimClip - 19);
                v9 = (__int64)UnityEngine_AnimationState__get_clip((UnityEngine_AnimationState_o *)v20, 0);
                if ( v27 )
                {
                  UnityEngine_Animation__set_clip(v27, (UnityEngine_AnimationClip_o *)v9, 0);
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


void BattleFBXComponent__SetTempShaderFloatProperty(
        BattleFBXComponent_o *this,
        float value,
        System_String_o *propertyName,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *enableRendererList; // x0
  const MethodInfo_37A2D54 **v8; // x24
  UnityEngine_Object_c **v9; // x25
  Il2CppObject **v10; // x20
  const MethodInfo_33B8A1C **v11; // x27
  int32_t v12; // w21
  Il2CppObject *Item; // x22
  __int64 v14; // x8
  System_Collections_Generic_List_object__o *v15; // x22
  unsigned __int64 v16; // x29
  Il2CppObject **p_syncRoot; // x28
  UnityEngine_Object_o *v18; // x23
  const MethodInfo_36DBB40 *v19; // x4
  System_Collections_Generic_List_object__o *v20; // x21
  const MethodInfo_33B8A1C **v21; // x22
  Il2CppObject **v22; // x27
  UnityEngine_Object_c **v23; // x20
  const MethodInfo_37A2D54 **v24; // x28
  System_String_o *v25; // x1
  BattleFBXComponent_o *v26; // x19
  System_Collections_Generic_Dictionary_TKey__TValue__o *tempMaterialPropertyDict; // x24
  Il2CppObject *key; // x25
  Il2CppObject *v29; // x26
  UnityEngine_Material_o *v30; // x0
  System_String_o *v31; // x23
  float Float; // s0
  Il2CppObject **v33; // [xsp+8h] [xbp-88h]
  System_Collections_Generic_KeyValuePair_object__object__o v34; // [xsp+10h] [xbp-80h] BYREF
  int32_t v35; // [xsp+2Ch] [xbp-64h]
  System_Collections_Generic_KeyValuePair_object__object__o v36; // 0:x0.16
  System_Collections_Generic_KeyValuePair_object__object__o v37; // 0:x1.16

  if ( (byte_4C45A64 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_KeyValuePair_string__Material___float__ContainsKey__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_KeyValuePair_string__Material___float__set_Item__);
    sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_string__Material___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_Renderer__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_Renderer__get_Item__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C45A64 = 1;
  }
  v34.fields.key = 0;
  v34.fields.value = 0;
  enableRendererList = (System_Collections_Generic_List_object__o *)this->fields.enableRendererList;
  if ( !enableRendererList )
LABEL_29:
    sub_1C372B4(enableRendererList);
  v8 = (const MethodInfo_37A2D54 **)&Method_System_Collections_Generic_List_Renderer__get_Item__;
  v9 = &UnityEngine_Object_TypeInfo;
  v10 = (Il2CppObject **)&Method_System_Collections_Generic_KeyValuePair_string__Material___ctor__;
  v11 = (const MethodInfo_33B8A1C **)&Method_System_Collections_Generic_Dictionary_KeyValuePair_string__Material___float__ContainsKey__;
  v12 = 0;
  while ( v12 < enableRendererList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(enableRendererList, v12, *v8);
    if ( !(*v9)->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(*v9);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Item, 0, 0) )
    {
      enableRendererList = (System_Collections_Generic_List_object__o *)this->fields.enableRendererList;
      if ( !enableRendererList )
        goto LABEL_29;
      enableRendererList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                          enableRendererList,
                                                                          v12,
                                                                          *v8);
      if ( !enableRendererList )
        goto LABEL_29;
      if ( UnityEngine_Renderer__get_sharedMaterials((UnityEngine_Renderer_o *)enableRendererList, 0) )
      {
        enableRendererList = (System_Collections_Generic_List_object__o *)this->fields.enableRendererList;
        if ( !enableRendererList )
          goto LABEL_29;
        enableRendererList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                            enableRendererList,
                                                                            v12,
                                                                            *v8);
        if ( !enableRendererList )
          goto LABEL_29;
        enableRendererList = (System_Collections_Generic_List_object__o *)UnityEngine_Renderer__get_sharedMaterials(
                                                                            (UnityEngine_Renderer_o *)enableRendererList,
                                                                            0);
        if ( enableRendererList )
        {
          v14 = *(_QWORD *)&enableRendererList->fields._size;
          v15 = enableRendererList;
          if ( (int)v14 >= 1 )
          {
            v16 = 0;
            p_syncRoot = &enableRendererList->fields._syncRoot;
            v35 = v12;
            v33 = &enableRendererList->fields._syncRoot;
            do
            {
              if ( v16 >= (unsigned int)v14 )
                sub_1C372BC(enableRendererList);
              v18 = (UnityEngine_Object_o *)p_syncRoot[v16];
              if ( !(*v9)->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(*v9);
              enableRendererList = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Inequality(
                                                                                  v18,
                                                                                  0,
                                                                                  0);
              if ( ((unsigned __int8)enableRendererList & 1) != 0 )
              {
                if ( !v18 )
                  goto LABEL_29;
                enableRendererList = (System_Collections_Generic_List_object__o *)UnityEngine_Material__HasProperty_71132888(
                                                                                    (UnityEngine_Material_o *)v18,
                                                                                    propertyName,
                                                                                    0);
                if ( ((unsigned __int8)enableRendererList & 1) != 0 )
                {
                  v36.fields.key = (Il2CppObject *)&v34;
                  v36.fields.value = (Il2CppObject *)propertyName;
                  System_Collections_Generic_KeyValuePair_object__object____ctor(v36, (Il2CppObject *)v18, *v10, v19);
                  enableRendererList = (System_Collections_Generic_List_object__o *)this->fields.tempMaterialPropertyDict;
                  if ( !enableRendererList )
                    goto LABEL_29;
                  enableRendererList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_Dictionary_KeyValuePair_object__object___float___ContainsKey(
                                                                                      (System_Collections_Generic_Dictionary_TKey__TValue__o *)enableRendererList,
                                                                                      v34,
                                                                                      *v11);
                  if ( ((unsigned __int8)enableRendererList & 1) == 0 )
                  {
                    v20 = v15;
                    v21 = v11;
                    v22 = v10;
                    v23 = v9;
                    v24 = v8;
                    v25 = propertyName;
                    v26 = this;
                    tempMaterialPropertyDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.tempMaterialPropertyDict;
                    key = v34.fields.key;
                    v29 = v34.fields.value;
                    v30 = (UnityEngine_Material_o *)v18;
                    v31 = v25;
                    Float = UnityEngine_Material__GetFloat(v30, v25, 0);
                    if ( !tempMaterialPropertyDict )
                      goto LABEL_29;
                    v37.fields.key = key;
                    v37.fields.value = v29;
                    System_Collections_Generic_Dictionary_KeyValuePair_object__object___float___set_Item(
                      tempMaterialPropertyDict,
                      v37,
                      Float,
                      (const MethodInfo_33B87FC *)Method_System_Collections_Generic_Dictionary_KeyValuePair_string__Material___float__set_Item__);
                    v8 = v24;
                    v9 = v23;
                    v10 = v22;
                    v11 = v21;
                    v15 = v20;
                    v12 = v35;
                    p_syncRoot = v33;
                    this = v26;
                    propertyName = v31;
                  }
                }
              }
              LODWORD(v14) = v15->fields._size;
              ++v16;
            }
            while ( (__int64)v16 < (int)v14 );
          }
        }
      }
    }
    enableRendererList = (System_Collections_Generic_List_object__o *)this->fields.enableRendererList;
    ++v12;
    if ( !enableRendererList )
      goto LABEL_29;
  }
  BattleFBXComponent__SetYTransparenceShaderProperty(this, value, propertyName, method);
}


void BattleFBXComponent__SetWrapMode(
        BattleFBXComponent_o *this,
        System_String_o *animName,
        int32_t wrapMode,
        const MethodInfo *method)
{
  UnityEngine_Object_o *animationComponent; // x22
  UnityEngine_Animation_o *v8; // x0
  UnityEngine_TrackedReference_o *Item; // x20
  UnityEngine_Object_o *simpleAnimationComponent; // x22
  SimpleAnimation_State_o *v11; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v13; // x20
  __int64 v14; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v16; // x0

  if ( (byte_4C45A4B & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&SimpleAnimation_State_TypeInfo);
    byte_4C45A4B = 1;
  }
  BattleFBXComponent__setupAnimation(this, (const MethodInfo *)animName);
  animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(animationComponent, 0, 0) )
  {
    v8 = this->fields.animationComponent;
    if ( !v8 )
      goto LABEL_23;
    Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v8, animName, 0);
    v8 = (UnityEngine_Animation_o *)UnityEngine_TrackedReference__op_Inequality(Item, 0, 0);
    if ( ((unsigned __int8)v8 & 1) != 0 )
    {
      if ( Item )
      {
        UnityEngine_AnimationState__set_wrapMode((UnityEngine_AnimationState_o *)Item, wrapMode, 0);
        return;
      }
LABEL_23:
      sub_1C372B4(v8);
    }
  }
  else
  {
    simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0, 0) )
    {
      v8 = (UnityEngine_Animation_o *)this->fields.simpleAnimationComponent;
      if ( !v8 )
        goto LABEL_23;
      v11 = SimpleAnimation__get_Item((SimpleAnimation_o *)v8, animName, 0);
      if ( v11 )
      {
        klass = v11->klass;
        v13 = v11;
        v14 = *(unsigned __int16 *)&v11->klass->_2.rank;
        if ( *(_WORD *)&v11->klass->_2.rank )
        {
          p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
          while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            --v14;
            p_offset += 2;
            if ( !v14 )
              goto LABEL_19;
          }
          v16 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 18];
        }
        else
        {
LABEL_19:
          v16 = sub_1C87870(v11, SimpleAnimation_State_TypeInfo, 18);
        }
        (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD, _QWORD))v16)(
          v13,
          (unsigned int)wrapMode,
          *(_QWORD *)(v16 + 8));
      }
    }
  }
}


void BattleFBXComponent__SetYTransparenceShaderProperty(
        BattleFBXComponent_o *this,
        float value,
        System_String_o *propertyName,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *enableRendererList; // x0
  int32_t v8; // w21
  Il2CppObject *Item; // x22
  __int64 v10; // x8
  System_Collections_Generic_List_object__o *v11; // x22
  unsigned __int64 v12; // x26
  UnityEngine_Object_o *v13; // x23

  if ( (byte_4C45A63 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Renderer__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_Renderer__get_Item__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C45A63 = 1;
  }
  enableRendererList = (System_Collections_Generic_List_object__o *)this->fields.enableRendererList;
  if ( !enableRendererList )
LABEL_26:
    sub_1C372B4(enableRendererList);
  v8 = 0;
  while ( v8 < enableRendererList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             enableRendererList,
             v8,
             (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_Renderer__get_Item__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0, 0) )
    {
      enableRendererList = (System_Collections_Generic_List_object__o *)this->fields.enableRendererList;
      if ( !enableRendererList )
        goto LABEL_26;
      enableRendererList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                          enableRendererList,
                                                                          v8,
                                                                          (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_Renderer__get_Item__);
      if ( !enableRendererList )
        goto LABEL_26;
      if ( UnityEngine_Renderer__get_sharedMaterials((UnityEngine_Renderer_o *)enableRendererList, 0) )
      {
        enableRendererList = (System_Collections_Generic_List_object__o *)this->fields.enableRendererList;
        if ( !enableRendererList )
          goto LABEL_26;
        enableRendererList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                            enableRendererList,
                                                                            v8,
                                                                            (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_Renderer__get_Item__);
        if ( !enableRendererList )
          goto LABEL_26;
        enableRendererList = (System_Collections_Generic_List_object__o *)UnityEngine_Renderer__get_sharedMaterials(
                                                                            (UnityEngine_Renderer_o *)enableRendererList,
                                                                            0);
        if ( !enableRendererList )
          goto LABEL_26;
        v10 = *(_QWORD *)&enableRendererList->fields._size;
        v11 = enableRendererList;
        if ( (int)v10 >= 1 )
        {
          v12 = 0;
          do
          {
            if ( v12 >= (unsigned int)v10 )
              sub_1C372BC(enableRendererList);
            v13 = (UnityEngine_Object_o *)*((_QWORD *)&v11->fields._syncRoot + v12);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            enableRendererList = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Inequality(
                                                                                v13,
                                                                                0,
                                                                                0);
            if ( ((unsigned __int8)enableRendererList & 1) != 0 )
            {
              if ( !v13 )
                goto LABEL_26;
              enableRendererList = (System_Collections_Generic_List_object__o *)UnityEngine_Material__HasProperty_71132888(
                                                                                  (UnityEngine_Material_o *)v13,
                                                                                  propertyName,
                                                                                  0);
              if ( ((unsigned __int8)enableRendererList & 1) != 0 )
                UnityEngine_Material__SetFloat((UnityEngine_Material_o *)v13, propertyName, value, 0);
            }
            LODWORD(v10) = v11->fields._size;
            ++v12;
          }
          while ( (__int64)v12 < (int)v10 );
        }
      }
    }
    enableRendererList = (System_Collections_Generic_List_object__o *)this->fields.enableRendererList;
    ++v8;
    if ( !enableRendererList )
      goto LABEL_26;
  }
}


void BattleFBXComponent__Start(BattleFBXComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C45A49 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_BillBoard___);
    byte_4C45A49 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C372B4(0);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_BillBoard___);
  this->fields.billBoard = (struct BillBoard_o *)Component_object;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.billBoard, (int32_t)Component_object, v5, v6);
}


void BattleFBXComponent__Update(BattleFBXComponent_o *this, const MethodInfo *method)
{
  float deltaTime; // s0
  const MethodInfo *v4; // x1

  deltaTime = UnityEngine_Time__get_deltaTime(0);
  BattleFBXComponent__AnimUpdate(this, deltaTime, v4);
}


void BattleFBXComponent__changeActiveEffect(BattleFBXComponent_o *this, bool active, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *componentsXWeaponTrail; // x0
  Il2CppObject *current; // x20
  _BOOL8 v7; // x0
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4C45A52 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_XWeaponTrail__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_XWeaponTrail__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_XWeaponTrail__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_XWeaponTrail__GetEnumerator__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C45A52 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  componentsXWeaponTrail = (System_Collections_Generic_List_object__o *)this->fields.componentsXWeaponTrail;
  if ( !componentsXWeaponTrail )
    sub_1C372B4(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    componentsXWeaponTrail,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_XWeaponTrail__GetEnumerator__);
  v9 = v8;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v9,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_XWeaponTrail__MoveNext__) )
  {
    current = v9.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0, 0);
    if ( !v7 )
    {
      if ( active )
      {
        if ( !current )
          sub_1C372B4(v7);
        XWeaponTrail__Activate((XWeaponTrail_o *)current, 0);
      }
      else
      {
        if ( !current )
          sub_1C372B4(v7);
        XWeaponTrail__Deactivate((XWeaponTrail_o *)current, 0);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_XWeaponTrail__Dispose__);
}


bool BattleFBXComponent__checkAnimation(
        BattleFBXComponent_o *this,
        System_String_o *filename,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *RealAnimNames; // x0
  UnityEngine_Object_o *animationComponent; // x21
  UnityEngine_TrackedReference_o *Item; // x0
  UnityEngine_Object_o *simpleAnimationComponent; // x21

  if ( (byte_4C45A56 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C45A56 = 1;
  }
  RealAnimNames = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.RealAnimNames;
  if ( !RealAnimNames )
    goto LABEL_18;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         RealAnimNames,
         (Il2CppObject *)filename,
         (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
  {
    RealAnimNames = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.RealAnimNames;
    if ( !RealAnimNames )
      goto LABEL_18;
    filename = (System_String_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                    RealAnimNames,
                                    (Il2CppObject *)filename,
                                    (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
  }
  animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(animationComponent, 0, 0) )
  {
    RealAnimNames = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.animationComponent;
    if ( RealAnimNames )
    {
      Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                                 (UnityEngine_Animation_o *)RealAnimNames,
                                                 filename,
                                                 0);
      return UnityEngine_TrackedReference__op_Inequality(Item, 0, 0);
    }
LABEL_18:
    sub_1C372B4(RealAnimNames);
  }
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0, 0) )
    return 0;
  RealAnimNames = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.simpleAnimationComponent;
  if ( !RealAnimNames )
    goto LABEL_18;
  return SimpleAnimation__get_Item((SimpleAnimation_o *)RealAnimNames, filename, 0) != 0;
}


float BattleFBXComponent__getLength(BattleFBXComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *rootTransform; // x20
  UnityEngine_Object_o *animationComponent; // x20
  UnityEngine_Animation_o *v5; // x0
  UnityEngine_TrackedReference_o *Item; // x0
  UnityEngine_Object_o *simpleAnimationComponent; // x20
  UnityEngine_Animation_c *klass; // x8
  UnityEngine_Animation_o *v10; // x19
  __int64 v11; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v13; // x0

  if ( (byte_4C45A4D & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&SimpleAnimation_State_TypeInfo);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C45A4D = 1;
  }
  rootTransform = (UnityEngine_Object_o *)this->fields.rootTransform;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(rootTransform, 0, 0)
    || !System_String__op_Inequality(this->fields.currentAnimName, (System_String_o *)StringLiteral_1/*""*/, 0) )
  {
    return 0.0;
  }
  animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(animationComponent, 0, 0) )
  {
    v5 = this->fields.animationComponent;
    if ( !v5 )
      goto LABEL_31;
    Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v5, this->fields.currentAnimName, 0);
    if ( UnityEngine_TrackedReference__op_Inequality(Item, 0, 0) )
    {
      v5 = this->fields.animationComponent;
      if ( v5 )
      {
        v5 = (UnityEngine_Animation_o *)UnityEngine_Animation__get_Item(v5, this->fields.currentAnimName, 0);
        if ( v5 )
          return UnityEngine_AnimationState__get_length((UnityEngine_AnimationState_o *)v5, 0);
      }
LABEL_31:
      sub_1C372B4(v5);
    }
  }
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0, 0) )
    return 0.0;
  v5 = (UnityEngine_Animation_o *)this->fields.simpleAnimationComponent;
  if ( !v5 )
    goto LABEL_31;
  if ( !SimpleAnimation__get_Item((SimpleAnimation_o *)v5, this->fields.currentAnimName, 0) )
    return 0.0;
  v5 = (UnityEngine_Animation_o *)this->fields.simpleAnimationComponent;
  if ( !v5 )
    goto LABEL_31;
  v5 = (UnityEngine_Animation_o *)SimpleAnimation__get_Item((SimpleAnimation_o *)v5, this->fields.currentAnimName, 0);
  if ( !v5 )
    goto LABEL_31;
  klass = v5->klass;
  v10 = v5;
  v11 = *(unsigned __int16 *)&v5->klass->_2.rank;
  if ( *(_WORD *)&v5->klass->_2.rank )
  {
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v11;
      p_offset += 2;
      if ( !v11 )
        goto LABEL_26;
    }
    v13 = (__int64)(&klass[1]._1.properties + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_26:
    v13 = sub_1C87870(v5, SimpleAnimation_State_TypeInfo, 14);
  }
  v5 = (UnityEngine_Animation_o *)(*(__int64 (__fastcall **)(UnityEngine_Animation_o *, _QWORD))v13)(
                                    v10,
                                    *(_QWORD *)(v13 + 8));
  if ( !v5 )
    goto LABEL_31;
  return UnityEngine_AnimationClip__get_length((UnityEngine_AnimationClip_o *)v5, 0);
}


System_String_o *BattleFBXComponent__getRealAnimationName(
        BattleFBXComponent_o *this,
        System_String_o *animationName,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__string__o *RealAnimNames; // x0
  struct System_Collections_Generic_Dictionary_string__string__o *v6; // x0

  if ( (byte_4C45A66 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    sub_1C37058(&string_TypeInfo);
    byte_4C45A66 = 1;
  }
  RealAnimNames = this->fields.RealAnimNames;
  if ( !RealAnimNames
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)RealAnimNames,
          (Il2CppObject *)animationName,
          (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
  {
    return string_TypeInfo->static_fields->Empty;
  }
  v6 = this->fields.RealAnimNames;
  if ( !v6 )
    sub_1C372B4(0);
  return (System_String_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                              (System_Collections_Generic_Dictionary_object__object__o *)v6,
                              (Il2CppObject *)animationName,
                              (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
}


float BattleFBXComponent__getTagTime(
        BattleFBXComponent_o *this,
        System_String_o *animname,
        System_String_o *tag,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__string__o *CommonAnimNames; // x0
  System_Collections_Generic_Dictionary_object__object__o *Index; // x0
  float v9; // s8
  struct BattleFBXComponent_AnimEvent_array_array *eventlist; // x8
  BattleFBXComponent_AnimEvent_array *v11; // x20
  il2cpp_array_size_t max_length; // x8
  __int64 i; // x21
  BattleFBXComponent_AnimEvent_o *v14; // x23

  if ( (byte_4C45A59 & 1) == 0 )
  {
    sub_1C37058(&AnimationList_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    byte_4C45A59 = 1;
  }
  CommonAnimNames = this->fields.CommonAnimNames;
  if ( CommonAnimNames
    && System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)CommonAnimNames,
         (Il2CppObject *)animname,
         (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
  {
    Index = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.CommonAnimNames;
    if ( !Index )
      goto LABEL_25;
    animname = (System_String_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                    Index,
                                    (Il2CppObject *)animname,
                                    (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
  }
  if ( !AnimationList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AnimationList_TypeInfo);
  Index = (System_Collections_Generic_Dictionary_object__object__o *)AnimationList__getIndex(animname, 0);
  v9 = 0.0;
  if ( ((unsigned int)Index & 0x80000000) != 0 )
    return v9;
  eventlist = this->fields.eventlist;
  if ( !eventlist )
LABEL_25:
    sub_1C372B4(Index);
  if ( (unsigned int)Index >= LODWORD(eventlist->max_length) )
LABEL_24:
    sub_1C372BC(Index);
  v11 = eventlist->m_Items[(unsigned int)Index];
  if ( v11 )
  {
    max_length = v11->max_length;
    if ( (int)max_length >= 1 )
    {
      for ( i = 0; (int)i < (int)max_length; ++i )
      {
        if ( (unsigned int)i >= (unsigned int)max_length )
          goto LABEL_24;
        v14 = v11->m_Items[i];
        if ( !v14 )
          goto LABEL_25;
        Index = (System_Collections_Generic_Dictionary_object__object__o *)v14->fields.tag;
        if ( Index )
        {
          Index = (System_Collections_Generic_Dictionary_object__object__o *)System_String__Equals_63596960(
                                                                               (System_String_o *)Index,
                                                                               tag,
                                                                               0);
          if ( ((unsigned __int8)Index & 1) != 0 )
            return v14->fields.time;
          max_length = v11->max_length;
        }
      }
    }
  }
  return v9;
}


System_String_o *BattleFBXComponent__get_CurrentAnimName(BattleFBXComponent_o *this, const MethodInfo *method)
{
  return this->fields.currentAnimName;
}


float BattleFBXComponent__get_CurrentAnimTime(BattleFBXComponent_o *this, const MethodInfo *method)
{
  return this->fields.currentAnimTime;
}


System_String_o *BattleFBXComponent__get_CurrentCommonAnimName(BattleFBXComponent_o *this, const MethodInfo *method)
{
  return this->fields.currentCommonAnimName;
}


UnityEngine_Transform_o *BattleFBXComponent__get_RootTransform(BattleFBXComponent_o *this, const MethodInfo *method)
{
  return this->fields.rootTransform;
}


// local variable allocation has failed, the output may be wrong!
void BattleFBXComponent__inSetEvolutionLevel(
        BattleFBXComponent_o *this,
        UnityEngine_GameObject_o *gameObject,
        int32_t svtId,
        int32_t limitcount,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *actorEffectDict; // x0
  const MethodInfo *v8; // x1
  System_Collections_Generic_List_object__o *v9; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Collections_Generic_List_object__o *v12; // x20
  struct System_Collections_Generic_List_XWeaponTrail__o **p_componentsXWeaponTrail; // x26
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct System_Collections_Generic_List_Renderer__o *enableRendererList; // x8
  int32_t size; // w2
  int v18; // w9
  System_Object_array *ComponentsInChildren_object; // x0
  BattleFBXComponent___c_c *v20; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x25
  System_Func_object__bool__o *_9__57_0; // x20
  Il2CppObject *v23; // x21
  struct BattleFBXComponent___c_StaticFields *static_fields; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x20
  int32_t LimitImageIndex; // w27
  System_Collections_Generic_Dictionary_object__object__o *v29; // x19
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  __int64 v31; // x9
  int32_t *p_offset; // x10
  __int64 v33; // x0
  __int64 v34; // x0
  __int64 v35; // x23
  __int64 v36; // x8
  __int64 v37; // x9
  int *v38; // x10
  __int64 v39; // x0
  __int64 v40; // x8
  __int64 v41; // x9
  int *v42; // x10
  __int64 v43; // x0
  UnityEngine_Object_o *v44; // x0
  UnityEngine_Component_o *v45; // x28
  System_String_o *name; // x20
  BattleFBXComponent_c *v47; // x0
  UnityEngine_GameObject_o *v48; // x0
  Il2CppObject *Component_object; // x20
  UnityEngine_Transform_o *transform; // x0
  float v51; // s0 OVERLAPPED
  float v52; // s1
  float v53; // s2
  System_String_o *v54; // x20
  System_String_o *v55; // x21
  BattleFBXComponent_c *v56; // x0
  __int64 v57; // x0
  Il2CppObject *v58; // x29
  System_String_o *v59; // x0
  int32_t v60; // w20
  System_String_o *v61; // x0
  System_String_o *v62; // x0
  System_String_o *v63; // x20
  int32_t v64; // w2
  System_String_array *v65; // x0
  System_String_array *v66; // x20
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v68; // x22
  System_String_o *v69; // x21
  bool v70; // w21
  UnityEngine_Object_o *PrefabNode; // x20
  System_String_o *v72; // x20
  BattleFBXComponent_c *v73; // x0
  const MethodInfo *v74; // x4
  System_String_o *v75; // x20
  BattleFBXComponent_c *v76; // x0
  UnityEngine_GameObject_o *v77; // x0
  Il2CppObject *v78; // x22
  _BOOL8 v79; // x0
  System_String_o *v80; // x0
  UnityEngine_Transform_o *v81; // x22
  UnityEngine_Transform_o *v82; // x0
  float v83; // s8
  UnityEngine_Transform_o *v84; // x0
  float y; // s9
  UnityEngine_Transform_o *v86; // x0
  __int64 v87; // x0
  float v88; // s0
  float v89; // s1
  UnityEngine_Transform_o *v90; // x0
  _BOOL8 v91; // x0
  System_Object_array *ComponentsInChildren_object__51641852; // x0
  int32_t v93; // w2
  const MethodInfo *v94; // x3
  System_Object_array *v95; // x20
  il2cpp_array_size_t v96; // x8
  unsigned __int64 v97; // x22
  System_Collections_Generic_List_object__o *v98; // x0
  Il2CppObject *v99; // x1
  struct System_Object_array *items; // x8
  _QWORD *v101; // x9
  __int64 v102; // x10
  Il2CppClass **v103; // x8
  Il2CppObject *v104; // x20
  UnityEngine_GameObject_o *v105; // x22
  __int64 v106; // x0
  int32_t v107; // w2
  const MethodInfo *v108; // x3
  System_Collections_Generic_List_object__o *monitor; // x0
  struct System_Object_array *v110; // x8
  _QWORD *v111; // x9
  __int64 v112; // x10
  Il2CppClass **v113; // x8
  __int64 v114; // x0
  __int64 v115; // x8
  __int64 v116; // x9
  int *v117; // x10
  __int64 v118; // x0
  int32_t v119; // w2
  const MethodInfo *v120; // x3
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *entries; // x8
  System_Collections_Generic_Dictionary_object__object__o *v122; // x20
  unsigned __int64 v123; // x19
  Il2CppObject *v124; // x1
  struct System_Int32_array *buckets; // x8
  _QWORD *v126; // x9
  __int64 entries_low; // x10
  __int64 v128; // x8
  int32_t v129; // w2
  const MethodInfo *v130; // x3
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *v131; // x8
  System_Collections_Generic_Dictionary_object__object__o *v132; // x20
  unsigned __int64 v133; // x19
  Il2CppObject *v134; // x1
  struct System_Int32_array *v135; // x8
  _QWORD *v136; // x9
  __int64 v137; // x10
  __int64 v138; // x8
  BattleFBXComponent___c_c *v139; // x0
  System_Func_object__bool__o *_9__57_1; // x19
  Il2CppObject *v141; // x20
  struct BattleFBXComponent___c_StaticFields *v142; // x0
  int32_t v143; // w2
  const MethodInfo *v144; // x3
  System_Collections_Generic_Dictionary_object__object__c *v145; // x8
  System_Collections_Generic_Dictionary_object__object__o *v146; // x19
  __int64 v147; // x9
  int *v148; // x10
  __int64 v149; // x0
  __int64 v150; // x19
  __int64 v151; // x8
  __int64 v152; // x9
  int *v153; // x10
  __int64 v154; // x0
  __int64 v155; // x8
  __int64 v156; // x9
  int *v157; // x10
  __int64 v158; // x0
  UnityEngine_Object_o *v159; // x0
  UnityEngine_Transform_o *v160; // x20
  System_String_o *v161; // x21
  BattleFBXComponent_c *v162; // x0
  struct System_String_o *enItemMarker; // x8
  System_String_o *v164; // x22
  UnityEngine_Transform_o *parent; // x21
  System_String_o *v166; // x0
  UnityEngine_Object_o *v167; // x21
  UnityEngine_GameObject_o *v168; // x0
  Il2CppObject *v169; // x0
  int32_t v170; // w2
  const MethodInfo *v171; // x3
  Il2CppObject *v172; // x20
  __int64 v173; // x8
  __int64 v174; // x9
  int *v175; // x10
  __int64 v176; // x0
  char v177; // [xsp+24h] [xbp-CCh]
  UnityEngine_Component_o *v180; // [xsp+30h] [xbp-C0h]
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v181; // [xsp+38h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o i; // [xsp+50h] [xbp-A0h] BYREF
  int32_t result; // [xsp+6Ch] [xbp-84h] BYREF
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v185; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C45A50 & 1) == 0 )
  {
    sub_1C37058(&BattleFBXComponent_TypeInfo);
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_SkinnedMeshRenderer___);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__GameObject__Clear__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__SkinnedMeshRenderer___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__SkinnedMeshRenderer__get_Values__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__SkinnedMeshRenderer__set_Item__);
    sub_1C37058(&System_Collections_Generic_Dictionary_string__SkinnedMeshRenderer__TypeInfo);
    sub_1C37058(&Method_System_Linq_Enumerable_Where_Transform___);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__SkinnedMeshRenderer__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__SkinnedMeshRenderer__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__SkinnedMeshRenderer__get_Current__);
    sub_1C37058(&System_Func_Transform__bool__TypeInfo);
    sub_1C37058(&Method_UnityEngine_GameObject_AddComponent_LookAtTarget___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponentsInChildren_MeshRenderer___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystemRenderer___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponentsInChildren_Transform____78176544);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponentsInChildren_XWeaponTrail___);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerable_Transform__TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerator_Transform__TypeInfo);
    sub_1C37058(&System_Collections_IEnumerator_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_Renderer__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_XWeaponTrail__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_Renderer__Clear__);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_XWeaponTrail___ctor__);
    sub_1C37058(&System_Collections_Generic_List_XWeaponTrail__TypeInfo);
    sub_1C37058(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&ServantAssetLoadManager_TypeInfo);
    sub_1C37058(&Method_BattleFBXComponent___c__inSetEvolutionLevel_b__57_0__);
    sub_1C37058(&Method_BattleFBXComponent___c__inSetEvolutionLevel_b__57_1__);
    sub_1C37058(&BattleFBXComponent___c_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__SkinnedMeshRenderer__GetEnumerator__);
    sub_1C37058(&StringLiteral_113/*" "*/);
    sub_1C37058(&StringLiteral_23600/*"spiral"*/);
    sub_1C37058(&StringLiteral_3106/*"Battle2D"*/);
    byte_4C45A50 = 1;
  }
  result = 0;
  memset(&i, 0, sizeof(i));
  actorEffectDict = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.actorEffectDict;
  if ( !actorEffectDict )
    goto LABEL_209;
  System_Collections_Generic_Dictionary_object__object___Clear(
    actorEffectDict,
    (const MethodInfo_34637B8 *)Method_System_Collections_Generic_Dictionary_string__GameObject__Clear__);
  BattleFBXComponent__DestroyPrefabNode(this, v8);
  v9 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.PrefabNodes = (struct System_Collections_Generic_List_GameObject__o *)v9;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.PrefabNodes, (int32_t)v9, v10, v11);
  v12 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_XWeaponTrail__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_XWeaponTrail___ctor__);
  this->fields.componentsXWeaponTrail = (struct System_Collections_Generic_List_XWeaponTrail__o *)v12;
  p_componentsXWeaponTrail = &this->fields.componentsXWeaponTrail;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.componentsXWeaponTrail, (int32_t)v12, v14, v15);
  enableRendererList = this->fields.enableRendererList;
  if ( !enableRendererList )
    goto LABEL_209;
  size = enableRendererList->fields._size;
  v18 = enableRendererList->fields._version + 1;
  enableRendererList->fields._size = 0;
  enableRendererList->fields._version = v18;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)enableRendererList->fields._items, 0, size, 0);
  if ( !gameObject )
    goto LABEL_209;
  ComponentsInChildren_object = UnityEngine_GameObject__GetComponentsInChildren_object_(
                                  gameObject,
                                  1,
                                  (const MethodInfo_313FE78 *)Method_UnityEngine_GameObject_GetComponentsInChildren_Transform____78176544);
  v20 = BattleFBXComponent___c_TypeInfo;
  v21 = (System_Collections_Generic_IEnumerable_TSource__o *)ComponentsInChildren_object;
  if ( !BattleFBXComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFBXComponent___c_TypeInfo);
    v20 = BattleFBXComponent___c_TypeInfo;
  }
  _9__57_0 = (System_Func_object__bool__o *)v20->static_fields->__9__57_0;
  if ( !_9__57_0 )
  {
    if ( !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      v20 = BattleFBXComponent___c_TypeInfo;
    }
    v23 = (Il2CppObject *)v20->static_fields->__9;
    _9__57_0 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_Transform__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__57_0, v23, Method_BattleFBXComponent___c__inSetEvolutionLevel_b__57_0__, 0);
    static_fields = BattleFBXComponent___c_TypeInfo->static_fields;
    static_fields->__9__57_0 = (struct System_Func_Transform__bool__o *)_9__57_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__57_0, (int32_t)_9__57_0, v25, v26);
  }
  v27 = System_Linq_Enumerable__Where_object_(
          v21,
          (System_Func_TSource__bool__o *)_9__57_0,
          (const MethodInfo_312E410 *)Method_System_Linq_Enumerable_Where_Transform___);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  LimitImageIndex = ServantAssetLoadManager__GetLimitImageIndex(svtId, limitcount, 1, 0);
  v29 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C372A4(System_Collections_Generic_Dictionary_string__SkinnedMeshRenderer__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v29,
    (const MethodInfo_3462C80 *)Method_System_Collections_Generic_Dictionary_string__SkinnedMeshRenderer___ctor__);
  if ( !v27 )
    goto LABEL_209;
  klass = v27->klass;
  v180 = (UnityEngine_Component_o *)this;
  v31 = *(unsigned __int16 *)&v27->klass->_2.rank;
  if ( *(_WORD *)&v27->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_Transform__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_Transform__TypeInfo )
    {
      --v31;
      p_offset += 4;
      if ( !v31 )
        goto LABEL_21;
    }
    v33 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_21:
    v33 = sub_1C87870(v27, System_Collections_Generic_IEnumerable_Transform__TypeInfo, 0);
  }
  v34 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))v33)(
          v27,
          *(_QWORD *)(v33 + 8));
  v35 = v34;
  v177 = 1;
  while ( 1 )
  {
    if ( !v35 )
      sub_1C372B4(v34);
    v36 = *(_QWORD *)v35;
    v37 = *(unsigned __int16 *)(*(_QWORD *)v35 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v35 + 302LL) )
    {
      v38 = (int *)(*(_QWORD *)(v36 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v38 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v37;
        v38 += 4;
        if ( !v37 )
          goto LABEL_29;
      }
      v39 = v36 + 16LL * *v38 + 312;
    }
    else
    {
LABEL_29:
      v39 = sub_1C87870(v35, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v39)(v35, *(_QWORD *)(v39 + 8)) & 1) == 0 )
      break;
    v40 = *(_QWORD *)v35;
    v41 = *(unsigned __int16 *)(*(_QWORD *)v35 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v35 + 302LL) )
    {
      v42 = (int *)(*(_QWORD *)(v40 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_Transform__c **)v42 - 1) != System_Collections_Generic_IEnumerator_Transform__TypeInfo )
      {
        --v41;
        v42 += 4;
        if ( !v41 )
          goto LABEL_36;
      }
      v43 = v40 + 16LL * *v42 + 312;
    }
    else
    {
LABEL_36:
      v43 = sub_1C87870(v35, System_Collections_Generic_IEnumerator_Transform__TypeInfo, 0);
    }
    v44 = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v43)(v35, *(_QWORD *)(v43 + 8));
    v45 = (UnityEngine_Component_o *)v44;
    if ( !v44 )
      sub_1C372B4(0);
    name = UnityEngine_Object__get_name(v44, 0);
    v47 = BattleFBXComponent_TypeInfo;
    if ( !BattleFBXComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
    if ( !name )
      sub_1C372B4(v47);
    if ( System_String__StartsWith(name, BattleFBXComponent_TypeInfo->static_fields->sideflipMarker, 0) )
    {
      v48 = UnityEngine_Component__get_gameObject(v180, 0);
      if ( !v48 )
        sub_1C372B4(0);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           v48,
                           (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v34 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
      if ( (v34 & 1) != 0 )
      {
        transform = UnityEngine_Component__get_transform(v45, 0);
        if ( !Component_object )
          sub_1C372B4(transform);
        if ( !transform )
          sub_1C372B4(0);
        if ( LOBYTE(Component_object[34].monitor) )
          v51 = -1.0;
        else
          v51 = 1.0;
        v52 = 1.0;
        v53 = 1.0;
        UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v51, 0);
      }
    }
    else
    {
      v54 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v45, 0);
      v55 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v45, 0);
      v56 = BattleFBXComponent_TypeInfo;
      if ( !BattleFBXComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
      if ( !v55 )
        sub_1C372B4(v56);
      v57 = System_String__IndexOf_63620032(v55, BattleFBXComponent_TypeInfo->static_fields->levelMarker, 0);
      if ( !v54 )
        sub_1C372B4(v57);
      v58 = (Il2CppObject *)System_String__Substring_63607580(v54, 0, v57, 0);
      v59 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v45, 0);
      if ( !v59 )
        sub_1C372B4(0);
      v60 = System_String__IndexOf_63620032(v59, BattleFBXComponent_TypeInfo->static_fields->levelMarker, 0);
      v61 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v45, 0);
      if ( !v61 )
        sub_1C372B4(0);
      v62 = System_String__Substring(v61, v60 + 7, 0);
      v63 = v62;
      if ( !v62 )
        sub_1C372B4(0);
      if ( (System_String__IndexOf_63620032(v62, (System_String_o *)StringLiteral_113/*" "*/, 0) & 0x80000000) == 0 )
      {
        v64 = System_String__IndexOf_63620032(v63, (System_String_o *)StringLiteral_113/*" "*/, 0);
        v63 = System_String__Substring_63607580(v63, 0, v64, 0);
        if ( !v63 )
          sub_1C372B4(0);
      }
      v65 = System_String__Split(v63, 0x5Fu, 0, 0);
      v66 = v65;
      if ( !v65 )
        sub_1C372B4(0);
      max_length = v65->max_length;
      if ( (int)max_length < 1 )
      {
LABEL_69:
        v70 = 0;
        PrefabNode = 0;
      }
      else
      {
        v68 = 0;
        while ( 1 )
        {
          if ( v68 >= (unsigned int)max_length )
            sub_1C372BC(v65);
          v69 = v66->m_Items[v68];
          result = 99;
          v65 = (System_String_array *)System_Int32__TryParse(v69, &result, 0);
          if ( ((unsigned __int8)v65 & 1) != 0 )
          {
            v65 = (System_String_array *)System_Int32__Parse(v69, 0);
            if ( (_DWORD)v65 == LimitImageIndex )
              break;
          }
          LODWORD(max_length) = v66->max_length;
          if ( (__int64)++v68 >= (int)max_length )
            goto LABEL_69;
        }
        v72 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v45, 0);
        v73 = BattleFBXComponent_TypeInfo;
        if ( !BattleFBXComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
        if ( !v72 )
          sub_1C372B4(v73);
        if ( System_String__StartsWith(v72, BattleFBXComponent_TypeInfo->static_fields->prefabMarker, 0) )
          goto LABEL_78;
        v75 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v45, 0);
        v76 = BattleFBXComponent_TypeInfo;
        if ( !BattleFBXComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
        if ( !v75 )
          sub_1C372B4(v76);
        if ( System_String__StartsWith(v75, BattleFBXComponent_TypeInfo->static_fields->chrnodeMarker, 0) )
LABEL_78:
          PrefabNode = (UnityEngine_Object_o *)BattleFBXComponent__CreatePrefabNode(
                                                 (BattleFBXComponent_o *)v180,
                                                 (UnityEngine_Transform_o *)v45,
                                                 svtId,
                                                 limitcount,
                                                 v74);
        else
          PrefabNode = 0;
        v70 = 1;
      }
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(PrefabNode, 0, 0) )
      {
        v77 = UnityEngine_Component__get_gameObject(v180, 0);
        if ( !v77 )
          sub_1C372B4(0);
        v78 = UnityEngine_GameObject__GetComponent_object_(
                v77,
                (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v79 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v78, 0, 0);
        if ( v79 )
        {
          if ( !v78 )
            sub_1C372B4(v79);
          if ( LOBYTE(v78[34].monitor) )
          {
            if ( !PrefabNode )
              sub_1C372B4(v79);
            v80 = UnityEngine_Object__get_name(PrefabNode, 0);
            if ( !v80 )
              sub_1C372B4(0);
            if ( (System_String__IndexOf_63620032(v80, (System_String_o *)StringLiteral_23600/*"spiral"*/, 0) & 0x80000000) == 0 )
            {
              v81 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)PrefabNode, 0);
              v82 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)PrefabNode, 0);
              if ( !v82 )
                sub_1C372B4(0);
              LODWORD(v83) = (unsigned int)UnityEngine_Transform__get_localScale(v82, 0);
              v84 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)PrefabNode, 0);
              if ( !v84 )
                sub_1C372B4(0);
              localScale = UnityEngine_Transform__get_localScale(v84, 0);
              y = localScale.fields.y;
              v86 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)PrefabNode, 0);
              if ( !v86 )
                sub_1C372B4(0);
              v185 = UnityEngine_Transform__get_localScale(v86, 0);
              if ( !v81 )
                sub_1C372B4(v87);
              v88 = -v83;
              v89 = y;
              UnityEngine_Transform__set_localScale(v81, v185, 0);
              v90 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)PrefabNode, 0);
              if ( !v90 )
                sub_1C372B4(0);
              UnityEngine_Transform__Rotate_71291428(v90, 0.0, 180.0, 0.0, 0);
            }
          }
        }
      }
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v91 = UnityEngine_Object__op_Inequality(PrefabNode, 0, 0);
      if ( v91 )
      {
        if ( !PrefabNode )
          sub_1C372B4(v91);
        ComponentsInChildren_object__51641852 = UnityEngine_GameObject__GetComponentsInChildren_object__51641852(
                                                  (UnityEngine_GameObject_o *)PrefabNode,
                                                  (const MethodInfo_313FDFC *)Method_UnityEngine_GameObject_GetComponentsInChildren_XWeaponTrail___);
        v95 = ComponentsInChildren_object__51641852;
        if ( !ComponentsInChildren_object__51641852 )
          sub_1C372B4(0);
        v96 = ComponentsInChildren_object__51641852->max_length;
        if ( (int)v96 >= 1 )
        {
          v97 = 0;
          do
          {
            if ( v97 >= (unsigned int)v96 )
              sub_1C372BC(ComponentsInChildren_object__51641852);
            v98 = (System_Collections_Generic_List_object__o *)*p_componentsXWeaponTrail;
            if ( !*p_componentsXWeaponTrail )
              sub_1C372B4(0);
            v99 = v95->m_Items[v97];
            items = v98->fields._items;
            v101 = Method_System_Collections_Generic_List_XWeaponTrail__Add__;
            ++v98->fields._version;
            if ( !items )
              sub_1C372B4(v98);
            v102 = v98->fields._size;
            if ( (unsigned int)v102 >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v98,
                v99,
                *(const MethodInfo_37A3024 **)(*(_QWORD *)(v101[4] + 192LL) + 112LL));
            }
            else
            {
              v103 = &items->obj.klass + v102;
              v98->fields._size = v102 + 1;
              v103[4] = (Il2CppClass *)v99;
              sub_1C36FFC((CGThumbnailListItem_o *)(v103 + 4), (int32_t)v99, v93, v94);
            }
            LODWORD(v96) = v95->max_length;
            ++v97;
          }
          while ( (__int64)v97 < (int)v96 );
        }
      }
      v104 = UnityEngine_Component__GetComponent_object_(
               v45,
               (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_SkinnedMeshRenderer___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v34 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v104, 0, 0);
      if ( (v34 & 1) != 0 )
      {
        v105 = UnityEngine_Component__get_gameObject(v45, 0);
        v106 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_3106/*"Battle2D"*/, 0);
        if ( !v105 )
          sub_1C372B4(v106);
        UnityEngine_GameObject__set_layer(v105, v106, 0);
        if ( !v29 )
          sub_1C372B4(0);
        System_Collections_Generic_Dictionary_object__object___set_Item(
          v29,
          v58,
          v104,
          (const MethodInfo_346361C *)Method_System_Collections_Generic_Dictionary_string__SkinnedMeshRenderer__set_Item__);
        monitor = (System_Collections_Generic_List_object__o *)v180[6].monitor;
        if ( !monitor )
          sub_1C372B4(0);
        v110 = monitor->fields._items;
        v111 = Method_System_Collections_Generic_List_Renderer__Add__;
        ++monitor->fields._version;
        if ( !v110 )
          sub_1C372B4(monitor);
        v112 = monitor->fields._size;
        if ( (unsigned int)v112 >= LODWORD(v110->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            monitor,
            v104,
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v111[4] + 192LL) + 112LL));
        }
        else
        {
          v113 = &v110->obj.klass + v112;
          monitor->fields._size = v112 + 1;
          v113[4] = (Il2CppClass *)v104;
          sub_1C36FFC((CGThumbnailListItem_o *)(v113 + 4), (int32_t)v104, v107, v108);
        }
        if ( !v104 )
          sub_1C372B4(v114);
        UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)v104, v70, 0);
        v177 &= !v70;
      }
    }
  }
  v115 = *(_QWORD *)v35;
  v116 = *(unsigned __int16 *)(*(_QWORD *)v35 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v35 + 302LL) )
  {
    v117 = (int *)(*(_QWORD *)(v115 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v117 - 1) != System_IDisposable_TypeInfo )
    {
      --v116;
      v117 += 4;
      if ( !v116 )
        goto LABEL_129;
    }
    v118 = v115 + 16LL * *v117 + 312;
  }
  else
  {
LABEL_129:
    v118 = sub_1C87870(v35, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v118)(v35, *(_QWORD *)(v118 + 8));
  if ( (v177 & 1) != 0 )
  {
    actorEffectDict = v29;
    if ( !v29 )
      goto LABEL_209;
    actorEffectDict = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                   v29,
                                                                                   (const MethodInfo_3463460 *)Method_System_Collections_Generic_Dictionary_string__SkinnedMeshRenderer__get_Values__);
    if ( !actorEffectDict )
      goto LABEL_209;
    System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
      &v181,
      (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)actorEffectDict,
      (const MethodInfo_3AE40A8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__SkinnedMeshRenderer__GetEnumerator__);
    for ( i = v181;
          System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &i,
            (const MethodInfo_3560E04 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__SkinnedMeshRenderer__MoveNext__);
          UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)i.fields._currentValue, 1, 0) )
    {
      if ( !i.fields._currentValue )
        sub_1C372B4(0);
    }
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
      &i,
      (const MethodInfo_3560E00 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__SkinnedMeshRenderer__Dispose__);
  }
  actorEffectDict = (System_Collections_Generic_Dictionary_object__object__o *)UnityEngine_GameObject__GetComponentsInChildren_object__51641852(
                                                                                 gameObject,
                                                                                 (const MethodInfo_313FDFC *)Method_UnityEngine_GameObject_GetComponentsInChildren_MeshRenderer___);
  if ( !actorEffectDict )
    goto LABEL_209;
  entries = actorEffectDict->fields._entries;
  v122 = actorEffectDict;
  if ( (int)entries >= 1 )
  {
    v123 = 0;
    while ( v123 < (unsigned int)entries )
    {
      actorEffectDict = (System_Collections_Generic_Dictionary_object__object__o *)v180[6].monitor;
      if ( !actorEffectDict )
        goto LABEL_209;
      v124 = (Il2CppObject *)*((_QWORD *)&v122->fields._count + v123);
      buckets = actorEffectDict->fields._buckets;
      v126 = Method_System_Collections_Generic_List_Renderer__Add__;
      ++HIDWORD(actorEffectDict->fields._entries);
      if ( !buckets )
        goto LABEL_209;
      entries_low = SLODWORD(actorEffectDict->fields._entries);
      if ( (unsigned int)entries_low >= LODWORD(buckets->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)actorEffectDict,
          v124,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v126[4] + 192LL) + 112LL));
      }
      else
      {
        v128 = (__int64)buckets + 8 * entries_low;
        LODWORD(actorEffectDict->fields._entries) = entries_low + 1;
        *(_QWORD *)(v128 + 32) = v124;
        sub_1C36FFC((CGThumbnailListItem_o *)(v128 + 32), (int32_t)v124, v119, v120);
      }
      LODWORD(entries) = v122->fields._entries;
      if ( (__int64)++v123 >= (int)entries )
        goto LABEL_149;
    }
LABEL_213:
    sub_1C372BC(actorEffectDict);
  }
LABEL_149:
  actorEffectDict = (System_Collections_Generic_Dictionary_object__object__o *)UnityEngine_GameObject__GetComponentsInChildren_object__51641852(
                                                                                 gameObject,
                                                                                 (const MethodInfo_313FDFC *)Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystemRenderer___);
  if ( !actorEffectDict )
    goto LABEL_209;
  v131 = actorEffectDict->fields._entries;
  v132 = actorEffectDict;
  if ( (int)v131 >= 1 )
  {
    v133 = 0;
    while ( v133 < (unsigned int)v131 )
    {
      actorEffectDict = (System_Collections_Generic_Dictionary_object__object__o *)v180[6].monitor;
      if ( !actorEffectDict )
        goto LABEL_209;
      v134 = (Il2CppObject *)*((_QWORD *)&v132->fields._count + v133);
      v135 = actorEffectDict->fields._buckets;
      v136 = Method_System_Collections_Generic_List_Renderer__Add__;
      ++HIDWORD(actorEffectDict->fields._entries);
      if ( !v135 )
        goto LABEL_209;
      v137 = SLODWORD(actorEffectDict->fields._entries);
      if ( (unsigned int)v137 >= LODWORD(v135->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)actorEffectDict,
          v134,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v136[4] + 192LL) + 112LL));
      }
      else
      {
        v138 = (__int64)v135 + 8 * v137;
        LODWORD(actorEffectDict->fields._entries) = v137 + 1;
        *(_QWORD *)(v138 + 32) = v134;
        sub_1C36FFC((CGThumbnailListItem_o *)(v138 + 32), (int32_t)v134, v129, v130);
      }
      LODWORD(v131) = v132->fields._entries;
      if ( (__int64)++v133 >= (int)v131 )
        goto LABEL_159;
    }
    goto LABEL_213;
  }
LABEL_159:
  v139 = BattleFBXComponent___c_TypeInfo;
  if ( !BattleFBXComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFBXComponent___c_TypeInfo);
    v139 = BattleFBXComponent___c_TypeInfo;
  }
  _9__57_1 = (System_Func_object__bool__o *)v139->static_fields->__9__57_1;
  if ( !_9__57_1 )
  {
    if ( !v139->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v139);
      v139 = BattleFBXComponent___c_TypeInfo;
    }
    v141 = (Il2CppObject *)v139->static_fields->__9;
    _9__57_1 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_Transform__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__57_1, v141, Method_BattleFBXComponent___c__inSetEvolutionLevel_b__57_1__, 0);
    v142 = BattleFBXComponent___c_TypeInfo->static_fields;
    v142->__9__57_1 = (struct System_Func_Transform__bool__o *)_9__57_1;
    sub_1C36FFC((CGThumbnailListItem_o *)&v142->__9__57_1, (int32_t)_9__57_1, v143, v144);
  }
  actorEffectDict = (System_Collections_Generic_Dictionary_object__object__o *)System_Linq_Enumerable__Where_object_(
                                                                                 v21,
                                                                                 (System_Func_TSource__bool__o *)_9__57_1,
                                                                                 (const MethodInfo_312E410 *)Method_System_Linq_Enumerable_Where_Transform___);
  if ( !actorEffectDict )
LABEL_209:
    sub_1C372B4(actorEffectDict);
  v145 = actorEffectDict->klass;
  v146 = actorEffectDict;
  v147 = *(unsigned __int16 *)&actorEffectDict->klass->_2.rank;
  if ( *(_WORD *)&actorEffectDict->klass->_2.rank )
  {
    v148 = &v145->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_Transform__c **)v148 - 1) != System_Collections_Generic_IEnumerable_Transform__TypeInfo )
    {
      --v147;
      v148 += 4;
      if ( !v147 )
        goto LABEL_170;
    }
    v149 = (__int64)&v145->vtable + 16 * *v148;
  }
  else
  {
LABEL_170:
    v149 = sub_1C87870(actorEffectDict, System_Collections_Generic_IEnumerable_Transform__TypeInfo, 0);
  }
  v150 = (*(__int64 (__fastcall **)(System_Collections_Generic_Dictionary_object__object__o *, _QWORD))v149)(
           v146,
           *(_QWORD *)(v149 + 8));
  if ( !v150 )
    sub_1C372B4(0);
  while ( 1 )
  {
    v151 = *(_QWORD *)v150;
    v152 = *(unsigned __int16 *)(*(_QWORD *)v150 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v150 + 302LL) )
    {
      v153 = (int *)(*(_QWORD *)(v151 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v153 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v152;
        v153 += 4;
        if ( !v152 )
          goto LABEL_177;
      }
      v154 = v151 + 16LL * *v153 + 312;
    }
    else
    {
LABEL_177:
      v154 = sub_1C87870(v150, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v154)(v150, *(_QWORD *)(v154 + 8)) & 1) == 0 )
      break;
    v155 = *(_QWORD *)v150;
    v156 = *(unsigned __int16 *)(*(_QWORD *)v150 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v150 + 302LL) )
    {
      v157 = (int *)(*(_QWORD *)(v155 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_Transform__c **)v157 - 1) != System_Collections_Generic_IEnumerator_Transform__TypeInfo )
      {
        --v156;
        v157 += 4;
        if ( !v156 )
          goto LABEL_184;
      }
      v158 = v155 + 16LL * *v157 + 312;
    }
    else
    {
LABEL_184:
      v158 = sub_1C87870(v150, System_Collections_Generic_IEnumerator_Transform__TypeInfo, 0);
    }
    v159 = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v158)(v150, *(_QWORD *)(v158 + 8));
    v160 = (UnityEngine_Transform_o *)v159;
    if ( !v159 )
      sub_1C372B4(0);
    v161 = UnityEngine_Object__get_name(v159, 0);
    v162 = BattleFBXComponent_TypeInfo;
    if ( !BattleFBXComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
      v162 = BattleFBXComponent_TypeInfo;
    }
    enItemMarker = v162->static_fields->enItemMarker;
    if ( !enItemMarker )
      sub_1C372B4(v162);
    if ( !v161 )
      sub_1C372B4(v162);
    v164 = System_String__Substring(v161, enItemMarker->fields._stringLength, 0);
    parent = UnityEngine_Transform__get_parent(v160, 0);
    v166 = System_String__Concat_63561656(BattleFBXComponent_TypeInfo->static_fields->enWeaponMarker, v164, 0);
    if ( !parent )
      sub_1C372B4(v166);
    v167 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(parent, v166, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v167, 0, 0) )
    {
      v168 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v160, 0);
      if ( !v168 )
        sub_1C372B4(0);
      v169 = UnityEngine_GameObject__AddComponent_object_(
               v168,
               (const MethodInfo_313F0F0 *)Method_UnityEngine_GameObject_AddComponent_LookAtTarget___);
      v172 = v169;
      if ( !v169 )
        sub_1C372B4(0);
      v169[2].monitor = v167;
      sub_1C36FFC((CGThumbnailListItem_o *)&v169[2].monitor, (int32_t)v167, v170, v171);
      LODWORD(v172[3].klass) = 1120403456;
    }
  }
  v173 = *(_QWORD *)v150;
  v174 = *(unsigned __int16 *)(*(_QWORD *)v150 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v150 + 302LL) )
  {
    v175 = (int *)(*(_QWORD *)(v173 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v175 - 1) != System_IDisposable_TypeInfo )
    {
      --v174;
      v175 += 4;
      if ( !v174 )
        goto LABEL_202;
    }
    v176 = v173 + 16LL * *v175 + 312;
  }
  else
  {
LABEL_202:
    v176 = sub_1C87870(v150, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v176)(v150, *(_QWORD *)(v176 + 8));
}


void BattleFBXComponent__loadAnimationEvents(
        BattleFBXComponent_o *this,
        UnityEngine_TextAsset_o *data,
        int32_t svtId,
        int32_t level,
        const MethodInfo *method)
{
  struct BattleFBXComponent_AnimEvent_array_array *v9; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t LimitImageIndex; // w21
  __int64 Instance; // x0
  System_String_o *text; // x22
  int v15; // w8
  int v16; // w8
  __int64 v17; // x22
  BattleFBXComponent_c **v18; // x28
  unsigned int v19; // w29
  System_String_o *v20; // x23
  __int64 v21; // x8
  __int64 v22; // x23
  System_String_o *v23; // x25
  int32_t v24; // w26
  System_String_o *v25; // x27
  BattleFBXComponent_c *v26; // x0
  int32_t v27; // w0
  int32_t Index; // w24
  int32_t v29; // w20
  System_Collections_Generic_List_object__o *v30; // x25
  struct BattleFBXComponent_AnimEvent_array_array *v31; // x21
  __int64 v32; // x19
  int v33; // w8
  int v34; // w26
  float v35; // s0
  float v36; // s8
  unsigned int v37; // w9
  int v38; // w21
  BattleFBXComponent_c **v39; // x19
  __int64 v40; // x28
  __int64 v41; // x27
  float v42; // s9
  __int64 v43; // x26
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  struct System_Object_array *items; // x8
  _QWORD *v51; // x9
  __int64 size; // x10
  Il2CppClass **v53; // x0
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  __int64 v56; // x23
  Il2CppClass **v57; // x0
  __int64 v58; // x0
  BattleFBXComponent_o *v59; // [xsp+8h] [xbp-88h]
  struct BattleFBXComponent_AnimEvent_array_array **p_eventlist; // [xsp+10h] [xbp-80h]
  Il2CppObject *entity; // [xsp+18h] [xbp-78h] BYREF

  if ( (byte_4C45A5D & 1) == 0 )
  {
    sub_1C37058(&BattleFBXComponent_AnimEvent_____TypeInfo);
    sub_1C37058(&BattleFBXComponent_AnimEvent_TypeInfo);
    sub_1C37058(&AnimationList_TypeInfo);
    sub_1C37058(&BattleFBXComponent_TypeInfo);
    sub_1C37058(&char___TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C37058(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
    sub_1C37058(&Method_System_Collections_Generic_List_BattleFBXComponent_AnimEvent__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_BattleFBXComponent_AnimEvent__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_BattleFBXComponent_AnimEvent___ctor__);
    sub_1C37058(&System_Collections_Generic_List_BattleFBXComponent_AnimEvent__TypeInfo);
    sub_1C37058(&ServantAssetLoadManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&StringLiteral_370/*"#"*/);
    sub_1C37058(&StringLiteral_811/*","*/);
    byte_4C45A5D = 1;
  }
  entity = 0;
  BattleFBXComponent__InitAnimNameDict(this, (const MethodInfo *)data);
  v9 = (struct BattleFBXComponent_AnimEvent_array_array *)sub_1C37100(BattleFBXComponent_AnimEvent_____TypeInfo, 106);
  this->fields.eventlist = v9;
  p_eventlist = &this->fields.eventlist;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.eventlist, (int32_t)v9, v10, v11);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  LimitImageIndex = ServantAssetLoadManager__GetLimitImageIndex(svtId, level, 1, 0);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_71;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_71;
  Instance = DataMasterBase_object__object__int___TryGetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               &entity,
               svtId,
               (const MethodInfo_33A10EC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
  if ( (Instance & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_71;
    if ( HIDWORD(entity[5].klass) == 4 )
      LimitImageIndex = 1;
  }
  if ( !data )
    goto LABEL_71;
  text = UnityEngine_TextAsset__get_text(data, 0);
  Instance = sub_1C37100(char___TypeInfo, 2);
  if ( !Instance )
    goto LABEL_71;
  v15 = *(_DWORD *)(Instance + 24);
  if ( !v15 )
    goto LABEL_72;
  *(_WORD *)(Instance + 32) = 13;
  if ( v15 == 1 )
    goto LABEL_72;
  *(_WORD *)(Instance + 34) = 10;
  if ( !text
    || (v59 = this, (Instance = (__int64)System_String__Split_63610732(text, (System_Char_array *)Instance, 0)) == 0) )
  {
LABEL_71:
    sub_1C372B4(Instance);
  }
  v16 = *(_DWORD *)(Instance + 24);
  v17 = Instance;
  if ( v16 >= 1 )
  {
    v18 = &BattleFBXComponent_TypeInfo;
    v19 = 0;
    while ( v19 < v16 )
    {
      Instance = StringLiteral_811/*","*/;
      if ( !StringLiteral_811/*","*/ )
        goto LABEL_71;
      v20 = *(System_String_o **)(v17 + 8LL * (int)v19 + 32);
      Instance = System_String__get_Chars((System_String_o *)StringLiteral_811/*","*/, 0, 0);
      if ( !v20 )
        goto LABEL_71;
      Instance = (__int64)System_String__Split(v20, Instance, 0, 0);
      if ( !Instance )
        goto LABEL_71;
      v21 = *(_QWORD *)(Instance + 24);
      v22 = Instance;
      if ( v21 )
      {
        if ( !(_DWORD)v21 )
          break;
        Instance = *(_QWORD *)(Instance + 32);
        if ( !Instance )
          goto LABEL_71;
        Instance = System_String__StartsWith((System_String_o *)Instance, (System_String_o *)StringLiteral_370/*"#"*/, 0);
        if ( (Instance & 1) == 0 && *(int *)(v22 + 24) >= 6 )
        {
          Instance = System_Int32__Parse(*(System_String_o **)(v22 + 32), 0);
          if ( *(_DWORD *)(v22 + 24) <= 1u )
            break;
          if ( (_DWORD)Instance == LimitImageIndex )
          {
            Instance = (__int64)*v18;
            v23 = *(System_String_o **)(v22 + 40);
            if ( !(*v18)->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(Instance);
            if ( !v23 )
              goto LABEL_71;
            v24 = System_String__IndexOf_63620032(v23, (*v18)->static_fields->levelMarker, 0);
            v25 = v23;
            if ( (v24 & 0x80000000) == 0 )
            {
              v26 = *v18;
              if ( !(*v18)->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v26);
                v26 = *v18;
              }
              v27 = System_String__IndexOf_63620032(v23, v26->static_fields->levelMarker, 0);
              v25 = System_String__Substring_63607580(v23, 0, v27, 0);
            }
            if ( !AnimationList_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AnimationList_TypeInfo);
            Index = AnimationList__getIndex(v25, 0);
            if ( (v24 & 0x80000000) == 0 )
            {
              Instance = (__int64)v59->fields.RealAnimNames;
              if ( !Instance )
                goto LABEL_71;
              System_Collections_Generic_Dictionary_object__object___set_Item(
                (System_Collections_Generic_Dictionary_object__object__o *)Instance,
                (Il2CppObject *)v25,
                (Il2CppObject *)v23,
                (const MethodInfo_346361C *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
              Instance = (__int64)v59->fields.CommonAnimNames;
              if ( !Instance )
                goto LABEL_71;
              System_Collections_Generic_Dictionary_object__object___set_Item(
                (System_Collections_Generic_Dictionary_object__object__o *)Instance,
                (Il2CppObject *)v23,
                (Il2CppObject *)v25,
                (const MethodInfo_346361C *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
            }
            v29 = LimitImageIndex;
            v30 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_BattleFBXComponent_AnimEvent__TypeInfo);
            System_Collections_Generic_List_object____ctor(
              v30,
              (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_BattleFBXComponent_AnimEvent___ctor__);
            v31 = *p_eventlist;
            if ( !*p_eventlist )
              goto LABEL_71;
            if ( (unsigned int)Index >= LODWORD(v31->max_length) )
              break;
            v32 = Index;
            if ( !v31->m_Items[Index] )
            {
              v33 = *(_DWORD *)(v22 + 24);
              if ( v33 >= 3 )
              {
                v34 = 2;
                do
                {
                  if ( v34 >= (unsigned int)v33 )
                    goto LABEL_72;
                  Instance = *(_QWORD *)(v22 + 8LL * v34 + 32);
                  if ( !Instance )
                    goto LABEL_71;
                  if ( !*(_DWORD *)(Instance + 16) )
                    break;
                  v35 = System_Single__Parse((System_String_o *)Instance, 0);
                  Instance = (__int64)*v18;
                  v36 = v35;
                  if ( !(*v18)->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(Instance);
                    Instance = (__int64)*v18;
                  }
                  v37 = *(_DWORD *)(v22 + 24);
                  if ( v34 + 1 >= v37 )
                    goto LABEL_72;
                  v38 = v34 + 2;
                  if ( v34 + 2 >= v37 )
                    goto LABEL_72;
                  v39 = v18;
                  v40 = *(_QWORD *)(v22 + 8LL * (v34 + 1) + 32);
                  v41 = *(_QWORD *)(v22 + 8LL * (v34 + 2) + 32);
                  v42 = *(float *)(*(_QWORD *)(Instance + 184) + 4LL);
                  v43 = sub_1C372A4(BattleFBXComponent_AnimEvent_TypeInfo);
                  System_Object___ctor((Il2CppObject *)v43, 0);
                  if ( !v43 )
                    goto LABEL_71;
                  *(float *)(v43 + 16) = v36 / v42;
                  *(_QWORD *)(v43 + 24) = v40;
                  sub_1C36FFC((CGThumbnailListItem_o *)(v43 + 24), v40, v44, v45);
                  *(_QWORD *)(v43 + 32) = v41;
                  sub_1C36FFC((CGThumbnailListItem_o *)(v43 + 32), v41, v46, v47);
                  if ( !v30 )
                    goto LABEL_71;
                  items = v30->fields._items;
                  v51 = Method_System_Collections_Generic_List_BattleFBXComponent_AnimEvent__Add__;
                  ++v30->fields._version;
                  if ( !items )
                    goto LABEL_71;
                  size = v30->fields._size;
                  v18 = v39;
                  if ( (unsigned int)size >= LODWORD(items->max_length) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v30,
                      (Il2CppObject *)v43,
                      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v53 = &items->obj.klass + size;
                    v30->fields._size = size + 1;
                    v53[4] = (Il2CppClass *)v43;
                    sub_1C36FFC((CGThumbnailListItem_o *)(v53 + 4), v43, v48, v49);
                  }
                  v33 = *(_DWORD *)(v22 + 24);
                  v34 = v38 + 1;
                }
                while ( v38 + 1 < v33 );
                v32 = Index;
                v31 = *p_eventlist;
              }
            }
            if ( !v30 )
              goto LABEL_71;
            Instance = (__int64)System_Collections_Generic_List_object___ToArray(
                                  v30,
                                  (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_BattleFBXComponent_AnimEvent__ToArray__);
            if ( !v31 )
              goto LABEL_71;
            v56 = Instance;
            if ( Instance )
            {
              Instance = sub_1C37194(Instance, v31->obj.klass->_1.element_class);
              if ( !Instance )
              {
                v58 = sub_1C372D8(0);
                sub_1C37180(v58, 0);
              }
            }
            if ( (unsigned int)Index >= LODWORD(v31->max_length) )
              break;
            v57 = &v31->obj.klass + v32;
            v57[4] = (Il2CppClass *)v56;
            sub_1C36FFC((CGThumbnailListItem_o *)(v57 + 4), v56, v54, v55);
            LimitImageIndex = v29;
          }
        }
      }
      v16 = *(_DWORD *)(v17 + 24);
      if ( (int)++v19 >= v16 )
        return;
    }
LABEL_72:
    sub_1C372BC(Instance);
  }
}


void BattleFBXComponent__playAnimation(BattleFBXComponent_o *this, System_String_o *filename, const MethodInfo *method)
{
  System_String_o *v3; // x3
  const MethodInfo *v4; // x4
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4C45A57 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_2277/*"AnimationCheck"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C45A57 = 1;
  }
  BattleFBXComponent__playAnimationTimeline(this, filename, (System_String_o *)StringLiteral_1/*""*/, v3, v4);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C372B4(0);
  if ( UnityEngine_GameObject__get_activeInHierarchy(gameObject, 0) )
  {
    UnityEngine_MonoBehaviour__StopCoroutine_71253252(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_2277/*"AnimationCheck"*/,
      0);
    UnityEngine_MonoBehaviour__StartCoroutine(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_2277/*"AnimationCheck"*/,
      0);
  }
}


void BattleFBXComponent__playAnimationFromTag(
        BattleFBXComponent_o *this,
        System_String_o *animname,
        System_String_o *tag,
        const MethodInfo *method)
{
  System_String_o *currentAnimName; // x21
  System_String_o *currentCommonAnimName; // x1
  const MethodInfo *v9; // x3
  long double v10; // q0
  UnityEngine_Object_o *animationComponent; // x22
  long double v12; // q8
  UnityEngine_Animation_o *Item; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  UnityEngine_Object_o *simpleAnimationComponent; // x22
  UnityEngine_Animation_c *klass; // x8
  UnityEngine_Animation_o *v18; // x22
  __int64 v19; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v21; // x0
  UnityEngine_Animation_c *v22; // x8
  UnityEngine_Animation_o *v23; // x22
  __int64 v24; // x9
  SimpleAnimation_State_c **v25; // x10
  __int64 v26; // x0

  if ( (byte_4C45A58 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&SimpleAnimation_State_TypeInfo);
    byte_4C45A58 = 1;
  }
  BattleFBXComponent__playAnimation(this, animname, (const MethodInfo *)tag);
  currentAnimName = this->fields.currentAnimName;
  currentCommonAnimName = this->fields.currentCommonAnimName;
  this->fields.isDirty = 1;
  *(float *)&v10 = BattleFBXComponent__getTagTime(this, currentCommonAnimName, tag, v9);
  animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
  v12 = v10;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(animationComponent, 0, 0) )
  {
    Item = this->fields.animationComponent;
    if ( Item )
    {
      Item = (UnityEngine_Animation_o *)UnityEngine_Animation__get_Item(Item, currentAnimName, 0);
      if ( Item )
      {
        UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)Item, *(float *)&v12, 0);
        Item = this->fields.animationComponent;
        if ( Item )
        {
          Item = (UnityEngine_Animation_o *)UnityEngine_Animation__get_Item(Item, currentAnimName, 0);
          if ( Item )
          {
            UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)Item, 0.0, 0);
            goto LABEL_31;
          }
        }
      }
    }
LABEL_32:
    sub_1C372B4(Item);
  }
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0, 0) )
  {
    Item = (UnityEngine_Animation_o *)this->fields.simpleAnimationComponent;
    if ( !Item )
      goto LABEL_32;
    Item = (UnityEngine_Animation_o *)SimpleAnimation__get_Item((SimpleAnimation_o *)Item, currentAnimName, 0);
    if ( !Item )
      goto LABEL_32;
    klass = Item->klass;
    v18 = Item;
    v19 = *(unsigned __int16 *)&Item->klass->_2.rank;
    if ( *(_WORD *)&Item->klass->_2.rank )
    {
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v19;
        p_offset += 2;
        if ( !v19 )
          goto LABEL_20;
      }
      v21 = (__int64)(&klass->vtable._4_GetEnumerator + *(_DWORD *)p_offset);
    }
    else
    {
LABEL_20:
      v21 = sub_1C87870(Item, SimpleAnimation_State_TypeInfo, 4);
    }
    (*(void (__fastcall **)(UnityEngine_Animation_o *, _QWORD, long double))v21)(v18, *(_QWORD *)(v21 + 8), v12);
    Item = (UnityEngine_Animation_o *)this->fields.simpleAnimationComponent;
    if ( !Item )
      goto LABEL_32;
    Item = (UnityEngine_Animation_o *)SimpleAnimation__get_Item((SimpleAnimation_o *)Item, currentAnimName, 0);
    if ( !Item )
      goto LABEL_32;
    v22 = Item->klass;
    v23 = Item;
    v24 = *(unsigned __int16 *)&Item->klass->_2.rank;
    if ( *(_WORD *)&Item->klass->_2.rank )
    {
      v25 = (SimpleAnimation_State_c **)&v22->_1.interfaceOffsets->offset;
      while ( *(v25 - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v24;
        v25 += 2;
        if ( !v24 )
          goto LABEL_28;
      }
      v26 = (__int64)(&v22[1]._1.this_arg + *(_DWORD *)v25);
    }
    else
    {
LABEL_28:
      v26 = sub_1C87870(Item, SimpleAnimation_State_TypeInfo, 8);
    }
    (*(void (__fastcall **)(UnityEngine_Animation_o *, _QWORD, float))v26)(v23, *(_QWORD *)(v26 + 8), 0.0);
  }
LABEL_31:
  this->fields.currentAnimName = currentAnimName;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.currentAnimName, (int32_t)currentAnimName, v14, v15);
  this->fields.currentAnimTime = *(float *)&v12;
  this->fields.currentEventIndex = 0;
  this->fields.isStop = 0;
}


void BattleFBXComponent__playAnimationTimeline(
        BattleFBXComponent_o *this,
        System_String_o *filename,
        System_String_o *startEvent,
        System_String_o *stopEvent,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x22
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *RealAnimNames; // x0
  struct System_Collections_Generic_Dictionary_string__string__o *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  UnityEngine_Object_o *animationComponent; // x22
  UnityEngine_Animation_o *v18; // x0
  UnityEngine_Animation_o *v19; // x0
  UnityEngine_TrackedReference_o *Item; // x0
  UnityEngine_Animation_o *v21; // x0
  UnityEngine_AnimationState_o *v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  UnityEngine_Object_o *simpleAnimationComponent; // x22
  SimpleAnimation_o *v26; // x0
  SimpleAnimation_o *v27; // x0
  SimpleAnimation_o *v28; // x0
  SimpleAnimation_State_o *v29; // x0
  SimpleAnimation_State_o *v30; // x22
  SimpleAnimation_State_c *klass; // x8
  __int64 v32; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v34; // x0
  const MethodInfo *v35; // x3
  const MethodInfo *v36; // x1

  if ( (byte_4C45A55 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&SimpleAnimation_State_TypeInfo);
    byte_4C45A55 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_41;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                             (UnityEngine_Object_o *)Component_object,
                                             0,
                                             0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( Component_object )
    {
      filename = BattleActorControl__OverwriteAnimation((BattleActorControl_o *)Component_object, filename, 1, 0);
      LOBYTE(Component_object[24].klass) = 1;
      goto LABEL_9;
    }
LABEL_41:
    sub_1C372B4(gameObject);
  }
LABEL_9:
  this->fields.currentCommonAnimName = filename;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.currentCommonAnimName, (int32_t)filename, v10, v11);
  RealAnimNames = this->fields.RealAnimNames;
  if ( RealAnimNames
    && System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)RealAnimNames,
         (Il2CppObject *)filename,
         (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
  {
    v14 = this->fields.RealAnimNames;
    if ( !v14 )
      sub_1C372B4(0);
    filename = (System_String_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                    (System_Collections_Generic_Dictionary_object__object__o *)v14,
                                    (Il2CppObject *)filename,
                                    (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
  }
  BattleFBXComponent__setupAnimation(this, v12);
  this->fields.currentAnimName = filename;
  this->fields.isDirty = 1;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.currentAnimName, (int32_t)filename, v15, v16);
  *(_QWORD *)&this->fields.currentAnimTime = 0;
  this->fields.isStop = 0;
  animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(animationComponent, 0, 0) )
  {
    v18 = this->fields.animationComponent;
    if ( !v18 )
      sub_1C372B4(0);
    UnityEngine_Animation__Play_71012036(v18, filename, 0);
    v19 = this->fields.animationComponent;
    if ( !v19 )
      sub_1C372B4(0);
    Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v19, filename, 0);
    if ( !UnityEngine_TrackedReference__op_Equality(Item, 0, 0) )
    {
      v21 = this->fields.animationComponent;
      if ( !v21 )
        sub_1C372B4(0);
      v22 = UnityEngine_Animation__get_Item(v21, filename, 0);
      if ( !v22 )
        sub_1C372B4(0);
      UnityEngine_AnimationState__set_speed(v22, 0.0, 0);
LABEL_37:
      this->fields.animename = filename;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.animename, (int32_t)filename, v23, v24);
      if ( startEvent )
      {
        if ( startEvent->fields._stringLength >= 1 )
        {
          this->fields.currentAnimTime = BattleFBXComponent__getTagTime(this, filename, startEvent, v35);
          BattleFBXComponent__AnimUpdate(this, 0.0, v36);
        }
      }
    }
  }
  else
  {
    simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0, 0) )
      goto LABEL_37;
    v26 = this->fields.simpleAnimationComponent;
    if ( !v26 )
      sub_1C372B4(0);
    SimpleAnimation__Play_66507412(v26, filename, 0);
    v27 = this->fields.simpleAnimationComponent;
    if ( !v27 )
      sub_1C372B4(0);
    if ( SimpleAnimation__get_Item(v27, filename, 0) )
    {
      v28 = this->fields.simpleAnimationComponent;
      if ( !v28 )
        sub_1C372B4(0);
      v29 = SimpleAnimation__get_Item(v28, filename, 0);
      v30 = v29;
      if ( !v29 )
        sub_1C372B4(0);
      klass = v29->klass;
      v32 = *(unsigned __int16 *)&v29->klass->_2.rank;
      if ( *(_WORD *)&v29->klass->_2.rank )
      {
        p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v32;
          p_offset += 2;
          if ( !v32 )
            goto LABEL_34;
        }
        v34 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 8];
      }
      else
      {
LABEL_34:
        v34 = sub_1C87870(v29, SimpleAnimation_State_TypeInfo, 8);
      }
      (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD, float))v34)(v30, *(_QWORD *)(v34 + 8), 0.0);
      goto LABEL_37;
    }
  }
}


void BattleFBXComponent__setCurrentAnimTime(BattleFBXComponent_o *this, float time, const MethodInfo *method)
{
  this->fields.currentAnimTime = time;
}


void BattleFBXComponent__setTimeScale(BattleFBXComponent_o *this, float timescale, const MethodInfo *method)
{
  this->fields.timescale = timescale;
}


void BattleFBXComponent__set_RootTransform(
        BattleFBXComponent_o *this,
        UnityEngine_Transform_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  UnityEngine_Component_o *rootTransform; // x0
  Il2CppObject *Component_object; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  Il2CppObject *v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4C45A47 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    byte_4C45A47 = 1;
  }
  this->fields.rootTransform = value;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.rootTransform, (int32_t)value, (int32_t)method, v3);
  rootTransform = (UnityEngine_Component_o *)this->fields.rootTransform;
  if ( !rootTransform
    || (rootTransform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(rootTransform, 0)) == 0
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)rootTransform,
                             (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_Animation___),
        this->fields.animationComponent = (struct UnityEngine_Animation_o *)Component_object,
        sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.animationComponent, (int32_t)Component_object, v8, v9),
        (rootTransform = (UnityEngine_Component_o *)this->fields.rootTransform) == 0)
    || (rootTransform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(rootTransform, 0)) == 0 )
  {
    sub_1C372B4(rootTransform);
  }
  v10 = UnityEngine_GameObject__GetComponent_object_(
          (UnityEngine_GameObject_o *)rootTransform,
          (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  this->fields.simpleAnimationComponent = (struct SimpleAnimation_o *)v10;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.simpleAnimationComponent, (int32_t)v10, v11, v12);
}


void BattleFBXComponent__setupAnimation(BattleFBXComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *rootTransform; // x20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v5; // x0
  const MethodInfo *v6; // x2
  BattleFBXComponent_c *v7; // x0
  UnityEngine_Object_o *v8; // x20
  UnityEngine_Transform_o *v9; // x1
  const MethodInfo *v10; // x2

  if ( (byte_4C45A54 & 1) == 0 )
  {
    sub_1C37058(&BattleFBXComponent_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_17961/*"chr"*/);
    byte_4C45A54 = 1;
  }
  rootTransform = (UnityEngine_Object_o *)this->fields.rootTransform;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(rootTransform, 0, 0) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !transform )
      sub_1C372B4(0);
    v5 = UnityEngine_Transform__Find(transform, (System_String_o *)StringLiteral_17961/*"chr"*/, 0);
    BattleFBXComponent__set_RootTransform(this, v5, v6);
    v7 = BattleFBXComponent_TypeInfo;
    if ( !BattleFBXComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
      v7 = BattleFBXComponent_TypeInfo;
    }
    v7->static_fields->EnableEvent = 0;
  }
  v8 = (UnityEngine_Object_o *)this->fields.rootTransform;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v8, 0, 0) )
  {
    v9 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    BattleFBXComponent__set_RootTransform(this, v9, v10);
  }
}


void BattleFBXComponent__stopAnimation(BattleFBXComponent_o *this, const MethodInfo *method)
{
  this->fields.isStop = 1;
}


void BattleFBXComponent__stopAnimationCheck(BattleFBXComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4C45A5A & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_2277/*"AnimationCheck"*/);
    byte_4C45A5A = 1;
  }
  UnityEngine_MonoBehaviour__StopCoroutine_71253252(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_2277/*"AnimationCheck"*/,
    0);
}


void BattleFBXComponent__stopParticle(BattleFBXComponent_o *this, const MethodInfo *method)
{
  void *gameObject; // x0
  int v4; // w8
  void *v5; // x19
  unsigned int v6; // w20

  if ( (byte_4C45A53 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem___);
    byte_4C45A53 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_12;
  gameObject = UnityEngine_GameObject__GetComponentsInChildren_object__51641852(
                 (UnityEngine_GameObject_o *)gameObject,
                 (const MethodInfo_313FDFC *)Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem___);
  if ( !gameObject )
    goto LABEL_12;
  v4 = *((_DWORD *)gameObject + 6);
  v5 = gameObject;
  if ( v4 >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( v6 >= v4 )
        sub_1C372BC(gameObject);
      gameObject = (void *)*((_QWORD *)v5 + (int)v6 + 4);
      if ( !gameObject )
        break;
      UnityEngine_ParticleSystem__Stop_71550512((UnityEngine_ParticleSystem_o *)gameObject, 0);
      v4 = *((_DWORD *)v5 + 6);
      if ( (int)++v6 >= v4 )
        return;
    }
LABEL_12:
    sub_1C372B4(gameObject);
  }
}


void BattleFBXComponent_AnimEvent___ctor(BattleFBXComponent_AnimEvent_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleFBXComponent__AnimationCheck_d__70___ctor(
        BattleFBXComponent__AnimationCheck_d__70_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattleFBXComponent__AnimationCheck_d__70__MoveNext(
        BattleFBXComponent__AnimationCheck_d__70_o *this,
        const MethodInfo *method)
{
  BattleFBXComponent__AnimationCheck_d__70_o *v2; // x19
  struct BattleFBXComponent_o *_4__this; // x21
  UnityEngine_Object_o *animationComponent; // x20
  UnityEngine_Object_o *simpleAnimationComponent; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  CGThumbnailListItem_o *p__2__current; // x19
  bool result; // w0
  CGThumbnailListItem_o *v10; // x19
  int v11; // w8
  Il2CppObject *animename; // x19
  struct BattleFBXComponent_onEventDelegate_o *Complete; // x8

  v2 = this;
  if ( (byte_4C45A72 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    this = (BattleFBXComponent__AnimationCheck_d__70_o *)sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C45A72 = 1;
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
      if ( UnityEngine_Object__op_Inequality(animationComponent, 0, 0) )
      {
LABEL_13:
        this = (BattleFBXComponent__AnimationCheck_d__70_o *)_4__this->fields.animationComponent;
        if ( this )
        {
          if ( UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)this, 0) )
          {
            v2->fields.__2__current = 0;
            p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
            sub_1C36FFC(p__2__current, 0, v6, v7);
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
      if ( !UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0, 0) )
        goto LABEL_20;
LABEL_17:
      this = (BattleFBXComponent__AnimationCheck_d__70_o *)_4__this->fields.simpleAnimationComponent;
      if ( !this )
LABEL_31:
        sub_1C372B4(this);
      if ( !SimpleAnimation__get_isPlaying((SimpleAnimation_o *)this, 0) )
      {
LABEL_20:
        v2->fields.__2__current = 0;
        v10 = (CGThumbnailListItem_o *)&v2->fields.__2__current;
        sub_1C36FFC(v10, 0, v6, v7);
        v11 = 3;
        goto LABEL_21;
      }
      v2->fields.__2__current = 0;
      v10 = (CGThumbnailListItem_o *)&v2->fields.__2__current;
      sub_1C36FFC(v10, 0, v6, v7);
      v11 = 2;
LABEL_21:
      LODWORD(v10[-1].fields._ThumbnailSpritePath_k__BackingField) = v11;
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
                                                             (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_28;
      this = (BattleFBXComponent__AnimationCheck_d__70_o *)_4__this->fields.CommonAnimNames;
      if ( !this )
        goto LABEL_31;
      this = (BattleFBXComponent__AnimationCheck_d__70_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                             (System_Collections_Generic_Dictionary_object__object__o *)this,
                                                             animename,
                                                             (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
      animename = (Il2CppObject *)this;
LABEL_28:
      Complete = _4__this->fields.Complete;
      if ( !Complete )
        goto LABEL_31;
      ((void (__fastcall *)(intptr_t, Il2CppObject *, intptr_t))Complete->fields.invoke_impl)(
        Complete->fields.method_code,
        animename,
        Complete->fields.method);
      return 0;
    default:
      return 0;
  }
}


Il2CppObject *BattleFBXComponent__AnimationCheck_d__70__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleFBXComponent__AnimationCheck_d__70_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattleFBXComponent__AnimationCheck_d__70__System_Collections_IEnumerator_Reset(
        BattleFBXComponent__AnimationCheck_d__70_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C3706C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C372A4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3706C(&Method_BattleFBXComponent__AnimationCheck_d__70_System_Collections_IEnumerator_Reset__);
  sub_1C37180(v3, v4);
}


Il2CppObject *BattleFBXComponent__AnimationCheck_d__70__System_Collections_IEnumerator_get_Current(
        BattleFBXComponent__AnimationCheck_d__70_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattleFBXComponent__AnimationCheck_d__70__System_IDisposable_Dispose(
        BattleFBXComponent__AnimationCheck_d__70_o *this,
        const MethodInfo *method)
{
  ;
}


void BattleFBXComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C45A6F & 1) == 0 )
  {
    sub_1C37058(&BattleFBXComponent___c_TypeInfo);
    byte_4C45A6F = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(BattleFBXComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleFBXComponent___c_TypeInfo->static_fields->__9 = (struct BattleFBXComponent___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)BattleFBXComponent___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void BattleFBXComponent___c___ctor(BattleFBXComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleFBXComponent___c___inSetEvolutionLevel_b__57_0(
        BattleFBXComponent___c_o *this,
        UnityEngine_Transform_o *p,
        const MethodInfo *method)
{
  BattleFBXComponent___c_o *v4; // x20
  BattleFBXComponent___c_o *v6; // x19

  if ( (byte_4C45A70 & 1) == 0 )
  {
    this = (BattleFBXComponent___c_o *)sub_1C37058(&BattleFBXComponent_TypeInfo);
    byte_4C45A70 = 1;
  }
  if ( !p )
    goto LABEL_15;
  this = (BattleFBXComponent___c_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)p, 0);
  if ( !this )
    goto LABEL_15;
  this = (BattleFBXComponent___c_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
  v4 = this;
  if ( !BattleFBXComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
  if ( !v4 )
    goto LABEL_15;
  if ( System_String__Contains((System_String_o *)v4, BattleFBXComponent_TypeInfo->static_fields->levelMarker, 0) )
    return 1;
  this = (BattleFBXComponent___c_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)p, 0);
  if ( !this )
    goto LABEL_15;
  this = (BattleFBXComponent___c_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
  v6 = this;
  if ( !BattleFBXComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
  if ( !v6 )
LABEL_15:
    sub_1C372B4(this);
  return System_String__Contains((System_String_o *)v6, BattleFBXComponent_TypeInfo->static_fields->sideflipMarker, 0);
}


bool BattleFBXComponent___c___inSetEvolutionLevel_b__57_1(
        BattleFBXComponent___c_o *this,
        UnityEngine_Transform_o *p,
        const MethodInfo *method)
{
  BattleFBXComponent___c_o *v4; // x19

  if ( (byte_4C45A71 & 1) == 0 )
  {
    this = (BattleFBXComponent___c_o *)sub_1C37058(&BattleFBXComponent_TypeInfo);
    byte_4C45A71 = 1;
  }
  if ( !p )
    goto LABEL_9;
  this = (BattleFBXComponent___c_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)p, 0);
  if ( !this )
    goto LABEL_9;
  this = (BattleFBXComponent___c_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
  v4 = this;
  if ( !BattleFBXComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
  if ( !v4 )
LABEL_9:
    sub_1C372B4(this);
  return System_String__Contains((System_String_o *)v4, BattleFBXComponent_TypeInfo->static_fields->enItemMarker, 0);
}


void BattleFBXComponent___c__DisplayClass80_0___ctor(
        BattleFBXComponent___c__DisplayClass80_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleFBXComponent___c__DisplayClass80_0___IsYTransparenceShader_b__0(
        BattleFBXComponent___c__DisplayClass80_0_o *this,
        System_String_o *shaderName,
        const MethodInfo *method)
{
  System_String_o *skinShaderName; // x0

  skinShaderName = this->fields.skinShaderName;
  if ( !skinShaderName )
    sub_1C372B4(0);
  return System_String__StartsWith(skinShaderName, shaderName, 0);
}


void BattleFBXComponent_onEventDelegate___ctor(
        BattleFBXComponent_onEventDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  __int64 (__fastcall *v9)(); // x8
  Il2CppObject *m_target; // x9
  __int64 v11; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C37118(method) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = sub_1A7E044;
LABEL_8:
      this->fields.invoke_impl = (intptr_t)v9;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v8 )
    {
      v9 = sub_1A7E024;
      goto LABEL_8;
    }
    if ( !object )
    {
      v11 = sub_1C372D0(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C37180(v11, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_9:
  this->fields.extra_arg = (intptr_t)sub_1A7DFDC;
}


System_IAsyncResult_o *BattleFBXComponent_onEventDelegate__BeginInvoke(
        BattleFBXComponent_onEventDelegate_o *this,
        System_String_o *n,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  System_String_o *v6; // [xsp+0h] [xbp-20h] BYREF

  v6 = n;
  return (System_IAsyncResult_o *)sub_1C3700C(this, &v6, callback, object);
}


void BattleFBXComponent_onEventDelegate__EndInvoke(
        BattleFBXComponent_onEventDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C37010(result, 0, method);
}


void BattleFBXComponent_onEventDelegate__Invoke(
        BattleFBXComponent_onEventDelegate_o *this,
        System_String_o *n,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, System_String_o *, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    n,
    this->fields.method);
}