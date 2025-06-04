void __fastcall CombineEffectComponent___ctor(CombineEffectComponent_o *this, const MethodInfo *method)
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
  __int64 v33; // x0
  __int64 v34; // x1
  __int64 v35; // x2
  const MethodInfo *v36; // x3
  int v37; // w8
  const MethodInfo *v38; // x3
  __int64 v39; // x20
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
  const MethodInfo *v57; // x3
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
  const MethodInfo *v77; // x3
  int32_t v78; // w1
  int32_t v79; // w2
  const MethodInfo *v80; // x3
  const MethodInfo *v81; // x3
  __int64 v82; // x20
  int32_t v83; // w1
  const MethodInfo *v84; // x3
  int32_t v85; // w1
  const MethodInfo *v86; // x3
  int32_t v87; // w1
  const MethodInfo *v88; // x3
  int32_t v89; // w1
  const MethodInfo *v90; // x3
  int32_t v91; // w1
  int32_t v92; // w2
  const MethodInfo *v93; // x3
  System_Collections_Generic_List_object__o *v94; // x20
  int32_t v95; // w2
  const MethodInfo *v96; // x3
  System_Collections_Generic_List_int__o *v97; // x20
  int32_t v98; // w2
  const MethodInfo *v99; // x3

  if ( (byte_4B05A98 & 1) == 0 )
  {
    sub_1BC3008(&int___TypeInfo, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_int___ctor__, v3);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v4);
    sub_1BC3008(&System_Collections_Generic_List_int__TypeInfo, v5);
    sub_1BC3008(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v6);
    sub_1BC3008(&string___TypeInfo, v7);
    sub_1BC3008(&StringLiteral_17968/*"combine_08"*/, v8);
    sub_1BC3008(&StringLiteral_17969/*"combine_09"*/, v9);
    sub_1BC3008(&StringLiteral_17976/*"combine_16"*/, v10);
    sub_1BC3008(&StringLiteral_17979/*"combine_19"*/, v11);
    sub_1BC3008(&StringLiteral_17980/*"combine_20"*/, v12);
    sub_1BC3008(&StringLiteral_17967/*"combine_07"*/, v13);
    sub_1BC3008(&StringLiteral_17961/*"combine_01"*/, v14);
    sub_1BC3008(&StringLiteral_17962/*"combine_02"*/, v15);
    sub_1BC3008(&StringLiteral_17974/*"combine_14"*/, v16);
    sub_1BC3008(&StringLiteral_17970/*"combine_10"*/, v17);
    sub_1BC3008(&StringLiteral_17982/*"combine_fodder012"*/, v18);
    sub_1BC3008(&StringLiteral_17981/*"combine_fodder01"*/, v19);
    sub_1BC3008(&StringLiteral_17971/*"combine_11"*/, v20);
    sub_1BC3008(&StringLiteral_17972/*"combine_12"*/, v21);
    sub_1BC3008(&StringLiteral_17984/*"combine_fodder014"*/, v22);
    sub_1BC3008(&StringLiteral_17983/*"combine_fodder013"*/, v23);
    sub_1BC3008(&StringLiteral_17965/*"combine_05"*/, v24);
    sub_1BC3008(&StringLiteral_17977/*"combine_17"*/, v25);
    sub_1BC3008(&StringLiteral_17985/*"combine_fodder015"*/, v26);
    sub_1BC3008(&StringLiteral_17975/*"combine_15"*/, v27);
    sub_1BC3008(&StringLiteral_17964/*"combine_04"*/, v28);
    sub_1BC3008(&StringLiteral_17963/*"combine_03"*/, v29);
    sub_1BC3008(&StringLiteral_17966/*"combine_06"*/, v30);
    sub_1BC3008(&StringLiteral_17973/*"combine_13"*/, v31);
    sub_1BC3008(&StringLiteral_17978/*"combine_18"*/, v32);
    byte_4B05A98 = 1;
  }
  v33 = sub_1BC30B0(int___TypeInfo, 2LL);
  if ( !v33 )
    goto LABEL_35;
  v37 = *(_DWORD *)(v33 + 24);
  v34 = v33;
  if ( !v37 )
    goto LABEL_34;
  *(_DWORD *)(v33 + 32) = 512;
  if ( v37 == 1 )
    goto LABEL_34;
  *(_DWORD *)(v33 + 36) = 875;
  this->fields.cardTextureSize = (struct System_Int32_array *)v33;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.cardTextureSize, v33, v35, v36);
  v33 = sub_1BC30B0(string___TypeInfo, 20LL);
  if ( !v33 )
    goto LABEL_35;
  v39 = v33;
  if ( !*(_DWORD *)(v33 + 24) )
    goto LABEL_34;
  v40 = StringLiteral_17961/*"combine_01"*/;
  *(_QWORD *)(v33 + 32) = StringLiteral_17961/*"combine_01"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v33 + 32), v40, v35, v38);
  if ( *(_DWORD *)(v39 + 24) <= 1u )
    goto LABEL_34;
  v42 = StringLiteral_17962/*"combine_02"*/;
  *(_QWORD *)(v39 + 40) = StringLiteral_17962/*"combine_02"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v39 + 40), v42, v35, v41);
  if ( *(_DWORD *)(v39 + 24) <= 2u )
    goto LABEL_34;
  v44 = StringLiteral_17963/*"combine_03"*/;
  *(_QWORD *)(v39 + 48) = StringLiteral_17963/*"combine_03"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v39 + 48), v44, v35, v43);
  if ( *(_DWORD *)(v39 + 24) <= 3u )
    goto LABEL_34;
  v46 = StringLiteral_17964/*"combine_04"*/;
  *(_QWORD *)(v39 + 56) = StringLiteral_17964/*"combine_04"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v39 + 56), v46, v35, v45);
  if ( *(_DWORD *)(v39 + 24) <= 4u )
    goto LABEL_34;
  v48 = StringLiteral_17965/*"combine_05"*/;
  *(_QWORD *)(v39 + 64) = StringLiteral_17965/*"combine_05"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v39 + 64), v48, v35, v47);
  if ( *(_DWORD *)(v39 + 24) <= 5u )
    goto LABEL_34;
  v50 = StringLiteral_17966/*"combine_06"*/;
  *(_QWORD *)(v39 + 72) = StringLiteral_17966/*"combine_06"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v39 + 72), v50, v35, v49);
  if ( *(_DWORD *)(v39 + 24) <= 6u )
    goto LABEL_34;
  v52 = StringLiteral_17967/*"combine_07"*/;
  *(_QWORD *)(v39 + 80) = StringLiteral_17967/*"combine_07"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v39 + 80), v52, v35, v51);
  if ( *(_DWORD *)(v39 + 24) <= 7u )
    goto LABEL_34;
  v54 = StringLiteral_17968/*"combine_08"*/;
  *(_QWORD *)(v39 + 88) = StringLiteral_17968/*"combine_08"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v39 + 88), v54, v35, v53);
  if ( *(_DWORD *)(v39 + 24) <= 8u )
    goto LABEL_34;
  v56 = StringLiteral_17969/*"combine_09"*/;
  *(_QWORD *)(v39 + 96) = StringLiteral_17969/*"combine_09"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v39 + 96), v56, v35, v55);
  if ( *(_DWORD *)(v39 + 24) <= 9u )
    goto LABEL_34;
  v58 = StringLiteral_17970/*"combine_10"*/;
  *(_QWORD *)(v39 + 104) = StringLiteral_17970/*"combine_10"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v39 + 104), v58, v35, v57);
  if ( *(_DWORD *)(v39 + 24) <= 0xAu )
    goto LABEL_34;
  v60 = StringLiteral_17971/*"combine_11"*/;
  *(_QWORD *)(v39 + 112) = StringLiteral_17971/*"combine_11"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v39 + 112), v60, v35, v59);
  if ( *(_DWORD *)(v39 + 24) <= 0xBu )
    goto LABEL_34;
  v62 = StringLiteral_17972/*"combine_12"*/;
  *(_QWORD *)(v39 + 120) = StringLiteral_17972/*"combine_12"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v39 + 120), v62, v35, v61);
  if ( *(_DWORD *)(v39 + 24) <= 0xCu )
    goto LABEL_34;
  v64 = StringLiteral_17973/*"combine_13"*/;
  *(_QWORD *)(v39 + 128) = StringLiteral_17973/*"combine_13"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v39 + 128), v64, v35, v63);
  if ( *(_DWORD *)(v39 + 24) <= 0xDu )
    goto LABEL_34;
  v66 = StringLiteral_17974/*"combine_14"*/;
  *(_QWORD *)(v39 + 136) = StringLiteral_17974/*"combine_14"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v39 + 136), v66, v35, v65);
  if ( *(_DWORD *)(v39 + 24) <= 0xEu )
    goto LABEL_34;
  v68 = StringLiteral_17975/*"combine_15"*/;
  *(_QWORD *)(v39 + 144) = StringLiteral_17975/*"combine_15"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v39 + 144), v68, v35, v67);
  if ( *(_DWORD *)(v39 + 24) <= 0xFu )
    goto LABEL_34;
  v70 = StringLiteral_17976/*"combine_16"*/;
  *(_QWORD *)(v39 + 152) = StringLiteral_17976/*"combine_16"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v39 + 152), v70, v35, v69);
  if ( *(_DWORD *)(v39 + 24) <= 0x10u )
    goto LABEL_34;
  v72 = StringLiteral_17977/*"combine_17"*/;
  *(_QWORD *)(v39 + 160) = StringLiteral_17977/*"combine_17"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v39 + 160), v72, v35, v71);
  if ( *(_DWORD *)(v39 + 24) <= 0x11u
    || (v74 = StringLiteral_17978/*"combine_18"*/,
        *(_QWORD *)(v39 + 168) = StringLiteral_17978/*"combine_18"*/,
        sub_1BC2FAC((CGThumbnailListItem_o *)(v39 + 168), v74, v35, v73),
        *(_DWORD *)(v39 + 24) <= 0x12u)
    || (v76 = StringLiteral_17979/*"combine_19"*/,
        *(_QWORD *)(v39 + 176) = StringLiteral_17979/*"combine_19"*/,
        sub_1BC2FAC((CGThumbnailListItem_o *)(v39 + 176), v76, v35, v75),
        *(_DWORD *)(v39 + 24) <= 0x13u) )
  {
LABEL_34:
    sub_1BC326C(v33, v34, v35);
  }
  v78 = StringLiteral_17980/*"combine_20"*/;
  *(_QWORD *)(v39 + 184) = StringLiteral_17980/*"combine_20"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v39 + 184), v78, v35, v77);
  this->fields.startAniName = (struct System_String_array *)v39;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.startAniName, v39, v79, v80);
  v33 = sub_1BC30B0(string___TypeInfo, 5LL);
  if ( !v33 )
LABEL_35:
    sub_1BC3264(v33, v34);
  v82 = v33;
  if ( !*(_DWORD *)(v33 + 24) )
    goto LABEL_34;
  v83 = StringLiteral_17981/*"combine_fodder01"*/;
  *(_QWORD *)(v33 + 32) = StringLiteral_17981/*"combine_fodder01"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v33 + 32), v83, v35, v81);
  if ( *(_DWORD *)(v82 + 24) <= 1u )
    goto LABEL_34;
  v85 = StringLiteral_17982/*"combine_fodder012"*/;
  *(_QWORD *)(v82 + 40) = StringLiteral_17982/*"combine_fodder012"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v82 + 40), v85, v35, v84);
  if ( *(_DWORD *)(v82 + 24) <= 2u )
    goto LABEL_34;
  v87 = StringLiteral_17983/*"combine_fodder013"*/;
  *(_QWORD *)(v82 + 48) = StringLiteral_17983/*"combine_fodder013"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v82 + 48), v87, v35, v86);
  if ( *(_DWORD *)(v82 + 24) <= 3u )
    goto LABEL_34;
  v89 = StringLiteral_17984/*"combine_fodder014"*/;
  *(_QWORD *)(v82 + 56) = StringLiteral_17984/*"combine_fodder014"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v82 + 56), v89, v35, v88);
  if ( *(_DWORD *)(v82 + 24) <= 4u )
    goto LABEL_34;
  v91 = StringLiteral_17985/*"combine_fodder015"*/;
  *(_QWORD *)(v82 + 64) = StringLiteral_17985/*"combine_fodder015"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v82 + 64), v91, v35, v90);
  this->fields.itemAniName = (struct System_String_array *)v82;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.itemAniName, v82, v92, v93);
  v94 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v94,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.materialList = (struct System_Collections_Generic_List_UserServantEntity__o *)v94;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.materialList, (int32_t)v94, v95, v96);
  v97 = (System_Collections_Generic_List_int__o *)sub_1BC3254(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v97,
    (const MethodInfo_36835C8 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.itemList = v97;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.itemList, (int32_t)v97, v98, v99);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall CombineEffectComponent__EndLoadBg(
        CombineEffectComponent_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v17; // x8
  CommonUI_o *v18; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v20; // x21

  if ( (byte_4B05A8D & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, data);
    sub_1BC3008(&AvalonSceneManager_TypeInfo, v5);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1BC3008(&Method_CombineEffectComponent___c__DisplayClass35_0__EndLoadBg_b__0__, v7);
    sub_1BC3008(&CombineEffectComponent___c__DisplayClass35_0_TypeInfo, v8);
    byte_4B05A8D = 1;
  }
  v9 = sub_1BC3254(CombineEffectComponent___c__DisplayClass35_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_8;
  *(_QWORD *)(v9 + 16) = data;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v9 + 16), (int32_t)data, v12, v13);
  *(_QWORD *)(v9 + 24) = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v9 + 24), (int32_t)this, v14, v15);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v17 = AvalonSceneManager_TypeInfo;
  v18 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v17 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v17->static_fields->DEFAULT_FADE_TIME;
  v20 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(
    v20,
    (Il2CppObject *)v9,
    Method_CombineEffectComponent___c__DisplayClass35_0__EndLoadBg_b__0__,
    0LL);
  if ( !v18 )
LABEL_8:
    sub_1BC3264(v10, v11);
  CommonUI__maskFadeout(v18, 1, DEFAULT_FADE_TIME, v20, 0LL);
}


void __fastcall CombineEffectComponent__InitCombineEffect(CombineEffectComponent_o *this, const MethodInfo *method)
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
  __int64 v12; // x1
  Il2CppObject *Component_object; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_Collections_Generic_List_object__o *v16; // x21
  struct System_Collections_Generic_List_string__o **p_releaseAssetPath; // x20
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t kind; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v22; // x1
  __int64 *v23; // x8
  struct UnityEngine_GameObject_o *v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  Il2CppObject *v29; // x20
  __int64 v30; // x8
  _QWORD *v31; // x9
  __int64 klass_low; // x10
  __int64 v33; // x8
  AssetLoader_LoadEndDataHandler_o *v34; // x21
  _QWORD *v35; // x0
  System_Reflection_MethodBase_o *v36; // x0

  if ( (byte_4B05A8C & 1) == 0 )
  {
    sub_1BC3008(&AssetManager_TypeInfo, method);
    sub_1BC3008(&Method_CombineEffectComponent_EndLoadBg__, v3);
    sub_1BC3008(&Method_CombineEffectComponent_InitCombineEffect__, v4);
    sub_1BC3008(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_string__Add__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_string___ctor__, v7);
    sub_1BC3008(&System_Collections_Generic_List_string__TypeInfo, v8);
    sub_1BC3008(&AssetLoader_LoadEndDataHandler_TypeInfo, v9);
    sub_1BC3008(&StringLiteral_3125/*"Bg/10500"*/, v10);
    sub_1BC3008(&StringLiteral_5868/*"EffectPanel/Combine_fodder01(Clone)/Combine_bit/BG_root"*/, v11);
    sub_1BC3008(&StringLiteral_5867/*"EffectPanel/Combine_bit_prefab(Clone)/Combine_bit/BG_root"*/, v12);
    byte_4B05A8C = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2FF8634 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  this->fields.fsm = (struct PlayMakerFSM_o *)Component_object;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.fsm, (int32_t)Component_object, v14, v15);
  v16 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.releaseAssetPath = (struct System_Collections_Generic_List_string__o *)v16;
  p_releaseAssetPath = &this->fields.releaseAssetPath;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.releaseAssetPath, (int32_t)v16, v18, v19);
  kind = this->fields.kind;
  this->fields.cntIndex = 0;
  if ( kind != 3 && kind )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
      if ( gameObject )
      {
        v23 = &StringLiteral_5868/*"EffectPanel/Combine_fodder01(Clone)/Combine_bit/BG_root"*/;
        goto LABEL_11;
      }
    }
LABEL_22:
    sub_1BC3264(gameObject, v22);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_22;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_22;
  v23 = &StringLiteral_5867/*"EffectPanel/Combine_bit_prefab(Clone)/Combine_bit/BG_root"*/;
LABEL_11:
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Transform__Find(
                                             (UnityEngine_Transform_o *)gameObject,
                                             (System_String_o *)*v23,
                                             0LL);
  if ( !gameObject )
    goto LABEL_22;
  v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  this->fields.bgParentObject = v24;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.bgParentObject, (int32_t)v24, v25, v26);
  gameObject = (UnityEngine_GameObject_o *)*p_releaseAssetPath;
  if ( !*p_releaseAssetPath )
    goto LABEL_22;
  v29 = (Il2CppObject *)StringLiteral_3125/*"Bg/10500"*/;
  v30 = *(_QWORD *)&gameObject->fields.m_CachedPtr;
  v31 = Method_System_Collections_Generic_List_string__Add__;
  ++HIDWORD(gameObject[1].klass);
  if ( !v30 )
    goto LABEL_22;
  klass_low = SLODWORD(gameObject[1].klass);
  if ( (unsigned int)klass_low >= *(_DWORD *)(v30 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)gameObject,
      v29,
      *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
  }
  else
  {
    v33 = v30 + 8 * klass_low;
    LODWORD(gameObject[1].klass) = klass_low + 1;
    *(_QWORD *)(v33 + 32) = v29;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v33 + 32), (int32_t)v29, v27, v28);
  }
  v34 = (AssetLoader_LoadEndDataHandler_o *)sub_1BC3254(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v34, (Il2CppObject *)this, Method_CombineEffectComponent_EndLoadBg__, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage((System_String_o *)v29, v34, 1, 0LL);
  v35 = Method_CombineEffectComponent_InitCombineEffect__;
  if ( (*((_BYTE *)Method_CombineEffectComponent_InitCombineEffect__ + 83) & 2) != 0 )
    v35 = (_QWORD *)sub_1BC3020(Method_CombineEffectComponent_InitCombineEffect__);
  v36 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v35, v35[4]);
  OverwriteAssetSoundName__PlayCommonSe(v36, 19, 0, 0LL);
}


void __fastcall CombineEffectComponent__ReleasePrevAsset(CombineEffectComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct System_Collections_Generic_List_string__o *releaseAssetPath; // x0
  Il2CppObject *current; // x20
  struct System_Collections_Generic_List_string__o *v14; // x8
  int32_t size; // w2
  int v16; // w9
  struct System_Collections_Generic_List_UserServantEntity__o *materialList; // x8
  int32_t v18; // w2
  int v19; // w9
  struct System_Collections_Generic_List_int__o *itemList; // x8
  int v21; // w9
  struct System_Collections_Generic_List_ItemEntity__o *v22; // x8
  CGThumbnailListItem_o *p_itemEntityList; // x19
  struct System_Collections_Generic_List_ItemEntity__o *itemEntityList; // t1
  int32_t v25; // w2
  int v26; // w9
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4B05A97 & 1) == 0 )
  {
    sub_1BC3008(&AssetManager_TypeInfo, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v4);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_ItemEntity__Clear__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserServantEntity__Clear__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_string__Clear__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__Clear__, v10);
    sub_1BC3008(&Method_System_Collections_Generic_List_string__GetEnumerator__, v11);
    byte_4B05A97 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  releaseAssetPath = this->fields.releaseAssetPath;
  if ( releaseAssetPath )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v27,
      (System_Collections_Generic_List_object__o *)releaseAssetPath,
      (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    v28 = v27;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v28,
              (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      current = v28.fields._current;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__releaseAssetStorage((System_String_o *)current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v28,
      (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    v14 = this->fields.releaseAssetPath;
    if ( !v14 )
      goto LABEL_21;
    size = v14->fields._size;
    v16 = v14->fields._version + 1;
    v14->fields._size = 0;
    v14->fields._version = v16;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v14->fields._items, 0, size, 0LL);
  }
  materialList = this->fields.materialList;
  if ( !materialList )
    goto LABEL_21;
  v18 = materialList->fields._size;
  v19 = materialList->fields._version + 1;
  materialList->fields._size = 0;
  materialList->fields._version = v19;
  if ( v18 >= 1 )
    System_Array__Clear((System_Array_o *)materialList->fields._items, 0, v18, 0LL);
  itemList = this->fields.itemList;
  if ( !itemList )
LABEL_21:
    sub_1BC3264(releaseAssetPath, method);
  v21 = itemList->fields._version + 1;
  itemList->fields._size = 0;
  itemList->fields._version = v21;
  itemEntityList = this->fields.itemEntityList;
  p_itemEntityList = (CGThumbnailListItem_o *)&this->fields.itemEntityList;
  v22 = itemEntityList;
  if ( itemEntityList )
  {
    v25 = v22->fields._size;
    v26 = v22->fields._version + 1;
    v22->fields._size = 0;
    v22->fields._version = v26;
    if ( v25 >= 1 )
      System_Array__Clear((System_Array_o *)v22->fields._items, 0, v25, 0LL);
    p_itemEntityList->klass = 0LL;
    sub_1BC2FAC(p_itemEntityList, 0, v25, v2);
  }
}


void __fastcall CombineEffectComponent__SetCardParam(CombineEffectComponent_o *this, const MethodInfo *method)
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
  __int64 v44; // x1
  __int64 v45; // x1
  __int64 v46; // x1
  __int64 v47; // x1
  __int64 fsm; // x0
  PlayMakerFSM_o **p_fsm; // x19
  struct UnityEngine_GameObject_o *Value; // x0
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  float v53; // s0
  float v54; // s8
  System_String_o *v55; // x21
  Il2CppObject *v56; // x23
  Il2CppObject *v57; // x22
  Il2CppObject *v58; // x20
  Il2CppObject *v59; // x29
  Il2CppObject *v60; // x27
  Il2CppObject *v61; // x25
  Il2CppObject *v62; // x24
  Il2CppObject *v63; // x28
  Il2CppObject *v64; // x27
  Il2CppObject *v65; // x25
  Il2CppObject *v66; // x24
  Il2CppObject *v67; // x28
  Il2CppObject *v68; // x27
  Il2CppObject *v69; // x25
  Il2CppObject *v70; // x24
  Il2CppObject *v71; // x28
  Il2CppObject *v72; // x27
  Il2CppObject *v73; // x25
  Il2CppObject *v74; // x24
  System_Collections_Generic_List_object__o *v75; // x25
  int32_t v76; // w2
  const MethodInfo *v77; // x3
  _QWORD *v78; // x8
  int32_t *p_version; // x21
  struct System_Object_array *items; // x9
  System_Collections_Generic_List_object__Fields *p_fields; // x28
  __int64 size; // x10
  int32_t *p_size; // x24
  Il2CppClass **v84; // x0
  int32_t v85; // w2
  const MethodInfo *v86; // x3
  _QWORD *v87; // x8
  struct System_Object_array *v88; // x9
  __int64 v89; // x10
  __int64 v90; // x0
  int32_t v91; // w2
  const MethodInfo *v92; // x3
  _QWORD *v93; // x8
  struct System_Object_array *v94; // x9
  __int64 v95; // x10
  __int64 v96; // x0
  int32_t v97; // w2
  const MethodInfo *v98; // x3
  _QWORD *v99; // x8
  struct System_Object_array *v100; // x9
  __int64 v101; // x10
  __int64 v102; // x0
  int32_t v103; // w2
  const MethodInfo *v104; // x3
  _QWORD *v105; // x8
  struct System_Object_array *v106; // x9
  __int64 v107; // x10
  __int64 v108; // x0
  int32_t v109; // w2
  const MethodInfo *v110; // x3
  _QWORD *v111; // x8
  struct System_Object_array *v112; // x9
  __int64 v113; // x10
  __int64 v114; // x0
  int32_t v115; // w2
  const MethodInfo *v116; // x3
  _QWORD *v117; // x8
  struct System_Object_array *v118; // x9
  __int64 v119; // x10
  __int64 v120; // x0
  int32_t v121; // w2
  const MethodInfo *v122; // x3
  _QWORD *v123; // x8
  struct System_Object_array *v124; // x9
  __int64 v125; // x10
  __int64 v126; // x0
  int32_t v127; // w2
  const MethodInfo *v128; // x3
  _QWORD *v129; // x8
  struct System_Object_array *v130; // x9
  __int64 v131; // x10
  __int64 v132; // x0
  int32_t v133; // w2
  const MethodInfo *v134; // x3
  _QWORD *v135; // x8
  struct System_Object_array *v136; // x9
  __int64 v137; // x10
  __int64 v138; // x0
  int32_t v139; // w2
  const MethodInfo *v140; // x3
  _QWORD *v141; // x8
  struct System_Object_array *v142; // x9
  __int64 v143; // x10
  __int64 v144; // x0
  int32_t v145; // w2
  const MethodInfo *v146; // x3
  _QWORD *v147; // x8
  struct System_Object_array *v148; // x9
  __int64 v149; // x10
  __int64 v150; // x0
  int32_t v151; // w2
  const MethodInfo *v152; // x3
  _QWORD *v153; // x8
  struct System_Object_array *v154; // x9
  __int64 v155; // x10
  __int64 v156; // x0
  int32_t v157; // w2
  const MethodInfo *v158; // x3
  _QWORD *v159; // x8
  struct System_Object_array *v160; // x9
  __int64 v161; // x10
  __int64 v162; // x0
  int32_t v163; // w2
  const MethodInfo *v164; // x3
  _QWORD *v165; // x8
  struct System_Object_array *v166; // x9
  __int64 v167; // x10
  __int64 v168; // x0
  int32_t v169; // w2
  const MethodInfo *v170; // x3
  _QWORD *v171; // x8
  struct System_Object_array *v172; // x9
  __int64 v173; // x10
  __int64 v174; // x0
  int32_t v175; // w2
  const MethodInfo *v176; // x3
  _QWORD *v177; // x8
  struct System_Object_array *v178; // x9
  __int64 v179; // x10
  __int64 v180; // x0
  int32_t v181; // w2
  const MethodInfo *v182; // x3
  _QWORD *v183; // x8
  struct System_Object_array *v184; // x9
  __int64 v185; // x10
  __int64 v186; // x0
  int32_t v187; // w2
  const MethodInfo *v188; // x3
  _QWORD *v189; // x8
  struct System_Object_array *v190; // x9
  __int64 v191; // x10
  __int64 v192; // x0
  int32_t v193; // w2
  const MethodInfo *v194; // x3
  _QWORD *v195; // x8
  struct System_Object_array *v196; // x9
  __int64 v197; // x10
  __int64 v198; // x0
  int32_t v199; // w2
  const MethodInfo *v200; // x3
  Il2CppObject *v201; // x25
  Il2CppObject *v202; // x24
  Il2CppObject *v203; // x23
  Il2CppObject *v204; // x22
  Il2CppObject *v205; // x21
  System_Collections_Generic_List_object__o *v206; // x20
  int32_t v207; // w2
  const MethodInfo *v208; // x3
  struct System_Object_array *v209; // x8
  _QWORD *v210; // x9
  __int64 v211; // x10
  Il2CppClass **v212; // x0
  int32_t v213; // w2
  const MethodInfo *v214; // x3
  struct System_Object_array *v215; // x8
  _QWORD *v216; // x9
  __int64 v217; // x10
  Il2CppClass **v218; // x0
  int32_t v219; // w2
  const MethodInfo *v220; // x3
  struct System_Object_array *v221; // x8
  _QWORD *v222; // x9
  __int64 v223; // x10
  Il2CppClass **v224; // x0
  int32_t v225; // w2
  const MethodInfo *v226; // x3
  struct System_Object_array *v227; // x8
  _QWORD *v228; // x9
  __int64 v229; // x10
  Il2CppClass **v230; // x0
  int32_t v231; // w2
  const MethodInfo *v232; // x3
  struct System_Object_array *v233; // x8
  _QWORD *v234; // x9
  __int64 v235; // x10
  Il2CppClass **v236; // x0
  int32_t v237; // w2
  const MethodInfo *v238; // x3
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *v240; // x20
  int32_t CardImageLimitCount; // w21
  struct UserServantEntity_o *baseSvtEntity; // x8
  ServantLimitImageMaster_o *v243; // x22
  __int64 v244; // x23
  __int64 v245; // x24
  int32_t v246; // w21
  ServantOverwriteStatus_o *OverwriteStatus; // x0
  ServantOverwriteStatus_o *v248; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v250; // x20
  UnityEngine_Transform_o *v251; // x21
  CombineEffectComponent_o *v252; // x0
  const MethodInfo *v253; // x3
  UserServantEntity_o *v254; // x8
  System_String_o *ExceedFrameCardPath; // x0
  int32_t v256; // w2
  const MethodInfo *v257; // x3
  System_String_o *FrameCardPrefix; // x20
  int32_t baseClassCardId; // w21
  DesignCardManager_o *v260; // x20
  Il2CppObject *v261; // x20
  __int64 v262; // x8
  _QWORD *v263; // x9
  __int64 v264; // x10
  __int64 v265; // x8
  AssetLoader_LoadEndDataHandler_o *v266; // x21
  __int64 v267; // x2
  struct System_Collections_Generic_List_UserServantEntity__o *materialList; // x8
  int32_t v269; // w9
  struct System_String_array *startAniName; // x8
  il2cpp_array_size_t v271; // w9
  System_String_o *v272; // x20
  int32_t v273; // w2
  const MethodInfo *v274; // x3
  const MethodInfo *v275; // x1
  struct System_Collections_Generic_List_ItemEntity__o *itemEntityList; // x8
  int32_t v277; // w8
  struct System_Collections_Generic_List_int__o *itemList; // x8
  struct System_String_array *itemAniName; // x9
  il2cpp_array_size_t v280; // w8
  __int64 v281; // x20
  int32_t v282; // w2
  const MethodInfo *v283; // x3
  const MethodInfo *v284; // x1
  System_String_o *nodename; // [xsp+18h] [xbp-F8h]
  Il2CppObject *v286; // [xsp+20h] [xbp-F0h]
  Il2CppObject *v287; // [xsp+28h] [xbp-E8h]
  Il2CppObject *v288; // [xsp+30h] [xbp-E0h]
  Il2CppObject *v289; // [xsp+40h] [xbp-D0h]
  Il2CppObject *v290; // [xsp+48h] [xbp-C8h]
  Il2CppObject *v291; // [xsp+50h] [xbp-C0h]
  Il2CppObject *v292; // [xsp+58h] [xbp-B8h]
  Il2CppObject *v293; // [xsp+60h] [xbp-B0h]
  Il2CppObject *v294; // [xsp+68h] [xbp-A8h]
  Il2CppObject *v295; // [xsp+70h] [xbp-A0h]
  Il2CppObject *v296; // [xsp+78h] [xbp-98h]
  Il2CppObject *v297; // [xsp+80h] [xbp-90h]
  Il2CppObject *v298; // [xsp+88h] [xbp-88h]
  Il2CppObject *v299; // [xsp+90h] [xbp-80h]
  Il2CppObject *item; // [xsp+98h] [xbp-78h]
  int32_t classCardId; // [xsp+ACh] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v302; // 0:x0.16
  UnityEngine_Vector3_o v303; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B05A8F & 1) == 0 )
  {
    sub_1BC3008(&AssetManager_TypeInfo, method);
    sub_1BC3008(&Method_CombineEffectComponent_setReverseCallback__, v3);
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v4);
    sub_1BC3008(&Method_System_Collections_Generic_List_string__Add__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_string___ctor__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_ItemEntity__get_Count__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__get_Count__, v9);
    sub_1BC3008(&System_Collections_Generic_List_string__TypeInfo, v10);
    sub_1BC3008(&AssetLoader_LoadEndDataHandler_TypeInfo, v11);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__, v14);
    sub_1BC3008(&StringLiteral_3035/*"BaseCardNodeName"*/, v15);
    sub_1BC3008(&StringLiteral_4300/*"CardScale"*/, v16);
    sub_1BC3008(&StringLiteral_6651/*"FifthItemNodeName"*/, v17);
    sub_1BC3008(&StringLiteral_6610/*"Feed20NodeName"*/, v18);
    sub_1BC3008(&StringLiteral_6598/*"Feed08NodeName"*/, v19);
    sub_1BC3008(&StringLiteral_6601/*"Feed11NodeName"*/, v20);
    sub_1BC3008(&StringLiteral_6605/*"Feed15NodeName"*/, v21);
    sub_1BC3008(&StringLiteral_2655/*"BACKSIDE_SVT_EQUIP_IMAGE_ID"*/, v22);
    sub_1BC3008(&StringLiteral_17961/*"combine_01"*/, v23);
    sub_1BC3008(&StringLiteral_6600/*"Feed10NodeName"*/, v24);
    sub_1BC3008(&StringLiteral_4533/*"CombineEffect"*/, v25);
    sub_1BC3008(&StringLiteral_6792/*"FourthFeedNodeName"*/, v26);
    sub_1BC3008(&StringLiteral_6602/*"Feed12NodeName"*/, v27);
    sub_1BC3008(&StringLiteral_14319/*"ThrdItemNodeName"*/, v28);
    sub_1BC3008(&StringLiteral_6650/*"FifthFeedNodeName"*/, v29);
    sub_1BC3008(&StringLiteral_12534/*"SecItemNodeName"*/, v30);
    sub_1BC3008(&StringLiteral_6606/*"Feed16NodeName"*/, v31);
    sub_1BC3008(&StringLiteral_12499/*"ScndFeedNodeName"*/, v32);
    sub_1BC3008(&StringLiteral_6829/*"FstFeedNodeName"*/, v33);
    sub_1BC3008(&StringLiteral_6597/*"Feed07NodeName"*/, v34);
    sub_1BC3008(&StringLiteral_14318/*"ThrdFeedNodeName"*/, v35);
    sub_1BC3008(&StringLiteral_6596/*"Feed06NodeName"*/, v36);
    sub_1BC3008(&StringLiteral_17986/*"combine_fodder02"*/, v37);
    sub_1BC3008(&StringLiteral_12770/*"SkillItemNodeName"*/, v38);
    sub_1BC3008(&StringLiteral_12918/*"StartAnimationName"*/, v39);
    sub_1BC3008(&StringLiteral_6608/*"Feed18NodeName"*/, v40);
    sub_1BC3008(&StringLiteral_6603/*"Feed13NodeName"*/, v41);
    sub_1BC3008(&StringLiteral_1/*""*/, v42);
    sub_1BC3008(&StringLiteral_6609/*"Feed19NodeName"*/, v43);
    sub_1BC3008(&StringLiteral_6604/*"Feed14NodeName"*/, v44);
    sub_1BC3008(&StringLiteral_6793/*"FourthItemNodeName"*/, v45);
    sub_1BC3008(&StringLiteral_6599/*"Feed09NodeName"*/, v46);
    sub_1BC3008(&StringLiteral_6607/*"Feed17NodeName"*/, v47);
    byte_4B05A8F = 1;
  }
  classCardId = 0;
  p_fsm = &this->fields.fsm;
  fsm = (__int64)this->fields.fsm;
  if ( !fsm )
    goto LABEL_250;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)fsm, 0LL);
  if ( !fsm )
    goto LABEL_250;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmGameObject(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_4533/*"CombineEffect"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_250;
  Value = HutongGames_PlayMaker_FsmGameObject__get_Value((HutongGames_PlayMaker_FsmGameObject_o *)fsm, 0LL);
  this->fields.effect = Value;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.effect, (int32_t)Value, v51, v52);
  fsm = (__int64)this->fields.fsm;
  if ( !fsm )
    goto LABEL_250;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)fsm, 0LL);
  if ( !fsm )
    goto LABEL_250;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmFloat(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_4300/*"CardScale"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_250;
  v53 = HutongGames_PlayMaker_FsmFloat__get_Value((HutongGames_PlayMaker_FsmFloat_o *)fsm, 0LL);
  fsm = (__int64)*p_fsm;
  if ( !*p_fsm )
    goto LABEL_250;
  v54 = v53;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)fsm, 0LL);
  if ( !fsm )
    goto LABEL_250;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_3035/*"BaseCardNodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_250;
  fsm = (__int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_250;
  v55 = (System_String_o *)fsm;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_250;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_6829/*"FstFeedNodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_250;
  fsm = (__int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_250;
  v56 = (Il2CppObject *)fsm;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_250;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_12499/*"ScndFeedNodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_250;
  fsm = (__int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_250;
  v57 = (Il2CppObject *)fsm;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_250;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_14318/*"ThrdFeedNodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_250;
  fsm = (__int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_250;
  v58 = (Il2CppObject *)fsm;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_250;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_6792/*"FourthFeedNodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_250;
  fsm = (__int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_250;
  v59 = (Il2CppObject *)fsm;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_250;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_6650/*"FifthFeedNodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_250;
  fsm = (__int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_250;
  v60 = (Il2CppObject *)fsm;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_250;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_6596/*"Feed06NodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_250;
  fsm = (__int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_250;
  v61 = (Il2CppObject *)fsm;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_250;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_6597/*"Feed07NodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_250;
  fsm = (__int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_250;
  v62 = (Il2CppObject *)fsm;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_250;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_6598/*"Feed08NodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_250;
  fsm = (__int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_250;
  v63 = (Il2CppObject *)fsm;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_250;
  item = v60;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_6599/*"Feed09NodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_250;
  fsm = (__int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_250;
  v64 = (Il2CppObject *)fsm;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_250;
  v299 = v61;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_6600/*"Feed10NodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_250;
  fsm = (__int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_250;
  v65 = (Il2CppObject *)fsm;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_250;
  v298 = v62;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_6601/*"Feed11NodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_250;
  fsm = (__int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_250;
  v66 = (Il2CppObject *)fsm;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_250;
  v297 = v63;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_6602/*"Feed12NodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_250;
  fsm = (__int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_250;
  v67 = (Il2CppObject *)fsm;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_250;
  v296 = v64;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_6603/*"Feed13NodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_250;
  fsm = (__int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_250;
  v68 = (Il2CppObject *)fsm;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_250;
  v295 = v65;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_6604/*"Feed14NodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_250;
  fsm = (__int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_250;
  v69 = (Il2CppObject *)fsm;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_250;
  v294 = v66;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_6605/*"Feed15NodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_250;
  fsm = (__int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_250;
  v70 = (Il2CppObject *)fsm;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_250;
  v293 = v67;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_6606/*"Feed16NodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_250;
  fsm = (__int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_250;
  v71 = (Il2CppObject *)fsm;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_250;
  v292 = v68;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_6607/*"Feed17NodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_250;
  fsm = (__int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_250;
  v72 = (Il2CppObject *)fsm;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_250;
  v291 = v69;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_6608/*"Feed18NodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_250;
  fsm = (__int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_250;
  v73 = (Il2CppObject *)fsm;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_250;
  v290 = v70;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_6609/*"Feed19NodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_250;
  fsm = (__int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_250;
  v74 = (Il2CppObject *)fsm;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_250;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_6610/*"Feed20NodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_250;
  v289 = v71;
  v287 = v74;
  v288 = v73;
  nodename = v55;
  v286 = (Il2CppObject *)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  v75 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v75,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v75 )
    goto LABEL_250;
  v78 = Method_System_Collections_Generic_List_string__Add__;
  p_version = &v75->fields._version;
  ++v75->fields._version;
  p_fields = &v75->fields;
  items = v75->fields._items;
  p_size = &v75->fields._size;
  size = v75->fields._size;
  if ( !items )
    goto LABEL_250;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v75,
      v56,
      *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v78[4] + 192LL) + 112LL));
  }
  else
  {
    v84 = &items->obj.klass + size;
    *p_size = size + 1;
    v84[4] = (Il2CppClass *)v56;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v84 + 4), (int32_t)v56, v76, v77);
  }
  v87 = Method_System_Collections_Generic_List_string__Add__;
  ++*p_version;
  v88 = p_fields->_items;
  if ( !p_fields->_items )
    goto LABEL_250;
  v89 = *p_size;
  if ( (unsigned int)v89 >= v88->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v75,
      v57,
      *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v87[4] + 192LL) + 112LL));
  }
  else
  {
    v90 = (__int64)v88 + 8 * v89;
    *p_size = v89 + 1;
    *(_QWORD *)(v90 + 32) = v57;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v90 + 32), (int32_t)v57, v85, v86);
  }
  v93 = Method_System_Collections_Generic_List_string__Add__;
  ++*p_version;
  v94 = p_fields->_items;
  if ( !p_fields->_items )
    goto LABEL_250;
  v95 = *p_size;
  if ( (unsigned int)v95 >= v94->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v75,
      v58,
      *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v93[4] + 192LL) + 112LL));
  }
  else
  {
    v96 = (__int64)v94 + 8 * v95;
    *p_size = v95 + 1;
    *(_QWORD *)(v96 + 32) = v58;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v96 + 32), (int32_t)v58, v91, v92);
  }
  v99 = Method_System_Collections_Generic_List_string__Add__;
  ++*p_version;
  v100 = p_fields->_items;
  if ( !p_fields->_items )
    goto LABEL_250;
  v101 = *p_size;
  if ( (unsigned int)v101 >= v100->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v75,
      v59,
      *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v99[4] + 192LL) + 112LL));
  }
  else
  {
    v102 = (__int64)v100 + 8 * v101;
    *p_size = v101 + 1;
    *(_QWORD *)(v102 + 32) = v59;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v102 + 32), (int32_t)v59, v97, v98);
  }
  v105 = Method_System_Collections_Generic_List_string__Add__;
  ++*p_version;
  v106 = p_fields->_items;
  if ( !p_fields->_items )
    goto LABEL_250;
  v107 = *p_size;
  if ( (unsigned int)v107 >= v106->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v75,
      item,
      *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v105[4] + 192LL) + 112LL));
  }
  else
  {
    v108 = (__int64)v106 + 8 * v107;
    *p_size = v107 + 1;
    *(_QWORD *)(v108 + 32) = item;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v108 + 32), (int32_t)item, v103, v104);
  }
  v111 = Method_System_Collections_Generic_List_string__Add__;
  ++*p_version;
  v112 = p_fields->_items;
  if ( !p_fields->_items )
    goto LABEL_250;
  v113 = *p_size;
  if ( (unsigned int)v113 >= v112->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v75,
      v299,
      *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v111[4] + 192LL) + 112LL));
  }
  else
  {
    v114 = (__int64)v112 + 8 * v113;
    *p_size = v113 + 1;
    *(_QWORD *)(v114 + 32) = v299;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v114 + 32), (int32_t)v299, v109, v110);
  }
  v117 = Method_System_Collections_Generic_List_string__Add__;
  ++*p_version;
  v118 = p_fields->_items;
  if ( !p_fields->_items )
    goto LABEL_250;
  v119 = *p_size;
  if ( (unsigned int)v119 >= v118->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v75,
      v298,
      *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v117[4] + 192LL) + 112LL));
  }
  else
  {
    v120 = (__int64)v118 + 8 * v119;
    *p_size = v119 + 1;
    *(_QWORD *)(v120 + 32) = v298;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v120 + 32), (int32_t)v298, v115, v116);
  }
  v123 = Method_System_Collections_Generic_List_string__Add__;
  ++*p_version;
  v124 = p_fields->_items;
  if ( !p_fields->_items )
    goto LABEL_250;
  v125 = *p_size;
  if ( (unsigned int)v125 >= v124->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v75,
      v297,
      *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v123[4] + 192LL) + 112LL));
  }
  else
  {
    v126 = (__int64)v124 + 8 * v125;
    *p_size = v125 + 1;
    *(_QWORD *)(v126 + 32) = v297;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v126 + 32), (int32_t)v297, v121, v122);
  }
  v129 = Method_System_Collections_Generic_List_string__Add__;
  ++*p_version;
  v130 = p_fields->_items;
  if ( !p_fields->_items )
    goto LABEL_250;
  v131 = *p_size;
  if ( (unsigned int)v131 >= v130->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v75,
      v296,
      *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v129[4] + 192LL) + 112LL));
  }
  else
  {
    v132 = (__int64)v130 + 8 * v131;
    *p_size = v131 + 1;
    *(_QWORD *)(v132 + 32) = v296;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v132 + 32), (int32_t)v296, v127, v128);
  }
  v135 = Method_System_Collections_Generic_List_string__Add__;
  ++*p_version;
  v136 = p_fields->_items;
  if ( !p_fields->_items )
    goto LABEL_250;
  v137 = *p_size;
  if ( (unsigned int)v137 >= v136->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v75,
      v295,
      *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v135[4] + 192LL) + 112LL));
  }
  else
  {
    v138 = (__int64)v136 + 8 * v137;
    *p_size = v137 + 1;
    *(_QWORD *)(v138 + 32) = v295;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v138 + 32), (int32_t)v295, v133, v134);
  }
  v141 = Method_System_Collections_Generic_List_string__Add__;
  ++*p_version;
  v142 = p_fields->_items;
  if ( !p_fields->_items )
    goto LABEL_250;
  v143 = *p_size;
  if ( (unsigned int)v143 >= v142->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v75,
      v294,
      *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v141[4] + 192LL) + 112LL));
  }
  else
  {
    v144 = (__int64)v142 + 8 * v143;
    *p_size = v143 + 1;
    *(_QWORD *)(v144 + 32) = v294;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v144 + 32), (int32_t)v294, v139, v140);
  }
  v147 = Method_System_Collections_Generic_List_string__Add__;
  ++*p_version;
  v148 = p_fields->_items;
  if ( !p_fields->_items )
    goto LABEL_250;
  v149 = *p_size;
  if ( (unsigned int)v149 >= v148->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v75,
      v293,
      *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v147[4] + 192LL) + 112LL));
  }
  else
  {
    v150 = (__int64)v148 + 8 * v149;
    *p_size = v149 + 1;
    *(_QWORD *)(v150 + 32) = v293;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v150 + 32), (int32_t)v293, v145, v146);
  }
  v153 = Method_System_Collections_Generic_List_string__Add__;
  ++*p_version;
  v154 = p_fields->_items;
  if ( !p_fields->_items )
    goto LABEL_250;
  v155 = *p_size;
  if ( (unsigned int)v155 >= v154->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v75,
      v292,
      *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v153[4] + 192LL) + 112LL));
  }
  else
  {
    v156 = (__int64)v154 + 8 * v155;
    *p_size = v155 + 1;
    *(_QWORD *)(v156 + 32) = v292;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v156 + 32), (int32_t)v292, v151, v152);
  }
  v159 = Method_System_Collections_Generic_List_string__Add__;
  ++*p_version;
  v160 = p_fields->_items;
  if ( !p_fields->_items )
    goto LABEL_250;
  v161 = *p_size;
  if ( (unsigned int)v161 >= v160->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v75,
      v291,
      *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v159[4] + 192LL) + 112LL));
  }
  else
  {
    v162 = (__int64)v160 + 8 * v161;
    *p_size = v161 + 1;
    *(_QWORD *)(v162 + 32) = v291;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v162 + 32), (int32_t)v291, v157, v158);
  }
  v165 = Method_System_Collections_Generic_List_string__Add__;
  ++*p_version;
  v166 = p_fields->_items;
  if ( !p_fields->_items )
    goto LABEL_250;
  v167 = *p_size;
  if ( (unsigned int)v167 >= v166->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v75,
      v290,
      *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v165[4] + 192LL) + 112LL));
  }
  else
  {
    v168 = (__int64)v166 + 8 * v167;
    *p_size = v167 + 1;
    *(_QWORD *)(v168 + 32) = v290;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v168 + 32), (int32_t)v290, v163, v164);
  }
  v171 = Method_System_Collections_Generic_List_string__Add__;
  ++*p_version;
  v172 = p_fields->_items;
  if ( !p_fields->_items )
    goto LABEL_250;
  v173 = *p_size;
  if ( (unsigned int)v173 >= v172->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v75,
      v289,
      *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v171[4] + 192LL) + 112LL));
  }
  else
  {
    v174 = (__int64)v172 + 8 * v173;
    *p_size = v173 + 1;
    *(_QWORD *)(v174 + 32) = v289;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v174 + 32), (int32_t)v289, v169, v170);
  }
  v177 = Method_System_Collections_Generic_List_string__Add__;
  ++*p_version;
  v178 = p_fields->_items;
  if ( !p_fields->_items )
    goto LABEL_250;
  v179 = *p_size;
  if ( (unsigned int)v179 >= v178->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v75,
      v72,
      *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v177[4] + 192LL) + 112LL));
  }
  else
  {
    v180 = (__int64)v178 + 8 * v179;
    *p_size = v179 + 1;
    *(_QWORD *)(v180 + 32) = v72;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v180 + 32), (int32_t)v72, v175, v176);
  }
  v183 = Method_System_Collections_Generic_List_string__Add__;
  ++*p_version;
  v184 = p_fields->_items;
  if ( !p_fields->_items )
    goto LABEL_250;
  v185 = *p_size;
  if ( (unsigned int)v185 >= v184->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v75,
      v288,
      *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v183[4] + 192LL) + 112LL));
  }
  else
  {
    v186 = (__int64)v184 + 8 * v185;
    *p_size = v185 + 1;
    *(_QWORD *)(v186 + 32) = v288;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v186 + 32), (int32_t)v288, v181, v182);
  }
  v189 = Method_System_Collections_Generic_List_string__Add__;
  ++*p_version;
  v190 = p_fields->_items;
  if ( !p_fields->_items )
    goto LABEL_250;
  v191 = *p_size;
  if ( (unsigned int)v191 >= v190->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v75,
      v287,
      *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v189[4] + 192LL) + 112LL));
  }
  else
  {
    v192 = (__int64)v190 + 8 * v191;
    *p_size = v191 + 1;
    *(_QWORD *)(v192 + 32) = v287;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v192 + 32), (int32_t)v287, v187, v188);
  }
  v195 = Method_System_Collections_Generic_List_string__Add__;
  ++*p_version;
  v196 = p_fields->_items;
  if ( !p_fields->_items )
    goto LABEL_250;
  v197 = *p_size;
  if ( (unsigned int)v197 >= v196->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v75,
      v286,
      *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v195[4] + 192LL) + 112LL));
  }
  else
  {
    v198 = (__int64)v196 + 8 * v197;
    *p_size = v197 + 1;
    *(_QWORD *)(v198 + 32) = v286;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v198 + 32), (int32_t)v286, v193, v194);
  }
  this->fields.feedNameList = (struct System_Collections_Generic_List_string__o *)v75;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.feedNameList, (int32_t)v75, v199, v200);
  fsm = (__int64)this->fields.fsm;
  if ( !fsm )
    goto LABEL_250;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)fsm, 0LL);
  if ( !fsm )
    goto LABEL_250;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_12770/*"SkillItemNodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_250;
  fsm = (__int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_250;
  v201 = (Il2CppObject *)fsm;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_250;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_12534/*"SecItemNodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_250;
  fsm = (__int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_250;
  v202 = (Il2CppObject *)fsm;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_250;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_14319/*"ThrdItemNodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_250;
  fsm = (__int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_250;
  v203 = (Il2CppObject *)fsm;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_250;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_6793/*"FourthItemNodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_250;
  fsm = (__int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_250;
  v204 = (Il2CppObject *)fsm;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_250;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_6651/*"FifthItemNodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_250;
  v205 = (Il2CppObject *)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  v206 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v206,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v206 )
    goto LABEL_250;
  v209 = v206->fields._items;
  v210 = Method_System_Collections_Generic_List_string__Add__;
  ++v206->fields._version;
  if ( !v209 )
    goto LABEL_250;
  v211 = v206->fields._size;
  if ( (unsigned int)v211 >= v209->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v206,
      v201,
      *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v210[4] + 192LL) + 112LL));
  }
  else
  {
    v212 = &v209->obj.klass + v211;
    v206->fields._size = v211 + 1;
    v212[4] = (Il2CppClass *)v201;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v212 + 4), (int32_t)v201, v207, v208);
  }
  v215 = v206->fields._items;
  v216 = Method_System_Collections_Generic_List_string__Add__;
  ++v206->fields._version;
  if ( !v215 )
    goto LABEL_250;
  v217 = v206->fields._size;
  if ( (unsigned int)v217 >= v215->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v206,
      v202,
      *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v216[4] + 192LL) + 112LL));
  }
  else
  {
    v218 = &v215->obj.klass + v217;
    v206->fields._size = v217 + 1;
    v218[4] = (Il2CppClass *)v202;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v218 + 4), (int32_t)v202, v213, v214);
  }
  v221 = v206->fields._items;
  v222 = Method_System_Collections_Generic_List_string__Add__;
  ++v206->fields._version;
  if ( !v221 )
    goto LABEL_250;
  v223 = v206->fields._size;
  if ( (unsigned int)v223 >= v221->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v206,
      v203,
      *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v222[4] + 192LL) + 112LL));
  }
  else
  {
    v224 = &v221->obj.klass + v223;
    v206->fields._size = v223 + 1;
    v224[4] = (Il2CppClass *)v203;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v224 + 4), (int32_t)v203, v219, v220);
  }
  v227 = v206->fields._items;
  v228 = Method_System_Collections_Generic_List_string__Add__;
  ++v206->fields._version;
  if ( !v227 )
    goto LABEL_250;
  v229 = v206->fields._size;
  if ( (unsigned int)v229 >= v227->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v206,
      v204,
      *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v228[4] + 192LL) + 112LL));
  }
  else
  {
    v230 = &v227->obj.klass + v229;
    v206->fields._size = v229 + 1;
    v230[4] = (Il2CppClass *)v204;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v230 + 4), (int32_t)v204, v225, v226);
  }
  v233 = v206->fields._items;
  v234 = Method_System_Collections_Generic_List_string__Add__;
  ++v206->fields._version;
  if ( !v233 )
    goto LABEL_250;
  v235 = v206->fields._size;
  if ( (unsigned int)v235 >= v233->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v206,
      v205,
      *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v234[4] + 192LL) + 112LL));
  }
  else
  {
    v236 = &v233->obj.klass + v235;
    v206->fields._size = v235 + 1;
    v236[4] = (Il2CppClass *)v205;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v236 + 4), (int32_t)v205, v231, v232);
  }
  this->fields.feedItemNameList = (struct System_Collections_Generic_List_string__o *)v206;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.feedItemNameList, (int32_t)v206, v237, v238);
  fsm = (__int64)this->fields.effect;
  if ( !fsm )
    goto LABEL_250;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)fsm, 0LL);
  fsm = (__int64)TransformHelper__getNodeFromName(transform, nodename, 1, 0LL);
  if ( !fsm )
    goto LABEL_250;
  v240 = (UnityEngine_Component_o *)fsm;
  fsm = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)fsm, 0LL);
  if ( !fsm )
    goto LABEL_250;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)fsm, 0, 0LL);
  fsm = (__int64)this->fields.baseSvtEntity;
  if ( !fsm )
    goto LABEL_250;
  CardImageLimitCount = UserServantEntity__getCardImageLimitCount((UserServantEntity_o *)fsm, 0, 0LL);
  fsm = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !fsm )
    goto LABEL_250;
  fsm = (__int64)DataManager__GetMasterData_object_(
                   (DataManager_o *)fsm,
                   (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  baseSvtEntity = this->fields.baseSvtEntity;
  if ( !baseSvtEntity )
    goto LABEL_250;
  v243 = (ServantLimitImageMaster_o *)fsm;
  v245 = *(_QWORD *)&baseSvtEntity->fields.svtId.fields.currentCryptoKey;
  v244 = *(_QWORD *)&baseSvtEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v302.fields.currentCryptoKey = v245;
  *(_QWORD *)&v302.fields.fakeValue = v244;
  fsm = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v302, 0LL);
  if ( !v243 )
    goto LABEL_250;
  fsm = ServantLimitImageMaster__GetServantImageLimitSealAfter(v243, fsm, CardImageLimitCount, 0LL);
  if ( !this->fields.baseSvtEntity )
    goto LABEL_250;
  v246 = fsm;
  OverwriteStatus = UserServantEntity__GetOverwriteStatus(this->fields.baseSvtEntity, 0LL, 0LL);
  if ( this->fields.ignoreOverwriteStatus )
  {
    v248 = 0LL;
    this->fields.ignoreOverwriteStatus = 0;
  }
  else
  {
    v248 = OverwriteStatus;
  }
  gameObject = UnityEngine_Component__get_gameObject(v240, 0LL);
  fsm = (__int64)CharaGraphManager__CreateTexturePrefab_39695836(
                   gameObject,
                   this->fields.baseSvtEntity,
                   v246,
                   10,
                   0LL,
                   0,
                   v248,
                   0,
                   0,
                   0LL);
  if ( !fsm )
    goto LABEL_250;
  v250 = (UnityEngine_Component_o *)fsm;
  fsm = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)fsm, 0LL);
  v251 = (UnityEngine_Transform_o *)fsm;
  if ( !byte_4AFBDB1 )
  {
    fsm = sub_1BC3008(&UnityEngine_Vector3_TypeInfo, method);
    byte_4AFBDB1 = 1;
  }
  if ( !v251 )
    goto LABEL_250;
  UnityEngine_Transform__set_localPosition(v251, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  fsm = (__int64)UnityEngine_Component__get_transform(v250, 0LL);
  if ( !fsm )
    goto LABEL_250;
  v303.fields.x = v54;
  v303.fields.y = v54;
  v303.fields.z = v54;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)fsm, v303, 0LL);
  CombineEffectComponent__getDispInfo(v252, &classCardId, this->fields.baseSvtId, v253);
  fsm = this->fields.kind == 3
      ? ConstantMaster__getValue((System_String_o *)StringLiteral_2655/*"BACKSIDE_SVT_EQUIP_IMAGE_ID"*/, 0LL)
      : (unsigned int)classCardId;
  v254 = this->fields.baseSvtEntity;
  this->fields.baseClassCardId = fsm;
  if ( !v254 )
    goto LABEL_250;
  fsm = UserServantEntity__IsGrandServant(v254, 0LL);
  if ( !this->fields.baseSvtEntity )
    goto LABEL_250;
  if ( (fsm & 1) == 0 )
  {
    if ( UserServantEntity__isExceeded(this->fields.baseSvtEntity, 0LL) )
    {
      fsm = (__int64)this->fields.baseSvtEntity;
      if ( fsm )
      {
        FrameCardPrefix = UserServantEntity__getFrameCardPrefix((UserServantEntity_o *)fsm, 0LL);
        fsm = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
        if ( fsm )
        {
          ExceedFrameCardPath = DesignCardManager__GetExceedFrameCardPath(
                                  (DesignCardManager_o *)fsm,
                                  this->fields.baseClassCardId,
                                  FrameCardPrefix,
                                  0LL);
          goto LABEL_222;
        }
      }
    }
    else
    {
      fsm = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
      if ( this->fields.baseSvtEntity )
      {
        baseClassCardId = this->fields.baseClassCardId;
        v260 = (DesignCardManager_o *)fsm;
        fsm = UserServantEntity__GetRarity(this->fields.baseSvtEntity, 1, 0LL);
        if ( v260 )
        {
          ExceedFrameCardPath = DesignCardManager__GetDesignCardPath(v260, baseClassCardId, fsm, 0LL);
          goto LABEL_222;
        }
      }
    }
LABEL_250:
    sub_1BC3264(fsm, method);
  }
  this->fields.baseClassCardId = UserServantEntity__getSvtClassId(this->fields.baseSvtEntity, 0, 1, 0LL);
  fsm = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  if ( !fsm )
    goto LABEL_250;
  ExceedFrameCardPath = DesignCardManager__GetGrandDesignCardPath(
                          (DesignCardManager_o *)fsm,
                          this->fields.baseClassCardId,
                          0LL);
LABEL_222:
  v261 = (Il2CppObject *)ExceedFrameCardPath;
  fsm = (__int64)this->fields.releaseAssetPath;
  if ( !fsm )
    goto LABEL_250;
  v262 = *(_QWORD *)(fsm + 16);
  v263 = Method_System_Collections_Generic_List_string__Add__;
  ++*(_DWORD *)(fsm + 28);
  if ( !v262 )
    goto LABEL_250;
  v264 = *(int *)(fsm + 24);
  if ( (unsigned int)v264 >= *(_DWORD *)(v262 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)fsm,
      v261,
      *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v263[4] + 192LL) + 112LL));
  }
  else
  {
    v265 = v262 + 8 * v264;
    *(_DWORD *)(fsm + 24) = v264 + 1;
    *(_QWORD *)(v265 + 32) = v261;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v265 + 32), (int32_t)v261, v256, v257);
  }
  v266 = (AssetLoader_LoadEndDataHandler_o *)sub_1BC3254(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v266,
    (Il2CppObject *)this,
    Method_CombineEffectComponent_setReverseCallback__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  fsm = AssetManager__loadAssetStorage((System_String_o *)v261, v266, 1, 0LL);
  switch ( this->fields.kind )
  {
    case 0:
    case 3:
      materialList = this->fields.materialList;
      if ( !materialList )
        goto LABEL_250;
      v269 = materialList->fields._size;
      startAniName = this->fields.startAniName;
      this->fields.materialCnt = v269;
      if ( !startAniName )
        goto LABEL_250;
      v271 = v269 - 1;
      if ( v271 >= startAniName->max_length )
        goto LABEL_251;
      fsm = (__int64)*p_fsm;
      if ( !*p_fsm )
        goto LABEL_250;
      v272 = startAniName->m_Items[v271];
      fsm = (__int64)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)fsm, 0LL);
      if ( !fsm )
        goto LABEL_250;
      fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                       (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                       (System_String_o *)StringLiteral_12918/*"StartAnimationName"*/,
                       0LL);
      if ( !fsm )
        goto LABEL_250;
      *(_QWORD *)(fsm + 56) = v272;
      sub_1BC2FAC((CGThumbnailListItem_o *)(fsm + 56), (int32_t)v272, v273, v274);
      CombineEffectComponent__setServantFeed(this, v275);
      break;
    case 1:
      itemEntityList = this->fields.itemEntityList;
      if ( itemEntityList )
      {
        v277 = itemEntityList->fields._size;
        if ( v277 > 0 )
          goto LABEL_241;
      }
      itemList = this->fields.itemList;
      if ( !itemList )
        goto LABEL_250;
      v277 = itemList->fields._size;
LABEL_241:
      itemAniName = this->fields.itemAniName;
      this->fields.itemMaterialCnt = v277;
      if ( !itemAniName )
        goto LABEL_250;
      v280 = v277 - 1;
      if ( v280 >= itemAniName->max_length )
LABEL_251:
        sub_1BC326C(fsm, method, v267);
      fsm = (__int64)*p_fsm;
      if ( !*p_fsm )
        goto LABEL_250;
      v281 = (__int64)itemAniName->m_Items[v280];
LABEL_247:
      fsm = (__int64)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)fsm, 0LL);
      if ( !fsm )
        goto LABEL_250;
      fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                       (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                       (System_String_o *)StringLiteral_12918/*"StartAnimationName"*/,
                       0LL);
      if ( !fsm )
        goto LABEL_250;
      *(_QWORD *)(fsm + 56) = v281;
      sub_1BC2FAC((CGThumbnailListItem_o *)(fsm + 56), v281, v282, v283);
      CombineEffectComponent__setItemFeed(this, v284);
      break;
    case 2:
      fsm = (__int64)*p_fsm;
      if ( !*p_fsm )
        goto LABEL_250;
      v281 = StringLiteral_17986/*"combine_fodder02"*/;
      goto LABEL_247;
    default:
      return;
  }
}


void __fastcall CombineEffectComponent__SetDvcCombineInfo(
        CombineEffectComponent_o *this,
        UserServantEntity_o *baseSvtData,
        System_Collections_Generic_List_int__o *list,
        const MethodInfo *method)
{
  __int64 v7; // x0
  __int64 v8; // x1
  __int64 v9; // x22
  __int64 v10; // x23
  int32_t v11; // w0
  struct System_Collections_Generic_List_int__o **p_itemList; // x20
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4B05A8B & 1) == 0 )
  {
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, baseSvtData);
    byte_4B05A8B = 1;
  }
  this->fields.baseSvtEntity = baseSvtData;
  this->fields.kind = 2;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.baseSvtEntity, (int32_t)baseSvtData, (int32_t)list, method);
  if ( !baseSvtData )
    sub_1BC3264(v7, v8);
  v10 = *(_QWORD *)&baseSvtData->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&baseSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v10;
  *(_QWORD *)&v15.fields.fakeValue = v9;
  this->fields.baseSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v15, 0LL);
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(baseSvtData->fields.limitCount, 0LL);
  this->fields.itemList = list;
  p_itemList = &this->fields.itemList;
  *((_DWORD *)p_itemList - 3) = v11;
  sub_1BC2FAC((CGThumbnailListItem_o *)p_itemList, (int32_t)list, v13, v14);
}


void __fastcall CombineEffectComponent__SetFeedCallback(
        CombineEffectComponent_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UnityEngine_GameObject_o *effect; // x0
  UnityEngine_Transform_o *v12; // x21
  Il2CppObject *Item; // x0
  UnityEngine_Transform_o *NodeFromName; // x21
  Il2CppObject *Component_object; // x0
  System_String_o **v16; // x8
  Il2CppObject *v17; // x20
  UnityEngine_Shader_o *v18; // x22
  UnityEngine_Material_o *v19; // x21
  UnityEngine_Texture_o *v20; // x22
  int32_t v21; // w8
  int v22; // w9

  if ( (byte_4B05A92 & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_Component_GetComponent_UITexture___, data);
    sub_1BC3008(&Method_System_Collections_Generic_List_string__get_Item__, v5);
    sub_1BC3008(&UnityEngine_Material_TypeInfo, v6);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__, v7);
    sub_1BC3008(&StringLiteral_14999/*"Unlit/Transparent Colored"*/, v8);
    sub_1BC3008(&StringLiteral_12195/*"START_ANIMATION"*/, v9);
    sub_1BC3008(&StringLiteral_4875/*"Custom/Sprite-MasterFigure (SoftClip)"*/, v10);
    byte_4B05A92 = 1;
  }
  effect = this->fields.effect;
  if ( !effect )
    goto LABEL_16;
  effect = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(effect, 0LL);
  if ( !this->fields.feedNameList )
    goto LABEL_16;
  v12 = (UnityEngine_Transform_o *)effect;
  Item = System_Collections_Generic_List_object___get_Item(
           (System_Collections_Generic_List_object__o *)this->fields.feedNameList,
           this->fields.cntIndex,
           (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_string__get_Item__);
  NodeFromName = TransformHelper__getNodeFromName(v12, (System_String_o *)Item, 1, 0LL);
  effect = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  if ( !effect )
    goto LABEL_16;
  DesignCardManager__SetupCardImage(
    (DesignCardManager_o *)effect,
    data,
    NodeFromName,
    this->fields.feedClassCardId,
    0LL);
  if ( !NodeFromName )
    goto LABEL_16;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)NodeFromName,
                       (const MethodInfo_2FF8634 *)Method_UnityEngine_Component_GetComponent_UITexture___);
  v16 = (System_String_o **)(this->fields.cardType == 6 ? &StringLiteral_4875/*"Custom/Sprite-MasterFigure (SoftClip)"*/ : &StringLiteral_14999/*"Unlit/Transparent Colored"*/);
  v17 = Component_object;
  v18 = UnityEngine_Shader__Find(*v16, 0LL);
  v19 = (UnityEngine_Material_o *)sub_1BC3254(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v19, v18, 0LL);
  if ( !v17 )
    goto LABEL_16;
  v20 = (UnityEngine_Texture_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v17->klass->vtable[26].method)(
                                   v17,
                                   v17->klass->vtable[27].methodPtr);
  effect = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(Il2CppObject *, UnityEngine_Material_o *, Il2CppMethodPointer))v17->klass->vtable[25].method)(
                                         v17,
                                         v19,
                                         v17->klass->vtable[26].methodPtr);
  if ( !v19 )
    goto LABEL_16;
  UnityEngine_Material__set_mainTexture(v19, v20, 0LL);
  v21 = this->fields.cntIndex + 1;
  v22 = this->fields.materialCnt - 1;
  this->fields.cntIndex = v21;
  if ( v21 > v22 )
  {
    effect = (UnityEngine_GameObject_o *)this->fields.fsm;
    this->fields.cntIndex = 0;
    if ( effect )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)effect, (System_String_o *)StringLiteral_12195/*"START_ANIMATION"*/, 0LL);
      return;
    }
LABEL_16:
    sub_1BC3264(effect, data);
  }
  CombineEffectComponent__setServantFeed(this, (const MethodInfo *)data);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineEffectComponent__SetServantCombineInfo(
        CombineEffectComponent_o *this,
        UserServantEntity_o *baseSvtData,
        System_Collections_Generic_List_UserServantEntity__o *list,
        int32_t combineKind,
        const MethodInfo *method)
{
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x22
  __int64 v12; // x23
  int32_t v13; // w0
  struct System_Collections_Generic_List_UserServantEntity__o **p_materialList; // x20
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_4B05A88 & 1) == 0 )
  {
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, baseSvtData);
    byte_4B05A88 = 1;
  }
  this->fields.baseSvtEntity = baseSvtData;
  this->fields.kind = combineKind;
  sub_1BC2FAC(
    (CGThumbnailListItem_o *)&this->fields.baseSvtEntity,
    (int32_t)baseSvtData,
    (int32_t)list,
    *(const MethodInfo **)&combineKind);
  if ( !baseSvtData )
    sub_1BC3264(v9, v10);
  v12 = *(_QWORD *)&baseSvtData->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&baseSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v17.fields.currentCryptoKey = v12;
  *(_QWORD *)&v17.fields.fakeValue = v11;
  this->fields.baseSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v17, 0LL);
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(baseSvtData->fields.limitCount, 0LL);
  this->fields.materialList = list;
  p_materialList = &this->fields.materialList;
  *((_DWORD *)p_materialList - 1) = v13;
  sub_1BC2FAC((CGThumbnailListItem_o *)p_materialList, (int32_t)list, v15, v16);
}


void __fastcall CombineEffectComponent__SetSkillCombineInfo(
        CombineEffectComponent_o *this,
        UserServantEntity_o *baseSvtData,
        System_Collections_Generic_List_ItemEntity__o *list,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x0
  __int64 v9; // x1
  __int64 v10; // x22
  __int64 v11; // x23
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct System_Collections_Generic_List_int__o *itemList; // x8
  int v15; // w9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_4B05A89 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_int__Clear__, baseSvtData);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_4B05A89 = 1;
  }
  this->fields.baseSvtEntity = baseSvtData;
  this->fields.kind = 1;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.baseSvtEntity, (int32_t)baseSvtData, (int32_t)list, method);
  if ( !baseSvtData )
    goto LABEL_8;
  v11 = *(_QWORD *)&baseSvtData->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&baseSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v16.fields.currentCryptoKey = v11;
  *(_QWORD *)&v16.fields.fakeValue = v10;
  this->fields.baseSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v16, 0LL);
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(baseSvtData->fields.limitCount, 0LL);
  itemList = this->fields.itemList;
  this->fields.baseSvtlimitCnt = v8;
  if ( !itemList )
LABEL_8:
    sub_1BC3264(v8, v9);
  v15 = itemList->fields._version + 1;
  itemList->fields._size = 0;
  itemList->fields._version = v15;
  this->fields.itemEntityList = list;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.itemEntityList, (int32_t)list, v12, v13);
}


void __fastcall CombineEffectComponent__SetSkillCombineInfoAndIgnoreOverwriteStatus(
        CombineEffectComponent_o *this,
        UserServantEntity_o *baseSvtData,
        System_Collections_Generic_List_int__o *list,
        const MethodInfo *method)
{
  CombineEffectComponent__SetSkillCombineInfo_46936028(this, baseSvtData, list, method);
  this->fields.ignoreOverwriteStatus = 1;
}


void __fastcall CombineEffectComponent__SetSkillCombineInfo_46936028(
        CombineEffectComponent_o *this,
        UserServantEntity_o *baseSvtData,
        System_Collections_Generic_List_int__o *list,
        const MethodInfo *method)
{
  __int64 v7; // x0
  __int64 v8; // x1
  __int64 v9; // x22
  __int64 v10; // x23
  int32_t v11; // w0
  struct System_Collections_Generic_List_int__o **p_itemList; // x20
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4B05A8A & 1) == 0 )
  {
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, baseSvtData);
    byte_4B05A8A = 1;
  }
  this->fields.baseSvtEntity = baseSvtData;
  this->fields.kind = 1;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.baseSvtEntity, (int32_t)baseSvtData, (int32_t)list, method);
  if ( !baseSvtData )
    sub_1BC3264(v7, v8);
  v10 = *(_QWORD *)&baseSvtData->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&baseSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v10;
  *(_QWORD *)&v15.fields.fakeValue = v9;
  this->fields.baseSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v15, 0LL);
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(baseSvtData->fields.limitCount, 0LL);
  this->fields.itemList = list;
  p_itemList = &this->fields.itemList;
  *((_DWORD *)p_itemList - 3) = v11;
  sub_1BC2FAC((CGThumbnailListItem_o *)p_itemList, (int32_t)list, v13, v14);
}


void __fastcall CombineEffectComponent__Start(CombineEffectComponent_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall CombineEffectComponent___endAnimation_b__44_0(CombineEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct UnityEngine_GameObject_o **p_effect; // x20
  UnityEngine_Object_o *effect; // x21
  __int64 v6; // x1
  UnityEngine_Object_o *v7; // x21
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4B05A9A & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    sub_1BC3008(&StringLiteral_5394/*"END_FADE"*/, v3);
    byte_4B05A9A = 1;
  }
  p_effect = &this->fields.effect;
  effect = (UnityEngine_Object_o *)this->fields.effect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(effect, 0LL, 0LL) )
  {
    v7 = (UnityEngine_Object_o *)*p_effect;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__DestroyImmediate_70034488(v7, 0LL);
    *p_effect = 0LL;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.effect, 0, v8, v9);
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1BC3264(0LL, v6);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5394/*"END_FADE"*/, 0LL);
}


void __fastcall CombineEffectComponent___fadeIn_b__36_0(CombineEffectComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4B05A99 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_5394/*"END_FADE"*/, method);
    byte_4B05A99 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1BC3264(0LL, method);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5394/*"END_FADE"*/, 0LL);
}


void __fastcall CombineEffectComponent__endAnimation(CombineEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v7; // x8
  CommonUI_o *v8; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1

  if ( (byte_4B05A96 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    sub_1BC3008(&AvalonSceneManager_TypeInfo, v3);
    sub_1BC3008(&Method_CombineEffectComponent__endAnimation_b__44_0__, v4);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4B05A96 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = AvalonSceneManager_TypeInfo;
  v8 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v7 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v7->static_fields->DEFAULT_FADE_TIME;
  v10 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_CombineEffectComponent__endAnimation_b__44_0__, 0LL);
  if ( !v8 )
    sub_1BC3264(v11, v12);
  CommonUI__maskFadeout(v8, 1, DEFAULT_FADE_TIME, v10, 0LL);
}


void __fastcall CombineEffectComponent__fadeIn(CombineEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v7; // x8
  CommonUI_o *v8; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1

  if ( (byte_4B05A8E & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    sub_1BC3008(&AvalonSceneManager_TypeInfo, v3);
    sub_1BC3008(&Method_CombineEffectComponent__fadeIn_b__36_0__, v4);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4B05A8E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = AvalonSceneManager_TypeInfo;
  v8 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v7 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v7->static_fields->DEFAULT_FADE_TIME;
  v10 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_CombineEffectComponent__fadeIn_b__36_0__, 0LL);
  if ( !v8 )
    sub_1BC3264(v11, v12);
  CommonUI__maskFadein(v8, DEFAULT_FADE_TIME, v10, 0LL);
}


void __fastcall CombineEffectComponent__getCardBackImg(
        CombineEffectComponent_o *this,
        int32_t *backCardImgId,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  int32_t klass_high; // w8
  System_String_o **v14; // x8

  if ( (byte_4B05A95 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantMaster___, backCardImgId);
    sub_1BC3008(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1BC3008(&StringLiteral_2655/*"BACKSIDE_SVT_EQUIP_IMAGE_ID"*/, v9);
    sub_1BC3008(&StringLiteral_2656/*"BACKSIDE_SVT_IMAGE_ID"*/, v10);
    byte_4B05A95 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantMaster___)) == 0LL
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     svtId,
                     (const MethodInfo_32AF070 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
    sub_1BC3264(Instance, v12);
  }
  klass_high = HIDWORD(Instance[5].klass);
  this->fields.cardType = klass_high;
  if ( klass_high == 6 )
    v14 = (System_String_o **)&StringLiteral_2655/*"BACKSIDE_SVT_EQUIP_IMAGE_ID"*/;
  else
    v14 = (System_String_o **)&StringLiteral_2656/*"BACKSIDE_SVT_IMAGE_ID"*/;
  *backCardImgId = ConstantMaster__getValue(*v14, 0LL);
}


void __fastcall CombineEffectComponent__getDispInfo(
        CombineEffectComponent_o *this,
        int32_t *classCardId,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  ServantEntity_o *Entity; // x20
  Il2CppObject *v13; // x21

  if ( (byte_4B05A94 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantClassMaster___, classCardId);
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantMaster___, v6);
    sub_1BC3008(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    sub_1BC3008(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v8);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4B05A94 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_12;
  Entity = (ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                svtId,
                                (const MethodInfo_32AF070 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Entity || !Instance )
    goto LABEL_12;
  v13 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          Entity->fields.classId,
          (const MethodInfo_32AF070 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  Instance = (Il2CppObject *)ServantEntity__GetOverwriteClassImageId(Entity, 0LL);
  if ( !(_DWORD)Instance )
  {
    if ( v13 )
    {
      LODWORD(Instance) = v13[2].monitor;
      goto LABEL_11;
    }
LABEL_12:
    sub_1BC3264(Instance, v11);
  }
LABEL_11:
  *classCardId = (int)Instance;
}


void __fastcall CombineEffectComponent__setItemFeed(CombineEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *itemEntityList; // x0
  int32_t v11; // w20
  struct UnityEngine_Transform_o **p_itemNode; // x21
  ItemEntity_o *v13; // x22
  UnityEngine_Transform_o *v14; // x23
  Il2CppObject *Item; // x0
  UnityEngine_Transform_o *NodeFromName; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  UISprite_o *v19; // x23
  int32_t ImageId; // w22
  int32_t v21; // w22
  int32_t v22; // w20
  struct UnityEngine_Transform_o **v23; // x21
  int32_t v24; // w22
  UnityEngine_Transform_o *v25; // x23
  Il2CppObject *v26; // x0
  UnityEngine_Transform_o *v27; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  Il2CppObject *Component_object; // x23

  if ( (byte_4B05A93 & 1) == 0 )
  {
    sub_1BC3008(&AtlasManager_TypeInfo, method);
    sub_1BC3008(&Method_UnityEngine_Component_GetComponent_UISprite___, v3);
    sub_1BC3008(&Method_System_Collections_Generic_List_ItemEntity__get_Count__, v4);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__get_Count__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_string__get_Item__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_ItemEntity__get_Item__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__get_Item__, v8);
    sub_1BC3008(&StringLiteral_12195/*"START_ANIMATION"*/, v9);
    byte_4B05A93 = 1;
  }
  itemEntityList = (System_Collections_Generic_List_object__o *)this->fields.itemEntityList;
  if ( itemEntityList && itemEntityList->fields._size >= 1 )
  {
    v11 = 0;
    p_itemNode = &this->fields.itemNode;
    while ( 1 )
    {
      itemEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      itemEntityList,
                                                                      v11,
                                                                      (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_ItemEntity__get_Item__);
      if ( !this->fields.effect )
        goto LABEL_30;
      v13 = (ItemEntity_o *)itemEntityList;
      itemEntityList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__get_transform(
                                                                      this->fields.effect,
                                                                      0LL);
      if ( !this->fields.feedItemNameList )
        goto LABEL_30;
      v14 = (UnityEngine_Transform_o *)itemEntityList;
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)this->fields.feedItemNameList,
               v11,
               (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_string__get_Item__);
      NodeFromName = TransformHelper__getNodeFromName(v14, (System_String_o *)Item, 1, 0LL);
      *p_itemNode = NodeFromName;
      sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.itemNode, (int32_t)NodeFromName, v17, v18);
      itemEntityList = (System_Collections_Generic_List_object__o *)*p_itemNode;
      if ( !*p_itemNode )
        goto LABEL_30;
      itemEntityList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__GetComponent_object_(
                                                                      (UnityEngine_Component_o *)itemEntityList,
                                                                      (const MethodInfo_2FF8634 *)Method_UnityEngine_Component_GetComponent_UISprite___);
      if ( !v13 )
        goto LABEL_30;
      v19 = (UISprite_o *)itemEntityList;
      if ( v13->fields.type == 29 )
      {
        ImageId = ItemEntity__GetImageId(v13, 0LL);
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__SetCoin(v19, ImageId, 0LL);
      }
      else
      {
        v21 = v13->fields.imageId;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__SetItem(v19, v21, 0LL);
      }
      itemEntityList = (System_Collections_Generic_List_object__o *)this->fields.itemEntityList;
      if ( !itemEntityList )
        goto LABEL_30;
      if ( ++v11 >= itemEntityList->fields._size )
        goto LABEL_19;
    }
  }
  itemEntityList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemEntityList )
    goto LABEL_30;
  v22 = 0;
  v23 = &this->fields.itemNode;
  while ( v22 < itemEntityList->fields._size )
  {
    itemEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_int___get_Item(
                                                                    (System_Collections_Generic_List_int__o *)itemEntityList,
                                                                    v22,
                                                                    (const MethodInfo_3683B2C *)Method_System_Collections_Generic_List_int__get_Item__);
    if ( this->fields.effect )
    {
      v24 = (int)itemEntityList;
      itemEntityList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__get_transform(
                                                                      this->fields.effect,
                                                                      0LL);
      if ( this->fields.feedItemNameList )
      {
        v25 = (UnityEngine_Transform_o *)itemEntityList;
        v26 = System_Collections_Generic_List_object___get_Item(
                (System_Collections_Generic_List_object__o *)this->fields.feedItemNameList,
                v22,
                (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_string__get_Item__);
        v27 = TransformHelper__getNodeFromName(v25, (System_String_o *)v26, 1, 0LL);
        *v23 = v27;
        sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.itemNode, (int32_t)v27, v28, v29);
        itemEntityList = (System_Collections_Generic_List_object__o *)*v23;
        if ( *v23 )
        {
          Component_object = UnityEngine_Component__GetComponent_object_(
                               (UnityEngine_Component_o *)itemEntityList,
                               (const MethodInfo_2FF8634 *)Method_UnityEngine_Component_GetComponent_UISprite___);
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__SetItem((UISprite_o *)Component_object, v24, 0LL);
          itemEntityList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
          ++v22;
          if ( itemEntityList )
            continue;
        }
      }
    }
    goto LABEL_30;
  }
LABEL_19:
  itemEntityList = (System_Collections_Generic_List_object__o *)this->fields.fsm;
  if ( !itemEntityList )
LABEL_30:
    sub_1BC3264(itemEntityList, method);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)itemEntityList, (System_String_o *)StringLiteral_12195/*"START_ANIMATION"*/, 0LL);
}


void __fastcall CombineEffectComponent__setReverseCallback(
        CombineEffectComponent_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x1
  PlayMakerFSM_o *fsm; // x0
  System_String_o *Value; // x22
  DesignCardManager_o *v8; // x21
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4B05A90 & 1) == 0 )
  {
    sub_1BC3008(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__, data);
    sub_1BC3008(&StringLiteral_11287/*"ReverseCardNodeName"*/, v5);
    byte_4B05A90 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm
    || (fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(fsm, 0LL)) == 0LL
    || (fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                  (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                                  (System_String_o *)StringLiteral_11287/*"ReverseCardNodeName"*/,
                                  0LL)) == 0LL
    || (Value = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL),
        fsm = (PlayMakerFSM_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__),
        !this->fields.effect)
    || (v8 = (DesignCardManager_o *)fsm,
        transform = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL),
        fsm = (PlayMakerFSM_o *)TransformHelper__getNodeFromName(transform, Value, 1, 0LL),
        !v8) )
  {
    sub_1BC3264(fsm, data);
  }
  DesignCardManager__SetupCardImage(v8, data, (UnityEngine_Transform_o *)fsm, this->fields.baseClassCardId, 0LL);
}


void __fastcall CombineEffectComponent__setServantFeed(CombineEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *materialList; // x0
  UserServantEntity_o *v11; // x20
  void *monitor; // x21
  System_Collections_Generic_List_object__c *klass; // x22
  int32_t v14; // w0
  const MethodInfo *v15; // x3
  int32_t v16; // w21
  System_String_o *FrameCardPrefix; // x20
  System_String_o *ExceedFrameCardPath; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  Il2CppObject *Instance; // x22
  Il2CppObject *v22; // x20
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x8
  AssetLoader_LoadEndDataHandler_o *v27; // x21
  int32_t backCardImgId; // [xsp+Ch] [xbp-34h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16

  if ( (byte_4B05A91 & 1) == 0 )
  {
    sub_1BC3008(&AssetManager_TypeInfo, method);
    sub_1BC3008(&Method_CombineEffectComponent_SetFeedCallback__, v3);
    sub_1BC3008(&Method_System_Collections_Generic_List_string__Add__, v4);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__, v5);
    sub_1BC3008(&AssetLoader_LoadEndDataHandler_TypeInfo, v6);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__, v8);
    sub_1BC3008(&StringLiteral_1/*""*/, v9);
    byte_4B05A91 = 1;
  }
  backCardImgId = 0;
  materialList = (System_Collections_Generic_List_object__o *)this->fields.materialList;
  if ( !materialList )
    goto LABEL_20;
  materialList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                materialList,
                                                                this->fields.cntIndex,
                                                                (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
  if ( !materialList )
    goto LABEL_20;
  v11 = (UserServantEntity_o *)materialList;
  klass = materialList[2].klass;
  monitor = materialList[2].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v29.fields.currentCryptoKey = klass;
  *(_QWORD *)&v29.fields.fakeValue = monitor;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v29, 0LL);
  CombineEffectComponent__getCardBackImg(this, &backCardImgId, v14, v15);
  v16 = backCardImgId;
  this->fields.feedClassCardId = backCardImgId;
  if ( UserServantEntity__isExceeded(v11, 0LL) )
  {
    FrameCardPrefix = UserServantEntity__getFrameCardPrefix(v11, 0LL);
    materialList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
    if ( !materialList )
      goto LABEL_20;
    ExceedFrameCardPath = DesignCardManager__GetExceedFrameCardPath(
                            (DesignCardManager_o *)materialList,
                            this->fields.feedClassCardId,
                            FrameCardPrefix,
                            0LL);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
    materialList = (System_Collections_Generic_List_object__o *)UserServantEntity__GetRarity(v11, 1, 0LL);
    if ( !Instance )
      goto LABEL_20;
    ExceedFrameCardPath = DesignCardManager__GetDesignCardPath(
                            (DesignCardManager_o *)Instance,
                            v16,
                            (int32_t)materialList,
                            0LL);
  }
  v22 = (Il2CppObject *)ExceedFrameCardPath;
  materialList = (System_Collections_Generic_List_object__o *)this->fields.releaseAssetPath;
  if ( !materialList
    || (items = materialList->fields._items,
        v24 = Method_System_Collections_Generic_List_string__Add__,
        ++materialList->fields._version,
        !items) )
  {
LABEL_20:
    sub_1BC3264(materialList, method);
  }
  size = materialList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      materialList,
      v22,
      *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
  }
  else
  {
    v26 = &items->obj.klass + size;
    materialList->fields._size = size + 1;
    v26[4] = (Il2CppClass *)v22;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v26 + 4), (int32_t)v22, v19, v20);
  }
  v27 = (AssetLoader_LoadEndDataHandler_o *)sub_1BC3254(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v27, (Il2CppObject *)this, Method_CombineEffectComponent_SetFeedCallback__, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage((System_String_o *)v22, v27, 1, 0LL);
}


void __fastcall CombineEffectComponent___c__DisplayClass35_0___ctor(
        CombineEffectComponent___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CombineEffectComponent___c__DisplayClass35_0___EndLoadBg_b__0(
        CombineEffectComponent___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  AssetData_o *data; // x0
  Il2CppObject *Object_object__50213776; // x20
  UnityEngine_GameObject_o *v9; // x20
  struct CombineEffectComponent_o *_4__this; // x8
  UnityEngine_Transform_o *v11; // x21
  UnityEngine_Transform_o *v12; // x21
  UnityEngine_Transform_o *v13; // x21
  UnityEngine_Transform_o *v14; // x20
  struct CombineEffectComponent_o *v15; // x8

  if ( (byte_4B05A9B & 1) == 0 )
  {
    sub_1BC3008(&Method_AssetData_GetObject_GameObject____76809672, method);
    sub_1BC3008(&Method_UnityEngine_Object_Instantiate_GameObject___, v3);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v4);
    sub_1BC3008(&StringLiteral_5394/*"END_FADE"*/, v5);
    sub_1BC3008(&StringLiteral_16985/*"bg"*/, v6);
    byte_4B05A9B = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_22;
  Object_object__50213776 = AssetData__GetObject_object__50213776(
                              data,
                              (System_String_o *)StringLiteral_16985/*"bg"*/,
                              (const MethodInfo_2FE3390 *)Method_AssetData_GetObject_GameObject____76809672);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  data = (AssetData_o *)UnityEngine_Object__Instantiate_object_(
                          Object_object__50213776,
                          (const MethodInfo_308AE24 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !data )
    goto LABEL_22;
  v9 = (UnityEngine_GameObject_o *)data;
  data = (AssetData_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)data, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_22;
  v11 = (UnityEngine_Transform_o *)data;
  data = (AssetData_o *)_4__this->fields.bgParentObject;
  if ( !data )
    goto LABEL_22;
  data = (AssetData_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)data, 0LL);
  if ( !v11 )
    goto LABEL_22;
  UnityEngine_Transform__set_parent(v11, (UnityEngine_Transform_o *)data, 0LL);
  data = (AssetData_o *)UnityEngine_GameObject__get_transform(v9, 0LL);
  v12 = (UnityEngine_Transform_o *)data;
  if ( !byte_4AFBDB7 )
  {
    data = (AssetData_o *)sub_1BC3008(&UnityEngine_Quaternion_TypeInfo, method);
    byte_4AFBDB7 = 1;
  }
  if ( !v12 )
    goto LABEL_22;
  UnityEngine_Transform__set_localRotation(v12, UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion, 0LL);
  data = (AssetData_o *)UnityEngine_GameObject__get_transform(v9, 0LL);
  v13 = (UnityEngine_Transform_o *)data;
  if ( !byte_4AFBDB1 )
  {
    data = (AssetData_o *)sub_1BC3008(&UnityEngine_Vector3_TypeInfo, method);
    byte_4AFBDB1 = 1;
  }
  if ( !v13 )
    goto LABEL_22;
  UnityEngine_Transform__set_localPosition(v13, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  data = (AssetData_o *)UnityEngine_GameObject__get_transform(v9, 0LL);
  v14 = (UnityEngine_Transform_o *)data;
  if ( !byte_4AFBDB6 )
  {
    data = (AssetData_o *)sub_1BC3008(&UnityEngine_Vector3_TypeInfo, method);
    byte_4AFBDB6 = 1;
  }
  if ( !v14
    || (UnityEngine_Transform__set_localScale(v14, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL),
        (v15 = this->fields.__4__this) == 0LL)
    || (data = (AssetData_o *)v15->fields.fsm) == 0LL )
  {
LABEL_22:
    sub_1BC3264(data, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)data, (System_String_o *)StringLiteral_5394/*"END_FADE"*/, 0LL);
}