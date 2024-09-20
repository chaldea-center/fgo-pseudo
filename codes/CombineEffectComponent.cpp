void __fastcall CombineEffectComponent___ctor(CombineEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  int v7; // w8
  int32_t v8; // w2
  int32_t v9; // w3
  __int64 v10; // x20
  int32_t v11; // w1
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w1
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w1
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v20; // w1
  int32_t v21; // w2
  int32_t v22; // w3
  int32_t v23; // w1
  int32_t v24; // w2
  int32_t v25; // w3
  int32_t v26; // w1
  int32_t v27; // w2
  int32_t v28; // w3
  int32_t v29; // w1
  int32_t v30; // w2
  int32_t v31; // w3
  int32_t v32; // w1
  int32_t v33; // w2
  int32_t v34; // w3
  int32_t v35; // w1
  int32_t v36; // w2
  int32_t v37; // w3
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
  int32_t v66; // w2
  int32_t v67; // w3
  int32_t v68; // w1
  int32_t v69; // w2
  int32_t v70; // w3
  int32_t v71; // w2
  int32_t v72; // w3
  __int64 v73; // x20
  int32_t v74; // w1
  int32_t v75; // w2
  int32_t v76; // w3
  int32_t v77; // w1
  int32_t v78; // w2
  int32_t v79; // w3
  int32_t v80; // w1
  int32_t v81; // w2
  int32_t v82; // w3
  int32_t v83; // w1
  int32_t v84; // w2
  int32_t v85; // w3
  int32_t v86; // w1
  int32_t v87; // w2
  int32_t v88; // w3
  System_Collections_Generic_List_object__o *v89; // x20
  int32_t v90; // w2
  int32_t v91; // w3
  System_Collections_Generic_List_int__o *v92; // x20
  int32_t v93; // w2
  int32_t v94; // w3

  if ( (byte_4A5E73D & 1) == 0 )
  {
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1B885B0(&string___TypeInfo);
    sub_1B885B0(&StringLiteral_18127/*"combine_08"*/);
    sub_1B885B0(&StringLiteral_18128/*"combine_09"*/);
    sub_1B885B0(&StringLiteral_18135/*"combine_16"*/);
    sub_1B885B0(&StringLiteral_18138/*"combine_19"*/);
    sub_1B885B0(&StringLiteral_18139/*"combine_20"*/);
    sub_1B885B0(&StringLiteral_18126/*"combine_07"*/);
    sub_1B885B0(&StringLiteral_18120/*"combine_01"*/);
    sub_1B885B0(&StringLiteral_18121/*"combine_02"*/);
    sub_1B885B0(&StringLiteral_18133/*"combine_14"*/);
    sub_1B885B0(&StringLiteral_18129/*"combine_10"*/);
    sub_1B885B0(&StringLiteral_18141/*"combine_fodder012"*/);
    sub_1B885B0(&StringLiteral_18140/*"combine_fodder01"*/);
    sub_1B885B0(&StringLiteral_18130/*"combine_11"*/);
    sub_1B885B0(&StringLiteral_18131/*"combine_12"*/);
    sub_1B885B0(&StringLiteral_18143/*"combine_fodder014"*/);
    sub_1B885B0(&StringLiteral_18142/*"combine_fodder013"*/);
    sub_1B885B0(&StringLiteral_18124/*"combine_05"*/);
    sub_1B885B0(&StringLiteral_18136/*"combine_17"*/);
    sub_1B885B0(&StringLiteral_18144/*"combine_fodder015"*/);
    sub_1B885B0(&StringLiteral_18134/*"combine_15"*/);
    sub_1B885B0(&StringLiteral_18123/*"combine_04"*/);
    sub_1B885B0(&StringLiteral_18122/*"combine_03"*/);
    sub_1B885B0(&StringLiteral_18125/*"combine_06"*/);
    sub_1B885B0(&StringLiteral_18132/*"combine_13"*/);
    sub_1B885B0(&StringLiteral_18137/*"combine_18"*/);
    byte_4A5E73D = 1;
  }
  v3 = sub_1B88658(int___TypeInfo, 2LL);
  if ( !v3 )
    goto LABEL_35;
  v7 = *(_DWORD *)(v3 + 24);
  v4 = v3;
  if ( !v7 )
    goto LABEL_34;
  *(_DWORD *)(v3 + 32) = 512;
  if ( v7 == 1 )
    goto LABEL_34;
  *(_DWORD *)(v3 + 36) = 875;
  this->fields.cardTextureSize = (struct System_Int32_array *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.cardTextureSize, v3, v5, v6);
  v3 = sub_1B88658(string___TypeInfo, 20LL);
  if ( !v3 )
    goto LABEL_35;
  v10 = v3;
  if ( !*(_DWORD *)(v3 + 24) )
    goto LABEL_34;
  v11 = StringLiteral_18120/*"combine_01"*/;
  *(_QWORD *)(v3 + 32) = StringLiteral_18120/*"combine_01"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 32), v11, v8, v9);
  if ( *(_DWORD *)(v10 + 24) <= 1u )
    goto LABEL_34;
  v14 = StringLiteral_18121/*"combine_02"*/;
  *(_QWORD *)(v10 + 40) = StringLiteral_18121/*"combine_02"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v10 + 40), v14, v12, v13);
  if ( *(_DWORD *)(v10 + 24) <= 2u )
    goto LABEL_34;
  v17 = StringLiteral_18122/*"combine_03"*/;
  *(_QWORD *)(v10 + 48) = StringLiteral_18122/*"combine_03"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v10 + 48), v17, v15, v16);
  if ( *(_DWORD *)(v10 + 24) <= 3u )
    goto LABEL_34;
  v20 = StringLiteral_18123/*"combine_04"*/;
  *(_QWORD *)(v10 + 56) = StringLiteral_18123/*"combine_04"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v10 + 56), v20, v18, v19);
  if ( *(_DWORD *)(v10 + 24) <= 4u )
    goto LABEL_34;
  v23 = StringLiteral_18124/*"combine_05"*/;
  *(_QWORD *)(v10 + 64) = StringLiteral_18124/*"combine_05"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v10 + 64), v23, v21, v22);
  if ( *(_DWORD *)(v10 + 24) <= 5u )
    goto LABEL_34;
  v26 = StringLiteral_18125/*"combine_06"*/;
  *(_QWORD *)(v10 + 72) = StringLiteral_18125/*"combine_06"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v10 + 72), v26, v24, v25);
  if ( *(_DWORD *)(v10 + 24) <= 6u )
    goto LABEL_34;
  v29 = StringLiteral_18126/*"combine_07"*/;
  *(_QWORD *)(v10 + 80) = StringLiteral_18126/*"combine_07"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v10 + 80), v29, v27, v28);
  if ( *(_DWORD *)(v10 + 24) <= 7u )
    goto LABEL_34;
  v32 = StringLiteral_18127/*"combine_08"*/;
  *(_QWORD *)(v10 + 88) = StringLiteral_18127/*"combine_08"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v10 + 88), v32, v30, v31);
  if ( *(_DWORD *)(v10 + 24) <= 8u )
    goto LABEL_34;
  v35 = StringLiteral_18128/*"combine_09"*/;
  *(_QWORD *)(v10 + 96) = StringLiteral_18128/*"combine_09"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v10 + 96), v35, v33, v34);
  if ( *(_DWORD *)(v10 + 24) <= 9u )
    goto LABEL_34;
  v38 = StringLiteral_18129/*"combine_10"*/;
  *(_QWORD *)(v10 + 104) = StringLiteral_18129/*"combine_10"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v10 + 104), v38, v36, v37);
  if ( *(_DWORD *)(v10 + 24) <= 0xAu )
    goto LABEL_34;
  v41 = StringLiteral_18130/*"combine_11"*/;
  *(_QWORD *)(v10 + 112) = StringLiteral_18130/*"combine_11"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v10 + 112), v41, v39, v40);
  if ( *(_DWORD *)(v10 + 24) <= 0xBu )
    goto LABEL_34;
  v44 = StringLiteral_18131/*"combine_12"*/;
  *(_QWORD *)(v10 + 120) = StringLiteral_18131/*"combine_12"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v10 + 120), v44, v42, v43);
  if ( *(_DWORD *)(v10 + 24) <= 0xCu )
    goto LABEL_34;
  v47 = StringLiteral_18132/*"combine_13"*/;
  *(_QWORD *)(v10 + 128) = StringLiteral_18132/*"combine_13"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v10 + 128), v47, v45, v46);
  if ( *(_DWORD *)(v10 + 24) <= 0xDu )
    goto LABEL_34;
  v50 = StringLiteral_18133/*"combine_14"*/;
  *(_QWORD *)(v10 + 136) = StringLiteral_18133/*"combine_14"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v10 + 136), v50, v48, v49);
  if ( *(_DWORD *)(v10 + 24) <= 0xEu )
    goto LABEL_34;
  v53 = StringLiteral_18134/*"combine_15"*/;
  *(_QWORD *)(v10 + 144) = StringLiteral_18134/*"combine_15"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v10 + 144), v53, v51, v52);
  if ( *(_DWORD *)(v10 + 24) <= 0xFu )
    goto LABEL_34;
  v56 = StringLiteral_18135/*"combine_16"*/;
  *(_QWORD *)(v10 + 152) = StringLiteral_18135/*"combine_16"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v10 + 152), v56, v54, v55);
  if ( *(_DWORD *)(v10 + 24) <= 0x10u )
    goto LABEL_34;
  v59 = StringLiteral_18136/*"combine_17"*/;
  *(_QWORD *)(v10 + 160) = StringLiteral_18136/*"combine_17"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v10 + 160), v59, v57, v58);
  if ( *(_DWORD *)(v10 + 24) <= 0x11u
    || (v62 = StringLiteral_18137/*"combine_18"*/,
        *(_QWORD *)(v10 + 168) = StringLiteral_18137/*"combine_18"*/,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v10 + 168), v62, v60, v61),
        *(_DWORD *)(v10 + 24) <= 0x12u)
    || (v65 = StringLiteral_18138/*"combine_19"*/,
        *(_QWORD *)(v10 + 176) = StringLiteral_18138/*"combine_19"*/,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v10 + 176), v65, v63, v64),
        *(_DWORD *)(v10 + 24) <= 0x13u) )
  {
LABEL_34:
    sub_1B88814(v3, v4);
  }
  v68 = StringLiteral_18139/*"combine_20"*/;
  *(_QWORD *)(v10 + 184) = StringLiteral_18139/*"combine_20"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v10 + 184), v68, v66, v67);
  this->fields.startAniName = (struct System_String_array *)v10;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.startAniName, v10, v69, v70);
  v3 = sub_1B88658(string___TypeInfo, 5LL);
  if ( !v3 )
LABEL_35:
    sub_1B8880C(v3, v4);
  v73 = v3;
  if ( !*(_DWORD *)(v3 + 24) )
    goto LABEL_34;
  v74 = StringLiteral_18140/*"combine_fodder01"*/;
  *(_QWORD *)(v3 + 32) = StringLiteral_18140/*"combine_fodder01"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 32), v74, v71, v72);
  if ( *(_DWORD *)(v73 + 24) <= 1u )
    goto LABEL_34;
  v77 = StringLiteral_18141/*"combine_fodder012"*/;
  *(_QWORD *)(v73 + 40) = StringLiteral_18141/*"combine_fodder012"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v73 + 40), v77, v75, v76);
  if ( *(_DWORD *)(v73 + 24) <= 2u )
    goto LABEL_34;
  v80 = StringLiteral_18142/*"combine_fodder013"*/;
  *(_QWORD *)(v73 + 48) = StringLiteral_18142/*"combine_fodder013"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v73 + 48), v80, v78, v79);
  if ( *(_DWORD *)(v73 + 24) <= 3u )
    goto LABEL_34;
  v83 = StringLiteral_18143/*"combine_fodder014"*/;
  *(_QWORD *)(v73 + 56) = StringLiteral_18143/*"combine_fodder014"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v73 + 56), v83, v81, v82);
  if ( *(_DWORD *)(v73 + 24) <= 4u )
    goto LABEL_34;
  v86 = StringLiteral_18144/*"combine_fodder015"*/;
  *(_QWORD *)(v73 + 64) = StringLiteral_18144/*"combine_fodder015"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v73 + 64), v86, v84, v85);
  this->fields.itemAniName = (struct System_String_array *)v73;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.itemAniName, v73, v87, v88);
  v89 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v89,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.materialList = (struct System_Collections_Generic_List_UserServantEntity__o *)v89;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.materialList, (int32_t)v89, v90, v91);
  v92 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v92,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.itemList = v92;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.itemList, (int32_t)v92, v93, v94);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall CombineEffectComponent__EndLoadBg(
        CombineEffectComponent_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v13; // x8
  CommonUI_o *v14; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v16; // x21

  if ( (byte_4A5E732 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AvalonSceneManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_CombineEffectComponent___c__DisplayClass33_0__EndLoadBg_b__0__);
    sub_1B885B0(&CombineEffectComponent___c__DisplayClass33_0_TypeInfo);
    byte_4A5E732 = 1;
  }
  v5 = sub_1B887FC(CombineEffectComponent___c__DisplayClass33_0_TypeInfo);
  CombineEffectComponent___c__DisplayClass33_0___ctor((CombineEffectComponent___c__DisplayClass33_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_8;
  *(_QWORD *)(v5 + 16) = data;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)data, v8, v9);
  *(_QWORD *)(v5 + 24) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)this, v10, v11);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v13 = AvalonSceneManager_TypeInfo;
  v14 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v13 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v13->static_fields->DEFAULT_FADE_TIME;
  v16 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v16,
    (Il2CppObject *)v5,
    Method_CombineEffectComponent___c__DisplayClass33_0__EndLoadBg_b__0__,
    0LL);
  if ( !v14 )
LABEL_8:
    sub_1B8880C(v6, v7);
  CommonUI__maskFadeout(v14, 1, DEFAULT_FADE_TIME, v16, 0LL);
}


void __fastcall CombineEffectComponent__InitCombineEffect(CombineEffectComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_Collections_Generic_List_object__o *v6; // x21
  struct System_Collections_Generic_List_string__o **p_releaseAssetPath; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t kind; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v12; // x1
  __int64 *v13; // x8
  struct UnityEngine_GameObject_o *v14; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w2
  int32_t v18; // w3
  Il2CppObject *v19; // x20
  __int64 v20; // x8
  _QWORD *v21; // x9
  __int64 klass_low; // x10
  __int64 v23; // x8
  AssetLoader_LoadEndDataHandler_o *v24; // x21
  _QWORD *v25; // x0
  System_Reflection_MethodBase_o *v26; // x0

  if ( (byte_4A5E731 & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&Method_CombineEffectComponent_EndLoadBg__);
    sub_1B885B0(&Method_CombineEffectComponent_InitCombineEffect__);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_string__TypeInfo);
    sub_1B885B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1B885B0(&StringLiteral_3268/*"Bg/10500"*/);
    sub_1B885B0(&StringLiteral_5878/*"EffectPanel/Combine_fodder01(Clone)/Combine_bit/BG_root"*/);
    sub_1B885B0(&StringLiteral_5877/*"EffectPanel/Combine_bit_prefab(Clone)/Combine_bit/BG_root"*/);
    byte_4A5E731 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  this->fields.fsm = (struct PlayMakerFSM_o *)Component_object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.fsm, (int32_t)Component_object, v4, v5);
  v6 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.releaseAssetPath = (struct System_Collections_Generic_List_string__o *)v6;
  p_releaseAssetPath = &this->fields.releaseAssetPath;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.releaseAssetPath, (int32_t)v6, v8, v9);
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
        v13 = &StringLiteral_5878/*"EffectPanel/Combine_fodder01(Clone)/Combine_bit/BG_root"*/;
        goto LABEL_11;
      }
    }
LABEL_22:
    sub_1B8880C(gameObject, v12);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_22;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_22;
  v13 = &StringLiteral_5877/*"EffectPanel/Combine_bit_prefab(Clone)/Combine_bit/BG_root"*/;
LABEL_11:
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Transform__Find(
                                             (UnityEngine_Transform_o *)gameObject,
                                             (System_String_o *)*v13,
                                             0LL);
  if ( !gameObject )
    goto LABEL_22;
  v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  this->fields.bgParentObject = v14;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.bgParentObject, (int32_t)v14, v15, v16);
  gameObject = (UnityEngine_GameObject_o *)*p_releaseAssetPath;
  if ( !*p_releaseAssetPath )
    goto LABEL_22;
  v19 = (Il2CppObject *)StringLiteral_3268/*"Bg/10500"*/;
  v20 = *(_QWORD *)&gameObject->fields.m_CachedPtr;
  v21 = Method_System_Collections_Generic_List_string__Add__;
  ++HIDWORD(gameObject[1].klass);
  if ( !v20 )
    goto LABEL_22;
  klass_low = SLODWORD(gameObject[1].klass);
  if ( (unsigned int)klass_low >= *(_DWORD *)(v20 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)gameObject,
      v19,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
  }
  else
  {
    v23 = v20 + 8 * klass_low;
    LODWORD(gameObject[1].klass) = klass_low + 1;
    *(_QWORD *)(v23 + 32) = v19;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v23 + 32), (int32_t)v19, v17, v18);
  }
  v24 = (AssetLoader_LoadEndDataHandler_o *)sub_1B887FC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v24, (Il2CppObject *)this, Method_CombineEffectComponent_EndLoadBg__, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage((System_String_o *)v19, v24, 1, 0LL);
  v25 = Method_CombineEffectComponent_InitCombineEffect__;
  if ( (*((_BYTE *)Method_CombineEffectComponent_InitCombineEffect__ + 83) & 2) != 0 )
    v25 = (_QWORD *)sub_1B885C8(Method_CombineEffectComponent_InitCombineEffect__);
  v26 = (System_Reflection_MethodBase_o *)sub_1B88594(v25, v25[4]);
  OverwriteAssetSoundName__PlayCommonSe(v26, 19, 0LL);
}


void __fastcall CombineEffectComponent__ReleasePrevAsset(CombineEffectComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w3
  struct System_Collections_Generic_List_string__o *releaseAssetPath; // x0
  Il2CppObject *current; // x20
  struct System_Collections_Generic_List_string__o *v6; // x8
  int32_t size; // w2
  int v8; // w9
  struct System_Collections_Generic_List_UserServantEntity__o *materialList; // x8
  int32_t v10; // w2
  int v11; // w9
  struct System_Collections_Generic_List_int__o *itemList; // x8
  int v13; // w9
  struct System_Collections_Generic_List_ItemEntity__o *v14; // x8
  ServantStatusBattleListViewItem_o *p_itemEntityList; // x19
  struct System_Collections_Generic_List_ItemEntity__o *itemEntityList; // t1
  int32_t v17; // w2
  int v18; // w9
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4A5E73C & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ItemEntity__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    byte_4A5E73C = 1;
  }
  memset(&v20, 0, sizeof(v20));
  releaseAssetPath = this->fields.releaseAssetPath;
  if ( releaseAssetPath )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v19,
      (System_Collections_Generic_List_object__o *)releaseAssetPath,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    v20 = v19;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v20,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      current = v20.fields._current;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__releaseAssetStorage((System_String_o *)current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v20,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    v6 = this->fields.releaseAssetPath;
    if ( !v6 )
      goto LABEL_21;
    size = v6->fields._size;
    v8 = v6->fields._version + 1;
    v6->fields._size = 0;
    v6->fields._version = v8;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v6->fields._items, 0, size, 0LL);
  }
  materialList = this->fields.materialList;
  if ( !materialList )
    goto LABEL_21;
  v10 = materialList->fields._size;
  v11 = materialList->fields._version + 1;
  materialList->fields._size = 0;
  materialList->fields._version = v11;
  if ( v10 >= 1 )
    System_Array__Clear((System_Array_o *)materialList->fields._items, 0, v10, 0LL);
  itemList = this->fields.itemList;
  if ( !itemList )
LABEL_21:
    sub_1B8880C(releaseAssetPath, method);
  v13 = itemList->fields._version + 1;
  itemList->fields._size = 0;
  itemList->fields._version = v13;
  itemEntityList = this->fields.itemEntityList;
  p_itemEntityList = (ServantStatusBattleListViewItem_o *)&this->fields.itemEntityList;
  v14 = itemEntityList;
  if ( itemEntityList )
  {
    v17 = v14->fields._size;
    v18 = v14->fields._version + 1;
    v14->fields._size = 0;
    v14->fields._version = v18;
    if ( v17 >= 1 )
      System_Array__Clear((System_Array_o *)v14->fields._items, 0, v17, 0LL);
    p_itemEntityList->klass = 0LL;
    sub_1B88554(p_itemEntityList, 0, v17, v2);
  }
}


void __fastcall CombineEffectComponent__SetCardParam(CombineEffectComponent_o *this, const MethodInfo *method)
{
  unsigned __int64 fsm; // x0
  PlayMakerFSM_o **p_fsm; // x19
  struct UnityEngine_GameObject_o *Value; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  float v8; // s0
  float v9; // s8
  System_String_o *v10; // x21
  Il2CppObject *v11; // x23
  Il2CppObject *v12; // x22
  Il2CppObject *v13; // x20
  Il2CppObject *v14; // x29
  Il2CppObject *v15; // x27
  Il2CppObject *v16; // x25
  Il2CppObject *v17; // x24
  Il2CppObject *v18; // x28
  Il2CppObject *v19; // x27
  Il2CppObject *v20; // x25
  Il2CppObject *v21; // x24
  Il2CppObject *v22; // x28
  Il2CppObject *v23; // x27
  Il2CppObject *v24; // x25
  Il2CppObject *v25; // x24
  Il2CppObject *v26; // x28
  Il2CppObject *v27; // x27
  Il2CppObject *v28; // x25
  Il2CppObject *v29; // x24
  System_Collections_Generic_List_object__o *v30; // x25
  int32_t v31; // w2
  int32_t v32; // w3
  _QWORD *v33; // x8
  int32_t *p_version; // x21
  struct System_Object_array *items; // x9
  System_Collections_Generic_List_object__Fields *p_fields; // x28
  __int64 size; // x10
  int32_t *p_size; // x24
  Il2CppClass **v39; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  _QWORD *v42; // x8
  struct System_Object_array *v43; // x9
  __int64 v44; // x10
  __int64 v45; // x0
  int32_t v46; // w2
  int32_t v47; // w3
  _QWORD *v48; // x8
  struct System_Object_array *v49; // x9
  __int64 v50; // x10
  __int64 v51; // x0
  int32_t v52; // w2
  int32_t v53; // w3
  _QWORD *v54; // x8
  struct System_Object_array *v55; // x9
  __int64 v56; // x10
  __int64 v57; // x0
  int32_t v58; // w2
  int32_t v59; // w3
  _QWORD *v60; // x8
  struct System_Object_array *v61; // x9
  __int64 v62; // x10
  __int64 v63; // x0
  int32_t v64; // w2
  int32_t v65; // w3
  _QWORD *v66; // x8
  struct System_Object_array *v67; // x9
  __int64 v68; // x10
  __int64 v69; // x0
  int32_t v70; // w2
  int32_t v71; // w3
  _QWORD *v72; // x8
  struct System_Object_array *v73; // x9
  __int64 v74; // x10
  __int64 v75; // x0
  int32_t v76; // w2
  int32_t v77; // w3
  _QWORD *v78; // x8
  struct System_Object_array *v79; // x9
  __int64 v80; // x10
  __int64 v81; // x0
  int32_t v82; // w2
  int32_t v83; // w3
  _QWORD *v84; // x8
  struct System_Object_array *v85; // x9
  __int64 v86; // x10
  __int64 v87; // x0
  int32_t v88; // w2
  int32_t v89; // w3
  _QWORD *v90; // x8
  struct System_Object_array *v91; // x9
  __int64 v92; // x10
  __int64 v93; // x0
  int32_t v94; // w2
  int32_t v95; // w3
  _QWORD *v96; // x8
  struct System_Object_array *v97; // x9
  __int64 v98; // x10
  __int64 v99; // x0
  int32_t v100; // w2
  int32_t v101; // w3
  _QWORD *v102; // x8
  struct System_Object_array *v103; // x9
  __int64 v104; // x10
  __int64 v105; // x0
  int32_t v106; // w2
  int32_t v107; // w3
  _QWORD *v108; // x8
  struct System_Object_array *v109; // x9
  __int64 v110; // x10
  __int64 v111; // x0
  int32_t v112; // w2
  int32_t v113; // w3
  _QWORD *v114; // x8
  struct System_Object_array *v115; // x9
  __int64 v116; // x10
  __int64 v117; // x0
  int32_t v118; // w2
  int32_t v119; // w3
  _QWORD *v120; // x8
  struct System_Object_array *v121; // x9
  __int64 v122; // x10
  __int64 v123; // x0
  int32_t v124; // w2
  int32_t v125; // w3
  _QWORD *v126; // x8
  struct System_Object_array *v127; // x9
  __int64 v128; // x10
  __int64 v129; // x0
  int32_t v130; // w2
  int32_t v131; // w3
  _QWORD *v132; // x8
  struct System_Object_array *v133; // x9
  __int64 v134; // x10
  __int64 v135; // x0
  int32_t v136; // w2
  int32_t v137; // w3
  _QWORD *v138; // x8
  struct System_Object_array *v139; // x9
  __int64 v140; // x10
  __int64 v141; // x0
  int32_t v142; // w2
  int32_t v143; // w3
  _QWORD *v144; // x8
  struct System_Object_array *v145; // x9
  __int64 v146; // x10
  __int64 v147; // x0
  int32_t v148; // w2
  int32_t v149; // w3
  _QWORD *v150; // x8
  struct System_Object_array *v151; // x9
  __int64 v152; // x10
  __int64 v153; // x0
  int32_t v154; // w2
  int32_t v155; // w3
  Il2CppObject *v156; // x25
  Il2CppObject *v157; // x24
  Il2CppObject *v158; // x23
  Il2CppObject *v159; // x22
  Il2CppObject *v160; // x21
  System_Collections_Generic_List_object__o *v161; // x20
  int32_t v162; // w2
  int32_t v163; // w3
  struct System_Object_array *v164; // x8
  _QWORD *v165; // x9
  __int64 v166; // x10
  Il2CppClass **v167; // x0
  int32_t v168; // w2
  int32_t v169; // w3
  struct System_Object_array *v170; // x8
  _QWORD *v171; // x9
  __int64 v172; // x10
  Il2CppClass **v173; // x0
  int32_t v174; // w2
  int32_t v175; // w3
  struct System_Object_array *v176; // x8
  _QWORD *v177; // x9
  __int64 v178; // x10
  Il2CppClass **v179; // x0
  int32_t v180; // w2
  int32_t v181; // w3
  struct System_Object_array *v182; // x8
  _QWORD *v183; // x9
  __int64 v184; // x10
  Il2CppClass **v185; // x0
  int32_t v186; // w2
  int32_t v187; // w3
  struct System_Object_array *v188; // x8
  _QWORD *v189; // x9
  __int64 v190; // x10
  Il2CppClass **v191; // x0
  int32_t v192; // w2
  int32_t v193; // w3
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *v195; // x20
  int32_t CardImageLimitCount; // w21
  struct UserServantEntity_o *baseSvtEntity; // x8
  ServantLimitImageMaster_o *v198; // x22
  __int64 v199; // x23
  __int64 v200; // x24
  int32_t ServantImageLimitSealAfter; // w21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v203; // x20
  UnityEngine_Transform_o *v204; // x21
  CombineEffectComponent_o *v205; // x0
  const MethodInfo *v206; // x5
  UserServantEntity_o *v207; // x8
  System_String_o *FrameCardPrefix; // x20
  System_String_o *ExceedFrameCardPath; // x0
  int32_t v210; // w2
  int32_t v211; // w3
  Il2CppObject *v212; // x20
  __int64 v213; // x8
  _QWORD *v214; // x9
  __int64 v215; // x10
  __int64 v216; // x8
  AssetLoader_LoadEndDataHandler_o *v217; // x21
  struct System_Collections_Generic_List_UserServantEntity__o *materialList; // x8
  int32_t v219; // w9
  struct System_String_array *startAniName; // x8
  il2cpp_array_size_t v221; // w9
  struct PlayMakerFSM_AddEventHandlerDelegate_o *v222; // x20
  int32_t v223; // w2
  int32_t v224; // w3
  const MethodInfo *v225; // x1
  struct System_Collections_Generic_List_ItemEntity__o *itemEntityList; // x8
  int32_t v227; // w8
  struct System_Collections_Generic_List_int__o *itemList; // x8
  struct System_String_array *itemAniName; // x9
  il2cpp_array_size_t v230; // w8
  __int64 v231; // x20
  int32_t v232; // w2
  int32_t v233; // w3
  const MethodInfo *v234; // x1
  System_String_o *nodename; // [xsp+8h] [xbp-F8h]
  Il2CppObject *v236; // [xsp+10h] [xbp-F0h]
  Il2CppObject *v237; // [xsp+18h] [xbp-E8h]
  Il2CppObject *v238; // [xsp+20h] [xbp-E0h]
  Il2CppObject *v239; // [xsp+30h] [xbp-D0h]
  Il2CppObject *v240; // [xsp+38h] [xbp-C8h]
  Il2CppObject *v241; // [xsp+40h] [xbp-C0h]
  Il2CppObject *v242; // [xsp+48h] [xbp-B8h]
  Il2CppObject *v243; // [xsp+50h] [xbp-B0h]
  Il2CppObject *v244; // [xsp+58h] [xbp-A8h]
  Il2CppObject *v245; // [xsp+60h] [xbp-A0h]
  Il2CppObject *v246; // [xsp+68h] [xbp-98h]
  Il2CppObject *v247; // [xsp+70h] [xbp-90h]
  Il2CppObject *v248; // [xsp+78h] [xbp-88h]
  Il2CppObject *v249; // [xsp+80h] [xbp-80h]
  Il2CppObject *item; // [xsp+88h] [xbp-78h]
  int32_t classCardId[2]; // [xsp+98h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v252; // 0:x0.16
  UnityEngine_Vector3_o v253; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A5E734 & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&Method_CombineEffectComponent_setReverseCallback__);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ItemEntity__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1B885B0(&System_Collections_Generic_List_string__TypeInfo);
    sub_1B885B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
    sub_1B885B0(&StringLiteral_3179/*"BaseCardNodeName"*/);
    sub_1B885B0(&StringLiteral_4384/*"CardScale"*/);
    sub_1B885B0(&StringLiteral_6672/*"FifthItemNodeName"*/);
    sub_1B885B0(&StringLiteral_6631/*"Feed20NodeName"*/);
    sub_1B885B0(&StringLiteral_6619/*"Feed08NodeName"*/);
    sub_1B885B0(&StringLiteral_6622/*"Feed11NodeName"*/);
    sub_1B885B0(&StringLiteral_6626/*"Feed15NodeName"*/);
    sub_1B885B0(&StringLiteral_2790/*"BACKSIDE_SVT_EQUIP_IMAGE_ID"*/);
    sub_1B885B0(&StringLiteral_18120/*"combine_01"*/);
    sub_1B885B0(&StringLiteral_6621/*"Feed10NodeName"*/);
    sub_1B885B0(&StringLiteral_4604/*"CombineEffect"*/);
    sub_1B885B0(&StringLiteral_6817/*"FourthFeedNodeName"*/);
    sub_1B885B0(&StringLiteral_6623/*"Feed12NodeName"*/);
    sub_1B885B0(&StringLiteral_14428/*"ThrdItemNodeName"*/);
    sub_1B885B0(&StringLiteral_6671/*"FifthFeedNodeName"*/);
    sub_1B885B0(&StringLiteral_12559/*"SecItemNodeName"*/);
    sub_1B885B0(&StringLiteral_6627/*"Feed16NodeName"*/);
    sub_1B885B0(&StringLiteral_12521/*"ScndFeedNodeName"*/);
    sub_1B885B0(&StringLiteral_6856/*"FstFeedNodeName"*/);
    sub_1B885B0(&StringLiteral_6618/*"Feed07NodeName"*/);
    sub_1B885B0(&StringLiteral_14427/*"ThrdFeedNodeName"*/);
    sub_1B885B0(&StringLiteral_6617/*"Feed06NodeName"*/);
    sub_1B885B0(&StringLiteral_18145/*"combine_fodder02"*/);
    sub_1B885B0(&StringLiteral_12793/*"SkillItemNodeName"*/);
    sub_1B885B0(&StringLiteral_12947/*"StartAnimationName"*/);
    sub_1B885B0(&StringLiteral_6629/*"Feed18NodeName"*/);
    sub_1B885B0(&StringLiteral_6624/*"Feed13NodeName"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_6630/*"Feed19NodeName"*/);
    sub_1B885B0(&StringLiteral_6625/*"Feed14NodeName"*/);
    sub_1B885B0(&StringLiteral_6818/*"FourthItemNodeName"*/);
    sub_1B885B0(&StringLiteral_6620/*"Feed09NodeName"*/);
    sub_1B885B0(&StringLiteral_6628/*"Feed17NodeName"*/);
    byte_4A5E734 = 1;
  }
  *(_QWORD *)classCardId = 0LL;
  p_fsm = &this->fields.fsm;
  fsm = (unsigned __int64)this->fields.fsm;
  if ( !fsm )
    goto LABEL_241;
  fsm = (unsigned __int64)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (unsigned __int64)HutongGames_PlayMaker_FsmVariables__GetFsmGameObject(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_4604/*"CombineEffect"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_241;
  Value = HutongGames_PlayMaker_FsmGameObject__get_Value((HutongGames_PlayMaker_FsmGameObject_o *)fsm, 0LL);
  this->fields.effect = Value;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.effect, (int32_t)Value, v6, v7);
  fsm = (unsigned __int64)this->fields.fsm;
  if ( !fsm )
    goto LABEL_241;
  fsm = (unsigned __int64)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (unsigned __int64)HutongGames_PlayMaker_FsmVariables__GetFsmFloat(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_4384/*"CardScale"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_241;
  v8 = HutongGames_PlayMaker_FsmFloat__get_Value((HutongGames_PlayMaker_FsmFloat_o *)fsm, 0LL);
  fsm = (unsigned __int64)*p_fsm;
  if ( !*p_fsm )
    goto LABEL_241;
  v9 = v8;
  fsm = (unsigned __int64)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (unsigned __int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_3179/*"BaseCardNodeName"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (unsigned __int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_241;
  v10 = (System_String_o *)fsm;
  fsm = (unsigned __int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (unsigned __int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_6856/*"FstFeedNodeName"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (unsigned __int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_241;
  v11 = (Il2CppObject *)fsm;
  fsm = (unsigned __int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (unsigned __int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_12521/*"ScndFeedNodeName"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (unsigned __int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_241;
  v12 = (Il2CppObject *)fsm;
  fsm = (unsigned __int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (unsigned __int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_14427/*"ThrdFeedNodeName"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (unsigned __int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_241;
  v13 = (Il2CppObject *)fsm;
  fsm = (unsigned __int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (unsigned __int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_6817/*"FourthFeedNodeName"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (unsigned __int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_241;
  v14 = (Il2CppObject *)fsm;
  fsm = (unsigned __int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (unsigned __int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_6671/*"FifthFeedNodeName"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (unsigned __int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_241;
  v15 = (Il2CppObject *)fsm;
  fsm = (unsigned __int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (unsigned __int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_6617/*"Feed06NodeName"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (unsigned __int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_241;
  v16 = (Il2CppObject *)fsm;
  fsm = (unsigned __int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (unsigned __int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_6618/*"Feed07NodeName"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (unsigned __int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_241;
  v17 = (Il2CppObject *)fsm;
  fsm = (unsigned __int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (unsigned __int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_6619/*"Feed08NodeName"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (unsigned __int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_241;
  v18 = (Il2CppObject *)fsm;
  fsm = (unsigned __int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  item = v15;
  fsm = (unsigned __int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_6620/*"Feed09NodeName"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (unsigned __int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_241;
  v19 = (Il2CppObject *)fsm;
  fsm = (unsigned __int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  v249 = v16;
  fsm = (unsigned __int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_6621/*"Feed10NodeName"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (unsigned __int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_241;
  v20 = (Il2CppObject *)fsm;
  fsm = (unsigned __int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  v248 = v17;
  fsm = (unsigned __int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_6622/*"Feed11NodeName"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (unsigned __int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_241;
  v21 = (Il2CppObject *)fsm;
  fsm = (unsigned __int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  v247 = v18;
  fsm = (unsigned __int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_6623/*"Feed12NodeName"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (unsigned __int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_241;
  v22 = (Il2CppObject *)fsm;
  fsm = (unsigned __int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  v246 = v19;
  fsm = (unsigned __int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_6624/*"Feed13NodeName"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (unsigned __int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_241;
  v23 = (Il2CppObject *)fsm;
  fsm = (unsigned __int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  v245 = v20;
  fsm = (unsigned __int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_6625/*"Feed14NodeName"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (unsigned __int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_241;
  v24 = (Il2CppObject *)fsm;
  fsm = (unsigned __int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  v244 = v21;
  fsm = (unsigned __int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_6626/*"Feed15NodeName"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (unsigned __int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_241;
  v25 = (Il2CppObject *)fsm;
  fsm = (unsigned __int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  v243 = v22;
  fsm = (unsigned __int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_6627/*"Feed16NodeName"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (unsigned __int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_241;
  v26 = (Il2CppObject *)fsm;
  fsm = (unsigned __int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  v242 = v23;
  fsm = (unsigned __int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_6628/*"Feed17NodeName"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (unsigned __int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_241;
  v27 = (Il2CppObject *)fsm;
  fsm = (unsigned __int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  v241 = v24;
  fsm = (unsigned __int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_6629/*"Feed18NodeName"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (unsigned __int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_241;
  v28 = (Il2CppObject *)fsm;
  fsm = (unsigned __int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  v240 = v25;
  fsm = (unsigned __int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_6630/*"Feed19NodeName"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (unsigned __int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_241;
  v29 = (Il2CppObject *)fsm;
  fsm = (unsigned __int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (unsigned __int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_6631/*"Feed20NodeName"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_241;
  v239 = v26;
  v237 = v29;
  v238 = v28;
  nodename = v10;
  v236 = (Il2CppObject *)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  v30 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v30,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v30 )
    goto LABEL_241;
  v33 = Method_System_Collections_Generic_List_string__Add__;
  p_version = &v30->fields._version;
  ++v30->fields._version;
  p_fields = &v30->fields;
  items = v30->fields._items;
  p_size = &v30->fields._size;
  size = v30->fields._size;
  if ( !items )
    goto LABEL_241;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v30,
      v11,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
  }
  else
  {
    v39 = &items->obj.klass + size;
    *p_size = size + 1;
    v39[4] = (Il2CppClass *)v11;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v39 + 4), (int32_t)v11, v31, v32);
  }
  v42 = Method_System_Collections_Generic_List_string__Add__;
  ++*p_version;
  v43 = p_fields->_items;
  if ( !p_fields->_items )
    goto LABEL_241;
  v44 = *p_size;
  if ( (unsigned int)v44 >= v43->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v30,
      v12,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
  }
  else
  {
    v45 = (__int64)v43 + 8 * v44;
    *p_size = v44 + 1;
    *(_QWORD *)(v45 + 32) = v12;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v45 + 32), (int32_t)v12, v40, v41);
  }
  v48 = Method_System_Collections_Generic_List_string__Add__;
  ++*p_version;
  v49 = p_fields->_items;
  if ( !p_fields->_items )
    goto LABEL_241;
  v50 = *p_size;
  if ( (unsigned int)v50 >= v49->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v30,
      v13,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
  }
  else
  {
    v51 = (__int64)v49 + 8 * v50;
    *p_size = v50 + 1;
    *(_QWORD *)(v51 + 32) = v13;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v51 + 32), (int32_t)v13, v46, v47);
  }
  v54 = Method_System_Collections_Generic_List_string__Add__;
  ++*p_version;
  v55 = p_fields->_items;
  if ( !p_fields->_items )
    goto LABEL_241;
  v56 = *p_size;
  if ( (unsigned int)v56 >= v55->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v30,
      v14,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
  }
  else
  {
    v57 = (__int64)v55 + 8 * v56;
    *p_size = v56 + 1;
    *(_QWORD *)(v57 + 32) = v14;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v57 + 32), (int32_t)v14, v52, v53);
  }
  v60 = Method_System_Collections_Generic_List_string__Add__;
  ++*p_version;
  v61 = p_fields->_items;
  if ( !p_fields->_items )
    goto LABEL_241;
  v62 = *p_size;
  if ( (unsigned int)v62 >= v61->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v30,
      item,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
  }
  else
  {
    v63 = (__int64)v61 + 8 * v62;
    *p_size = v62 + 1;
    *(_QWORD *)(v63 + 32) = item;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v63 + 32), (int32_t)item, v58, v59);
  }
  v66 = Method_System_Collections_Generic_List_string__Add__;
  ++*p_version;
  v67 = p_fields->_items;
  if ( !p_fields->_items )
    goto LABEL_241;
  v68 = *p_size;
  if ( (unsigned int)v68 >= v67->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v30,
      v249,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v66[4] + 192LL) + 112LL));
  }
  else
  {
    v69 = (__int64)v67 + 8 * v68;
    *p_size = v68 + 1;
    *(_QWORD *)(v69 + 32) = v249;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v69 + 32), (int32_t)v249, v64, v65);
  }
  v72 = Method_System_Collections_Generic_List_string__Add__;
  ++*p_version;
  v73 = p_fields->_items;
  if ( !p_fields->_items )
    goto LABEL_241;
  v74 = *p_size;
  if ( (unsigned int)v74 >= v73->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v30,
      v248,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v72[4] + 192LL) + 112LL));
  }
  else
  {
    v75 = (__int64)v73 + 8 * v74;
    *p_size = v74 + 1;
    *(_QWORD *)(v75 + 32) = v248;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v75 + 32), (int32_t)v248, v70, v71);
  }
  v78 = Method_System_Collections_Generic_List_string__Add__;
  ++*p_version;
  v79 = p_fields->_items;
  if ( !p_fields->_items )
    goto LABEL_241;
  v80 = *p_size;
  if ( (unsigned int)v80 >= v79->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v30,
      v247,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v78[4] + 192LL) + 112LL));
  }
  else
  {
    v81 = (__int64)v79 + 8 * v80;
    *p_size = v80 + 1;
    *(_QWORD *)(v81 + 32) = v247;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v81 + 32), (int32_t)v247, v76, v77);
  }
  v84 = Method_System_Collections_Generic_List_string__Add__;
  ++*p_version;
  v85 = p_fields->_items;
  if ( !p_fields->_items )
    goto LABEL_241;
  v86 = *p_size;
  if ( (unsigned int)v86 >= v85->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v30,
      v246,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v84[4] + 192LL) + 112LL));
  }
  else
  {
    v87 = (__int64)v85 + 8 * v86;
    *p_size = v86 + 1;
    *(_QWORD *)(v87 + 32) = v246;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v87 + 32), (int32_t)v246, v82, v83);
  }
  v90 = Method_System_Collections_Generic_List_string__Add__;
  ++*p_version;
  v91 = p_fields->_items;
  if ( !p_fields->_items )
    goto LABEL_241;
  v92 = *p_size;
  if ( (unsigned int)v92 >= v91->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v30,
      v245,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v90[4] + 192LL) + 112LL));
  }
  else
  {
    v93 = (__int64)v91 + 8 * v92;
    *p_size = v92 + 1;
    *(_QWORD *)(v93 + 32) = v245;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v93 + 32), (int32_t)v245, v88, v89);
  }
  v96 = Method_System_Collections_Generic_List_string__Add__;
  ++*p_version;
  v97 = p_fields->_items;
  if ( !p_fields->_items )
    goto LABEL_241;
  v98 = *p_size;
  if ( (unsigned int)v98 >= v97->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v30,
      v244,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v96[4] + 192LL) + 112LL));
  }
  else
  {
    v99 = (__int64)v97 + 8 * v98;
    *p_size = v98 + 1;
    *(_QWORD *)(v99 + 32) = v244;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v99 + 32), (int32_t)v244, v94, v95);
  }
  v102 = Method_System_Collections_Generic_List_string__Add__;
  ++*p_version;
  v103 = p_fields->_items;
  if ( !p_fields->_items )
    goto LABEL_241;
  v104 = *p_size;
  if ( (unsigned int)v104 >= v103->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v30,
      v243,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v102[4] + 192LL) + 112LL));
  }
  else
  {
    v105 = (__int64)v103 + 8 * v104;
    *p_size = v104 + 1;
    *(_QWORD *)(v105 + 32) = v243;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v105 + 32), (int32_t)v243, v100, v101);
  }
  v108 = Method_System_Collections_Generic_List_string__Add__;
  ++*p_version;
  v109 = p_fields->_items;
  if ( !p_fields->_items )
    goto LABEL_241;
  v110 = *p_size;
  if ( (unsigned int)v110 >= v109->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v30,
      v242,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v108[4] + 192LL) + 112LL));
  }
  else
  {
    v111 = (__int64)v109 + 8 * v110;
    *p_size = v110 + 1;
    *(_QWORD *)(v111 + 32) = v242;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v111 + 32), (int32_t)v242, v106, v107);
  }
  v114 = Method_System_Collections_Generic_List_string__Add__;
  ++*p_version;
  v115 = p_fields->_items;
  if ( !p_fields->_items )
    goto LABEL_241;
  v116 = *p_size;
  if ( (unsigned int)v116 >= v115->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v30,
      v241,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v114[4] + 192LL) + 112LL));
  }
  else
  {
    v117 = (__int64)v115 + 8 * v116;
    *p_size = v116 + 1;
    *(_QWORD *)(v117 + 32) = v241;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v117 + 32), (int32_t)v241, v112, v113);
  }
  v120 = Method_System_Collections_Generic_List_string__Add__;
  ++*p_version;
  v121 = p_fields->_items;
  if ( !p_fields->_items )
    goto LABEL_241;
  v122 = *p_size;
  if ( (unsigned int)v122 >= v121->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v30,
      v240,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v120[4] + 192LL) + 112LL));
  }
  else
  {
    v123 = (__int64)v121 + 8 * v122;
    *p_size = v122 + 1;
    *(_QWORD *)(v123 + 32) = v240;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v123 + 32), (int32_t)v240, v118, v119);
  }
  v126 = Method_System_Collections_Generic_List_string__Add__;
  ++*p_version;
  v127 = p_fields->_items;
  if ( !p_fields->_items )
    goto LABEL_241;
  v128 = *p_size;
  if ( (unsigned int)v128 >= v127->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v30,
      v239,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v126[4] + 192LL) + 112LL));
  }
  else
  {
    v129 = (__int64)v127 + 8 * v128;
    *p_size = v128 + 1;
    *(_QWORD *)(v129 + 32) = v239;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v129 + 32), (int32_t)v239, v124, v125);
  }
  v132 = Method_System_Collections_Generic_List_string__Add__;
  ++*p_version;
  v133 = p_fields->_items;
  if ( !p_fields->_items )
    goto LABEL_241;
  v134 = *p_size;
  if ( (unsigned int)v134 >= v133->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v30,
      v27,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v132[4] + 192LL) + 112LL));
  }
  else
  {
    v135 = (__int64)v133 + 8 * v134;
    *p_size = v134 + 1;
    *(_QWORD *)(v135 + 32) = v27;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v135 + 32), (int32_t)v27, v130, v131);
  }
  v138 = Method_System_Collections_Generic_List_string__Add__;
  ++*p_version;
  v139 = p_fields->_items;
  if ( !p_fields->_items )
    goto LABEL_241;
  v140 = *p_size;
  if ( (unsigned int)v140 >= v139->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v30,
      v238,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v138[4] + 192LL) + 112LL));
  }
  else
  {
    v141 = (__int64)v139 + 8 * v140;
    *p_size = v140 + 1;
    *(_QWORD *)(v141 + 32) = v238;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v141 + 32), (int32_t)v238, v136, v137);
  }
  v144 = Method_System_Collections_Generic_List_string__Add__;
  ++*p_version;
  v145 = p_fields->_items;
  if ( !p_fields->_items )
    goto LABEL_241;
  v146 = *p_size;
  if ( (unsigned int)v146 >= v145->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v30,
      v237,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v144[4] + 192LL) + 112LL));
  }
  else
  {
    v147 = (__int64)v145 + 8 * v146;
    *p_size = v146 + 1;
    *(_QWORD *)(v147 + 32) = v237;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v147 + 32), (int32_t)v237, v142, v143);
  }
  v150 = Method_System_Collections_Generic_List_string__Add__;
  ++*p_version;
  v151 = p_fields->_items;
  if ( !p_fields->_items )
    goto LABEL_241;
  v152 = *p_size;
  if ( (unsigned int)v152 >= v151->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v30,
      v236,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v150[4] + 192LL) + 112LL));
  }
  else
  {
    v153 = (__int64)v151 + 8 * v152;
    *p_size = v152 + 1;
    *(_QWORD *)(v153 + 32) = v236;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v153 + 32), (int32_t)v236, v148, v149);
  }
  this->fields.feedNameList = (struct System_Collections_Generic_List_string__o *)v30;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.feedNameList, (int32_t)v30, v154, v155);
  fsm = (unsigned __int64)this->fields.fsm;
  if ( !fsm )
    goto LABEL_241;
  fsm = (unsigned __int64)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (unsigned __int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_12793/*"SkillItemNodeName"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (unsigned __int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_241;
  v156 = (Il2CppObject *)fsm;
  fsm = (unsigned __int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (unsigned __int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_12559/*"SecItemNodeName"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (unsigned __int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_241;
  v157 = (Il2CppObject *)fsm;
  fsm = (unsigned __int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (unsigned __int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_14428/*"ThrdItemNodeName"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (unsigned __int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_241;
  v158 = (Il2CppObject *)fsm;
  fsm = (unsigned __int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (unsigned __int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_6818/*"FourthItemNodeName"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (unsigned __int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_241;
  v159 = (Il2CppObject *)fsm;
  fsm = (unsigned __int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (unsigned __int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_6672/*"FifthItemNodeName"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_241;
  v160 = (Il2CppObject *)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  v161 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v161,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v161 )
    goto LABEL_241;
  v164 = v161->fields._items;
  v165 = Method_System_Collections_Generic_List_string__Add__;
  ++v161->fields._version;
  if ( !v164 )
    goto LABEL_241;
  v166 = v161->fields._size;
  if ( (unsigned int)v166 >= v164->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v161,
      v156,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v165[4] + 192LL) + 112LL));
  }
  else
  {
    v167 = &v164->obj.klass + v166;
    v161->fields._size = v166 + 1;
    v167[4] = (Il2CppClass *)v156;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v167 + 4), (int32_t)v156, v162, v163);
  }
  v170 = v161->fields._items;
  v171 = Method_System_Collections_Generic_List_string__Add__;
  ++v161->fields._version;
  if ( !v170 )
    goto LABEL_241;
  v172 = v161->fields._size;
  if ( (unsigned int)v172 >= v170->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v161,
      v157,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v171[4] + 192LL) + 112LL));
  }
  else
  {
    v173 = &v170->obj.klass + v172;
    v161->fields._size = v172 + 1;
    v173[4] = (Il2CppClass *)v157;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v173 + 4), (int32_t)v157, v168, v169);
  }
  v176 = v161->fields._items;
  v177 = Method_System_Collections_Generic_List_string__Add__;
  ++v161->fields._version;
  if ( !v176 )
    goto LABEL_241;
  v178 = v161->fields._size;
  if ( (unsigned int)v178 >= v176->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v161,
      v158,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v177[4] + 192LL) + 112LL));
  }
  else
  {
    v179 = &v176->obj.klass + v178;
    v161->fields._size = v178 + 1;
    v179[4] = (Il2CppClass *)v158;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v179 + 4), (int32_t)v158, v174, v175);
  }
  v182 = v161->fields._items;
  v183 = Method_System_Collections_Generic_List_string__Add__;
  ++v161->fields._version;
  if ( !v182 )
    goto LABEL_241;
  v184 = v161->fields._size;
  if ( (unsigned int)v184 >= v182->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v161,
      v159,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v183[4] + 192LL) + 112LL));
  }
  else
  {
    v185 = &v182->obj.klass + v184;
    v161->fields._size = v184 + 1;
    v185[4] = (Il2CppClass *)v159;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v185 + 4), (int32_t)v159, v180, v181);
  }
  v188 = v161->fields._items;
  v189 = Method_System_Collections_Generic_List_string__Add__;
  ++v161->fields._version;
  if ( !v188 )
    goto LABEL_241;
  v190 = v161->fields._size;
  if ( (unsigned int)v190 >= v188->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v161,
      v160,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v189[4] + 192LL) + 112LL));
  }
  else
  {
    v191 = &v188->obj.klass + v190;
    v161->fields._size = v190 + 1;
    v191[4] = (Il2CppClass *)v160;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v191 + 4), (int32_t)v160, v186, v187);
  }
  this->fields.feedItemNameList = (struct System_Collections_Generic_List_string__o *)v161;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.feedItemNameList, (int32_t)v161, v192, v193);
  fsm = (unsigned __int64)this->fields.effect;
  if ( !fsm )
    goto LABEL_241;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)fsm, 0LL);
  fsm = (unsigned __int64)TransformHelper__getNodeFromName(transform, nodename, 1, 0LL);
  if ( !fsm )
    goto LABEL_241;
  v195 = (UnityEngine_Component_o *)fsm;
  fsm = (unsigned __int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)fsm, 0, 0LL);
  fsm = (unsigned __int64)this->fields.baseSvtEntity;
  if ( !fsm )
    goto LABEL_241;
  CardImageLimitCount = UserServantEntity__getCardImageLimitCount((UserServantEntity_o *)fsm, 0, 0LL);
  fsm = (unsigned __int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !fsm )
    goto LABEL_241;
  fsm = (unsigned __int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)fsm,
                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  baseSvtEntity = this->fields.baseSvtEntity;
  if ( !baseSvtEntity )
    goto LABEL_241;
  v198 = (ServantLimitImageMaster_o *)fsm;
  v200 = *(_QWORD *)&baseSvtEntity->fields.svtId.fields.currentCryptoKey;
  v199 = *(_QWORD *)&baseSvtEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v252.fields.currentCryptoKey = v200;
  *(_QWORD *)&v252.fields.fakeValue = v199;
  fsm = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v252, 0LL);
  if ( !v198 )
    goto LABEL_241;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 v198,
                                 fsm,
                                 CardImageLimitCount,
                                 0LL);
  gameObject = UnityEngine_Component__get_gameObject(v195, 0LL);
  fsm = (unsigned __int64)CharaGraphManager__CreateTexturePrefab_37906428(
                            gameObject,
                            this->fields.baseSvtEntity,
                            ServantImageLimitSealAfter,
                            10,
                            0LL,
                            0,
                            0LL);
  if ( !fsm )
    goto LABEL_241;
  v203 = (UnityEngine_Component_o *)fsm;
  fsm = (unsigned __int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)fsm, 0LL);
  v204 = (UnityEngine_Transform_o *)fsm;
  if ( !byte_4A55CE1 )
  {
    fsm = sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  if ( !v204 )
    goto LABEL_241;
  UnityEngine_Transform__set_localPosition(v204, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  fsm = (unsigned __int64)UnityEngine_Component__get_transform(v203, 0LL);
  if ( !fsm )
    goto LABEL_241;
  v253.fields.x = v9;
  v253.fields.y = v9;
  v253.fields.z = v9;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)fsm, v253, 0LL);
  CombineEffectComponent__getDispInfo(
    v205,
    &classCardId[1],
    classCardId,
    this->fields.baseSvtId,
    this->fields.baseSvtlimitCnt,
    v206);
  fsm = this->fields.kind == 3
      ? ConstantMaster__getValue((System_String_o *)StringLiteral_2790/*"BACKSIDE_SVT_EQUIP_IMAGE_ID"*/, 0LL)
      : (unsigned int)classCardId[0];
  v207 = this->fields.baseSvtEntity;
  this->fields.baseClassCardId = fsm;
  if ( !v207 )
    goto LABEL_241;
  if ( UserServantEntity__isExceeded(v207, 0LL) )
  {
    fsm = (unsigned __int64)this->fields.baseSvtEntity;
    if ( fsm )
    {
      FrameCardPrefix = UserServantEntity__getFrameCardPrefix((UserServantEntity_o *)fsm, 0LL);
      fsm = (unsigned __int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
      if ( fsm )
      {
        ExceedFrameCardPath = DesignCardManager__GetExceedFrameCardPath(
                                (DesignCardManager_o *)fsm,
                                this->fields.baseClassCardId,
                                FrameCardPrefix,
                                0LL);
        goto LABEL_213;
      }
    }
LABEL_241:
    sub_1B8880C(fsm, method);
  }
  fsm = (unsigned __int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  if ( !fsm )
    goto LABEL_241;
  ExceedFrameCardPath = DesignCardManager__GetDesignCardPath(
                          (DesignCardManager_o *)fsm,
                          this->fields.baseClassCardId,
                          classCardId[1],
                          0LL);
LABEL_213:
  v212 = (Il2CppObject *)ExceedFrameCardPath;
  fsm = (unsigned __int64)this->fields.releaseAssetPath;
  if ( !fsm )
    goto LABEL_241;
  v213 = *(_QWORD *)(fsm + 16);
  v214 = Method_System_Collections_Generic_List_string__Add__;
  ++*(_DWORD *)(fsm + 28);
  if ( !v213 )
    goto LABEL_241;
  v215 = *(int *)(fsm + 24);
  if ( (unsigned int)v215 >= *(_DWORD *)(v213 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)fsm,
      v212,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v214[4] + 192LL) + 112LL));
  }
  else
  {
    v216 = v213 + 8 * v215;
    *(_DWORD *)(fsm + 24) = v215 + 1;
    *(_QWORD *)(v216 + 32) = v212;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v216 + 32), (int32_t)v212, v210, v211);
  }
  v217 = (AssetLoader_LoadEndDataHandler_o *)sub_1B887FC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v217,
    (Il2CppObject *)this,
    Method_CombineEffectComponent_setReverseCallback__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  fsm = AssetManager__loadAssetStorage((System_String_o *)v212, v217, 1, 0LL);
  switch ( this->fields.kind )
  {
    case 0:
    case 3:
      materialList = this->fields.materialList;
      if ( !materialList )
        goto LABEL_241;
      v219 = materialList->fields._size;
      startAniName = this->fields.startAniName;
      this->fields.materialCnt = v219;
      if ( !startAniName )
        goto LABEL_241;
      v221 = v219 - 1;
      if ( v221 >= startAniName->max_length )
        goto LABEL_242;
      fsm = (unsigned __int64)*p_fsm;
      if ( !*p_fsm )
        goto LABEL_241;
      v222 = (struct PlayMakerFSM_AddEventHandlerDelegate_o *)startAniName->m_Items[v221];
      fsm = (unsigned __int64)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)fsm, 0LL);
      if ( !fsm )
        goto LABEL_241;
      fsm = (unsigned __int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                                (System_String_o *)StringLiteral_12947/*"StartAnimationName"*/,
                                0LL);
      if ( !fsm )
        goto LABEL_241;
      *(_QWORD *)(fsm + 56) = v222;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(fsm + 56), (int32_t)v222, v223, v224);
      CombineEffectComponent__setServantFeed(this, v225);
      break;
    case 1:
      itemEntityList = this->fields.itemEntityList;
      if ( itemEntityList )
      {
        v227 = itemEntityList->fields._size;
        if ( v227 > 0 )
          goto LABEL_232;
      }
      itemList = this->fields.itemList;
      if ( !itemList )
        goto LABEL_241;
      v227 = itemList->fields._size;
LABEL_232:
      itemAniName = this->fields.itemAniName;
      this->fields.itemMaterialCnt = v227;
      if ( !itemAniName )
        goto LABEL_241;
      v230 = v227 - 1;
      if ( v230 >= itemAniName->max_length )
LABEL_242:
        sub_1B88814(fsm, method);
      fsm = (unsigned __int64)*p_fsm;
      if ( !*p_fsm )
        goto LABEL_241;
      v231 = (__int64)itemAniName->m_Items[v230];
LABEL_238:
      fsm = (unsigned __int64)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)fsm, 0LL);
      if ( !fsm )
        goto LABEL_241;
      fsm = (unsigned __int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                                (System_String_o *)StringLiteral_12947/*"StartAnimationName"*/,
                                0LL);
      if ( !fsm )
        goto LABEL_241;
      *(_QWORD *)(fsm + 56) = v231;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(fsm + 56), v231, v232, v233);
      CombineEffectComponent__setItemFeed(this, v234);
      break;
    case 2:
      fsm = (unsigned __int64)*p_fsm;
      if ( !*p_fsm )
        goto LABEL_241;
      v231 = StringLiteral_18145/*"combine_fodder02"*/;
      goto LABEL_238;
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
  int32_t v14; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4A5E730 & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5E730 = 1;
  }
  this->fields.baseSvtEntity = baseSvtData;
  this->fields.kind = 2;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.baseSvtEntity,
    (int32_t)baseSvtData,
    (int32_t)list,
    (int32_t)method);
  if ( !baseSvtData )
    sub_1B8880C(v7, v8);
  v10 = *(_QWORD *)&baseSvtData->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&baseSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v10;
  *(_QWORD *)&v15.fields.fakeValue = v9;
  this->fields.baseSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v15, 0LL);
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(baseSvtData->fields.limitCount, 0LL);
  this->fields.itemList = list;
  p_itemList = &this->fields.itemList;
  *((_DWORD *)p_itemList - 3) = v11;
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_itemList, (int32_t)list, v13, v14);
}


void __fastcall CombineEffectComponent__SetFeedCallback(
        CombineEffectComponent_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *effect; // x0
  UnityEngine_Transform_o *v6; // x21
  Il2CppObject *Item; // x0
  UnityEngine_Transform_o *NodeFromName; // x21
  Il2CppObject *Component_object; // x0
  System_String_o **v10; // x8
  Il2CppObject *v11; // x20
  UnityEngine_Shader_o *v12; // x22
  UnityEngine_Material_o *v13; // x21
  UnityEngine_Texture_o *v14; // x22
  int32_t v15; // w8
  int v16; // w9

  if ( (byte_4A5E737 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UITexture___);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1B885B0(&UnityEngine_Material_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
    sub_1B885B0(&StringLiteral_15129/*"Unlit/Transparent Colored"*/);
    sub_1B885B0(&StringLiteral_12228/*"START_ANIMATION"*/);
    sub_1B885B0(&StringLiteral_4955/*"Custom/Sprite-MasterFigure (SoftClip)"*/);
    byte_4A5E737 = 1;
  }
  effect = this->fields.effect;
  if ( !effect )
    goto LABEL_16;
  effect = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(effect, 0LL);
  if ( !this->fields.feedNameList )
    goto LABEL_16;
  v6 = (UnityEngine_Transform_o *)effect;
  Item = System_Collections_Generic_List_object___get_Item(
           (System_Collections_Generic_List_object__o *)this->fields.feedNameList,
           this->fields.cntIndex,
           (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_string__get_Item__);
  NodeFromName = TransformHelper__getNodeFromName(v6, (System_String_o *)Item, 1, 0LL);
  effect = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
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
                       (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UITexture___);
  v10 = (System_String_o **)(this->fields.cardType == 6 ? &StringLiteral_4955/*"Custom/Sprite-MasterFigure (SoftClip)"*/ : &StringLiteral_15129/*"Unlit/Transparent Colored"*/);
  v11 = Component_object;
  v12 = UnityEngine_Shader__Find(*v10, 0LL);
  v13 = (UnityEngine_Material_o *)sub_1B887FC(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v13, v12, 0LL);
  if ( !v11 )
    goto LABEL_16;
  v14 = (UnityEngine_Texture_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v11->klass->vtable[26].method)(
                                   v11,
                                   v11->klass->vtable[27].methodPtr);
  effect = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(Il2CppObject *, UnityEngine_Material_o *, Il2CppMethodPointer))v11->klass->vtable[25].method)(
                                         v11,
                                         v13,
                                         v11->klass->vtable[26].methodPtr);
  if ( !v13 )
    goto LABEL_16;
  UnityEngine_Material__set_mainTexture(v13, v14, 0LL);
  v15 = this->fields.cntIndex + 1;
  v16 = this->fields.materialCnt - 1;
  this->fields.cntIndex = v15;
  if ( v15 > v16 )
  {
    effect = (UnityEngine_GameObject_o *)this->fields.fsm;
    this->fields.cntIndex = 0;
    if ( effect )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)effect, (System_String_o *)StringLiteral_12228/*"START_ANIMATION"*/, 0LL);
      return;
    }
LABEL_16:
    sub_1B8880C(effect, data);
  }
  CombineEffectComponent__setServantFeed(this, (const MethodInfo *)data);
}


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
  int32_t v16; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_4A5E72D & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5E72D = 1;
  }
  this->fields.baseSvtEntity = baseSvtData;
  this->fields.kind = combineKind;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.baseSvtEntity,
    (int32_t)baseSvtData,
    (int32_t)list,
    combineKind);
  if ( !baseSvtData )
    sub_1B8880C(v9, v10);
  v12 = *(_QWORD *)&baseSvtData->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&baseSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v17.fields.currentCryptoKey = v12;
  *(_QWORD *)&v17.fields.fakeValue = v11;
  this->fields.baseSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v17, 0LL);
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(baseSvtData->fields.limitCount, 0LL);
  this->fields.materialList = list;
  p_materialList = &this->fields.materialList;
  *((_DWORD *)p_materialList - 1) = v13;
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_materialList, (int32_t)list, v15, v16);
}


void __fastcall CombineEffectComponent__SetSkillCombineInfo(
        CombineEffectComponent_o *this,
        UserServantEntity_o *baseSvtData,
        System_Collections_Generic_List_ItemEntity__o *list,
        const MethodInfo *method)
{
  __int64 v7; // x0
  __int64 v8; // x1
  __int64 v9; // x22
  __int64 v10; // x23
  int32_t v11; // w2
  int32_t v12; // w3
  struct System_Collections_Generic_List_int__o *itemList; // x8
  int v14; // w9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4A5E72E & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Clear__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5E72E = 1;
  }
  this->fields.baseSvtEntity = baseSvtData;
  this->fields.kind = 1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.baseSvtEntity,
    (int32_t)baseSvtData,
    (int32_t)list,
    (int32_t)method);
  if ( !baseSvtData )
    goto LABEL_8;
  v10 = *(_QWORD *)&baseSvtData->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&baseSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v10;
  *(_QWORD *)&v15.fields.fakeValue = v9;
  this->fields.baseSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v15, 0LL);
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(baseSvtData->fields.limitCount, 0LL);
  itemList = this->fields.itemList;
  this->fields.baseSvtlimitCnt = v7;
  if ( !itemList )
LABEL_8:
    sub_1B8880C(v7, v8);
  v14 = itemList->fields._version + 1;
  itemList->fields._size = 0;
  itemList->fields._version = v14;
  this->fields.itemEntityList = list;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.itemEntityList, (int32_t)list, v11, v12);
}


void __fastcall CombineEffectComponent__SetSkillCombineInfo_44625024(
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
  int32_t v14; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4A5E72F & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5E72F = 1;
  }
  this->fields.baseSvtEntity = baseSvtData;
  this->fields.kind = 1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.baseSvtEntity,
    (int32_t)baseSvtData,
    (int32_t)list,
    (int32_t)method);
  if ( !baseSvtData )
    sub_1B8880C(v7, v8);
  v10 = *(_QWORD *)&baseSvtData->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&baseSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v10;
  *(_QWORD *)&v15.fields.fakeValue = v9;
  this->fields.baseSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v15, 0LL);
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(baseSvtData->fields.limitCount, 0LL);
  this->fields.itemList = list;
  p_itemList = &this->fields.itemList;
  *((_DWORD *)p_itemList - 3) = v11;
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_itemList, (int32_t)list, v13, v14);
}


void __fastcall CombineEffectComponent__Start(CombineEffectComponent_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall CombineEffectComponent___endAnimation_b__42_0(CombineEffectComponent_o *this, const MethodInfo *method)
{
  struct UnityEngine_GameObject_o **p_effect; // x20
  UnityEngine_Object_o *effect; // x21
  __int64 v5; // x1
  UnityEngine_Object_o *v6; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4A5E73F & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_5475/*"END_FADE"*/);
    byte_4A5E73F = 1;
  }
  p_effect = &this->fields.effect;
  effect = (UnityEngine_Object_o *)this->fields.effect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(effect, 0LL, 0LL) )
  {
    v6 = (UnityEngine_Object_o *)*p_effect;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__DestroyImmediate_69459568(v6, 0LL);
    *p_effect = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.effect, 0, v7, v8);
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1B8880C(0LL, v5);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5475/*"END_FADE"*/, 0LL);
}


void __fastcall CombineEffectComponent___fadeIn_b__34_0(CombineEffectComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4A5E73E & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_5475/*"END_FADE"*/);
    byte_4A5E73E = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1B8880C(0LL, method);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5475/*"END_FADE"*/, 0LL);
}


void __fastcall CombineEffectComponent__endAnimation(CombineEffectComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v4; // x8
  CommonUI_o *v5; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4A5E73B & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AvalonSceneManager_TypeInfo);
    sub_1B885B0(&Method_CombineEffectComponent__endAnimation_b__42_0__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5E73B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = AvalonSceneManager_TypeInfo;
  v5 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v4 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v4->static_fields->DEFAULT_FADE_TIME;
  v7 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_CombineEffectComponent__endAnimation_b__42_0__, 0LL);
  if ( !v5 )
    sub_1B8880C(v8, v9);
  CommonUI__maskFadeout(v5, 1, DEFAULT_FADE_TIME, v7, 0LL);
}


void __fastcall CombineEffectComponent__fadeIn(CombineEffectComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v4; // x8
  CommonUI_o *v5; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4A5E733 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AvalonSceneManager_TypeInfo);
    sub_1B885B0(&Method_CombineEffectComponent__fadeIn_b__34_0__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5E733 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = AvalonSceneManager_TypeInfo;
  v5 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v4 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v4->static_fields->DEFAULT_FADE_TIME;
  v7 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_CombineEffectComponent__fadeIn_b__34_0__, 0LL);
  if ( !v5 )
    sub_1B8880C(v8, v9);
  CommonUI__maskFadein(v5, DEFAULT_FADE_TIME, v7, 0LL);
}


void __fastcall CombineEffectComponent__getCardBackImg(
        CombineEffectComponent_o *this,
        int32_t *rarity,
        int32_t *backCardImgId,
        int32_t svtId,
        int32_t svtLimitCnt,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v12; // x1
  Il2CppObject *Entity; // x24
  int32_t klass_high; // w8
  System_String_o **v15; // x8

  if ( (byte_4A5E73A & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_2790/*"BACKSIDE_SVT_EQUIP_IMAGE_ID"*/);
    sub_1B885B0(&StringLiteral_2791/*"BACKSIDE_SVT_IMAGE_ID"*/);
    byte_4A5E73A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___)) == 0LL
    || (Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   svtId,
                   (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitMaster___)) == 0LL
    || (Instance = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)Instance, svtId, svtLimitCnt, 0LL)) == 0LL
    || (*rarity = *((_DWORD *)Instance + 6), !Entity) )
  {
    sub_1B8880C(Instance, v12);
  }
  klass_high = HIDWORD(Entity[5].klass);
  this->fields.cardType = klass_high;
  if ( klass_high == 6 )
    v15 = (System_String_o **)&StringLiteral_2790/*"BACKSIDE_SVT_EQUIP_IMAGE_ID"*/;
  else
    v15 = (System_String_o **)&StringLiteral_2791/*"BACKSIDE_SVT_IMAGE_ID"*/;
  *backCardImgId = ConstantMaster__getValue(*v15, 0LL);
}


void __fastcall CombineEffectComponent__getDispInfo(
        CombineEffectComponent_o *this,
        int32_t *rarity,
        int32_t *classCardId,
        int32_t svtId,
        int32_t svtLimitCnt,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  ServantEntity_o *Entity; // x23
  ServantLimitEntity_o *v13; // x21
  Il2CppObject *v14; // x22

  if ( (byte_4A5E739 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5E739 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_15;
  Entity = (ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                svtId,
                                (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !Instance )
    goto LABEL_15;
  v13 = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)Instance, svtId, svtLimitCnt, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Entity || !Instance )
    goto LABEL_15;
  v14 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          Entity->fields.classId,
          (const MethodInfo_311D934 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  Instance = (Il2CppObject *)ServantEntity__GetOverwriteClassImageId(Entity, 0LL);
  if ( !(_DWORD)Instance )
  {
    if ( !v14 )
      goto LABEL_15;
    Instance = (Il2CppObject *)LODWORD(v14[2].monitor);
  }
  *classCardId = (int)Instance;
  if ( !v13 )
LABEL_15:
    sub_1B8880C(Instance, v11);
  *rarity = v13->fields.rarity;
}


void __fastcall CombineEffectComponent__setItemFeed(CombineEffectComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemEntityList; // x0
  int32_t v4; // w20
  struct UnityEngine_Transform_o **p_itemNode; // x21
  ItemEntity_o *v6; // x22
  UnityEngine_Transform_o *v7; // x23
  Il2CppObject *Item; // x0
  UnityEngine_Transform_o *NodeFromName; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  UISprite_o *v12; // x23
  int32_t ImageId; // w22
  int32_t v14; // w22
  int32_t v15; // w20
  struct UnityEngine_Transform_o **v16; // x21
  int32_t v17; // w22
  UnityEngine_Transform_o *v18; // x23
  Il2CppObject *v19; // x0
  UnityEngine_Transform_o *v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  Il2CppObject *Component_object; // x23

  if ( (byte_4A5E738 & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_1B885B0(&Method_System_Collections_Generic_List_ItemEntity__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ItemEntity__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1B885B0(&StringLiteral_12228/*"START_ANIMATION"*/);
    byte_4A5E738 = 1;
  }
  itemEntityList = (System_Collections_Generic_List_object__o *)this->fields.itemEntityList;
  if ( itemEntityList && itemEntityList->fields._size >= 1 )
  {
    v4 = 0;
    p_itemNode = &this->fields.itemNode;
    while ( 1 )
    {
      itemEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      itemEntityList,
                                                                      v4,
                                                                      (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ItemEntity__get_Item__);
      if ( !this->fields.effect )
        goto LABEL_30;
      v6 = (ItemEntity_o *)itemEntityList;
      itemEntityList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__get_transform(
                                                                      this->fields.effect,
                                                                      0LL);
      if ( !this->fields.feedItemNameList )
        goto LABEL_30;
      v7 = (UnityEngine_Transform_o *)itemEntityList;
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)this->fields.feedItemNameList,
               v4,
               (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_string__get_Item__);
      NodeFromName = TransformHelper__getNodeFromName(v7, (System_String_o *)Item, 1, 0LL);
      *p_itemNode = NodeFromName;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.itemNode, (int32_t)NodeFromName, v10, v11);
      itemEntityList = (System_Collections_Generic_List_object__o *)*p_itemNode;
      if ( !*p_itemNode )
        goto LABEL_30;
      itemEntityList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__GetComponent_object_(
                                                                      (UnityEngine_Component_o *)itemEntityList,
                                                                      (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UISprite___);
      if ( !v6 )
        goto LABEL_30;
      v12 = (UISprite_o *)itemEntityList;
      if ( v6->fields.type == 29 )
      {
        ImageId = ItemEntity__GetImageId(v6, 0LL);
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__SetCoin(v12, ImageId, 0LL);
      }
      else
      {
        v14 = v6->fields.imageId;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__SetItem(v12, v14, 0LL);
      }
      itemEntityList = (System_Collections_Generic_List_object__o *)this->fields.itemEntityList;
      if ( !itemEntityList )
        goto LABEL_30;
      if ( ++v4 >= itemEntityList->fields._size )
        goto LABEL_19;
    }
  }
  itemEntityList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemEntityList )
    goto LABEL_30;
  v15 = 0;
  v16 = &this->fields.itemNode;
  while ( v15 < itemEntityList->fields._size )
  {
    itemEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_int___get_Item(
                                                                    (System_Collections_Generic_List_int__o *)itemEntityList,
                                                                    v15,
                                                                    (const MethodInfo_34E0520 *)Method_System_Collections_Generic_List_int__get_Item__);
    if ( this->fields.effect )
    {
      v17 = (int)itemEntityList;
      itemEntityList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__get_transform(
                                                                      this->fields.effect,
                                                                      0LL);
      if ( this->fields.feedItemNameList )
      {
        v18 = (UnityEngine_Transform_o *)itemEntityList;
        v19 = System_Collections_Generic_List_object___get_Item(
                (System_Collections_Generic_List_object__o *)this->fields.feedItemNameList,
                v15,
                (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_string__get_Item__);
        v20 = TransformHelper__getNodeFromName(v18, (System_String_o *)v19, 1, 0LL);
        *v16 = v20;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.itemNode, (int32_t)v20, v21, v22);
        itemEntityList = (System_Collections_Generic_List_object__o *)*v16;
        if ( *v16 )
        {
          Component_object = UnityEngine_Component__GetComponent_object_(
                               (UnityEngine_Component_o *)itemEntityList,
                               (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UISprite___);
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__SetItem((UISprite_o *)Component_object, v17, 0LL);
          itemEntityList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
          ++v15;
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
    sub_1B8880C(itemEntityList, method);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)itemEntityList, (System_String_o *)StringLiteral_12228/*"START_ANIMATION"*/, 0LL);
}


void __fastcall CombineEffectComponent__setReverseCallback(
        CombineEffectComponent_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0
  System_String_o *Value; // x22
  DesignCardManager_o *v7; // x21
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4A5E735 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
    sub_1B885B0(&StringLiteral_11371/*"ReverseCardNodeName"*/);
    byte_4A5E735 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm
    || (fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(fsm, 0LL)) == 0LL
    || (fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                  (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                                  (System_String_o *)StringLiteral_11371/*"ReverseCardNodeName"*/,
                                  0LL)) == 0LL
    || (Value = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL),
        fsm = (PlayMakerFSM_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__),
        !this->fields.effect)
    || (v7 = (DesignCardManager_o *)fsm,
        transform = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL),
        fsm = (PlayMakerFSM_o *)TransformHelper__getNodeFromName(transform, Value, 1, 0LL),
        !v7) )
  {
    sub_1B8880C(fsm, data);
  }
  DesignCardManager__SetupCardImage(v7, data, (UnityEngine_Transform_o *)fsm, this->fields.baseClassCardId, 0LL);
}


void __fastcall CombineEffectComponent__setServantFeed(CombineEffectComponent_o *this, const MethodInfo *method)
{
  void *materialList; // x0
  __int64 v4; // x20
  __int64 v5; // x21
  int32_t v6; // w20
  int32_t v7; // w21
  bool isExceeded; // w22
  const MethodInfo *v9; // x5
  int32_t v10; // w20
  System_String_o *FrameCardPrefix; // x20
  System_String_o *ExceedFrameCardPath; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  Il2CppObject *v15; // x20
  __int64 v16; // x8
  _QWORD *v17; // x9
  __int64 v18; // x10
  __int64 v19; // x8
  AssetLoader_LoadEndDataHandler_o *v20; // x21
  int32_t backCardImgId[2]; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_4A5E736 & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&Method_CombineEffectComponent_SetFeedCallback__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    sub_1B885B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5E736 = 1;
  }
  *(_QWORD *)backCardImgId = 0LL;
  materialList = this->fields.materialList;
  if ( !materialList )
    goto LABEL_26;
  materialList = System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)materialList,
                   this->fields.cntIndex,
                   (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
  if ( !materialList )
    goto LABEL_26;
  v5 = *((_QWORD *)materialList + 10);
  v4 = *((_QWORD *)materialList + 11);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v22.fields.currentCryptoKey = v5;
  *(_QWORD *)&v22.fields.fakeValue = v4;
  materialList = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v22, 0LL);
  if ( !this->fields.materialList )
    goto LABEL_26;
  v6 = (int)materialList;
  materialList = System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)this->fields.materialList,
                   this->fields.cntIndex,
                   (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
  if ( !materialList )
    goto LABEL_26;
  materialList = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                           *((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)materialList + 6),
                           0LL);
  if ( !this->fields.materialList )
    goto LABEL_26;
  v7 = (int)materialList;
  materialList = System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)this->fields.materialList,
                   this->fields.cntIndex,
                   (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
  if ( !materialList )
    goto LABEL_26;
  isExceeded = UserServantEntity__isExceeded((UserServantEntity_o *)materialList, 0LL);
  CombineEffectComponent__getCardBackImg(this, &backCardImgId[1], backCardImgId, v6, v7, v9);
  v10 = backCardImgId[0];
  this->fields.feedClassCardId = backCardImgId[0];
  if ( isExceeded )
  {
    materialList = this->fields.materialList;
    if ( materialList )
    {
      materialList = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)materialList,
                       this->fields.cntIndex,
                       (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
      if ( materialList )
      {
        FrameCardPrefix = UserServantEntity__getFrameCardPrefix((UserServantEntity_o *)materialList, 0LL);
        materialList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
        if ( materialList )
        {
          ExceedFrameCardPath = DesignCardManager__GetExceedFrameCardPath(
                                  (DesignCardManager_o *)materialList,
                                  this->fields.feedClassCardId,
                                  FrameCardPrefix,
                                  0LL);
          goto LABEL_18;
        }
      }
    }
LABEL_26:
    sub_1B8880C(materialList, method);
  }
  materialList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  if ( !materialList )
    goto LABEL_26;
  ExceedFrameCardPath = DesignCardManager__GetDesignCardPath(
                          (DesignCardManager_o *)materialList,
                          v10,
                          backCardImgId[1],
                          0LL);
LABEL_18:
  v15 = (Il2CppObject *)ExceedFrameCardPath;
  materialList = this->fields.releaseAssetPath;
  if ( !materialList )
    goto LABEL_26;
  v16 = *((_QWORD *)materialList + 2);
  v17 = Method_System_Collections_Generic_List_string__Add__;
  ++*((_DWORD *)materialList + 7);
  if ( !v16 )
    goto LABEL_26;
  v18 = *((int *)materialList + 6);
  if ( (unsigned int)v18 >= *(_DWORD *)(v16 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)materialList,
      v15,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
  }
  else
  {
    v19 = v16 + 8 * v18;
    *((_DWORD *)materialList + 6) = v18 + 1;
    *(_QWORD *)(v19 + 32) = v15;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v19 + 32), (int32_t)v15, v13, v14);
  }
  v20 = (AssetLoader_LoadEndDataHandler_o *)sub_1B887FC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v20, (Il2CppObject *)this, Method_CombineEffectComponent_SetFeedCallback__, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage((System_String_o *)v15, v20, 1, 0LL);
}


void __fastcall CombineEffectComponent___c__DisplayClass33_0___ctor(
        CombineEffectComponent___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CombineEffectComponent___c__DisplayClass33_0___EndLoadBg_b__0(
        CombineEffectComponent___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  AssetData_o *data; // x0
  Il2CppObject *Object_object__48635516; // x20
  UnityEngine_GameObject_o *v5; // x20
  struct CombineEffectComponent_o *_4__this; // x8
  UnityEngine_Transform_o *v7; // x21
  UnityEngine_Transform_o *v8; // x21
  UnityEngine_Transform_o *v9; // x21
  UnityEngine_Transform_o *v10; // x20
  struct CombineEffectComponent_o *v11; // x8

  if ( (byte_4A5E83A & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetData_GetObject_GameObject____76085352);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_5475/*"END_FADE"*/);
    sub_1B885B0(&StringLiteral_17164/*"bg"*/);
    byte_4A5E83A = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_22;
  Object_object__48635516 = AssetData__GetObject_object__48635516(
                              data,
                              (System_String_o *)StringLiteral_17164/*"bg"*/,
                              (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  data = (AssetData_o *)UnityEngine_Object__Instantiate_object_(
                          Object_object__48635516,
                          (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !data )
    goto LABEL_22;
  v5 = (UnityEngine_GameObject_o *)data;
  data = (AssetData_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)data, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_22;
  v7 = (UnityEngine_Transform_o *)data;
  data = (AssetData_o *)_4__this->fields.bgParentObject;
  if ( !data )
    goto LABEL_22;
  data = (AssetData_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)data, 0LL);
  if ( !v7 )
    goto LABEL_22;
  UnityEngine_Transform__set_parent(v7, (UnityEngine_Transform_o *)data, 0LL);
  data = (AssetData_o *)UnityEngine_GameObject__get_transform(v5, 0LL);
  v8 = (UnityEngine_Transform_o *)data;
  if ( !byte_4A55CE7 )
  {
    data = (AssetData_o *)sub_1B885B0(&UnityEngine_Quaternion_TypeInfo);
    byte_4A55CE7 = 1;
  }
  if ( !v8 )
    goto LABEL_22;
  UnityEngine_Transform__set_localRotation(v8, UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion, 0LL);
  data = (AssetData_o *)UnityEngine_GameObject__get_transform(v5, 0LL);
  v9 = (UnityEngine_Transform_o *)data;
  if ( !byte_4A55CE1 )
  {
    data = (AssetData_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  if ( !v9 )
    goto LABEL_22;
  UnityEngine_Transform__set_localPosition(v9, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  data = (AssetData_o *)UnityEngine_GameObject__get_transform(v5, 0LL);
  v10 = (UnityEngine_Transform_o *)data;
  if ( !byte_4A55CE6 )
  {
    data = (AssetData_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE6 = 1;
  }
  if ( !v10
    || (UnityEngine_Transform__set_localScale(v10, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL),
        (v11 = this->fields.__4__this) == 0LL)
    || (data = (AssetData_o *)v11->fields.fsm) == 0LL )
  {
LABEL_22:
    sub_1B8880C(data, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)data, (System_String_o *)StringLiteral_5475/*"END_FADE"*/, 0LL);
}