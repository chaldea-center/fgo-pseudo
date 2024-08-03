void __fastcall BattleFBXComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
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
  int32_t v28; // w3
  int32_t v29; // w1
  struct BattleFBXComponent_StaticFields *v30; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  int32_t v33; // w1
  struct BattleFBXComponent_StaticFields *v34; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  int32_t v37; // w1
  struct BattleFBXComponent_StaticFields *v38; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  int32_t v41; // w1
  struct BattleFBXComponent_StaticFields *v42; // x0
  int32_t v43; // w2
  int32_t v44; // w3
  int32_t v45; // w1
  struct BattleFBXComponent_StaticFields *v46; // x0
  int32_t v47; // w2
  int32_t v48; // w3
  int32_t v49; // w1
  struct BattleFBXComponent_StaticFields *v50; // x0
  int32_t v51; // w2
  int32_t v52; // w3
  __int64 v53; // x0
  __int64 v54; // x1
  int32_t v55; // w2
  int32_t v56; // w3
  __int64 v57; // x19
  int32_t v58; // w1
  int32_t v59; // w2
  int32_t v60; // w3
  int32_t v61; // w1
  int32_t v62; // w2
  int32_t v63; // w3
  int32_t v64; // w1
  int32_t v65; // w2
  int32_t v66; // w3
  int32_t v67; // w1
  int32_t v68; // w2
  int32_t v69; // w3
  int32_t v70; // w1
  int32_t v71; // w2
  int32_t v72; // w3
  int32_t v73; // w1
  int32_t v74; // w2
  int32_t v75; // w3
  int32_t v76; // w1
  int32_t v77; // w2
  int32_t v78; // w3
  int32_t v79; // w1
  int32_t v80; // w2
  int32_t v81; // w3
  int32_t v82; // w1
  int32_t v83; // w2
  int32_t v84; // w3
  int32_t v85; // w1
  struct BattleFBXComponent_StaticFields *v86; // x0
  int32_t v87; // w2
  int32_t v88; // w3

  if ( (byte_49FE97B & 1) == 0 )
  {
    sub_1B640C8(&BattleFBXComponent_TypeInfo, v1);
    sub_1B640C8(&string___TypeInfo, v4);
    sub_1B640C8(&StringLiteral_7200/*"Hidden/Particle/MultiplyAdd1Pass-Stencil"*/, v5);
    sub_1B640C8(&StringLiteral_6345/*"FGO_CH/AlphaBlendSingle"*/, v6);
    sub_1B640C8(&StringLiteral_18908/*"en_weapon_"*/, v7);
    sub_1B640C8(&StringLiteral_6347/*"FGO_CH/Base"*/, v8);
    sub_1B640C8(&StringLiteral_16482/*"_level"*/, v9);
    sub_1B640C8(&StringLiteral_6344/*"FGO_Battle/Particle/Base-Stencil"*/, v10);
    sub_1B640C8(&StringLiteral_6343/*"FGO_Battle/Particle/Base"*/, v11);
    sub_1B640C8(&StringLiteral_6348/*"FGO_CH/SingleFlat"*/, v12);
    sub_1B640C8(&StringLiteral_7199/*"Hidden/Particle/MultiplyAdd1Pass"*/, v13);
    sub_1B640C8(&StringLiteral_18904/*"en_item_"*/, v14);
    sub_1B640C8(&StringLiteral_17896/*"chrnode_"*/, v15);
    sub_1B640C8(&StringLiteral_20869/*"joint_sideflip_"*/, v16);
    sub_1B640C8(&StringLiteral_7197/*"Hidden/Particle/MultiplyAdd"*/, v17);
    sub_1B640C8(&StringLiteral_2508/*"Assets/AssetStorages/NoblePhantasm/"*/, v18);
    sub_1B640C8(&StringLiteral_7198/*"Hidden/Particle/MultiplyAdd-Stencil"*/, v19);
    sub_1B640C8(&StringLiteral_6346/*"FGO_CH/AlphaBlendSingleFlat"*/, v20);
    sub_1B640C8(&StringLiteral_22493/*"prefabn_"*/, v21);
    sub_1B640C8(&StringLiteral_2509/*"Assets/AssetStorages/Servants/"*/, v22);
    byte_49FE97B = 1;
  }
  static_fields = BattleFBXComponent_TypeInfo->static_fields;
  static_fields->EnableEvent = 1;
  static_fields->animFps = 30.0;
  v24 = StringLiteral_16482/*"_level"*/;
  static_fields->levelMarker = (struct System_String_o *)StringLiteral_16482/*"_level"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->levelMarker, v24, v2, v3);
  v25 = StringLiteral_22493/*"prefabn_"*/;
  v26 = BattleFBXComponent_TypeInfo->static_fields;
  v26->prefabMarker = (struct System_String_o *)StringLiteral_22493/*"prefabn_"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v26->prefabMarker, v25, v27, v28);
  v29 = StringLiteral_17896/*"chrnode_"*/;
  v30 = BattleFBXComponent_TypeInfo->static_fields;
  v30->chrnodeMarker = (struct System_String_o *)StringLiteral_17896/*"chrnode_"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v30->chrnodeMarker, v29, v31, v32);
  v33 = StringLiteral_20869/*"joint_sideflip_"*/;
  v34 = BattleFBXComponent_TypeInfo->static_fields;
  v34->sideflipMarker = (struct System_String_o *)StringLiteral_20869/*"joint_sideflip_"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v34->sideflipMarker, v33, v35, v36);
  v37 = StringLiteral_18904/*"en_item_"*/;
  v38 = BattleFBXComponent_TypeInfo->static_fields;
  v38->enItemMarker = (struct System_String_o *)StringLiteral_18904/*"en_item_"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v38->enItemMarker, v37, v39, v40);
  v41 = StringLiteral_18908/*"en_weapon_"*/;
  v42 = BattleFBXComponent_TypeInfo->static_fields;
  v42->enWeaponMarker = (struct System_String_o *)StringLiteral_18908/*"en_weapon_"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v42->enWeaponMarker, v41, v43, v44);
  v45 = StringLiteral_2508/*"Assets/AssetStorages/NoblePhantasm/"*/;
  v46 = BattleFBXComponent_TypeInfo->static_fields;
  v46->npPathHead = (struct System_String_o *)StringLiteral_2508/*"Assets/AssetStorages/NoblePhantasm/"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v46->npPathHead, v45, v47, v48);
  v49 = StringLiteral_2509/*"Assets/AssetStorages/Servants/"*/;
  v50 = BattleFBXComponent_TypeInfo->static_fields;
  v50->svtPathHead = (struct System_String_o *)StringLiteral_2509/*"Assets/AssetStorages/Servants/"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v50->svtPathHead, v49, v51, v52);
  v53 = sub_1B64170(string___TypeInfo, 10LL);
  if ( !v53 )
    sub_1B64324(0LL);
  v57 = v53;
  if ( !*(_DWORD *)(v53 + 24) )
    goto LABEL_15;
  v58 = StringLiteral_6347/*"FGO_CH/Base"*/;
  *(_QWORD *)(v53 + 32) = StringLiteral_6347/*"FGO_CH/Base"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v53 + 32), v58, v55, v56);
  if ( *(_DWORD *)(v57 + 24) <= 1u )
    goto LABEL_15;
  v61 = StringLiteral_6345/*"FGO_CH/AlphaBlendSingle"*/;
  *(_QWORD *)(v57 + 40) = StringLiteral_6345/*"FGO_CH/AlphaBlendSingle"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v57 + 40), v61, v59, v60);
  if ( *(_DWORD *)(v57 + 24) <= 2u )
    goto LABEL_15;
  v64 = StringLiteral_6343/*"FGO_Battle/Particle/Base"*/;
  *(_QWORD *)(v57 + 48) = StringLiteral_6343/*"FGO_Battle/Particle/Base"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v57 + 48), v64, v62, v63);
  if ( *(_DWORD *)(v57 + 24) <= 3u )
    goto LABEL_15;
  v67 = StringLiteral_7197/*"Hidden/Particle/MultiplyAdd"*/;
  *(_QWORD *)(v57 + 56) = StringLiteral_7197/*"Hidden/Particle/MultiplyAdd"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v57 + 56), v67, v65, v66);
  if ( *(_DWORD *)(v57 + 24) <= 4u )
    goto LABEL_15;
  v70 = StringLiteral_7199/*"Hidden/Particle/MultiplyAdd1Pass"*/;
  *(_QWORD *)(v57 + 64) = StringLiteral_7199/*"Hidden/Particle/MultiplyAdd1Pass"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v57 + 64), v70, v68, v69);
  if ( *(_DWORD *)(v57 + 24) <= 5u )
    goto LABEL_15;
  v73 = StringLiteral_6346/*"FGO_CH/AlphaBlendSingleFlat"*/;
  *(_QWORD *)(v57 + 72) = StringLiteral_6346/*"FGO_CH/AlphaBlendSingleFlat"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v57 + 72), v73, v71, v72);
  if ( *(_DWORD *)(v57 + 24) <= 6u )
    goto LABEL_15;
  v76 = StringLiteral_6344/*"FGO_Battle/Particle/Base-Stencil"*/;
  *(_QWORD *)(v57 + 80) = StringLiteral_6344/*"FGO_Battle/Particle/Base-Stencil"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v57 + 80), v76, v74, v75);
  if ( *(_DWORD *)(v57 + 24) <= 7u
    || (v79 = StringLiteral_7198/*"Hidden/Particle/MultiplyAdd-Stencil"*/,
        *(_QWORD *)(v57 + 88) = StringLiteral_7198/*"Hidden/Particle/MultiplyAdd-Stencil"*/,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v57 + 88), v79, v77, v78),
        *(_DWORD *)(v57 + 24) <= 8u)
    || (v82 = StringLiteral_7200/*"Hidden/Particle/MultiplyAdd1Pass-Stencil"*/,
        *(_QWORD *)(v57 + 96) = StringLiteral_7200/*"Hidden/Particle/MultiplyAdd1Pass-Stencil"*/,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v57 + 96), v82, v80, v81),
        *(_DWORD *)(v57 + 24) <= 9u) )
  {
LABEL_15:
    sub_1B6432C(v53, v54);
  }
  v85 = StringLiteral_6348/*"FGO_CH/SingleFlat"*/;
  *(_QWORD *)(v57 + 104) = StringLiteral_6348/*"FGO_CH/SingleFlat"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v57 + 104), v85, v83, v84);
  v86 = BattleFBXComponent_TypeInfo->static_fields;
  v86->yTransparenceShaderNames = (struct System_String_array *)v57;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v86->yTransparenceShaderNames, v57, v87, v88);
}


void __fastcall BattleFBXComponent___ctor(BattleFBXComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_Dictionary_object__object__o *v11; // x20
  int32_t v12; // w2
  int32_t v13; // w3
  __int64 v14; // x1
  __int64 v15; // x2
  System_Collections_Generic_Dictionary_object__object__o *v16; // x20
  int32_t v17; // w2
  int32_t v18; // w3
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_object__o *v21; // x20
  int32_t v22; // w2
  int32_t v23; // w3
  __int64 v24; // x1
  __int64 v25; // x2
  System_Collections_Generic_Dictionary_object__object__o *v26; // x20
  int32_t v27; // w2
  int32_t v28; // w3
  __int64 v29; // x1
  __int64 v30; // x2
  System_Collections_Generic_Dictionary_TKey__TValue__o *v31; // x20
  int32_t v32; // w2
  int32_t v33; // w3

  if ( (byte_49FE97A & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__string___ctor__, method);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__GameObject___ctor__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_KeyValuePair_string__Material___float___ctor__, v5);
    sub_1B640C8(&System_Collections_Generic_Dictionary_string__GameObject__TypeInfo, v6);
    sub_1B640C8(&System_Collections_Generic_Dictionary_string__string__TypeInfo, v7);
    sub_1B640C8(&System_Collections_Generic_Dictionary_KeyValuePair_string__Material___float__TypeInfo, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_Renderer___ctor__, v9);
    sub_1B640C8(&System_Collections_Generic_List_Renderer__TypeInfo, v10);
    byte_49FE97A = 1;
  }
  v11 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B64314(
                                                                     System_Collections_Generic_Dictionary_string__string__TypeInfo,
                                                                     method,
                                                                     v2);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v11,
    (const MethodInfo_3178A48 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  this->fields.RealAnimNames = (struct System_Collections_Generic_Dictionary_string__string__o *)v11;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.RealAnimNames, (int32_t)v11, v12, v13);
  v16 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B64314(
                                                                     System_Collections_Generic_Dictionary_string__string__TypeInfo,
                                                                     v14,
                                                                     v15);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v16,
    (const MethodInfo_3178A48 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  this->fields.CommonAnimNames = (struct System_Collections_Generic_Dictionary_string__string__o *)v16;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.CommonAnimNames, (int32_t)v16, v17, v18);
  this->fields.timescale = 1.0;
  v21 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_Renderer__TypeInfo,
                                                       v19,
                                                       v20);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_Renderer___ctor__);
  this->fields.enableRendererList = (struct System_Collections_Generic_List_Renderer__o *)v21;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.enableRendererList, (int32_t)v21, v22, v23);
  v26 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B64314(
                                                                     System_Collections_Generic_Dictionary_string__GameObject__TypeInfo,
                                                                     v24,
                                                                     v25);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v26,
    (const MethodInfo_3178A48 *)Method_System_Collections_Generic_Dictionary_string__GameObject___ctor__);
  this->fields.actorEffectDict = (struct System_Collections_Generic_Dictionary_string__GameObject__o *)v26;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.actorEffectDict, (int32_t)v26, v27, v28);
  v31 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B64314(
                                                                   System_Collections_Generic_Dictionary_KeyValuePair_string__Material___float__TypeInfo,
                                                                   v29,
                                                                   v30);
  System_Collections_Generic_Dictionary_KeyValuePair_object__object___float____ctor(
    v31,
    (const MethodInfo_30E412C *)Method_System_Collections_Generic_Dictionary_KeyValuePair_string__Material___float___ctor__);
  this->fields.tempMaterialPropertyDict = (struct System_Collections_Generic_Dictionary_KeyValuePair_string__Material___float__o *)v31;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.tempMaterialPropertyDict, (int32_t)v31, v32, v33);
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
  __int64 wrapMode; // x0
  UnityEngine_TrackedReference_o *Item; // x0
  UnityEngine_Object_o *simpleAnimationComponent; // x20
  UnityEngine_Object_o *v14; // x20
  float v15; // s8
  UnityEngine_Animation_o *v16; // x8
  float v17; // s8
  float v18; // s8
  float length; // s0
  UnityEngine_Object_o *v20; // x20
  __int64 v21; // x8
  float currentAnimTime; // s8
  __int64 v23; // x20
  __int64 v24; // x9
  SimpleAnimation_State_c **v25; // x10
  __int64 v26; // x0
  __int64 v27; // x8
  __int64 v28; // x9
  SimpleAnimation_State_c **v29; // x10
  __int64 v30; // x0
  __int64 v31; // x8
  __int64 v32; // x9
  SimpleAnimation_State_c **v33; // x10
  __int64 v34; // x0
  __int64 v35; // x8
  __int64 v36; // x9
  SimpleAnimation_State_c **v37; // x10
  __int64 v38; // x0
  __int64 v39; // x8
  __int64 v40; // x9
  SimpleAnimation_State_c **v41; // x10
  __int64 v42; // x0
  float i; // s8
  __int64 v44; // x8
  __int64 v45; // x9
  SimpleAnimation_State_c **v46; // x10
  __int64 v47; // x0
  __int64 v48; // x8
  float v49; // s8
  __int64 v50; // x9
  SimpleAnimation_State_c **v51; // x10
  __int64 v52; // x0
  UnityEngine_Object_o *v53; // x20
  UnityEngine_Object_o *v54; // x20
  UnityEngine_TrackedReference_o *v55; // x0
  UnityEngine_Object_o *v56; // x20
  BattleFBXComponent_c *v57; // x0
  System_String_o *currentCommonAnimName; // x20
  __int64 v59; // x1
  struct BattleFBXComponent_AnimEvent_array_array *eventlist; // x8
  BattleFBXComponent_AnimEvent_array *v61; // x24
  int currentEventIndex; // w25
  __int64 j; // x8
  BattleFBXComponent_AnimEvent_o *v64; // x20
  float time; // s0
  float v66; // s1
  bool v67; // nf
  float v68; // s1
  UnityEngine_Object_o *v69; // x21
  __int64 v70; // x8
  __int64 v71; // x21
  __int64 v72; // x9
  SimpleAnimation_State_c **v73; // x10
  __int64 v74; // x0
  _BOOL4 isDirty; // w27
  UnityEngine_Object_o *billBoard; // x21
  const MethodInfo *v77; // x2
  _BOOL4 v78; // w8
  BattleFBXComponent_c *v79; // x0
  UnityEngine_Object_o *v80; // x20
  float animFps; // s8
  float v82; // s0
  int v83; // w21
  __int64 v84; // x8
  __int64 v85; // x20
  __int64 v86; // x9
  SimpleAnimation_State_c **v87; // x10
  __int64 v88; // x0

  v3 = *(long double *)&deltaTime;
  if ( (byte_49FE957 & 1) == 0 )
  {
    sub_1B640C8(&AnimationList_TypeInfo, method);
    sub_1B640C8(&BattleFBXComponent_TypeInfo, v5);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    sub_1B640C8(&SimpleAnimation_State_TypeInfo, v7);
    byte_49FE957 = 1;
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
  v14 = (UnityEngine_Object_o *)this->fields.animationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v14, 0LL, 0LL) )
  {
    v20 = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v20, 0LL, 0LL) )
      goto LABEL_102;
    wrapMode = (__int64)this->fields.simpleAnimationComponent;
    if ( wrapMode )
    {
      wrapMode = (__int64)SimpleAnimation__get_Item((SimpleAnimation_o *)wrapMode, this->fields.currentAnimName, 0LL);
      if ( wrapMode )
      {
        v21 = *(_QWORD *)wrapMode;
        currentAnimTime = this->fields.currentAnimTime;
        v23 = wrapMode;
        v24 = *(unsigned __int16 *)(*(_QWORD *)wrapMode + 302LL);
        if ( *(_WORD *)(*(_QWORD *)wrapMode + 302LL) )
        {
          v25 = (SimpleAnimation_State_c **)(*(_QWORD *)(v21 + 176) + 8LL);
          while ( *(v25 - 1) != SimpleAnimation_State_TypeInfo )
          {
            --v24;
            v25 += 2;
            if ( !v24 )
              goto LABEL_49;
          }
          v26 = v21 + 16LL * (*(_DWORD *)v25 + 14) + 312;
        }
        else
        {
LABEL_49:
          v26 = sub_1BB60A8(wrapMode, SimpleAnimation_State_TypeInfo, 14LL);
        }
        wrapMode = (*(__int64 (__fastcall **)(__int64, _QWORD))v26)(v23, *(_QWORD *)(v26 + 8));
        if ( wrapMode )
        {
          if ( currentAnimTime < UnityEngine_AnimationClip__get_length((UnityEngine_AnimationClip_o *)wrapMode, 0LL) )
            goto LABEL_102;
          v27 = *(_QWORD *)v23;
          v28 = *(unsigned __int16 *)(*(_QWORD *)v23 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v23 + 302LL) )
          {
            v29 = (SimpleAnimation_State_c **)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *(v29 - 1) != SimpleAnimation_State_TypeInfo )
            {
              --v28;
              v29 += 2;
              if ( !v28 )
                goto LABEL_59;
            }
            v30 = v27 + 16LL * (*(_DWORD *)v29 + 19) + 312;
          }
          else
          {
LABEL_59:
            v30 = sub_1BB60A8(v23, SimpleAnimation_State_TypeInfo, 19LL);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v30)(v23, *(_QWORD *)(v30 + 8)) & 1) != 0 )
            goto LABEL_70;
          v31 = *(_QWORD *)v23;
          v32 = *(unsigned __int16 *)(*(_QWORD *)v23 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v23 + 302LL) )
          {
            v33 = (SimpleAnimation_State_c **)(*(_QWORD *)(v31 + 176) + 8LL);
            while ( *(v33 - 1) != SimpleAnimation_State_TypeInfo )
            {
              --v32;
              v33 += 2;
              if ( !v32 )
                goto LABEL_66;
            }
            v34 = v31 + 16LL * (*(_DWORD *)v33 + 14) + 312;
          }
          else
          {
LABEL_66:
            v34 = sub_1BB60A8(v23, SimpleAnimation_State_TypeInfo, 14LL);
          }
          wrapMode = (*(__int64 (__fastcall **)(__int64, _QWORD))v34)(v23, *(_QWORD *)(v34 + 8));
          if ( wrapMode )
          {
            if ( UnityEngine_Motion__get_isLooping((UnityEngine_Motion_o *)wrapMode, 0LL) )
            {
LABEL_84:
              for ( i = this->fields.currentAnimTime; ; this->fields.currentAnimTime = i )
              {
                v44 = *(_QWORD *)v23;
                v45 = *(unsigned __int16 *)(*(_QWORD *)v23 + 302LL);
                if ( *(_WORD *)(*(_QWORD *)v23 + 302LL) )
                {
                  v46 = (SimpleAnimation_State_c **)(*(_QWORD *)(v44 + 176) + 8LL);
                  while ( *(v46 - 1) != SimpleAnimation_State_TypeInfo )
                  {
                    --v45;
                    v46 += 2;
                    if ( !v45 )
                      goto LABEL_89;
                  }
                  v47 = v44 + 16LL * (*(_DWORD *)v46 + 14) + 312;
                }
                else
                {
LABEL_89:
                  v47 = sub_1BB60A8(v23, SimpleAnimation_State_TypeInfo, 14LL);
                }
                wrapMode = (*(__int64 (__fastcall **)(__int64, _QWORD))v47)(v23, *(_QWORD *)(v47 + 8));
                if ( !wrapMode )
                  goto LABEL_39;
                if ( i < UnityEngine_AnimationClip__get_length((UnityEngine_AnimationClip_o *)wrapMode, 0LL) )
                  break;
                v48 = *(_QWORD *)v23;
                v49 = this->fields.currentAnimTime;
                v50 = *(unsigned __int16 *)(*(_QWORD *)v23 + 302LL);
                if ( *(_WORD *)(*(_QWORD *)v23 + 302LL) )
                {
                  v51 = (SimpleAnimation_State_c **)(*(_QWORD *)(v48 + 176) + 8LL);
                  while ( *(v51 - 1) != SimpleAnimation_State_TypeInfo )
                  {
                    --v50;
                    v51 += 2;
                    if ( !v50 )
                      goto LABEL_97;
                  }
                  v52 = v48 + 16LL * (*(_DWORD *)v51 + 14) + 312;
                }
                else
                {
LABEL_97:
                  v52 = sub_1BB60A8(v23, SimpleAnimation_State_TypeInfo, 14LL);
                }
                wrapMode = (*(__int64 (__fastcall **)(__int64, _QWORD))v52)(v23, *(_QWORD *)(v52 + 8));
                if ( !wrapMode )
                  goto LABEL_39;
                i = v49 - UnityEngine_AnimationClip__get_length((UnityEngine_AnimationClip_o *)wrapMode, 0LL);
              }
LABEL_101:
              this->fields.currentEventIndex = 0;
              goto LABEL_102;
            }
LABEL_70:
            v35 = *(_QWORD *)v23;
            v36 = *(unsigned __int16 *)(*(_QWORD *)v23 + 302LL);
            if ( *(_WORD *)(*(_QWORD *)v23 + 302LL) )
            {
              v37 = (SimpleAnimation_State_c **)(*(_QWORD *)(v35 + 176) + 8LL);
              while ( *(v37 - 1) != SimpleAnimation_State_TypeInfo )
              {
                --v36;
                v37 += 2;
                if ( !v36 )
                  goto LABEL_74;
              }
              v38 = v35 + 16LL * (*(_DWORD *)v37 + 19) + 312;
            }
            else
            {
LABEL_74:
              v38 = sub_1BB60A8(v23, SimpleAnimation_State_TypeInfo, 19LL);
            }
            if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v38)(v23, *(_QWORD *)(v38 + 8)) & 1) == 0 )
              goto LABEL_163;
            v39 = *(_QWORD *)v23;
            v40 = *(unsigned __int16 *)(*(_QWORD *)v23 + 302LL);
            if ( *(_WORD *)(*(_QWORD *)v23 + 302LL) )
            {
              v41 = (SimpleAnimation_State_c **)(*(_QWORD *)(v39 + 176) + 8LL);
              while ( *(v41 - 1) != SimpleAnimation_State_TypeInfo )
              {
                --v40;
                v41 += 2;
                if ( !v40 )
                  goto LABEL_81;
              }
              v42 = v39 + 16LL * (*(_DWORD *)v41 + 17) + 312;
            }
            else
            {
LABEL_81:
              v42 = sub_1BB60A8(v23, SimpleAnimation_State_TypeInfo, 17LL);
            }
            if ( (*(unsigned int (__fastcall **)(__int64, _QWORD))v42)(v23, *(_QWORD *)(v42 + 8)) != 2 )
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
    sub_1B64324(wrapMode);
  }
  wrapMode = (__int64)this->fields.animationComponent;
  if ( !wrapMode )
    goto LABEL_39;
  v15 = this->fields.currentAnimTime;
  wrapMode = (__int64)UnityEngine_Animation__get_Item(
                        (UnityEngine_Animation_o *)wrapMode,
                        this->fields.currentAnimName,
                        0LL);
  if ( !wrapMode )
    goto LABEL_39;
  if ( v15 >= UnityEngine_AnimationState__get_length((UnityEngine_AnimationState_o *)wrapMode, 0LL) )
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
        v16 = this->fields.animationComponent;
        if ( (_DWORD)wrapMode == 2 )
        {
          if ( v16 )
          {
            v17 = this->fields.currentAnimTime;
            do
            {
              wrapMode = (__int64)UnityEngine_Animation__get_Item(v16, this->fields.currentAnimName, 0LL);
              if ( !wrapMode )
                break;
              if ( v17 < UnityEngine_AnimationState__get_length((UnityEngine_AnimationState_o *)wrapMode, 0LL) )
                goto LABEL_101;
              wrapMode = (__int64)this->fields.animationComponent;
              if ( !wrapMode )
                break;
              v18 = this->fields.currentAnimTime;
              wrapMode = (__int64)UnityEngine_Animation__get_Item(
                                    (UnityEngine_Animation_o *)wrapMode,
                                    this->fields.currentAnimName,
                                    0LL);
              if ( !wrapMode )
                break;
              length = UnityEngine_AnimationState__get_length((UnityEngine_AnimationState_o *)wrapMode, 0LL);
              v16 = this->fields.animationComponent;
              v17 = v18 - length;
              this->fields.currentAnimTime = v17;
            }
            while ( v16 );
          }
        }
        else if ( v16 )
        {
          UnityEngine_Animation__Stop(v16, 0LL);
          return;
        }
      }
    }
    goto LABEL_39;
  }
LABEL_102:
  v53 = (UnityEngine_Object_o *)this->fields.rootTransform;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v53, 0LL, 0LL) && this->fields.currentAnimName )
  {
    v54 = (UnityEngine_Object_o *)this->fields.animationComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v54, 0LL, 0LL) )
    {
      wrapMode = (__int64)this->fields.animationComponent;
      if ( !wrapMode )
        goto LABEL_39;
      if ( UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)wrapMode, 0LL) )
      {
        wrapMode = (__int64)this->fields.animationComponent;
        if ( !wrapMode )
          goto LABEL_39;
        v55 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                                  (UnityEngine_Animation_o *)wrapMode,
                                                  this->fields.currentAnimName,
                                                  0LL);
        if ( UnityEngine_TrackedReference__op_Inequality(v55, 0LL, 0LL) )
          goto LABEL_120;
      }
    }
    v56 = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v56, 0LL, 0LL) )
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
      v57 = BattleFBXComponent_TypeInfo;
      if ( !BattleFBXComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
        v57 = BattleFBXComponent_TypeInfo;
      }
      if ( v57->static_fields->EnableEvent && this->fields.eventlist )
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
            sub_1B6432C(wrapMode, v59);
          v61 = eventlist->m_Items[(unsigned int)wrapMode];
          if ( v61 )
          {
            currentEventIndex = this->fields.currentEventIndex;
            for ( j = *(_QWORD *)&v61->max_length; currentEventIndex < (int)j; ++currentEventIndex )
            {
              if ( currentEventIndex >= (unsigned int)j )
                goto LABEL_190;
              v64 = v61->m_Items[currentEventIndex];
              if ( !v64 )
                goto LABEL_39;
              time = v64->fields.time;
              v66 = this->fields.currentAnimTime;
              v67 = time < v66;
              v68 = v8 + v66;
              if ( v67 || time >= v68 )
              {
                if ( time >= v68 )
                {
                  this->fields.currentEventIndex = currentEventIndex;
                  break;
                }
              }
              else
              {
                v69 = (UnityEngine_Object_o *)this->fields.animationComponent;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(v69, 0LL, 0LL) )
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
                  UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)wrapMode, v64->fields.time, 0LL);
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
                  v70 = *(_QWORD *)wrapMode;
                  *(float *)&v3 = v64->fields.time;
                  v71 = wrapMode;
                  v72 = *(unsigned __int16 *)(*(_QWORD *)wrapMode + 302LL);
                  if ( *(_WORD *)(*(_QWORD *)wrapMode + 302LL) )
                  {
                    v73 = (SimpleAnimation_State_c **)(*(_QWORD *)(v70 + 176) + 8LL);
                    while ( *(v73 - 1) != SimpleAnimation_State_TypeInfo )
                    {
                      --v72;
                      v73 += 2;
                      if ( !v72 )
                        goto LABEL_150;
                    }
                    v74 = v70 + 16LL * (*(_DWORD *)v73 + 4) + 312;
                  }
                  else
                  {
LABEL_150:
                    v74 = sub_1BB60A8(wrapMode, SimpleAnimation_State_TypeInfo, 4LL);
                  }
                  (*(void (__fastcall **)(__int64, _QWORD, long double))v74)(v71, *(_QWORD *)(v74 + 8), v3);
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
                BattleFBXComponent__OnAnimEvent(this, v64, v77);
                v78 = this->fields.isDirty;
                this->fields.isDirty = v78 || isDirty;
                if ( v78 || isDirty )
                {
                  if ( !v78 )
                    this->fields.currentAnimTime = v64->fields.time;
                  this->fields.isDirty = 0;
                  return;
                }
                j = *(_QWORD *)&v61->max_length;
              }
            }
          }
        }
      }
      v79 = BattleFBXComponent_TypeInfo;
      if ( !BattleFBXComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
        v79 = BattleFBXComponent_TypeInfo;
      }
      v80 = (UnityEngine_Object_o *)this->fields.animationComponent;
      animFps = v79->static_fields->animFps;
      v82 = animFps * this->fields.currentAnimTime;
      if ( v82 == INFINITY )
        v83 = 0x80000000;
      else
        v83 = (int)v82;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v80, 0LL, 0LL) )
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
        UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)wrapMode, (float)v83 / animFps, 0LL);
      }
      else
      {
        wrapMode = (__int64)this->fields.simpleAnimationComponent;
        if ( !wrapMode )
          goto LABEL_39;
        wrapMode = (__int64)SimpleAnimation__get_Item((SimpleAnimation_o *)wrapMode, this->fields.currentAnimName, 0LL);
        if ( !wrapMode )
          goto LABEL_39;
        v84 = *(_QWORD *)wrapMode;
        v85 = wrapMode;
        v86 = *(unsigned __int16 *)(*(_QWORD *)wrapMode + 302LL);
        *(float *)&v3 = (float)v83 / animFps;
        if ( *(_WORD *)(*(_QWORD *)wrapMode + 302LL) )
        {
          v87 = (SimpleAnimation_State_c **)(*(_QWORD *)(v84 + 176) + 8LL);
          while ( *(v87 - 1) != SimpleAnimation_State_TypeInfo )
          {
            --v86;
            v87 += 2;
            if ( !v86 )
              goto LABEL_182;
          }
          v88 = v84 + 16LL * (*(_DWORD *)v87 + 4) + 312;
        }
        else
        {
LABEL_182:
          v88 = sub_1BB60A8(wrapMode, SimpleAnimation_State_TypeInfo, 4LL);
        }
        (*(void (__fastcall **)(__int64, _QWORD, long double))v88)(v85, *(_QWORD *)(v88 + 8), v3);
      }
      this->fields.currentAnimTime = v8 + this->fields.currentAnimTime;
    }
  }
}


System_Collections_IEnumerator_o *__fastcall BattleFBXComponent__AnimationCheck(
        BattleFBXComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_49FE968 & 1) == 0 )
  {
    sub_1B640C8(&BattleFBXComponent__AnimationCheck_d__69_TypeInfo, method);
    byte_49FE968 = 1;
  }
  v4 = sub_1B64314(BattleFBXComponent__AnimationCheck_d__69_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  *(_DWORD *)(v4 + 16) = 0;
  *(_QWORD *)(v4 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v4 + 32), (int32_t)this, v5, v6);
  return (System_Collections_IEnumerator_o *)v4;
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
  Il2CppObject *Component_object; // x20
  int32_t ServantId; // w21
  int32_t LimitCount; // w2
  const MethodInfo *v8; // x3

  if ( (byte_49FE95C & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    byte_49FE95C = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
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
      BattleFBXComponent__SetEvolutionLevel(this, ServantId, LimitCount, v8);
      return;
    }
LABEL_10:
    sub_1B64324(gameObject);
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
  __int64 v16; // x1
  System_String_o *CommonAnimNames; // x23
  UnityEngine_Object_o *Manager__loadActorEffectFromActor; // x21
  bool v19; // w8
  Il2CppObject *v20; // x21
  bool v21; // w8
  Il2CppObject *v22; // x22
  int32_t v23; // w2
  int32_t v24; // w3
  UnityEngine_Transform_o *transform; // x23
  __int64 v26; // x1
  BattleFBXComponent_o *v27; // x23
  __int64 v28; // x1
  BattleFBXComponent_o *v29; // x23
  __int64 v30; // x1
  BattleFBXComponent_o *v31; // x23
  int32_t v32; // w2
  int32_t v33; // w3
  __int64 v34; // x8
  _QWORD *v35; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v37; // x8
  System_Collections_Generic_Dictionary_object__object__o *actorEffectDict; // x22
  System_String_o *name; // x0
  BattleFBXComponent_o *v40; // x20
  bool v41; // w8
  Il2CppObject *v42; // x1
  BattleFBXComponent_o *v43; // x19

  v8 = this;
  if ( (byte_49FE95E & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__GameObject__Add__, node);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__GameObject__ContainsKey__, v9);
    sub_1B640C8(&Method_UnityEngine_GameObject_AddComponent_ObjectScaleEnabler___, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__Add__, v11);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v12);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v13);
    sub_1B640C8(&ServantAssetLoadManager_TypeInfo, v14);
    this = (BattleFBXComponent_o *)sub_1B640C8(&StringLiteral_16455/*"_aDd"*/, v15);
    byte_49FE95E = 1;
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
    sub_1B6432C(this, v16);
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
            (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    v21 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v20, 0LL, 0LL);
    this = 0LL;
    if ( v21 )
    {
      if ( v20 )
      {
        v22 = UnityEngine_GameObject__AddComponent_object_(
                (UnityEngine_GameObject_o *)v20,
                (const MethodInfo_2E87DF0 *)Method_UnityEngine_GameObject_AddComponent_ObjectScaleEnabler___);
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v20, 0, 0LL);
        if ( v22 )
        {
          v22[2].klass = (Il2CppClass *)node;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&v22[2], (int32_t)node, v23, v24);
          transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v20, 0LL);
          this = (BattleFBXComponent_o *)UnityEngine_Transform__get_parent(node, 0LL);
          if ( this )
          {
            this = (BattleFBXComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
            if ( transform )
            {
              UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)this, 0LL);
              this = (BattleFBXComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v20, 0LL);
              v27 = this;
              if ( !byte_49F7111 )
              {
                this = (BattleFBXComponent_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v26);
                byte_49F7111 = 1;
              }
              if ( v27 )
              {
                UnityEngine_Transform__set_localPosition(
                  (UnityEngine_Transform_o *)v27,
                  UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
                  0LL);
                this = (BattleFBXComponent_o *)UnityEngine_GameObject__get_transform(
                                                 (UnityEngine_GameObject_o *)v20,
                                                 0LL);
                v29 = this;
                if ( !byte_49F7111 )
                {
                  this = (BattleFBXComponent_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v28);
                  byte_49F7111 = 1;
                }
                if ( v29 )
                {
                  UnityEngine_Transform__set_localEulerAngles(
                    (UnityEngine_Transform_o *)v29,
                    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
                    0LL);
                  this = (BattleFBXComponent_o *)UnityEngine_GameObject__get_transform(
                                                   (UnityEngine_GameObject_o *)v20,
                                                   0LL);
                  v31 = this;
                  if ( !byte_49F7116 )
                  {
                    this = (BattleFBXComponent_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v30);
                    byte_49F7116 = 1;
                  }
                  if ( v31 )
                  {
                    UnityEngine_Transform__set_localScale(
                      (UnityEngine_Transform_o *)v31,
                      UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
                      0LL);
                    ObjectScaleEnabler__OnUpdate((ObjectScaleEnabler_o *)v22, 0LL);
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v20, 1, 0LL);
                    this = (BattleFBXComponent_o *)v8->fields.PrefabNodes;
                    if ( this )
                    {
                      v34 = *(_QWORD *)&this->fields.m_CachedPtr;
                      v35 = Method_System_Collections_Generic_List_GameObject__Add__;
                      ++HIDWORD(this->fields.m_CancellationTokenSource);
                      if ( v34 )
                      {
                        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
                        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v34 + 24) )
                        {
                          System_Collections_Generic_List_object___AddWithResize(
                            (System_Collections_Generic_List_object__o *)this,
                            v20,
                            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
                        }
                        else
                        {
                          v37 = v34 + 8 * m_CancellationTokenSource_low;
                          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
                          *(_QWORD *)(v37 + 32) = v20;
                          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v37 + 32), (int32_t)v20, v32, v33);
                        }
                        actorEffectDict = (System_Collections_Generic_Dictionary_object__object__o *)v8->fields.actorEffectDict;
                        this = (BattleFBXComponent_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)node, 0LL);
                        if ( actorEffectDict )
                        {
                          if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                 actorEffectDict,
                                 (Il2CppObject *)this,
                                 (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__GameObject__ContainsKey__) )
                          {
                            name = UnityEngine_Object__get_name((UnityEngine_Object_o *)node, 0LL);
                            this = (BattleFBXComponent_o *)System_String__Concat_61375396(
                                                             name,
                                                             (System_String_o *)StringLiteral_16455/*"_aDd"*/,
                                                             0LL);
                            if ( v8->fields.actorEffectDict )
                            {
                              v40 = this;
                              v41 = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                      (System_Collections_Generic_Dictionary_object__object__o *)v8->fields.actorEffectDict,
                                      (Il2CppObject *)this,
                                      (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__GameObject__ContainsKey__);
                              this = (BattleFBXComponent_o *)v20;
                              if ( v41 )
                                return (UnityEngine_GameObject_o *)this;
                              this = (BattleFBXComponent_o *)v8->fields.actorEffectDict;
                              if ( this )
                              {
                                v42 = (Il2CppObject *)v40;
LABEL_41:
                                System_Collections_Generic_Dictionary_object__object___Add(
                                  (System_Collections_Generic_Dictionary_object__object__o *)this,
                                  v42,
                                  v20,
                                  (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__GameObject__Add__);
                                return (UnityEngine_GameObject_o *)v20;
                              }
                            }
                          }
                          else
                          {
                            v43 = (BattleFBXComponent_o *)v8->fields.actorEffectDict;
                            this = (BattleFBXComponent_o *)UnityEngine_Object__get_name(
                                                             (UnityEngine_Object_o *)node,
                                                             0LL);
                            if ( v43 )
                            {
                              v42 = (Il2CppObject *)this;
                              this = v43;
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
      sub_1B64324(this);
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
  struct System_Collections_Generic_List_GameObject__o *v11; // x8
  int32_t size; // w2
  int v13; // w9
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_49FE95B & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__Clear__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v6);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v7);
    byte_49FE95B = 1;
  }
  memset(&v14, 0, sizeof(v14));
  PrefabNodes = this->fields.PrefabNodes;
  if ( PrefabNodes )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v14,
      (System_Collections_Generic_List_object__o *)PrefabNodes,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v14,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v14.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69127736((UnityEngine_Object_o *)current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v14,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    v11 = this->fields.PrefabNodes;
    if ( !v11 )
      sub_1B64324(v10);
    size = v11->fields._size;
    v13 = v11->fields._version + 1;
    v11->fields._size = 0;
    v11->fields._version = v13;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v11->fields._items, 0, size, 0LL);
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
  Il2CppObject *current; // x20
  UnityEngine_Object_o *transform; // x0
  System_String_o *v13; // x0
  System_String_o *v14; // x21
  _DWORD *v15; // x22
  _BOOL8 v16; // x0
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_49FE96C & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, name);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1B640C8(&StringLiteral_732/*"(Clone)"*/, v8);
    byte_49FE96C = 1;
  }
  memset(&v19, 0, sizeof(v19));
  PrefabNodes = this->fields.PrefabNodes;
  if ( !PrefabNodes )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)PrefabNodes,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v19 = v18;
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    if ( !v10 )
      break;
    current = v19.fields._current;
    if ( !v19.fields._current )
      sub_1B64324(v10);
    transform = (UnityEngine_Object_o *)UnityEngine_GameObject__get_transform(
                                          (UnityEngine_GameObject_o *)v19.fields._current,
                                          0LL);
    if ( !transform )
      sub_1B64324(0LL);
    v13 = UnityEngine_Object__get_name(transform, 0LL);
    v14 = v13;
    if ( !v13 )
      sub_1B64324(0LL);
    v15 = StringLiteral_732/*"(Clone)"*/;
    v16 = System_String__EndsWith(v13, (System_String_o *)StringLiteral_732/*"(Clone)"*/, 0LL);
    if ( v16 )
    {
      if ( !v15 )
        sub_1B64324(v16);
      v14 = System_String__Substring_61394392(v14, 0, v14->fields._stringLength - v15[4], 0LL);
      if ( !v14 )
        sub_1B64324(0LL);
    }
    if ( System_String__Equals_61383712(v14, name, 0LL) )
      goto LABEL_15;
  }
  current = 0LL;
LABEL_15:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (UnityEngine_GameObject_o *)current;
}


System_String_o *__fastcall BattleFBXComponent__GetRealAnimName(
        BattleFBXComponent_o *this,
        System_String_o *targetName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *RealAnimNames; // x0
  struct System_Collections_Generic_Dictionary_string__string__o *v7; // x0

  if ( (byte_49FE977 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__, targetName);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__, v5);
    byte_49FE977 = 1;
  }
  RealAnimNames = this->fields.RealAnimNames;
  if ( !RealAnimNames
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)RealAnimNames,
          (Il2CppObject *)targetName,
          (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
  {
    return targetName;
  }
  v7 = this->fields.RealAnimNames;
  if ( !v7 )
    sub_1B64324(0LL);
  return (System_String_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                              (System_Collections_Generic_Dictionary_object__object__o *)v7,
                              (Il2CppObject *)targetName,
                              (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
}


void __fastcall BattleFBXComponent__InitAnimNameDict(BattleFBXComponent_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__string__o *RealAnimNames; // x0

  if ( (byte_49FE955 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__string__Clear__, method);
    byte_49FE955 = 1;
  }
  RealAnimNames = this->fields.RealAnimNames;
  if ( !RealAnimNames
    || (System_Collections_Generic_Dictionary_object__object___Clear(
          (System_Collections_Generic_Dictionary_object__object__o *)RealAnimNames,
          (const MethodInfo_3179580 *)Method_System_Collections_Generic_Dictionary_string__string__Clear__),
        (RealAnimNames = this->fields.CommonAnimNames) == 0LL) )
  {
    sub_1B64324(RealAnimNames);
  }
  System_Collections_Generic_Dictionary_object__object___Clear(
    (System_Collections_Generic_Dictionary_object__object__o *)RealAnimNames,
    (const MethodInfo_3179580 *)Method_System_Collections_Generic_Dictionary_string__string__Clear__);
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
  __int64 v13; // x1
  __int64 v14; // x8
  System_Collections_Generic_List_object__o *v15; // x21
  unsigned __int64 v16; // x29
  UnityEngine_Object_o *v17; // x23
  __int64 v18; // x2
  __int64 v19; // x22
  int32_t v20; // w2
  int32_t v21; // w3
  __int64 v22; // x1
  __int64 v23; // x2
  BattleFBXComponent_c *v24; // x0
  System_Object_array *yTransparenceShaderNames; // x23
  System_Func_object__bool__o *v26; // x24

  if ( (byte_49FE96F & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_Any_string____75709592, method);
    sub_1B640C8(&BattleFBXComponent_TypeInfo, v2);
    sub_1B640C8(&System_Func_string__bool__TypeInfo, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Renderer__get_Count__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Renderer__get_Item__, v5);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    sub_1B640C8(&Method_BattleFBXComponent___c__DisplayClass79_0__IsYTransparenceShader_b__0__, v7);
    sub_1B640C8(&BattleFBXComponent___c__DisplayClass79_0_TypeInfo, v8);
    byte_49FE96F = 1;
  }
  enableRendererList = (System_Collections_Generic_List_object__o *)this->fields.enableRendererList;
  if ( !enableRendererList )
LABEL_26:
    sub_1B64324(enableRendererList);
  v10 = 0;
  while ( 1 )
  {
    size = enableRendererList->fields._size;
    if ( v10 >= size )
      return v10 < size;
    Item = System_Collections_Generic_List_object___get_Item(
             enableRendererList,
             v10,
             (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_Renderer__get_Item__);
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
              sub_1B6432C(enableRendererList, v13);
            v17 = (UnityEngine_Object_o *)*((_QWORD *)&v15->fields._syncRoot + v16);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            enableRendererList = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Inequality(
                                                                                v17,
                                                                                0LL,
                                                                                0LL);
            if ( ((unsigned __int8)enableRendererList & 1) != 0 )
            {
              v19 = sub_1B64314(BattleFBXComponent___c__DisplayClass79_0_TypeInfo, v13, v18);
              System_Object___ctor((Il2CppObject *)v19, 0LL);
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
              if ( !v19 )
                goto LABEL_26;
              *(_QWORD *)(v19 + 16) = enableRendererList;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v19 + 16), (int32_t)enableRendererList, v20, v21);
              v24 = BattleFBXComponent_TypeInfo;
              if ( !BattleFBXComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
                v24 = BattleFBXComponent_TypeInfo;
              }
              yTransparenceShaderNames = (System_Object_array *)v24->static_fields->yTransparenceShaderNames;
              v26 = (System_Func_object__bool__o *)sub_1B64314(System_Func_string__bool__TypeInfo, v22, v23);
              System_Func_object__bool____ctor(
                v26,
                (Il2CppObject *)v19,
                Method_BattleFBXComponent___c__DisplayClass79_0__IsYTransparenceShader_b__0__,
                0LL);
              enableRendererList = (System_Collections_Generic_List_object__o *)BasicHelper__Any_object__48384284(
                                                                                  yTransparenceShaderNames,
                                                                                  (System_Func_T__bool__o *)v26,
                                                                                  (const MethodInfo_2E2491C *)Method_BasicHelper_Any_string____75709592);
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

  if ( (byte_49FE959 & 1) == 0 )
  {
    sub_1B640C8(&BattleFBXComponent_TypeInfo, ev);
    byte_49FE959 = 1;
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
        sub_1B64324(v5);
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, struct System_String_o *, _QWORD))OnEvent->fields.m_target)(
        OnEvent->fields.original_method_info,
        ev->fields.tag,
        *(_QWORD *)&OnEvent->fields.extra_arg);
    }
  }
}


void __fastcall BattleFBXComponent__OnAnimEvent_42387860(
        BattleFBXComponent_o *this,
        UnityEngine_AnimationEvent_o *ev,
        const MethodInfo *method)
{
  System_String_o *stringParameter; // x0
  __int64 v6; // x1
  struct BattleFBXComponent_onEventDelegate_o *OnEvent; // x8

  if ( (byte_49FE969 & 1) == 0 )
  {
    sub_1B640C8(&BattleFBXComponent_TypeInfo, ev);
    byte_49FE969 = 1;
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
      sub_1B6432C(stringParameter, v6);
    OnEvent = this->fields.OnEvent;
    if ( !OnEvent )
LABEL_13:
      sub_1B64324(stringParameter);
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

  if ( (byte_49FE96B & 1) == 0 )
  {
    sub_1B640C8(&HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo, method);
    sub_1B640C8(&StringLiteral_24501/*"wait"*/, v3);
    byte_49FE96B = 1;
  }
  animename = this->fields.animename;
  if ( animename )
  {
    if ( System_String__StartsWith(animename, (System_String_o *)StringLiteral_24501/*"wait"*/, 0LL) )
    {
      BattleFBXComponent__playAnimation(this, (System_String_o *)StringLiteral_24501/*"wait"*/, v5);
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
  SimpleAnimation_o *v6; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  UnityEngine_Object_o *animationComponent; // x20
  UnityEngine_Object_o *defAnimClip; // x21

  if ( (byte_49FE979 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FE979 = 1;
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
      v6 = this->fields.simpleAnimationComponent;
      if ( v6 )
      {
        SimpleAnimation__set_clip(v6, *p_defSimpleAnimClip, 0LL);
LABEL_19:
        *p_defSimpleAnimClip = 0LL;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)p_defSimpleAnimClip, 0, v7, v8);
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
      v6 = (SimpleAnimation_o *)this->fields.animationComponent;
      if ( v6 )
      {
        UnityEngine_Animation__set_clip((UnityEngine_Animation_o *)v6, *p_defSimpleAnimClip, 0LL);
        goto LABEL_19;
      }
LABEL_21:
      sub_1B64324(v6);
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
  __int128 v16; // [xsp+0h] [xbp-80h] BYREF
  __int128 v17; // [xsp+10h] [xbp-70h]
  __int128 v18; // [xsp+20h] [xbp-60h]

  if ( (byte_49FE972 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_KeyValuePair_string__Material___float__Clear__, method);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_KeyValuePair_string__Material___float__GetEnumerator__,
      v3);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_string__Material___float__Dispose__,
      v4);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_string__Material___float__MoveNext__,
      v5);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_string__Material___float__get_Current__,
      v6);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_KeyValuePair_string__Material___float__get_Key__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_string__Material__get_Key__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_KeyValuePair_string__Material___float__get_Value__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_string__Material__get_Value__, v10);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v11);
    byte_49FE972 = 1;
  }
  v17 = 0u;
  v18 = 0u;
  v16 = 0u;
  tempMaterialPropertyDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.tempMaterialPropertyDict;
  if ( !tempMaterialPropertyDict )
    goto LABEL_14;
  System_Collections_Generic_Dictionary_KeyValuePair_object__object___float___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v16,
    tempMaterialPropertyDict,
    (const MethodInfo_30E4F44 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_string__Material___float__GetEnumerator__);
  while ( System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_object__object___float___MoveNext(
            (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v16,
            (const MethodInfo_325EA78 *)Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_string__Material___float__MoveNext__) )
  {
    v13 = v17;
    v14 = *(float *)&v18;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality(*((UnityEngine_Object_o **)&v13 + 1), 0LL, 0LL);
    if ( v15 )
    {
      if ( !*((_QWORD *)&v13 + 1) )
        sub_1B64324(v15);
      UnityEngine_Material__SetFloat(*((UnityEngine_Material_o **)&v13 + 1), (System_String_o *)v13, v14, 0LL);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_object__object___float___Dispose(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v16,
    (const MethodInfo_325EBB4 *)Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_string__Material___float__Dispose__);
  tempMaterialPropertyDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.tempMaterialPropertyDict;
  if ( !tempMaterialPropertyDict )
LABEL_14:
    sub_1B64324(tempMaterialPropertyDict);
  System_Collections_Generic_Dictionary_KeyValuePair_object__object___float___Clear(
    tempMaterialPropertyDict,
    (const MethodInfo_30E4CB0 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_string__Material___float__Clear__);
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
  Il2CppObject *value; // x20
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v12; // [xsp+0h] [xbp-60h] BYREF

  v3 = isActive;
  if ( (byte_49FE976 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__GameObject__GetEnumerator__, isActive);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__GameObject__Dispose__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__GameObject__MoveNext__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__GameObject__get_Current__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_string__GameObject__get_Value__, v8);
    byte_49FE976 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  actorEffectDict = this->fields.actorEffectDict;
  if ( !actorEffectDict )
    sub_1B64324(0LL);
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v12,
    (System_Collections_Generic_Dictionary_object__object__o *)actorEffectDict,
    (const MethodInfo_3179828 *)Method_System_Collections_Generic_Dictionary_string__GameObject__GetEnumerator__);
  while ( 1 )
  {
    v10 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            &v12,
            (const MethodInfo_3275FB0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__GameObject__MoveNext__);
    if ( !v10 )
      break;
    value = v12.fields._current.fields.value;
    if ( !v12.fields._current.fields.value )
      sub_1B64324(v10);
    if ( ((UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)v12.fields._current.fields.value, 0LL) ^ v3) & 1) != 0 )
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)value, v3, 0LL);
  }
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v12,
    (const MethodInfo_32760D0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__GameObject__Dispose__);
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
  Il2CppObject *value; // x21
  _BOOL8 v14; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v15; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v16; // [xsp+30h] [xbp-60h] BYREF

  v4 = isActive;
  if ( (byte_49FE975 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__GameObject__GetEnumerator__, effectName);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__GameObject__Dispose__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__GameObject__MoveNext__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__GameObject__get_Current__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_string__GameObject__get_Key__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_string__GameObject__get_Value__, v11);
    byte_49FE975 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  actorEffectDict = this->fields.actorEffectDict;
  if ( !actorEffectDict )
    sub_1B64324(0LL);
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v15,
    (System_Collections_Generic_Dictionary_object__object__o *)actorEffectDict,
    (const MethodInfo_3179828 *)Method_System_Collections_Generic_Dictionary_string__GameObject__GetEnumerator__);
  v16 = v15;
  while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            &v16,
            (const MethodInfo_3275FB0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__GameObject__MoveNext__) )
  {
    if ( !v16.fields._current.fields.key )
      sub_1B64324(0LL);
    value = v16.fields._current.fields.value;
    v14 = System_String__Contains((System_String_o *)v16.fields._current.fields.key, effectName, 0LL);
    if ( v14 )
    {
      if ( !value )
        sub_1B64324(v14);
      if ( ((UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)value, 0LL) ^ v4) & 1) != 0 )
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)value, v4, 0LL);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v16,
    (const MethodInfo_32760D0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__GameObject__Dispose__);
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

  if ( (byte_49FE974 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__GameObject__ContainsKey__, nodeName);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__GameObject__get_Item__, v7);
    byte_49FE974 = 1;
  }
  actorEffectDict = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.actorEffectDict;
  if ( !actorEffectDict )
    goto LABEL_10;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          actorEffectDict,
          (Il2CppObject *)nodeName,
          (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__GameObject__ContainsKey__) )
    return;
  actorEffectDict = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.actorEffectDict;
  if ( !actorEffectDict
    || (actorEffectDict = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                       actorEffectDict,
                                                                                       (Il2CppObject *)nodeName,
                                                                                       (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__GameObject__get_Item__)) == 0LL )
  {
LABEL_10:
    sub_1B64324(actorEffectDict);
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

  if ( (byte_49FE96D & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, name);
    byte_49FE96D = 1;
  }
  PrefabNode = BattleFBXComponent__GetPrefabNode(this, name, (const MethodInfo *)isConnect);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)PrefabNode, 0LL, 0LL) )
    BattleFBXComponent__SetConnectPrefabNode_42390608(this, PrefabNode, isConnect, v8);
}


void __fastcall BattleFBXComponent__SetConnectPrefabNode_42390608(
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
  __int64 v13; // x1
  BattleFBXComponent_o *v14; // x21
  Il2CppObject *v15; // x20
  UnityEngine_Transform_o *transform; // x21
  Il2CppObject *v17; // x20

  v6 = (UnityEngine_Component_o *)this;
  if ( (byte_49FE96E & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_BattleActorControl___, obj);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v7);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_ObjectScaleEnabler___, v8);
    this = (BattleFBXComponent_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, v9);
    byte_49FE96E = 1;
  }
  if ( !obj )
    goto LABEL_29;
  if ( isConnect )
  {
    Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 obj,
                                                 (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_ObjectScaleEnabler___);
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
      v14 = this;
      if ( !byte_49F7116 )
      {
        this = (BattleFBXComponent_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v13);
        byte_49F7116 = 1;
      }
      if ( !v14 )
        goto LABEL_29;
      UnityEngine_Transform__set_localScale(
        (UnityEngine_Transform_o *)v14,
        UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
        0LL);
      v15 = UnityEngine_Component__GetComponent_object_(
              (UnityEngine_Component_o *)monitor,
              (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_BattleActorControl___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (BattleFBXComponent_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v15, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( v15 )
        {
          BattleActorControl__AddChildNodesRenderer((BattleActorControl_o *)v15, obj, 0LL);
          return;
        }
LABEL_29:
        sub_1B64324(this);
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
    v17 = UnityEngine_GameObject__GetComponent_object_(
            (UnityEngine_GameObject_o *)this,
            (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattleFBXComponent_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v17, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !v17 )
        goto LABEL_29;
      BattleActorControl__RemoveChildNodesRenderer((BattleActorControl_o *)v17, obj, 0LL);
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
    sub_1B64324(0LL);
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
  struct SimpleAnimation_o *v11; // x8
  UnityEngine_Object_o *monitor; // x21
  SimpleAnimation_State_o *Item; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v15; // x20
  __int64 v16; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 p_method; // x0
  UnityEngine_Object_o *animationComponent; // x21
  UnityEngine_Object_o *clip; // x21
  UnityEngine_TrackedReference_o *v21; // x20
  UnityEngine_Object_o *v22; // x21
  UnityEngine_Object_o *v23; // x22
  struct UnityEngine_AnimationClip_o *v24; // x0
  struct UnityEngine_AnimationClip_o **p_defAnimClip; // x19
  int32_t v26; // w2
  int32_t v27; // w3
  UnityEngine_Animation_o *v28; // x19
  struct SimpleAnimation_o *v29; // x8
  UnityEngine_Object_o *v30; // x21
  UnityEngine_Object_o *v31; // x22
  int32_t v32; // w2
  int32_t v33; // w3
  struct SimpleAnimation_o *v34; // x8
  struct UnityEngine_AnimationClip_o *v35; // x1
  struct UnityEngine_AnimationClip_o **p_defSimpleAnimClip; // x19
  SimpleAnimation_State_c *v37; // x8
  SimpleAnimation_o *v38; // x19
  __int64 v39; // x9
  SimpleAnimation_State_c **v40; // x10
  __int64 v41; // x0

  if ( (byte_49FE978 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, updateAnimName);
    sub_1B640C8(&SimpleAnimation_State_TypeInfo, v5);
    byte_49FE978 = 1;
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
    v11 = this->fields.simpleAnimationComponent;
    if ( !v11 )
      goto LABEL_50;
    monitor = (UnityEngine_Object_o *)v11[1].monitor;
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
        v15 = Item;
        v16 = *(unsigned __int16 *)(&Item->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&Item->klass->_2.bitflags2 + 3) )
        {
          p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
          while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            --v16;
            p_offset += 2;
            if ( !v16 )
              goto LABEL_17;
          }
          p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 14].method;
        }
        else
        {
LABEL_17:
          p_method = sub_1BB60A8(Item, SimpleAnimation_State_TypeInfo, 14LL);
        }
        v10 = (*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))p_method)(v15, *(_QWORD *)(p_method + 8));
        v29 = this->fields.simpleAnimationComponent;
        if ( !v29 )
          goto LABEL_50;
        v30 = (UnityEngine_Object_o *)v10;
        v31 = (UnityEngine_Object_o *)v29[1].monitor;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v10 = UnityEngine_Object__op_Inequality(v30, v31, 0LL);
        if ( (v10 & 1) != 0 )
        {
          v34 = this->fields.simpleAnimationComponent;
          if ( v34 )
          {
            v35 = (struct UnityEngine_AnimationClip_o *)v34[1].monitor;
            this->fields.defSimpleAnimClip = v35;
            p_defSimpleAnimClip = &this->fields.defSimpleAnimClip;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)p_defSimpleAnimClip, (int32_t)v35, v32, v33);
            v37 = v15->klass;
            v38 = (SimpleAnimation_o *)*(p_defSimpleAnimClip - 17);
            v39 = *(unsigned __int16 *)(&v15->klass->_2.bitflags2 + 3);
            if ( *(_WORD *)(&v15->klass->_2.bitflags2 + 3) )
            {
              v40 = (SimpleAnimation_State_c **)&v37->_1.interfaceOffsets->offset;
              while ( *(v40 - 1) != SimpleAnimation_State_TypeInfo )
              {
                --v39;
                v40 += 2;
                if ( !v39 )
                  goto LABEL_45;
              }
              v41 = (__int64)&v37->vtable[*(_DWORD *)v40 + 14].method;
            }
            else
            {
LABEL_45:
              v41 = sub_1BB60A8(v15, SimpleAnimation_State_TypeInfo, 14LL);
            }
            v10 = (*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v41)(v15, *(_QWORD *)(v41 + 8));
            if ( v38 )
            {
              SimpleAnimation__set_clip(v38, (UnityEngine_AnimationClip_o *)v10, 0LL);
              return;
            }
          }
LABEL_50:
          sub_1B64324(v10);
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
          v21 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                                    (UnityEngine_Animation_o *)v10,
                                                    v9,
                                                    0LL);
          v10 = UnityEngine_TrackedReference__op_Inequality(v21, 0LL, 0LL);
          if ( (v10 & 1) != 0 )
          {
            if ( !v21 )
              goto LABEL_50;
            v10 = (__int64)UnityEngine_AnimationState__get_clip((UnityEngine_AnimationState_o *)v21, 0LL);
            if ( !this->fields.animationComponent )
              goto LABEL_50;
            v22 = (UnityEngine_Object_o *)v10;
            v23 = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(this->fields.animationComponent, 0LL);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(v22, v23, 0LL) )
            {
              v10 = (__int64)this->fields.animationComponent;
              if ( v10 )
              {
                v24 = UnityEngine_Animation__get_clip((UnityEngine_Animation_o *)v10, 0LL);
                this->fields.defAnimClip = v24;
                p_defAnimClip = &this->fields.defAnimClip;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)p_defAnimClip, (int32_t)v24, v26, v27);
                v28 = (UnityEngine_Animation_o *)*(p_defAnimClip - 19);
                v10 = (__int64)UnityEngine_AnimationState__get_clip((UnityEngine_AnimationState_o *)v21, 0LL);
                if ( v28 )
                {
                  UnityEngine_Animation__set_clip(v28, (UnityEngine_AnimationClip_o *)v10, 0LL);
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
  const MethodInfo_34AD404 **v13; // x24
  UnityEngine_Object_c **v14; // x25
  Il2CppObject **v15; // x20
  const MethodInfo_30E4D1C **v16; // x27
  int32_t v17; // w21
  Il2CppObject *Item; // x22
  __int64 v19; // x1
  __int64 v20; // x8
  System_Collections_Generic_List_object__o *v21; // x22
  unsigned __int64 v22; // x29
  Il2CppObject **p_syncRoot; // x28
  UnityEngine_Object_o *v24; // x23
  const MethodInfo_33E4D90 *v25; // x4
  System_Collections_Generic_List_object__o *v26; // x21
  const MethodInfo_30E4D1C **v27; // x22
  Il2CppObject **v28; // x27
  UnityEngine_Object_c **v29; // x20
  const MethodInfo_34AD404 **v30; // x28
  System_String_o *v31; // x1
  BattleFBXComponent_o *v32; // x19
  System_Collections_Generic_Dictionary_TKey__TValue__o *tempMaterialPropertyDict; // x24
  Il2CppObject *key; // x25
  Il2CppObject *v35; // x26
  UnityEngine_Material_o *v36; // x0
  System_String_o *v37; // x23
  float Float; // s0
  Il2CppObject **v39; // [xsp+8h] [xbp-88h]
  System_Collections_Generic_KeyValuePair_object__object__o v40; // [xsp+10h] [xbp-80h] BYREF
  int32_t v41; // [xsp+2Ch] [xbp-64h]
  System_Collections_Generic_KeyValuePair_object__object__o v42; // 0:x0.16
  System_Collections_Generic_KeyValuePair_object__object__o v43; // 0:x1.16

  v4 = propertyName;
  if ( (byte_49FE971 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_KeyValuePair_string__Material___float__ContainsKey__,
      propertyName);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_KeyValuePair_string__Material___float__set_Item__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_string__Material___ctor__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_Renderer__get_Count__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_Renderer__get_Item__, v10);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v11);
    byte_49FE971 = 1;
  }
  v40.fields.key = 0LL;
  v40.fields.value = 0LL;
  enableRendererList = (System_Collections_Generic_List_object__o *)this->fields.enableRendererList;
  if ( !enableRendererList )
LABEL_29:
    sub_1B64324(enableRendererList);
  v13 = (const MethodInfo_34AD404 **)&Method_System_Collections_Generic_List_Renderer__get_Item__;
  v14 = &UnityEngine_Object_TypeInfo;
  v15 = (Il2CppObject **)&Method_System_Collections_Generic_KeyValuePair_string__Material___ctor__;
  v16 = (const MethodInfo_30E4D1C **)&Method_System_Collections_Generic_Dictionary_KeyValuePair_string__Material___float__ContainsKey__;
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
          v20 = *(_QWORD *)&enableRendererList->fields._size;
          v21 = enableRendererList;
          if ( (int)v20 >= 1 )
          {
            v22 = 0LL;
            p_syncRoot = &enableRendererList->fields._syncRoot;
            v41 = v17;
            v39 = &enableRendererList->fields._syncRoot;
            do
            {
              if ( v22 >= (unsigned int)v20 )
                sub_1B6432C(enableRendererList, v19);
              v24 = (UnityEngine_Object_o *)p_syncRoot[v22];
              if ( !(*v14)->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(*v14);
              enableRendererList = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Inequality(
                                                                                  v24,
                                                                                  0LL,
                                                                                  0LL);
              if ( ((unsigned __int8)enableRendererList & 1) != 0 )
              {
                if ( !v24 )
                  goto LABEL_29;
                enableRendererList = (System_Collections_Generic_List_object__o *)UnityEngine_Material__HasProperty_68994004(
                                                                                    (UnityEngine_Material_o *)v24,
                                                                                    v4,
                                                                                    0LL);
                if ( ((unsigned __int8)enableRendererList & 1) != 0 )
                {
                  v42.fields.key = (Il2CppObject *)&v40;
                  v42.fields.value = (Il2CppObject *)v4;
                  System_Collections_Generic_KeyValuePair_object__object____ctor(v42, (Il2CppObject *)v24, *v15, v25);
                  enableRendererList = (System_Collections_Generic_List_object__o *)this->fields.tempMaterialPropertyDict;
                  if ( !enableRendererList )
                    goto LABEL_29;
                  enableRendererList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_Dictionary_KeyValuePair_object__object___float___ContainsKey(
                                                                                      (System_Collections_Generic_Dictionary_TKey__TValue__o *)enableRendererList,
                                                                                      v40,
                                                                                      *v16);
                  if ( ((unsigned __int8)enableRendererList & 1) == 0 )
                  {
                    v26 = v21;
                    v27 = v16;
                    v28 = v15;
                    v29 = v14;
                    v30 = v13;
                    v31 = v4;
                    v32 = this;
                    tempMaterialPropertyDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.tempMaterialPropertyDict;
                    key = v40.fields.key;
                    v35 = v40.fields.value;
                    v36 = (UnityEngine_Material_o *)v24;
                    v37 = v31;
                    Float = UnityEngine_Material__GetFloat(v36, v31, 0LL);
                    if ( !tempMaterialPropertyDict )
                      goto LABEL_29;
                    v43.fields.key = key;
                    v43.fields.value = v35;
                    System_Collections_Generic_Dictionary_KeyValuePair_object__object___float___set_Item(
                      tempMaterialPropertyDict,
                      v43,
                      Float,
                      (const MethodInfo_30E4AFC *)Method_System_Collections_Generic_Dictionary_KeyValuePair_string__Material___float__set_Item__);
                    v13 = v30;
                    v14 = v29;
                    v15 = v28;
                    v16 = v27;
                    v21 = v26;
                    v17 = v41;
                    p_syncRoot = v39;
                    this = v32;
                    v4 = v37;
                  }
                }
              }
              LODWORD(v20) = v21->fields._size;
              ++v22;
            }
            while ( (__int64)v22 < (int)v20 );
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
  UnityEngine_Animation_o *v9; // x0
  UnityEngine_TrackedReference_o *Item; // x20
  UnityEngine_Object_o *simpleAnimationComponent; // x22
  SimpleAnimation_State_o *v12; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v14; // x20
  __int64 v15; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 p_method; // x0

  if ( (byte_49FE958 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, animName);
    sub_1B640C8(&SimpleAnimation_State_TypeInfo, v7);
    byte_49FE958 = 1;
  }
  BattleFBXComponent__setupAnimation(this, (const MethodInfo *)animName);
  animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(animationComponent, 0LL, 0LL) )
  {
    v9 = this->fields.animationComponent;
    if ( !v9 )
      goto LABEL_23;
    Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v9, animName, 0LL);
    v9 = (UnityEngine_Animation_o *)UnityEngine_TrackedReference__op_Inequality(Item, 0LL, 0LL);
    if ( ((unsigned __int8)v9 & 1) != 0 )
    {
      if ( Item )
      {
        UnityEngine_AnimationState__set_wrapMode((UnityEngine_AnimationState_o *)Item, wrapMode, 0LL);
        return;
      }
LABEL_23:
      sub_1B64324(v9);
    }
  }
  else
  {
    simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0LL, 0LL) )
    {
      v9 = (UnityEngine_Animation_o *)this->fields.simpleAnimationComponent;
      if ( !v9 )
        goto LABEL_23;
      v12 = SimpleAnimation__get_Item((SimpleAnimation_o *)v9, animName, 0LL);
      if ( v12 )
      {
        klass = v12->klass;
        v14 = v12;
        v15 = *(unsigned __int16 *)(&v12->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&v12->klass->_2.bitflags2 + 3) )
        {
          p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
          while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            --v15;
            p_offset += 2;
            if ( !v15 )
              goto LABEL_19;
          }
          p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 18].method;
        }
        else
        {
LABEL_19:
          p_method = sub_1BB60A8(v12, SimpleAnimation_State_TypeInfo, 18LL);
        }
        (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD, _QWORD))p_method)(
          v14,
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
  __int64 v12; // x1
  __int64 v13; // x8
  System_Collections_Generic_List_object__o *v14; // x22
  unsigned __int64 v15; // x26
  UnityEngine_Object_o *v16; // x23

  if ( (byte_49FE970 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Renderer__get_Count__, propertyName);
    sub_1B640C8(&Method_System_Collections_Generic_List_Renderer__get_Item__, v7);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v8);
    byte_49FE970 = 1;
  }
  enableRendererList = (System_Collections_Generic_List_object__o *)this->fields.enableRendererList;
  if ( !enableRendererList )
LABEL_26:
    sub_1B64324(enableRendererList);
  v10 = 0;
  while ( v10 < enableRendererList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             enableRendererList,
             v10,
             (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_Renderer__get_Item__);
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
                                                                          (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_Renderer__get_Item__);
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
                                                                            (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_Renderer__get_Item__);
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
              sub_1B6432C(enableRendererList, v12);
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
              enableRendererList = (System_Collections_Generic_List_object__o *)UnityEngine_Material__HasProperty_68994004(
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
  Il2CppObject *Component_object; // x0
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_49FE956 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_BillBoard___, method);
    byte_49FE956 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B64324(0LL);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_BillBoard___);
  this->fields.billBoard = (struct BillBoard_o *)Component_object;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.billBoard, (int32_t)Component_object, v5, v6);
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
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_49FE95F & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_XWeaponTrail__Dispose__, active);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_XWeaponTrail__MoveNext__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_XWeaponTrail__get_Current__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_XWeaponTrail__GetEnumerator__, v7);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v8);
    byte_49FE95F = 1;
  }
  memset(&v13, 0, sizeof(v13));
  componentsXWeaponTrail = (System_Collections_Generic_List_object__o *)this->fields.componentsXWeaponTrail;
  if ( !componentsXWeaponTrail )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    componentsXWeaponTrail,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_XWeaponTrail__GetEnumerator__);
  v13 = v12;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v13,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_XWeaponTrail__MoveNext__) )
  {
    current = v13.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v11 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( !v11 )
    {
      if ( active )
      {
        if ( !current )
          sub_1B64324(v11);
        XWeaponTrail__Activate((XWeaponTrail_o *)current, 0LL);
      }
      else
      {
        if ( !current )
          sub_1B64324(v11);
        XWeaponTrail__Deactivate((XWeaponTrail_o *)current, 0LL);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_XWeaponTrail__Dispose__);
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
  if ( (byte_49FE963 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__, filename);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__, v5);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    byte_49FE963 = 1;
  }
  RealAnimNames = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.RealAnimNames;
  if ( !RealAnimNames )
    goto LABEL_18;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         RealAnimNames,
         Item,
         (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
  {
    RealAnimNames = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.RealAnimNames;
    if ( !RealAnimNames )
      goto LABEL_18;
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             RealAnimNames,
             Item,
             (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
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
    sub_1B64324(RealAnimNames);
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
  UnityEngine_Animation_o *v7; // x0
  UnityEngine_TrackedReference_o *Item; // x0
  UnityEngine_Object_o *simpleAnimationComponent; // x20
  UnityEngine_Animation_c *klass; // x8
  UnityEngine_Animation_o *v12; // x19
  __int64 v13; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v15; // x0

  if ( (byte_49FE95A & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    sub_1B640C8(&SimpleAnimation_State_TypeInfo, v3);
    sub_1B640C8(&StringLiteral_1/*""*/, v4);
    byte_49FE95A = 1;
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
    v7 = this->fields.animationComponent;
    if ( !v7 )
      goto LABEL_31;
    Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v7, this->fields.currentAnimName, 0LL);
    if ( UnityEngine_TrackedReference__op_Inequality(Item, 0LL, 0LL) )
    {
      v7 = this->fields.animationComponent;
      if ( v7 )
      {
        v7 = (UnityEngine_Animation_o *)UnityEngine_Animation__get_Item(v7, this->fields.currentAnimName, 0LL);
        if ( v7 )
          return UnityEngine_AnimationState__get_length((UnityEngine_AnimationState_o *)v7, 0LL);
      }
LABEL_31:
      sub_1B64324(v7);
    }
  }
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0LL, 0LL) )
    return 0.0;
  v7 = (UnityEngine_Animation_o *)this->fields.simpleAnimationComponent;
  if ( !v7 )
    goto LABEL_31;
  if ( !SimpleAnimation__get_Item((SimpleAnimation_o *)v7, this->fields.currentAnimName, 0LL) )
    return 0.0;
  v7 = (UnityEngine_Animation_o *)this->fields.simpleAnimationComponent;
  if ( !v7 )
    goto LABEL_31;
  v7 = (UnityEngine_Animation_o *)SimpleAnimation__get_Item((SimpleAnimation_o *)v7, this->fields.currentAnimName, 0LL);
  if ( !v7 )
    goto LABEL_31;
  klass = v7->klass;
  v12 = v7;
  v13 = *(unsigned __int16 *)(&v7->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v7->klass->_2.bitflags2 + 3) )
  {
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v13;
      p_offset += 2;
      if ( !v13 )
        goto LABEL_26;
    }
    v15 = (__int64)(&klass[1]._1.methods + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_26:
    v15 = sub_1BB60A8(v7, SimpleAnimation_State_TypeInfo, 14LL);
  }
  v7 = (UnityEngine_Animation_o *)(*(__int64 (__fastcall **)(UnityEngine_Animation_o *, _QWORD))v15)(
                                    v12,
                                    *(_QWORD *)(v15 + 8));
  if ( !v7 )
    goto LABEL_31;
  return UnityEngine_AnimationClip__get_length((UnityEngine_AnimationClip_o *)v7, 0LL);
}


System_String_o *__fastcall BattleFBXComponent__getRealAnimationName(
        BattleFBXComponent_o *this,
        System_String_o *animationName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *RealAnimNames; // x0
  struct System_Collections_Generic_Dictionary_string__string__o *v8; // x0

  if ( (byte_49FE973 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__, animationName);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__, v5);
    sub_1B640C8(&string_TypeInfo, v6);
    byte_49FE973 = 1;
  }
  RealAnimNames = this->fields.RealAnimNames;
  if ( !RealAnimNames
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)RealAnimNames,
          (Il2CppObject *)animationName,
          (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
  {
    return string_TypeInfo->static_fields->Empty;
  }
  v8 = this->fields.RealAnimNames;
  if ( !v8 )
    sub_1B64324(0LL);
  return (System_String_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                              (System_Collections_Generic_Dictionary_object__object__o *)v8,
                              (Il2CppObject *)animationName,
                              (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
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
  System_Collections_Generic_Dictionary_object__object__o *Index; // x0
  __int64 v11; // x1
  float v12; // s8
  struct BattleFBXComponent_AnimEvent_array_array *eventlist; // x8
  BattleFBXComponent_AnimEvent_array *v14; // x20
  __int64 v15; // x8
  __int64 i; // x21
  BattleFBXComponent_AnimEvent_o *v17; // x23

  Item = (Il2CppObject *)animname;
  if ( (byte_49FE966 & 1) == 0 )
  {
    sub_1B640C8(&AnimationList_TypeInfo, animname);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__, v8);
    byte_49FE966 = 1;
  }
  CommonAnimNames = this->fields.CommonAnimNames;
  if ( CommonAnimNames
    && System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)CommonAnimNames,
         Item,
         (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
  {
    Index = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.CommonAnimNames;
    if ( !Index )
      goto LABEL_25;
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             Index,
             Item,
             (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
  }
  if ( !AnimationList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AnimationList_TypeInfo);
  Index = (System_Collections_Generic_Dictionary_object__object__o *)AnimationList__getIndex(
                                                                       (System_String_o *)Item,
                                                                       0LL);
  v12 = 0.0;
  if ( ((unsigned int)Index & 0x80000000) != 0 )
    return v12;
  eventlist = this->fields.eventlist;
  if ( !eventlist )
LABEL_25:
    sub_1B64324(Index);
  if ( (unsigned int)Index >= eventlist->max_length )
LABEL_24:
    sub_1B6432C(Index, v11);
  v14 = eventlist->m_Items[(unsigned int)Index];
  if ( v14 )
  {
    v15 = *(_QWORD *)&v14->max_length;
    if ( (int)v15 >= 1 )
    {
      for ( i = 0LL; (int)i < (int)v15; ++i )
      {
        if ( (unsigned int)i >= (unsigned int)v15 )
          goto LABEL_24;
        v17 = v14->m_Items[i];
        if ( !v17 )
          goto LABEL_25;
        Index = (System_Collections_Generic_Dictionary_object__object__o *)v17->fields.tag;
        if ( Index )
        {
          Index = (System_Collections_Generic_Dictionary_object__object__o *)System_String__Equals_61383712(
                                                                               (System_String_o *)Index,
                                                                               tag,
                                                                               0LL);
          if ( ((unsigned __int8)Index & 1) != 0 )
            return v17->fields.time;
          v15 = *(_QWORD *)&v14->max_length;
        }
      }
    }
  }
  return v12;
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
  __int64 v46; // x1
  __int64 v47; // x2
  System_Collections_Generic_List_object__o *v48; // x20
  int32_t v49; // w2
  int32_t v50; // w3
  __int64 v51; // x1
  __int64 v52; // x2
  System_Collections_Generic_List_object__o *v53; // x20
  struct System_Collections_Generic_List_XWeaponTrail__o **p_componentsXWeaponTrail; // x26
  int32_t v55; // w2
  int32_t v56; // w3
  struct System_Collections_Generic_List_Renderer__o *enableRendererList; // x8
  int32_t size; // w2
  int v59; // w9
  System_Object_array *ComponentsInChildren_object; // x0
  __int64 v61; // x1
  __int64 v62; // x2
  BattleFBXComponent___c_c *v63; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v64; // x25
  System_Func_object__bool__o *_9__56_0; // x20
  Il2CppObject *v66; // x21
  struct BattleFBXComponent___c_StaticFields *static_fields; // x0
  int32_t v68; // w2
  int32_t v69; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v70; // x20
  int32_t LimitImageIndex; // w27
  __int64 v72; // x1
  __int64 v73; // x2
  System_Collections_Generic_Dictionary_object__object__o *v74; // x19
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  __int64 v76; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v79; // x0
  __int64 v80; // x23
  __int64 v81; // x8
  __int64 v82; // x9
  int *v83; // x10
  __int64 v84; // x0
  __int64 v85; // x8
  __int64 v86; // x9
  int *v87; // x10
  __int64 v88; // x0
  UnityEngine_Object_o *v89; // x0
  UnityEngine_Component_o *v90; // x28
  System_String_o *name; // x20
  BattleFBXComponent_c *v92; // x0
  UnityEngine_GameObject_o *v93; // x0
  Il2CppObject *Component_object; // x20
  UnityEngine_Transform_o *transform; // x0
  float v96; // s0
  float v97; // s1
  float v98; // s2
  System_String_o *v99; // x20
  System_String_o *v100; // x21
  BattleFBXComponent_c *v101; // x0
  __int64 v102; // x0
  Il2CppObject *v103; // x29
  System_String_o *v104; // x0
  int32_t v105; // w20
  System_String_o *v106; // x0
  System_String_o *v107; // x0
  System_String_o *v108; // x20
  int32_t v109; // w2
  System_String_array *v110; // x0
  __int64 v111; // x1
  System_String_array *v112; // x20
  __int64 v113; // x8
  unsigned __int64 v114; // x22
  System_String_o *v115; // x21
  bool v116; // w21
  UnityEngine_Object_o *PrefabNode; // x20
  System_String_o *v118; // x20
  BattleFBXComponent_c *v119; // x0
  const MethodInfo *v120; // x4
  System_String_o *v121; // x20
  BattleFBXComponent_c *v122; // x0
  UnityEngine_GameObject_o *v123; // x0
  Il2CppObject *v124; // x22
  _BOOL8 v125; // x0
  System_String_o *v126; // x0
  UnityEngine_Transform_o *v127; // x22
  UnityEngine_Transform_o *v128; // x0
  float v129; // s8
  UnityEngine_Transform_o *v130; // x0
  float y; // s9
  UnityEngine_Transform_o *v132; // x0
  __int64 v133; // x0
  int v134; // s2
  float v135; // s0
  float v136; // s1
  UnityEngine_Transform_o *v137; // x0
  _BOOL8 v138; // x0
  System_Object_array *ComponentsInChildren_object__48794364; // x0
  __int64 v140; // x1
  int32_t v141; // w2
  int32_t v142; // w3
  System_Object_array *v143; // x20
  __int64 v144; // x8
  unsigned __int64 v145; // x22
  System_Collections_Generic_List_object__o *v146; // x0
  Il2CppObject *v147; // x1
  struct System_Object_array *items; // x8
  _QWORD *v149; // x9
  __int64 v150; // x10
  Il2CppClass **v151; // x8
  Il2CppObject *v152; // x20
  UnityEngine_GameObject_o *v153; // x22
  __int64 v154; // x0
  int32_t v155; // w2
  int32_t v156; // w3
  System_Collections_Generic_List_object__o *monitor; // x0
  struct System_Object_array *v158; // x8
  _QWORD *v159; // x9
  __int64 v160; // x10
  Il2CppClass **v161; // x8
  __int64 v162; // x0
  __int64 v163; // x8
  __int64 v164; // x9
  int *v165; // x10
  __int64 v166; // x0
  __int64 v167; // x1
  int32_t v168; // w2
  int32_t v169; // w3
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *entries; // x8
  System_Collections_Generic_Dictionary_object__object__o *v171; // x20
  unsigned __int64 v172; // x19
  Il2CppObject *v173; // x1
  struct System_Int32_array *buckets; // x8
  _QWORD *v175; // x9
  __int64 entries_low; // x10
  __int64 v177; // x8
  __int64 v178; // x2
  int32_t v179; // w3
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *v180; // x8
  System_Collections_Generic_Dictionary_object__object__o *v181; // x20
  unsigned __int64 v182; // x19
  Il2CppObject *v183; // x1
  struct System_Int32_array *v184; // x8
  _QWORD *v185; // x9
  __int64 v186; // x10
  __int64 v187; // x8
  BattleFBXComponent___c_c *v188; // x0
  System_Func_object__bool__o *_9__56_1; // x19
  Il2CppObject *v190; // x20
  struct BattleFBXComponent___c_StaticFields *v191; // x0
  int32_t v192; // w2
  int32_t v193; // w3
  System_Collections_Generic_Dictionary_object__object__c *v194; // x8
  System_Collections_Generic_Dictionary_object__object__o *v195; // x19
  __int64 v196; // x9
  int *v197; // x10
  __int64 v198; // x0
  __int64 v199; // x19
  __int64 v200; // x8
  __int64 v201; // x9
  int *v202; // x10
  __int64 v203; // x0
  __int64 v204; // x8
  __int64 v205; // x9
  int *v206; // x10
  __int64 v207; // x0
  UnityEngine_Object_o *v208; // x0
  UnityEngine_Transform_o *v209; // x20
  System_String_o *v210; // x21
  BattleFBXComponent_c *v211; // x0
  struct System_String_o *enItemMarker; // x8
  System_String_o *v213; // x22
  UnityEngine_Transform_o *parent; // x21
  System_String_o *v215; // x0
  UnityEngine_Object_o *v216; // x21
  UnityEngine_GameObject_o *v217; // x0
  Il2CppObject *v218; // x0
  int32_t v219; // w2
  int32_t v220; // w3
  Il2CppObject *v221; // x20
  __int64 v222; // x8
  __int64 v223; // x9
  int *v224; // x10
  __int64 v225; // x0
  char v226; // [xsp+24h] [xbp-CCh]
  UnityEngine_Component_o *v229; // [xsp+30h] [xbp-C0h]
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v230; // [xsp+38h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o i; // [xsp+50h] [xbp-A0h] BYREF
  int32_t result; // [xsp+6Ch] [xbp-84h] BYREF
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FE95D & 1) == 0 )
  {
    sub_1B640C8(&BattleFBXComponent_TypeInfo, gameObject);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_SkinnedMeshRenderer___, v7);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__GameObject__Clear__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__SkinnedMeshRenderer___ctor__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__SkinnedMeshRenderer__get_Values__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__SkinnedMeshRenderer__set_Item__, v11);
    sub_1B640C8(&System_Collections_Generic_Dictionary_string__SkinnedMeshRenderer__TypeInfo, v12);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_Transform___, v13);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__SkinnedMeshRenderer__Dispose__,
      v14);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__SkinnedMeshRenderer__MoveNext__,
      v15);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__SkinnedMeshRenderer__get_Current__,
      v16);
    sub_1B640C8(&System_Func_Transform__bool__TypeInfo, v17);
    sub_1B640C8(&Method_UnityEngine_GameObject_AddComponent_LookAtTarget___, v18);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v19);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponentsInChildren_MeshRenderer___, v20);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystemRenderer___, v21);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponentsInChildren_Transform____75773688, v22);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponentsInChildren_XWeaponTrail___, v23);
    sub_1B640C8(&System_IDisposable_TypeInfo, v24);
    sub_1B640C8(&System_Collections_Generic_IEnumerable_Transform__TypeInfo, v25);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_Transform__TypeInfo, v26);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v27);
    sub_1B640C8(&Method_System_Collections_Generic_List_Renderer__Add__, v28);
    sub_1B640C8(&Method_System_Collections_Generic_List_XWeaponTrail__Add__, v29);
    sub_1B640C8(&Method_System_Collections_Generic_List_Renderer__Clear__, v30);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject___ctor__, v31);
    sub_1B640C8(&Method_System_Collections_Generic_List_XWeaponTrail___ctor__, v32);
    sub_1B640C8(&System_Collections_Generic_List_XWeaponTrail__TypeInfo, v33);
    sub_1B640C8(&System_Collections_Generic_List_GameObject__TypeInfo, v34);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v35);
    sub_1B640C8(&ServantAssetLoadManager_TypeInfo, v36);
    sub_1B640C8(&Method_BattleFBXComponent___c__inSetEvolutionLevel_b__56_0__, v37);
    sub_1B640C8(&Method_BattleFBXComponent___c__inSetEvolutionLevel_b__56_1__, v38);
    sub_1B640C8(&BattleFBXComponent___c_TypeInfo, v39);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_string__SkinnedMeshRenderer__GetEnumerator__,
      v40);
    sub_1B640C8(&StringLiteral_117/*" "*/, v41);
    sub_1B640C8(&StringLiteral_23330/*"spiral"*/, v42);
    sub_1B640C8(&StringLiteral_3206/*"Battle2D"*/, v43);
    byte_49FE95D = 1;
  }
  result = 0;
  memset(&i, 0, sizeof(i));
  actorEffectDict = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.actorEffectDict;
  if ( !actorEffectDict )
    goto LABEL_209;
  System_Collections_Generic_Dictionary_object__object___Clear(
    actorEffectDict,
    (const MethodInfo_3179580 *)Method_System_Collections_Generic_Dictionary_string__GameObject__Clear__);
  BattleFBXComponent__DestroyPrefabNode(this, v45);
  v48 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_GameObject__TypeInfo,
                                                       v46,
                                                       v47);
  System_Collections_Generic_List_object____ctor(
    v48,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.PrefabNodes = (struct System_Collections_Generic_List_GameObject__o *)v48;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.PrefabNodes, (int32_t)v48, v49, v50);
  v53 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_XWeaponTrail__TypeInfo,
                                                       v51,
                                                       v52);
  System_Collections_Generic_List_object____ctor(
    v53,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_XWeaponTrail___ctor__);
  this->fields.componentsXWeaponTrail = (struct System_Collections_Generic_List_XWeaponTrail__o *)v53;
  p_componentsXWeaponTrail = &this->fields.componentsXWeaponTrail;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.componentsXWeaponTrail, (int32_t)v53, v55, v56);
  enableRendererList = this->fields.enableRendererList;
  if ( !enableRendererList )
    goto LABEL_209;
  size = enableRendererList->fields._size;
  v59 = enableRendererList->fields._version + 1;
  enableRendererList->fields._size = 0;
  enableRendererList->fields._version = v59;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)enableRendererList->fields._items, 0, size, 0LL);
  if ( !gameObject )
    goto LABEL_209;
  ComponentsInChildren_object = UnityEngine_GameObject__GetComponentsInChildren_object_(
                                  gameObject,
                                  1,
                                  (const MethodInfo_2E88B78 *)Method_UnityEngine_GameObject_GetComponentsInChildren_Transform____75773688);
  v63 = BattleFBXComponent___c_TypeInfo;
  v64 = (System_Collections_Generic_IEnumerable_TSource__o *)ComponentsInChildren_object;
  if ( !BattleFBXComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFBXComponent___c_TypeInfo);
    v63 = BattleFBXComponent___c_TypeInfo;
  }
  _9__56_0 = (System_Func_object__bool__o *)v63->static_fields->__9__56_0;
  if ( !_9__56_0 )
  {
    if ( !v63->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v63);
      v63 = BattleFBXComponent___c_TypeInfo;
    }
    v66 = (Il2CppObject *)v63->static_fields->__9;
    _9__56_0 = (System_Func_object__bool__o *)sub_1B64314(System_Func_Transform__bool__TypeInfo, v61, v62);
    System_Func_object__bool____ctor(_9__56_0, v66, Method_BattleFBXComponent___c__inSetEvolutionLevel_b__56_0__, 0LL);
    static_fields = BattleFBXComponent___c_TypeInfo->static_fields;
    static_fields->__9__56_0 = (struct System_Func_Transform__bool__o *)_9__56_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__56_0, (int32_t)_9__56_0, v68, v69);
  }
  v70 = System_Linq_Enumerable__Where_object_(
          v64,
          (System_Func_TSource__bool__o *)_9__56_0,
          (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_Transform___);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  LimitImageIndex = ServantAssetLoadManager__GetLimitImageIndex(svtId, limitcount, 1, 0LL);
  v74 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B64314(
                                                                     System_Collections_Generic_Dictionary_string__SkinnedMeshRenderer__TypeInfo,
                                                                     v72,
                                                                     v73);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v74,
    (const MethodInfo_3178A48 *)Method_System_Collections_Generic_Dictionary_string__SkinnedMeshRenderer___ctor__);
  if ( !v70 )
    goto LABEL_209;
  klass = v70->klass;
  v229 = (UnityEngine_Component_o *)this;
  v76 = *(unsigned __int16 *)(&v70->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v70->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_Transform__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_Transform__TypeInfo )
    {
      --v76;
      p_offset += 4;
      if ( !v76 )
        goto LABEL_21;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_21:
    p_method = sub_1BB60A8(v70, System_Collections_Generic_IEnumerable_Transform__TypeInfo, 0LL);
  }
  v79 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
          v70,
          *(_QWORD *)(p_method + 8));
  v80 = v79;
  v226 = 1;
  while ( 1 )
  {
    if ( !v80 )
      sub_1B64324(v79);
    v81 = *(_QWORD *)v80;
    v82 = *(unsigned __int16 *)(*(_QWORD *)v80 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v80 + 302LL) )
    {
      v83 = (int *)(*(_QWORD *)(v81 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v83 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v82;
        v83 += 4;
        if ( !v82 )
          goto LABEL_29;
      }
      v84 = v81 + 16LL * *v83 + 312;
    }
    else
    {
LABEL_29:
      v84 = sub_1BB60A8(v80, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v84)(v80, *(_QWORD *)(v84 + 8)) & 1) == 0 )
      break;
    v85 = *(_QWORD *)v80;
    v86 = *(unsigned __int16 *)(*(_QWORD *)v80 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v80 + 302LL) )
    {
      v87 = (int *)(*(_QWORD *)(v85 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_Transform__c **)v87 - 1) != System_Collections_Generic_IEnumerator_Transform__TypeInfo )
      {
        --v86;
        v87 += 4;
        if ( !v86 )
          goto LABEL_36;
      }
      v88 = v85 + 16LL * *v87 + 312;
    }
    else
    {
LABEL_36:
      v88 = sub_1BB60A8(v80, System_Collections_Generic_IEnumerator_Transform__TypeInfo, 0LL);
    }
    v89 = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v88)(v80, *(_QWORD *)(v88 + 8));
    v90 = (UnityEngine_Component_o *)v89;
    if ( !v89 )
      sub_1B64324(0LL);
    name = UnityEngine_Object__get_name(v89, 0LL);
    v92 = BattleFBXComponent_TypeInfo;
    if ( !BattleFBXComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
    if ( !name )
      sub_1B64324(v92);
    if ( System_String__StartsWith(name, BattleFBXComponent_TypeInfo->static_fields->sideflipMarker, 0LL) )
    {
      v93 = UnityEngine_Component__get_gameObject(v229, 0LL);
      if ( !v93 )
        sub_1B64324(0LL);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           v93,
                           (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v79 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
      if ( (v79 & 1) != 0 )
      {
        transform = UnityEngine_Component__get_transform(v90, 0LL);
        if ( !Component_object )
          sub_1B64324(transform);
        if ( !transform )
          sub_1B64324(0LL);
        if ( LOBYTE(Component_object[30].klass) )
          v96 = -1.0;
        else
          v96 = 1.0;
        v97 = 1.0;
        v98 = 1.0;
        UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v96, 0LL);
      }
    }
    else
    {
      v99 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v90, 0LL);
      v100 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v90, 0LL);
      v101 = BattleFBXComponent_TypeInfo;
      if ( !BattleFBXComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
      if ( !v100 )
        sub_1B64324(v101);
      v102 = System_String__IndexOf_61406964(v100, BattleFBXComponent_TypeInfo->static_fields->levelMarker, 0LL);
      if ( !v99 )
        sub_1B64324(v102);
      v103 = (Il2CppObject *)System_String__Substring_61394392(v99, 0, v102, 0LL);
      v104 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v90, 0LL);
      if ( !v104 )
        sub_1B64324(0LL);
      v105 = System_String__IndexOf_61406964(v104, BattleFBXComponent_TypeInfo->static_fields->levelMarker, 0LL);
      v106 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v90, 0LL);
      if ( !v106 )
        sub_1B64324(0LL);
      v107 = System_String__Substring(v106, v105 + 7, 0LL);
      v108 = v107;
      if ( !v107 )
        sub_1B64324(0LL);
      if ( (System_String__IndexOf_61406964(v107, (System_String_o *)StringLiteral_117/*" "*/, 0LL) & 0x80000000) == 0 )
      {
        v109 = System_String__IndexOf_61406964(v108, (System_String_o *)StringLiteral_117/*" "*/, 0LL);
        v108 = System_String__Substring_61394392(v108, 0, v109, 0LL);
        if ( !v108 )
          sub_1B64324(0LL);
      }
      v110 = System_String__Split(v108, 0x5Fu, 0, 0LL);
      v112 = v110;
      if ( !v110 )
        sub_1B64324(0LL);
      v113 = *(_QWORD *)&v110->max_length;
      if ( (int)v113 < 1 )
      {
LABEL_69:
        v116 = 0;
        PrefabNode = 0LL;
      }
      else
      {
        v114 = 0LL;
        while ( 1 )
        {
          if ( v114 >= (unsigned int)v113 )
            sub_1B6432C(v110, v111);
          v115 = v112->m_Items[v114];
          result = 99;
          v110 = (System_String_array *)System_Int32__TryParse(v115, &result, 0LL);
          if ( ((unsigned __int8)v110 & 1) != 0 )
          {
            v110 = (System_String_array *)System_Int32__Parse(v115, 0LL);
            if ( (_DWORD)v110 == LimitImageIndex )
              break;
          }
          LODWORD(v113) = v112->max_length;
          if ( (__int64)++v114 >= (int)v113 )
            goto LABEL_69;
        }
        v118 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v90, 0LL);
        v119 = BattleFBXComponent_TypeInfo;
        if ( !BattleFBXComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
        if ( !v118 )
          sub_1B64324(v119);
        if ( System_String__StartsWith(v118, BattleFBXComponent_TypeInfo->static_fields->prefabMarker, 0LL) )
          goto LABEL_78;
        v121 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v90, 0LL);
        v122 = BattleFBXComponent_TypeInfo;
        if ( !BattleFBXComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
        if ( !v121 )
          sub_1B64324(v122);
        if ( System_String__StartsWith(v121, BattleFBXComponent_TypeInfo->static_fields->chrnodeMarker, 0LL) )
LABEL_78:
          PrefabNode = (UnityEngine_Object_o *)BattleFBXComponent__CreatePrefabNode(
                                                 (BattleFBXComponent_o *)v229,
                                                 (UnityEngine_Transform_o *)v90,
                                                 svtId,
                                                 limitcount,
                                                 v120);
        else
          PrefabNode = 0LL;
        v116 = 1;
      }
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(PrefabNode, 0LL, 0LL) )
      {
        v123 = UnityEngine_Component__get_gameObject(v229, 0LL);
        if ( !v123 )
          sub_1B64324(0LL);
        v124 = UnityEngine_GameObject__GetComponent_object_(
                 v123,
                 (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v125 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v124, 0LL, 0LL);
        if ( v125 )
        {
          if ( !v124 )
            sub_1B64324(v125);
          if ( LOBYTE(v124[30].klass) )
          {
            if ( !PrefabNode )
              sub_1B64324(v125);
            v126 = UnityEngine_Object__get_name(PrefabNode, 0LL);
            if ( !v126 )
              sub_1B64324(0LL);
            if ( (System_String__IndexOf_61406964(v126, (System_String_o *)StringLiteral_23330/*"spiral"*/, 0LL) & 0x80000000) == 0 )
            {
              v127 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)PrefabNode, 0LL);
              v128 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)PrefabNode, 0LL);
              if ( !v128 )
                sub_1B64324(0LL);
              LODWORD(v129) = (unsigned int)UnityEngine_Transform__get_localScale(v128, 0LL);
              v130 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)PrefabNode, 0LL);
              if ( !v130 )
                sub_1B64324(0LL);
              localScale = UnityEngine_Transform__get_localScale(v130, 0LL);
              y = localScale.fields.y;
              v132 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)PrefabNode, 0LL);
              if ( !v132 )
                sub_1B64324(0LL);
              *(UnityEngine_Vector3_o *)(&v134 - 2) = UnityEngine_Transform__get_localScale(v132, 0LL);
              if ( !v127 )
                sub_1B64324(v133);
              v135 = -v129;
              v136 = y;
              UnityEngine_Transform__set_localScale(v127, *(UnityEngine_Vector3_o *)(&v134 - 2), 0LL);
              v137 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)PrefabNode, 0LL);
              if ( !v137 )
                sub_1B64324(0LL);
              UnityEngine_Transform__Rotate_69150400(v137, 0.0, 180.0, 0.0, 0LL);
            }
          }
        }
      }
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v138 = UnityEngine_Object__op_Inequality(PrefabNode, 0LL, 0LL);
      if ( v138 )
      {
        if ( !PrefabNode )
          sub_1B64324(v138);
        ComponentsInChildren_object__48794364 = UnityEngine_GameObject__GetComponentsInChildren_object__48794364(
                                                  (UnityEngine_GameObject_o *)PrefabNode,
                                                  (const MethodInfo_2E88AFC *)Method_UnityEngine_GameObject_GetComponentsInChildren_XWeaponTrail___);
        v143 = ComponentsInChildren_object__48794364;
        if ( !ComponentsInChildren_object__48794364 )
          sub_1B64324(0LL);
        v144 = *(_QWORD *)&ComponentsInChildren_object__48794364->max_length;
        if ( (int)v144 >= 1 )
        {
          v145 = 0LL;
          do
          {
            if ( v145 >= (unsigned int)v144 )
              sub_1B6432C(ComponentsInChildren_object__48794364, v140);
            v146 = (System_Collections_Generic_List_object__o *)*p_componentsXWeaponTrail;
            if ( !*p_componentsXWeaponTrail )
              sub_1B64324(0LL);
            v147 = v143->m_Items[v145];
            items = v146->fields._items;
            v149 = Method_System_Collections_Generic_List_XWeaponTrail__Add__;
            ++v146->fields._version;
            if ( !items )
              sub_1B64324(v146);
            v150 = v146->fields._size;
            if ( (unsigned int)v150 >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v146,
                v147,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v149[4] + 192LL) + 112LL));
            }
            else
            {
              v151 = &items->obj.klass + v150;
              v146->fields._size = v150 + 1;
              v151[4] = (Il2CppClass *)v147;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v151 + 4), (int32_t)v147, v141, v142);
            }
            LODWORD(v144) = v143->max_length;
            ++v145;
          }
          while ( (__int64)v145 < (int)v144 );
        }
      }
      v152 = UnityEngine_Component__GetComponent_object_(
               v90,
               (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_SkinnedMeshRenderer___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v79 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v152, 0LL, 0LL);
      if ( (v79 & 1) != 0 )
      {
        v153 = UnityEngine_Component__get_gameObject(v90, 0LL);
        v154 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_3206/*"Battle2D"*/, 0LL);
        if ( !v153 )
          sub_1B64324(v154);
        UnityEngine_GameObject__set_layer(v153, v154, 0LL);
        if ( !v74 )
          sub_1B64324(0LL);
        System_Collections_Generic_Dictionary_object__object___set_Item(
          v74,
          v103,
          v152,
          (const MethodInfo_31793E4 *)Method_System_Collections_Generic_Dictionary_string__SkinnedMeshRenderer__set_Item__);
        monitor = (System_Collections_Generic_List_object__o *)v229[6].monitor;
        if ( !monitor )
          sub_1B64324(0LL);
        v158 = monitor->fields._items;
        v159 = Method_System_Collections_Generic_List_Renderer__Add__;
        ++monitor->fields._version;
        if ( !v158 )
          sub_1B64324(monitor);
        v160 = monitor->fields._size;
        if ( (unsigned int)v160 >= v158->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            monitor,
            v152,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v159[4] + 192LL) + 112LL));
        }
        else
        {
          v161 = &v158->obj.klass + v160;
          monitor->fields._size = v160 + 1;
          v161[4] = (Il2CppClass *)v152;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v161 + 4), (int32_t)v152, v155, v156);
        }
        if ( !v152 )
          sub_1B64324(v162);
        UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)v152, v116, 0LL);
        v226 &= !v116;
      }
    }
  }
  v163 = *(_QWORD *)v80;
  v164 = *(unsigned __int16 *)(*(_QWORD *)v80 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v80 + 302LL) )
  {
    v165 = (int *)(*(_QWORD *)(v163 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v165 - 1) != System_IDisposable_TypeInfo )
    {
      --v164;
      v165 += 4;
      if ( !v164 )
        goto LABEL_129;
    }
    v166 = v163 + 16LL * *v165 + 312;
  }
  else
  {
LABEL_129:
    v166 = sub_1BB60A8(v80, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v166)(v80, *(_QWORD *)(v166 + 8));
  if ( (v226 & 1) != 0 )
  {
    actorEffectDict = v74;
    if ( !v74 )
      goto LABEL_209;
    actorEffectDict = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                   v74,
                                                                                   (const MethodInfo_3179228 *)Method_System_Collections_Generic_Dictionary_string__SkinnedMeshRenderer__get_Values__);
    if ( !actorEffectDict )
      goto LABEL_209;
    System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
      &v230,
      (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)actorEffectDict,
      (const MethodInfo_37BDDB4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__SkinnedMeshRenderer__GetEnumerator__);
    for ( i = v230;
          System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &i,
            (const MethodInfo_3277270 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__SkinnedMeshRenderer__MoveNext__);
          UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)i.fields._currentValue, 1, 0LL) )
    {
      if ( !i.fields._currentValue )
        sub_1B64324(0LL);
    }
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
      &i,
      (const MethodInfo_327726C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__SkinnedMeshRenderer__Dispose__);
  }
  actorEffectDict = (System_Collections_Generic_Dictionary_object__object__o *)UnityEngine_GameObject__GetComponentsInChildren_object__48794364(
                                                                                 gameObject,
                                                                                 (const MethodInfo_2E88AFC *)Method_UnityEngine_GameObject_GetComponentsInChildren_MeshRenderer___);
  if ( !actorEffectDict )
    goto LABEL_209;
  entries = actorEffectDict->fields._entries;
  v171 = actorEffectDict;
  if ( (int)entries >= 1 )
  {
    v172 = 0LL;
    while ( v172 < (unsigned int)entries )
    {
      actorEffectDict = (System_Collections_Generic_Dictionary_object__object__o *)v229[6].monitor;
      if ( !actorEffectDict )
        goto LABEL_209;
      v173 = (Il2CppObject *)*((_QWORD *)&v171->fields._count + v172);
      buckets = actorEffectDict->fields._buckets;
      v175 = Method_System_Collections_Generic_List_Renderer__Add__;
      ++HIDWORD(actorEffectDict->fields._entries);
      if ( !buckets )
        goto LABEL_209;
      entries_low = SLODWORD(actorEffectDict->fields._entries);
      if ( (unsigned int)entries_low >= buckets->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)actorEffectDict,
          v173,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v175[4] + 192LL) + 112LL));
      }
      else
      {
        v177 = (__int64)buckets + 8 * entries_low;
        LODWORD(actorEffectDict->fields._entries) = entries_low + 1;
        *(_QWORD *)(v177 + 32) = v173;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v177 + 32), (int32_t)v173, v168, v169);
      }
      LODWORD(entries) = v171->fields._entries;
      if ( (__int64)++v172 >= (int)entries )
        goto LABEL_149;
    }
LABEL_213:
    sub_1B6432C(actorEffectDict, v167);
  }
LABEL_149:
  actorEffectDict = (System_Collections_Generic_Dictionary_object__object__o *)UnityEngine_GameObject__GetComponentsInChildren_object__48794364(
                                                                                 gameObject,
                                                                                 (const MethodInfo_2E88AFC *)Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystemRenderer___);
  if ( !actorEffectDict )
    goto LABEL_209;
  v180 = actorEffectDict->fields._entries;
  v181 = actorEffectDict;
  if ( (int)v180 >= 1 )
  {
    v182 = 0LL;
    while ( v182 < (unsigned int)v180 )
    {
      actorEffectDict = (System_Collections_Generic_Dictionary_object__object__o *)v229[6].monitor;
      if ( !actorEffectDict )
        goto LABEL_209;
      v183 = (Il2CppObject *)*((_QWORD *)&v181->fields._count + v182);
      v184 = actorEffectDict->fields._buckets;
      v185 = Method_System_Collections_Generic_List_Renderer__Add__;
      ++HIDWORD(actorEffectDict->fields._entries);
      if ( !v184 )
        goto LABEL_209;
      v186 = SLODWORD(actorEffectDict->fields._entries);
      if ( (unsigned int)v186 >= v184->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)actorEffectDict,
          v183,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v185[4] + 192LL) + 112LL));
      }
      else
      {
        v187 = (__int64)v184 + 8 * v186;
        LODWORD(actorEffectDict->fields._entries) = v186 + 1;
        *(_QWORD *)(v187 + 32) = v183;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v187 + 32), (int32_t)v183, v178, v179);
      }
      LODWORD(v180) = v181->fields._entries;
      if ( (__int64)++v182 >= (int)v180 )
        goto LABEL_159;
    }
    goto LABEL_213;
  }
LABEL_159:
  v188 = BattleFBXComponent___c_TypeInfo;
  if ( !BattleFBXComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFBXComponent___c_TypeInfo);
    v188 = BattleFBXComponent___c_TypeInfo;
  }
  _9__56_1 = (System_Func_object__bool__o *)v188->static_fields->__9__56_1;
  if ( !_9__56_1 )
  {
    if ( !v188->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v188);
      v188 = BattleFBXComponent___c_TypeInfo;
    }
    v190 = (Il2CppObject *)v188->static_fields->__9;
    _9__56_1 = (System_Func_object__bool__o *)sub_1B64314(System_Func_Transform__bool__TypeInfo, v167, v178);
    System_Func_object__bool____ctor(_9__56_1, v190, Method_BattleFBXComponent___c__inSetEvolutionLevel_b__56_1__, 0LL);
    v191 = BattleFBXComponent___c_TypeInfo->static_fields;
    v191->__9__56_1 = (struct System_Func_Transform__bool__o *)_9__56_1;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v191->__9__56_1, (int32_t)_9__56_1, v192, v193);
  }
  actorEffectDict = (System_Collections_Generic_Dictionary_object__object__o *)System_Linq_Enumerable__Where_object_(
                                                                                 v64,
                                                                                 (System_Func_TSource__bool__o *)_9__56_1,
                                                                                 (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_Transform___);
  if ( !actorEffectDict )
LABEL_209:
    sub_1B64324(actorEffectDict);
  v194 = actorEffectDict->klass;
  v195 = actorEffectDict;
  v196 = *(unsigned __int16 *)(&actorEffectDict->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&actorEffectDict->klass->_2.bitflags2 + 3) )
  {
    v197 = &v194->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_Transform__c **)v197 - 1) != System_Collections_Generic_IEnumerable_Transform__TypeInfo )
    {
      --v196;
      v197 += 4;
      if ( !v196 )
        goto LABEL_170;
    }
    v198 = (__int64)(&v194->vtable._0_Equals.method + 2 * *v197);
  }
  else
  {
LABEL_170:
    v198 = sub_1BB60A8(actorEffectDict, System_Collections_Generic_IEnumerable_Transform__TypeInfo, 0LL);
  }
  v199 = (*(__int64 (__fastcall **)(System_Collections_Generic_Dictionary_object__object__o *, _QWORD))v198)(
           v195,
           *(_QWORD *)(v198 + 8));
  if ( !v199 )
    sub_1B64324(0LL);
  while ( 1 )
  {
    v200 = *(_QWORD *)v199;
    v201 = *(unsigned __int16 *)(*(_QWORD *)v199 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v199 + 302LL) )
    {
      v202 = (int *)(*(_QWORD *)(v200 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v202 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v201;
        v202 += 4;
        if ( !v201 )
          goto LABEL_177;
      }
      v203 = v200 + 16LL * *v202 + 312;
    }
    else
    {
LABEL_177:
      v203 = sub_1BB60A8(v199, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v203)(v199, *(_QWORD *)(v203 + 8)) & 1) == 0 )
      break;
    v204 = *(_QWORD *)v199;
    v205 = *(unsigned __int16 *)(*(_QWORD *)v199 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v199 + 302LL) )
    {
      v206 = (int *)(*(_QWORD *)(v204 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_Transform__c **)v206 - 1) != System_Collections_Generic_IEnumerator_Transform__TypeInfo )
      {
        --v205;
        v206 += 4;
        if ( !v205 )
          goto LABEL_184;
      }
      v207 = v204 + 16LL * *v206 + 312;
    }
    else
    {
LABEL_184:
      v207 = sub_1BB60A8(v199, System_Collections_Generic_IEnumerator_Transform__TypeInfo, 0LL);
    }
    v208 = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v207)(v199, *(_QWORD *)(v207 + 8));
    v209 = (UnityEngine_Transform_o *)v208;
    if ( !v208 )
      sub_1B64324(0LL);
    v210 = UnityEngine_Object__get_name(v208, 0LL);
    v211 = BattleFBXComponent_TypeInfo;
    if ( !BattleFBXComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
      v211 = BattleFBXComponent_TypeInfo;
    }
    enItemMarker = v211->static_fields->enItemMarker;
    if ( !enItemMarker )
      sub_1B64324(v211);
    if ( !v210 )
      sub_1B64324(v211);
    v213 = System_String__Substring(v210, enItemMarker->fields._stringLength, 0LL);
    parent = UnityEngine_Transform__get_parent(v209, 0LL);
    v215 = System_String__Concat_61375396(BattleFBXComponent_TypeInfo->static_fields->enWeaponMarker, v213, 0LL);
    if ( !parent )
      sub_1B64324(v215);
    v216 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(parent, v215, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v216, 0LL, 0LL) )
    {
      v217 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v209, 0LL);
      if ( !v217 )
        sub_1B64324(0LL);
      v218 = UnityEngine_GameObject__AddComponent_object_(
               v217,
               (const MethodInfo_2E87DF0 *)Method_UnityEngine_GameObject_AddComponent_LookAtTarget___);
      v221 = v218;
      if ( !v218 )
        sub_1B64324(0LL);
      v218[2].monitor = v216;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v218[2].monitor, (int32_t)v216, v219, v220);
      LODWORD(v221[3].klass) = 1120403456;
    }
  }
  v222 = *(_QWORD *)v199;
  v223 = *(unsigned __int16 *)(*(_QWORD *)v199 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v199 + 302LL) )
  {
    v224 = (int *)(*(_QWORD *)(v222 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v224 - 1) != System_IDisposable_TypeInfo )
    {
      --v223;
      v224 += 4;
      if ( !v223 )
        goto LABEL_202;
    }
    v225 = v222 + 16LL * *v224 + 312;
  }
  else
  {
LABEL_202:
    v225 = sub_1BB60A8(v199, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v225)(v199, *(_QWORD *)(v225 + 8));
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
  int32_t v26; // w3
  int32_t LimitImageIndex; // w21
  __int64 Instance; // x0
  System_String_o *text; // x22
  int v30; // w8
  __int64 v31; // x1
  int v32; // w8
  __int64 v33; // x22
  BattleFBXComponent_c **v34; // x28
  unsigned int v35; // w29
  System_String_o *v36; // x23
  __int64 v37; // x8
  __int64 v38; // x23
  System_String_o *v39; // x25
  int32_t v40; // w26
  System_String_o *v41; // x27
  BattleFBXComponent_c *v42; // x0
  int32_t v43; // w0
  __int64 v44; // x1
  __int64 v45; // x2
  int32_t Index; // w24
  int32_t v47; // w20
  System_Collections_Generic_List_object__o *v48; // x25
  struct BattleFBXComponent_AnimEvent_array_array *v49; // x21
  __int64 v50; // x19
  int v51; // w8
  int v52; // w26
  __int64 v53; // x2
  float v54; // s0
  float v55; // s8
  unsigned int v56; // w9
  int v57; // w21
  BattleFBXComponent_c **v58; // x19
  __int64 v59; // x28
  __int64 v60; // x27
  float v61; // s9
  __int64 v62; // x26
  int32_t v63; // w2
  int32_t v64; // w3
  int32_t v65; // w2
  int32_t v66; // w3
  int32_t v67; // w2
  int32_t v68; // w3
  struct System_Object_array *items; // x8
  _QWORD *v70; // x9
  __int64 size; // x10
  Il2CppClass **v72; // x0
  int32_t v73; // w2
  int32_t v74; // w3
  __int64 v75; // x23
  Il2CppClass **v76; // x0
  __int64 v77; // x0
  BattleFBXComponent_o *v78; // [xsp+8h] [xbp-88h]
  struct BattleFBXComponent_AnimEvent_array_array **p_eventlist; // [xsp+10h] [xbp-80h]
  Il2CppObject *entity; // [xsp+18h] [xbp-78h] BYREF

  if ( (byte_49FE96A & 1) == 0 )
  {
    sub_1B640C8(&BattleFBXComponent_AnimEvent_____TypeInfo, data);
    sub_1B640C8(&BattleFBXComponent_AnimEvent_TypeInfo, v9);
    sub_1B640C8(&AnimationList_TypeInfo, v10);
    sub_1B640C8(&BattleFBXComponent_TypeInfo, v11);
    sub_1B640C8(&char___TypeInfo, v12);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v13);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleFBXComponent_AnimEvent__Add__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleFBXComponent_AnimEvent__ToArray__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleFBXComponent_AnimEvent___ctor__, v18);
    sub_1B640C8(&System_Collections_Generic_List_BattleFBXComponent_AnimEvent__TypeInfo, v19);
    sub_1B640C8(&ServantAssetLoadManager_TypeInfo, v20);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_1B640C8(&StringLiteral_402/*"#"*/, v22);
    sub_1B640C8(&StringLiteral_869/*","*/, v23);
    byte_49FE96A = 1;
  }
  entity = 0LL;
  BattleFBXComponent__InitAnimNameDict(this, (const MethodInfo *)data);
  v24 = (struct BattleFBXComponent_AnimEvent_array_array *)sub_1B64170(BattleFBXComponent_AnimEvent_____TypeInfo, 50LL);
  this->fields.eventlist = v24;
  p_eventlist = &this->fields.eventlist;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.eventlist, (int32_t)v24, v25, v26);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  LimitImageIndex = ServantAssetLoadManager__GetLimitImageIndex(svtId, level, 1, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_71;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_71;
  Instance = DataMasterBase_object__object__int___TryGetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               &entity,
               svtId,
               (const MethodInfo_30D3EF8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
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
  Instance = sub_1B64170(char___TypeInfo, 2LL);
  if ( !Instance )
    goto LABEL_71;
  v30 = *(_DWORD *)(Instance + 24);
  v31 = Instance;
  if ( !v30 )
    goto LABEL_72;
  *(_WORD *)(Instance + 32) = 13;
  if ( v30 == 1 )
    goto LABEL_72;
  *(_WORD *)(Instance + 34) = 10;
  if ( !text
    || (v78 = this, (Instance = (__int64)System_String__Split_61397544(text, (System_Char_array *)Instance, 0LL)) == 0) )
  {
LABEL_71:
    sub_1B64324(Instance);
  }
  v32 = *(_DWORD *)(Instance + 24);
  v33 = Instance;
  if ( v32 >= 1 )
  {
    v34 = &BattleFBXComponent_TypeInfo;
    v35 = 0;
    while ( v35 < v32 )
    {
      Instance = (__int64)StringLiteral_869/*","*/;
      if ( !StringLiteral_869/*","*/ )
        goto LABEL_71;
      v36 = *(System_String_o **)(v33 + 8LL * (int)v35 + 32);
      Instance = System_String__get_Chars((System_String_o *)StringLiteral_869/*","*/, 0, 0LL);
      if ( !v36 )
        goto LABEL_71;
      Instance = (__int64)System_String__Split(v36, Instance, 0, 0LL);
      if ( !Instance )
        goto LABEL_71;
      v37 = *(_QWORD *)(Instance + 24);
      v38 = Instance;
      if ( v37 )
      {
        if ( !(_DWORD)v37 )
          break;
        Instance = *(_QWORD *)(Instance + 32);
        if ( !Instance )
          goto LABEL_71;
        Instance = System_String__StartsWith((System_String_o *)Instance, (System_String_o *)StringLiteral_402/*"#"*/, 0LL);
        if ( (Instance & 1) == 0 && *(int *)(v38 + 24) >= 6 )
        {
          Instance = System_Int32__Parse(*(System_String_o **)(v38 + 32), 0LL);
          if ( *(_DWORD *)(v38 + 24) <= 1u )
            break;
          if ( (_DWORD)Instance == LimitImageIndex )
          {
            Instance = (__int64)*v34;
            v39 = *(System_String_o **)(v38 + 40);
            if ( !(*v34)->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(Instance);
            if ( !v39 )
              goto LABEL_71;
            v40 = System_String__IndexOf_61406964(v39, (*v34)->static_fields->levelMarker, 0LL);
            v41 = v39;
            if ( (v40 & 0x80000000) == 0 )
            {
              v42 = *v34;
              if ( !(*v34)->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v42);
                v42 = *v34;
              }
              v43 = System_String__IndexOf_61406964(v39, v42->static_fields->levelMarker, 0LL);
              v41 = System_String__Substring_61394392(v39, 0, v43, 0LL);
            }
            if ( !AnimationList_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AnimationList_TypeInfo);
            Index = AnimationList__getIndex(v41, 0LL);
            if ( (v40 & 0x80000000) == 0 )
            {
              Instance = (__int64)v78->fields.RealAnimNames;
              if ( !Instance )
                goto LABEL_71;
              System_Collections_Generic_Dictionary_object__object___set_Item(
                (System_Collections_Generic_Dictionary_object__object__o *)Instance,
                (Il2CppObject *)v41,
                (Il2CppObject *)v39,
                (const MethodInfo_31793E4 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
              Instance = (__int64)v78->fields.CommonAnimNames;
              if ( !Instance )
                goto LABEL_71;
              System_Collections_Generic_Dictionary_object__object___set_Item(
                (System_Collections_Generic_Dictionary_object__object__o *)Instance,
                (Il2CppObject *)v39,
                (Il2CppObject *)v41,
                (const MethodInfo_31793E4 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
            }
            v47 = LimitImageIndex;
            v48 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                                 System_Collections_Generic_List_BattleFBXComponent_AnimEvent__TypeInfo,
                                                                 v44,
                                                                 v45);
            System_Collections_Generic_List_object____ctor(
              v48,
              (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BattleFBXComponent_AnimEvent___ctor__);
            v49 = *p_eventlist;
            if ( !*p_eventlist )
              goto LABEL_71;
            if ( Index >= v49->max_length )
              break;
            v50 = Index;
            if ( !v49->m_Items[Index] )
            {
              v51 = *(_DWORD *)(v38 + 24);
              if ( v51 >= 3 )
              {
                v52 = 2;
                do
                {
                  if ( v52 >= (unsigned int)v51 )
                    goto LABEL_72;
                  Instance = *(_QWORD *)(v38 + 8LL * v52 + 32);
                  if ( !Instance )
                    goto LABEL_71;
                  if ( !*(_DWORD *)(Instance + 16) )
                    break;
                  v54 = System_Single__Parse((System_String_o *)Instance, 0LL);
                  Instance = (__int64)*v34;
                  v55 = v54;
                  if ( !(*v34)->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(Instance);
                    Instance = (__int64)*v34;
                  }
                  v56 = *(_DWORD *)(v38 + 24);
                  if ( v52 + 1 >= v56 )
                    goto LABEL_72;
                  v57 = v52 + 2;
                  if ( v52 + 2 >= v56 )
                    goto LABEL_72;
                  v58 = v34;
                  v59 = *(_QWORD *)(v38 + 8LL * (v52 + 1) + 32);
                  v60 = *(_QWORD *)(v38 + 8LL * (v52 + 2) + 32);
                  v61 = *(float *)(*(_QWORD *)(Instance + 184) + 4LL);
                  v62 = sub_1B64314(BattleFBXComponent_AnimEvent_TypeInfo, v31, v53);
                  System_Object___ctor((Il2CppObject *)v62, 0LL);
                  if ( !v62 )
                    goto LABEL_71;
                  *(float *)(v62 + 16) = v55 / v61;
                  *(_QWORD *)(v62 + 24) = v59;
                  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v62 + 24), v59, v63, v64);
                  *(_QWORD *)(v62 + 32) = v60;
                  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v62 + 32), v60, v65, v66);
                  if ( !v48 )
                    goto LABEL_71;
                  items = v48->fields._items;
                  v70 = Method_System_Collections_Generic_List_BattleFBXComponent_AnimEvent__Add__;
                  ++v48->fields._version;
                  if ( !items )
                    goto LABEL_71;
                  size = v48->fields._size;
                  v34 = v58;
                  if ( (unsigned int)size >= items->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v48,
                      (Il2CppObject *)v62,
                      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v70[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v72 = &items->obj.klass + size;
                    v48->fields._size = size + 1;
                    v72[4] = (Il2CppClass *)v62;
                    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v72 + 4), v62, v67, v68);
                  }
                  v51 = *(_DWORD *)(v38 + 24);
                  v52 = v57 + 1;
                }
                while ( v57 + 1 < v51 );
                v50 = Index;
                v49 = *p_eventlist;
              }
            }
            if ( !v48 )
              goto LABEL_71;
            Instance = (__int64)System_Collections_Generic_List_object___ToArray(
                                  v48,
                                  (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BattleFBXComponent_AnimEvent__ToArray__);
            if ( !v49 )
              goto LABEL_71;
            v75 = Instance;
            if ( Instance )
            {
              Instance = sub_1B64204(Instance, v49->obj.klass->_1.element_class);
              if ( !Instance )
              {
                v77 = sub_1B64348(0LL);
                sub_1B641F0(v77, 0LL);
              }
            }
            if ( Index >= v49->max_length )
              break;
            v76 = &v49->obj.klass + v50;
            v76[4] = (Il2CppClass *)v75;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v76 + 4), v75, v73, v74);
            LimitImageIndex = v47;
          }
        }
      }
      v32 = *(_DWORD *)(v33 + 24);
      if ( (int)++v35 >= v32 )
        return;
    }
LABEL_72:
    sub_1B6432C(Instance, v31);
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

  if ( (byte_49FE964 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_2375/*"AnimationCheck"*/, filename);
    sub_1B640C8(&StringLiteral_1/*""*/, v7);
    byte_49FE964 = 1;
  }
  BattleFBXComponent__playAnimationTimeline(this, filename, (System_String_o *)StringLiteral_1/*""*/, v3, v4);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B64324(0LL);
  if ( UnityEngine_GameObject__get_activeInHierarchy(gameObject, 0LL) )
  {
    UnityEngine_MonoBehaviour__StopCoroutine_69113936(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_2375/*"AnimationCheck"*/,
      0LL);
    UnityEngine_MonoBehaviour__StartCoroutine(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_2375/*"AnimationCheck"*/,
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
  UnityEngine_Animation_o *Item; // x0
  int32_t v15; // w2
  int32_t v16; // w3
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

  if ( (byte_49FE965 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, animname);
    sub_1B640C8(&SimpleAnimation_State_TypeInfo, v7);
    byte_49FE965 = 1;
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
    sub_1B64324(Item);
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
    v19 = Item;
    v20 = *(unsigned __int16 *)(&Item->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Item->klass->_2.bitflags2 + 3) )
    {
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v20;
        p_offset += 2;
        if ( !v20 )
          goto LABEL_20;
      }
      v22 = (__int64)(&klass->vtable._4_GetEnumerator.method + 2 * *(_DWORD *)p_offset);
    }
    else
    {
LABEL_20:
      v22 = sub_1BB60A8(Item, SimpleAnimation_State_TypeInfo, 4LL);
    }
    (*(void (__fastcall **)(UnityEngine_Animation_o *, _QWORD, long double))v22)(v19, *(_QWORD *)(v22 + 8), v13);
    Item = (UnityEngine_Animation_o *)this->fields.simpleAnimationComponent;
    if ( !Item )
      goto LABEL_32;
    Item = (UnityEngine_Animation_o *)SimpleAnimation__get_Item((SimpleAnimation_o *)Item, currentAnimName, 0LL);
    if ( !Item )
      goto LABEL_32;
    v23 = Item->klass;
    v24 = Item;
    v25 = *(unsigned __int16 *)(&Item->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Item->klass->_2.bitflags2 + 3) )
    {
      v26 = (SimpleAnimation_State_c **)&v23->_1.interfaceOffsets->offset;
      while ( *(v26 - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v25;
        v26 += 2;
        if ( !v25 )
          goto LABEL_28;
      }
      v27 = (__int64)(&v23[1]._1.this_arg.bits + 4 * *(_DWORD *)v26);
    }
    else
    {
LABEL_28:
      v27 = sub_1BB60A8(Item, SimpleAnimation_State_TypeInfo, 8LL);
    }
    (*(void (__fastcall **)(UnityEngine_Animation_o *, _QWORD, float))v27)(v24, *(_QWORD *)(v27 + 8), 0.0);
  }
LABEL_31:
  this->fields.currentAnimName = currentAnimName;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.currentAnimName, (int32_t)currentAnimName, v15, v16);
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
  Il2CppObject *Component_object; // x22
  int32_t v14; // w2
  int32_t v15; // w3
  const MethodInfo *v16; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *RealAnimNames; // x0
  struct System_Collections_Generic_Dictionary_string__string__o *v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  UnityEngine_Object_o *animationComponent; // x22
  UnityEngine_Animation_o *v22; // x0
  UnityEngine_Animation_o *v23; // x0
  UnityEngine_TrackedReference_o *v24; // x0
  UnityEngine_Animation_o *v25; // x0
  UnityEngine_AnimationState_o *v26; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  UnityEngine_Object_o *simpleAnimationComponent; // x22
  SimpleAnimation_o *v30; // x0
  SimpleAnimation_o *v31; // x0
  SimpleAnimation_o *v32; // x0
  SimpleAnimation_State_o *v33; // x0
  SimpleAnimation_State_o *v34; // x22
  SimpleAnimation_State_c *klass; // x8
  __int64 v36; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 p_method; // x0
  const MethodInfo *v39; // x3
  const MethodInfo *v40; // x1

  Item = filename;
  if ( (byte_49FE962 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__, filename);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__, v8);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v9);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v10);
    sub_1B640C8(&SimpleAnimation_State_TypeInfo, v11);
    byte_49FE962 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_41;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
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
      LOBYTE(Component_object[21].monitor) = 1;
      goto LABEL_9;
    }
LABEL_41:
    sub_1B64324(gameObject);
  }
LABEL_9:
  this->fields.currentCommonAnimName = Item;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.currentCommonAnimName, (int32_t)Item, v14, v15);
  RealAnimNames = this->fields.RealAnimNames;
  if ( RealAnimNames
    && System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)RealAnimNames,
         (Il2CppObject *)Item,
         (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
  {
    v18 = this->fields.RealAnimNames;
    if ( !v18 )
      sub_1B64324(0LL);
    Item = (System_String_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                (System_Collections_Generic_Dictionary_object__object__o *)v18,
                                (Il2CppObject *)Item,
                                (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
  }
  BattleFBXComponent__setupAnimation(this, v16);
  this->fields.currentAnimName = Item;
  this->fields.isDirty = 1;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.currentAnimName, (int32_t)Item, v19, v20);
  *(_QWORD *)&this->fields.currentAnimTime = 0LL;
  this->fields.isStop = 0;
  animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(animationComponent, 0LL, 0LL) )
  {
    v22 = this->fields.animationComponent;
    if ( !v22 )
      sub_1B64324(0LL);
    UnityEngine_Animation__Play_68872828(v22, Item, 0LL);
    v23 = this->fields.animationComponent;
    if ( !v23 )
      sub_1B64324(0LL);
    v24 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v23, Item, 0LL);
    if ( !UnityEngine_TrackedReference__op_Equality(v24, 0LL, 0LL) )
    {
      v25 = this->fields.animationComponent;
      if ( !v25 )
        sub_1B64324(0LL);
      v26 = UnityEngine_Animation__get_Item(v25, Item, 0LL);
      if ( !v26 )
        sub_1B64324(0LL);
      UnityEngine_AnimationState__set_speed(v26, 0.0, 0LL);
LABEL_37:
      this->fields.animename = Item;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.animename, (int32_t)Item, v27, v28);
      if ( startEvent )
      {
        if ( startEvent->fields._stringLength >= 1 )
        {
          this->fields.currentAnimTime = BattleFBXComponent__getTagTime(this, Item, startEvent, v39);
          BattleFBXComponent__AnimUpdate(this, 0.0, v40);
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
    v30 = this->fields.simpleAnimationComponent;
    if ( !v30 )
      sub_1B64324(0LL);
    SimpleAnimation__Play_63513060(v30, Item, 0LL);
    v31 = this->fields.simpleAnimationComponent;
    if ( !v31 )
      sub_1B64324(0LL);
    if ( SimpleAnimation__get_Item(v31, Item, 0LL) )
    {
      v32 = this->fields.simpleAnimationComponent;
      if ( !v32 )
        sub_1B64324(0LL);
      v33 = SimpleAnimation__get_Item(v32, Item, 0LL);
      v34 = v33;
      if ( !v33 )
        sub_1B64324(0LL);
      klass = v33->klass;
      v36 = *(unsigned __int16 *)(&v33->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v33->klass->_2.bitflags2 + 3) )
      {
        p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v36;
          p_offset += 2;
          if ( !v36 )
            goto LABEL_34;
        }
        p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 8].method;
      }
      else
      {
LABEL_34:
        p_method = sub_1BB60A8(v33, SimpleAnimation_State_TypeInfo, 8LL);
      }
      (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD, float))p_method)(v34, *(_QWORD *)(p_method + 8), 0.0);
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
  int32_t v3; // w3
  __int64 v6; // x1
  UnityEngine_Component_o *rootTransform; // x0
  Il2CppObject *Component_object; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  Il2CppObject *v11; // x0
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_49FE954 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_Animation___, value);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v6);
    byte_49FE954 = 1;
  }
  this->fields.rootTransform = value;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.rootTransform, (int32_t)value, (int32_t)method, v3);
  rootTransform = (UnityEngine_Component_o *)this->fields.rootTransform;
  if ( !rootTransform
    || (rootTransform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(rootTransform, 0LL)) == 0LL
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)rootTransform,
                             (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_Animation___),
        this->fields.animationComponent = (struct UnityEngine_Animation_o *)Component_object,
        sub_1B6406C(
          (ServantStatusBattleListViewItem_o *)&this->fields.animationComponent,
          (int32_t)Component_object,
          v9,
          v10),
        (rootTransform = (UnityEngine_Component_o *)this->fields.rootTransform) == 0LL)
    || (rootTransform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(rootTransform, 0LL)) == 0LL )
  {
    sub_1B64324(rootTransform);
  }
  v11 = UnityEngine_GameObject__GetComponent_object_(
          (UnityEngine_GameObject_o *)rootTransform,
          (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  this->fields.simpleAnimationComponent = (struct SimpleAnimation_o *)v11;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.simpleAnimationComponent, (int32_t)v11, v12, v13);
}


void __fastcall BattleFBXComponent__setupAnimation(BattleFBXComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *rootTransform; // x20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v7; // x0
  const MethodInfo *v8; // x2
  BattleFBXComponent_c *v9; // x0
  UnityEngine_Object_o *v10; // x20
  UnityEngine_Transform_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_49FE961 & 1) == 0 )
  {
    sub_1B640C8(&BattleFBXComponent_TypeInfo, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    sub_1B640C8(&StringLiteral_17894/*"chr"*/, v4);
    byte_49FE961 = 1;
  }
  rootTransform = (UnityEngine_Object_o *)this->fields.rootTransform;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(rootTransform, 0LL, 0LL) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform )
      sub_1B64324(0LL);
    v7 = UnityEngine_Transform__Find(transform, (System_String_o *)StringLiteral_17894/*"chr"*/, 0LL);
    BattleFBXComponent__set_RootTransform(this, v7, v8);
    v9 = BattleFBXComponent_TypeInfo;
    if ( !BattleFBXComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
      v9 = BattleFBXComponent_TypeInfo;
    }
    v9->static_fields->EnableEvent = 0;
  }
  v10 = (UnityEngine_Object_o *)this->fields.rootTransform;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v10, 0LL, 0LL) )
  {
    v11 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    BattleFBXComponent__set_RootTransform(this, v11, v12);
  }
}


void __fastcall BattleFBXComponent__stopAnimation(BattleFBXComponent_o *this, const MethodInfo *method)
{
  this->fields.isStop = 1;
}


void __fastcall BattleFBXComponent__stopAnimationCheck(BattleFBXComponent_o *this, const MethodInfo *method)
{
  if ( (byte_49FE967 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_2375/*"AnimationCheck"*/, method);
    byte_49FE967 = 1;
  }
  UnityEngine_MonoBehaviour__StopCoroutine_69113936(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_2375/*"AnimationCheck"*/,
    0LL);
}


void __fastcall BattleFBXComponent__stopParticle(BattleFBXComponent_o *this, const MethodInfo *method)
{
  void *gameObject; // x0
  __int64 v4; // x1
  int v5; // w8
  void *v6; // x19
  unsigned int v7; // w20

  if ( (byte_49FE960 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem___, method);
    byte_49FE960 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_12;
  gameObject = UnityEngine_GameObject__GetComponentsInChildren_object__48794364(
                 (UnityEngine_GameObject_o *)gameObject,
                 (const MethodInfo_2E88AFC *)Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem___);
  if ( !gameObject )
    goto LABEL_12;
  v5 = *((_DWORD *)gameObject + 6);
  v6 = gameObject;
  if ( v5 >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= v5 )
        sub_1B6432C(gameObject, v4);
      gameObject = (void *)*((_QWORD *)v6 + (int)v7 + 4);
      if ( !gameObject )
        break;
      UnityEngine_ParticleSystem__Stop_69408224((UnityEngine_ParticleSystem_o *)gameObject, 0LL);
      v5 = *((_DWORD *)v6 + 6);
      if ( (int)++v7 >= v5 )
        return;
    }
LABEL_12:
    sub_1B64324(gameObject);
  }
}


void __fastcall BattleFBXComponent_AnimEvent___ctor(BattleFBXComponent_AnimEvent_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleFBXComponent__AnimationCheck_d__69___ctor(
        BattleFBXComponent__AnimationCheck_d__69_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleFBXComponent__AnimationCheck_d__69__MoveNext(
        BattleFBXComponent__AnimationCheck_d__69_o *this,
        const MethodInfo *method)
{
  BattleFBXComponent__AnimationCheck_d__69_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct BattleFBXComponent_o *_4__this; // x21
  UnityEngine_Object_o *animationComponent; // x20
  UnityEngine_Object_o *simpleAnimationComponent; // x20
  int32_t v9; // w2
  int32_t v10; // w3
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  bool result; // w0
  int32_t v13; // w2
  int32_t v14; // w3
  ServantStatusBattleListViewItem_o *v15; // x19
  int v16; // w8
  __int64 v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  Il2CppObject *animename; // x19
  struct BattleFBXComponent_onEventDelegate_o *Complete; // x8
  int v22; // [xsp+Ch] [xbp-24h] BYREF

  v2 = this;
  if ( (byte_49FE97F & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__, method);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__, v3);
    sub_1B640C8(&int_TypeInfo, v4);
    this = (BattleFBXComponent__AnimationCheck_d__69_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    byte_49FE97F = 1;
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
        this = (BattleFBXComponent__AnimationCheck_d__69_o *)_4__this->fields.animationComponent;
        if ( this )
        {
          if ( UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)this, 0LL) )
          {
            v2->fields.__2__current = 0LL;
            p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
            sub_1B6406C(p__2__current, 0, v9, v10);
            result = 1;
            *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
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
      this = (BattleFBXComponent__AnimationCheck_d__69_o *)_4__this->fields.simpleAnimationComponent;
      if ( !this )
LABEL_31:
        sub_1B64324(this);
      if ( !SimpleAnimation__get_isPlaying((SimpleAnimation_o *)this, 0LL) )
      {
LABEL_20:
        v22 = 0;
        v17 = j_il2cpp_value_box_0(int_TypeInfo, &v22);
        v2->fields.__2__current = (Il2CppObject *)v17;
        v15 = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
        sub_1B6406C(v15, v17, v18, v19);
        v16 = 3;
        goto LABEL_21;
      }
      v2->fields.__2__current = 0LL;
      v15 = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
      sub_1B6406C(v15, 0, v13, v14);
      v16 = 2;
LABEL_21:
      *(_DWORD *)&v15[-1].fields.isMine = v16;
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
      this = (BattleFBXComponent__AnimationCheck_d__69_o *)_4__this->fields.CommonAnimNames;
      if ( !this )
        goto LABEL_31;
      animename = (Il2CppObject *)_4__this->fields.animename;
      this = (BattleFBXComponent__AnimationCheck_d__69_o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                                             (System_Collections_Generic_Dictionary_object__object__o *)this,
                                                             animename,
                                                             (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_28;
      this = (BattleFBXComponent__AnimationCheck_d__69_o *)_4__this->fields.CommonAnimNames;
      if ( !this )
        goto LABEL_31;
      this = (BattleFBXComponent__AnimationCheck_d__69_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                             (System_Collections_Generic_Dictionary_object__object__o *)this,
                                                             animename,
                                                             (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
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


Il2CppObject *__fastcall BattleFBXComponent__AnimationCheck_d__69__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleFBXComponent__AnimationCheck_d__69_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleFBXComponent__AnimationCheck_d__69__System_Collections_IEnumerator_Reset(
        BattleFBXComponent__AnimationCheck_d__69_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_BattleFBXComponent__AnimationCheck_d__69_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
}


Il2CppObject *__fastcall BattleFBXComponent__AnimationCheck_d__69__System_Collections_IEnumerator_get_Current(
        BattleFBXComponent__AnimationCheck_d__69_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleFBXComponent__AnimationCheck_d__69__System_IDisposable_Dispose(
        BattleFBXComponent__AnimationCheck_d__69_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleFBXComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FE97C & 1) == 0 )
  {
    sub_1B640C8(&BattleFBXComponent___c_TypeInfo, v1);
    byte_49FE97C = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(BattleFBXComponent___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  BattleFBXComponent___c_TypeInfo->static_fields->__9 = (struct BattleFBXComponent___c_o *)v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)BattleFBXComponent___c_TypeInfo->static_fields, (int32_t)v3, v4, v5);
}


void __fastcall BattleFBXComponent___c___ctor(BattleFBXComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleFBXComponent___c___inSetEvolutionLevel_b__56_0(
        BattleFBXComponent___c_o *this,
        UnityEngine_Transform_o *p,
        const MethodInfo *method)
{
  BattleFBXComponent___c_o *v4; // x20
  BattleFBXComponent___c_o *v6; // x19

  if ( (byte_49FE97D & 1) == 0 )
  {
    this = (BattleFBXComponent___c_o *)sub_1B640C8(&BattleFBXComponent_TypeInfo, p);
    byte_49FE97D = 1;
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
    sub_1B64324(this);
  return System_String__Contains((System_String_o *)v6, BattleFBXComponent_TypeInfo->static_fields->sideflipMarker, 0LL);
}


bool __fastcall BattleFBXComponent___c___inSetEvolutionLevel_b__56_1(
        BattleFBXComponent___c_o *this,
        UnityEngine_Transform_o *p,
        const MethodInfo *method)
{
  BattleFBXComponent___c_o *v4; // x19

  if ( (byte_49FE97E & 1) == 0 )
  {
    this = (BattleFBXComponent___c_o *)sub_1B640C8(&BattleFBXComponent_TypeInfo, p);
    byte_49FE97E = 1;
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
    sub_1B64324(this);
  return System_String__Contains((System_String_o *)v4, BattleFBXComponent_TypeInfo->static_fields->enItemMarker, 0LL);
}


void __fastcall BattleFBXComponent___c__DisplayClass79_0___ctor(
        BattleFBXComponent___c__DisplayClass79_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleFBXComponent___c__DisplayClass79_0___IsYTransparenceShader_b__0(
        BattleFBXComponent___c__DisplayClass79_0_o *this,
        System_String_o *shaderName,
        const MethodInfo *method)
{
  System_String_o *skinShaderName; // x0

  skinShaderName = this->fields.skinShaderName;
  if ( !skinShaderName )
    sub_1B64324(0LL);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64188(v6) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = (Il2CppObject *)sub_19AE764;
LABEL_8:
      this->fields.m_target = v9;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v8 )
    {
      v9 = (Il2CppObject *)sub_19AE744;
      goto LABEL_8;
    }
    if ( !object )
    {
      v11 = sub_1B64340(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B641F0(v11, 0LL);
    }
  }
  v10 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v10;
LABEL_9:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19AE6FC;
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
  return (System_IAsyncResult_o *)sub_1B6407C(this, &v6, callback, object);
}


void __fastcall BattleFBXComponent_onEventDelegate__EndInvoke(
        BattleFBXComponent_onEventDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64080(result, 0LL, method);
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