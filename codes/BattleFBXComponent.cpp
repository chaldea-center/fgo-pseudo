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
  __int64 v34; // x1
  __int64 v35; // x2
  const MethodInfo *v36; // x3
  __int64 v37; // x19
  int32_t v38; // w1
  const MethodInfo *v39; // x3
  int32_t v40; // w1
  const MethodInfo *v41; // x3
  int32_t v42; // w1
  const MethodInfo *v43; // x3
  int32_t v44; // w1
  const MethodInfo *v45; // x3
  int32_t v46; // w1
  const MethodInfo *v47; // x3
  int32_t v48; // w1
  const MethodInfo *v49; // x3
  int32_t v50; // w1
  const MethodInfo *v51; // x3
  int32_t v52; // w1
  const MethodInfo *v53; // x3
  int32_t v54; // w1
  const MethodInfo *v55; // x3
  int32_t v56; // w1
  struct BattleFBXComponent_StaticFields *v57; // x0
  int32_t v58; // w2
  const MethodInfo *v59; // x3

  if ( (byte_4C29D54 & 1) == 0 )
  {
    sub_1C2D490(&BattleFBXComponent_TypeInfo);
    sub_1C2D490(&string___TypeInfo);
    sub_1C2D490(&StringLiteral_7316/*"Hidden/Particle/MultiplyAdd1Pass-Stencil"*/);
    sub_1C2D490(&StringLiteral_6401/*"FGO_CH/AlphaBlendSingle"*/);
    sub_1C2D490(&StringLiteral_18977/*"en_weapon_"*/);
    sub_1C2D490(&StringLiteral_6403/*"FGO_CH/Base"*/);
    sub_1C2D490(&StringLiteral_16559/*"_level"*/);
    sub_1C2D490(&StringLiteral_6400/*"FGO_Battle/Particle/Base-Stencil"*/);
    sub_1C2D490(&StringLiteral_6399/*"FGO_Battle/Particle/Base"*/);
    sub_1C2D490(&StringLiteral_6404/*"FGO_CH/SingleFlat"*/);
    sub_1C2D490(&StringLiteral_7315/*"Hidden/Particle/MultiplyAdd1Pass"*/);
    sub_1C2D490(&StringLiteral_18973/*"en_item_"*/);
    sub_1C2D490(&StringLiteral_17957/*"chrnode_"*/);
    sub_1C2D490(&StringLiteral_21072/*"joint_sideflip_"*/);
    sub_1C2D490(&StringLiteral_7313/*"Hidden/Particle/MultiplyAdd"*/);
    sub_1C2D490(&StringLiteral_2395/*"Assets/AssetStorages/NoblePhantasm/"*/);
    sub_1C2D490(&StringLiteral_7314/*"Hidden/Particle/MultiplyAdd-Stencil"*/);
    sub_1C2D490(&StringLiteral_6402/*"FGO_CH/AlphaBlendSingleFlat"*/);
    sub_1C2D490(&StringLiteral_22736/*"prefabn_"*/);
    sub_1C2D490(&StringLiteral_2396/*"Assets/AssetStorages/Servants/"*/);
    byte_4C29D54 = 1;
  }
  static_fields = BattleFBXComponent_TypeInfo->static_fields;
  static_fields->EnableEvent = 1;
  static_fields->animFps = 30.0;
  v4 = StringLiteral_16559/*"_level"*/;
  static_fields->levelMarker = (struct System_String_o *)StringLiteral_16559/*"_level"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&static_fields->levelMarker, v4, v1, v2);
  v5 = StringLiteral_22736/*"prefabn_"*/;
  v6 = BattleFBXComponent_TypeInfo->static_fields;
  v6->prefabMarker = (struct System_String_o *)StringLiteral_22736/*"prefabn_"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&v6->prefabMarker, v5, v7, v8);
  v9 = StringLiteral_17957/*"chrnode_"*/;
  v10 = BattleFBXComponent_TypeInfo->static_fields;
  v10->chrnodeMarker = (struct System_String_o *)StringLiteral_17957/*"chrnode_"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&v10->chrnodeMarker, v9, v11, v12);
  v13 = StringLiteral_21072/*"joint_sideflip_"*/;
  v14 = BattleFBXComponent_TypeInfo->static_fields;
  v14->sideflipMarker = (struct System_String_o *)StringLiteral_21072/*"joint_sideflip_"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&v14->sideflipMarker, v13, v15, v16);
  v17 = StringLiteral_18973/*"en_item_"*/;
  v18 = BattleFBXComponent_TypeInfo->static_fields;
  v18->enItemMarker = (struct System_String_o *)StringLiteral_18973/*"en_item_"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&v18->enItemMarker, v17, v19, v20);
  v21 = StringLiteral_18977/*"en_weapon_"*/;
  v22 = BattleFBXComponent_TypeInfo->static_fields;
  v22->enWeaponMarker = (struct System_String_o *)StringLiteral_18977/*"en_weapon_"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&v22->enWeaponMarker, v21, v23, v24);
  v25 = StringLiteral_2395/*"Assets/AssetStorages/NoblePhantasm/"*/;
  v26 = BattleFBXComponent_TypeInfo->static_fields;
  v26->npPathHead = (struct System_String_o *)StringLiteral_2395/*"Assets/AssetStorages/NoblePhantasm/"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&v26->npPathHead, v25, v27, v28);
  v29 = StringLiteral_2396/*"Assets/AssetStorages/Servants/"*/;
  v30 = BattleFBXComponent_TypeInfo->static_fields;
  v30->svtPathHead = (struct System_String_o *)StringLiteral_2396/*"Assets/AssetStorages/Servants/"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&v30->svtPathHead, v29, v31, v32);
  v33 = sub_1C2D538(string___TypeInfo, 10);
  if ( !v33 )
    sub_1C2D6EC(0, v34);
  v37 = v33;
  if ( !*(_DWORD *)(v33 + 24) )
    goto LABEL_15;
  v38 = StringLiteral_6403/*"FGO_CH/Base"*/;
  *(_QWORD *)(v33 + 32) = StringLiteral_6403/*"FGO_CH/Base"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v33 + 32), v38, v35, v36);
  if ( *(_DWORD *)(v37 + 24) <= 1u )
    goto LABEL_15;
  v40 = StringLiteral_6401/*"FGO_CH/AlphaBlendSingle"*/;
  *(_QWORD *)(v37 + 40) = StringLiteral_6401/*"FGO_CH/AlphaBlendSingle"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v37 + 40), v40, v35, v39);
  if ( *(_DWORD *)(v37 + 24) <= 2u )
    goto LABEL_15;
  v42 = StringLiteral_6399/*"FGO_Battle/Particle/Base"*/;
  *(_QWORD *)(v37 + 48) = StringLiteral_6399/*"FGO_Battle/Particle/Base"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v37 + 48), v42, v35, v41);
  if ( *(_DWORD *)(v37 + 24) <= 3u )
    goto LABEL_15;
  v44 = StringLiteral_7313/*"Hidden/Particle/MultiplyAdd"*/;
  *(_QWORD *)(v37 + 56) = StringLiteral_7313/*"Hidden/Particle/MultiplyAdd"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v37 + 56), v44, v35, v43);
  if ( *(_DWORD *)(v37 + 24) <= 4u )
    goto LABEL_15;
  v46 = StringLiteral_7315/*"Hidden/Particle/MultiplyAdd1Pass"*/;
  *(_QWORD *)(v37 + 64) = StringLiteral_7315/*"Hidden/Particle/MultiplyAdd1Pass"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v37 + 64), v46, v35, v45);
  if ( *(_DWORD *)(v37 + 24) <= 5u )
    goto LABEL_15;
  v48 = StringLiteral_6402/*"FGO_CH/AlphaBlendSingleFlat"*/;
  *(_QWORD *)(v37 + 72) = StringLiteral_6402/*"FGO_CH/AlphaBlendSingleFlat"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v37 + 72), v48, v35, v47);
  if ( *(_DWORD *)(v37 + 24) <= 6u )
    goto LABEL_15;
  v50 = StringLiteral_6400/*"FGO_Battle/Particle/Base-Stencil"*/;
  *(_QWORD *)(v37 + 80) = StringLiteral_6400/*"FGO_Battle/Particle/Base-Stencil"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v37 + 80), v50, v35, v49);
  if ( *(_DWORD *)(v37 + 24) <= 7u
    || (v52 = StringLiteral_7314/*"Hidden/Particle/MultiplyAdd-Stencil"*/,
        *(_QWORD *)(v37 + 88) = StringLiteral_7314/*"Hidden/Particle/MultiplyAdd-Stencil"*/,
        sub_1C2D434((CGThumbnailListItem_o *)(v37 + 88), v52, v35, v51),
        *(_DWORD *)(v37 + 24) <= 8u)
    || (v54 = StringLiteral_7316/*"Hidden/Particle/MultiplyAdd1Pass-Stencil"*/,
        *(_QWORD *)(v37 + 96) = StringLiteral_7316/*"Hidden/Particle/MultiplyAdd1Pass-Stencil"*/,
        sub_1C2D434((CGThumbnailListItem_o *)(v37 + 96), v54, v35, v53),
        *(_DWORD *)(v37 + 24) <= 9u) )
  {
LABEL_15:
    sub_1C2D6F4(v33, v34, v35);
  }
  v56 = StringLiteral_6404/*"FGO_CH/SingleFlat"*/;
  *(_QWORD *)(v37 + 104) = StringLiteral_6404/*"FGO_CH/SingleFlat"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v37 + 104), v56, v35, v55);
  v57 = BattleFBXComponent_TypeInfo->static_fields;
  v57->yTransparenceShaderNames = (struct System_String_array *)v37;
  sub_1C2D434((CGThumbnailListItem_o *)&v57->yTransparenceShaderNames, v37, v58, v59);
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

  if ( (byte_4C29D53 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__string___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__GameObject___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_KeyValuePair_string__Material___float___ctor__);
    sub_1C2D490(&System_Collections_Generic_Dictionary_string__GameObject__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_Dictionary_string__string__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_Dictionary_KeyValuePair_string__Material___float__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_Renderer___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_Renderer__TypeInfo);
    byte_4C29D53 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C2D6DC(System_Collections_Generic_Dictionary_string__string__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v3,
    (const MethodInfo_3449978 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  this->fields.RealAnimNames = (struct System_Collections_Generic_Dictionary_string__string__o *)v3;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.RealAnimNames, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C2D6DC(System_Collections_Generic_Dictionary_string__string__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v6,
    (const MethodInfo_3449978 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  this->fields.CommonAnimNames = (struct System_Collections_Generic_Dictionary_string__string__o *)v6;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.CommonAnimNames, (int32_t)v6, v7, v8);
  this->fields.timescale = 1.0;
  v9 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_Renderer__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_Renderer___ctor__);
  this->fields.enableRendererList = (struct System_Collections_Generic_List_Renderer__o *)v9;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.enableRendererList, (int32_t)v9, v10, v11);
  v12 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C2D6DC(System_Collections_Generic_Dictionary_string__GameObject__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v12,
    (const MethodInfo_3449978 *)Method_System_Collections_Generic_Dictionary_string__GameObject___ctor__);
  this->fields.actorEffectDict = (struct System_Collections_Generic_Dictionary_string__GameObject__o *)v12;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.actorEffectDict, (int32_t)v12, v13, v14);
  v15 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C2D6DC(System_Collections_Generic_Dictionary_KeyValuePair_string__Material___float__TypeInfo);
  System_Collections_Generic_Dictionary_KeyValuePair_object__object___float____ctor(
    v15,
    (const MethodInfo_339EB24 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_string__Material___float___ctor__);
  this->fields.tempMaterialPropertyDict = (struct System_Collections_Generic_Dictionary_KeyValuePair_string__Material___float__o *)v15;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.tempMaterialPropertyDict, (int32_t)v15, v16, v17);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattleFBXComponent__AnimUpdate(BattleFBXComponent_o *this, float deltaTime, const MethodInfo *method)
{
  long double v3; // q8
  float v5; // s9
  UnityEngine_Object_o *rootTransform; // x20
  UnityEngine_Object_o *animationComponent; // x20
  __int64 v8; // x1
  __int64 wrapMode; // x0
  UnityEngine_TrackedReference_o *Item; // x0
  UnityEngine_Object_o *simpleAnimationComponent; // x20
  UnityEngine_Object_o *v12; // x20
  float v13; // s8
  UnityEngine_Animation_o *v14; // x8
  float v15; // s8
  float v16; // s8
  float length; // s0
  UnityEngine_Object_o *v18; // x20
  __int64 v19; // x8
  float currentAnimTime; // s8
  __int64 v21; // x20
  __int64 v22; // x9
  SimpleAnimation_State_c **v23; // x10
  __int64 v24; // x0
  __int64 v25; // x8
  __int64 v26; // x9
  SimpleAnimation_State_c **v27; // x10
  __int64 v28; // x0
  __int64 v29; // x8
  __int64 v30; // x9
  SimpleAnimation_State_c **v31; // x10
  __int64 v32; // x0
  __int64 v33; // x8
  __int64 v34; // x9
  SimpleAnimation_State_c **v35; // x10
  __int64 v36; // x0
  __int64 v37; // x8
  __int64 v38; // x9
  SimpleAnimation_State_c **v39; // x10
  __int64 v40; // x0
  float i; // s8
  __int64 v42; // x8
  __int64 v43; // x9
  SimpleAnimation_State_c **v44; // x10
  __int64 v45; // x0
  __int64 v46; // x8
  float v47; // s8
  __int64 v48; // x9
  SimpleAnimation_State_c **v49; // x10
  __int64 v50; // x0
  UnityEngine_Object_o *v51; // x20
  UnityEngine_Object_o *v52; // x20
  UnityEngine_TrackedReference_o *v53; // x0
  UnityEngine_Object_o *v54; // x20
  BattleFBXComponent_c *v55; // x0
  System_String_o *currentCommonAnimName; // x20
  __int64 v57; // x2
  struct BattleFBXComponent_AnimEvent_array_array *eventlist; // x8
  BattleFBXComponent_AnimEvent_array *v59; // x24
  int currentEventIndex; // w25
  il2cpp_array_size_t j; // x8
  BattleFBXComponent_AnimEvent_o *v62; // x20
  float time; // s0
  float v64; // s1
  bool v65; // nf
  float v66; // s1
  UnityEngine_Object_o *v67; // x21
  __int64 v68; // x8
  __int64 v69; // x21
  __int64 v70; // x9
  SimpleAnimation_State_c **v71; // x10
  __int64 v72; // x0
  _BOOL4 isDirty; // w27
  UnityEngine_Object_o *billBoard; // x21
  const MethodInfo *v75; // x2
  _BOOL4 v76; // w8
  BattleFBXComponent_c *v77; // x0
  UnityEngine_Object_o *v78; // x20
  float animFps; // s8
  float v80; // s0
  int v81; // w21
  __int64 v82; // x8
  __int64 v83; // x20
  __int64 v84; // x9
  SimpleAnimation_State_c **v85; // x10
  __int64 v86; // x0

  v3 = *(long double *)&deltaTime;
  if ( (byte_4C29D30 & 1) == 0 )
  {
    sub_1C2D490(&AnimationList_TypeInfo);
    sub_1C2D490(&BattleFBXComponent_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&SimpleAnimation_State_TypeInfo);
    byte_4C29D30 = 1;
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
  v12 = (UnityEngine_Object_o *)this->fields.animationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v12, 0, 0) )
  {
    v18 = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v18, 0, 0) )
      goto LABEL_102;
    wrapMode = (__int64)this->fields.simpleAnimationComponent;
    if ( wrapMode )
    {
      wrapMode = (__int64)SimpleAnimation__get_Item((SimpleAnimation_o *)wrapMode, this->fields.currentAnimName, 0);
      if ( wrapMode )
      {
        v19 = *(_QWORD *)wrapMode;
        currentAnimTime = this->fields.currentAnimTime;
        v21 = wrapMode;
        v22 = *(unsigned __int16 *)(*(_QWORD *)wrapMode + 302LL);
        if ( *(_WORD *)(*(_QWORD *)wrapMode + 302LL) )
        {
          v23 = (SimpleAnimation_State_c **)(*(_QWORD *)(v19 + 176) + 8LL);
          while ( *(v23 - 1) != SimpleAnimation_State_TypeInfo )
          {
            --v22;
            v23 += 2;
            if ( !v22 )
              goto LABEL_49;
          }
          v24 = v19 + 16LL * (*(_DWORD *)v23 + 14) + 312;
        }
        else
        {
LABEL_49:
          v24 = sub_1C7DCA8(wrapMode, SimpleAnimation_State_TypeInfo, 14);
        }
        wrapMode = (*(__int64 (__fastcall **)(__int64, _QWORD))v24)(v21, *(_QWORD *)(v24 + 8));
        if ( wrapMode )
        {
          if ( currentAnimTime < UnityEngine_AnimationClip__get_length((UnityEngine_AnimationClip_o *)wrapMode, 0) )
            goto LABEL_102;
          v25 = *(_QWORD *)v21;
          v26 = *(unsigned __int16 *)(*(_QWORD *)v21 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v21 + 302LL) )
          {
            v27 = (SimpleAnimation_State_c **)(*(_QWORD *)(v25 + 176) + 8LL);
            while ( *(v27 - 1) != SimpleAnimation_State_TypeInfo )
            {
              --v26;
              v27 += 2;
              if ( !v26 )
                goto LABEL_59;
            }
            v28 = v25 + 16LL * (*(_DWORD *)v27 + 19) + 312;
          }
          else
          {
LABEL_59:
            v28 = sub_1C7DCA8(v21, SimpleAnimation_State_TypeInfo, 19);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v28)(v21, *(_QWORD *)(v28 + 8)) & 1) != 0 )
            goto LABEL_70;
          v29 = *(_QWORD *)v21;
          v30 = *(unsigned __int16 *)(*(_QWORD *)v21 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v21 + 302LL) )
          {
            v31 = (SimpleAnimation_State_c **)(*(_QWORD *)(v29 + 176) + 8LL);
            while ( *(v31 - 1) != SimpleAnimation_State_TypeInfo )
            {
              --v30;
              v31 += 2;
              if ( !v30 )
                goto LABEL_66;
            }
            v32 = v29 + 16LL * (*(_DWORD *)v31 + 14) + 312;
          }
          else
          {
LABEL_66:
            v32 = sub_1C7DCA8(v21, SimpleAnimation_State_TypeInfo, 14);
          }
          wrapMode = (*(__int64 (__fastcall **)(__int64, _QWORD))v32)(v21, *(_QWORD *)(v32 + 8));
          if ( wrapMode )
          {
            if ( UnityEngine_Motion__get_isLooping((UnityEngine_Motion_o *)wrapMode, 0) )
            {
LABEL_84:
              for ( i = this->fields.currentAnimTime; ; this->fields.currentAnimTime = i )
              {
                v42 = *(_QWORD *)v21;
                v43 = *(unsigned __int16 *)(*(_QWORD *)v21 + 302LL);
                if ( *(_WORD *)(*(_QWORD *)v21 + 302LL) )
                {
                  v44 = (SimpleAnimation_State_c **)(*(_QWORD *)(v42 + 176) + 8LL);
                  while ( *(v44 - 1) != SimpleAnimation_State_TypeInfo )
                  {
                    --v43;
                    v44 += 2;
                    if ( !v43 )
                      goto LABEL_89;
                  }
                  v45 = v42 + 16LL * (*(_DWORD *)v44 + 14) + 312;
                }
                else
                {
LABEL_89:
                  v45 = sub_1C7DCA8(v21, SimpleAnimation_State_TypeInfo, 14);
                }
                wrapMode = (*(__int64 (__fastcall **)(__int64, _QWORD))v45)(v21, *(_QWORD *)(v45 + 8));
                if ( !wrapMode )
                  goto LABEL_39;
                if ( i < UnityEngine_AnimationClip__get_length((UnityEngine_AnimationClip_o *)wrapMode, 0) )
                  break;
                v46 = *(_QWORD *)v21;
                v47 = this->fields.currentAnimTime;
                v48 = *(unsigned __int16 *)(*(_QWORD *)v21 + 302LL);
                if ( *(_WORD *)(*(_QWORD *)v21 + 302LL) )
                {
                  v49 = (SimpleAnimation_State_c **)(*(_QWORD *)(v46 + 176) + 8LL);
                  while ( *(v49 - 1) != SimpleAnimation_State_TypeInfo )
                  {
                    --v48;
                    v49 += 2;
                    if ( !v48 )
                      goto LABEL_97;
                  }
                  v50 = v46 + 16LL * (*(_DWORD *)v49 + 14) + 312;
                }
                else
                {
LABEL_97:
                  v50 = sub_1C7DCA8(v21, SimpleAnimation_State_TypeInfo, 14);
                }
                wrapMode = (*(__int64 (__fastcall **)(__int64, _QWORD))v50)(v21, *(_QWORD *)(v50 + 8));
                if ( !wrapMode )
                  goto LABEL_39;
                i = v47 - UnityEngine_AnimationClip__get_length((UnityEngine_AnimationClip_o *)wrapMode, 0);
              }
LABEL_101:
              this->fields.currentEventIndex = 0;
              goto LABEL_102;
            }
LABEL_70:
            v33 = *(_QWORD *)v21;
            v34 = *(unsigned __int16 *)(*(_QWORD *)v21 + 302LL);
            if ( *(_WORD *)(*(_QWORD *)v21 + 302LL) )
            {
              v35 = (SimpleAnimation_State_c **)(*(_QWORD *)(v33 + 176) + 8LL);
              while ( *(v35 - 1) != SimpleAnimation_State_TypeInfo )
              {
                --v34;
                v35 += 2;
                if ( !v34 )
                  goto LABEL_74;
              }
              v36 = v33 + 16LL * (*(_DWORD *)v35 + 19) + 312;
            }
            else
            {
LABEL_74:
              v36 = sub_1C7DCA8(v21, SimpleAnimation_State_TypeInfo, 19);
            }
            if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v36)(v21, *(_QWORD *)(v36 + 8)) & 1) == 0 )
              goto LABEL_163;
            v37 = *(_QWORD *)v21;
            v38 = *(unsigned __int16 *)(*(_QWORD *)v21 + 302LL);
            if ( *(_WORD *)(*(_QWORD *)v21 + 302LL) )
            {
              v39 = (SimpleAnimation_State_c **)(*(_QWORD *)(v37 + 176) + 8LL);
              while ( *(v39 - 1) != SimpleAnimation_State_TypeInfo )
              {
                --v38;
                v39 += 2;
                if ( !v38 )
                  goto LABEL_81;
              }
              v40 = v37 + 16LL * (*(_DWORD *)v39 + 17) + 312;
            }
            else
            {
LABEL_81:
              v40 = sub_1C7DCA8(v21, SimpleAnimation_State_TypeInfo, 17);
            }
            if ( (*(unsigned int (__fastcall **)(__int64, _QWORD))v40)(v21, *(_QWORD *)(v40 + 8)) != 2 )
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
    sub_1C2D6EC(wrapMode, v8);
  }
  wrapMode = (__int64)this->fields.animationComponent;
  if ( !wrapMode )
    goto LABEL_39;
  v13 = this->fields.currentAnimTime;
  wrapMode = (__int64)UnityEngine_Animation__get_Item(
                        (UnityEngine_Animation_o *)wrapMode,
                        this->fields.currentAnimName,
                        0);
  if ( !wrapMode )
    goto LABEL_39;
  if ( v13 >= UnityEngine_AnimationState__get_length((UnityEngine_AnimationState_o *)wrapMode, 0) )
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
        v14 = this->fields.animationComponent;
        if ( (_DWORD)wrapMode == 2 )
        {
          if ( v14 )
          {
            v15 = this->fields.currentAnimTime;
            do
            {
              wrapMode = (__int64)UnityEngine_Animation__get_Item(v14, this->fields.currentAnimName, 0);
              if ( !wrapMode )
                break;
              if ( v15 < UnityEngine_AnimationState__get_length((UnityEngine_AnimationState_o *)wrapMode, 0) )
                goto LABEL_101;
              wrapMode = (__int64)this->fields.animationComponent;
              if ( !wrapMode )
                break;
              v16 = this->fields.currentAnimTime;
              wrapMode = (__int64)UnityEngine_Animation__get_Item(
                                    (UnityEngine_Animation_o *)wrapMode,
                                    this->fields.currentAnimName,
                                    0);
              if ( !wrapMode )
                break;
              length = UnityEngine_AnimationState__get_length((UnityEngine_AnimationState_o *)wrapMode, 0);
              v14 = this->fields.animationComponent;
              v15 = v16 - length;
              this->fields.currentAnimTime = v15;
            }
            while ( v14 );
          }
        }
        else if ( v14 )
        {
          UnityEngine_Animation__Stop(v14, 0);
          return;
        }
      }
    }
    goto LABEL_39;
  }
LABEL_102:
  v51 = (UnityEngine_Object_o *)this->fields.rootTransform;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v51, 0, 0) && this->fields.currentAnimName )
  {
    v52 = (UnityEngine_Object_o *)this->fields.animationComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v52, 0, 0) )
    {
      wrapMode = (__int64)this->fields.animationComponent;
      if ( !wrapMode )
        goto LABEL_39;
      if ( UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)wrapMode, 0) )
      {
        wrapMode = (__int64)this->fields.animationComponent;
        if ( !wrapMode )
          goto LABEL_39;
        v53 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                                  (UnityEngine_Animation_o *)wrapMode,
                                                  this->fields.currentAnimName,
                                                  0);
        if ( UnityEngine_TrackedReference__op_Inequality(v53, 0, 0) )
          goto LABEL_120;
      }
    }
    v54 = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v54, 0, 0) )
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
      v55 = BattleFBXComponent_TypeInfo;
      if ( !BattleFBXComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
        v55 = BattleFBXComponent_TypeInfo;
      }
      if ( v55->static_fields->EnableEvent && this->fields.eventlist )
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
            sub_1C2D6F4(wrapMode, v8, v57);
          v59 = eventlist->m_Items[(unsigned int)wrapMode];
          if ( v59 )
          {
            currentEventIndex = this->fields.currentEventIndex;
            for ( j = v59->max_length; currentEventIndex < (int)j; ++currentEventIndex )
            {
              if ( currentEventIndex >= (unsigned int)j )
                goto LABEL_190;
              v62 = v59->m_Items[currentEventIndex];
              if ( !v62 )
                goto LABEL_39;
              time = v62->fields.time;
              v64 = this->fields.currentAnimTime;
              v65 = time < v64;
              v66 = v5 + v64;
              if ( v65 || time >= v66 )
              {
                if ( time >= v66 )
                {
                  this->fields.currentEventIndex = currentEventIndex;
                  break;
                }
              }
              else
              {
                v67 = (UnityEngine_Object_o *)this->fields.animationComponent;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(v67, 0, 0) )
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
                  UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)wrapMode, v62->fields.time, 0);
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
                  v68 = *(_QWORD *)wrapMode;
                  *(float *)&v3 = v62->fields.time;
                  v69 = wrapMode;
                  v70 = *(unsigned __int16 *)(*(_QWORD *)wrapMode + 302LL);
                  if ( *(_WORD *)(*(_QWORD *)wrapMode + 302LL) )
                  {
                    v71 = (SimpleAnimation_State_c **)(*(_QWORD *)(v68 + 176) + 8LL);
                    while ( *(v71 - 1) != SimpleAnimation_State_TypeInfo )
                    {
                      --v70;
                      v71 += 2;
                      if ( !v70 )
                        goto LABEL_150;
                    }
                    v72 = v68 + 16LL * (*(_DWORD *)v71 + 4) + 312;
                  }
                  else
                  {
LABEL_150:
                    v72 = sub_1C7DCA8(wrapMode, SimpleAnimation_State_TypeInfo, 4);
                  }
                  (*(void (__fastcall **)(__int64, _QWORD, long double))v72)(v69, *(_QWORD *)(v72 + 8), v3);
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
                BattleFBXComponent__OnAnimEvent(this, v62, v75);
                v76 = this->fields.isDirty;
                this->fields.isDirty = v76 || isDirty;
                if ( v76 || isDirty )
                {
                  if ( !v76 )
                    this->fields.currentAnimTime = v62->fields.time;
                  this->fields.isDirty = 0;
                  return;
                }
                j = v59->max_length;
              }
            }
          }
        }
      }
      v77 = BattleFBXComponent_TypeInfo;
      if ( !BattleFBXComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
        v77 = BattleFBXComponent_TypeInfo;
      }
      v78 = (UnityEngine_Object_o *)this->fields.animationComponent;
      animFps = v77->static_fields->animFps;
      v80 = animFps * this->fields.currentAnimTime;
      if ( v80 == INFINITY )
        v81 = 0x80000000;
      else
        v81 = (int)v80;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v78, 0, 0) )
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
        UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)wrapMode, (float)v81 / animFps, 0);
      }
      else
      {
        wrapMode = (__int64)this->fields.simpleAnimationComponent;
        if ( !wrapMode )
          goto LABEL_39;
        wrapMode = (__int64)SimpleAnimation__get_Item((SimpleAnimation_o *)wrapMode, this->fields.currentAnimName, 0);
        if ( !wrapMode )
          goto LABEL_39;
        v82 = *(_QWORD *)wrapMode;
        v83 = wrapMode;
        v84 = *(unsigned __int16 *)(*(_QWORD *)wrapMode + 302LL);
        *(float *)&v3 = (float)v81 / animFps;
        if ( *(_WORD *)(*(_QWORD *)wrapMode + 302LL) )
        {
          v85 = (SimpleAnimation_State_c **)(*(_QWORD *)(v82 + 176) + 8LL);
          while ( *(v85 - 1) != SimpleAnimation_State_TypeInfo )
          {
            --v84;
            v85 += 2;
            if ( !v84 )
              goto LABEL_182;
          }
          v86 = v82 + 16LL * (*(_DWORD *)v85 + 4) + 312;
        }
        else
        {
LABEL_182:
          v86 = sub_1C7DCA8(wrapMode, SimpleAnimation_State_TypeInfo, 4);
        }
        (*(void (__fastcall **)(__int64, _QWORD, long double))v86)(v83, *(_QWORD *)(v86 + 8), v3);
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

  if ( (byte_4C29D41 & 1) == 0 )
  {
    sub_1C2D490(&BattleFBXComponent__AnimationCheck_d__70_TypeInfo);
    byte_4C29D41 = 1;
  }
  v3 = sub_1C2D6DC(BattleFBXComponent__AnimationCheck_d__70_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
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
  __int64 v4; // x1
  Il2CppObject *Component_object; // x20
  int32_t ServantId; // w21
  int32_t LimitCount; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C29D35 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C29D35 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
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
      BattleFBXComponent__SetEvolutionLevel(this, ServantId, LimitCount, v8);
      return;
    }
LABEL_10:
    sub_1C2D6EC(gameObject, v4);
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
  __int64 v9; // x2
  System_String_o *CommonAnimNames; // x23
  UnityEngine_Object_o *Manager__loadActorEffectFromActor; // x21
  bool v12; // w8
  Il2CppObject *v13; // x21
  bool v14; // w8
  Il2CppObject *v15; // x22
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  UnityEngine_Transform_o *transform; // x23
  BattleFBXComponent_o *v19; // x23
  BattleFBXComponent_o *v20; // x23
  BattleFBXComponent_o *v21; // x23
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  intptr_t m_CachedPtr; // x8
  _QWORD *v25; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v27; // x8
  System_Collections_Generic_Dictionary_object__object__o *actorEffectDict; // x22
  System_String_o *name; // x0
  BattleFBXComponent_o *v30; // x20
  bool v31; // w8
  Il2CppObject *v32; // x1
  BattleFBXComponent_o *v33; // x19

  v8 = this;
  if ( (byte_4C29D37 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__GameObject__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__GameObject__ContainsKey__);
    sub_1C2D490(&Method_UnityEngine_GameObject_AddComponent_ObjectScaleEnabler___);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&ServantAssetLoadManager_TypeInfo);
    this = (BattleFBXComponent_o *)sub_1C2D490(&StringLiteral_16529/*"_aDd"*/);
    byte_4C29D37 = 1;
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
    sub_1C2D6F4(this, node, v9);
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
  v12 = UnityEngine_Object__op_Inequality(Manager__loadActorEffectFromActor, 0, 0);
  this = 0;
  if ( v12 )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v13 = UnityEngine_Object__Instantiate_object_(
            (Il2CppObject *)Manager__loadActorEffectFromActor,
            (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    v14 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v13, 0, 0);
    this = 0;
    if ( v14 )
    {
      if ( !v13 )
        goto LABEL_43;
      v15 = UnityEngine_GameObject__AddComponent_object_(
              (UnityEngine_GameObject_o *)v13,
              (const MethodInfo_3125DE8 *)Method_UnityEngine_GameObject_AddComponent_ObjectScaleEnabler___);
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v13, 0, 0);
      if ( !v15 )
        goto LABEL_43;
      v15[2].klass = (Il2CppClass *)node;
      sub_1C2D434((CGThumbnailListItem_o *)&v15[2], (int32_t)node, v16, v17);
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v13, 0);
      this = (BattleFBXComponent_o *)UnityEngine_Transform__get_parent(node, 0);
      if ( !this )
        goto LABEL_43;
      this = (BattleFBXComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      if ( !transform )
        goto LABEL_43;
      UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)this, 0);
      this = (BattleFBXComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v13, 0);
      v19 = this;
      if ( !byte_4C20DA1 )
      {
        this = (BattleFBXComponent_o *)sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
        byte_4C20DA1 = 1;
      }
      if ( !v19 )
        goto LABEL_43;
      UnityEngine_Transform__set_localPosition(
        (UnityEngine_Transform_o *)v19,
        UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
        0);
      this = (BattleFBXComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v13, 0);
      v20 = this;
      if ( !byte_4C20DA1 )
      {
        this = (BattleFBXComponent_o *)sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
        byte_4C20DA1 = 1;
      }
      if ( !v20 )
        goto LABEL_43;
      UnityEngine_Transform__set_localEulerAngles(
        (UnityEngine_Transform_o *)v20,
        UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
        0);
      this = (BattleFBXComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v13, 0);
      v21 = this;
      if ( !byte_4C20DA6 )
      {
        this = (BattleFBXComponent_o *)sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
        byte_4C20DA6 = 1;
      }
      if ( !v21 )
        goto LABEL_43;
      UnityEngine_Transform__set_localScale(
        (UnityEngine_Transform_o *)v21,
        UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
        0);
      ObjectScaleEnabler__OnUpdate((ObjectScaleEnabler_o *)v15, 0);
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v13, 1, 0);
      this = (BattleFBXComponent_o *)v8->fields.PrefabNodes;
      if ( !this )
        goto LABEL_43;
      m_CachedPtr = this->fields.m_CachedPtr;
      v25 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !m_CachedPtr )
        goto LABEL_43;
      m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          v13,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
      }
      else
      {
        v27 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
        LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v27 + 32) = v13;
        sub_1C2D434((CGThumbnailListItem_o *)(v27 + 32), (int32_t)v13, v22, v23);
      }
      actorEffectDict = (System_Collections_Generic_Dictionary_object__object__o *)v8->fields.actorEffectDict;
      this = (BattleFBXComponent_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)node, 0);
      if ( !actorEffectDict )
        goto LABEL_43;
      if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
              actorEffectDict,
              (Il2CppObject *)this,
              (const MethodInfo_344A51C *)Method_System_Collections_Generic_Dictionary_string__GameObject__ContainsKey__) )
      {
        v33 = (BattleFBXComponent_o *)v8->fields.actorEffectDict;
        this = (BattleFBXComponent_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)node, 0);
        if ( v33 )
        {
          v32 = (Il2CppObject *)this;
          this = v33;
          goto LABEL_41;
        }
LABEL_43:
        sub_1C2D6EC(this, node);
      }
      name = UnityEngine_Object__get_name((UnityEngine_Object_o *)node, 0);
      this = (BattleFBXComponent_o *)System_String__Concat_63457864(name, (System_String_o *)StringLiteral_16529/*"_aDd"*/, 0);
      if ( !v8->fields.actorEffectDict )
        goto LABEL_43;
      v30 = this;
      v31 = System_Collections_Generic_Dictionary_object__object___ContainsKey(
              (System_Collections_Generic_Dictionary_object__object__o *)v8->fields.actorEffectDict,
              (Il2CppObject *)this,
              (const MethodInfo_344A51C *)Method_System_Collections_Generic_Dictionary_string__GameObject__ContainsKey__);
      this = (BattleFBXComponent_o *)v13;
      if ( !v31 )
      {
        this = (BattleFBXComponent_o *)v8->fields.actorEffectDict;
        if ( this )
        {
          v32 = (Il2CppObject *)v30;
LABEL_41:
          System_Collections_Generic_Dictionary_object__object___Add(
            (System_Collections_Generic_Dictionary_object__object__o *)this,
            v32,
            v13,
            (const MethodInfo_344A328 *)Method_System_Collections_Generic_Dictionary_string__GameObject__Add__);
          return (UnityEngine_GameObject_o *)v13;
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
  __int64 v6; // x1
  struct System_Collections_Generic_List_GameObject__o *v7; // x8
  int32_t size; // w2
  int v9; // w9
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C29D34 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C29D34 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  PrefabNodes = this->fields.PrefabNodes;
  if ( PrefabNodes )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v10,
      (System_Collections_Generic_List_object__o *)PrefabNodes,
      (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v10,
              (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v10.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71163704((UnityEngine_Object_o *)current, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v10,
      (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    v7 = this->fields.PrefabNodes;
    if ( !v7 )
      sub_1C2D6EC(v5, v6);
    size = v7->fields._size;
    v9 = v7->fields._version + 1;
    v7->fields._size = 0;
    v7->fields._version = v9;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v7->fields._items, 0, size, 0);
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
  __int64 v7; // x1
  Il2CppObject *current; // x20
  UnityEngine_Object_o *transform; // x0
  __int64 v10; // x1
  System_String_o *v11; // x0
  __int64 v12; // x1
  System_String_o *v13; // x21
  _DWORD *v14; // x22
  _BOOL8 v15; // x0
  __int64 v16; // x1
  __int64 v17; // x1
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C29D45 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C2D490(&StringLiteral_685/*"(Clone)"*/);
    byte_4C29D45 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  PrefabNodes = this->fields.PrefabNodes;
  if ( !PrefabNodes )
    sub_1C2D6EC(0, name);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v19,
    (System_Collections_Generic_List_object__o *)PrefabNodes,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v20 = v19;
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v20,
           (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    if ( !v6 )
      break;
    current = v20.fields._current;
    if ( !v20.fields._current )
      sub_1C2D6EC(v6, v7);
    transform = (UnityEngine_Object_o *)UnityEngine_GameObject__get_transform(
                                          (UnityEngine_GameObject_o *)v20.fields._current,
                                          0);
    if ( !transform )
      sub_1C2D6EC(0, v10);
    v11 = UnityEngine_Object__get_name(transform, 0);
    v13 = v11;
    if ( !v11 )
      sub_1C2D6EC(0, v12);
    v14 = StringLiteral_685/*"(Clone)"*/;
    v15 = System_String__EndsWith(v11, (System_String_o *)StringLiteral_685/*"(Clone)"*/, 0);
    if ( v15 )
    {
      if ( !v14 )
        sub_1C2D6EC(v15, v16);
      v13 = System_String__Substring_63503788(v13, 0, v13->fields._stringLength - v14[4], 0);
      if ( !v13 )
        sub_1C2D6EC(0, v17);
    }
    if ( System_String__Equals_63493168(v13, name, 0) )
      goto LABEL_15;
  }
  current = 0;
LABEL_15:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v20,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (UnityEngine_GameObject_o *)current;
}


System_String_o *BattleFBXComponent__GetRealAnimName(
        BattleFBXComponent_o *this,
        System_String_o *targetName,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__string__o *RealAnimNames; // x0
  __int64 v6; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *v7; // x0

  if ( (byte_4C29D50 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    byte_4C29D50 = 1;
  }
  RealAnimNames = this->fields.RealAnimNames;
  if ( !RealAnimNames
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)RealAnimNames,
          (Il2CppObject *)targetName,
          (const MethodInfo_344A51C *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
  {
    return targetName;
  }
  v7 = this->fields.RealAnimNames;
  if ( !v7 )
    sub_1C2D6EC(0, v6);
  return (System_String_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                              (System_Collections_Generic_Dictionary_object__object__o *)v7,
                              (Il2CppObject *)targetName,
                              (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
}


void BattleFBXComponent__InitAnimNameDict(BattleFBXComponent_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__string__o *RealAnimNames; // x0

  if ( (byte_4C29D2E & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__string__Clear__);
    byte_4C29D2E = 1;
  }
  RealAnimNames = this->fields.RealAnimNames;
  if ( !RealAnimNames
    || (System_Collections_Generic_Dictionary_object__object___Clear(
          (System_Collections_Generic_Dictionary_object__object__o *)RealAnimNames,
          (const MethodInfo_344A4B0 *)Method_System_Collections_Generic_Dictionary_string__string__Clear__),
        (RealAnimNames = this->fields.CommonAnimNames) == 0) )
  {
    sub_1C2D6EC(RealAnimNames, method);
  }
  System_Collections_Generic_Dictionary_object__object___Clear(
    (System_Collections_Generic_Dictionary_object__object__o *)RealAnimNames,
    (const MethodInfo_344A4B0 *)Method_System_Collections_Generic_Dictionary_string__string__Clear__);
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
  __int64 v11; // x1
  System_Enum_o v13; // [xsp+8h] [xbp-48h] BYREF
  int32_t v14; // [xsp+18h] [xbp-38h]

  if ( (byte_4C29D2C & 1) == 0 )
  {
    sub_1C2D490(&HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo);
    byte_4C29D2C = 1;
  }
  currentCommonAnimName = this->fields.currentCommonAnimName;
  if ( exceptNullOrEmpty )
  {
    v13.klass = (System_Enum_c *)HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo;
    v13.monitor = (void *)-1LL;
    v14 = animName;
    v8 = System_Enum__ToString(&v13, 0);
    return BasicHelper__EqualExceptNullOrEmpty(currentCommonAnimName, v8, 0);
  }
  else
  {
    v13.klass = (System_Enum_c *)HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo;
    v13.monitor = (void *)-1LL;
    v14 = animName;
    v10 = System_Enum__ToString(&v13, 0);
    if ( !currentCommonAnimName )
      sub_1C2D6EC(v10, v11);
    return System_String__Equals_63493168(currentCommonAnimName, v10, 0);
  }
}


bool BattleFBXComponent__IsYTransparenceShader(BattleFBXComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *enableRendererList; // x0
  int32_t v3; // w20
  int32_t size; // w27
  Il2CppObject *Item; // x21
  __int64 v6; // x2
  __int64 v7; // x8
  System_Collections_Generic_List_object__o *v8; // x21
  unsigned __int64 v9; // x29
  UnityEngine_Object_o *v10; // x23
  __int64 v11; // x22
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  BattleFBXComponent_c *v14; // x0
  System_Object_array *yTransparenceShaderNames; // x23
  System_Func_object__bool__o *v16; // x24

  if ( (byte_4C29D48 & 1) == 0 )
  {
    sub_1C2D490(&Method_BasicHelper_Any_string____77997088);
    sub_1C2D490(&BattleFBXComponent_TypeInfo);
    sub_1C2D490(&System_Func_string__bool__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_Renderer__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Renderer__get_Item__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_BattleFBXComponent___c__DisplayClass80_0__IsYTransparenceShader_b__0__);
    sub_1C2D490(&BattleFBXComponent___c__DisplayClass80_0_TypeInfo);
    byte_4C29D48 = 1;
  }
  enableRendererList = (System_Collections_Generic_List_object__o *)this->fields.enableRendererList;
  if ( !enableRendererList )
LABEL_26:
    sub_1C2D6EC(enableRendererList, method);
  v3 = 0;
  while ( 1 )
  {
    size = enableRendererList->fields._size;
    if ( v3 >= size )
      return v3 < size;
    Item = System_Collections_Generic_List_object___get_Item(
             enableRendererList,
             v3,
             (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_Renderer__get_Item__);
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
        v7 = *(_QWORD *)&enableRendererList->fields._size;
        v8 = enableRendererList;
        if ( (int)v7 >= 1 )
        {
          v9 = 0;
          do
          {
            if ( v9 >= (unsigned int)v7 )
              sub_1C2D6F4(enableRendererList, method, v6);
            v10 = (UnityEngine_Object_o *)*((_QWORD *)&v8->fields._syncRoot + v9);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            enableRendererList = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Inequality(
                                                                                v10,
                                                                                0,
                                                                                0);
            if ( ((unsigned __int8)enableRendererList & 1) != 0 )
            {
              v11 = sub_1C2D6DC(BattleFBXComponent___c__DisplayClass80_0_TypeInfo);
              System_Object___ctor((Il2CppObject *)v11, 0);
              if ( !v10 )
                goto LABEL_26;
              enableRendererList = (System_Collections_Generic_List_object__o *)UnityEngine_Material__get_shader(
                                                                                  (UnityEngine_Material_o *)v10,
                                                                                  0);
              if ( !enableRendererList )
                goto LABEL_26;
              enableRendererList = (System_Collections_Generic_List_object__o *)UnityEngine_Object__get_name(
                                                                                  (UnityEngine_Object_o *)enableRendererList,
                                                                                  0);
              if ( !v11 )
                goto LABEL_26;
              *(_QWORD *)(v11 + 16) = enableRendererList;
              sub_1C2D434((CGThumbnailListItem_o *)(v11 + 16), (int32_t)enableRendererList, v12, v13);
              v14 = BattleFBXComponent_TypeInfo;
              if ( !BattleFBXComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
                v14 = BattleFBXComponent_TypeInfo;
              }
              yTransparenceShaderNames = (System_Object_array *)v14->static_fields->yTransparenceShaderNames;
              v16 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_string__bool__TypeInfo);
              System_Func_object__bool____ctor(
                v16,
                (Il2CppObject *)v11,
                Method_BattleFBXComponent___c__DisplayClass80_0__IsYTransparenceShader_b__0__,
                0);
              enableRendererList = (System_Collections_Generic_List_object__o *)BasicHelper__Any_object__51084700(
                                                                                  yTransparenceShaderNames,
                                                                                  (System_Func_T__bool__o *)v16,
                                                                                  (const MethodInfo_30B7D9C *)Method_BasicHelper_Any_string____77997088);
              if ( ((unsigned __int8)enableRendererList & 1) != 0 )
                return v3 < size;
            }
            LODWORD(v7) = v8->fields._size;
          }
          while ( (__int64)++v9 < (int)v7 );
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

  if ( (byte_4C29D32 & 1) == 0 )
  {
    sub_1C2D490(&BattleFBXComponent_TypeInfo);
    byte_4C29D32 = 1;
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
        sub_1C2D6EC(v5, ev);
      ((void (__fastcall *)(intptr_t, struct System_String_o *, intptr_t))OnEvent->fields.invoke_impl)(
        OnEvent->fields.method_code,
        ev->fields.tag,
        OnEvent->fields.method);
    }
  }
}


void BattleFBXComponent__OnAnimEvent_45811280(
        BattleFBXComponent_o *this,
        UnityEngine_AnimationEvent_o *ev,
        const MethodInfo *method)
{
  System_String_o *stringParameter; // x0
  __int64 v6; // x2
  struct BattleFBXComponent_onEventDelegate_o *OnEvent; // x8

  if ( (byte_4C29D42 & 1) == 0 )
  {
    sub_1C2D490(&BattleFBXComponent_TypeInfo);
    byte_4C29D42 = 1;
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
      sub_1C2D6F4(stringParameter, ev, v6);
    OnEvent = this->fields.OnEvent;
    if ( !OnEvent )
LABEL_13:
      sub_1C2D6EC(stringParameter, ev);
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

  if ( (byte_4C29D44 & 1) == 0 )
  {
    sub_1C2D490(&HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo);
    sub_1C2D490(&StringLiteral_24695/*"wait"*/);
    byte_4C29D44 = 1;
  }
  animename = this->fields.animename;
  if ( animename )
  {
    if ( System_String__StartsWith(animename, (System_String_o *)StringLiteral_24695/*"wait"*/, 0) )
    {
      BattleFBXComponent__playAnimation(this, (System_String_o *)StringLiteral_24695/*"wait"*/, v4);
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
  __int64 v6; // x1
  SimpleAnimation_o *v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  UnityEngine_Object_o *animationComponent; // x20
  UnityEngine_Object_o *defAnimClip; // x21

  if ( (byte_4C29D52 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C29D52 = 1;
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
      v7 = this->fields.simpleAnimationComponent;
      if ( v7 )
      {
        SimpleAnimation__set_clip(v7, *p_defSimpleAnimClip, 0);
LABEL_19:
        *p_defSimpleAnimClip = 0;
        sub_1C2D434((CGThumbnailListItem_o *)p_defSimpleAnimClip, 0, v8, v9);
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
      v7 = (SimpleAnimation_o *)this->fields.animationComponent;
      if ( v7 )
      {
        UnityEngine_Animation__set_clip((UnityEngine_Animation_o *)v7, *p_defSimpleAnimClip, 0);
        goto LABEL_19;
      }
LABEL_21:
      sub_1C2D6EC(v7, v6);
    }
  }
}


void BattleFBXComponent__RevertShaderFloatProperty(BattleFBXComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *tempMaterialPropertyDict; // x0
  __int128 v4; // kr00_16
  float v5; // s8
  _BOOL8 v6; // x0
  __int64 v7; // x1
  __int128 v8; // [xsp+0h] [xbp-80h] BYREF
  __int128 v9; // [xsp+10h] [xbp-70h]
  __int128 v10; // [xsp+20h] [xbp-60h]

  if ( (byte_4C29D4B & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_KeyValuePair_string__Material___float__Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_KeyValuePair_string__Material___float__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_string__Material___float__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_string__Material___float__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_string__Material___float__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_KeyValuePair_KeyValuePair_string__Material___float__get_Key__);
    sub_1C2D490(&Method_System_Collections_Generic_KeyValuePair_string__Material__get_Key__);
    sub_1C2D490(&Method_System_Collections_Generic_KeyValuePair_KeyValuePair_string__Material___float__get_Value__);
    sub_1C2D490(&Method_System_Collections_Generic_KeyValuePair_string__Material__get_Value__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C29D4B = 1;
  }
  v9 = 0u;
  v10 = 0u;
  v8 = 0u;
  tempMaterialPropertyDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.tempMaterialPropertyDict;
  if ( !tempMaterialPropertyDict )
    goto LABEL_14;
  System_Collections_Generic_Dictionary_KeyValuePair_object__object___float___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v8,
    tempMaterialPropertyDict,
    (const MethodInfo_339F93C *)Method_System_Collections_Generic_Dictionary_KeyValuePair_string__Material___float__GetEnumerator__);
  while ( System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_object__object___float___MoveNext(
            (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v8,
            (const MethodInfo_352C70C *)Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_string__Material___float__MoveNext__) )
  {
    v4 = v9;
    v5 = *(float *)&v10;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = UnityEngine_Object__op_Inequality(*((UnityEngine_Object_o **)&v4 + 1), 0, 0);
    if ( v6 )
    {
      if ( !*((_QWORD *)&v4 + 1) )
        sub_1C2D6EC(v6, v7);
      UnityEngine_Material__SetFloat(*((UnityEngine_Material_o **)&v4 + 1), (System_String_o *)v4, v5, 0);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_object__object___float___Dispose(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v8,
    (const MethodInfo_352C848 *)Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_string__Material___float__Dispose__);
  tempMaterialPropertyDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.tempMaterialPropertyDict;
  if ( !tempMaterialPropertyDict )
LABEL_14:
    sub_1C2D6EC(tempMaterialPropertyDict, method);
  System_Collections_Generic_Dictionary_KeyValuePair_object__object___float___Clear(
    tempMaterialPropertyDict,
    (const MethodInfo_339F6A8 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_string__Material___float__Clear__);
}


// local variable allocation has failed, the output may be wrong!
void BattleFBXComponent__SetActiveActorEffectAll(BattleFBXComponent_o *this, bool isActive, const MethodInfo *method)
{
  _BOOL4 v3; // w19
  struct System_Collections_Generic_Dictionary_string__GameObject__o *actorEffectDict; // x0
  _BOOL8 v6; // x0
  __int64 v7; // x1
  Il2CppObject *value; // x20
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v9; // [xsp+0h] [xbp-60h] BYREF

  v3 = isActive;
  if ( (byte_4C29D4F & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__GameObject__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_string__GameObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_string__GameObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_string__GameObject__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_KeyValuePair_string__GameObject__get_Value__);
    byte_4C29D4F = 1;
  }
  memset(&v9, 0, sizeof(v9));
  actorEffectDict = this->fields.actorEffectDict;
  if ( !actorEffectDict )
    sub_1C2D6EC(0, isActive);
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v9,
    (System_Collections_Generic_Dictionary_object__object__o *)actorEffectDict,
    (const MethodInfo_344A758 *)Method_System_Collections_Generic_Dictionary_string__GameObject__GetEnumerator__);
  while ( 1 )
  {
    v6 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
           &v9,
           (const MethodInfo_3546DD4 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__GameObject__MoveNext__);
    if ( !v6 )
      break;
    value = v9.fields._current.fields.value;
    if ( !v9.fields._current.fields.value )
      sub_1C2D6EC(v6, v7);
    if ( ((UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)v9.fields._current.fields.value, 0)
         ^ v3)
        & 1) != 0 )
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)value, v3, 0);
  }
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v9,
    (const MethodInfo_3546EF4 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__GameObject__Dispose__);
}


void BattleFBXComponent__SetActiveActorEffectFromEffectName(
        BattleFBXComponent_o *this,
        System_String_o *effectName,
        bool isActive,
        const MethodInfo *method)
{
  _BOOL4 v4; // w19
  struct System_Collections_Generic_Dictionary_string__GameObject__o *actorEffectDict; // x0
  __int64 v8; // x1
  Il2CppObject *value; // x21
  _BOOL8 v10; // x0
  __int64 v11; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v12; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v13; // [xsp+30h] [xbp-60h] BYREF

  v4 = isActive;
  if ( (byte_4C29D4E & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__GameObject__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_string__GameObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_string__GameObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_string__GameObject__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_KeyValuePair_string__GameObject__get_Key__);
    sub_1C2D490(&Method_System_Collections_Generic_KeyValuePair_string__GameObject__get_Value__);
    byte_4C29D4E = 1;
  }
  memset(&v13, 0, sizeof(v13));
  actorEffectDict = this->fields.actorEffectDict;
  if ( !actorEffectDict )
    sub_1C2D6EC(0, effectName);
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v12,
    (System_Collections_Generic_Dictionary_object__object__o *)actorEffectDict,
    (const MethodInfo_344A758 *)Method_System_Collections_Generic_Dictionary_string__GameObject__GetEnumerator__);
  v13 = v12;
  while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            &v13,
            (const MethodInfo_3546DD4 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__GameObject__MoveNext__) )
  {
    if ( !v13.fields._current.fields.key )
      sub_1C2D6EC(0, v8);
    value = v13.fields._current.fields.value;
    v10 = System_String__Contains((System_String_o *)v13.fields._current.fields.key, effectName, 0);
    if ( v10 )
    {
      if ( !value )
        sub_1C2D6EC(v10, v11);
      if ( ((UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)value, 0) ^ v4) & 1) != 0 )
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)value, v4, 0);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v13,
    (const MethodInfo_3546EF4 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__GameObject__Dispose__);
}


void BattleFBXComponent__SetActiveActorEffectFromNodeName(
        BattleFBXComponent_o *this,
        System_String_o *nodeName,
        bool isActive,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *actorEffectDict; // x0
  UnityEngine_GameObject_o *v8; // x20

  if ( (byte_4C29D4D & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__GameObject__ContainsKey__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__GameObject__get_Item__);
    byte_4C29D4D = 1;
  }
  actorEffectDict = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.actorEffectDict;
  if ( !actorEffectDict )
    goto LABEL_10;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          actorEffectDict,
          (Il2CppObject *)nodeName,
          (const MethodInfo_344A51C *)Method_System_Collections_Generic_Dictionary_string__GameObject__ContainsKey__) )
    return;
  actorEffectDict = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.actorEffectDict;
  if ( !actorEffectDict
    || (actorEffectDict = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                       actorEffectDict,
                                                                                       (Il2CppObject *)nodeName,
                                                                                       (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_string__GameObject__get_Item__)) == 0 )
  {
LABEL_10:
    sub_1C2D6EC(actorEffectDict, nodeName);
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

  if ( (byte_4C29D46 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C29D46 = 1;
  }
  PrefabNode = BattleFBXComponent__GetPrefabNode(this, name, (const MethodInfo *)isConnect);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)PrefabNode, 0, 0) )
    BattleFBXComponent__SetConnectPrefabNode_45814028(this, PrefabNode, isConnect, v8);
}


void BattleFBXComponent__SetConnectPrefabNode_45814028(
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
  if ( (byte_4C29D47 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_BattleActorControl___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_ObjectScaleEnabler___);
    this = (BattleFBXComponent_o *)sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C29D47 = 1;
  }
  if ( !obj )
    goto LABEL_29;
  if ( isConnect )
  {
    Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 obj,
                                                 (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_ObjectScaleEnabler___);
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
      if ( !byte_4C20DA6 )
      {
        this = (BattleFBXComponent_o *)sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
        byte_4C20DA6 = 1;
      }
      if ( !v10 )
        goto LABEL_29;
      UnityEngine_Transform__set_localScale(
        (UnityEngine_Transform_o *)v10,
        UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
        0);
      v11 = UnityEngine_Component__GetComponent_object_(
              (UnityEngine_Component_o *)monitor,
              (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_BattleActorControl___);
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
        sub_1C2D6EC(this, obj);
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
            (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
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
    sub_1C2D6EC(0, svtId);
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
  __int64 v10; // x1
  struct SimpleAnimation_o *v11; // x8
  UnityEngine_Object_o *m_Clip; // x21
  SimpleAnimation_State_o *Item; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v15; // x20
  __int64 v16; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v18; // x0
  UnityEngine_Object_o *animationComponent; // x21
  UnityEngine_Object_o *clip; // x21
  UnityEngine_TrackedReference_o *v21; // x20
  UnityEngine_Object_o *v22; // x21
  UnityEngine_Object_o *v23; // x22
  struct UnityEngine_AnimationClip_o *v24; // x0
  struct UnityEngine_AnimationClip_o **p_defAnimClip; // x19
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  UnityEngine_Animation_o *v28; // x19
  struct SimpleAnimation_o *v29; // x8
  UnityEngine_Object_o *v30; // x21
  UnityEngine_Object_o *v31; // x22
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  struct SimpleAnimation_o *v34; // x8
  struct UnityEngine_AnimationClip_o *v35; // x1
  struct UnityEngine_AnimationClip_o **p_defSimpleAnimClip; // x19
  SimpleAnimation_State_c *v37; // x8
  SimpleAnimation_o *v38; // x19
  __int64 v39; // x9
  SimpleAnimation_State_c **v40; // x10
  __int64 v41; // x0

  if ( (byte_4C29D51 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&SimpleAnimation_State_TypeInfo);
    byte_4C29D51 = 1;
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
    v11 = this->fields.simpleAnimationComponent;
    if ( !v11 )
      goto LABEL_50;
    m_Clip = (UnityEngine_Object_o *)v11->fields.m_Clip;
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
        v15 = Item;
        v16 = *(unsigned __int16 *)&Item->klass->_2.rank;
        if ( *(_WORD *)&Item->klass->_2.rank )
        {
          p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
          while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            --v16;
            p_offset += 2;
            if ( !v16 )
              goto LABEL_17;
          }
          v18 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 14];
        }
        else
        {
LABEL_17:
          v18 = sub_1C7DCA8(Item, SimpleAnimation_State_TypeInfo, 14);
        }
        v9 = (*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v18)(v15, *(_QWORD *)(v18 + 8));
        v29 = this->fields.simpleAnimationComponent;
        if ( !v29 )
          goto LABEL_50;
        v30 = (UnityEngine_Object_o *)v9;
        v31 = (UnityEngine_Object_o *)v29->fields.m_Clip;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v9 = UnityEngine_Object__op_Inequality(v30, v31, 0);
        if ( (v9 & 1) != 0 )
        {
          v34 = this->fields.simpleAnimationComponent;
          if ( v34 )
          {
            v35 = v34->fields.m_Clip;
            this->fields.defSimpleAnimClip = v35;
            p_defSimpleAnimClip = &this->fields.defSimpleAnimClip;
            sub_1C2D434((CGThumbnailListItem_o *)p_defSimpleAnimClip, (int32_t)v35, v32, v33);
            v37 = v15->klass;
            v38 = (SimpleAnimation_o *)*(p_defSimpleAnimClip - 17);
            v39 = *(unsigned __int16 *)&v15->klass->_2.rank;
            if ( *(_WORD *)&v15->klass->_2.rank )
            {
              v40 = (SimpleAnimation_State_c **)&v37->_1.interfaceOffsets->offset;
              while ( *(v40 - 1) != SimpleAnimation_State_TypeInfo )
              {
                --v39;
                v40 += 2;
                if ( !v39 )
                  goto LABEL_45;
              }
              v41 = (__int64)&v37->vtable[*(_DWORD *)v40 + 14];
            }
            else
            {
LABEL_45:
              v41 = sub_1C7DCA8(v15, SimpleAnimation_State_TypeInfo, 14);
            }
            v9 = (*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v41)(v15, *(_QWORD *)(v41 + 8));
            if ( v38 )
            {
              SimpleAnimation__set_clip(v38, (UnityEngine_AnimationClip_o *)v9, 0);
              return;
            }
          }
LABEL_50:
          sub_1C2D6EC(v9, v10);
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
          v21 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item((UnityEngine_Animation_o *)v9, v8, 0);
          v9 = UnityEngine_TrackedReference__op_Inequality(v21, 0, 0);
          if ( (v9 & 1) != 0 )
          {
            if ( !v21 )
              goto LABEL_50;
            v9 = (__int64)UnityEngine_AnimationState__get_clip((UnityEngine_AnimationState_o *)v21, 0);
            if ( !this->fields.animationComponent )
              goto LABEL_50;
            v22 = (UnityEngine_Object_o *)v9;
            v23 = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(this->fields.animationComponent, 0);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(v22, v23, 0) )
            {
              v9 = (__int64)this->fields.animationComponent;
              if ( v9 )
              {
                v24 = UnityEngine_Animation__get_clip((UnityEngine_Animation_o *)v9, 0);
                this->fields.defAnimClip = v24;
                p_defAnimClip = &this->fields.defAnimClip;
                sub_1C2D434((CGThumbnailListItem_o *)p_defAnimClip, (int32_t)v24, v26, v27);
                v28 = (UnityEngine_Animation_o *)*(p_defAnimClip - 19);
                v9 = (__int64)UnityEngine_AnimationState__get_clip((UnityEngine_AnimationState_o *)v21, 0);
                if ( v28 )
                {
                  UnityEngine_Animation__set_clip(v28, (UnityEngine_AnimationClip_o *)v9, 0);
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
  System_String_o *v4; // x19
  System_Collections_Generic_List_object__o *enableRendererList; // x0
  const MethodInfo_37898B4 **v8; // x24
  UnityEngine_Object_c **v9; // x25
  Il2CppObject **v10; // x20
  const MethodInfo_339F714 **v11; // x27
  int32_t v12; // w21
  Il2CppObject *Item; // x22
  __int64 v14; // x8
  System_Collections_Generic_List_object__o *v15; // x22
  unsigned __int64 v16; // x29
  Il2CppObject **p_syncRoot; // x28
  UnityEngine_Object_o *v18; // x23
  const MethodInfo_36C2838 *v19; // x4
  System_Collections_Generic_List_object__o *v20; // x21
  const MethodInfo_339F714 **v21; // x22
  Il2CppObject **v22; // x27
  UnityEngine_Object_c **v23; // x20
  const MethodInfo_37898B4 **v24; // x28
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

  v4 = propertyName;
  if ( (byte_4C29D4A & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_KeyValuePair_string__Material___float__ContainsKey__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_KeyValuePair_string__Material___float__set_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_KeyValuePair_string__Material___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Renderer__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Renderer__get_Item__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C29D4A = 1;
  }
  v34.fields.key = 0;
  v34.fields.value = 0;
  enableRendererList = (System_Collections_Generic_List_object__o *)this->fields.enableRendererList;
  if ( !enableRendererList )
LABEL_29:
    sub_1C2D6EC(enableRendererList, propertyName);
  v8 = (const MethodInfo_37898B4 **)&Method_System_Collections_Generic_List_Renderer__get_Item__;
  v9 = &UnityEngine_Object_TypeInfo;
  v10 = (Il2CppObject **)&Method_System_Collections_Generic_KeyValuePair_string__Material___ctor__;
  v11 = (const MethodInfo_339F714 **)&Method_System_Collections_Generic_Dictionary_KeyValuePair_string__Material___float__ContainsKey__;
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
                sub_1C2D6F4(enableRendererList, propertyName, method);
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
                enableRendererList = (System_Collections_Generic_List_object__o *)UnityEngine_Material__HasProperty_71029840(
                                                                                    (UnityEngine_Material_o *)v18,
                                                                                    v4,
                                                                                    0);
                if ( ((unsigned __int8)enableRendererList & 1) != 0 )
                {
                  v36.fields.key = (Il2CppObject *)&v34;
                  v36.fields.value = (Il2CppObject *)v4;
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
                    v25 = v4;
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
                      (const MethodInfo_339F4F4 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_string__Material___float__set_Item__);
                    v8 = v24;
                    v9 = v23;
                    v10 = v22;
                    v11 = v21;
                    v15 = v20;
                    v12 = v35;
                    p_syncRoot = v33;
                    this = v26;
                    v4 = v31;
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
  BattleFBXComponent__SetYTransparenceShaderProperty(this, value, v4, method);
}


void BattleFBXComponent__SetWrapMode(
        BattleFBXComponent_o *this,
        System_String_o *animName,
        int32_t wrapMode,
        const MethodInfo *method)
{
  UnityEngine_Object_o *animationComponent; // x22
  __int64 v8; // x1
  UnityEngine_Animation_o *v9; // x0
  UnityEngine_TrackedReference_o *Item; // x20
  UnityEngine_Object_o *simpleAnimationComponent; // x22
  SimpleAnimation_State_o *v12; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v14; // x20
  __int64 v15; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v17; // x0

  if ( (byte_4C29D31 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&SimpleAnimation_State_TypeInfo);
    byte_4C29D31 = 1;
  }
  BattleFBXComponent__setupAnimation(this, (const MethodInfo *)animName);
  animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(animationComponent, 0, 0) )
  {
    v9 = this->fields.animationComponent;
    if ( !v9 )
      goto LABEL_23;
    Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v9, animName, 0);
    v9 = (UnityEngine_Animation_o *)UnityEngine_TrackedReference__op_Inequality(Item, 0, 0);
    if ( ((unsigned __int8)v9 & 1) != 0 )
    {
      if ( Item )
      {
        UnityEngine_AnimationState__set_wrapMode((UnityEngine_AnimationState_o *)Item, wrapMode, 0);
        return;
      }
LABEL_23:
      sub_1C2D6EC(v9, v8);
    }
  }
  else
  {
    simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0, 0) )
    {
      v9 = (UnityEngine_Animation_o *)this->fields.simpleAnimationComponent;
      if ( !v9 )
        goto LABEL_23;
      v12 = SimpleAnimation__get_Item((SimpleAnimation_o *)v9, animName, 0);
      if ( v12 )
      {
        klass = v12->klass;
        v14 = v12;
        v15 = *(unsigned __int16 *)&v12->klass->_2.rank;
        if ( *(_WORD *)&v12->klass->_2.rank )
        {
          p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
          while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            --v15;
            p_offset += 2;
            if ( !v15 )
              goto LABEL_19;
          }
          v17 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 18];
        }
        else
        {
LABEL_19:
          v17 = sub_1C7DCA8(v12, SimpleAnimation_State_TypeInfo, 18);
        }
        (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD, _QWORD))v17)(
          v14,
          (unsigned int)wrapMode,
          *(_QWORD *)(v17 + 8));
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
  __int64 v10; // x2
  __int64 v11; // x8
  System_Collections_Generic_List_object__o *v12; // x22
  unsigned __int64 v13; // x26
  UnityEngine_Object_o *v14; // x23

  if ( (byte_4C29D49 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Renderer__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Renderer__get_Item__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C29D49 = 1;
  }
  enableRendererList = (System_Collections_Generic_List_object__o *)this->fields.enableRendererList;
  if ( !enableRendererList )
LABEL_26:
    sub_1C2D6EC(enableRendererList, propertyName);
  v8 = 0;
  while ( v8 < enableRendererList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             enableRendererList,
             v8,
             (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_Renderer__get_Item__);
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
                                                                          (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_Renderer__get_Item__);
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
                                                                            (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_Renderer__get_Item__);
        if ( !enableRendererList )
          goto LABEL_26;
        enableRendererList = (System_Collections_Generic_List_object__o *)UnityEngine_Renderer__get_sharedMaterials(
                                                                            (UnityEngine_Renderer_o *)enableRendererList,
                                                                            0);
        if ( !enableRendererList )
          goto LABEL_26;
        v11 = *(_QWORD *)&enableRendererList->fields._size;
        v12 = enableRendererList;
        if ( (int)v11 >= 1 )
        {
          v13 = 0;
          do
          {
            if ( v13 >= (unsigned int)v11 )
              sub_1C2D6F4(enableRendererList, propertyName, v10);
            v14 = (UnityEngine_Object_o *)*((_QWORD *)&v12->fields._syncRoot + v13);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            enableRendererList = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Inequality(
                                                                                v14,
                                                                                0,
                                                                                0);
            if ( ((unsigned __int8)enableRendererList & 1) != 0 )
            {
              if ( !v14 )
                goto LABEL_26;
              enableRendererList = (System_Collections_Generic_List_object__o *)UnityEngine_Material__HasProperty_71029840(
                                                                                  (UnityEngine_Material_o *)v14,
                                                                                  propertyName,
                                                                                  0);
              if ( ((unsigned __int8)enableRendererList & 1) != 0 )
                UnityEngine_Material__SetFloat((UnityEngine_Material_o *)v14, propertyName, value, 0);
            }
            LODWORD(v11) = v12->fields._size;
            ++v13;
          }
          while ( (__int64)v13 < (int)v11 );
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
  __int64 v4; // x1
  Il2CppObject *Component_object; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C29D2F & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_BillBoard___);
    byte_4C29D2F = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C2D6EC(0, v4);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_BillBoard___);
  this->fields.billBoard = (struct BillBoard_o *)Component_object;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.billBoard, (int32_t)Component_object, v6, v7);
}


void BattleFBXComponent__Update(BattleFBXComponent_o *this, const MethodInfo *method)
{
  float deltaTime; // s0
  const MethodInfo *v4; // x1

  deltaTime = UnityEngine_Time__get_deltaTime(0);
  BattleFBXComponent__AnimUpdate(this, deltaTime, v4);
}


// local variable allocation has failed, the output may be wrong!
void BattleFBXComponent__changeActiveEffect(BattleFBXComponent_o *this, bool active, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *componentsXWeaponTrail; // x0
  Il2CppObject *current; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4C29D38 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_XWeaponTrail__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_XWeaponTrail__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_XWeaponTrail__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_XWeaponTrail__GetEnumerator__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C29D38 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  componentsXWeaponTrail = (System_Collections_Generic_List_object__o *)this->fields.componentsXWeaponTrail;
  if ( !componentsXWeaponTrail )
    sub_1C2D6EC(0, active);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    componentsXWeaponTrail,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_XWeaponTrail__GetEnumerator__);
  v10 = v9;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v10,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_XWeaponTrail__MoveNext__) )
  {
    current = v10.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0, 0);
    if ( !v7 )
    {
      if ( active )
      {
        if ( !current )
          sub_1C2D6EC(v7, v8);
        XWeaponTrail__Activate((XWeaponTrail_o *)current, 0);
      }
      else
      {
        if ( !current )
          sub_1C2D6EC(v7, v8);
        XWeaponTrail__Deactivate((XWeaponTrail_o *)current, 0);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v10,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_XWeaponTrail__Dispose__);
}


bool BattleFBXComponent__checkAnimation(
        BattleFBXComponent_o *this,
        System_String_o *filename,
        const MethodInfo *method)
{
  Il2CppObject *Item; // x19
  System_Collections_Generic_Dictionary_object__object__o *RealAnimNames; // x0
  UnityEngine_Object_o *animationComponent; // x21
  UnityEngine_TrackedReference_o *v7; // x0
  UnityEngine_Object_o *simpleAnimationComponent; // x21

  Item = (Il2CppObject *)filename;
  if ( (byte_4C29D3C & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C29D3C = 1;
  }
  RealAnimNames = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.RealAnimNames;
  if ( !RealAnimNames )
    goto LABEL_18;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         RealAnimNames,
         Item,
         (const MethodInfo_344A51C *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
  {
    RealAnimNames = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.RealAnimNames;
    if ( !RealAnimNames )
      goto LABEL_18;
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             RealAnimNames,
             Item,
             (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
  }
  animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(animationComponent, 0, 0) )
  {
    RealAnimNames = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.animationComponent;
    if ( RealAnimNames )
    {
      v7 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                               (UnityEngine_Animation_o *)RealAnimNames,
                                               (System_String_o *)Item,
                                               0);
      return UnityEngine_TrackedReference__op_Inequality(v7, 0, 0);
    }
LABEL_18:
    sub_1C2D6EC(RealAnimNames, filename);
  }
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0, 0) )
    return 0;
  RealAnimNames = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.simpleAnimationComponent;
  if ( !RealAnimNames )
    goto LABEL_18;
  return SimpleAnimation__get_Item((SimpleAnimation_o *)RealAnimNames, (System_String_o *)Item, 0) != 0;
}


float BattleFBXComponent__getLength(BattleFBXComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *rootTransform; // x20
  UnityEngine_Object_o *animationComponent; // x20
  __int64 v5; // x1
  UnityEngine_Animation_o *v6; // x0
  UnityEngine_TrackedReference_o *Item; // x0
  UnityEngine_Object_o *simpleAnimationComponent; // x20
  UnityEngine_Animation_c *klass; // x8
  UnityEngine_Animation_o *v11; // x19
  __int64 v12; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v14; // x0

  if ( (byte_4C29D33 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&SimpleAnimation_State_TypeInfo);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C29D33 = 1;
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
    v6 = this->fields.animationComponent;
    if ( !v6 )
      goto LABEL_31;
    Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v6, this->fields.currentAnimName, 0);
    if ( UnityEngine_TrackedReference__op_Inequality(Item, 0, 0) )
    {
      v6 = this->fields.animationComponent;
      if ( v6 )
      {
        v6 = (UnityEngine_Animation_o *)UnityEngine_Animation__get_Item(v6, this->fields.currentAnimName, 0);
        if ( v6 )
          return UnityEngine_AnimationState__get_length((UnityEngine_AnimationState_o *)v6, 0);
      }
LABEL_31:
      sub_1C2D6EC(v6, v5);
    }
  }
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0, 0) )
    return 0.0;
  v6 = (UnityEngine_Animation_o *)this->fields.simpleAnimationComponent;
  if ( !v6 )
    goto LABEL_31;
  if ( !SimpleAnimation__get_Item((SimpleAnimation_o *)v6, this->fields.currentAnimName, 0) )
    return 0.0;
  v6 = (UnityEngine_Animation_o *)this->fields.simpleAnimationComponent;
  if ( !v6 )
    goto LABEL_31;
  v6 = (UnityEngine_Animation_o *)SimpleAnimation__get_Item((SimpleAnimation_o *)v6, this->fields.currentAnimName, 0);
  if ( !v6 )
    goto LABEL_31;
  klass = v6->klass;
  v11 = v6;
  v12 = *(unsigned __int16 *)&v6->klass->_2.rank;
  if ( *(_WORD *)&v6->klass->_2.rank )
  {
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v12;
      p_offset += 2;
      if ( !v12 )
        goto LABEL_26;
    }
    v14 = (__int64)(&klass[1]._1.properties + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_26:
    v14 = sub_1C7DCA8(v6, SimpleAnimation_State_TypeInfo, 14);
  }
  v6 = (UnityEngine_Animation_o *)(*(__int64 (__fastcall **)(UnityEngine_Animation_o *, _QWORD))v14)(
                                    v11,
                                    *(_QWORD *)(v14 + 8));
  if ( !v6 )
    goto LABEL_31;
  return UnityEngine_AnimationClip__get_length((UnityEngine_AnimationClip_o *)v6, 0);
}


System_String_o *BattleFBXComponent__getRealAnimationName(
        BattleFBXComponent_o *this,
        System_String_o *animationName,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__string__o *RealAnimNames; // x0
  __int64 v6; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *v7; // x0

  if ( (byte_4C29D4C & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    sub_1C2D490(&string_TypeInfo);
    byte_4C29D4C = 1;
  }
  RealAnimNames = this->fields.RealAnimNames;
  if ( !RealAnimNames
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)RealAnimNames,
          (Il2CppObject *)animationName,
          (const MethodInfo_344A51C *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
  {
    return string_TypeInfo->static_fields->Empty;
  }
  v7 = this->fields.RealAnimNames;
  if ( !v7 )
    sub_1C2D6EC(0, v6);
  return (System_String_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                              (System_Collections_Generic_Dictionary_object__object__o *)v7,
                              (Il2CppObject *)animationName,
                              (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
}


float BattleFBXComponent__getTagTime(
        BattleFBXComponent_o *this,
        System_String_o *animname,
        System_String_o *tag,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__string__o *CommonAnimNames; // x0
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_object__object__o *Index; // x0
  __int64 v10; // x2
  float v11; // s8
  struct BattleFBXComponent_AnimEvent_array_array *eventlist; // x8
  BattleFBXComponent_AnimEvent_array *v13; // x20
  il2cpp_array_size_t max_length; // x8
  __int64 i; // x21
  BattleFBXComponent_AnimEvent_o *v16; // x23

  if ( (byte_4C29D3F & 1) == 0 )
  {
    sub_1C2D490(&AnimationList_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    byte_4C29D3F = 1;
  }
  CommonAnimNames = this->fields.CommonAnimNames;
  if ( CommonAnimNames
    && System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)CommonAnimNames,
         (Il2CppObject *)animname,
         (const MethodInfo_344A51C *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
  {
    Index = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.CommonAnimNames;
    if ( !Index )
      goto LABEL_25;
    animname = (System_String_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                    Index,
                                    (Il2CppObject *)animname,
                                    (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
  }
  if ( !AnimationList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AnimationList_TypeInfo);
  Index = (System_Collections_Generic_Dictionary_object__object__o *)AnimationList__getIndex(animname, 0);
  v11 = 0.0;
  if ( ((unsigned int)Index & 0x80000000) != 0 )
    return v11;
  eventlist = this->fields.eventlist;
  if ( !eventlist )
LABEL_25:
    sub_1C2D6EC(Index, v8);
  if ( (unsigned int)Index >= LODWORD(eventlist->max_length) )
LABEL_24:
    sub_1C2D6F4(Index, v8, v10);
  v13 = eventlist->m_Items[(unsigned int)Index];
  if ( v13 )
  {
    max_length = v13->max_length;
    if ( (int)max_length >= 1 )
    {
      for ( i = 0; (int)i < (int)max_length; ++i )
      {
        if ( (unsigned int)i >= (unsigned int)max_length )
          goto LABEL_24;
        v16 = v13->m_Items[i];
        if ( !v16 )
          goto LABEL_25;
        Index = (System_Collections_Generic_Dictionary_object__object__o *)v16->fields.tag;
        if ( Index )
        {
          Index = (System_Collections_Generic_Dictionary_object__object__o *)System_String__Equals_63493168(
                                                                               (System_String_o *)Index,
                                                                               tag,
                                                                               0);
          if ( ((unsigned __int8)Index & 1) != 0 )
            return v16->fields.time;
          max_length = v13->max_length;
        }
      }
    }
  }
  return v11;
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
  UnityEngine_GameObject_o *v5; // x24
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
  __int64 v35; // x1
  __int64 v36; // x23
  __int64 v37; // x8
  __int64 v38; // x9
  int *v39; // x10
  __int64 v40; // x0
  __int64 v41; // x8
  __int64 v42; // x9
  int *v43; // x10
  __int64 v44; // x0
  UnityEngine_Object_o *v45; // x0
  __int64 v46; // x1
  UnityEngine_Component_o *v47; // x28
  __int64 v48; // x1
  System_String_o *name; // x20
  BattleFBXComponent_c *v50; // x0
  UnityEngine_GameObject_o *v51; // x0
  __int64 v52; // x1
  Il2CppObject *Component_object; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v55; // x1
  float v56; // s0 OVERLAPPED
  float v57; // s1
  float v58; // s2
  System_String_o *v59; // x20
  __int64 v60; // x1
  System_String_o *v61; // x21
  BattleFBXComponent_c *v62; // x0
  __int64 v63; // x0
  __int64 v64; // x1
  Il2CppObject *v65; // x29
  System_String_o *v66; // x0
  __int64 v67; // x1
  int32_t v68; // w20
  System_String_o *v69; // x0
  __int64 v70; // x1
  System_String_o *v71; // x0
  __int64 v72; // x1
  System_String_o *v73; // x20
  int32_t v74; // w2
  __int64 v75; // x1
  System_String_array *v76; // x0
  __int64 v77; // x1
  __int64 v78; // x2
  System_String_array *v79; // x20
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v81; // x22
  System_String_o *v82; // x21
  bool v83; // w21
  UnityEngine_Object_o *PrefabNode; // x20
  __int64 v85; // x1
  System_String_o *v86; // x20
  BattleFBXComponent_c *v87; // x0
  const MethodInfo *v88; // x4
  __int64 v89; // x1
  System_String_o *v90; // x20
  BattleFBXComponent_c *v91; // x0
  UnityEngine_GameObject_o *v92; // x0
  __int64 v93; // x1
  Il2CppObject *v94; // x22
  _BOOL8 v95; // x0
  __int64 v96; // x1
  System_String_o *v97; // x0
  __int64 v98; // x1
  UnityEngine_Transform_o *v99; // x22
  UnityEngine_Transform_o *v100; // x0
  __int64 v101; // x1
  float v102; // s8
  UnityEngine_Transform_o *v103; // x0
  __int64 v104; // x1
  float y; // s9
  UnityEngine_Transform_o *v106; // x0
  __int64 v107; // x1
  __int64 v108; // x0
  __int64 v109; // x1
  float v110; // s0
  float v111; // s1
  UnityEngine_Transform_o *v112; // x0
  __int64 v113; // x1
  _BOOL8 v114; // x0
  __int64 v115; // x1
  System_Object_array *ComponentsInChildren_object__51538676; // x0
  __int64 v117; // x1
  __int64 v118; // x2
  const MethodInfo *v119; // x3
  System_Object_array *v120; // x20
  il2cpp_array_size_t v121; // x8
  unsigned __int64 v122; // x22
  System_Collections_Generic_List_object__o *v123; // x0
  Il2CppObject *v124; // x1
  struct System_Object_array *items; // x8
  _QWORD *v126; // x9
  __int64 v127; // x10
  Il2CppClass **v128; // x8
  Il2CppObject *v129; // x20
  UnityEngine_GameObject_o *v130; // x22
  __int64 v131; // x0
  __int64 v132; // x1
  __int64 v133; // x1
  int32_t v134; // w2
  const MethodInfo *v135; // x3
  System_Collections_Generic_List_object__o *monitor; // x0
  struct System_Object_array *v137; // x8
  _QWORD *v138; // x9
  __int64 v139; // x10
  Il2CppClass **v140; // x8
  __int64 v141; // x0
  __int64 v142; // x1
  __int64 v143; // x8
  __int64 v144; // x9
  int *v145; // x10
  __int64 v146; // x0
  __int64 v147; // x1
  __int64 v148; // x2
  const MethodInfo *v149; // x3
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *entries; // x8
  System_Collections_Generic_Dictionary_object__object__o *v151; // x20
  unsigned __int64 v152; // x19
  struct System_Int32_array *buckets; // x8
  _QWORD *v154; // x9
  __int64 entries_low; // x10
  __int64 v156; // x8
  const MethodInfo *v157; // x3
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *v158; // x8
  System_Collections_Generic_Dictionary_object__object__o *v159; // x20
  unsigned __int64 v160; // x19
  struct System_Int32_array *v161; // x8
  _QWORD *v162; // x9
  __int64 v163; // x10
  __int64 v164; // x8
  BattleFBXComponent___c_c *v165; // x0
  System_Func_object__bool__o *_9__57_1; // x19
  Il2CppObject *v167; // x20
  struct BattleFBXComponent___c_StaticFields *v168; // x0
  int32_t v169; // w2
  const MethodInfo *v170; // x3
  System_Collections_Generic_Dictionary_object__object__c *v171; // x8
  System_Collections_Generic_Dictionary_object__object__o *v172; // x19
  __int64 v173; // x9
  int *v174; // x10
  __int64 v175; // x0
  __int64 v176; // x1
  __int64 v177; // x19
  __int64 v178; // x8
  __int64 v179; // x9
  int *v180; // x10
  __int64 v181; // x0
  __int64 v182; // x8
  __int64 v183; // x9
  int *v184; // x10
  __int64 v185; // x0
  UnityEngine_Object_o *v186; // x0
  __int64 v187; // x1
  UnityEngine_Transform_o *v188; // x20
  __int64 v189; // x1
  System_String_o *v190; // x21
  BattleFBXComponent_c *v191; // x0
  struct System_String_o *enItemMarker; // x8
  System_String_o *v193; // x22
  UnityEngine_Transform_o *parent; // x21
  System_String_o *v195; // x0
  UnityEngine_Object_o *v196; // x21
  UnityEngine_GameObject_o *v197; // x0
  __int64 v198; // x1
  Il2CppObject *v199; // x0
  __int64 v200; // x1
  int32_t v201; // w2
  const MethodInfo *v202; // x3
  Il2CppObject *v203; // x20
  __int64 v204; // x8
  __int64 v205; // x9
  int *v206; // x10
  __int64 v207; // x0
  char v208; // [xsp+24h] [xbp-CCh]
  UnityEngine_Component_o *v211; // [xsp+30h] [xbp-C0h]
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v212; // [xsp+38h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o i; // [xsp+50h] [xbp-A0h] BYREF
  int32_t result; // [xsp+6Ch] [xbp-84h] BYREF
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v216; // 0:s0.4,4:s1.4,8:s2.4

  v5 = gameObject;
  if ( (byte_4C29D36 & 1) == 0 )
  {
    sub_1C2D490(&BattleFBXComponent_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_SkinnedMeshRenderer___);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__GameObject__Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__SkinnedMeshRenderer___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__SkinnedMeshRenderer__get_Values__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__SkinnedMeshRenderer__set_Item__);
    sub_1C2D490(&System_Collections_Generic_Dictionary_string__SkinnedMeshRenderer__TypeInfo);
    sub_1C2D490(&Method_System_Linq_Enumerable_Where_Transform___);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__SkinnedMeshRenderer__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__SkinnedMeshRenderer__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__SkinnedMeshRenderer__get_Current__);
    sub_1C2D490(&System_Func_Transform__bool__TypeInfo);
    sub_1C2D490(&Method_UnityEngine_GameObject_AddComponent_LookAtTarget___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponentsInChildren_MeshRenderer___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystemRenderer___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponentsInChildren_Transform____78065256);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponentsInChildren_XWeaponTrail___);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerable_Transform__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerator_Transform__TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_Renderer__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_XWeaponTrail__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Renderer__Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_XWeaponTrail___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_XWeaponTrail__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&ServantAssetLoadManager_TypeInfo);
    sub_1C2D490(&Method_BattleFBXComponent___c__inSetEvolutionLevel_b__57_0__);
    sub_1C2D490(&Method_BattleFBXComponent___c__inSetEvolutionLevel_b__57_1__);
    sub_1C2D490(&BattleFBXComponent___c_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__SkinnedMeshRenderer__GetEnumerator__);
    sub_1C2D490(&StringLiteral_113/*" "*/);
    sub_1C2D490(&StringLiteral_23578/*"spiral"*/);
    sub_1C2D490(&StringLiteral_3103/*"Battle2D"*/);
    byte_4C29D36 = 1;
  }
  result = 0;
  memset(&i, 0, sizeof(i));
  actorEffectDict = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.actorEffectDict;
  if ( !actorEffectDict )
    goto LABEL_209;
  System_Collections_Generic_Dictionary_object__object___Clear(
    actorEffectDict,
    (const MethodInfo_344A4B0 *)Method_System_Collections_Generic_Dictionary_string__GameObject__Clear__);
  BattleFBXComponent__DestroyPrefabNode(this, v8);
  v9 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.PrefabNodes = (struct System_Collections_Generic_List_GameObject__o *)v9;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.PrefabNodes, (int32_t)v9, v10, v11);
  v12 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_XWeaponTrail__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_XWeaponTrail___ctor__);
  this->fields.componentsXWeaponTrail = (struct System_Collections_Generic_List_XWeaponTrail__o *)v12;
  p_componentsXWeaponTrail = &this->fields.componentsXWeaponTrail;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.componentsXWeaponTrail, (int32_t)v12, v14, v15);
  enableRendererList = this->fields.enableRendererList;
  if ( !enableRendererList )
    goto LABEL_209;
  size = enableRendererList->fields._size;
  v18 = enableRendererList->fields._version + 1;
  enableRendererList->fields._size = 0;
  enableRendererList->fields._version = v18;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)enableRendererList->fields._items, 0, size, 0);
  if ( !v5 )
    goto LABEL_209;
  ComponentsInChildren_object = UnityEngine_GameObject__GetComponentsInChildren_object_(
                                  v5,
                                  1,
                                  (const MethodInfo_3126B70 *)Method_UnityEngine_GameObject_GetComponentsInChildren_Transform____78065256);
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
    _9__57_0 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_Transform__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__57_0, v23, Method_BattleFBXComponent___c__inSetEvolutionLevel_b__57_0__, 0);
    static_fields = BattleFBXComponent___c_TypeInfo->static_fields;
    static_fields->__9__57_0 = (struct System_Func_Transform__bool__o *)_9__57_0;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__57_0, (int32_t)_9__57_0, v25, v26);
  }
  v27 = System_Linq_Enumerable__Where_object_(
          v21,
          (System_Func_TSource__bool__o *)_9__57_0,
          (const MethodInfo_3115108 *)Method_System_Linq_Enumerable_Where_Transform___);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  LimitImageIndex = ServantAssetLoadManager__GetLimitImageIndex(svtId, limitcount, 1, 0);
  v29 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C2D6DC(System_Collections_Generic_Dictionary_string__SkinnedMeshRenderer__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v29,
    (const MethodInfo_3449978 *)Method_System_Collections_Generic_Dictionary_string__SkinnedMeshRenderer___ctor__);
  if ( !v27 )
    goto LABEL_209;
  klass = v27->klass;
  v211 = (UnityEngine_Component_o *)this;
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
    v33 = sub_1C7DCA8(v27, System_Collections_Generic_IEnumerable_Transform__TypeInfo, 0);
  }
  v34 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))v33)(
          v27,
          *(_QWORD *)(v33 + 8));
  v36 = v34;
  v208 = 1;
  while ( 1 )
  {
    if ( !v36 )
      sub_1C2D6EC(v34, v35);
    v37 = *(_QWORD *)v36;
    v38 = *(unsigned __int16 *)(*(_QWORD *)v36 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v36 + 302LL) )
    {
      v39 = (int *)(*(_QWORD *)(v37 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v39 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v38;
        v39 += 4;
        if ( !v38 )
          goto LABEL_29;
      }
      v40 = v37 + 16LL * *v39 + 312;
    }
    else
    {
LABEL_29:
      v40 = sub_1C7DCA8(v36, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v40)(v36, *(_QWORD *)(v40 + 8)) & 1) == 0 )
      break;
    v41 = *(_QWORD *)v36;
    v42 = *(unsigned __int16 *)(*(_QWORD *)v36 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v36 + 302LL) )
    {
      v43 = (int *)(*(_QWORD *)(v41 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_Transform__c **)v43 - 1) != System_Collections_Generic_IEnumerator_Transform__TypeInfo )
      {
        --v42;
        v43 += 4;
        if ( !v42 )
          goto LABEL_36;
      }
      v44 = v41 + 16LL * *v43 + 312;
    }
    else
    {
LABEL_36:
      v44 = sub_1C7DCA8(v36, System_Collections_Generic_IEnumerator_Transform__TypeInfo, 0);
    }
    v45 = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v44)(v36, *(_QWORD *)(v44 + 8));
    v47 = (UnityEngine_Component_o *)v45;
    if ( !v45 )
      sub_1C2D6EC(0, v46);
    name = UnityEngine_Object__get_name(v45, 0);
    v50 = BattleFBXComponent_TypeInfo;
    if ( !BattleFBXComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
    if ( !name )
      sub_1C2D6EC(v50, v48);
    if ( System_String__StartsWith(name, BattleFBXComponent_TypeInfo->static_fields->sideflipMarker, 0) )
    {
      v51 = UnityEngine_Component__get_gameObject(v211, 0);
      if ( !v51 )
        sub_1C2D6EC(0, v52);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           v51,
                           (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v34 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
      if ( (v34 & 1) != 0 )
      {
        transform = UnityEngine_Component__get_transform(v47, 0);
        if ( !Component_object )
          sub_1C2D6EC(transform, v55);
        if ( !transform )
          sub_1C2D6EC(0, v55);
        if ( LOBYTE(Component_object[34].monitor) )
          v56 = -1.0;
        else
          v56 = 1.0;
        v57 = 1.0;
        v58 = 1.0;
        UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v56, 0);
      }
    }
    else
    {
      v59 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v47, 0);
      v61 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v47, 0);
      v62 = BattleFBXComponent_TypeInfo;
      if ( !BattleFBXComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
      if ( !v61 )
        sub_1C2D6EC(v62, v60);
      v63 = System_String__IndexOf_63516240(v61, BattleFBXComponent_TypeInfo->static_fields->levelMarker, 0);
      if ( !v59 )
        sub_1C2D6EC(v63, v64);
      v65 = (Il2CppObject *)System_String__Substring_63503788(v59, 0, v63, 0);
      v66 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v47, 0);
      if ( !v66 )
        sub_1C2D6EC(0, v67);
      v68 = System_String__IndexOf_63516240(v66, BattleFBXComponent_TypeInfo->static_fields->levelMarker, 0);
      v69 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v47, 0);
      if ( !v69 )
        sub_1C2D6EC(0, v70);
      v71 = System_String__Substring(v69, v68 + 7, 0);
      v73 = v71;
      if ( !v71 )
        sub_1C2D6EC(0, v72);
      if ( (System_String__IndexOf_63516240(v71, (System_String_o *)StringLiteral_113/*" "*/, 0) & 0x80000000) == 0 )
      {
        v74 = System_String__IndexOf_63516240(v73, (System_String_o *)StringLiteral_113/*" "*/, 0);
        v73 = System_String__Substring_63503788(v73, 0, v74, 0);
        if ( !v73 )
          sub_1C2D6EC(0, v75);
      }
      v76 = System_String__Split(v73, 0x5Fu, 0, 0);
      v79 = v76;
      if ( !v76 )
        sub_1C2D6EC(0, v77);
      max_length = v76->max_length;
      if ( (int)max_length < 1 )
      {
LABEL_69:
        v83 = 0;
        PrefabNode = 0;
      }
      else
      {
        v81 = 0;
        while ( 1 )
        {
          if ( v81 >= (unsigned int)max_length )
            sub_1C2D6F4(v76, v77, v78);
          v82 = v79->m_Items[v81];
          result = 99;
          v76 = (System_String_array *)System_Int32__TryParse(v82, &result, 0);
          if ( ((unsigned __int8)v76 & 1) != 0 )
          {
            v76 = (System_String_array *)System_Int32__Parse(v82, 0);
            if ( (_DWORD)v76 == LimitImageIndex )
              break;
          }
          LODWORD(max_length) = v79->max_length;
          if ( (__int64)++v81 >= (int)max_length )
            goto LABEL_69;
        }
        v86 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v47, 0);
        v87 = BattleFBXComponent_TypeInfo;
        if ( !BattleFBXComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
        if ( !v86 )
          sub_1C2D6EC(v87, v85);
        if ( System_String__StartsWith(v86, BattleFBXComponent_TypeInfo->static_fields->prefabMarker, 0) )
          goto LABEL_78;
        v90 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v47, 0);
        v91 = BattleFBXComponent_TypeInfo;
        if ( !BattleFBXComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
        if ( !v90 )
          sub_1C2D6EC(v91, v89);
        if ( System_String__StartsWith(v90, BattleFBXComponent_TypeInfo->static_fields->chrnodeMarker, 0) )
LABEL_78:
          PrefabNode = (UnityEngine_Object_o *)BattleFBXComponent__CreatePrefabNode(
                                                 (BattleFBXComponent_o *)v211,
                                                 (UnityEngine_Transform_o *)v47,
                                                 svtId,
                                                 limitcount,
                                                 v88);
        else
          PrefabNode = 0;
        v83 = 1;
      }
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(PrefabNode, 0, 0) )
      {
        v92 = UnityEngine_Component__get_gameObject(v211, 0);
        if ( !v92 )
          sub_1C2D6EC(0, v93);
        v94 = UnityEngine_GameObject__GetComponent_object_(
                v92,
                (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v95 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v94, 0, 0);
        if ( v95 )
        {
          if ( !v94 )
            sub_1C2D6EC(v95, v96);
          if ( LOBYTE(v94[34].monitor) )
          {
            if ( !PrefabNode )
              sub_1C2D6EC(v95, v96);
            v97 = UnityEngine_Object__get_name(PrefabNode, 0);
            if ( !v97 )
              sub_1C2D6EC(0, v98);
            if ( (System_String__IndexOf_63516240(v97, (System_String_o *)StringLiteral_23578/*"spiral"*/, 0) & 0x80000000) == 0 )
            {
              v99 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)PrefabNode, 0);
              v100 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)PrefabNode, 0);
              if ( !v100 )
                sub_1C2D6EC(0, v101);
              LODWORD(v102) = (unsigned int)UnityEngine_Transform__get_localScale(v100, 0);
              v103 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)PrefabNode, 0);
              if ( !v103 )
                sub_1C2D6EC(0, v104);
              localScale = UnityEngine_Transform__get_localScale(v103, 0);
              y = localScale.fields.y;
              v106 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)PrefabNode, 0);
              if ( !v106 )
                sub_1C2D6EC(0, v107);
              v216 = UnityEngine_Transform__get_localScale(v106, 0);
              if ( !v99 )
                sub_1C2D6EC(v108, v109);
              v110 = -v102;
              v111 = y;
              UnityEngine_Transform__set_localScale(v99, v216, 0);
              v112 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)PrefabNode, 0);
              if ( !v112 )
                sub_1C2D6EC(0, v113);
              UnityEngine_Transform__Rotate_71188380(v112, 0.0, 180.0, 0.0, 0);
            }
          }
        }
      }
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v114 = UnityEngine_Object__op_Inequality(PrefabNode, 0, 0);
      if ( v114 )
      {
        if ( !PrefabNode )
          sub_1C2D6EC(v114, v115);
        ComponentsInChildren_object__51538676 = UnityEngine_GameObject__GetComponentsInChildren_object__51538676(
                                                  (UnityEngine_GameObject_o *)PrefabNode,
                                                  (const MethodInfo_3126AF4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_XWeaponTrail___);
        v120 = ComponentsInChildren_object__51538676;
        if ( !ComponentsInChildren_object__51538676 )
          sub_1C2D6EC(0, v117);
        v121 = ComponentsInChildren_object__51538676->max_length;
        if ( (int)v121 >= 1 )
        {
          v122 = 0;
          do
          {
            if ( v122 >= (unsigned int)v121 )
              sub_1C2D6F4(ComponentsInChildren_object__51538676, v117, v118);
            v123 = (System_Collections_Generic_List_object__o *)*p_componentsXWeaponTrail;
            if ( !*p_componentsXWeaponTrail )
              sub_1C2D6EC(0, v117);
            v124 = v120->m_Items[v122];
            items = v123->fields._items;
            v126 = Method_System_Collections_Generic_List_XWeaponTrail__Add__;
            ++v123->fields._version;
            if ( !items )
              sub_1C2D6EC(v123, v124);
            v127 = v123->fields._size;
            if ( (unsigned int)v127 >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v123,
                v124,
                *(const MethodInfo_3789B84 **)(*(_QWORD *)(v126[4] + 192LL) + 112LL));
            }
            else
            {
              v128 = &items->obj.klass + v127;
              v123->fields._size = v127 + 1;
              v128[4] = (Il2CppClass *)v124;
              sub_1C2D434((CGThumbnailListItem_o *)(v128 + 4), (int32_t)v124, v118, v119);
            }
            LODWORD(v121) = v120->max_length;
            ++v122;
          }
          while ( (__int64)v122 < (int)v121 );
        }
      }
      v129 = UnityEngine_Component__GetComponent_object_(
               v47,
               (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_SkinnedMeshRenderer___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v34 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v129, 0, 0);
      if ( (v34 & 1) != 0 )
      {
        v130 = UnityEngine_Component__get_gameObject(v47, 0);
        v131 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_3103/*"Battle2D"*/, 0);
        if ( !v130 )
          sub_1C2D6EC(v131, (unsigned int)v131);
        UnityEngine_GameObject__set_layer(v130, v131, 0);
        if ( !v29 )
          sub_1C2D6EC(0, v132);
        System_Collections_Generic_Dictionary_object__object___set_Item(
          v29,
          v65,
          v129,
          (const MethodInfo_344A314 *)Method_System_Collections_Generic_Dictionary_string__SkinnedMeshRenderer__set_Item__);
        monitor = (System_Collections_Generic_List_object__o *)v211[6].monitor;
        if ( !monitor )
          sub_1C2D6EC(0, v133);
        v137 = monitor->fields._items;
        v138 = Method_System_Collections_Generic_List_Renderer__Add__;
        ++monitor->fields._version;
        if ( !v137 )
          sub_1C2D6EC(monitor, v133);
        v139 = monitor->fields._size;
        if ( (unsigned int)v139 >= LODWORD(v137->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            monitor,
            v129,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v138[4] + 192LL) + 112LL));
        }
        else
        {
          v140 = &v137->obj.klass + v139;
          monitor->fields._size = v139 + 1;
          v140[4] = (Il2CppClass *)v129;
          sub_1C2D434((CGThumbnailListItem_o *)(v140 + 4), (int32_t)v129, v134, v135);
        }
        if ( !v129 )
          sub_1C2D6EC(v141, v142);
        UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)v129, v83, 0);
        v208 &= !v83;
      }
    }
  }
  v143 = *(_QWORD *)v36;
  v144 = *(unsigned __int16 *)(*(_QWORD *)v36 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v36 + 302LL) )
  {
    v145 = (int *)(*(_QWORD *)(v143 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v145 - 1) != System_IDisposable_TypeInfo )
    {
      --v144;
      v145 += 4;
      if ( !v144 )
        goto LABEL_129;
    }
    v146 = v143 + 16LL * *v145 + 312;
  }
  else
  {
LABEL_129:
    v146 = sub_1C7DCA8(v36, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v146)(v36, *(_QWORD *)(v146 + 8));
  if ( (v208 & 1) != 0 )
  {
    actorEffectDict = v29;
    if ( !v29 )
      goto LABEL_209;
    actorEffectDict = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                   v29,
                                                                                   (const MethodInfo_344A158 *)Method_System_Collections_Generic_Dictionary_string__SkinnedMeshRenderer__get_Values__);
    if ( !actorEffectDict )
      goto LABEL_209;
    System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
      &v212,
      (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)actorEffectDict,
      (const MethodInfo_3ACAB38 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__SkinnedMeshRenderer__GetEnumerator__);
    for ( i = v212;
          System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &i,
            (const MethodInfo_3547AFC *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__SkinnedMeshRenderer__MoveNext__);
          UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)i.fields._currentValue, 1, 0) )
    {
      if ( !i.fields._currentValue )
        sub_1C2D6EC(0, v147);
    }
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
      &i,
      (const MethodInfo_3547AF8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__SkinnedMeshRenderer__Dispose__);
  }
  actorEffectDict = (System_Collections_Generic_Dictionary_object__object__o *)UnityEngine_GameObject__GetComponentsInChildren_object__51538676(
                                                                                 v5,
                                                                                 (const MethodInfo_3126AF4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_MeshRenderer___);
  if ( !actorEffectDict )
    goto LABEL_209;
  entries = actorEffectDict->fields._entries;
  v151 = actorEffectDict;
  if ( (int)entries >= 1 )
  {
    v152 = 0;
    while ( v152 < (unsigned int)entries )
    {
      actorEffectDict = (System_Collections_Generic_Dictionary_object__object__o *)v211[6].monitor;
      if ( !actorEffectDict )
        goto LABEL_209;
      gameObject = (UnityEngine_GameObject_o *)*((_QWORD *)&v151->fields._count + v152);
      buckets = actorEffectDict->fields._buckets;
      v154 = Method_System_Collections_Generic_List_Renderer__Add__;
      ++HIDWORD(actorEffectDict->fields._entries);
      if ( !buckets )
        goto LABEL_209;
      entries_low = SLODWORD(actorEffectDict->fields._entries);
      if ( (unsigned int)entries_low >= LODWORD(buckets->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)actorEffectDict,
          (Il2CppObject *)gameObject,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v154[4] + 192LL) + 112LL));
      }
      else
      {
        v156 = (__int64)buckets + 8 * entries_low;
        LODWORD(actorEffectDict->fields._entries) = entries_low + 1;
        *(_QWORD *)(v156 + 32) = gameObject;
        sub_1C2D434((CGThumbnailListItem_o *)(v156 + 32), (int32_t)gameObject, v148, v149);
      }
      LODWORD(entries) = v151->fields._entries;
      if ( (__int64)++v152 >= (int)entries )
        goto LABEL_149;
    }
LABEL_213:
    sub_1C2D6F4(actorEffectDict, gameObject, v148);
  }
LABEL_149:
  actorEffectDict = (System_Collections_Generic_Dictionary_object__object__o *)UnityEngine_GameObject__GetComponentsInChildren_object__51538676(
                                                                                 v5,
                                                                                 (const MethodInfo_3126AF4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystemRenderer___);
  if ( !actorEffectDict )
    goto LABEL_209;
  v158 = actorEffectDict->fields._entries;
  v159 = actorEffectDict;
  if ( (int)v158 >= 1 )
  {
    v160 = 0;
    while ( v160 < (unsigned int)v158 )
    {
      actorEffectDict = (System_Collections_Generic_Dictionary_object__object__o *)v211[6].monitor;
      if ( !actorEffectDict )
        goto LABEL_209;
      gameObject = (UnityEngine_GameObject_o *)*((_QWORD *)&v159->fields._count + v160);
      v161 = actorEffectDict->fields._buckets;
      v162 = Method_System_Collections_Generic_List_Renderer__Add__;
      ++HIDWORD(actorEffectDict->fields._entries);
      if ( !v161 )
        goto LABEL_209;
      v163 = SLODWORD(actorEffectDict->fields._entries);
      if ( (unsigned int)v163 >= LODWORD(v161->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)actorEffectDict,
          (Il2CppObject *)gameObject,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v162[4] + 192LL) + 112LL));
      }
      else
      {
        v164 = (__int64)v161 + 8 * v163;
        LODWORD(actorEffectDict->fields._entries) = v163 + 1;
        *(_QWORD *)(v164 + 32) = gameObject;
        sub_1C2D434((CGThumbnailListItem_o *)(v164 + 32), (int32_t)gameObject, v148, v157);
      }
      LODWORD(v158) = v159->fields._entries;
      if ( (__int64)++v160 >= (int)v158 )
        goto LABEL_159;
    }
    goto LABEL_213;
  }
LABEL_159:
  v165 = BattleFBXComponent___c_TypeInfo;
  if ( !BattleFBXComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFBXComponent___c_TypeInfo);
    v165 = BattleFBXComponent___c_TypeInfo;
  }
  _9__57_1 = (System_Func_object__bool__o *)v165->static_fields->__9__57_1;
  if ( !_9__57_1 )
  {
    if ( !v165->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v165);
      v165 = BattleFBXComponent___c_TypeInfo;
    }
    v167 = (Il2CppObject *)v165->static_fields->__9;
    _9__57_1 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_Transform__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__57_1, v167, Method_BattleFBXComponent___c__inSetEvolutionLevel_b__57_1__, 0);
    v168 = BattleFBXComponent___c_TypeInfo->static_fields;
    v168->__9__57_1 = (struct System_Func_Transform__bool__o *)_9__57_1;
    sub_1C2D434((CGThumbnailListItem_o *)&v168->__9__57_1, (int32_t)_9__57_1, v169, v170);
  }
  actorEffectDict = (System_Collections_Generic_Dictionary_object__object__o *)System_Linq_Enumerable__Where_object_(
                                                                                 v21,
                                                                                 (System_Func_TSource__bool__o *)_9__57_1,
                                                                                 (const MethodInfo_3115108 *)Method_System_Linq_Enumerable_Where_Transform___);
  if ( !actorEffectDict )
LABEL_209:
    sub_1C2D6EC(actorEffectDict, gameObject);
  v171 = actorEffectDict->klass;
  v172 = actorEffectDict;
  v173 = *(unsigned __int16 *)&actorEffectDict->klass->_2.rank;
  if ( *(_WORD *)&actorEffectDict->klass->_2.rank )
  {
    v174 = &v171->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_Transform__c **)v174 - 1) != System_Collections_Generic_IEnumerable_Transform__TypeInfo )
    {
      --v173;
      v174 += 4;
      if ( !v173 )
        goto LABEL_170;
    }
    v175 = (__int64)&v171->vtable + 16 * *v174;
  }
  else
  {
LABEL_170:
    v175 = sub_1C7DCA8(actorEffectDict, System_Collections_Generic_IEnumerable_Transform__TypeInfo, 0);
  }
  v177 = (*(__int64 (__fastcall **)(System_Collections_Generic_Dictionary_object__object__o *, _QWORD))v175)(
           v172,
           *(_QWORD *)(v175 + 8));
  if ( !v177 )
    sub_1C2D6EC(0, v176);
  while ( 1 )
  {
    v178 = *(_QWORD *)v177;
    v179 = *(unsigned __int16 *)(*(_QWORD *)v177 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v177 + 302LL) )
    {
      v180 = (int *)(*(_QWORD *)(v178 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v180 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v179;
        v180 += 4;
        if ( !v179 )
          goto LABEL_177;
      }
      v181 = v178 + 16LL * *v180 + 312;
    }
    else
    {
LABEL_177:
      v181 = sub_1C7DCA8(v177, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v181)(v177, *(_QWORD *)(v181 + 8)) & 1) == 0 )
      break;
    v182 = *(_QWORD *)v177;
    v183 = *(unsigned __int16 *)(*(_QWORD *)v177 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v177 + 302LL) )
    {
      v184 = (int *)(*(_QWORD *)(v182 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_Transform__c **)v184 - 1) != System_Collections_Generic_IEnumerator_Transform__TypeInfo )
      {
        --v183;
        v184 += 4;
        if ( !v183 )
          goto LABEL_184;
      }
      v185 = v182 + 16LL * *v184 + 312;
    }
    else
    {
LABEL_184:
      v185 = sub_1C7DCA8(v177, System_Collections_Generic_IEnumerator_Transform__TypeInfo, 0);
    }
    v186 = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v185)(v177, *(_QWORD *)(v185 + 8));
    v188 = (UnityEngine_Transform_o *)v186;
    if ( !v186 )
      sub_1C2D6EC(0, v187);
    v190 = UnityEngine_Object__get_name(v186, 0);
    v191 = BattleFBXComponent_TypeInfo;
    if ( !BattleFBXComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
      v191 = BattleFBXComponent_TypeInfo;
    }
    enItemMarker = v191->static_fields->enItemMarker;
    if ( !enItemMarker )
      sub_1C2D6EC(v191, v189);
    if ( !v190 )
      sub_1C2D6EC(v191, v189);
    v193 = System_String__Substring(v190, enItemMarker->fields._stringLength, 0);
    parent = UnityEngine_Transform__get_parent(v188, 0);
    v195 = System_String__Concat_63457864(BattleFBXComponent_TypeInfo->static_fields->enWeaponMarker, v193, 0);
    if ( !parent )
      sub_1C2D6EC(v195, v195);
    v196 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(parent, v195, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v196, 0, 0) )
    {
      v197 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v188, 0);
      if ( !v197 )
        sub_1C2D6EC(0, v198);
      v199 = UnityEngine_GameObject__AddComponent_object_(
               v197,
               (const MethodInfo_3125DE8 *)Method_UnityEngine_GameObject_AddComponent_LookAtTarget___);
      v203 = v199;
      if ( !v199 )
        sub_1C2D6EC(0, v200);
      v199[2].monitor = v196;
      sub_1C2D434((CGThumbnailListItem_o *)&v199[2].monitor, (int32_t)v196, v201, v202);
      LODWORD(v203[3].klass) = 1120403456;
    }
  }
  v204 = *(_QWORD *)v177;
  v205 = *(unsigned __int16 *)(*(_QWORD *)v177 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v177 + 302LL) )
  {
    v206 = (int *)(*(_QWORD *)(v204 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v206 - 1) != System_IDisposable_TypeInfo )
    {
      --v205;
      v206 += 4;
      if ( !v205 )
        goto LABEL_202;
    }
    v207 = v204 + 16LL * *v206 + 312;
  }
  else
  {
LABEL_202:
    v207 = sub_1C7DCA8(v177, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v207)(v177, *(_QWORD *)(v207 + 8));
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
  __int64 v14; // x1
  System_String_o *text; // x22
  __int64 v16; // x2
  int v17; // w8
  int v18; // w8
  __int64 v19; // x22
  BattleFBXComponent_c **v20; // x28
  unsigned int v21; // w29
  System_String_o *v22; // x23
  __int64 v23; // x8
  __int64 v24; // x23
  System_String_o *v25; // x25
  int32_t v26; // w26
  System_String_o *v27; // x27
  BattleFBXComponent_c *v28; // x0
  int32_t v29; // w0
  int32_t Index; // w24
  int32_t v31; // w20
  System_Collections_Generic_List_object__o *v32; // x25
  struct BattleFBXComponent_AnimEvent_array_array *v33; // x21
  __int64 v34; // x19
  int v35; // w8
  int v36; // w26
  float v37; // s0
  float v38; // s8
  unsigned int v39; // w9
  int v40; // w21
  BattleFBXComponent_c **v41; // x19
  __int64 v42; // x28
  __int64 v43; // x27
  float v44; // s9
  __int64 v45; // x26
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  struct System_Object_array *items; // x8
  _QWORD *v53; // x9
  __int64 size; // x10
  Il2CppClass **v55; // x0
  const MethodInfo *v56; // x3
  __int64 v57; // x23
  Il2CppClass **v58; // x0
  __int64 v59; // x0
  BattleFBXComponent_o *v60; // [xsp+8h] [xbp-88h]
  struct BattleFBXComponent_AnimEvent_array_array **p_eventlist; // [xsp+10h] [xbp-80h]
  Il2CppObject *entity; // [xsp+18h] [xbp-78h] BYREF

  if ( (byte_4C29D43 & 1) == 0 )
  {
    sub_1C2D490(&BattleFBXComponent_AnimEvent_____TypeInfo);
    sub_1C2D490(&BattleFBXComponent_AnimEvent_TypeInfo);
    sub_1C2D490(&AnimationList_TypeInfo);
    sub_1C2D490(&BattleFBXComponent_TypeInfo);
    sub_1C2D490(&char___TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleFBXComponent_AnimEvent__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleFBXComponent_AnimEvent__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleFBXComponent_AnimEvent___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_BattleFBXComponent_AnimEvent__TypeInfo);
    sub_1C2D490(&ServantAssetLoadManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&StringLiteral_370/*"#"*/);
    sub_1C2D490(&StringLiteral_811/*","*/);
    byte_4C29D43 = 1;
  }
  entity = 0;
  BattleFBXComponent__InitAnimNameDict(this, (const MethodInfo *)data);
  v9 = (struct BattleFBXComponent_AnimEvent_array_array *)sub_1C2D538(BattleFBXComponent_AnimEvent_____TypeInfo, 106);
  this->fields.eventlist = v9;
  p_eventlist = &this->fields.eventlist;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.eventlist, (int32_t)v9, v10, v11);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  LimitImageIndex = ServantAssetLoadManager__GetLimitImageIndex(svtId, level, 1, 0);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_71;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_71;
  Instance = DataMasterBase_object__object__int___TryGetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               &entity,
               svtId,
               (const MethodInfo_3387DE4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
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
  Instance = sub_1C2D538(char___TypeInfo, 2);
  if ( !Instance )
    goto LABEL_71;
  v17 = *(_DWORD *)(Instance + 24);
  v14 = Instance;
  if ( !v17 )
    goto LABEL_72;
  *(_WORD *)(Instance + 32) = 13;
  if ( v17 == 1 )
    goto LABEL_72;
  *(_WORD *)(Instance + 34) = 10;
  if ( !text
    || (v60 = this, (Instance = (__int64)System_String__Split_63506940(text, (System_Char_array *)Instance, 0)) == 0) )
  {
LABEL_71:
    sub_1C2D6EC(Instance, v14);
  }
  v18 = *(_DWORD *)(Instance + 24);
  v19 = Instance;
  if ( v18 >= 1 )
  {
    v20 = &BattleFBXComponent_TypeInfo;
    v21 = 0;
    while ( v21 < v18 )
    {
      Instance = StringLiteral_811/*","*/;
      if ( !StringLiteral_811/*","*/ )
        goto LABEL_71;
      v22 = *(System_String_o **)(v19 + 8LL * (int)v21 + 32);
      Instance = System_String__get_Chars((System_String_o *)StringLiteral_811/*","*/, 0, 0);
      if ( !v22 )
        goto LABEL_71;
      Instance = (__int64)System_String__Split(v22, Instance, 0, 0);
      if ( !Instance )
        goto LABEL_71;
      v23 = *(_QWORD *)(Instance + 24);
      v24 = Instance;
      if ( v23 )
      {
        if ( !(_DWORD)v23 )
          break;
        Instance = *(_QWORD *)(Instance + 32);
        if ( !Instance )
          goto LABEL_71;
        Instance = System_String__StartsWith((System_String_o *)Instance, (System_String_o *)StringLiteral_370/*"#"*/, 0);
        if ( (Instance & 1) == 0 && *(int *)(v24 + 24) >= 6 )
        {
          Instance = System_Int32__Parse(*(System_String_o **)(v24 + 32), 0);
          if ( *(_DWORD *)(v24 + 24) <= 1u )
            break;
          if ( (_DWORD)Instance == LimitImageIndex )
          {
            Instance = (__int64)*v20;
            v25 = *(System_String_o **)(v24 + 40);
            if ( !(*v20)->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(Instance);
            if ( !v25 )
              goto LABEL_71;
            v26 = System_String__IndexOf_63516240(v25, (*v20)->static_fields->levelMarker, 0);
            v27 = v25;
            if ( (v26 & 0x80000000) == 0 )
            {
              v28 = *v20;
              if ( !(*v20)->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v28);
                v28 = *v20;
              }
              v29 = System_String__IndexOf_63516240(v25, v28->static_fields->levelMarker, 0);
              v27 = System_String__Substring_63503788(v25, 0, v29, 0);
            }
            if ( !AnimationList_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AnimationList_TypeInfo);
            Index = AnimationList__getIndex(v27, 0);
            if ( (v26 & 0x80000000) == 0 )
            {
              Instance = (__int64)v60->fields.RealAnimNames;
              if ( !Instance )
                goto LABEL_71;
              System_Collections_Generic_Dictionary_object__object___set_Item(
                (System_Collections_Generic_Dictionary_object__object__o *)Instance,
                (Il2CppObject *)v27,
                (Il2CppObject *)v25,
                (const MethodInfo_344A314 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
              Instance = (__int64)v60->fields.CommonAnimNames;
              if ( !Instance )
                goto LABEL_71;
              System_Collections_Generic_Dictionary_object__object___set_Item(
                (System_Collections_Generic_Dictionary_object__object__o *)Instance,
                (Il2CppObject *)v25,
                (Il2CppObject *)v27,
                (const MethodInfo_344A314 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
            }
            v31 = LimitImageIndex;
            v32 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_BattleFBXComponent_AnimEvent__TypeInfo);
            System_Collections_Generic_List_object____ctor(
              v32,
              (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_BattleFBXComponent_AnimEvent___ctor__);
            v33 = *p_eventlist;
            if ( !*p_eventlist )
              goto LABEL_71;
            if ( (unsigned int)Index >= LODWORD(v33->max_length) )
              break;
            v34 = Index;
            if ( !v33->m_Items[Index] )
            {
              v35 = *(_DWORD *)(v24 + 24);
              if ( v35 >= 3 )
              {
                v36 = 2;
                do
                {
                  if ( v36 >= (unsigned int)v35 )
                    goto LABEL_72;
                  Instance = *(_QWORD *)(v24 + 8LL * v36 + 32);
                  if ( !Instance )
                    goto LABEL_71;
                  if ( !*(_DWORD *)(Instance + 16) )
                    break;
                  v37 = System_Single__Parse((System_String_o *)Instance, 0);
                  Instance = (__int64)*v20;
                  v38 = v37;
                  if ( !(*v20)->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(Instance);
                    Instance = (__int64)*v20;
                  }
                  v39 = *(_DWORD *)(v24 + 24);
                  if ( v36 + 1 >= v39 )
                    goto LABEL_72;
                  v40 = v36 + 2;
                  if ( v36 + 2 >= v39 )
                    goto LABEL_72;
                  v41 = v20;
                  v42 = *(_QWORD *)(v24 + 8LL * (v36 + 1) + 32);
                  v43 = *(_QWORD *)(v24 + 8LL * (v36 + 2) + 32);
                  v44 = *(float *)(*(_QWORD *)(Instance + 184) + 4LL);
                  v45 = sub_1C2D6DC(BattleFBXComponent_AnimEvent_TypeInfo);
                  System_Object___ctor((Il2CppObject *)v45, 0);
                  if ( !v45 )
                    goto LABEL_71;
                  *(float *)(v45 + 16) = v38 / v44;
                  *(_QWORD *)(v45 + 24) = v42;
                  sub_1C2D434((CGThumbnailListItem_o *)(v45 + 24), v42, v46, v47);
                  *(_QWORD *)(v45 + 32) = v43;
                  sub_1C2D434((CGThumbnailListItem_o *)(v45 + 32), v43, v48, v49);
                  if ( !v32 )
                    goto LABEL_71;
                  items = v32->fields._items;
                  v53 = Method_System_Collections_Generic_List_BattleFBXComponent_AnimEvent__Add__;
                  ++v32->fields._version;
                  if ( !items )
                    goto LABEL_71;
                  size = v32->fields._size;
                  v20 = v41;
                  if ( (unsigned int)size >= LODWORD(items->max_length) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v32,
                      (Il2CppObject *)v45,
                      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v55 = &items->obj.klass + size;
                    v32->fields._size = size + 1;
                    v55[4] = (Il2CppClass *)v45;
                    sub_1C2D434((CGThumbnailListItem_o *)(v55 + 4), v45, v50, v51);
                  }
                  v35 = *(_DWORD *)(v24 + 24);
                  v36 = v40 + 1;
                }
                while ( v40 + 1 < v35 );
                v34 = Index;
                v33 = *p_eventlist;
              }
            }
            if ( !v32 )
              goto LABEL_71;
            Instance = (__int64)System_Collections_Generic_List_object___ToArray(
                                  v32,
                                  (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_BattleFBXComponent_AnimEvent__ToArray__);
            if ( !v33 )
              goto LABEL_71;
            v57 = Instance;
            if ( Instance )
            {
              Instance = sub_1C2D5CC(Instance, v33->obj.klass->_1.element_class);
              if ( !Instance )
              {
                v59 = sub_1C2D710(0);
                sub_1C2D5B8(v59, 0);
              }
            }
            if ( (unsigned int)Index >= LODWORD(v33->max_length) )
              break;
            v58 = &v33->obj.klass + v34;
            v58[4] = (Il2CppClass *)v57;
            sub_1C2D434((CGThumbnailListItem_o *)(v58 + 4), v57, v16, v56);
            LimitImageIndex = v31;
          }
        }
      }
      v18 = *(_DWORD *)(v19 + 24);
      if ( (int)++v21 >= v18 )
        return;
    }
LABEL_72:
    sub_1C2D6F4(Instance, v14, v16);
  }
}


void BattleFBXComponent__playAnimation(BattleFBXComponent_o *this, System_String_o *filename, const MethodInfo *method)
{
  System_String_o *v3; // x3
  const MethodInfo *v4; // x4
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v8; // x1

  if ( (byte_4C29D3D & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_2274/*"AnimationCheck"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C29D3D = 1;
  }
  BattleFBXComponent__playAnimationTimeline(this, filename, (System_String_o *)StringLiteral_1/*""*/, v3, v4);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C2D6EC(0, v8);
  if ( UnityEngine_GameObject__get_activeInHierarchy(gameObject, 0) )
  {
    UnityEngine_MonoBehaviour__StopCoroutine_71150204(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_2274/*"AnimationCheck"*/,
      0);
    UnityEngine_MonoBehaviour__StartCoroutine(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_2274/*"AnimationCheck"*/,
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
  __int64 v13; // x1
  UnityEngine_Animation_o *Item; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  UnityEngine_Object_o *simpleAnimationComponent; // x22
  UnityEngine_Animation_c *klass; // x8
  UnityEngine_Animation_o *v19; // x22
  __int64 v20; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v22; // x0
  UnityEngine_Animation_c *v23; // x8
  UnityEngine_Animation_o *v24; // x22
  __int64 v25; // x9
  SimpleAnimation_State_c **v26; // x10
  __int64 v27; // x0

  if ( (byte_4C29D3E & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&SimpleAnimation_State_TypeInfo);
    byte_4C29D3E = 1;
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
    sub_1C2D6EC(Item, v13);
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
    v19 = Item;
    v20 = *(unsigned __int16 *)&Item->klass->_2.rank;
    if ( *(_WORD *)&Item->klass->_2.rank )
    {
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v20;
        p_offset += 2;
        if ( !v20 )
          goto LABEL_20;
      }
      v22 = (__int64)(&klass->vtable._4_GetEnumerator + *(_DWORD *)p_offset);
    }
    else
    {
LABEL_20:
      v22 = sub_1C7DCA8(Item, SimpleAnimation_State_TypeInfo, 4);
    }
    (*(void (__fastcall **)(UnityEngine_Animation_o *, _QWORD, long double))v22)(v19, *(_QWORD *)(v22 + 8), v12);
    Item = (UnityEngine_Animation_o *)this->fields.simpleAnimationComponent;
    if ( !Item )
      goto LABEL_32;
    Item = (UnityEngine_Animation_o *)SimpleAnimation__get_Item((SimpleAnimation_o *)Item, currentAnimName, 0);
    if ( !Item )
      goto LABEL_32;
    v23 = Item->klass;
    v24 = Item;
    v25 = *(unsigned __int16 *)&Item->klass->_2.rank;
    if ( *(_WORD *)&Item->klass->_2.rank )
    {
      v26 = (SimpleAnimation_State_c **)&v23->_1.interfaceOffsets->offset;
      while ( *(v26 - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v25;
        v26 += 2;
        if ( !v25 )
          goto LABEL_28;
      }
      v27 = (__int64)(&v23[1]._1.this_arg + *(_DWORD *)v26);
    }
    else
    {
LABEL_28:
      v27 = sub_1C7DCA8(Item, SimpleAnimation_State_TypeInfo, 8);
    }
    (*(void (__fastcall **)(UnityEngine_Animation_o *, _QWORD, float))v27)(v24, *(_QWORD *)(v27 + 8), 0.0);
  }
LABEL_31:
  this->fields.currentAnimName = currentAnimName;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.currentAnimName, (int32_t)currentAnimName, v15, v16);
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
  __int64 v9; // x1
  Il2CppObject *Component_object; // x22
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *RealAnimNames; // x0
  struct System_Collections_Generic_Dictionary_string__string__o *v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  UnityEngine_Object_o *animationComponent; // x22
  __int64 v19; // x1
  UnityEngine_Animation_o *v20; // x0
  __int64 v21; // x1
  UnityEngine_Animation_o *v22; // x0
  UnityEngine_TrackedReference_o *Item; // x0
  __int64 v24; // x1
  UnityEngine_Animation_o *v25; // x0
  UnityEngine_AnimationState_o *v26; // x0
  __int64 v27; // x1
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  UnityEngine_Object_o *simpleAnimationComponent; // x22
  __int64 v31; // x1
  SimpleAnimation_o *v32; // x0
  __int64 v33; // x1
  SimpleAnimation_o *v34; // x0
  __int64 v35; // x1
  SimpleAnimation_o *v36; // x0
  SimpleAnimation_State_o *v37; // x0
  __int64 v38; // x1
  SimpleAnimation_State_o *v39; // x22
  SimpleAnimation_State_c *klass; // x8
  __int64 v41; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v43; // x0
  const MethodInfo *v44; // x3
  const MethodInfo *v45; // x1

  if ( (byte_4C29D3B & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&SimpleAnimation_State_TypeInfo);
    byte_4C29D3B = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_41;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
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
    sub_1C2D6EC(gameObject, v9);
  }
LABEL_9:
  this->fields.currentCommonAnimName = filename;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.currentCommonAnimName, (int32_t)filename, v11, v12);
  RealAnimNames = this->fields.RealAnimNames;
  if ( RealAnimNames
    && System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)RealAnimNames,
         (Il2CppObject *)filename,
         (const MethodInfo_344A51C *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
  {
    v15 = this->fields.RealAnimNames;
    if ( !v15 )
      sub_1C2D6EC(0, v13);
    filename = (System_String_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                    (System_Collections_Generic_Dictionary_object__object__o *)v15,
                                    (Il2CppObject *)filename,
                                    (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
  }
  BattleFBXComponent__setupAnimation(this, v13);
  this->fields.currentAnimName = filename;
  this->fields.isDirty = 1;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.currentAnimName, (int32_t)filename, v16, v17);
  *(_QWORD *)&this->fields.currentAnimTime = 0;
  this->fields.isStop = 0;
  animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(animationComponent, 0, 0) )
  {
    v20 = this->fields.animationComponent;
    if ( !v20 )
      sub_1C2D6EC(0, v19);
    UnityEngine_Animation__Play_70908988(v20, filename, 0);
    v22 = this->fields.animationComponent;
    if ( !v22 )
      sub_1C2D6EC(0, v21);
    Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v22, filename, 0);
    if ( !UnityEngine_TrackedReference__op_Equality(Item, 0, 0) )
    {
      v25 = this->fields.animationComponent;
      if ( !v25 )
        sub_1C2D6EC(0, v24);
      v26 = UnityEngine_Animation__get_Item(v25, filename, 0);
      if ( !v26 )
        sub_1C2D6EC(0, v27);
      UnityEngine_AnimationState__set_speed(v26, 0.0, 0);
LABEL_37:
      this->fields.animename = filename;
      sub_1C2D434((CGThumbnailListItem_o *)&this->fields.animename, (int32_t)filename, v28, v29);
      if ( startEvent )
      {
        if ( startEvent->fields._stringLength >= 1 )
        {
          this->fields.currentAnimTime = BattleFBXComponent__getTagTime(this, filename, startEvent, v44);
          BattleFBXComponent__AnimUpdate(this, 0.0, v45);
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
    v32 = this->fields.simpleAnimationComponent;
    if ( !v32 )
      sub_1C2D6EC(0, v31);
    SimpleAnimation__Play_66404364(v32, filename, 0);
    v34 = this->fields.simpleAnimationComponent;
    if ( !v34 )
      sub_1C2D6EC(0, v33);
    if ( SimpleAnimation__get_Item(v34, filename, 0) )
    {
      v36 = this->fields.simpleAnimationComponent;
      if ( !v36 )
        sub_1C2D6EC(0, v35);
      v37 = SimpleAnimation__get_Item(v36, filename, 0);
      v39 = v37;
      if ( !v37 )
        sub_1C2D6EC(0, v38);
      klass = v37->klass;
      v41 = *(unsigned __int16 *)&v37->klass->_2.rank;
      if ( *(_WORD *)&v37->klass->_2.rank )
      {
        p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v41;
          p_offset += 2;
          if ( !v41 )
            goto LABEL_34;
        }
        v43 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 8];
      }
      else
      {
LABEL_34:
        v43 = sub_1C7DCA8(v37, SimpleAnimation_State_TypeInfo, 8);
      }
      (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD, float))v43)(v39, *(_QWORD *)(v43 + 8), 0.0);
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
  __int64 v6; // x1
  UnityEngine_Component_o *rootTransform; // x0
  Il2CppObject *Component_object; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  Il2CppObject *v11; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4C29D2D & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    byte_4C29D2D = 1;
  }
  this->fields.rootTransform = value;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.rootTransform, (int32_t)value, (int32_t)method, v3);
  rootTransform = (UnityEngine_Component_o *)this->fields.rootTransform;
  if ( !rootTransform
    || (rootTransform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(rootTransform, 0)) == 0
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)rootTransform,
                             (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_Animation___),
        this->fields.animationComponent = (struct UnityEngine_Animation_o *)Component_object,
        sub_1C2D434((CGThumbnailListItem_o *)&this->fields.animationComponent, (int32_t)Component_object, v9, v10),
        (rootTransform = (UnityEngine_Component_o *)this->fields.rootTransform) == 0)
    || (rootTransform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(rootTransform, 0)) == 0 )
  {
    sub_1C2D6EC(rootTransform, v6);
  }
  v11 = UnityEngine_GameObject__GetComponent_object_(
          (UnityEngine_GameObject_o *)rootTransform,
          (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  this->fields.simpleAnimationComponent = (struct SimpleAnimation_o *)v11;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.simpleAnimationComponent, (int32_t)v11, v12, v13);
}


void BattleFBXComponent__setupAnimation(BattleFBXComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *rootTransform; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v5; // x1
  UnityEngine_Transform_o *v6; // x0
  const MethodInfo *v7; // x2
  BattleFBXComponent_c *v8; // x0
  UnityEngine_Object_o *v9; // x20
  UnityEngine_Transform_o *v10; // x1
  const MethodInfo *v11; // x2

  if ( (byte_4C29D3A & 1) == 0 )
  {
    sub_1C2D490(&BattleFBXComponent_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_17955/*"chr"*/);
    byte_4C29D3A = 1;
  }
  rootTransform = (UnityEngine_Object_o *)this->fields.rootTransform;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(rootTransform, 0, 0) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !transform )
      sub_1C2D6EC(0, v5);
    v6 = UnityEngine_Transform__Find(transform, (System_String_o *)StringLiteral_17955/*"chr"*/, 0);
    BattleFBXComponent__set_RootTransform(this, v6, v7);
    v8 = BattleFBXComponent_TypeInfo;
    if ( !BattleFBXComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
      v8 = BattleFBXComponent_TypeInfo;
    }
    v8->static_fields->EnableEvent = 0;
  }
  v9 = (UnityEngine_Object_o *)this->fields.rootTransform;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v9, 0, 0) )
  {
    v10 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    BattleFBXComponent__set_RootTransform(this, v10, v11);
  }
}


void BattleFBXComponent__stopAnimation(BattleFBXComponent_o *this, const MethodInfo *method)
{
  this->fields.isStop = 1;
}


void BattleFBXComponent__stopAnimationCheck(BattleFBXComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4C29D40 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_2274/*"AnimationCheck"*/);
    byte_4C29D40 = 1;
  }
  UnityEngine_MonoBehaviour__StopCoroutine_71150204(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_2274/*"AnimationCheck"*/,
    0);
}


void BattleFBXComponent__stopParticle(BattleFBXComponent_o *this, const MethodInfo *method)
{
  void *gameObject; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  int v6; // w8
  void *v7; // x19
  unsigned int v8; // w20

  if ( (byte_4C29D39 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem___);
    byte_4C29D39 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_12;
  gameObject = UnityEngine_GameObject__GetComponentsInChildren_object__51538676(
                 (UnityEngine_GameObject_o *)gameObject,
                 (const MethodInfo_3126AF4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem___);
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
        sub_1C2D6F4(gameObject, v4, v5);
      gameObject = (void *)*((_QWORD *)v7 + (int)v8 + 4);
      if ( !gameObject )
        break;
      UnityEngine_ParticleSystem__Stop_71447464((UnityEngine_ParticleSystem_o *)gameObject, 0);
      v6 = *((_DWORD *)v7 + 6);
      if ( (int)++v8 >= v6 )
        return;
    }
LABEL_12:
    sub_1C2D6EC(gameObject, v4);
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
  if ( (byte_4C29D58 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    this = (BattleFBXComponent__AnimationCheck_d__70_o *)sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C29D58 = 1;
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
            sub_1C2D434(p__2__current, 0, v6, v7);
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
        sub_1C2D6EC(this, method);
      if ( !SimpleAnimation__get_isPlaying((SimpleAnimation_o *)this, 0) )
      {
LABEL_20:
        v2->fields.__2__current = 0;
        v10 = (CGThumbnailListItem_o *)&v2->fields.__2__current;
        sub_1C2D434(v10, 0, v6, v7);
        v11 = 3;
        goto LABEL_21;
      }
      v2->fields.__2__current = 0;
      v10 = (CGThumbnailListItem_o *)&v2->fields.__2__current;
      sub_1C2D434(v10, 0, v6, v7);
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
                                                             (const MethodInfo_344A51C *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_28;
      this = (BattleFBXComponent__AnimationCheck_d__70_o *)_4__this->fields.CommonAnimNames;
      if ( !this )
        goto LABEL_31;
      this = (BattleFBXComponent__AnimationCheck_d__70_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                             (System_Collections_Generic_Dictionary_object__object__o *)this,
                                                             animename,
                                                             (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
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

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_BattleFBXComponent__AnimationCheck_d__70_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
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

  if ( (byte_4C29D55 & 1) == 0 )
  {
    sub_1C2D490(&BattleFBXComponent___c_TypeInfo);
    byte_4C29D55 = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(BattleFBXComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleFBXComponent___c_TypeInfo->static_fields->__9 = (struct BattleFBXComponent___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)BattleFBXComponent___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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

  if ( (byte_4C29D56 & 1) == 0 )
  {
    this = (BattleFBXComponent___c_o *)sub_1C2D490(&BattleFBXComponent_TypeInfo);
    byte_4C29D56 = 1;
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
    sub_1C2D6EC(this, p);
  return System_String__Contains((System_String_o *)v6, BattleFBXComponent_TypeInfo->static_fields->sideflipMarker, 0);
}


bool BattleFBXComponent___c___inSetEvolutionLevel_b__57_1(
        BattleFBXComponent___c_o *this,
        UnityEngine_Transform_o *p,
        const MethodInfo *method)
{
  BattleFBXComponent___c_o *v4; // x19

  if ( (byte_4C29D57 & 1) == 0 )
  {
    this = (BattleFBXComponent___c_o *)sub_1C2D490(&BattleFBXComponent_TypeInfo);
    byte_4C29D57 = 1;
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
    sub_1C2D6EC(this, p);
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
    sub_1C2D6EC(0, shaderName);
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
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C2D550(method) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = sub_1A745EC;
LABEL_8:
      this->fields.invoke_impl = (intptr_t)v9;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v8 )
    {
      v9 = sub_1A745CC;
      goto LABEL_8;
    }
    if ( !object )
    {
      v11 = sub_1C2D708(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C2D5B8(v11, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_9:
  this->fields.extra_arg = (intptr_t)sub_1A74584;
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
  return (System_IAsyncResult_o *)sub_1C2D444(this, &v6, callback, object);
}


void BattleFBXComponent_onEventDelegate__EndInvoke(
        BattleFBXComponent_onEventDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2D448(result, 0, method);
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