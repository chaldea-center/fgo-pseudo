void __fastcall BattleFBXComponent___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  struct BattleFBXComponent_StaticFields *static_fields; // x0
  int32_t v4; // w1
  int32_t v5; // w1
  struct BattleFBXComponent_StaticFields *v6; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  int32_t v9; // w1
  struct BattleFBXComponent_StaticFields *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w1
  struct BattleFBXComponent_StaticFields *v14; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w1
  struct BattleFBXComponent_StaticFields *v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w1
  struct BattleFBXComponent_StaticFields *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  int32_t v25; // w1
  struct BattleFBXComponent_StaticFields *v26; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  int32_t v29; // w1
  struct BattleFBXComponent_StaticFields *v30; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  __int64 v33; // x0
  __int64 v34; // x1
  int32_t v35; // w2
  int32_t v36; // w3
  __int64 v37; // x19
  int32_t v38; // w1
  int32_t v39; // w2
  int32_t v40; // w3
  int32_t v41; // w1
  int32_t v42; // w2
  int32_t v43; // w3
  int32_t v44; // w1
  int32_t v45; // w2
  int32_t v46; // w3
  int32_t v47; // w1
  int32_t v48; // w2
  int32_t v49; // w3
  int32_t v50; // w1
  int32_t v51; // w2
  int32_t v52; // w3
  int32_t v53; // w1
  int32_t v54; // w2
  int32_t v55; // w3
  int32_t v56; // w1
  int32_t v57; // w2
  int32_t v58; // w3
  int32_t v59; // w1
  int32_t v60; // w2
  int32_t v61; // w3
  int32_t v62; // w1
  int32_t v63; // w2
  int32_t v64; // w3
  int32_t v65; // w1
  struct BattleFBXComponent_StaticFields *v66; // x0
  int32_t v67; // w2
  int32_t v68; // w3

  if ( (byte_4A5D723 & 1) == 0 )
  {
    sub_1B885B0(&BattleFBXComponent_TypeInfo);
    sub_1B885B0(&string___TypeInfo);
    sub_1B885B0(&StringLiteral_7230/*"Hidden/Particle/MultiplyAdd1Pass-Stencil"*/);
    sub_1B885B0(&StringLiteral_6373/*"FGO_CH/AlphaBlendSingle"*/);
    sub_1B885B0(&StringLiteral_18981/*"en_weapon_"*/);
    sub_1B885B0(&StringLiteral_6375/*"FGO_CH/Base"*/);
    sub_1B885B0(&StringLiteral_16551/*"_level"*/);
    sub_1B885B0(&StringLiteral_6372/*"FGO_Battle/Particle/Base-Stencil"*/);
    sub_1B885B0(&StringLiteral_6371/*"FGO_Battle/Particle/Base"*/);
    sub_1B885B0(&StringLiteral_6376/*"FGO_CH/SingleFlat"*/);
    sub_1B885B0(&StringLiteral_7229/*"Hidden/Particle/MultiplyAdd1Pass"*/);
    sub_1B885B0(&StringLiteral_18977/*"en_item_"*/);
    sub_1B885B0(&StringLiteral_17966/*"chrnode_"*/);
    sub_1B885B0(&StringLiteral_20951/*"joint_sideflip_"*/);
    sub_1B885B0(&StringLiteral_7227/*"Hidden/Particle/MultiplyAdd"*/);
    sub_1B885B0(&StringLiteral_2511/*"Assets/AssetStorages/NoblePhantasm/"*/);
    sub_1B885B0(&StringLiteral_7228/*"Hidden/Particle/MultiplyAdd-Stencil"*/);
    sub_1B885B0(&StringLiteral_6374/*"FGO_CH/AlphaBlendSingleFlat"*/);
    sub_1B885B0(&StringLiteral_22585/*"prefabn_"*/);
    sub_1B885B0(&StringLiteral_2512/*"Assets/AssetStorages/Servants/"*/);
    byte_4A5D723 = 1;
  }
  static_fields = BattleFBXComponent_TypeInfo->static_fields;
  static_fields->EnableEvent = 1;
  static_fields->animFps = 30.0;
  v4 = StringLiteral_16551/*"_level"*/;
  static_fields->levelMarker = (struct System_String_o *)StringLiteral_16551/*"_level"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->levelMarker, v4, v1, v2);
  v5 = StringLiteral_22585/*"prefabn_"*/;
  v6 = BattleFBXComponent_TypeInfo->static_fields;
  v6->prefabMarker = (struct System_String_o *)StringLiteral_22585/*"prefabn_"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v6->prefabMarker, v5, v7, v8);
  v9 = StringLiteral_17966/*"chrnode_"*/;
  v10 = BattleFBXComponent_TypeInfo->static_fields;
  v10->chrnodeMarker = (struct System_String_o *)StringLiteral_17966/*"chrnode_"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v10->chrnodeMarker, v9, v11, v12);
  v13 = StringLiteral_20951/*"joint_sideflip_"*/;
  v14 = BattleFBXComponent_TypeInfo->static_fields;
  v14->sideflipMarker = (struct System_String_o *)StringLiteral_20951/*"joint_sideflip_"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v14->sideflipMarker, v13, v15, v16);
  v17 = StringLiteral_18977/*"en_item_"*/;
  v18 = BattleFBXComponent_TypeInfo->static_fields;
  v18->enItemMarker = (struct System_String_o *)StringLiteral_18977/*"en_item_"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v18->enItemMarker, v17, v19, v20);
  v21 = StringLiteral_18981/*"en_weapon_"*/;
  v22 = BattleFBXComponent_TypeInfo->static_fields;
  v22->enWeaponMarker = (struct System_String_o *)StringLiteral_18981/*"en_weapon_"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v22->enWeaponMarker, v21, v23, v24);
  v25 = StringLiteral_2511/*"Assets/AssetStorages/NoblePhantasm/"*/;
  v26 = BattleFBXComponent_TypeInfo->static_fields;
  v26->npPathHead = (struct System_String_o *)StringLiteral_2511/*"Assets/AssetStorages/NoblePhantasm/"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v26->npPathHead, v25, v27, v28);
  v29 = StringLiteral_2512/*"Assets/AssetStorages/Servants/"*/;
  v30 = BattleFBXComponent_TypeInfo->static_fields;
  v30->svtPathHead = (struct System_String_o *)StringLiteral_2512/*"Assets/AssetStorages/Servants/"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v30->svtPathHead, v29, v31, v32);
  v33 = sub_1B88658(string___TypeInfo, 10LL);
  if ( !v33 )
    sub_1B8880C(0LL, v34);
  v37 = v33;
  if ( !*(_DWORD *)(v33 + 24) )
    goto LABEL_15;
  v38 = StringLiteral_6375/*"FGO_CH/Base"*/;
  *(_QWORD *)(v33 + 32) = StringLiteral_6375/*"FGO_CH/Base"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v33 + 32), v38, v35, v36);
  if ( *(_DWORD *)(v37 + 24) <= 1u )
    goto LABEL_15;
  v41 = StringLiteral_6373/*"FGO_CH/AlphaBlendSingle"*/;
  *(_QWORD *)(v37 + 40) = StringLiteral_6373/*"FGO_CH/AlphaBlendSingle"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v37 + 40), v41, v39, v40);
  if ( *(_DWORD *)(v37 + 24) <= 2u )
    goto LABEL_15;
  v44 = StringLiteral_6371/*"FGO_Battle/Particle/Base"*/;
  *(_QWORD *)(v37 + 48) = StringLiteral_6371/*"FGO_Battle/Particle/Base"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v37 + 48), v44, v42, v43);
  if ( *(_DWORD *)(v37 + 24) <= 3u )
    goto LABEL_15;
  v47 = StringLiteral_7227/*"Hidden/Particle/MultiplyAdd"*/;
  *(_QWORD *)(v37 + 56) = StringLiteral_7227/*"Hidden/Particle/MultiplyAdd"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v37 + 56), v47, v45, v46);
  if ( *(_DWORD *)(v37 + 24) <= 4u )
    goto LABEL_15;
  v50 = StringLiteral_7229/*"Hidden/Particle/MultiplyAdd1Pass"*/;
  *(_QWORD *)(v37 + 64) = StringLiteral_7229/*"Hidden/Particle/MultiplyAdd1Pass"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v37 + 64), v50, v48, v49);
  if ( *(_DWORD *)(v37 + 24) <= 5u )
    goto LABEL_15;
  v53 = StringLiteral_6374/*"FGO_CH/AlphaBlendSingleFlat"*/;
  *(_QWORD *)(v37 + 72) = StringLiteral_6374/*"FGO_CH/AlphaBlendSingleFlat"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v37 + 72), v53, v51, v52);
  if ( *(_DWORD *)(v37 + 24) <= 6u )
    goto LABEL_15;
  v56 = StringLiteral_6372/*"FGO_Battle/Particle/Base-Stencil"*/;
  *(_QWORD *)(v37 + 80) = StringLiteral_6372/*"FGO_Battle/Particle/Base-Stencil"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v37 + 80), v56, v54, v55);
  if ( *(_DWORD *)(v37 + 24) <= 7u
    || (v59 = StringLiteral_7228/*"Hidden/Particle/MultiplyAdd-Stencil"*/,
        *(_QWORD *)(v37 + 88) = StringLiteral_7228/*"Hidden/Particle/MultiplyAdd-Stencil"*/,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v37 + 88), v59, v57, v58),
        *(_DWORD *)(v37 + 24) <= 8u)
    || (v62 = StringLiteral_7230/*"Hidden/Particle/MultiplyAdd1Pass-Stencil"*/,
        *(_QWORD *)(v37 + 96) = StringLiteral_7230/*"Hidden/Particle/MultiplyAdd1Pass-Stencil"*/,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v37 + 96), v62, v60, v61),
        *(_DWORD *)(v37 + 24) <= 9u) )
  {
LABEL_15:
    sub_1B88814(v33, v34);
  }
  v65 = StringLiteral_6376/*"FGO_CH/SingleFlat"*/;
  *(_QWORD *)(v37 + 104) = StringLiteral_6376/*"FGO_CH/SingleFlat"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v37 + 104), v65, v63, v64);
  v66 = BattleFBXComponent_TypeInfo->static_fields;
  v66->yTransparenceShaderNames = (struct System_String_array *)v37;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v66->yTransparenceShaderNames, v37, v67, v68);
}


void __fastcall BattleFBXComponent___ctor(BattleFBXComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_Collections_Generic_Dictionary_object__object__o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  System_Collections_Generic_List_object__o *v9; // x20
  int32_t v10; // w2
  int32_t v11; // w3
  System_Collections_Generic_Dictionary_object__object__o *v12; // x20
  int32_t v13; // w2
  int32_t v14; // w3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v15; // x20
  int32_t v16; // w2
  int32_t v17; // w3

  if ( (byte_4A5D722 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__string___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__GameObject___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_KeyValuePair_string__Material___float___ctor__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_string__GameObject__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_Dictionary_string__string__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_Dictionary_KeyValuePair_string__Material___float__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Renderer___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_Renderer__TypeInfo);
    byte_4A5D722 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_string__string__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v3,
    (const MethodInfo_31C6818 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  this->fields.RealAnimNames = (struct System_Collections_Generic_Dictionary_string__string__o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.RealAnimNames, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_string__string__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v6,
    (const MethodInfo_31C6818 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  this->fields.CommonAnimNames = (struct System_Collections_Generic_Dictionary_string__string__o *)v6;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.CommonAnimNames, (int32_t)v6, v7, v8);
  this->fields.timescale = 1.0;
  v9 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_Renderer__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_Renderer___ctor__);
  this->fields.enableRendererList = (struct System_Collections_Generic_List_Renderer__o *)v9;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.enableRendererList, (int32_t)v9, v10, v11);
  v12 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_string__GameObject__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v12,
    (const MethodInfo_31C6818 *)Method_System_Collections_Generic_Dictionary_string__GameObject___ctor__);
  this->fields.actorEffectDict = (struct System_Collections_Generic_Dictionary_string__GameObject__o *)v12;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.actorEffectDict, (int32_t)v12, v13, v14);
  v15 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B887FC(System_Collections_Generic_Dictionary_KeyValuePair_string__Material___float__TypeInfo);
  System_Collections_Generic_Dictionary_KeyValuePair_object__object___float____ctor(
    v15,
    (const MethodInfo_312DBBC *)Method_System_Collections_Generic_Dictionary_KeyValuePair_string__Material___float___ctor__);
  this->fields.tempMaterialPropertyDict = (struct System_Collections_Generic_Dictionary_KeyValuePair_string__Material___float__o *)v15;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.tempMaterialPropertyDict, (int32_t)v15, v16, v17);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleFBXComponent__AnimUpdate(BattleFBXComponent_o *this, float deltaTime, const MethodInfo *method)
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
  struct BattleFBXComponent_AnimEvent_array_array *eventlist; // x8
  BattleFBXComponent_AnimEvent_array *v58; // x24
  int currentEventIndex; // w25
  __int64 j; // x8
  BattleFBXComponent_AnimEvent_o *v61; // x20
  float time; // s0
  float v63; // s1
  bool v64; // nf
  float v65; // s1
  UnityEngine_Object_o *v66; // x21
  __int64 v67; // x8
  __int64 v68; // x21
  __int64 v69; // x9
  SimpleAnimation_State_c **v70; // x10
  __int64 v71; // x0
  _BOOL4 isDirty; // w27
  UnityEngine_Object_o *billBoard; // x21
  const MethodInfo *v74; // x2
  _BOOL4 v75; // w8
  BattleFBXComponent_c *v76; // x0
  UnityEngine_Object_o *v77; // x20
  float animFps; // s8
  float v79; // s0
  int v80; // w21
  __int64 v81; // x8
  __int64 v82; // x20
  __int64 v83; // x9
  SimpleAnimation_State_c **v84; // x10
  __int64 v85; // x0

  v3 = *(long double *)&deltaTime;
  if ( (byte_4A5D6FF & 1) == 0 )
  {
    sub_1B885B0(&AnimationList_TypeInfo);
    sub_1B885B0(&BattleFBXComponent_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&SimpleAnimation_State_TypeInfo);
    byte_4A5D6FF = 1;
  }
  v5 = this->fields.timescale * *(float *)&v3;
  if ( v5 == 0.0 || this->fields.isStop )
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
  v12 = (UnityEngine_Object_o *)this->fields.animationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v12, 0LL, 0LL) )
  {
    v18 = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v18, 0LL, 0LL) )
      goto LABEL_102;
    wrapMode = (__int64)this->fields.simpleAnimationComponent;
    if ( wrapMode )
    {
      wrapMode = (__int64)SimpleAnimation__get_Item((SimpleAnimation_o *)wrapMode, this->fields.currentAnimName, 0LL);
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
          v24 = sub_1BDA590(wrapMode, SimpleAnimation_State_TypeInfo, 14LL);
        }
        wrapMode = (*(__int64 (__fastcall **)(__int64, _QWORD))v24)(v21, *(_QWORD *)(v24 + 8));
        if ( wrapMode )
        {
          if ( currentAnimTime < UnityEngine_AnimationClip__get_length((UnityEngine_AnimationClip_o *)wrapMode, 0LL) )
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
            v28 = sub_1BDA590(v21, SimpleAnimation_State_TypeInfo, 19LL);
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
            v32 = sub_1BDA590(v21, SimpleAnimation_State_TypeInfo, 14LL);
          }
          wrapMode = (*(__int64 (__fastcall **)(__int64, _QWORD))v32)(v21, *(_QWORD *)(v32 + 8));
          if ( wrapMode )
          {
            if ( UnityEngine_Motion__get_isLooping((UnityEngine_Motion_o *)wrapMode, 0LL) )
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
                  v45 = sub_1BDA590(v21, SimpleAnimation_State_TypeInfo, 14LL);
                }
                wrapMode = (*(__int64 (__fastcall **)(__int64, _QWORD))v45)(v21, *(_QWORD *)(v45 + 8));
                if ( !wrapMode )
                  goto LABEL_39;
                if ( i < UnityEngine_AnimationClip__get_length((UnityEngine_AnimationClip_o *)wrapMode, 0LL) )
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
                  v50 = sub_1BDA590(v21, SimpleAnimation_State_TypeInfo, 14LL);
                }
                wrapMode = (*(__int64 (__fastcall **)(__int64, _QWORD))v50)(v21, *(_QWORD *)(v50 + 8));
                if ( !wrapMode )
                  goto LABEL_39;
                i = v47 - UnityEngine_AnimationClip__get_length((UnityEngine_AnimationClip_o *)wrapMode, 0LL);
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
              v36 = sub_1BDA590(v21, SimpleAnimation_State_TypeInfo, 19LL);
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
              v40 = sub_1BDA590(v21, SimpleAnimation_State_TypeInfo, 17LL);
            }
            if ( (*(unsigned int (__fastcall **)(__int64, _QWORD))v40)(v21, *(_QWORD *)(v40 + 8)) != 2 )
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
    sub_1B8880C(wrapMode, v8);
  }
  wrapMode = (__int64)this->fields.animationComponent;
  if ( !wrapMode )
    goto LABEL_39;
  v13 = this->fields.currentAnimTime;
  wrapMode = (__int64)UnityEngine_Animation__get_Item(
                        (UnityEngine_Animation_o *)wrapMode,
                        this->fields.currentAnimName,
                        0LL);
  if ( !wrapMode )
    goto LABEL_39;
  if ( v13 >= UnityEngine_AnimationState__get_length((UnityEngine_AnimationState_o *)wrapMode, 0LL) )
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
        v14 = this->fields.animationComponent;
        if ( (_DWORD)wrapMode == 2 )
        {
          if ( v14 )
          {
            v15 = this->fields.currentAnimTime;
            do
            {
              wrapMode = (__int64)UnityEngine_Animation__get_Item(v14, this->fields.currentAnimName, 0LL);
              if ( !wrapMode )
                break;
              if ( v15 < UnityEngine_AnimationState__get_length((UnityEngine_AnimationState_o *)wrapMode, 0LL) )
                goto LABEL_101;
              wrapMode = (__int64)this->fields.animationComponent;
              if ( !wrapMode )
                break;
              v16 = this->fields.currentAnimTime;
              wrapMode = (__int64)UnityEngine_Animation__get_Item(
                                    (UnityEngine_Animation_o *)wrapMode,
                                    this->fields.currentAnimName,
                                    0LL);
              if ( !wrapMode )
                break;
              length = UnityEngine_AnimationState__get_length((UnityEngine_AnimationState_o *)wrapMode, 0LL);
              v14 = this->fields.animationComponent;
              v15 = v16 - length;
              this->fields.currentAnimTime = v15;
            }
            while ( v14 );
          }
        }
        else if ( v14 )
        {
          UnityEngine_Animation__Stop(v14, 0LL);
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
  if ( UnityEngine_Object__op_Inequality(v51, 0LL, 0LL) && this->fields.currentAnimName )
  {
    v52 = (UnityEngine_Object_o *)this->fields.animationComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v52, 0LL, 0LL) )
    {
      wrapMode = (__int64)this->fields.animationComponent;
      if ( !wrapMode )
        goto LABEL_39;
      if ( UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)wrapMode, 0LL) )
      {
        wrapMode = (__int64)this->fields.animationComponent;
        if ( !wrapMode )
          goto LABEL_39;
        v53 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                                  (UnityEngine_Animation_o *)wrapMode,
                                                  this->fields.currentAnimName,
                                                  0LL);
        if ( UnityEngine_TrackedReference__op_Inequality(v53, 0LL, 0LL) )
          goto LABEL_120;
      }
    }
    v54 = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v54, 0LL, 0LL) )
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
        wrapMode = AnimationList__getIndex(currentCommonAnimName, 0LL);
        if ( (wrapMode & 0x80000000) == 0 )
        {
          eventlist = this->fields.eventlist;
          if ( !eventlist )
            goto LABEL_39;
          if ( (unsigned int)wrapMode >= eventlist->max_length )
LABEL_190:
            sub_1B88814(wrapMode, v8);
          v58 = eventlist->m_Items[(unsigned int)wrapMode];
          if ( v58 )
          {
            currentEventIndex = this->fields.currentEventIndex;
            for ( j = *(_QWORD *)&v58->max_length; currentEventIndex < (int)j; ++currentEventIndex )
            {
              if ( currentEventIndex >= (unsigned int)j )
                goto LABEL_190;
              v61 = v58->m_Items[currentEventIndex];
              if ( !v61 )
                goto LABEL_39;
              time = v61->fields.time;
              v63 = this->fields.currentAnimTime;
              v64 = time < v63;
              v65 = v5 + v63;
              if ( v64 || time >= v65 )
              {
                if ( time >= v65 )
                {
                  this->fields.currentEventIndex = currentEventIndex;
                  break;
                }
              }
              else
              {
                v66 = (UnityEngine_Object_o *)this->fields.animationComponent;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(v66, 0LL, 0LL) )
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
                  UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)wrapMode, v61->fields.time, 0LL);
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
                  v67 = *(_QWORD *)wrapMode;
                  *(float *)&v3 = v61->fields.time;
                  v68 = wrapMode;
                  v69 = *(unsigned __int16 *)(*(_QWORD *)wrapMode + 302LL);
                  if ( *(_WORD *)(*(_QWORD *)wrapMode + 302LL) )
                  {
                    v70 = (SimpleAnimation_State_c **)(*(_QWORD *)(v67 + 176) + 8LL);
                    while ( *(v70 - 1) != SimpleAnimation_State_TypeInfo )
                    {
                      --v69;
                      v70 += 2;
                      if ( !v69 )
                        goto LABEL_150;
                    }
                    v71 = v67 + 16LL * (*(_DWORD *)v70 + 4) + 312;
                  }
                  else
                  {
LABEL_150:
                    v71 = sub_1BDA590(wrapMode, SimpleAnimation_State_TypeInfo, 4LL);
                  }
                  (*(void (__fastcall **)(__int64, _QWORD, long double))v71)(v68, *(_QWORD *)(v71 + 8), v3);
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
                BattleFBXComponent__OnAnimEvent(this, v61, v74);
                v75 = this->fields.isDirty;
                this->fields.isDirty = v75 || isDirty;
                if ( v75 || isDirty )
                {
                  if ( !v75 )
                    this->fields.currentAnimTime = v61->fields.time;
                  this->fields.isDirty = 0;
                  return;
                }
                j = *(_QWORD *)&v58->max_length;
              }
            }
          }
        }
      }
      v76 = BattleFBXComponent_TypeInfo;
      if ( !BattleFBXComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
        v76 = BattleFBXComponent_TypeInfo;
      }
      v77 = (UnityEngine_Object_o *)this->fields.animationComponent;
      animFps = v76->static_fields->animFps;
      v79 = animFps * this->fields.currentAnimTime;
      if ( v79 == INFINITY )
        v80 = 0x80000000;
      else
        v80 = (int)v79;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v77, 0LL, 0LL) )
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
        UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)wrapMode, (float)v80 / animFps, 0LL);
      }
      else
      {
        wrapMode = (__int64)this->fields.simpleAnimationComponent;
        if ( !wrapMode )
          goto LABEL_39;
        wrapMode = (__int64)SimpleAnimation__get_Item((SimpleAnimation_o *)wrapMode, this->fields.currentAnimName, 0LL);
        if ( !wrapMode )
          goto LABEL_39;
        v81 = *(_QWORD *)wrapMode;
        v82 = wrapMode;
        v83 = *(unsigned __int16 *)(*(_QWORD *)wrapMode + 302LL);
        *(float *)&v3 = (float)v80 / animFps;
        if ( *(_WORD *)(*(_QWORD *)wrapMode + 302LL) )
        {
          v84 = (SimpleAnimation_State_c **)(*(_QWORD *)(v81 + 176) + 8LL);
          while ( *(v84 - 1) != SimpleAnimation_State_TypeInfo )
          {
            --v83;
            v84 += 2;
            if ( !v83 )
              goto LABEL_182;
          }
          v85 = v81 + 16LL * (*(_DWORD *)v84 + 4) + 312;
        }
        else
        {
LABEL_182:
          v85 = sub_1BDA590(wrapMode, SimpleAnimation_State_TypeInfo, 4LL);
        }
        (*(void (__fastcall **)(__int64, _QWORD, long double))v85)(v82, *(_QWORD *)(v85 + 8), v3);
      }
      this->fields.currentAnimTime = v5 + this->fields.currentAnimTime;
    }
  }
}


System_Collections_IEnumerator_o *__fastcall BattleFBXComponent__AnimationCheck(
        BattleFBXComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A5D710 & 1) == 0 )
  {
    sub_1B885B0(&BattleFBXComponent__AnimationCheck_d__69_TypeInfo);
    byte_4A5D710 = 1;
  }
  v3 = sub_1B887FC(BattleFBXComponent__AnimationCheck_d__69_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v4, v5);
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
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  Il2CppObject *Component_object; // x20
  int32_t ServantId; // w21
  int32_t LimitCount; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4A5D704 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5D704 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
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
    sub_1B8880C(gameObject, v4);
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
  System_String_o *CommonAnimNames; // x23
  UnityEngine_Object_o *Manager__loadActorEffectFromActor; // x21
  bool v11; // w8
  Il2CppObject *v12; // x21
  bool v13; // w8
  Il2CppObject *v14; // x22
  int32_t v15; // w2
  int32_t v16; // w3
  UnityEngine_Transform_o *transform; // x23
  BattleFBXComponent_o *v18; // x23
  BattleFBXComponent_o *v19; // x23
  BattleFBXComponent_o *v20; // x23
  int32_t v21; // w2
  int32_t v22; // w3
  __int64 v23; // x8
  _QWORD *v24; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v26; // x8
  System_Collections_Generic_Dictionary_object__object__o *actorEffectDict; // x22
  System_String_o *name; // x0
  BattleFBXComponent_o *v29; // x20
  bool v30; // w8
  Il2CppObject *v31; // x1
  BattleFBXComponent_o *v32; // x19

  v8 = this;
  if ( (byte_4A5D706 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__GameObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__GameObject__ContainsKey__);
    sub_1B885B0(&Method_UnityEngine_GameObject_AddComponent_ObjectScaleEnabler___);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&ServantAssetLoadManager_TypeInfo);
    this = (BattleFBXComponent_o *)sub_1B885B0(&StringLiteral_16524/*"_aDd"*/);
    byte_4A5D706 = 1;
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
    sub_1B88814(this, node);
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
  v11 = UnityEngine_Object__op_Inequality(Manager__loadActorEffectFromActor, 0LL, 0LL);
  this = 0LL;
  if ( v11 )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v12 = UnityEngine_Object__Instantiate_object_(
            (Il2CppObject *)Manager__loadActorEffectFromActor,
            (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    v13 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v12, 0LL, 0LL);
    this = 0LL;
    if ( v13 )
    {
      if ( v12 )
      {
        v14 = UnityEngine_GameObject__AddComponent_object_(
                (UnityEngine_GameObject_o *)v12,
                (const MethodInfo_2ECEDD0 *)Method_UnityEngine_GameObject_AddComponent_ObjectScaleEnabler___);
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v12, 0, 0LL);
        if ( v14 )
        {
          v14[2].klass = (Il2CppClass *)node;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&v14[2], (int32_t)node, v15, v16);
          transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v12, 0LL);
          this = (BattleFBXComponent_o *)UnityEngine_Transform__get_parent(node, 0LL);
          if ( this )
          {
            this = (BattleFBXComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
            if ( transform )
            {
              UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)this, 0LL);
              this = (BattleFBXComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v12, 0LL);
              v18 = this;
              if ( !byte_4A55CE1 )
              {
                this = (BattleFBXComponent_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
                byte_4A55CE1 = 1;
              }
              if ( v18 )
              {
                UnityEngine_Transform__set_localPosition(
                  (UnityEngine_Transform_o *)v18,
                  UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
                  0LL);
                this = (BattleFBXComponent_o *)UnityEngine_GameObject__get_transform(
                                                 (UnityEngine_GameObject_o *)v12,
                                                 0LL);
                v19 = this;
                if ( !byte_4A55CE1 )
                {
                  this = (BattleFBXComponent_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
                  byte_4A55CE1 = 1;
                }
                if ( v19 )
                {
                  UnityEngine_Transform__set_localEulerAngles(
                    (UnityEngine_Transform_o *)v19,
                    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
                    0LL);
                  this = (BattleFBXComponent_o *)UnityEngine_GameObject__get_transform(
                                                   (UnityEngine_GameObject_o *)v12,
                                                   0LL);
                  v20 = this;
                  if ( !byte_4A55CE6 )
                  {
                    this = (BattleFBXComponent_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
                    byte_4A55CE6 = 1;
                  }
                  if ( v20 )
                  {
                    UnityEngine_Transform__set_localScale(
                      (UnityEngine_Transform_o *)v20,
                      UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
                      0LL);
                    ObjectScaleEnabler__OnUpdate((ObjectScaleEnabler_o *)v14, 0LL);
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v12, 1, 0LL);
                    this = (BattleFBXComponent_o *)v8->fields.PrefabNodes;
                    if ( this )
                    {
                      v23 = *(_QWORD *)&this->fields.m_CachedPtr;
                      v24 = Method_System_Collections_Generic_List_GameObject__Add__;
                      ++HIDWORD(this->fields.m_CancellationTokenSource);
                      if ( v23 )
                      {
                        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
                        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v23 + 24) )
                        {
                          System_Collections_Generic_List_object___AddWithResize(
                            (System_Collections_Generic_List_object__o *)this,
                            v12,
                            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
                        }
                        else
                        {
                          v26 = v23 + 8 * m_CancellationTokenSource_low;
                          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
                          *(_QWORD *)(v26 + 32) = v12;
                          sub_1B88554((ServantStatusBattleListViewItem_o *)(v26 + 32), (int32_t)v12, v21, v22);
                        }
                        actorEffectDict = (System_Collections_Generic_Dictionary_object__object__o *)v8->fields.actorEffectDict;
                        this = (BattleFBXComponent_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)node, 0LL);
                        if ( actorEffectDict )
                        {
                          if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                 actorEffectDict,
                                 (Il2CppObject *)this,
                                 (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__GameObject__ContainsKey__) )
                          {
                            name = UnityEngine_Object__get_name((UnityEngine_Object_o *)node, 0LL);
                            this = (BattleFBXComponent_o *)System_String__Concat_61707032(
                                                             name,
                                                             (System_String_o *)StringLiteral_16524/*"_aDd"*/,
                                                             0LL);
                            if ( v8->fields.actorEffectDict )
                            {
                              v29 = this;
                              v30 = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                      (System_Collections_Generic_Dictionary_object__object__o *)v8->fields.actorEffectDict,
                                      (Il2CppObject *)this,
                                      (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__GameObject__ContainsKey__);
                              this = (BattleFBXComponent_o *)v12;
                              if ( v30 )
                                return (UnityEngine_GameObject_o *)this;
                              this = (BattleFBXComponent_o *)v8->fields.actorEffectDict;
                              if ( this )
                              {
                                v31 = (Il2CppObject *)v29;
LABEL_41:
                                System_Collections_Generic_Dictionary_object__object___Add(
                                  (System_Collections_Generic_Dictionary_object__object__o *)this,
                                  v31,
                                  v12,
                                  (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__GameObject__Add__);
                                return (UnityEngine_GameObject_o *)v12;
                              }
                            }
                          }
                          else
                          {
                            v32 = (BattleFBXComponent_o *)v8->fields.actorEffectDict;
                            this = (BattleFBXComponent_o *)UnityEngine_Object__get_name(
                                                             (UnityEngine_Object_o *)node,
                                                             0LL);
                            if ( v32 )
                            {
                              v31 = (Il2CppObject *)this;
                              this = v32;
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
      sub_1B8880C(this, node);
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
  struct System_Collections_Generic_List_GameObject__o *PrefabNodes; // x0
  Il2CppObject *current; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  struct System_Collections_Generic_List_GameObject__o *v7; // x8
  int32_t size; // w2
  int v9; // w9
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A5D703 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5D703 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  PrefabNodes = this->fields.PrefabNodes;
  if ( PrefabNodes )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v10,
      (System_Collections_Generic_List_object__o *)PrefabNodes,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v10,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v10.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69459380((UnityEngine_Object_o *)current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v10,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    v7 = this->fields.PrefabNodes;
    if ( !v7 )
      sub_1B8880C(v5, v6);
    size = v7->fields._size;
    v9 = v7->fields._version + 1;
    v7->fields._size = 0;
    v7->fields._version = v9;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v7->fields._items, 0, size, 0LL);
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

  if ( (byte_4A5D714 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1B885B0(&StringLiteral_731/*"(Clone)"*/);
    byte_4A5D714 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  PrefabNodes = this->fields.PrefabNodes;
  if ( !PrefabNodes )
    sub_1B8880C(0LL, name);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v19,
    (System_Collections_Generic_List_object__o *)PrefabNodes,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v20 = v19;
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v20,
           (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    if ( !v6 )
      break;
    current = v20.fields._current;
    if ( !v20.fields._current )
      sub_1B8880C(v6, v7);
    transform = (UnityEngine_Object_o *)UnityEngine_GameObject__get_transform(
                                          (UnityEngine_GameObject_o *)v20.fields._current,
                                          0LL);
    if ( !transform )
      sub_1B8880C(0LL, v10);
    v11 = UnityEngine_Object__get_name(transform, 0LL);
    v13 = v11;
    if ( !v11 )
      sub_1B8880C(0LL, v12);
    v14 = StringLiteral_731/*"(Clone)"*/;
    v15 = System_String__EndsWith(v11, (System_String_o *)StringLiteral_731/*"(Clone)"*/, 0LL);
    if ( v15 )
    {
      if ( !v14 )
        sub_1B8880C(v15, v16);
      v13 = System_String__Substring_61726036(v13, 0, v13->fields._stringLength - v14[4], 0LL);
      if ( !v13 )
        sub_1B8880C(0LL, v17);
    }
    if ( System_String__Equals_61715348(v13, name, 0LL) )
      goto LABEL_15;
  }
  current = 0LL;
LABEL_15:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v20,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (UnityEngine_GameObject_o *)current;
}


System_String_o *__fastcall BattleFBXComponent__GetRealAnimName(
        BattleFBXComponent_o *this,
        System_String_o *targetName,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__string__o *RealAnimNames; // x0
  __int64 v6; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *v7; // x0

  if ( (byte_4A5D71F & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    byte_4A5D71F = 1;
  }
  RealAnimNames = this->fields.RealAnimNames;
  if ( !RealAnimNames
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)RealAnimNames,
          (Il2CppObject *)targetName,
          (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
  {
    return targetName;
  }
  v7 = this->fields.RealAnimNames;
  if ( !v7 )
    sub_1B8880C(0LL, v6);
  return (System_String_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                              (System_Collections_Generic_Dictionary_object__object__o *)v7,
                              (Il2CppObject *)targetName,
                              (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
}


void __fastcall BattleFBXComponent__InitAnimNameDict(BattleFBXComponent_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__string__o *RealAnimNames; // x0

  if ( (byte_4A5D6FD & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__string__Clear__);
    byte_4A5D6FD = 1;
  }
  RealAnimNames = this->fields.RealAnimNames;
  if ( !RealAnimNames
    || (System_Collections_Generic_Dictionary_object__object___Clear(
          (System_Collections_Generic_Dictionary_object__object__o *)RealAnimNames,
          (const MethodInfo_31C7350 *)Method_System_Collections_Generic_Dictionary_string__string__Clear__),
        (RealAnimNames = this->fields.CommonAnimNames) == 0LL) )
  {
    sub_1B8880C(RealAnimNames, method);
  }
  System_Collections_Generic_Dictionary_object__object___Clear(
    (System_Collections_Generic_Dictionary_object__object__o *)RealAnimNames,
    (const MethodInfo_31C7350 *)Method_System_Collections_Generic_Dictionary_string__string__Clear__);
}


bool __fastcall BattleFBXComponent__IsYTransparenceShader(BattleFBXComponent_o *this, const MethodInfo *method)
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
  int32_t v12; // w3
  BattleFBXComponent_c *v13; // x0
  System_Object_array *yTransparenceShaderNames; // x23
  System_Func_object__bool__o *v15; // x24

  if ( (byte_4A5D717 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Any_string____76089000);
    sub_1B885B0(&BattleFBXComponent_TypeInfo);
    sub_1B885B0(&System_Func_string__bool__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Renderer__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Renderer__get_Item__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_BattleFBXComponent___c__DisplayClass79_0__IsYTransparenceShader_b__0__);
    sub_1B885B0(&BattleFBXComponent___c__DisplayClass79_0_TypeInfo);
    byte_4A5D717 = 1;
  }
  enableRendererList = (System_Collections_Generic_List_object__o *)this->fields.enableRendererList;
  if ( !enableRendererList )
LABEL_26:
    sub_1B8880C(enableRendererList, method);
  v3 = 0;
  while ( 1 )
  {
    size = enableRendererList->fields._size;
    if ( v3 >= size )
      return v3 < size;
    Item = System_Collections_Generic_List_object___get_Item(
             enableRendererList,
             v3,
             (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_Renderer__get_Item__);
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
        v6 = *(_QWORD *)&enableRendererList->fields._size;
        v7 = enableRendererList;
        if ( (int)v6 >= 1 )
        {
          v8 = 0LL;
          do
          {
            if ( v8 >= (unsigned int)v6 )
              sub_1B88814(enableRendererList, method);
            v9 = (UnityEngine_Object_o *)*((_QWORD *)&v7->fields._syncRoot + v8);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            enableRendererList = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Inequality(
                                                                                v9,
                                                                                0LL,
                                                                                0LL);
            if ( ((unsigned __int8)enableRendererList & 1) != 0 )
            {
              v10 = sub_1B887FC(BattleFBXComponent___c__DisplayClass79_0_TypeInfo);
              System_Object___ctor((Il2CppObject *)v10, 0LL);
              if ( !v9 )
                goto LABEL_26;
              enableRendererList = (System_Collections_Generic_List_object__o *)UnityEngine_Material__get_shader(
                                                                                  (UnityEngine_Material_o *)v9,
                                                                                  0LL);
              if ( !enableRendererList )
                goto LABEL_26;
              enableRendererList = (System_Collections_Generic_List_object__o *)UnityEngine_Object__get_name(
                                                                                  (UnityEngine_Object_o *)enableRendererList,
                                                                                  0LL);
              if ( !v10 )
                goto LABEL_26;
              *(_QWORD *)(v10 + 16) = enableRendererList;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v10 + 16), (int32_t)enableRendererList, v11, v12);
              v13 = BattleFBXComponent_TypeInfo;
              if ( !BattleFBXComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
                v13 = BattleFBXComponent_TypeInfo;
              }
              yTransparenceShaderNames = (System_Object_array *)v13->static_fields->yTransparenceShaderNames;
              v15 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_string__bool__TypeInfo);
              System_Func_object__bool____ctor(
                v15,
                (Il2CppObject *)v10,
                Method_BattleFBXComponent___c__DisplayClass79_0__IsYTransparenceShader_b__0__,
                0LL);
              enableRendererList = (System_Collections_Generic_List_object__o *)BasicHelper__Any_object__48672124(
                                                                                  yTransparenceShaderNames,
                                                                                  (System_Func_T__bool__o *)v15,
                                                                                  (const MethodInfo_2E6AD7C *)Method_BasicHelper_Any_string____76089000);
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


void __fastcall BattleFBXComponent__OnAnimEvent(
        BattleFBXComponent_o *this,
        BattleFBXComponent_AnimEvent_o *ev,
        const MethodInfo *method)
{
  BattleFBXComponent_c *v5; // x0
  struct BattleFBXComponent_onEventDelegate_o *OnEvent; // x8

  if ( (byte_4A5D701 & 1) == 0 )
  {
    sub_1B885B0(&BattleFBXComponent_TypeInfo);
    byte_4A5D701 = 1;
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
        sub_1B8880C(v5, ev);
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, struct System_String_o *, _QWORD))OnEvent->fields.m_target)(
        OnEvent->fields.original_method_info,
        ev->fields.tag,
        *(_QWORD *)&OnEvent->fields.extra_arg);
    }
  }
}


void __fastcall BattleFBXComponent__OnAnimEvent_42738740(
        BattleFBXComponent_o *this,
        UnityEngine_AnimationEvent_o *ev,
        const MethodInfo *method)
{
  System_String_o *stringParameter; // x0
  struct BattleFBXComponent_onEventDelegate_o *OnEvent; // x8

  if ( (byte_4A5D711 & 1) == 0 )
  {
    sub_1B885B0(&BattleFBXComponent_TypeInfo);
    byte_4A5D711 = 1;
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
      sub_1B88814(stringParameter, ev);
    OnEvent = this->fields.OnEvent;
    if ( !OnEvent )
LABEL_13:
      sub_1B8880C(stringParameter, ev);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, void *, _QWORD))OnEvent->fields.m_target)(
      OnEvent->fields.original_method_info,
      stringParameter[1].monitor,
      *(_QWORD *)&OnEvent->fields.extra_arg);
  }
}


void __fastcall BattleFBXComponent__OnEnable(BattleFBXComponent_o *this, const MethodInfo *method)
{
  System_String_o *animename; // x0
  const MethodInfo *v4; // x2
  System_String_o *v5; // x20
  System_String_o *v6; // x0
  System_String_o *v7; // x0
  const MethodInfo *v8; // x2
  System_Enum_o v9; // [xsp+8h] [xbp-48h] BYREF
  int v10; // [xsp+18h] [xbp-38h]

  if ( (byte_4A5D713 & 1) == 0 )
  {
    sub_1B885B0(&HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo);
    sub_1B885B0(&StringLiteral_24600/*"wait"*/);
    byte_4A5D713 = 1;
  }
  animename = this->fields.animename;
  if ( animename )
  {
    if ( System_String__StartsWith(animename, (System_String_o *)StringLiteral_24600/*"wait"*/, 0LL) )
    {
      BattleFBXComponent__playAnimation(this, (System_String_o *)StringLiteral_24600/*"wait"*/, v4);
    }
    else
    {
      v5 = this->fields.animename;
      v10 = 46;
      v9.klass = (System_Enum_c *)HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo;
      v9.monitor = (void *)-1LL;
      v6 = System_Enum__ToString(&v9, 0LL);
      if ( System_String__op_Equality(v5, v6, 0LL) )
      {
        v10 = 46;
        v9.klass = (System_Enum_c *)HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo;
        v9.monitor = (void *)-1LL;
        v7 = System_Enum__ToString(&v9, 0LL);
        BattleFBXComponent__playAnimation(this, v7, v8);
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
  int32_t v9; // w3
  UnityEngine_Object_o *animationComponent; // x20
  UnityEngine_Object_o *defAnimClip; // x21

  if ( (byte_4A5D721 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5D721 = 1;
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
        sub_1B88554((ServantStatusBattleListViewItem_o *)p_defSimpleAnimClip, 0, v8, v9);
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
      sub_1B8880C(v7, v6);
    }
  }
}


void __fastcall BattleFBXComponent__RevertShaderFloatProperty(BattleFBXComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *tempMaterialPropertyDict; // x0
  __int128 v4; // kr00_16
  float v5; // s8
  _BOOL8 v6; // x0
  __int64 v7; // x1
  __int128 v8; // [xsp+0h] [xbp-80h] BYREF
  __int128 v9; // [xsp+10h] [xbp-70h]
  __int128 v10; // [xsp+20h] [xbp-60h]

  if ( (byte_4A5D71A & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_KeyValuePair_string__Material___float__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_KeyValuePair_string__Material___float__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_string__Material___float__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_string__Material___float__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_string__Material___float__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_KeyValuePair_string__Material___float__get_Key__);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_string__Material__get_Key__);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_KeyValuePair_string__Material___float__get_Value__);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_string__Material__get_Value__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5D71A = 1;
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
    (const MethodInfo_312E9D4 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_string__Material___float__GetEnumerator__);
  while ( System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_object__object___float___MoveNext(
            (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v8,
            (const MethodInfo_32AB5E4 *)Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_string__Material___float__MoveNext__) )
  {
    v4 = v9;
    v5 = *(float *)&v10;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = UnityEngine_Object__op_Inequality(*((UnityEngine_Object_o **)&v4 + 1), 0LL, 0LL);
    if ( v6 )
    {
      if ( !*((_QWORD *)&v4 + 1) )
        sub_1B8880C(v6, v7);
      UnityEngine_Material__SetFloat(*((UnityEngine_Material_o **)&v4 + 1), (System_String_o *)v4, v5, 0LL);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_object__object___float___Dispose(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v8,
    (const MethodInfo_32AB720 *)Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_string__Material___float__Dispose__);
  tempMaterialPropertyDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.tempMaterialPropertyDict;
  if ( !tempMaterialPropertyDict )
LABEL_14:
    sub_1B8880C(tempMaterialPropertyDict, method);
  System_Collections_Generic_Dictionary_KeyValuePair_object__object___float___Clear(
    tempMaterialPropertyDict,
    (const MethodInfo_312E740 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_string__Material___float__Clear__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleFBXComponent__SetActiveActorEffectAll(
        BattleFBXComponent_o *this,
        bool isActive,
        const MethodInfo *method)
{
  _BOOL4 v3; // w19
  struct System_Collections_Generic_Dictionary_string__GameObject__o *actorEffectDict; // x0
  _BOOL8 v6; // x0
  __int64 v7; // x1
  Il2CppObject *value; // x20
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v9; // [xsp+0h] [xbp-60h] BYREF

  v3 = isActive;
  if ( (byte_4A5D71E & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__GameObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__GameObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_string__GameObject__get_Value__);
    byte_4A5D71E = 1;
  }
  memset(&v9, 0, sizeof(v9));
  actorEffectDict = this->fields.actorEffectDict;
  if ( !actorEffectDict )
    sub_1B8880C(0LL, isActive);
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v9,
    (System_Collections_Generic_Dictionary_object__object__o *)actorEffectDict,
    (const MethodInfo_31C75F8 *)Method_System_Collections_Generic_Dictionary_string__GameObject__GetEnumerator__);
  while ( 1 )
  {
    v6 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
           &v9,
           (const MethodInfo_32C3FD0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__GameObject__MoveNext__);
    if ( !v6 )
      break;
    value = v9.fields._current.fields.value;
    if ( !v9.fields._current.fields.value )
      sub_1B8880C(v6, v7);
    if ( ((UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)v9.fields._current.fields.value, 0LL) ^ v3) & 1) != 0 )
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)value, v3, 0LL);
  }
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v9,
    (const MethodInfo_32C40F0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__GameObject__Dispose__);
}


void __fastcall BattleFBXComponent__SetActiveActorEffectFromEffectName(
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
  if ( (byte_4A5D71D & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__GameObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__GameObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_string__GameObject__get_Key__);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_string__GameObject__get_Value__);
    byte_4A5D71D = 1;
  }
  memset(&v13, 0, sizeof(v13));
  actorEffectDict = this->fields.actorEffectDict;
  if ( !actorEffectDict )
    sub_1B8880C(0LL, effectName);
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v12,
    (System_Collections_Generic_Dictionary_object__object__o *)actorEffectDict,
    (const MethodInfo_31C75F8 *)Method_System_Collections_Generic_Dictionary_string__GameObject__GetEnumerator__);
  v13 = v12;
  while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            &v13,
            (const MethodInfo_32C3FD0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__GameObject__MoveNext__) )
  {
    if ( !v13.fields._current.fields.key )
      sub_1B8880C(0LL, v8);
    value = v13.fields._current.fields.value;
    v10 = System_String__Contains((System_String_o *)v13.fields._current.fields.key, effectName, 0LL);
    if ( v10 )
    {
      if ( !value )
        sub_1B8880C(v10, v11);
      if ( ((UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)value, 0LL) ^ v4) & 1) != 0 )
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)value, v4, 0LL);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v13,
    (const MethodInfo_32C40F0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__GameObject__Dispose__);
}


void __fastcall BattleFBXComponent__SetActiveActorEffectFromNodeName(
        BattleFBXComponent_o *this,
        System_String_o *nodeName,
        bool isActive,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *actorEffectDict; // x0
  UnityEngine_GameObject_o *v8; // x20

  if ( (byte_4A5D71C & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__GameObject__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__GameObject__get_Item__);
    byte_4A5D71C = 1;
  }
  actorEffectDict = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.actorEffectDict;
  if ( !actorEffectDict )
    goto LABEL_10;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          actorEffectDict,
          (Il2CppObject *)nodeName,
          (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__GameObject__ContainsKey__) )
    return;
  actorEffectDict = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.actorEffectDict;
  if ( !actorEffectDict
    || (actorEffectDict = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                       actorEffectDict,
                                                                                       (Il2CppObject *)nodeName,
                                                                                       (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__GameObject__get_Item__)) == 0LL )
  {
LABEL_10:
    sub_1B8880C(actorEffectDict, nodeName);
  }
  v8 = (UnityEngine_GameObject_o *)actorEffectDict;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)actorEffectDict, 0LL) != isActive )
    UnityEngine_GameObject__SetActive(v8, isActive, 0LL);
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

  if ( (byte_4A5D715 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5D715 = 1;
  }
  PrefabNode = BattleFBXComponent__GetPrefabNode(this, name, (const MethodInfo *)isConnect);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)PrefabNode, 0LL, 0LL) )
    BattleFBXComponent__SetConnectPrefabNode_42741488(this, PrefabNode, isConnect, v8);
}


void __fastcall BattleFBXComponent__SetConnectPrefabNode_42741488(
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
  if ( (byte_4A5D716 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_BattleActorControl___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_ObjectScaleEnabler___);
    this = (BattleFBXComponent_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5D716 = 1;
  }
  if ( !obj )
    goto LABEL_29;
  if ( isConnect )
  {
    Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 obj,
                                                 (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_ObjectScaleEnabler___);
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
      v9 = this;
      this = (BattleFBXComponent_o *)UnityEngine_Transform__get_parent(monitor, 0LL);
      if ( !this )
        goto LABEL_29;
      this = (BattleFBXComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !v9 )
        goto LABEL_29;
      UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)v9, (UnityEngine_Transform_o *)this, 0LL);
      this = (BattleFBXComponent_o *)UnityEngine_GameObject__get_transform(obj, 0LL);
      v10 = this;
      if ( !byte_4A55CE6 )
      {
        this = (BattleFBXComponent_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
        byte_4A55CE6 = 1;
      }
      if ( !v10 )
        goto LABEL_29;
      UnityEngine_Transform__set_localScale(
        (UnityEngine_Transform_o *)v10,
        UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
        0LL);
      v11 = UnityEngine_Component__GetComponent_object_(
              (UnityEngine_Component_o *)monitor,
              (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_BattleActorControl___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (BattleFBXComponent_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v11, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( v11 )
        {
          BattleActorControl__AddChildNodesRenderer((BattleActorControl_o *)v11, obj, 0LL);
          return;
        }
LABEL_29:
        sub_1B8880C(this, obj);
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
    v13 = UnityEngine_GameObject__GetComponent_object_(
            (UnityEngine_GameObject_o *)this,
            (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattleFBXComponent_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v13, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !v13 )
        goto LABEL_29;
      BattleActorControl__RemoveChildNodesRenderer((BattleActorControl_o *)v13, obj, 0LL);
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
    sub_1B8880C(0LL, svtId);
  gameObject = UnityEngine_Component__get_gameObject(rootTransform, 0LL);
  BattleFBXComponent__inSetEvolutionLevel(this, gameObject, svtId, limitcount, v9);
}


void __fastcall BattleFBXComponent__SetTempDefaultAnimation(
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

  if ( (byte_4A5D720 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&SimpleAnimation_State_TypeInfo);
    byte_4A5D720 = 1;
  }
  if ( !System_String__IsNullOrEmpty(updateAnimName, 0LL) )
  {
    RealAnimName = BattleFBXComponent__GetRealAnimName(this, updateAnimName, v5);
    simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
    v8 = RealAnimName;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v9 = UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0LL, 0LL);
    if ( (v9 & 1) == 0 )
      goto LABEL_18;
    v11 = this->fields.simpleAnimationComponent;
    if ( !v11 )
      goto LABEL_50;
    monitor = (UnityEngine_Object_o *)v11[1].monitor;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
    {
      v9 = (__int64)this->fields.simpleAnimationComponent;
      if ( !v9 )
        goto LABEL_50;
      Item = SimpleAnimation__get_Item((SimpleAnimation_o *)v9, v8, 0LL);
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
          p_method = sub_1BDA590(Item, SimpleAnimation_State_TypeInfo, 14LL);
        }
        v9 = (*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))p_method)(v15, *(_QWORD *)(p_method + 8));
        v29 = this->fields.simpleAnimationComponent;
        if ( !v29 )
          goto LABEL_50;
        v30 = (UnityEngine_Object_o *)v9;
        v31 = (UnityEngine_Object_o *)v29[1].monitor;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v9 = UnityEngine_Object__op_Inequality(v30, v31, 0LL);
        if ( (v9 & 1) != 0 )
        {
          v34 = this->fields.simpleAnimationComponent;
          if ( v34 )
          {
            v35 = (struct UnityEngine_AnimationClip_o *)v34[1].monitor;
            this->fields.defSimpleAnimClip = v35;
            p_defSimpleAnimClip = &this->fields.defSimpleAnimClip;
            sub_1B88554((ServantStatusBattleListViewItem_o *)p_defSimpleAnimClip, (int32_t)v35, v32, v33);
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
              v41 = sub_1BDA590(v15, SimpleAnimation_State_TypeInfo, 14LL);
            }
            v9 = (*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v41)(v15, *(_QWORD *)(v41 + 8));
            if ( v38 )
            {
              SimpleAnimation__set_clip(v38, (UnityEngine_AnimationClip_o *)v9, 0LL);
              return;
            }
          }
LABEL_50:
          sub_1B8880C(v9, v10);
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
        v9 = (__int64)this->fields.animationComponent;
        if ( !v9 )
          goto LABEL_50;
        clip = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip((UnityEngine_Animation_o *)v9, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(clip, 0LL, 0LL) )
        {
          v9 = (__int64)this->fields.animationComponent;
          if ( !v9 )
            goto LABEL_50;
          v21 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                                    (UnityEngine_Animation_o *)v9,
                                                    v8,
                                                    0LL);
          v9 = UnityEngine_TrackedReference__op_Inequality(v21, 0LL, 0LL);
          if ( (v9 & 1) != 0 )
          {
            if ( !v21 )
              goto LABEL_50;
            v9 = (__int64)UnityEngine_AnimationState__get_clip((UnityEngine_AnimationState_o *)v21, 0LL);
            if ( !this->fields.animationComponent )
              goto LABEL_50;
            v22 = (UnityEngine_Object_o *)v9;
            v23 = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(this->fields.animationComponent, 0LL);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(v22, v23, 0LL) )
            {
              v9 = (__int64)this->fields.animationComponent;
              if ( v9 )
              {
                v24 = UnityEngine_Animation__get_clip((UnityEngine_Animation_o *)v9, 0LL);
                this->fields.defAnimClip = v24;
                p_defAnimClip = &this->fields.defAnimClip;
                sub_1B88554((ServantStatusBattleListViewItem_o *)p_defAnimClip, (int32_t)v24, v26, v27);
                v28 = (UnityEngine_Animation_o *)*(p_defAnimClip - 19);
                v9 = (__int64)UnityEngine_AnimationState__get_clip((UnityEngine_AnimationState_o *)v21, 0LL);
                if ( v28 )
                {
                  UnityEngine_Animation__set_clip(v28, (UnityEngine_AnimationClip_o *)v9, 0LL);
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
  System_Collections_Generic_List_object__o *enableRendererList; // x0
  const MethodInfo_34FD564 **v8; // x24
  UnityEngine_Object_c **v9; // x25
  Il2CppObject **v10; // x20
  const MethodInfo_312E7AC **v11; // x27
  int32_t v12; // w21
  Il2CppObject *Item; // x22
  __int64 v14; // x8
  System_Collections_Generic_List_object__o *v15; // x22
  unsigned __int64 v16; // x29
  Il2CppObject **p_syncRoot; // x28
  UnityEngine_Object_o *v18; // x23
  const MethodInfo_3434EEC *v19; // x4
  System_Collections_Generic_List_object__o *v20; // x21
  const MethodInfo_312E7AC **v21; // x22
  Il2CppObject **v22; // x27
  UnityEngine_Object_c **v23; // x20
  const MethodInfo_34FD564 **v24; // x28
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
  if ( (byte_4A5D719 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_KeyValuePair_string__Material___float__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_KeyValuePair_string__Material___float__set_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_string__Material___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Renderer__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Renderer__get_Item__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5D719 = 1;
  }
  v34.fields.key = 0LL;
  v34.fields.value = 0LL;
  enableRendererList = (System_Collections_Generic_List_object__o *)this->fields.enableRendererList;
  if ( !enableRendererList )
LABEL_29:
    sub_1B8880C(enableRendererList, propertyName);
  v8 = (const MethodInfo_34FD564 **)&Method_System_Collections_Generic_List_Renderer__get_Item__;
  v9 = &UnityEngine_Object_TypeInfo;
  v10 = (Il2CppObject **)&Method_System_Collections_Generic_KeyValuePair_string__Material___ctor__;
  v11 = (const MethodInfo_312E7AC **)&Method_System_Collections_Generic_Dictionary_KeyValuePair_string__Material___float__ContainsKey__;
  v12 = 0;
  while ( v12 < enableRendererList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(enableRendererList, v12, *v8);
    if ( !(*v9)->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(*v9);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Item, 0LL, 0LL) )
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
      if ( UnityEngine_Renderer__get_sharedMaterials((UnityEngine_Renderer_o *)enableRendererList, 0LL) )
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
                                                                            0LL);
        if ( enableRendererList )
        {
          v14 = *(_QWORD *)&enableRendererList->fields._size;
          v15 = enableRendererList;
          if ( (int)v14 >= 1 )
          {
            v16 = 0LL;
            p_syncRoot = &enableRendererList->fields._syncRoot;
            v35 = v12;
            v33 = &enableRendererList->fields._syncRoot;
            do
            {
              if ( v16 >= (unsigned int)v14 )
                sub_1B88814(enableRendererList, propertyName);
              v18 = (UnityEngine_Object_o *)p_syncRoot[v16];
              if ( !(*v9)->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(*v9);
              enableRendererList = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Inequality(
                                                                                  v18,
                                                                                  0LL,
                                                                                  0LL);
              if ( ((unsigned __int8)enableRendererList & 1) != 0 )
              {
                if ( !v18 )
                  goto LABEL_29;
                enableRendererList = (System_Collections_Generic_List_object__o *)UnityEngine_Material__HasProperty_69325648(
                                                                                    (UnityEngine_Material_o *)v18,
                                                                                    v4,
                                                                                    0LL);
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
                    Float = UnityEngine_Material__GetFloat(v30, v25, 0LL);
                    if ( !tempMaterialPropertyDict )
                      goto LABEL_29;
                    v37.fields.key = key;
                    v37.fields.value = v29;
                    System_Collections_Generic_Dictionary_KeyValuePair_object__object___float___set_Item(
                      tempMaterialPropertyDict,
                      v37,
                      Float,
                      (const MethodInfo_312E58C *)Method_System_Collections_Generic_Dictionary_KeyValuePair_string__Material___float__set_Item__);
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


void __fastcall BattleFBXComponent__SetWrapMode(
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
  __int64 p_method; // x0

  if ( (byte_4A5D700 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&SimpleAnimation_State_TypeInfo);
    byte_4A5D700 = 1;
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
      sub_1B8880C(v9, v8);
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
          p_method = sub_1BDA590(v12, SimpleAnimation_State_TypeInfo, 18LL);
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
  System_Collections_Generic_List_object__o *enableRendererList; // x0
  int32_t v8; // w21
  Il2CppObject *Item; // x22
  __int64 v10; // x8
  System_Collections_Generic_List_object__o *v11; // x22
  unsigned __int64 v12; // x26
  UnityEngine_Object_o *v13; // x23

  if ( (byte_4A5D718 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Renderer__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Renderer__get_Item__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5D718 = 1;
  }
  enableRendererList = (System_Collections_Generic_List_object__o *)this->fields.enableRendererList;
  if ( !enableRendererList )
LABEL_26:
    sub_1B8880C(enableRendererList, propertyName);
  v8 = 0;
  while ( v8 < enableRendererList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             enableRendererList,
             v8,
             (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_Renderer__get_Item__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0LL, 0LL) )
    {
      enableRendererList = (System_Collections_Generic_List_object__o *)this->fields.enableRendererList;
      if ( !enableRendererList )
        goto LABEL_26;
      enableRendererList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                          enableRendererList,
                                                                          v8,
                                                                          (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_Renderer__get_Item__);
      if ( !enableRendererList )
        goto LABEL_26;
      if ( UnityEngine_Renderer__get_sharedMaterials((UnityEngine_Renderer_o *)enableRendererList, 0LL) )
      {
        enableRendererList = (System_Collections_Generic_List_object__o *)this->fields.enableRendererList;
        if ( !enableRendererList )
          goto LABEL_26;
        enableRendererList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                            enableRendererList,
                                                                            v8,
                                                                            (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_Renderer__get_Item__);
        if ( !enableRendererList )
          goto LABEL_26;
        enableRendererList = (System_Collections_Generic_List_object__o *)UnityEngine_Renderer__get_sharedMaterials(
                                                                            (UnityEngine_Renderer_o *)enableRendererList,
                                                                            0LL);
        if ( !enableRendererList )
          goto LABEL_26;
        v10 = *(_QWORD *)&enableRendererList->fields._size;
        v11 = enableRendererList;
        if ( (int)v10 >= 1 )
        {
          v12 = 0LL;
          do
          {
            if ( v12 >= (unsigned int)v10 )
              sub_1B88814(enableRendererList, propertyName);
            v13 = (UnityEngine_Object_o *)*((_QWORD *)&v11->fields._syncRoot + v12);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            enableRendererList = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Inequality(
                                                                                v13,
                                                                                0LL,
                                                                                0LL);
            if ( ((unsigned __int8)enableRendererList & 1) != 0 )
            {
              if ( !v13 )
                goto LABEL_26;
              enableRendererList = (System_Collections_Generic_List_object__o *)UnityEngine_Material__HasProperty_69325648(
                                                                                  (UnityEngine_Material_o *)v13,
                                                                                  propertyName,
                                                                                  0LL);
              if ( ((unsigned __int8)enableRendererList & 1) != 0 )
                UnityEngine_Material__SetFloat((UnityEngine_Material_o *)v13, propertyName, value, 0LL);
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


void __fastcall BattleFBXComponent__Start(BattleFBXComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  Il2CppObject *Component_object; // x0
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A5D6FE & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_BillBoard___);
    byte_4A5D6FE = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B8880C(0LL, v4);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BillBoard___);
  this->fields.billBoard = (struct BillBoard_o *)Component_object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.billBoard, (int32_t)Component_object, v6, v7);
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
  System_Collections_Generic_List_object__o *componentsXWeaponTrail; // x0
  Il2CppObject *current; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4A5D707 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_XWeaponTrail__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_XWeaponTrail__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_XWeaponTrail__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_XWeaponTrail__GetEnumerator__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5D707 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  componentsXWeaponTrail = (System_Collections_Generic_List_object__o *)this->fields.componentsXWeaponTrail;
  if ( !componentsXWeaponTrail )
    sub_1B8880C(0LL, active);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    componentsXWeaponTrail,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_XWeaponTrail__GetEnumerator__);
  v10 = v9;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v10,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_XWeaponTrail__MoveNext__) )
  {
    current = v10.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( !v7 )
    {
      if ( active )
      {
        if ( !current )
          sub_1B8880C(v7, v8);
        XWeaponTrail__Activate((XWeaponTrail_o *)current, 0LL);
      }
      else
      {
        if ( !current )
          sub_1B8880C(v7, v8);
        XWeaponTrail__Deactivate((XWeaponTrail_o *)current, 0LL);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v10,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_XWeaponTrail__Dispose__);
}


bool __fastcall BattleFBXComponent__checkAnimation(
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
  if ( (byte_4A5D70B & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5D70B = 1;
  }
  RealAnimNames = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.RealAnimNames;
  if ( !RealAnimNames )
    goto LABEL_18;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         RealAnimNames,
         Item,
         (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
  {
    RealAnimNames = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.RealAnimNames;
    if ( !RealAnimNames )
      goto LABEL_18;
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             RealAnimNames,
             Item,
             (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
  }
  animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(animationComponent, 0LL, 0LL) )
  {
    RealAnimNames = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.animationComponent;
    if ( RealAnimNames )
    {
      v7 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                               (UnityEngine_Animation_o *)RealAnimNames,
                                               (System_String_o *)Item,
                                               0LL);
      return UnityEngine_TrackedReference__op_Inequality(v7, 0LL, 0LL);
    }
LABEL_18:
    sub_1B8880C(RealAnimNames, filename);
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

  if ( (byte_4A5D702 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&SimpleAnimation_State_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5D702 = 1;
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
    v6 = this->fields.animationComponent;
    if ( !v6 )
      goto LABEL_31;
    Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v6, this->fields.currentAnimName, 0LL);
    if ( UnityEngine_TrackedReference__op_Inequality(Item, 0LL, 0LL) )
    {
      v6 = this->fields.animationComponent;
      if ( v6 )
      {
        v6 = (UnityEngine_Animation_o *)UnityEngine_Animation__get_Item(v6, this->fields.currentAnimName, 0LL);
        if ( v6 )
          return UnityEngine_AnimationState__get_length((UnityEngine_AnimationState_o *)v6, 0LL);
      }
LABEL_31:
      sub_1B8880C(v6, v5);
    }
  }
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0LL, 0LL) )
    return 0.0;
  v6 = (UnityEngine_Animation_o *)this->fields.simpleAnimationComponent;
  if ( !v6 )
    goto LABEL_31;
  if ( !SimpleAnimation__get_Item((SimpleAnimation_o *)v6, this->fields.currentAnimName, 0LL) )
    return 0.0;
  v6 = (UnityEngine_Animation_o *)this->fields.simpleAnimationComponent;
  if ( !v6 )
    goto LABEL_31;
  v6 = (UnityEngine_Animation_o *)SimpleAnimation__get_Item((SimpleAnimation_o *)v6, this->fields.currentAnimName, 0LL);
  if ( !v6 )
    goto LABEL_31;
  klass = v6->klass;
  v11 = v6;
  v12 = *(unsigned __int16 *)(&v6->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v6->klass->_2.bitflags2 + 3) )
  {
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v12;
      p_offset += 2;
      if ( !v12 )
        goto LABEL_26;
    }
    v14 = (__int64)(&klass[1]._1.methods + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_26:
    v14 = sub_1BDA590(v6, SimpleAnimation_State_TypeInfo, 14LL);
  }
  v6 = (UnityEngine_Animation_o *)(*(__int64 (__fastcall **)(UnityEngine_Animation_o *, _QWORD))v14)(
                                    v11,
                                    *(_QWORD *)(v14 + 8));
  if ( !v6 )
    goto LABEL_31;
  return UnityEngine_AnimationClip__get_length((UnityEngine_AnimationClip_o *)v6, 0LL);
}


System_String_o *__fastcall BattleFBXComponent__getRealAnimationName(
        BattleFBXComponent_o *this,
        System_String_o *animationName,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__string__o *RealAnimNames; // x0
  __int64 v6; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *v7; // x0

  if ( (byte_4A5D71B & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    sub_1B885B0(&string_TypeInfo);
    byte_4A5D71B = 1;
  }
  RealAnimNames = this->fields.RealAnimNames;
  if ( !RealAnimNames
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)RealAnimNames,
          (Il2CppObject *)animationName,
          (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
  {
    return string_TypeInfo->static_fields->Empty;
  }
  v7 = this->fields.RealAnimNames;
  if ( !v7 )
    sub_1B8880C(0LL, v6);
  return (System_String_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                              (System_Collections_Generic_Dictionary_object__object__o *)v7,
                              (Il2CppObject *)animationName,
                              (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
}


float __fastcall BattleFBXComponent__getTagTime(
        BattleFBXComponent_o *this,
        System_String_o *animname,
        System_String_o *tag,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__string__o *CommonAnimNames; // x0
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_object__object__o *Index; // x0
  float v10; // s8
  struct BattleFBXComponent_AnimEvent_array_array *eventlist; // x8
  BattleFBXComponent_AnimEvent_array *v12; // x20
  __int64 v13; // x8
  __int64 i; // x21
  BattleFBXComponent_AnimEvent_o *v15; // x23

  if ( (byte_4A5D70E & 1) == 0 )
  {
    sub_1B885B0(&AnimationList_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    byte_4A5D70E = 1;
  }
  CommonAnimNames = this->fields.CommonAnimNames;
  if ( CommonAnimNames
    && System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)CommonAnimNames,
         (Il2CppObject *)animname,
         (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
  {
    Index = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.CommonAnimNames;
    if ( !Index )
      goto LABEL_25;
    animname = (System_String_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                    Index,
                                    (Il2CppObject *)animname,
                                    (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
  }
  if ( !AnimationList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AnimationList_TypeInfo);
  Index = (System_Collections_Generic_Dictionary_object__object__o *)AnimationList__getIndex(animname, 0LL);
  v10 = 0.0;
  if ( ((unsigned int)Index & 0x80000000) != 0 )
    return v10;
  eventlist = this->fields.eventlist;
  if ( !eventlist )
LABEL_25:
    sub_1B8880C(Index, v8);
  if ( (unsigned int)Index >= eventlist->max_length )
LABEL_24:
    sub_1B88814(Index, v8);
  v12 = eventlist->m_Items[(unsigned int)Index];
  if ( v12 )
  {
    v13 = *(_QWORD *)&v12->max_length;
    if ( (int)v13 >= 1 )
    {
      for ( i = 0LL; (int)i < (int)v13; ++i )
      {
        if ( (unsigned int)i >= (unsigned int)v13 )
          goto LABEL_24;
        v15 = v12->m_Items[i];
        if ( !v15 )
          goto LABEL_25;
        Index = (System_Collections_Generic_Dictionary_object__object__o *)v15->fields.tag;
        if ( Index )
        {
          Index = (System_Collections_Generic_Dictionary_object__object__o *)System_String__Equals_61715348(
                                                                               (System_String_o *)Index,
                                                                               tag,
                                                                               0LL);
          if ( ((unsigned __int8)Index & 1) != 0 )
            return v15->fields.time;
          v13 = *(_QWORD *)&v12->max_length;
        }
      }
    }
  }
  return v10;
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
  System_Collections_Generic_Dictionary_object__object__o *actorEffectDict; // x0
  const MethodInfo *v8; // x1
  System_Collections_Generic_List_object__o *v9; // x20
  int32_t v10; // w2
  int32_t v11; // w3
  System_Collections_Generic_List_object__o *v12; // x20
  struct System_Collections_Generic_List_XWeaponTrail__o **p_componentsXWeaponTrail; // x26
  int32_t v14; // w2
  int32_t v15; // w3
  struct System_Collections_Generic_List_Renderer__o *enableRendererList; // x8
  int32_t size; // w2
  int v18; // w9
  System_Object_array *ComponentsInChildren_object; // x0
  BattleFBXComponent___c_c *v20; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x25
  System_Func_object__bool__o *_9__56_0; // x20
  Il2CppObject *v23; // x21
  struct BattleFBXComponent___c_StaticFields *static_fields; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x20
  int32_t LimitImageIndex; // w27
  System_Collections_Generic_Dictionary_object__object__o *v29; // x19
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  __int64 v31; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
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
  float v56; // s0
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
  System_String_array *v78; // x20
  __int64 v79; // x8
  unsigned __int64 v80; // x22
  System_String_o *v81; // x21
  bool v82; // w21
  UnityEngine_Object_o *PrefabNode; // x20
  __int64 v84; // x1
  System_String_o *v85; // x20
  BattleFBXComponent_c *v86; // x0
  const MethodInfo *v87; // x4
  __int64 v88; // x1
  System_String_o *v89; // x20
  BattleFBXComponent_c *v90; // x0
  UnityEngine_GameObject_o *v91; // x0
  __int64 v92; // x1
  Il2CppObject *v93; // x22
  _BOOL8 v94; // x0
  __int64 v95; // x1
  System_String_o *v96; // x0
  __int64 v97; // x1
  UnityEngine_Transform_o *v98; // x22
  UnityEngine_Transform_o *v99; // x0
  __int64 v100; // x1
  float v101; // s8
  UnityEngine_Transform_o *v102; // x0
  __int64 v103; // x1
  float y; // s9
  UnityEngine_Transform_o *v105; // x0
  __int64 v106; // x1
  __int64 v107; // x0
  __int64 v108; // x1
  int v109; // s2
  float v110; // s0
  float v111; // s1
  UnityEngine_Transform_o *v112; // x0
  __int64 v113; // x1
  _BOOL8 v114; // x0
  __int64 v115; // x1
  System_Object_array *ComponentsInChildren_object__49085148; // x0
  __int64 v117; // x1
  int32_t v118; // w2
  int32_t v119; // w3
  System_Object_array *v120; // x20
  __int64 v121; // x8
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
  int32_t v135; // w3
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
  int32_t v148; // w2
  int32_t v149; // w3
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *entries; // x8
  System_Collections_Generic_Dictionary_object__object__o *v151; // x20
  unsigned __int64 v152; // x19
  struct System_Int32_array *buckets; // x8
  _QWORD *v154; // x9
  __int64 entries_low; // x10
  __int64 v156; // x8
  int32_t v157; // w2
  int32_t v158; // w3
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *v159; // x8
  System_Collections_Generic_Dictionary_object__object__o *v160; // x20
  unsigned __int64 v161; // x19
  struct System_Int32_array *v162; // x8
  _QWORD *v163; // x9
  __int64 v164; // x10
  __int64 v165; // x8
  BattleFBXComponent___c_c *v166; // x0
  System_Func_object__bool__o *_9__56_1; // x19
  Il2CppObject *v168; // x20
  struct BattleFBXComponent___c_StaticFields *v169; // x0
  int32_t v170; // w2
  int32_t v171; // w3
  System_Collections_Generic_Dictionary_object__object__c *v172; // x8
  System_Collections_Generic_Dictionary_object__object__o *v173; // x19
  __int64 v174; // x9
  int *v175; // x10
  __int64 v176; // x0
  __int64 v177; // x1
  __int64 v178; // x19
  __int64 v179; // x8
  __int64 v180; // x9
  int *v181; // x10
  __int64 v182; // x0
  __int64 v183; // x8
  __int64 v184; // x9
  int *v185; // x10
  __int64 v186; // x0
  UnityEngine_Object_o *v187; // x0
  __int64 v188; // x1
  UnityEngine_Transform_o *v189; // x20
  __int64 v190; // x1
  System_String_o *v191; // x21
  BattleFBXComponent_c *v192; // x0
  struct System_String_o *enItemMarker; // x8
  System_String_o *v194; // x22
  UnityEngine_Transform_o *parent; // x21
  System_String_o *v196; // x0
  UnityEngine_Object_o *v197; // x21
  UnityEngine_GameObject_o *v198; // x0
  __int64 v199; // x1
  Il2CppObject *v200; // x0
  __int64 v201; // x1
  int32_t v202; // w2
  int32_t v203; // w3
  Il2CppObject *v204; // x20
  __int64 v205; // x8
  __int64 v206; // x9
  int *v207; // x10
  __int64 v208; // x0
  char v209; // [xsp+24h] [xbp-CCh]
  UnityEngine_Component_o *v212; // [xsp+30h] [xbp-C0h]
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v213; // [xsp+38h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o i; // [xsp+50h] [xbp-A0h] BYREF
  int32_t result; // [xsp+6Ch] [xbp-84h] BYREF
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4

  v5 = gameObject;
  if ( (byte_4A5D705 & 1) == 0 )
  {
    sub_1B885B0(&BattleFBXComponent_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_SkinnedMeshRenderer___);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__GameObject__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__SkinnedMeshRenderer___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__SkinnedMeshRenderer__get_Values__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__SkinnedMeshRenderer__set_Item__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_string__SkinnedMeshRenderer__TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_Transform___);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__SkinnedMeshRenderer__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__SkinnedMeshRenderer__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__SkinnedMeshRenderer__get_Current__);
    sub_1B885B0(&System_Func_Transform__bool__TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_AddComponent_LookAtTarget___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponentsInChildren_MeshRenderer___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystemRenderer___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponentsInChildren_Transform____76153744);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponentsInChildren_XWeaponTrail___);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerable_Transform__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_Transform__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Renderer__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_XWeaponTrail__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Renderer__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_XWeaponTrail___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_XWeaponTrail__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&ServantAssetLoadManager_TypeInfo);
    sub_1B885B0(&Method_BattleFBXComponent___c__inSetEvolutionLevel_b__56_0__);
    sub_1B885B0(&Method_BattleFBXComponent___c__inSetEvolutionLevel_b__56_1__);
    sub_1B885B0(&BattleFBXComponent___c_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__SkinnedMeshRenderer__GetEnumerator__);
    sub_1B885B0(&StringLiteral_117/*" "*/);
    sub_1B885B0(&StringLiteral_23428/*"spiral"*/);
    sub_1B885B0(&StringLiteral_3226/*"Battle2D"*/);
    byte_4A5D705 = 1;
  }
  result = 0;
  memset(&i, 0, sizeof(i));
  actorEffectDict = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.actorEffectDict;
  if ( !actorEffectDict )
    goto LABEL_209;
  System_Collections_Generic_Dictionary_object__object___Clear(
    actorEffectDict,
    (const MethodInfo_31C7350 *)Method_System_Collections_Generic_Dictionary_string__GameObject__Clear__);
  BattleFBXComponent__DestroyPrefabNode(this, v8);
  v9 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.PrefabNodes = (struct System_Collections_Generic_List_GameObject__o *)v9;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.PrefabNodes, (int32_t)v9, v10, v11);
  v12 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_XWeaponTrail__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_XWeaponTrail___ctor__);
  this->fields.componentsXWeaponTrail = (struct System_Collections_Generic_List_XWeaponTrail__o *)v12;
  p_componentsXWeaponTrail = &this->fields.componentsXWeaponTrail;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.componentsXWeaponTrail, (int32_t)v12, v14, v15);
  enableRendererList = this->fields.enableRendererList;
  if ( !enableRendererList )
    goto LABEL_209;
  size = enableRendererList->fields._size;
  v18 = enableRendererList->fields._version + 1;
  enableRendererList->fields._size = 0;
  enableRendererList->fields._version = v18;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)enableRendererList->fields._items, 0, size, 0LL);
  if ( !v5 )
    goto LABEL_209;
  ComponentsInChildren_object = UnityEngine_GameObject__GetComponentsInChildren_object_(
                                  v5,
                                  1,
                                  (const MethodInfo_2ECFB58 *)Method_UnityEngine_GameObject_GetComponentsInChildren_Transform____76153744);
  v20 = BattleFBXComponent___c_TypeInfo;
  v21 = (System_Collections_Generic_IEnumerable_TSource__o *)ComponentsInChildren_object;
  if ( !BattleFBXComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFBXComponent___c_TypeInfo);
    v20 = BattleFBXComponent___c_TypeInfo;
  }
  _9__56_0 = (System_Func_object__bool__o *)v20->static_fields->__9__56_0;
  if ( !_9__56_0 )
  {
    if ( !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      v20 = BattleFBXComponent___c_TypeInfo;
    }
    v23 = (Il2CppObject *)v20->static_fields->__9;
    _9__56_0 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_Transform__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__56_0, v23, Method_BattleFBXComponent___c__inSetEvolutionLevel_b__56_0__, 0LL);
    static_fields = BattleFBXComponent___c_TypeInfo->static_fields;
    static_fields->__9__56_0 = (struct System_Func_Transform__bool__o *)_9__56_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__56_0, (int32_t)_9__56_0, v25, v26);
  }
  v27 = System_Linq_Enumerable__Where_object_(
          v21,
          (System_Func_TSource__bool__o *)_9__56_0,
          (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_Transform___);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  LimitImageIndex = ServantAssetLoadManager__GetLimitImageIndex(svtId, limitcount, 1, 0LL);
  v29 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_string__SkinnedMeshRenderer__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v29,
    (const MethodInfo_31C6818 *)Method_System_Collections_Generic_Dictionary_string__SkinnedMeshRenderer___ctor__);
  if ( !v27 )
    goto LABEL_209;
  klass = v27->klass;
  v212 = (UnityEngine_Component_o *)this;
  v31 = *(unsigned __int16 *)(&v27->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v27->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_Transform__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_Transform__TypeInfo )
    {
      --v31;
      p_offset += 4;
      if ( !v31 )
        goto LABEL_21;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_21:
    p_method = sub_1BDA590(v27, System_Collections_Generic_IEnumerable_Transform__TypeInfo, 0LL);
  }
  v34 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
          v27,
          *(_QWORD *)(p_method + 8));
  v36 = v34;
  v209 = 1;
  while ( 1 )
  {
    if ( !v36 )
      sub_1B8880C(v34, v35);
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
      v40 = sub_1BDA590(v36, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v44 = sub_1BDA590(v36, System_Collections_Generic_IEnumerator_Transform__TypeInfo, 0LL);
    }
    v45 = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v44)(v36, *(_QWORD *)(v44 + 8));
    v47 = (UnityEngine_Component_o *)v45;
    if ( !v45 )
      sub_1B8880C(0LL, v46);
    name = UnityEngine_Object__get_name(v45, 0LL);
    v50 = BattleFBXComponent_TypeInfo;
    if ( !BattleFBXComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
    if ( !name )
      sub_1B8880C(v50, v48);
    if ( System_String__StartsWith(name, BattleFBXComponent_TypeInfo->static_fields->sideflipMarker, 0LL) )
    {
      v51 = UnityEngine_Component__get_gameObject(v212, 0LL);
      if ( !v51 )
        sub_1B8880C(0LL, v52);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           v51,
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v34 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
      if ( (v34 & 1) != 0 )
      {
        transform = UnityEngine_Component__get_transform(v47, 0LL);
        if ( !Component_object )
          sub_1B8880C(transform, v55);
        if ( !transform )
          sub_1B8880C(0LL, v55);
        if ( LOBYTE(Component_object[30].klass) )
          v56 = -1.0;
        else
          v56 = 1.0;
        v57 = 1.0;
        v58 = 1.0;
        UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v56, 0LL);
      }
    }
    else
    {
      v59 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v47, 0LL);
      v61 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v47, 0LL);
      v62 = BattleFBXComponent_TypeInfo;
      if ( !BattleFBXComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
      if ( !v61 )
        sub_1B8880C(v62, v60);
      v63 = System_String__IndexOf_61738608(v61, BattleFBXComponent_TypeInfo->static_fields->levelMarker, 0LL);
      if ( !v59 )
        sub_1B8880C(v63, v64);
      v65 = (Il2CppObject *)System_String__Substring_61726036(v59, 0, v63, 0LL);
      v66 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v47, 0LL);
      if ( !v66 )
        sub_1B8880C(0LL, v67);
      v68 = System_String__IndexOf_61738608(v66, BattleFBXComponent_TypeInfo->static_fields->levelMarker, 0LL);
      v69 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v47, 0LL);
      if ( !v69 )
        sub_1B8880C(0LL, v70);
      v71 = System_String__Substring(v69, v68 + 7, 0LL);
      v73 = v71;
      if ( !v71 )
        sub_1B8880C(0LL, v72);
      if ( (System_String__IndexOf_61738608(v71, (System_String_o *)StringLiteral_117/*" "*/, 0LL) & 0x80000000) == 0 )
      {
        v74 = System_String__IndexOf_61738608(v73, (System_String_o *)StringLiteral_117/*" "*/, 0LL);
        v73 = System_String__Substring_61726036(v73, 0, v74, 0LL);
        if ( !v73 )
          sub_1B8880C(0LL, v75);
      }
      v76 = System_String__Split(v73, 0x5Fu, 0, 0LL);
      v78 = v76;
      if ( !v76 )
        sub_1B8880C(0LL, v77);
      v79 = *(_QWORD *)&v76->max_length;
      if ( (int)v79 < 1 )
      {
LABEL_69:
        v82 = 0;
        PrefabNode = 0LL;
      }
      else
      {
        v80 = 0LL;
        while ( 1 )
        {
          if ( v80 >= (unsigned int)v79 )
            sub_1B88814(v76, v77);
          v81 = v78->m_Items[v80];
          result = 99;
          v76 = (System_String_array *)System_Int32__TryParse(v81, &result, 0LL);
          if ( ((unsigned __int8)v76 & 1) != 0 )
          {
            v76 = (System_String_array *)System_Int32__Parse(v81, 0LL);
            if ( (_DWORD)v76 == LimitImageIndex )
              break;
          }
          LODWORD(v79) = v78->max_length;
          if ( (__int64)++v80 >= (int)v79 )
            goto LABEL_69;
        }
        v85 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v47, 0LL);
        v86 = BattleFBXComponent_TypeInfo;
        if ( !BattleFBXComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
        if ( !v85 )
          sub_1B8880C(v86, v84);
        if ( System_String__StartsWith(v85, BattleFBXComponent_TypeInfo->static_fields->prefabMarker, 0LL) )
          goto LABEL_78;
        v89 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v47, 0LL);
        v90 = BattleFBXComponent_TypeInfo;
        if ( !BattleFBXComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
        if ( !v89 )
          sub_1B8880C(v90, v88);
        if ( System_String__StartsWith(v89, BattleFBXComponent_TypeInfo->static_fields->chrnodeMarker, 0LL) )
LABEL_78:
          PrefabNode = (UnityEngine_Object_o *)BattleFBXComponent__CreatePrefabNode(
                                                 (BattleFBXComponent_o *)v212,
                                                 (UnityEngine_Transform_o *)v47,
                                                 svtId,
                                                 limitcount,
                                                 v87);
        else
          PrefabNode = 0LL;
        v82 = 1;
      }
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(PrefabNode, 0LL, 0LL) )
      {
        v91 = UnityEngine_Component__get_gameObject(v212, 0LL);
        if ( !v91 )
          sub_1B8880C(0LL, v92);
        v93 = UnityEngine_GameObject__GetComponent_object_(
                v91,
                (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v94 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v93, 0LL, 0LL);
        if ( v94 )
        {
          if ( !v93 )
            sub_1B8880C(v94, v95);
          if ( LOBYTE(v93[30].klass) )
          {
            if ( !PrefabNode )
              sub_1B8880C(v94, v95);
            v96 = UnityEngine_Object__get_name(PrefabNode, 0LL);
            if ( !v96 )
              sub_1B8880C(0LL, v97);
            if ( (System_String__IndexOf_61738608(v96, (System_String_o *)StringLiteral_23428/*"spiral"*/, 0LL) & 0x80000000) == 0 )
            {
              v98 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)PrefabNode, 0LL);
              v99 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)PrefabNode, 0LL);
              if ( !v99 )
                sub_1B8880C(0LL, v100);
              LODWORD(v101) = (unsigned int)UnityEngine_Transform__get_localScale(v99, 0LL);
              v102 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)PrefabNode, 0LL);
              if ( !v102 )
                sub_1B8880C(0LL, v103);
              localScale = UnityEngine_Transform__get_localScale(v102, 0LL);
              y = localScale.fields.y;
              v105 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)PrefabNode, 0LL);
              if ( !v105 )
                sub_1B8880C(0LL, v106);
              *(UnityEngine_Vector3_o *)(&v109 - 2) = UnityEngine_Transform__get_localScale(v105, 0LL);
              if ( !v98 )
                sub_1B8880C(v107, v108);
              v110 = -v101;
              v111 = y;
              UnityEngine_Transform__set_localScale(v98, *(UnityEngine_Vector3_o *)(&v109 - 2), 0LL);
              v112 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)PrefabNode, 0LL);
              if ( !v112 )
                sub_1B8880C(0LL, v113);
              UnityEngine_Transform__Rotate_69482044(v112, 0.0, 180.0, 0.0, 0LL);
            }
          }
        }
      }
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v114 = UnityEngine_Object__op_Inequality(PrefabNode, 0LL, 0LL);
      if ( v114 )
      {
        if ( !PrefabNode )
          sub_1B8880C(v114, v115);
        ComponentsInChildren_object__49085148 = UnityEngine_GameObject__GetComponentsInChildren_object__49085148(
                                                  (UnityEngine_GameObject_o *)PrefabNode,
                                                  (const MethodInfo_2ECFADC *)Method_UnityEngine_GameObject_GetComponentsInChildren_XWeaponTrail___);
        v120 = ComponentsInChildren_object__49085148;
        if ( !ComponentsInChildren_object__49085148 )
          sub_1B8880C(0LL, v117);
        v121 = *(_QWORD *)&ComponentsInChildren_object__49085148->max_length;
        if ( (int)v121 >= 1 )
        {
          v122 = 0LL;
          do
          {
            if ( v122 >= (unsigned int)v121 )
              sub_1B88814(ComponentsInChildren_object__49085148, v117);
            v123 = (System_Collections_Generic_List_object__o *)*p_componentsXWeaponTrail;
            if ( !*p_componentsXWeaponTrail )
              sub_1B8880C(0LL, v117);
            v124 = v120->m_Items[v122];
            items = v123->fields._items;
            v126 = Method_System_Collections_Generic_List_XWeaponTrail__Add__;
            ++v123->fields._version;
            if ( !items )
              sub_1B8880C(v123, v124);
            v127 = v123->fields._size;
            if ( (unsigned int)v127 >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v123,
                v124,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v126[4] + 192LL) + 112LL));
            }
            else
            {
              v128 = &items->obj.klass + v127;
              v123->fields._size = v127 + 1;
              v128[4] = (Il2CppClass *)v124;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v128 + 4), (int32_t)v124, v118, v119);
            }
            LODWORD(v121) = v120->max_length;
            ++v122;
          }
          while ( (__int64)v122 < (int)v121 );
        }
      }
      v129 = UnityEngine_Component__GetComponent_object_(
               v47,
               (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_SkinnedMeshRenderer___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v34 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v129, 0LL, 0LL);
      if ( (v34 & 1) != 0 )
      {
        v130 = UnityEngine_Component__get_gameObject(v47, 0LL);
        v131 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_3226/*"Battle2D"*/, 0LL);
        if ( !v130 )
          sub_1B8880C(v131, (unsigned int)v131);
        UnityEngine_GameObject__set_layer(v130, v131, 0LL);
        if ( !v29 )
          sub_1B8880C(0LL, v132);
        System_Collections_Generic_Dictionary_object__object___set_Item(
          v29,
          v65,
          v129,
          (const MethodInfo_31C71B4 *)Method_System_Collections_Generic_Dictionary_string__SkinnedMeshRenderer__set_Item__);
        monitor = (System_Collections_Generic_List_object__o *)v212[6].monitor;
        if ( !monitor )
          sub_1B8880C(0LL, v133);
        v137 = monitor->fields._items;
        v138 = Method_System_Collections_Generic_List_Renderer__Add__;
        ++monitor->fields._version;
        if ( !v137 )
          sub_1B8880C(monitor, v133);
        v139 = monitor->fields._size;
        if ( (unsigned int)v139 >= v137->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            monitor,
            v129,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v138[4] + 192LL) + 112LL));
        }
        else
        {
          v140 = &v137->obj.klass + v139;
          monitor->fields._size = v139 + 1;
          v140[4] = (Il2CppClass *)v129;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v140 + 4), (int32_t)v129, v134, v135);
        }
        if ( !v129 )
          sub_1B8880C(v141, v142);
        UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)v129, v82, 0LL);
        v209 &= !v82;
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
    v146 = sub_1BDA590(v36, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v146)(v36, *(_QWORD *)(v146 + 8));
  if ( (v209 & 1) != 0 )
  {
    actorEffectDict = v29;
    if ( !v29 )
      goto LABEL_209;
    actorEffectDict = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                   v29,
                                                                                   (const MethodInfo_31C6FF8 *)Method_System_Collections_Generic_Dictionary_string__SkinnedMeshRenderer__get_Values__);
    if ( !actorEffectDict )
      goto LABEL_209;
    System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
      &v213,
      (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)actorEffectDict,
      (const MethodInfo_382E608 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__SkinnedMeshRenderer__GetEnumerator__);
    for ( i = v213;
          System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &i,
            (const MethodInfo_32C5290 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__SkinnedMeshRenderer__MoveNext__);
          UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)i.fields._currentValue, 1, 0LL) )
    {
      if ( !i.fields._currentValue )
        sub_1B8880C(0LL, v147);
    }
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
      &i,
      (const MethodInfo_32C528C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__SkinnedMeshRenderer__Dispose__);
  }
  actorEffectDict = (System_Collections_Generic_Dictionary_object__object__o *)UnityEngine_GameObject__GetComponentsInChildren_object__49085148(
                                                                                 v5,
                                                                                 (const MethodInfo_2ECFADC *)Method_UnityEngine_GameObject_GetComponentsInChildren_MeshRenderer___);
  if ( !actorEffectDict )
    goto LABEL_209;
  entries = actorEffectDict->fields._entries;
  v151 = actorEffectDict;
  if ( (int)entries >= 1 )
  {
    v152 = 0LL;
    while ( v152 < (unsigned int)entries )
    {
      actorEffectDict = (System_Collections_Generic_Dictionary_object__object__o *)v212[6].monitor;
      if ( !actorEffectDict )
        goto LABEL_209;
      gameObject = (UnityEngine_GameObject_o *)*((_QWORD *)&v151->fields._count + v152);
      buckets = actorEffectDict->fields._buckets;
      v154 = Method_System_Collections_Generic_List_Renderer__Add__;
      ++HIDWORD(actorEffectDict->fields._entries);
      if ( !buckets )
        goto LABEL_209;
      entries_low = SLODWORD(actorEffectDict->fields._entries);
      if ( (unsigned int)entries_low >= buckets->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)actorEffectDict,
          (Il2CppObject *)gameObject,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v154[4] + 192LL) + 112LL));
      }
      else
      {
        v156 = (__int64)buckets + 8 * entries_low;
        LODWORD(actorEffectDict->fields._entries) = entries_low + 1;
        *(_QWORD *)(v156 + 32) = gameObject;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v156 + 32), (int32_t)gameObject, v148, v149);
      }
      LODWORD(entries) = v151->fields._entries;
      if ( (__int64)++v152 >= (int)entries )
        goto LABEL_149;
    }
LABEL_213:
    sub_1B88814(actorEffectDict, gameObject);
  }
LABEL_149:
  actorEffectDict = (System_Collections_Generic_Dictionary_object__object__o *)UnityEngine_GameObject__GetComponentsInChildren_object__49085148(
                                                                                 v5,
                                                                                 (const MethodInfo_2ECFADC *)Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystemRenderer___);
  if ( !actorEffectDict )
    goto LABEL_209;
  v159 = actorEffectDict->fields._entries;
  v160 = actorEffectDict;
  if ( (int)v159 >= 1 )
  {
    v161 = 0LL;
    while ( v161 < (unsigned int)v159 )
    {
      actorEffectDict = (System_Collections_Generic_Dictionary_object__object__o *)v212[6].monitor;
      if ( !actorEffectDict )
        goto LABEL_209;
      gameObject = (UnityEngine_GameObject_o *)*((_QWORD *)&v160->fields._count + v161);
      v162 = actorEffectDict->fields._buckets;
      v163 = Method_System_Collections_Generic_List_Renderer__Add__;
      ++HIDWORD(actorEffectDict->fields._entries);
      if ( !v162 )
        goto LABEL_209;
      v164 = SLODWORD(actorEffectDict->fields._entries);
      if ( (unsigned int)v164 >= v162->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)actorEffectDict,
          (Il2CppObject *)gameObject,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v163[4] + 192LL) + 112LL));
      }
      else
      {
        v165 = (__int64)v162 + 8 * v164;
        LODWORD(actorEffectDict->fields._entries) = v164 + 1;
        *(_QWORD *)(v165 + 32) = gameObject;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v165 + 32), (int32_t)gameObject, v157, v158);
      }
      LODWORD(v159) = v160->fields._entries;
      if ( (__int64)++v161 >= (int)v159 )
        goto LABEL_159;
    }
    goto LABEL_213;
  }
LABEL_159:
  v166 = BattleFBXComponent___c_TypeInfo;
  if ( !BattleFBXComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFBXComponent___c_TypeInfo);
    v166 = BattleFBXComponent___c_TypeInfo;
  }
  _9__56_1 = (System_Func_object__bool__o *)v166->static_fields->__9__56_1;
  if ( !_9__56_1 )
  {
    if ( !v166->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v166);
      v166 = BattleFBXComponent___c_TypeInfo;
    }
    v168 = (Il2CppObject *)v166->static_fields->__9;
    _9__56_1 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_Transform__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__56_1, v168, Method_BattleFBXComponent___c__inSetEvolutionLevel_b__56_1__, 0LL);
    v169 = BattleFBXComponent___c_TypeInfo->static_fields;
    v169->__9__56_1 = (struct System_Func_Transform__bool__o *)_9__56_1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v169->__9__56_1, (int32_t)_9__56_1, v170, v171);
  }
  actorEffectDict = (System_Collections_Generic_Dictionary_object__object__o *)System_Linq_Enumerable__Where_object_(
                                                                                 v21,
                                                                                 (System_Func_TSource__bool__o *)_9__56_1,
                                                                                 (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_Transform___);
  if ( !actorEffectDict )
LABEL_209:
    sub_1B8880C(actorEffectDict, gameObject);
  v172 = actorEffectDict->klass;
  v173 = actorEffectDict;
  v174 = *(unsigned __int16 *)(&actorEffectDict->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&actorEffectDict->klass->_2.bitflags2 + 3) )
  {
    v175 = &v172->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_Transform__c **)v175 - 1) != System_Collections_Generic_IEnumerable_Transform__TypeInfo )
    {
      --v174;
      v175 += 4;
      if ( !v174 )
        goto LABEL_170;
    }
    v176 = (__int64)(&v172->vtable._0_Equals.method + 2 * *v175);
  }
  else
  {
LABEL_170:
    v176 = sub_1BDA590(actorEffectDict, System_Collections_Generic_IEnumerable_Transform__TypeInfo, 0LL);
  }
  v178 = (*(__int64 (__fastcall **)(System_Collections_Generic_Dictionary_object__object__o *, _QWORD))v176)(
           v173,
           *(_QWORD *)(v176 + 8));
  if ( !v178 )
    sub_1B8880C(0LL, v177);
  while ( 1 )
  {
    v179 = *(_QWORD *)v178;
    v180 = *(unsigned __int16 *)(*(_QWORD *)v178 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v178 + 302LL) )
    {
      v181 = (int *)(*(_QWORD *)(v179 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v181 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v180;
        v181 += 4;
        if ( !v180 )
          goto LABEL_177;
      }
      v182 = v179 + 16LL * *v181 + 312;
    }
    else
    {
LABEL_177:
      v182 = sub_1BDA590(v178, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v182)(v178, *(_QWORD *)(v182 + 8)) & 1) == 0 )
      break;
    v183 = *(_QWORD *)v178;
    v184 = *(unsigned __int16 *)(*(_QWORD *)v178 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v178 + 302LL) )
    {
      v185 = (int *)(*(_QWORD *)(v183 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_Transform__c **)v185 - 1) != System_Collections_Generic_IEnumerator_Transform__TypeInfo )
      {
        --v184;
        v185 += 4;
        if ( !v184 )
          goto LABEL_184;
      }
      v186 = v183 + 16LL * *v185 + 312;
    }
    else
    {
LABEL_184:
      v186 = sub_1BDA590(v178, System_Collections_Generic_IEnumerator_Transform__TypeInfo, 0LL);
    }
    v187 = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v186)(v178, *(_QWORD *)(v186 + 8));
    v189 = (UnityEngine_Transform_o *)v187;
    if ( !v187 )
      sub_1B8880C(0LL, v188);
    v191 = UnityEngine_Object__get_name(v187, 0LL);
    v192 = BattleFBXComponent_TypeInfo;
    if ( !BattleFBXComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
      v192 = BattleFBXComponent_TypeInfo;
    }
    enItemMarker = v192->static_fields->enItemMarker;
    if ( !enItemMarker )
      sub_1B8880C(v192, v190);
    if ( !v191 )
      sub_1B8880C(v192, v190);
    v194 = System_String__Substring(v191, enItemMarker->fields._stringLength, 0LL);
    parent = UnityEngine_Transform__get_parent(v189, 0LL);
    v196 = System_String__Concat_61707032(BattleFBXComponent_TypeInfo->static_fields->enWeaponMarker, v194, 0LL);
    if ( !parent )
      sub_1B8880C(v196, v196);
    v197 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(parent, v196, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v197, 0LL, 0LL) )
    {
      v198 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v189, 0LL);
      if ( !v198 )
        sub_1B8880C(0LL, v199);
      v200 = UnityEngine_GameObject__AddComponent_object_(
               v198,
               (const MethodInfo_2ECEDD0 *)Method_UnityEngine_GameObject_AddComponent_LookAtTarget___);
      v204 = v200;
      if ( !v200 )
        sub_1B8880C(0LL, v201);
      v200[2].monitor = v197;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v200[2].monitor, (int32_t)v197, v202, v203);
      LODWORD(v204[3].klass) = 1120403456;
    }
  }
  v205 = *(_QWORD *)v178;
  v206 = *(unsigned __int16 *)(*(_QWORD *)v178 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v178 + 302LL) )
  {
    v207 = (int *)(*(_QWORD *)(v205 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v207 - 1) != System_IDisposable_TypeInfo )
    {
      --v206;
      v207 += 4;
      if ( !v206 )
        goto LABEL_202;
    }
    v208 = v205 + 16LL * *v207 + 312;
  }
  else
  {
LABEL_202:
    v208 = sub_1BDA590(v178, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v208)(v178, *(_QWORD *)(v208 + 8));
}


void __fastcall BattleFBXComponent__loadAnimationEvents(
        BattleFBXComponent_o *this,
        UnityEngine_TextAsset_o *data,
        int32_t svtId,
        int32_t level,
        const MethodInfo *method)
{
  struct BattleFBXComponent_AnimEvent_array_array *v9; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t LimitImageIndex; // w21
  __int64 Instance; // x0
  __int64 v14; // x1
  System_String_o *text; // x22
  int v16; // w8
  int v17; // w8
  __int64 v18; // x22
  BattleFBXComponent_c **v19; // x28
  unsigned int v20; // w29
  System_String_o *v21; // x23
  __int64 v22; // x8
  __int64 v23; // x23
  System_String_o *v24; // x25
  int32_t v25; // w26
  System_String_o *v26; // x27
  BattleFBXComponent_c *v27; // x0
  int32_t v28; // w0
  int32_t Index; // w24
  int32_t v30; // w20
  System_Collections_Generic_List_object__o *v31; // x25
  struct BattleFBXComponent_AnimEvent_array_array *v32; // x21
  __int64 v33; // x19
  int v34; // w8
  int v35; // w26
  float v36; // s0
  float v37; // s8
  unsigned int v38; // w9
  int v39; // w21
  BattleFBXComponent_c **v40; // x19
  __int64 v41; // x28
  __int64 v42; // x27
  float v43; // s9
  __int64 v44; // x26
  int32_t v45; // w2
  int32_t v46; // w3
  int32_t v47; // w2
  int32_t v48; // w3
  int32_t v49; // w2
  int32_t v50; // w3
  struct System_Object_array *items; // x8
  _QWORD *v52; // x9
  __int64 size; // x10
  Il2CppClass **v54; // x0
  int32_t v55; // w2
  int32_t v56; // w3
  __int64 v57; // x23
  Il2CppClass **v58; // x0
  __int64 v59; // x0
  BattleFBXComponent_o *v60; // [xsp+8h] [xbp-88h]
  struct BattleFBXComponent_AnimEvent_array_array **p_eventlist; // [xsp+10h] [xbp-80h]
  Il2CppObject *entity; // [xsp+18h] [xbp-78h] BYREF

  if ( (byte_4A5D712 & 1) == 0 )
  {
    sub_1B885B0(&BattleFBXComponent_AnimEvent_____TypeInfo);
    sub_1B885B0(&BattleFBXComponent_AnimEvent_TypeInfo);
    sub_1B885B0(&AnimationList_TypeInfo);
    sub_1B885B0(&BattleFBXComponent_TypeInfo);
    sub_1B885B0(&char___TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleFBXComponent_AnimEvent__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleFBXComponent_AnimEvent__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleFBXComponent_AnimEvent___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BattleFBXComponent_AnimEvent__TypeInfo);
    sub_1B885B0(&ServantAssetLoadManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_401/*"#"*/);
    sub_1B885B0(&StringLiteral_868/*","*/);
    byte_4A5D712 = 1;
  }
  entity = 0LL;
  BattleFBXComponent__InitAnimNameDict(this, (const MethodInfo *)data);
  v9 = (struct BattleFBXComponent_AnimEvent_array_array *)sub_1B88658(BattleFBXComponent_AnimEvent_____TypeInfo, 50LL);
  this->fields.eventlist = v9;
  p_eventlist = &this->fields.eventlist;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.eventlist, (int32_t)v9, v10, v11);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  LimitImageIndex = ServantAssetLoadManager__GetLimitImageIndex(svtId, level, 1, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_71;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_71;
  Instance = DataMasterBase_object__object__int___TryGetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               &entity,
               svtId,
               (const MethodInfo_311D988 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
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
  Instance = sub_1B88658(char___TypeInfo, 2LL);
  if ( !Instance )
    goto LABEL_71;
  v16 = *(_DWORD *)(Instance + 24);
  v14 = Instance;
  if ( !v16 )
    goto LABEL_72;
  *(_WORD *)(Instance + 32) = 13;
  if ( v16 == 1 )
    goto LABEL_72;
  *(_WORD *)(Instance + 34) = 10;
  if ( !text
    || (v60 = this, (Instance = (__int64)System_String__Split_61729188(text, (System_Char_array *)Instance, 0LL)) == 0) )
  {
LABEL_71:
    sub_1B8880C(Instance, v14);
  }
  v17 = *(_DWORD *)(Instance + 24);
  v18 = Instance;
  if ( v17 >= 1 )
  {
    v19 = &BattleFBXComponent_TypeInfo;
    v20 = 0;
    while ( v20 < v17 )
    {
      Instance = (__int64)StringLiteral_868/*","*/;
      if ( !StringLiteral_868/*","*/ )
        goto LABEL_71;
      v21 = *(System_String_o **)(v18 + 8LL * (int)v20 + 32);
      Instance = System_String__get_Chars((System_String_o *)StringLiteral_868/*","*/, 0, 0LL);
      if ( !v21 )
        goto LABEL_71;
      Instance = (__int64)System_String__Split(v21, Instance, 0, 0LL);
      if ( !Instance )
        goto LABEL_71;
      v22 = *(_QWORD *)(Instance + 24);
      v23 = Instance;
      if ( v22 )
      {
        if ( !(_DWORD)v22 )
          break;
        Instance = *(_QWORD *)(Instance + 32);
        if ( !Instance )
          goto LABEL_71;
        Instance = System_String__StartsWith((System_String_o *)Instance, (System_String_o *)StringLiteral_401/*"#"*/, 0LL);
        if ( (Instance & 1) == 0 && *(int *)(v23 + 24) >= 6 )
        {
          Instance = System_Int32__Parse(*(System_String_o **)(v23 + 32), 0LL);
          if ( *(_DWORD *)(v23 + 24) <= 1u )
            break;
          if ( (_DWORD)Instance == LimitImageIndex )
          {
            Instance = (__int64)*v19;
            v24 = *(System_String_o **)(v23 + 40);
            if ( !(*v19)->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(Instance);
            if ( !v24 )
              goto LABEL_71;
            v25 = System_String__IndexOf_61738608(v24, (*v19)->static_fields->levelMarker, 0LL);
            v26 = v24;
            if ( (v25 & 0x80000000) == 0 )
            {
              v27 = *v19;
              if ( !(*v19)->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v27);
                v27 = *v19;
              }
              v28 = System_String__IndexOf_61738608(v24, v27->static_fields->levelMarker, 0LL);
              v26 = System_String__Substring_61726036(v24, 0, v28, 0LL);
            }
            if ( !AnimationList_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AnimationList_TypeInfo);
            Index = AnimationList__getIndex(v26, 0LL);
            if ( (v25 & 0x80000000) == 0 )
            {
              Instance = (__int64)v60->fields.RealAnimNames;
              if ( !Instance )
                goto LABEL_71;
              System_Collections_Generic_Dictionary_object__object___set_Item(
                (System_Collections_Generic_Dictionary_object__object__o *)Instance,
                (Il2CppObject *)v26,
                (Il2CppObject *)v24,
                (const MethodInfo_31C71B4 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
              Instance = (__int64)v60->fields.CommonAnimNames;
              if ( !Instance )
                goto LABEL_71;
              System_Collections_Generic_Dictionary_object__object___set_Item(
                (System_Collections_Generic_Dictionary_object__object__o *)Instance,
                (Il2CppObject *)v24,
                (Il2CppObject *)v26,
                (const MethodInfo_31C71B4 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
            }
            v30 = LimitImageIndex;
            v31 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleFBXComponent_AnimEvent__TypeInfo);
            System_Collections_Generic_List_object____ctor(
              v31,
              (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleFBXComponent_AnimEvent___ctor__);
            v32 = *p_eventlist;
            if ( !*p_eventlist )
              goto LABEL_71;
            if ( Index >= v32->max_length )
              break;
            v33 = Index;
            if ( !v32->m_Items[Index] )
            {
              v34 = *(_DWORD *)(v23 + 24);
              if ( v34 >= 3 )
              {
                v35 = 2;
                do
                {
                  if ( v35 >= (unsigned int)v34 )
                    goto LABEL_72;
                  Instance = *(_QWORD *)(v23 + 8LL * v35 + 32);
                  if ( !Instance )
                    goto LABEL_71;
                  if ( !*(_DWORD *)(Instance + 16) )
                    break;
                  v36 = System_Single__Parse((System_String_o *)Instance, 0LL);
                  Instance = (__int64)*v19;
                  v37 = v36;
                  if ( !(*v19)->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(Instance);
                    Instance = (__int64)*v19;
                  }
                  v38 = *(_DWORD *)(v23 + 24);
                  if ( v35 + 1 >= v38 )
                    goto LABEL_72;
                  v39 = v35 + 2;
                  if ( v35 + 2 >= v38 )
                    goto LABEL_72;
                  v40 = v19;
                  v41 = *(_QWORD *)(v23 + 8LL * (v35 + 1) + 32);
                  v42 = *(_QWORD *)(v23 + 8LL * (v35 + 2) + 32);
                  v43 = *(float *)(*(_QWORD *)(Instance + 184) + 4LL);
                  v44 = sub_1B887FC(BattleFBXComponent_AnimEvent_TypeInfo);
                  System_Object___ctor((Il2CppObject *)v44, 0LL);
                  if ( !v44 )
                    goto LABEL_71;
                  *(float *)(v44 + 16) = v37 / v43;
                  *(_QWORD *)(v44 + 24) = v41;
                  sub_1B88554((ServantStatusBattleListViewItem_o *)(v44 + 24), v41, v45, v46);
                  *(_QWORD *)(v44 + 32) = v42;
                  sub_1B88554((ServantStatusBattleListViewItem_o *)(v44 + 32), v42, v47, v48);
                  if ( !v31 )
                    goto LABEL_71;
                  items = v31->fields._items;
                  v52 = Method_System_Collections_Generic_List_BattleFBXComponent_AnimEvent__Add__;
                  ++v31->fields._version;
                  if ( !items )
                    goto LABEL_71;
                  size = v31->fields._size;
                  v19 = v40;
                  if ( (unsigned int)size >= items->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v31,
                      (Il2CppObject *)v44,
                      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v54 = &items->obj.klass + size;
                    v31->fields._size = size + 1;
                    v54[4] = (Il2CppClass *)v44;
                    sub_1B88554((ServantStatusBattleListViewItem_o *)(v54 + 4), v44, v49, v50);
                  }
                  v34 = *(_DWORD *)(v23 + 24);
                  v35 = v39 + 1;
                }
                while ( v39 + 1 < v34 );
                v33 = Index;
                v32 = *p_eventlist;
              }
            }
            if ( !v31 )
              goto LABEL_71;
            Instance = (__int64)System_Collections_Generic_List_object___ToArray(
                                  v31,
                                  (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BattleFBXComponent_AnimEvent__ToArray__);
            if ( !v32 )
              goto LABEL_71;
            v57 = Instance;
            if ( Instance )
            {
              Instance = sub_1B886EC(Instance, v32->obj.klass->_1.element_class);
              if ( !Instance )
              {
                v59 = sub_1B88830(0LL);
                sub_1B886D8(v59, 0LL);
              }
            }
            if ( Index >= v32->max_length )
              break;
            v58 = &v32->obj.klass + v33;
            v58[4] = (Il2CppClass *)v57;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v58 + 4), v57, v55, v56);
            LimitImageIndex = v30;
          }
        }
      }
      v17 = *(_DWORD *)(v18 + 24);
      if ( (int)++v20 >= v17 )
        return;
    }
LABEL_72:
    sub_1B88814(Instance, v14);
  }
}


void __fastcall BattleFBXComponent__playAnimation(
        BattleFBXComponent_o *this,
        System_String_o *filename,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  const MethodInfo *v4; // x4
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v8; // x1

  if ( (byte_4A5D70C & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_2377/*"AnimationCheck"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5D70C = 1;
  }
  BattleFBXComponent__playAnimationTimeline(this, filename, (System_String_o *)StringLiteral_1/*""*/, v3, v4);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B8880C(0LL, v8);
  if ( UnityEngine_GameObject__get_activeInHierarchy(gameObject, 0LL) )
  {
    UnityEngine_MonoBehaviour__StopCoroutine_69445580(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_2377/*"AnimationCheck"*/,
      0LL);
    UnityEngine_MonoBehaviour__StartCoroutine(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_2377/*"AnimationCheck"*/,
      0LL);
  }
}


void __fastcall BattleFBXComponent__playAnimationFromTag(
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

  if ( (byte_4A5D70D & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&SimpleAnimation_State_TypeInfo);
    byte_4A5D70D = 1;
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
  if ( UnityEngine_Object__op_Inequality(animationComponent, 0LL, 0LL) )
  {
    Item = this->fields.animationComponent;
    if ( Item )
    {
      Item = (UnityEngine_Animation_o *)UnityEngine_Animation__get_Item(Item, currentAnimName, 0LL);
      if ( Item )
      {
        UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)Item, *(float *)&v12, 0LL);
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
    sub_1B8880C(Item, v13);
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
      v22 = sub_1BDA590(Item, SimpleAnimation_State_TypeInfo, 4LL);
    }
    (*(void (__fastcall **)(UnityEngine_Animation_o *, _QWORD, long double))v22)(v19, *(_QWORD *)(v22 + 8), v12);
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
      v27 = sub_1BDA590(Item, SimpleAnimation_State_TypeInfo, 8LL);
    }
    (*(void (__fastcall **)(UnityEngine_Animation_o *, _QWORD, float))v27)(v24, *(_QWORD *)(v27 + 8), 0.0);
  }
LABEL_31:
  this->fields.currentAnimName = currentAnimName;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.currentAnimName, (int32_t)currentAnimName, v15, v16);
  this->fields.currentAnimTime = *(float *)&v12;
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
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v9; // x1
  Il2CppObject *Component_object; // x22
  int32_t v11; // w2
  int32_t v12; // w3
  const MethodInfo *v13; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *RealAnimNames; // x0
  struct System_Collections_Generic_Dictionary_string__string__o *v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3
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
  int32_t v29; // w3
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
  __int64 p_method; // x0
  const MethodInfo *v44; // x3
  const MethodInfo *v45; // x1

  if ( (byte_4A5D70A & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&SimpleAnimation_State_TypeInfo);
    byte_4A5D70A = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_41;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
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
      filename = BattleActorControl__OverwriteAnimation((BattleActorControl_o *)Component_object, filename, 1, 0LL);
      LOBYTE(Component_object[21].monitor) = 1;
      goto LABEL_9;
    }
LABEL_41:
    sub_1B8880C(gameObject, v9);
  }
LABEL_9:
  this->fields.currentCommonAnimName = filename;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.currentCommonAnimName, (int32_t)filename, v11, v12);
  RealAnimNames = this->fields.RealAnimNames;
  if ( RealAnimNames
    && System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)RealAnimNames,
         (Il2CppObject *)filename,
         (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
  {
    v15 = this->fields.RealAnimNames;
    if ( !v15 )
      sub_1B8880C(0LL, v13);
    filename = (System_String_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                    (System_Collections_Generic_Dictionary_object__object__o *)v15,
                                    (Il2CppObject *)filename,
                                    (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
  }
  BattleFBXComponent__setupAnimation(this, v13);
  this->fields.currentAnimName = filename;
  this->fields.isDirty = 1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.currentAnimName, (int32_t)filename, v16, v17);
  *(_QWORD *)&this->fields.currentAnimTime = 0LL;
  this->fields.isStop = 0;
  animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(animationComponent, 0LL, 0LL) )
  {
    v20 = this->fields.animationComponent;
    if ( !v20 )
      sub_1B8880C(0LL, v19);
    UnityEngine_Animation__Play_69204472(v20, filename, 0LL);
    v22 = this->fields.animationComponent;
    if ( !v22 )
      sub_1B8880C(0LL, v21);
    Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v22, filename, 0LL);
    if ( !UnityEngine_TrackedReference__op_Equality(Item, 0LL, 0LL) )
    {
      v25 = this->fields.animationComponent;
      if ( !v25 )
        sub_1B8880C(0LL, v24);
      v26 = UnityEngine_Animation__get_Item(v25, filename, 0LL);
      if ( !v26 )
        sub_1B8880C(0LL, v27);
      UnityEngine_AnimationState__set_speed(v26, 0.0, 0LL);
LABEL_37:
      this->fields.animename = filename;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.animename, (int32_t)filename, v28, v29);
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
    if ( !UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0LL, 0LL) )
      goto LABEL_37;
    v32 = this->fields.simpleAnimationComponent;
    if ( !v32 )
      sub_1B8880C(0LL, v31);
    SimpleAnimation__Play_63844704(v32, filename, 0LL);
    v34 = this->fields.simpleAnimationComponent;
    if ( !v34 )
      sub_1B8880C(0LL, v33);
    if ( SimpleAnimation__get_Item(v34, filename, 0LL) )
    {
      v36 = this->fields.simpleAnimationComponent;
      if ( !v36 )
        sub_1B8880C(0LL, v35);
      v37 = SimpleAnimation__get_Item(v36, filename, 0LL);
      v39 = v37;
      if ( !v37 )
        sub_1B8880C(0LL, v38);
      klass = v37->klass;
      v41 = *(unsigned __int16 *)(&v37->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v37->klass->_2.bitflags2 + 3) )
      {
        p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v41;
          p_offset += 2;
          if ( !v41 )
            goto LABEL_34;
        }
        p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 8].method;
      }
      else
      {
LABEL_34:
        p_method = sub_1BDA590(v37, SimpleAnimation_State_TypeInfo, 8LL);
      }
      (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD, float))p_method)(v39, *(_QWORD *)(p_method + 8), 0.0);
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

  if ( (byte_4A5D6FC & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    byte_4A5D6FC = 1;
  }
  this->fields.rootTransform = value;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.rootTransform, (int32_t)value, (int32_t)method, v3);
  rootTransform = (UnityEngine_Component_o *)this->fields.rootTransform;
  if ( !rootTransform
    || (rootTransform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(rootTransform, 0LL)) == 0LL
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)rootTransform,
                             (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_Animation___),
        this->fields.animationComponent = (struct UnityEngine_Animation_o *)Component_object,
        sub_1B88554(
          (ServantStatusBattleListViewItem_o *)&this->fields.animationComponent,
          (int32_t)Component_object,
          v9,
          v10),
        (rootTransform = (UnityEngine_Component_o *)this->fields.rootTransform) == 0LL)
    || (rootTransform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(rootTransform, 0LL)) == 0LL )
  {
    sub_1B8880C(rootTransform, v6);
  }
  v11 = UnityEngine_GameObject__GetComponent_object_(
          (UnityEngine_GameObject_o *)rootTransform,
          (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  this->fields.simpleAnimationComponent = (struct SimpleAnimation_o *)v11;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.simpleAnimationComponent, (int32_t)v11, v12, v13);
}


void __fastcall BattleFBXComponent__setupAnimation(BattleFBXComponent_o *this, const MethodInfo *method)
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

  if ( (byte_4A5D709 & 1) == 0 )
  {
    sub_1B885B0(&BattleFBXComponent_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_17964/*"chr"*/);
    byte_4A5D709 = 1;
  }
  rootTransform = (UnityEngine_Object_o *)this->fields.rootTransform;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(rootTransform, 0LL, 0LL) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform )
      sub_1B8880C(0LL, v5);
    v6 = UnityEngine_Transform__Find(transform, (System_String_o *)StringLiteral_17964/*"chr"*/, 0LL);
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
  if ( UnityEngine_Object__op_Equality(v9, 0LL, 0LL) )
  {
    v10 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    BattleFBXComponent__set_RootTransform(this, v10, v11);
  }
}


void __fastcall BattleFBXComponent__stopAnimation(BattleFBXComponent_o *this, const MethodInfo *method)
{
  this->fields.isStop = 1;
}


void __fastcall BattleFBXComponent__stopAnimationCheck(BattleFBXComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4A5D70F & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_2377/*"AnimationCheck"*/);
    byte_4A5D70F = 1;
  }
  UnityEngine_MonoBehaviour__StopCoroutine_69445580(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_2377/*"AnimationCheck"*/,
    0LL);
}


void __fastcall BattleFBXComponent__stopParticle(BattleFBXComponent_o *this, const MethodInfo *method)
{
  void *gameObject; // x0
  __int64 v4; // x1
  int v5; // w8
  void *v6; // x19
  unsigned int v7; // w20

  if ( (byte_4A5D708 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem___);
    byte_4A5D708 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_12;
  gameObject = UnityEngine_GameObject__GetComponentsInChildren_object__49085148(
                 (UnityEngine_GameObject_o *)gameObject,
                 (const MethodInfo_2ECFADC *)Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem___);
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
        sub_1B88814(gameObject, v4);
      gameObject = (void *)*((_QWORD *)v6 + (int)v7 + 4);
      if ( !gameObject )
        break;
      UnityEngine_ParticleSystem__Stop_69739868((UnityEngine_ParticleSystem_o *)gameObject, 0LL);
      v5 = *((_DWORD *)v6 + 6);
      if ( (int)++v7 >= v5 )
        return;
    }
LABEL_12:
    sub_1B8880C(gameObject, v4);
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
  struct BattleFBXComponent_o *_4__this; // x21
  UnityEngine_Object_o *animationComponent; // x20
  UnityEngine_Object_o *simpleAnimationComponent; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  bool result; // w0
  ServantStatusBattleListViewItem_o *v10; // x19
  int v11; // w8
  Il2CppObject *animename; // x19
  struct BattleFBXComponent_onEventDelegate_o *Complete; // x8

  v2 = this;
  if ( (byte_4A5D727 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    this = (BattleFBXComponent__AnimationCheck_d__69_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5D727 = 1;
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
            sub_1B88554(p__2__current, 0, v6, v7);
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
        sub_1B8880C(this, method);
      if ( !SimpleAnimation__get_isPlaying((SimpleAnimation_o *)this, 0LL) )
      {
LABEL_20:
        v2->fields.__2__current = 0LL;
        v10 = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
        sub_1B88554(v10, 0, v6, v7);
        v11 = 3;
        goto LABEL_21;
      }
      v2->fields.__2__current = 0LL;
      v10 = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
      sub_1B88554(v10, 0, v6, v7);
      v11 = 2;
LABEL_21:
      *(_DWORD *)&v10[-1].fields.isMine = v11;
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
                                                             (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_28;
      this = (BattleFBXComponent__AnimationCheck_d__69_o *)_4__this->fields.CommonAnimNames;
      if ( !this )
        goto LABEL_31;
      this = (BattleFBXComponent__AnimationCheck_d__69_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                             (System_Collections_Generic_Dictionary_object__object__o *)this,
                                                             animename,
                                                             (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_BattleFBXComponent__AnimationCheck_d__69_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
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
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5D724 & 1) == 0 )
  {
    sub_1B885B0(&BattleFBXComponent___c_TypeInfo);
    byte_4A5D724 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(BattleFBXComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  BattleFBXComponent___c_TypeInfo->static_fields->__9 = (struct BattleFBXComponent___c_o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)BattleFBXComponent___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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

  if ( (byte_4A5D725 & 1) == 0 )
  {
    this = (BattleFBXComponent___c_o *)sub_1B885B0(&BattleFBXComponent_TypeInfo);
    byte_4A5D725 = 1;
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
    sub_1B8880C(this, p);
  return System_String__Contains((System_String_o *)v6, BattleFBXComponent_TypeInfo->static_fields->sideflipMarker, 0LL);
}


bool __fastcall BattleFBXComponent___c___inSetEvolutionLevel_b__56_1(
        BattleFBXComponent___c_o *this,
        UnityEngine_Transform_o *p,
        const MethodInfo *method)
{
  BattleFBXComponent___c_o *v4; // x19

  if ( (byte_4A5D726 & 1) == 0 )
  {
    this = (BattleFBXComponent___c_o *)sub_1B885B0(&BattleFBXComponent_TypeInfo);
    byte_4A5D726 = 1;
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
    sub_1B8880C(this, p);
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
    sub_1B8880C(0LL, shaderName);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = (Il2CppObject *)sub_19D0F58;
LABEL_8:
      this->fields.m_target = v9;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v8 )
    {
      v9 = (Il2CppObject *)sub_19D0F38;
      goto LABEL_8;
    }
    if ( !object )
    {
      v11 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v11, 0LL);
    }
  }
  v10 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v10;
LABEL_9:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19D0EF0;
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
  return (System_IAsyncResult_o *)sub_1B88564(this, &v6, callback, object);
}


void __fastcall BattleFBXComponent_onEventDelegate__EndInvoke(
        BattleFBXComponent_onEventDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
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