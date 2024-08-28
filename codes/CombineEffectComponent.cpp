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
  int32_t v35; // w2
  int32_t v36; // w3
  int v37; // w8
  int32_t v38; // w2
  int32_t v39; // w3
  __int64 v40; // x20
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
  int32_t v71; // w1
  int32_t v72; // w2
  int32_t v73; // w3
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
  int32_t v89; // w1
  int32_t v90; // w2
  int32_t v91; // w3
  int32_t v92; // w1
  int32_t v93; // w2
  int32_t v94; // w3
  int32_t v95; // w1
  int32_t v96; // w2
  int32_t v97; // w3
  int32_t v98; // w1
  int32_t v99; // w2
  int32_t v100; // w3
  int32_t v101; // w2
  int32_t v102; // w3
  __int64 v103; // x20
  int32_t v104; // w1
  int32_t v105; // w2
  int32_t v106; // w3
  int32_t v107; // w1
  int32_t v108; // w2
  int32_t v109; // w3
  int32_t v110; // w1
  int32_t v111; // w2
  int32_t v112; // w3
  int32_t v113; // w1
  int32_t v114; // w2
  int32_t v115; // w3
  int32_t v116; // w1
  int32_t v117; // w2
  int32_t v118; // w3
  System_Collections_Generic_List_object__o *v119; // x20
  int32_t v120; // w2
  int32_t v121; // w3
  System_Collections_Generic_List_int__o *v122; // x20
  int32_t v123; // w2
  int32_t v124; // w3

  if ( (byte_4A0C1D1 & 1) == 0 )
  {
    sub_1B686D4(&int___TypeInfo, method);
    sub_1B686D4(&Method_System_Collections_Generic_List_int___ctor__, v3);
    sub_1B686D4(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v4);
    sub_1B686D4(&System_Collections_Generic_List_int__TypeInfo, v5);
    sub_1B686D4(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v6);
    sub_1B686D4(&string___TypeInfo, v7);
    sub_1B686D4(&StringLiteral_18062/*"combine_08"*/, v8);
    sub_1B686D4(&StringLiteral_18063/*"combine_09"*/, v9);
    sub_1B686D4(&StringLiteral_18070/*"combine_16"*/, v10);
    sub_1B686D4(&StringLiteral_18073/*"combine_19"*/, v11);
    sub_1B686D4(&StringLiteral_18074/*"combine_20"*/, v12);
    sub_1B686D4(&StringLiteral_18061/*"combine_07"*/, v13);
    sub_1B686D4(&StringLiteral_18055/*"combine_01"*/, v14);
    sub_1B686D4(&StringLiteral_18056/*"combine_02"*/, v15);
    sub_1B686D4(&StringLiteral_18068/*"combine_14"*/, v16);
    sub_1B686D4(&StringLiteral_18064/*"combine_10"*/, v17);
    sub_1B686D4(&StringLiteral_18076/*"combine_fodder012"*/, v18);
    sub_1B686D4(&StringLiteral_18075/*"combine_fodder01"*/, v19);
    sub_1B686D4(&StringLiteral_18065/*"combine_11"*/, v20);
    sub_1B686D4(&StringLiteral_18066/*"combine_12"*/, v21);
    sub_1B686D4(&StringLiteral_18078/*"combine_fodder014"*/, v22);
    sub_1B686D4(&StringLiteral_18077/*"combine_fodder013"*/, v23);
    sub_1B686D4(&StringLiteral_18059/*"combine_05"*/, v24);
    sub_1B686D4(&StringLiteral_18071/*"combine_17"*/, v25);
    sub_1B686D4(&StringLiteral_18079/*"combine_fodder015"*/, v26);
    sub_1B686D4(&StringLiteral_18069/*"combine_15"*/, v27);
    sub_1B686D4(&StringLiteral_18058/*"combine_04"*/, v28);
    sub_1B686D4(&StringLiteral_18057/*"combine_03"*/, v29);
    sub_1B686D4(&StringLiteral_18060/*"combine_06"*/, v30);
    sub_1B686D4(&StringLiteral_18067/*"combine_13"*/, v31);
    sub_1B686D4(&StringLiteral_18072/*"combine_18"*/, v32);
    byte_4A0C1D1 = 1;
  }
  v33 = sub_1B6877C(int___TypeInfo, 2LL);
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
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.cardTextureSize, v33, v35, v36);
  v33 = sub_1B6877C(string___TypeInfo, 20LL);
  if ( !v33 )
    goto LABEL_35;
  v40 = v33;
  if ( !*(_DWORD *)(v33 + 24) )
    goto LABEL_34;
  v41 = StringLiteral_18055/*"combine_01"*/;
  *(_QWORD *)(v33 + 32) = StringLiteral_18055/*"combine_01"*/;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v33 + 32), v41, v38, v39);
  if ( *(_DWORD *)(v40 + 24) <= 1u )
    goto LABEL_34;
  v44 = StringLiteral_18056/*"combine_02"*/;
  *(_QWORD *)(v40 + 40) = StringLiteral_18056/*"combine_02"*/;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v40 + 40), v44, v42, v43);
  if ( *(_DWORD *)(v40 + 24) <= 2u )
    goto LABEL_34;
  v47 = StringLiteral_18057/*"combine_03"*/;
  *(_QWORD *)(v40 + 48) = StringLiteral_18057/*"combine_03"*/;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v40 + 48), v47, v45, v46);
  if ( *(_DWORD *)(v40 + 24) <= 3u )
    goto LABEL_34;
  v50 = StringLiteral_18058/*"combine_04"*/;
  *(_QWORD *)(v40 + 56) = StringLiteral_18058/*"combine_04"*/;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v40 + 56), v50, v48, v49);
  if ( *(_DWORD *)(v40 + 24) <= 4u )
    goto LABEL_34;
  v53 = StringLiteral_18059/*"combine_05"*/;
  *(_QWORD *)(v40 + 64) = StringLiteral_18059/*"combine_05"*/;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v40 + 64), v53, v51, v52);
  if ( *(_DWORD *)(v40 + 24) <= 5u )
    goto LABEL_34;
  v56 = StringLiteral_18060/*"combine_06"*/;
  *(_QWORD *)(v40 + 72) = StringLiteral_18060/*"combine_06"*/;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v40 + 72), v56, v54, v55);
  if ( *(_DWORD *)(v40 + 24) <= 6u )
    goto LABEL_34;
  v59 = StringLiteral_18061/*"combine_07"*/;
  *(_QWORD *)(v40 + 80) = StringLiteral_18061/*"combine_07"*/;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v40 + 80), v59, v57, v58);
  if ( *(_DWORD *)(v40 + 24) <= 7u )
    goto LABEL_34;
  v62 = StringLiteral_18062/*"combine_08"*/;
  *(_QWORD *)(v40 + 88) = StringLiteral_18062/*"combine_08"*/;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v40 + 88), v62, v60, v61);
  if ( *(_DWORD *)(v40 + 24) <= 8u )
    goto LABEL_34;
  v65 = StringLiteral_18063/*"combine_09"*/;
  *(_QWORD *)(v40 + 96) = StringLiteral_18063/*"combine_09"*/;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v40 + 96), v65, v63, v64);
  if ( *(_DWORD *)(v40 + 24) <= 9u )
    goto LABEL_34;
  v68 = StringLiteral_18064/*"combine_10"*/;
  *(_QWORD *)(v40 + 104) = StringLiteral_18064/*"combine_10"*/;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v40 + 104), v68, v66, v67);
  if ( *(_DWORD *)(v40 + 24) <= 0xAu )
    goto LABEL_34;
  v71 = StringLiteral_18065/*"combine_11"*/;
  *(_QWORD *)(v40 + 112) = StringLiteral_18065/*"combine_11"*/;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v40 + 112), v71, v69, v70);
  if ( *(_DWORD *)(v40 + 24) <= 0xBu )
    goto LABEL_34;
  v74 = StringLiteral_18066/*"combine_12"*/;
  *(_QWORD *)(v40 + 120) = StringLiteral_18066/*"combine_12"*/;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v40 + 120), v74, v72, v73);
  if ( *(_DWORD *)(v40 + 24) <= 0xCu )
    goto LABEL_34;
  v77 = StringLiteral_18067/*"combine_13"*/;
  *(_QWORD *)(v40 + 128) = StringLiteral_18067/*"combine_13"*/;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v40 + 128), v77, v75, v76);
  if ( *(_DWORD *)(v40 + 24) <= 0xDu )
    goto LABEL_34;
  v80 = StringLiteral_18068/*"combine_14"*/;
  *(_QWORD *)(v40 + 136) = StringLiteral_18068/*"combine_14"*/;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v40 + 136), v80, v78, v79);
  if ( *(_DWORD *)(v40 + 24) <= 0xEu )
    goto LABEL_34;
  v83 = StringLiteral_18069/*"combine_15"*/;
  *(_QWORD *)(v40 + 144) = StringLiteral_18069/*"combine_15"*/;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v40 + 144), v83, v81, v82);
  if ( *(_DWORD *)(v40 + 24) <= 0xFu )
    goto LABEL_34;
  v86 = StringLiteral_18070/*"combine_16"*/;
  *(_QWORD *)(v40 + 152) = StringLiteral_18070/*"combine_16"*/;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v40 + 152), v86, v84, v85);
  if ( *(_DWORD *)(v40 + 24) <= 0x10u )
    goto LABEL_34;
  v89 = StringLiteral_18071/*"combine_17"*/;
  *(_QWORD *)(v40 + 160) = StringLiteral_18071/*"combine_17"*/;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v40 + 160), v89, v87, v88);
  if ( *(_DWORD *)(v40 + 24) <= 0x11u
    || (v92 = StringLiteral_18072/*"combine_18"*/,
        *(_QWORD *)(v40 + 168) = StringLiteral_18072/*"combine_18"*/,
        sub_1B68678((ServantStatusBattleListViewItem_o *)(v40 + 168), v92, v90, v91),
        *(_DWORD *)(v40 + 24) <= 0x12u)
    || (v95 = StringLiteral_18073/*"combine_19"*/,
        *(_QWORD *)(v40 + 176) = StringLiteral_18073/*"combine_19"*/,
        sub_1B68678((ServantStatusBattleListViewItem_o *)(v40 + 176), v95, v93, v94),
        *(_DWORD *)(v40 + 24) <= 0x13u) )
  {
LABEL_34:
    sub_1B68938(v33, v34);
  }
  v98 = StringLiteral_18074/*"combine_20"*/;
  *(_QWORD *)(v40 + 184) = StringLiteral_18074/*"combine_20"*/;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v40 + 184), v98, v96, v97);
  this->fields.startAniName = (struct System_String_array *)v40;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.startAniName, v40, v99, v100);
  v33 = sub_1B6877C(string___TypeInfo, 5LL);
  if ( !v33 )
LABEL_35:
    sub_1B68930(v33, v34);
  v103 = v33;
  if ( !*(_DWORD *)(v33 + 24) )
    goto LABEL_34;
  v104 = StringLiteral_18075/*"combine_fodder01"*/;
  *(_QWORD *)(v33 + 32) = StringLiteral_18075/*"combine_fodder01"*/;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v33 + 32), v104, v101, v102);
  if ( *(_DWORD *)(v103 + 24) <= 1u )
    goto LABEL_34;
  v107 = StringLiteral_18076/*"combine_fodder012"*/;
  *(_QWORD *)(v103 + 40) = StringLiteral_18076/*"combine_fodder012"*/;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v103 + 40), v107, v105, v106);
  if ( *(_DWORD *)(v103 + 24) <= 2u )
    goto LABEL_34;
  v110 = StringLiteral_18077/*"combine_fodder013"*/;
  *(_QWORD *)(v103 + 48) = StringLiteral_18077/*"combine_fodder013"*/;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v103 + 48), v110, v108, v109);
  if ( *(_DWORD *)(v103 + 24) <= 3u )
    goto LABEL_34;
  v113 = StringLiteral_18078/*"combine_fodder014"*/;
  *(_QWORD *)(v103 + 56) = StringLiteral_18078/*"combine_fodder014"*/;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v103 + 56), v113, v111, v112);
  if ( *(_DWORD *)(v103 + 24) <= 4u )
    goto LABEL_34;
  v116 = StringLiteral_18079/*"combine_fodder015"*/;
  *(_QWORD *)(v103 + 64) = StringLiteral_18079/*"combine_fodder015"*/;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v103 + 64), v116, v114, v115);
  this->fields.itemAniName = (struct System_String_array *)v103;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.itemAniName, v103, v117, v118);
  v119 = (System_Collections_Generic_List_object__o *)sub_1B68920(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v119,
    (const MethodInfo_34BBA44 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.materialList = (struct System_Collections_Generic_List_UserServantEntity__o *)v119;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.materialList, (int32_t)v119, v120, v121);
  v122 = (System_Collections_Generic_List_int__o *)sub_1B68920(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v122,
    (const MethodInfo_349EA00 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.itemList = v122;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.itemList, (int32_t)v122, v123, v124);
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
  int32_t v13; // w3
  int32_t v14; // w2
  int32_t v15; // w3
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v17; // x8
  CommonUI_o *v18; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v20; // x21

  if ( (byte_4A0C1C6 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, data);
    sub_1B686D4(&AvalonSceneManager_TypeInfo, v5);
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B686D4(&Method_CombineEffectComponent___c__DisplayClass33_0__EndLoadBg_b__0__, v7);
    sub_1B686D4(&CombineEffectComponent___c__DisplayClass33_0_TypeInfo, v8);
    byte_4A0C1C6 = 1;
  }
  v9 = sub_1B68920(CombineEffectComponent___c__DisplayClass33_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_8;
  *(_QWORD *)(v9 + 16) = data;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)data, v12, v13);
  *(_QWORD *)(v9 + 24) = this;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v9 + 24), (int32_t)this, v14, v15);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v17 = AvalonSceneManager_TypeInfo;
  v18 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v17 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v17->static_fields->DEFAULT_FADE_TIME;
  v20 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
  System_Action___ctor(
    v20,
    (Il2CppObject *)v9,
    Method_CombineEffectComponent___c__DisplayClass33_0__EndLoadBg_b__0__,
    0LL);
  if ( !v18 )
LABEL_8:
    sub_1B68930(v10, v11);
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
  int32_t v15; // w3
  System_Collections_Generic_List_object__o *v16; // x21
  struct System_Collections_Generic_List_string__o **p_releaseAssetPath; // x20
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t kind; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v22; // x1
  __int64 *v23; // x8
  struct UnityEngine_GameObject_o *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  int32_t v27; // w2
  int32_t v28; // w3
  Il2CppObject *v29; // x20
  __int64 v30; // x8
  _QWORD *v31; // x9
  __int64 klass_low; // x10
  __int64 v33; // x8
  AssetLoader_LoadEndDataHandler_o *v34; // x21
  _QWORD *v35; // x0
  System_Reflection_MethodBase_o *v36; // x0

  if ( (byte_4A0C1C5 & 1) == 0 )
  {
    sub_1B686D4(&AssetManager_TypeInfo, method);
    sub_1B686D4(&Method_CombineEffectComponent_EndLoadBg__, v3);
    sub_1B686D4(&Method_CombineEffectComponent_InitCombineEffect__, v4);
    sub_1B686D4(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, v5);
    sub_1B686D4(&Method_System_Collections_Generic_List_string__Add__, v6);
    sub_1B686D4(&Method_System_Collections_Generic_List_string___ctor__, v7);
    sub_1B686D4(&System_Collections_Generic_List_string__TypeInfo, v8);
    sub_1B686D4(&AssetLoader_LoadEndDataHandler_TypeInfo, v9);
    sub_1B686D4(&StringLiteral_3245/*"Bg/10500"*/, v10);
    sub_1B686D4(&StringLiteral_5853/*"EffectPanel/Combine_fodder01(Clone)/Combine_bit/BG_root"*/, v11);
    sub_1B686D4(&StringLiteral_5852/*"EffectPanel/Combine_bit_prefab(Clone)/Combine_bit/BG_root"*/, v12);
    byte_4A0C1C5 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2E407F4 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  this->fields.fsm = (struct PlayMakerFSM_o *)Component_object;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.fsm, (int32_t)Component_object, v14, v15);
  v16 = (System_Collections_Generic_List_object__o *)sub_1B68920(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_34BBA44 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.releaseAssetPath = (struct System_Collections_Generic_List_string__o *)v16;
  p_releaseAssetPath = &this->fields.releaseAssetPath;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.releaseAssetPath, (int32_t)v16, v18, v19);
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
        v23 = &StringLiteral_5853/*"EffectPanel/Combine_fodder01(Clone)/Combine_bit/BG_root"*/;
        goto LABEL_11;
      }
    }
LABEL_22:
    sub_1B68930(gameObject, v22);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_22;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_22;
  v23 = &StringLiteral_5852/*"EffectPanel/Combine_bit_prefab(Clone)/Combine_bit/BG_root"*/;
LABEL_11:
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Transform__Find(
                                             (UnityEngine_Transform_o *)gameObject,
                                             (System_String_o *)*v23,
                                             0LL);
  if ( !gameObject )
    goto LABEL_22;
  v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  this->fields.bgParentObject = v24;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.bgParentObject, (int32_t)v24, v25, v26);
  gameObject = (UnityEngine_GameObject_o *)*p_releaseAssetPath;
  if ( !*p_releaseAssetPath )
    goto LABEL_22;
  v29 = (Il2CppObject *)StringLiteral_3245/*"Bg/10500"*/;
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
      *(const MethodInfo_34BC278 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
  }
  else
  {
    v33 = v30 + 8 * klass_low;
    LODWORD(gameObject[1].klass) = klass_low + 1;
    *(_QWORD *)(v33 + 32) = v29;
    sub_1B68678((ServantStatusBattleListViewItem_o *)(v33 + 32), (int32_t)v29, v27, v28);
  }
  v34 = (AssetLoader_LoadEndDataHandler_o *)sub_1B68920(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v34, (Il2CppObject *)this, Method_CombineEffectComponent_EndLoadBg__, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage((System_String_o *)v29, v34, 1, 0LL);
  v35 = Method_CombineEffectComponent_InitCombineEffect__;
  if ( (*((_BYTE *)Method_CombineEffectComponent_InitCombineEffect__ + 83) & 2) != 0 )
    v35 = (_QWORD *)sub_1B686EC(Method_CombineEffectComponent_InitCombineEffect__);
  v36 = (System_Reflection_MethodBase_o *)sub_1B686B8(v35, v35[4]);
  OverwriteAssetSoundName__PlayCommonSe(v36, 19, 0LL);
}


void __fastcall CombineEffectComponent__ReleasePrevAsset(CombineEffectComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w3
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
  ServantStatusBattleListViewItem_o *p_itemEntityList; // x19
  struct System_Collections_Generic_List_ItemEntity__o *itemEntityList; // t1
  int32_t v25; // w2
  int v26; // w9
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4A0C1D0 & 1) == 0 )
  {
    sub_1B686D4(&AssetManager_TypeInfo, method);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v4);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v5);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v6);
    sub_1B686D4(&Method_System_Collections_Generic_List_ItemEntity__Clear__, v7);
    sub_1B686D4(&Method_System_Collections_Generic_List_UserServantEntity__Clear__, v8);
    sub_1B686D4(&Method_System_Collections_Generic_List_string__Clear__, v9);
    sub_1B686D4(&Method_System_Collections_Generic_List_int__Clear__, v10);
    sub_1B686D4(&Method_System_Collections_Generic_List_string__GetEnumerator__, v11);
    byte_4A0C1D0 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  releaseAssetPath = this->fields.releaseAssetPath;
  if ( releaseAssetPath )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v27,
      (System_Collections_Generic_List_object__o *)releaseAssetPath,
      (const MethodInfo_34BCD70 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    v28 = v27;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v28,
              (const MethodInfo_323A820 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      current = v28.fields._current;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__releaseAssetStorage((System_String_o *)current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v28,
      (const MethodInfo_323A81C *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
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
    sub_1B68930(releaseAssetPath, method);
  v21 = itemList->fields._version + 1;
  itemList->fields._size = 0;
  itemList->fields._version = v21;
  itemEntityList = this->fields.itemEntityList;
  p_itemEntityList = (ServantStatusBattleListViewItem_o *)&this->fields.itemEntityList;
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
    sub_1B68678(p_itemEntityList, 0, v25, v2);
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
  int32_t v52; // w3
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
  int32_t v77; // w3
  _QWORD *v78; // x8
  int32_t *p_version; // x21
  struct System_Object_array *items; // x9
  System_Collections_Generic_List_object__Fields *p_fields; // x28
  __int64 size; // x10
  int32_t *p_size; // x24
  Il2CppClass **v84; // x0
  int32_t v85; // w2
  int32_t v86; // w3
  _QWORD *v87; // x8
  struct System_Object_array *v88; // x9
  __int64 v89; // x10
  __int64 v90; // x0
  int32_t v91; // w2
  int32_t v92; // w3
  _QWORD *v93; // x8
  struct System_Object_array *v94; // x9
  __int64 v95; // x10
  __int64 v96; // x0
  int32_t v97; // w2
  int32_t v98; // w3
  _QWORD *v99; // x8
  struct System_Object_array *v100; // x9
  __int64 v101; // x10
  __int64 v102; // x0
  int32_t v103; // w2
  int32_t v104; // w3
  _QWORD *v105; // x8
  struct System_Object_array *v106; // x9
  __int64 v107; // x10
  __int64 v108; // x0
  int32_t v109; // w2
  int32_t v110; // w3
  _QWORD *v111; // x8
  struct System_Object_array *v112; // x9
  __int64 v113; // x10
  __int64 v114; // x0
  int32_t v115; // w2
  int32_t v116; // w3
  _QWORD *v117; // x8
  struct System_Object_array *v118; // x9
  __int64 v119; // x10
  __int64 v120; // x0
  int32_t v121; // w2
  int32_t v122; // w3
  _QWORD *v123; // x8
  struct System_Object_array *v124; // x9
  __int64 v125; // x10
  __int64 v126; // x0
  int32_t v127; // w2
  int32_t v128; // w3
  _QWORD *v129; // x8
  struct System_Object_array *v130; // x9
  __int64 v131; // x10
  __int64 v132; // x0
  int32_t v133; // w2
  int32_t v134; // w3
  _QWORD *v135; // x8
  struct System_Object_array *v136; // x9
  __int64 v137; // x10
  __int64 v138; // x0
  int32_t v139; // w2
  int32_t v140; // w3
  _QWORD *v141; // x8
  struct System_Object_array *v142; // x9
  __int64 v143; // x10
  __int64 v144; // x0
  int32_t v145; // w2
  int32_t v146; // w3
  _QWORD *v147; // x8
  struct System_Object_array *v148; // x9
  __int64 v149; // x10
  __int64 v150; // x0
  int32_t v151; // w2
  int32_t v152; // w3
  _QWORD *v153; // x8
  struct System_Object_array *v154; // x9
  __int64 v155; // x10
  __int64 v156; // x0
  int32_t v157; // w2
  int32_t v158; // w3
  _QWORD *v159; // x8
  struct System_Object_array *v160; // x9
  __int64 v161; // x10
  __int64 v162; // x0
  int32_t v163; // w2
  int32_t v164; // w3
  _QWORD *v165; // x8
  struct System_Object_array *v166; // x9
  __int64 v167; // x10
  __int64 v168; // x0
  int32_t v169; // w2
  int32_t v170; // w3
  _QWORD *v171; // x8
  struct System_Object_array *v172; // x9
  __int64 v173; // x10
  __int64 v174; // x0
  int32_t v175; // w2
  int32_t v176; // w3
  _QWORD *v177; // x8
  struct System_Object_array *v178; // x9
  __int64 v179; // x10
  __int64 v180; // x0
  int32_t v181; // w2
  int32_t v182; // w3
  _QWORD *v183; // x8
  struct System_Object_array *v184; // x9
  __int64 v185; // x10
  __int64 v186; // x0
  int32_t v187; // w2
  int32_t v188; // w3
  _QWORD *v189; // x8
  struct System_Object_array *v190; // x9
  __int64 v191; // x10
  __int64 v192; // x0
  int32_t v193; // w2
  int32_t v194; // w3
  _QWORD *v195; // x8
  struct System_Object_array *v196; // x9
  __int64 v197; // x10
  __int64 v198; // x0
  int32_t v199; // w2
  int32_t v200; // w3
  Il2CppObject *v201; // x25
  Il2CppObject *v202; // x24
  Il2CppObject *v203; // x23
  Il2CppObject *v204; // x22
  Il2CppObject *v205; // x21
  System_Collections_Generic_List_object__o *v206; // x20
  int32_t v207; // w2
  int32_t v208; // w3
  struct System_Object_array *v209; // x8
  _QWORD *v210; // x9
  __int64 v211; // x10
  Il2CppClass **v212; // x0
  int32_t v213; // w2
  int32_t v214; // w3
  struct System_Object_array *v215; // x8
  _QWORD *v216; // x9
  __int64 v217; // x10
  Il2CppClass **v218; // x0
  int32_t v219; // w2
  int32_t v220; // w3
  struct System_Object_array *v221; // x8
  _QWORD *v222; // x9
  __int64 v223; // x10
  Il2CppClass **v224; // x0
  int32_t v225; // w2
  int32_t v226; // w3
  struct System_Object_array *v227; // x8
  _QWORD *v228; // x9
  __int64 v229; // x10
  Il2CppClass **v230; // x0
  int32_t v231; // w2
  int32_t v232; // w3
  struct System_Object_array *v233; // x8
  _QWORD *v234; // x9
  __int64 v235; // x10
  Il2CppClass **v236; // x0
  int32_t v237; // w2
  int32_t v238; // w3
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *v240; // x20
  int32_t CardImageLimitCount; // w21
  struct UserServantEntity_o *baseSvtEntity; // x8
  ServantLimitImageMaster_o *v243; // x22
  __int64 v244; // x23
  __int64 v245; // x24
  int32_t ServantImageLimitSealAfter; // w21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v248; // x20
  UnityEngine_Transform_o *v249; // x21
  CombineEffectComponent_o *v250; // x0
  const MethodInfo *v251; // x5
  UserServantEntity_o *v252; // x8
  System_String_o *FrameCardPrefix; // x20
  System_String_o *ExceedFrameCardPath; // x0
  int32_t v255; // w2
  int32_t v256; // w3
  Il2CppObject *v257; // x20
  __int64 v258; // x8
  _QWORD *v259; // x9
  __int64 v260; // x10
  __int64 v261; // x8
  AssetLoader_LoadEndDataHandler_o *v262; // x21
  struct System_Collections_Generic_List_UserServantEntity__o *materialList; // x8
  int32_t v264; // w9
  struct System_String_array *startAniName; // x8
  il2cpp_array_size_t v266; // w9
  System_String_o *v267; // x20
  int32_t v268; // w2
  int32_t v269; // w3
  const MethodInfo *v270; // x1
  struct System_Collections_Generic_List_ItemEntity__o *itemEntityList; // x8
  int32_t v272; // w8
  struct System_Collections_Generic_List_int__o *itemList; // x8
  struct System_String_array *itemAniName; // x9
  il2cpp_array_size_t v275; // w8
  __int64 v276; // x20
  int32_t v277; // w2
  int32_t v278; // w3
  const MethodInfo *v279; // x1
  System_String_o *nodename; // [xsp+8h] [xbp-F8h]
  Il2CppObject *v281; // [xsp+10h] [xbp-F0h]
  Il2CppObject *v282; // [xsp+18h] [xbp-E8h]
  Il2CppObject *v283; // [xsp+20h] [xbp-E0h]
  Il2CppObject *v284; // [xsp+30h] [xbp-D0h]
  Il2CppObject *v285; // [xsp+38h] [xbp-C8h]
  Il2CppObject *v286; // [xsp+40h] [xbp-C0h]
  Il2CppObject *v287; // [xsp+48h] [xbp-B8h]
  Il2CppObject *v288; // [xsp+50h] [xbp-B0h]
  Il2CppObject *v289; // [xsp+58h] [xbp-A8h]
  Il2CppObject *v290; // [xsp+60h] [xbp-A0h]
  Il2CppObject *v291; // [xsp+68h] [xbp-98h]
  Il2CppObject *v292; // [xsp+70h] [xbp-90h]
  Il2CppObject *v293; // [xsp+78h] [xbp-88h]
  Il2CppObject *v294; // [xsp+80h] [xbp-80h]
  Il2CppObject *item; // [xsp+88h] [xbp-78h]
  int32_t classCardId[2]; // [xsp+98h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v297; // 0:x0.16
  UnityEngine_Vector3_o v298; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A0C1C8 & 1) == 0 )
  {
    sub_1B686D4(&AssetManager_TypeInfo, method);
    sub_1B686D4(&Method_CombineEffectComponent_setReverseCallback__, v3);
    sub_1B686D4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v4);
    sub_1B686D4(&Method_System_Collections_Generic_List_string__Add__, v5);
    sub_1B686D4(&Method_System_Collections_Generic_List_string___ctor__, v6);
    sub_1B686D4(&Method_System_Collections_Generic_List_ItemEntity__get_Count__, v7);
    sub_1B686D4(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v8);
    sub_1B686D4(&Method_System_Collections_Generic_List_int__get_Count__, v9);
    sub_1B686D4(&System_Collections_Generic_List_string__TypeInfo, v10);
    sub_1B686D4(&AssetLoader_LoadEndDataHandler_TypeInfo, v11);
    sub_1B686D4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__, v14);
    sub_1B686D4(&StringLiteral_3157/*"BaseCardNodeName"*/, v15);
    sub_1B686D4(&StringLiteral_4361/*"CardScale"*/, v16);
    sub_1B686D4(&StringLiteral_6646/*"FifthItemNodeName"*/, v17);
    sub_1B686D4(&StringLiteral_6605/*"Feed20NodeName"*/, v18);
    sub_1B686D4(&StringLiteral_6593/*"Feed08NodeName"*/, v19);
    sub_1B686D4(&StringLiteral_6596/*"Feed11NodeName"*/, v20);
    sub_1B686D4(&StringLiteral_6600/*"Feed15NodeName"*/, v21);
    sub_1B686D4(&StringLiteral_2771/*"BACKSIDE_SVT_EQUIP_IMAGE_ID"*/, v22);
    sub_1B686D4(&StringLiteral_18055/*"combine_01"*/, v23);
    sub_1B686D4(&StringLiteral_6595/*"Feed10NodeName"*/, v24);
    sub_1B686D4(&StringLiteral_4580/*"CombineEffect"*/, v25);
    sub_1B686D4(&StringLiteral_6789/*"FourthFeedNodeName"*/, v26);
    sub_1B686D4(&StringLiteral_6597/*"Feed12NodeName"*/, v27);
    sub_1B686D4(&StringLiteral_14364/*"ThrdItemNodeName"*/, v28);
    sub_1B686D4(&StringLiteral_6645/*"FifthFeedNodeName"*/, v29);
    sub_1B686D4(&StringLiteral_12505/*"SecItemNodeName"*/, v30);
    sub_1B686D4(&StringLiteral_6601/*"Feed16NodeName"*/, v31);
    sub_1B686D4(&StringLiteral_12471/*"ScndFeedNodeName"*/, v32);
    sub_1B686D4(&StringLiteral_6828/*"FstFeedNodeName"*/, v33);
    sub_1B686D4(&StringLiteral_6592/*"Feed07NodeName"*/, v34);
    sub_1B686D4(&StringLiteral_14363/*"ThrdFeedNodeName"*/, v35);
    sub_1B686D4(&StringLiteral_6591/*"Feed06NodeName"*/, v36);
    sub_1B686D4(&StringLiteral_18080/*"combine_fodder02"*/, v37);
    sub_1B686D4(&StringLiteral_12736/*"SkillItemNodeName"*/, v38);
    sub_1B686D4(&StringLiteral_12889/*"StartAnimationName"*/, v39);
    sub_1B686D4(&StringLiteral_6603/*"Feed18NodeName"*/, v40);
    sub_1B686D4(&StringLiteral_6598/*"Feed13NodeName"*/, v41);
    sub_1B686D4(&StringLiteral_1/*""*/, v42);
    sub_1B686D4(&StringLiteral_6604/*"Feed19NodeName"*/, v43);
    sub_1B686D4(&StringLiteral_6599/*"Feed14NodeName"*/, v44);
    sub_1B686D4(&StringLiteral_6790/*"FourthItemNodeName"*/, v45);
    sub_1B686D4(&StringLiteral_6594/*"Feed09NodeName"*/, v46);
    sub_1B686D4(&StringLiteral_6602/*"Feed17NodeName"*/, v47);
    byte_4A0C1C8 = 1;
  }
  *(_QWORD *)classCardId = 0LL;
  p_fsm = &this->fields.fsm;
  fsm = (__int64)this->fields.fsm;
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmGameObject(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_4580/*"CombineEffect"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_241;
  Value = HutongGames_PlayMaker_FsmGameObject__get_Value((HutongGames_PlayMaker_FsmGameObject_o *)fsm, 0LL);
  this->fields.effect = Value;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.effect, (int32_t)Value, v51, v52);
  fsm = (__int64)this->fields.fsm;
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmFloat(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_4361/*"CardScale"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_241;
  v53 = HutongGames_PlayMaker_FsmFloat__get_Value((HutongGames_PlayMaker_FsmFloat_o *)fsm, 0LL);
  fsm = (__int64)*p_fsm;
  if ( !*p_fsm )
    goto LABEL_241;
  v54 = v53;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_3157/*"BaseCardNodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_241;
  v55 = (System_String_o *)fsm;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_6828/*"FstFeedNodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_241;
  v56 = (Il2CppObject *)fsm;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_12471/*"ScndFeedNodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_241;
  v57 = (Il2CppObject *)fsm;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_14363/*"ThrdFeedNodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_241;
  v58 = (Il2CppObject *)fsm;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_6789/*"FourthFeedNodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_241;
  v59 = (Il2CppObject *)fsm;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_6645/*"FifthFeedNodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_241;
  v60 = (Il2CppObject *)fsm;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_6591/*"Feed06NodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_241;
  v61 = (Il2CppObject *)fsm;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_6592/*"Feed07NodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_241;
  v62 = (Il2CppObject *)fsm;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_6593/*"Feed08NodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_241;
  v63 = (Il2CppObject *)fsm;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  item = v60;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_6594/*"Feed09NodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_241;
  v64 = (Il2CppObject *)fsm;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  v294 = v61;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_6595/*"Feed10NodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_241;
  v65 = (Il2CppObject *)fsm;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  v293 = v62;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_6596/*"Feed11NodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_241;
  v66 = (Il2CppObject *)fsm;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  v292 = v63;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_6597/*"Feed12NodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_241;
  v67 = (Il2CppObject *)fsm;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  v291 = v64;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_6598/*"Feed13NodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_241;
  v68 = (Il2CppObject *)fsm;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  v290 = v65;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_6599/*"Feed14NodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_241;
  v69 = (Il2CppObject *)fsm;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  v289 = v66;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_6600/*"Feed15NodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_241;
  v70 = (Il2CppObject *)fsm;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  v288 = v67;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_6601/*"Feed16NodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_241;
  v71 = (Il2CppObject *)fsm;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  v287 = v68;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_6602/*"Feed17NodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_241;
  v72 = (Il2CppObject *)fsm;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  v286 = v69;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_6603/*"Feed18NodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_241;
  v73 = (Il2CppObject *)fsm;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  v285 = v70;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_6604/*"Feed19NodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_241;
  v74 = (Il2CppObject *)fsm;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_6605/*"Feed20NodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_241;
  v284 = v71;
  v282 = v74;
  v283 = v73;
  nodename = v55;
  v281 = (Il2CppObject *)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  v75 = (System_Collections_Generic_List_object__o *)sub_1B68920(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v75,
    (const MethodInfo_34BBA44 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v75 )
    goto LABEL_241;
  v78 = Method_System_Collections_Generic_List_string__Add__;
  p_version = &v75->fields._version;
  ++v75->fields._version;
  p_fields = &v75->fields;
  items = v75->fields._items;
  p_size = &v75->fields._size;
  size = v75->fields._size;
  if ( !items )
    goto LABEL_241;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v75,
      v56,
      *(const MethodInfo_34BC278 **)(*(_QWORD *)(v78[4] + 192LL) + 112LL));
  }
  else
  {
    v84 = &items->obj.klass + size;
    *p_size = size + 1;
    v84[4] = (Il2CppClass *)v56;
    sub_1B68678((ServantStatusBattleListViewItem_o *)(v84 + 4), (int32_t)v56, v76, v77);
  }
  v87 = Method_System_Collections_Generic_List_string__Add__;
  ++*p_version;
  v88 = p_fields->_items;
  if ( !p_fields->_items )
    goto LABEL_241;
  v89 = *p_size;
  if ( (unsigned int)v89 >= v88->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v75,
      v57,
      *(const MethodInfo_34BC278 **)(*(_QWORD *)(v87[4] + 192LL) + 112LL));
  }
  else
  {
    v90 = (__int64)v88 + 8 * v89;
    *p_size = v89 + 1;
    *(_QWORD *)(v90 + 32) = v57;
    sub_1B68678((ServantStatusBattleListViewItem_o *)(v90 + 32), (int32_t)v57, v85, v86);
  }
  v93 = Method_System_Collections_Generic_List_string__Add__;
  ++*p_version;
  v94 = p_fields->_items;
  if ( !p_fields->_items )
    goto LABEL_241;
  v95 = *p_size;
  if ( (unsigned int)v95 >= v94->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v75,
      v58,
      *(const MethodInfo_34BC278 **)(*(_QWORD *)(v93[4] + 192LL) + 112LL));
  }
  else
  {
    v96 = (__int64)v94 + 8 * v95;
    *p_size = v95 + 1;
    *(_QWORD *)(v96 + 32) = v58;
    sub_1B68678((ServantStatusBattleListViewItem_o *)(v96 + 32), (int32_t)v58, v91, v92);
  }
  v99 = Method_System_Collections_Generic_List_string__Add__;
  ++*p_version;
  v100 = p_fields->_items;
  if ( !p_fields->_items )
    goto LABEL_241;
  v101 = *p_size;
  if ( (unsigned int)v101 >= v100->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v75,
      v59,
      *(const MethodInfo_34BC278 **)(*(_QWORD *)(v99[4] + 192LL) + 112LL));
  }
  else
  {
    v102 = (__int64)v100 + 8 * v101;
    *p_size = v101 + 1;
    *(_QWORD *)(v102 + 32) = v59;
    sub_1B68678((ServantStatusBattleListViewItem_o *)(v102 + 32), (int32_t)v59, v97, v98);
  }
  v105 = Method_System_Collections_Generic_List_string__Add__;
  ++*p_version;
  v106 = p_fields->_items;
  if ( !p_fields->_items )
    goto LABEL_241;
  v107 = *p_size;
  if ( (unsigned int)v107 >= v106->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v75,
      item,
      *(const MethodInfo_34BC278 **)(*(_QWORD *)(v105[4] + 192LL) + 112LL));
  }
  else
  {
    v108 = (__int64)v106 + 8 * v107;
    *p_size = v107 + 1;
    *(_QWORD *)(v108 + 32) = item;
    sub_1B68678((ServantStatusBattleListViewItem_o *)(v108 + 32), (int32_t)item, v103, v104);
  }
  v111 = Method_System_Collections_Generic_List_string__Add__;
  ++*p_version;
  v112 = p_fields->_items;
  if ( !p_fields->_items )
    goto LABEL_241;
  v113 = *p_size;
  if ( (unsigned int)v113 >= v112->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v75,
      v294,
      *(const MethodInfo_34BC278 **)(*(_QWORD *)(v111[4] + 192LL) + 112LL));
  }
  else
  {
    v114 = (__int64)v112 + 8 * v113;
    *p_size = v113 + 1;
    *(_QWORD *)(v114 + 32) = v294;
    sub_1B68678((ServantStatusBattleListViewItem_o *)(v114 + 32), (int32_t)v294, v109, v110);
  }
  v117 = Method_System_Collections_Generic_List_string__Add__;
  ++*p_version;
  v118 = p_fields->_items;
  if ( !p_fields->_items )
    goto LABEL_241;
  v119 = *p_size;
  if ( (unsigned int)v119 >= v118->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v75,
      v293,
      *(const MethodInfo_34BC278 **)(*(_QWORD *)(v117[4] + 192LL) + 112LL));
  }
  else
  {
    v120 = (__int64)v118 + 8 * v119;
    *p_size = v119 + 1;
    *(_QWORD *)(v120 + 32) = v293;
    sub_1B68678((ServantStatusBattleListViewItem_o *)(v120 + 32), (int32_t)v293, v115, v116);
  }
  v123 = Method_System_Collections_Generic_List_string__Add__;
  ++*p_version;
  v124 = p_fields->_items;
  if ( !p_fields->_items )
    goto LABEL_241;
  v125 = *p_size;
  if ( (unsigned int)v125 >= v124->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v75,
      v292,
      *(const MethodInfo_34BC278 **)(*(_QWORD *)(v123[4] + 192LL) + 112LL));
  }
  else
  {
    v126 = (__int64)v124 + 8 * v125;
    *p_size = v125 + 1;
    *(_QWORD *)(v126 + 32) = v292;
    sub_1B68678((ServantStatusBattleListViewItem_o *)(v126 + 32), (int32_t)v292, v121, v122);
  }
  v129 = Method_System_Collections_Generic_List_string__Add__;
  ++*p_version;
  v130 = p_fields->_items;
  if ( !p_fields->_items )
    goto LABEL_241;
  v131 = *p_size;
  if ( (unsigned int)v131 >= v130->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v75,
      v291,
      *(const MethodInfo_34BC278 **)(*(_QWORD *)(v129[4] + 192LL) + 112LL));
  }
  else
  {
    v132 = (__int64)v130 + 8 * v131;
    *p_size = v131 + 1;
    *(_QWORD *)(v132 + 32) = v291;
    sub_1B68678((ServantStatusBattleListViewItem_o *)(v132 + 32), (int32_t)v291, v127, v128);
  }
  v135 = Method_System_Collections_Generic_List_string__Add__;
  ++*p_version;
  v136 = p_fields->_items;
  if ( !p_fields->_items )
    goto LABEL_241;
  v137 = *p_size;
  if ( (unsigned int)v137 >= v136->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v75,
      v290,
      *(const MethodInfo_34BC278 **)(*(_QWORD *)(v135[4] + 192LL) + 112LL));
  }
  else
  {
    v138 = (__int64)v136 + 8 * v137;
    *p_size = v137 + 1;
    *(_QWORD *)(v138 + 32) = v290;
    sub_1B68678((ServantStatusBattleListViewItem_o *)(v138 + 32), (int32_t)v290, v133, v134);
  }
  v141 = Method_System_Collections_Generic_List_string__Add__;
  ++*p_version;
  v142 = p_fields->_items;
  if ( !p_fields->_items )
    goto LABEL_241;
  v143 = *p_size;
  if ( (unsigned int)v143 >= v142->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v75,
      v289,
      *(const MethodInfo_34BC278 **)(*(_QWORD *)(v141[4] + 192LL) + 112LL));
  }
  else
  {
    v144 = (__int64)v142 + 8 * v143;
    *p_size = v143 + 1;
    *(_QWORD *)(v144 + 32) = v289;
    sub_1B68678((ServantStatusBattleListViewItem_o *)(v144 + 32), (int32_t)v289, v139, v140);
  }
  v147 = Method_System_Collections_Generic_List_string__Add__;
  ++*p_version;
  v148 = p_fields->_items;
  if ( !p_fields->_items )
    goto LABEL_241;
  v149 = *p_size;
  if ( (unsigned int)v149 >= v148->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v75,
      v288,
      *(const MethodInfo_34BC278 **)(*(_QWORD *)(v147[4] + 192LL) + 112LL));
  }
  else
  {
    v150 = (__int64)v148 + 8 * v149;
    *p_size = v149 + 1;
    *(_QWORD *)(v150 + 32) = v288;
    sub_1B68678((ServantStatusBattleListViewItem_o *)(v150 + 32), (int32_t)v288, v145, v146);
  }
  v153 = Method_System_Collections_Generic_List_string__Add__;
  ++*p_version;
  v154 = p_fields->_items;
  if ( !p_fields->_items )
    goto LABEL_241;
  v155 = *p_size;
  if ( (unsigned int)v155 >= v154->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v75,
      v287,
      *(const MethodInfo_34BC278 **)(*(_QWORD *)(v153[4] + 192LL) + 112LL));
  }
  else
  {
    v156 = (__int64)v154 + 8 * v155;
    *p_size = v155 + 1;
    *(_QWORD *)(v156 + 32) = v287;
    sub_1B68678((ServantStatusBattleListViewItem_o *)(v156 + 32), (int32_t)v287, v151, v152);
  }
  v159 = Method_System_Collections_Generic_List_string__Add__;
  ++*p_version;
  v160 = p_fields->_items;
  if ( !p_fields->_items )
    goto LABEL_241;
  v161 = *p_size;
  if ( (unsigned int)v161 >= v160->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v75,
      v286,
      *(const MethodInfo_34BC278 **)(*(_QWORD *)(v159[4] + 192LL) + 112LL));
  }
  else
  {
    v162 = (__int64)v160 + 8 * v161;
    *p_size = v161 + 1;
    *(_QWORD *)(v162 + 32) = v286;
    sub_1B68678((ServantStatusBattleListViewItem_o *)(v162 + 32), (int32_t)v286, v157, v158);
  }
  v165 = Method_System_Collections_Generic_List_string__Add__;
  ++*p_version;
  v166 = p_fields->_items;
  if ( !p_fields->_items )
    goto LABEL_241;
  v167 = *p_size;
  if ( (unsigned int)v167 >= v166->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v75,
      v285,
      *(const MethodInfo_34BC278 **)(*(_QWORD *)(v165[4] + 192LL) + 112LL));
  }
  else
  {
    v168 = (__int64)v166 + 8 * v167;
    *p_size = v167 + 1;
    *(_QWORD *)(v168 + 32) = v285;
    sub_1B68678((ServantStatusBattleListViewItem_o *)(v168 + 32), (int32_t)v285, v163, v164);
  }
  v171 = Method_System_Collections_Generic_List_string__Add__;
  ++*p_version;
  v172 = p_fields->_items;
  if ( !p_fields->_items )
    goto LABEL_241;
  v173 = *p_size;
  if ( (unsigned int)v173 >= v172->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v75,
      v284,
      *(const MethodInfo_34BC278 **)(*(_QWORD *)(v171[4] + 192LL) + 112LL));
  }
  else
  {
    v174 = (__int64)v172 + 8 * v173;
    *p_size = v173 + 1;
    *(_QWORD *)(v174 + 32) = v284;
    sub_1B68678((ServantStatusBattleListViewItem_o *)(v174 + 32), (int32_t)v284, v169, v170);
  }
  v177 = Method_System_Collections_Generic_List_string__Add__;
  ++*p_version;
  v178 = p_fields->_items;
  if ( !p_fields->_items )
    goto LABEL_241;
  v179 = *p_size;
  if ( (unsigned int)v179 >= v178->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v75,
      v72,
      *(const MethodInfo_34BC278 **)(*(_QWORD *)(v177[4] + 192LL) + 112LL));
  }
  else
  {
    v180 = (__int64)v178 + 8 * v179;
    *p_size = v179 + 1;
    *(_QWORD *)(v180 + 32) = v72;
    sub_1B68678((ServantStatusBattleListViewItem_o *)(v180 + 32), (int32_t)v72, v175, v176);
  }
  v183 = Method_System_Collections_Generic_List_string__Add__;
  ++*p_version;
  v184 = p_fields->_items;
  if ( !p_fields->_items )
    goto LABEL_241;
  v185 = *p_size;
  if ( (unsigned int)v185 >= v184->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v75,
      v283,
      *(const MethodInfo_34BC278 **)(*(_QWORD *)(v183[4] + 192LL) + 112LL));
  }
  else
  {
    v186 = (__int64)v184 + 8 * v185;
    *p_size = v185 + 1;
    *(_QWORD *)(v186 + 32) = v283;
    sub_1B68678((ServantStatusBattleListViewItem_o *)(v186 + 32), (int32_t)v283, v181, v182);
  }
  v189 = Method_System_Collections_Generic_List_string__Add__;
  ++*p_version;
  v190 = p_fields->_items;
  if ( !p_fields->_items )
    goto LABEL_241;
  v191 = *p_size;
  if ( (unsigned int)v191 >= v190->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v75,
      v282,
      *(const MethodInfo_34BC278 **)(*(_QWORD *)(v189[4] + 192LL) + 112LL));
  }
  else
  {
    v192 = (__int64)v190 + 8 * v191;
    *p_size = v191 + 1;
    *(_QWORD *)(v192 + 32) = v282;
    sub_1B68678((ServantStatusBattleListViewItem_o *)(v192 + 32), (int32_t)v282, v187, v188);
  }
  v195 = Method_System_Collections_Generic_List_string__Add__;
  ++*p_version;
  v196 = p_fields->_items;
  if ( !p_fields->_items )
    goto LABEL_241;
  v197 = *p_size;
  if ( (unsigned int)v197 >= v196->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v75,
      v281,
      *(const MethodInfo_34BC278 **)(*(_QWORD *)(v195[4] + 192LL) + 112LL));
  }
  else
  {
    v198 = (__int64)v196 + 8 * v197;
    *p_size = v197 + 1;
    *(_QWORD *)(v198 + 32) = v281;
    sub_1B68678((ServantStatusBattleListViewItem_o *)(v198 + 32), (int32_t)v281, v193, v194);
  }
  this->fields.feedNameList = (struct System_Collections_Generic_List_string__o *)v75;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.feedNameList, (int32_t)v75, v199, v200);
  fsm = (__int64)this->fields.fsm;
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_12736/*"SkillItemNodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_241;
  v201 = (Il2CppObject *)fsm;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_12505/*"SecItemNodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_241;
  v202 = (Il2CppObject *)fsm;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_14364/*"ThrdItemNodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_241;
  v203 = (Il2CppObject *)fsm;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_6790/*"FourthItemNodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_241;
  v204 = (Il2CppObject *)fsm;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_6646/*"FifthItemNodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_241;
  v205 = (Il2CppObject *)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  v206 = (System_Collections_Generic_List_object__o *)sub_1B68920(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v206,
    (const MethodInfo_34BBA44 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v206 )
    goto LABEL_241;
  v209 = v206->fields._items;
  v210 = Method_System_Collections_Generic_List_string__Add__;
  ++v206->fields._version;
  if ( !v209 )
    goto LABEL_241;
  v211 = v206->fields._size;
  if ( (unsigned int)v211 >= v209->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v206,
      v201,
      *(const MethodInfo_34BC278 **)(*(_QWORD *)(v210[4] + 192LL) + 112LL));
  }
  else
  {
    v212 = &v209->obj.klass + v211;
    v206->fields._size = v211 + 1;
    v212[4] = (Il2CppClass *)v201;
    sub_1B68678((ServantStatusBattleListViewItem_o *)(v212 + 4), (int32_t)v201, v207, v208);
  }
  v215 = v206->fields._items;
  v216 = Method_System_Collections_Generic_List_string__Add__;
  ++v206->fields._version;
  if ( !v215 )
    goto LABEL_241;
  v217 = v206->fields._size;
  if ( (unsigned int)v217 >= v215->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v206,
      v202,
      *(const MethodInfo_34BC278 **)(*(_QWORD *)(v216[4] + 192LL) + 112LL));
  }
  else
  {
    v218 = &v215->obj.klass + v217;
    v206->fields._size = v217 + 1;
    v218[4] = (Il2CppClass *)v202;
    sub_1B68678((ServantStatusBattleListViewItem_o *)(v218 + 4), (int32_t)v202, v213, v214);
  }
  v221 = v206->fields._items;
  v222 = Method_System_Collections_Generic_List_string__Add__;
  ++v206->fields._version;
  if ( !v221 )
    goto LABEL_241;
  v223 = v206->fields._size;
  if ( (unsigned int)v223 >= v221->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v206,
      v203,
      *(const MethodInfo_34BC278 **)(*(_QWORD *)(v222[4] + 192LL) + 112LL));
  }
  else
  {
    v224 = &v221->obj.klass + v223;
    v206->fields._size = v223 + 1;
    v224[4] = (Il2CppClass *)v203;
    sub_1B68678((ServantStatusBattleListViewItem_o *)(v224 + 4), (int32_t)v203, v219, v220);
  }
  v227 = v206->fields._items;
  v228 = Method_System_Collections_Generic_List_string__Add__;
  ++v206->fields._version;
  if ( !v227 )
    goto LABEL_241;
  v229 = v206->fields._size;
  if ( (unsigned int)v229 >= v227->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v206,
      v204,
      *(const MethodInfo_34BC278 **)(*(_QWORD *)(v228[4] + 192LL) + 112LL));
  }
  else
  {
    v230 = &v227->obj.klass + v229;
    v206->fields._size = v229 + 1;
    v230[4] = (Il2CppClass *)v204;
    sub_1B68678((ServantStatusBattleListViewItem_o *)(v230 + 4), (int32_t)v204, v225, v226);
  }
  v233 = v206->fields._items;
  v234 = Method_System_Collections_Generic_List_string__Add__;
  ++v206->fields._version;
  if ( !v233 )
    goto LABEL_241;
  v235 = v206->fields._size;
  if ( (unsigned int)v235 >= v233->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v206,
      v205,
      *(const MethodInfo_34BC278 **)(*(_QWORD *)(v234[4] + 192LL) + 112LL));
  }
  else
  {
    v236 = &v233->obj.klass + v235;
    v206->fields._size = v235 + 1;
    v236[4] = (Il2CppClass *)v205;
    sub_1B68678((ServantStatusBattleListViewItem_o *)(v236 + 4), (int32_t)v205, v231, v232);
  }
  this->fields.feedItemNameList = (struct System_Collections_Generic_List_string__o *)v206;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.feedItemNameList, (int32_t)v206, v237, v238);
  fsm = (__int64)this->fields.effect;
  if ( !fsm )
    goto LABEL_241;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)fsm, 0LL);
  fsm = (__int64)TransformHelper__getNodeFromName(transform, nodename, 1, 0LL);
  if ( !fsm )
    goto LABEL_241;
  v240 = (UnityEngine_Component_o *)fsm;
  fsm = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)fsm, 0, 0LL);
  fsm = (__int64)this->fields.baseSvtEntity;
  if ( !fsm )
    goto LABEL_241;
  CardImageLimitCount = UserServantEntity__getCardImageLimitCount((UserServantEntity_o *)fsm, 0, 0LL);
  fsm = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)DataManager__GetMasterData_object_(
                   (DataManager_o *)fsm,
                   (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  baseSvtEntity = this->fields.baseSvtEntity;
  if ( !baseSvtEntity )
    goto LABEL_241;
  v243 = (ServantLimitImageMaster_o *)fsm;
  v245 = *(_QWORD *)&baseSvtEntity->fields.svtId.fields.currentCryptoKey;
  v244 = *(_QWORD *)&baseSvtEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v297.fields.currentCryptoKey = v245;
  *(_QWORD *)&v297.fields.fakeValue = v244;
  fsm = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v297, 0LL);
  if ( !v243 )
    goto LABEL_241;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 v243,
                                 fsm,
                                 CardImageLimitCount,
                                 0LL);
  gameObject = UnityEngine_Component__get_gameObject(v240, 0LL);
  fsm = (__int64)CharaGraphManager__CreateTexturePrefab_37653584(
                   gameObject,
                   this->fields.baseSvtEntity,
                   ServantImageLimitSealAfter,
                   10,
                   0LL,
                   0,
                   0LL);
  if ( !fsm )
    goto LABEL_241;
  v248 = (UnityEngine_Component_o *)fsm;
  fsm = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)fsm, 0LL);
  v249 = (UnityEngine_Transform_o *)fsm;
  if ( !byte_4A03901 )
  {
    fsm = sub_1B686D4(&UnityEngine_Vector3_TypeInfo, method);
    byte_4A03901 = 1;
  }
  if ( !v249 )
    goto LABEL_241;
  UnityEngine_Transform__set_localPosition(v249, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  fsm = (__int64)UnityEngine_Component__get_transform(v248, 0LL);
  if ( !fsm )
    goto LABEL_241;
  v298.fields.x = v54;
  v298.fields.y = v54;
  v298.fields.z = v54;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)fsm, v298, 0LL);
  CombineEffectComponent__getDispInfo(
    v250,
    &classCardId[1],
    classCardId,
    this->fields.baseSvtId,
    this->fields.baseSvtlimitCnt,
    v251);
  fsm = this->fields.kind == 3
      ? ConstantMaster__getValue((System_String_o *)StringLiteral_2771/*"BACKSIDE_SVT_EQUIP_IMAGE_ID"*/, 0LL)
      : (unsigned int)classCardId[0];
  v252 = this->fields.baseSvtEntity;
  this->fields.baseClassCardId = fsm;
  if ( !v252 )
    goto LABEL_241;
  if ( UserServantEntity__isExceeded(v252, 0LL) )
  {
    fsm = (__int64)this->fields.baseSvtEntity;
    if ( fsm )
    {
      FrameCardPrefix = UserServantEntity__getFrameCardPrefix((UserServantEntity_o *)fsm, 0LL);
      fsm = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
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
    sub_1B68930(fsm, method);
  }
  fsm = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  if ( !fsm )
    goto LABEL_241;
  ExceedFrameCardPath = DesignCardManager__GetDesignCardPath(
                          (DesignCardManager_o *)fsm,
                          this->fields.baseClassCardId,
                          classCardId[1],
                          0LL);
LABEL_213:
  v257 = (Il2CppObject *)ExceedFrameCardPath;
  fsm = (__int64)this->fields.releaseAssetPath;
  if ( !fsm )
    goto LABEL_241;
  v258 = *(_QWORD *)(fsm + 16);
  v259 = Method_System_Collections_Generic_List_string__Add__;
  ++*(_DWORD *)(fsm + 28);
  if ( !v258 )
    goto LABEL_241;
  v260 = *(int *)(fsm + 24);
  if ( (unsigned int)v260 >= *(_DWORD *)(v258 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)fsm,
      v257,
      *(const MethodInfo_34BC278 **)(*(_QWORD *)(v259[4] + 192LL) + 112LL));
  }
  else
  {
    v261 = v258 + 8 * v260;
    *(_DWORD *)(fsm + 24) = v260 + 1;
    *(_QWORD *)(v261 + 32) = v257;
    sub_1B68678((ServantStatusBattleListViewItem_o *)(v261 + 32), (int32_t)v257, v255, v256);
  }
  v262 = (AssetLoader_LoadEndDataHandler_o *)sub_1B68920(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v262,
    (Il2CppObject *)this,
    Method_CombineEffectComponent_setReverseCallback__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  fsm = AssetManager__loadAssetStorage((System_String_o *)v257, v262, 1, 0LL);
  switch ( this->fields.kind )
  {
    case 0:
    case 3:
      materialList = this->fields.materialList;
      if ( !materialList )
        goto LABEL_241;
      v264 = materialList->fields._size;
      startAniName = this->fields.startAniName;
      this->fields.materialCnt = v264;
      if ( !startAniName )
        goto LABEL_241;
      v266 = v264 - 1;
      if ( v266 >= startAniName->max_length )
        goto LABEL_242;
      fsm = (__int64)*p_fsm;
      if ( !*p_fsm )
        goto LABEL_241;
      v267 = startAniName->m_Items[v266];
      fsm = (__int64)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)fsm, 0LL);
      if ( !fsm )
        goto LABEL_241;
      fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                       (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                       (System_String_o *)StringLiteral_12889/*"StartAnimationName"*/,
                       0LL);
      if ( !fsm )
        goto LABEL_241;
      *(_QWORD *)(fsm + 56) = v267;
      sub_1B68678((ServantStatusBattleListViewItem_o *)(fsm + 56), (int32_t)v267, v268, v269);
      CombineEffectComponent__setServantFeed(this, v270);
      break;
    case 1:
      itemEntityList = this->fields.itemEntityList;
      if ( itemEntityList )
      {
        v272 = itemEntityList->fields._size;
        if ( v272 > 0 )
          goto LABEL_232;
      }
      itemList = this->fields.itemList;
      if ( !itemList )
        goto LABEL_241;
      v272 = itemList->fields._size;
LABEL_232:
      itemAniName = this->fields.itemAniName;
      this->fields.itemMaterialCnt = v272;
      if ( !itemAniName )
        goto LABEL_241;
      v275 = v272 - 1;
      if ( v275 >= itemAniName->max_length )
LABEL_242:
        sub_1B68938(fsm, method);
      fsm = (__int64)*p_fsm;
      if ( !*p_fsm )
        goto LABEL_241;
      v276 = (__int64)itemAniName->m_Items[v275];
LABEL_238:
      fsm = (__int64)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)fsm, 0LL);
      if ( !fsm )
        goto LABEL_241;
      fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                       (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                       (System_String_o *)StringLiteral_12889/*"StartAnimationName"*/,
                       0LL);
      if ( !fsm )
        goto LABEL_241;
      *(_QWORD *)(fsm + 56) = v276;
      sub_1B68678((ServantStatusBattleListViewItem_o *)(fsm + 56), v276, v277, v278);
      CombineEffectComponent__setItemFeed(this, v279);
      break;
    case 2:
      fsm = (__int64)*p_fsm;
      if ( !*p_fsm )
        goto LABEL_241;
      v276 = StringLiteral_18080/*"combine_fodder02"*/;
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

  if ( (byte_4A0C1C4 & 1) == 0 )
  {
    sub_1B686D4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, baseSvtData);
    byte_4A0C1C4 = 1;
  }
  this->fields.baseSvtEntity = baseSvtData;
  this->fields.kind = 2;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)&this->fields.baseSvtEntity,
    (int32_t)baseSvtData,
    (int32_t)list,
    (int32_t)method);
  if ( !baseSvtData )
    sub_1B68930(v7, v8);
  v10 = *(_QWORD *)&baseSvtData->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&baseSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v10;
  *(_QWORD *)&v15.fields.fakeValue = v9;
  this->fields.baseSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v15, 0LL);
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(baseSvtData->fields.limitCount, 0LL);
  this->fields.itemList = list;
  p_itemList = &this->fields.itemList;
  *((_DWORD *)p_itemList - 3) = v11;
  sub_1B68678((ServantStatusBattleListViewItem_o *)p_itemList, (int32_t)list, v13, v14);
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

  if ( (byte_4A0C1CB & 1) == 0 )
  {
    sub_1B686D4(&Method_UnityEngine_Component_GetComponent_UITexture___, data);
    sub_1B686D4(&Method_System_Collections_Generic_List_string__get_Item__, v5);
    sub_1B686D4(&UnityEngine_Material_TypeInfo, v6);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__, v7);
    sub_1B686D4(&StringLiteral_15064/*"Unlit/Transparent Colored"*/, v8);
    sub_1B686D4(&StringLiteral_12178/*"START_ANIMATION"*/, v9);
    sub_1B686D4(&StringLiteral_4931/*"Custom/Sprite-MasterFigure (SoftClip)"*/, v10);
    byte_4A0C1CB = 1;
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
           (const MethodInfo_34BBFA8 *)Method_System_Collections_Generic_List_string__get_Item__);
  NodeFromName = TransformHelper__getNodeFromName(v12, (System_String_o *)Item, 1, 0LL);
  effect = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
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
                       (const MethodInfo_2E407F4 *)Method_UnityEngine_Component_GetComponent_UITexture___);
  v16 = (System_String_o **)(this->fields.cardType == 6 ? &StringLiteral_4931/*"Custom/Sprite-MasterFigure (SoftClip)"*/ : &StringLiteral_15064/*"Unlit/Transparent Colored"*/);
  v17 = Component_object;
  v18 = UnityEngine_Shader__Find(*v16, 0LL);
  v19 = (UnityEngine_Material_o *)sub_1B68920(UnityEngine_Material_TypeInfo);
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
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)effect, (System_String_o *)StringLiteral_12178/*"START_ANIMATION"*/, 0LL);
      return;
    }
LABEL_16:
    sub_1B68930(effect, data);
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

  if ( (byte_4A0C1C1 & 1) == 0 )
  {
    sub_1B686D4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, baseSvtData);
    byte_4A0C1C1 = 1;
  }
  this->fields.baseSvtEntity = baseSvtData;
  this->fields.kind = combineKind;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)&this->fields.baseSvtEntity,
    (int32_t)baseSvtData,
    (int32_t)list,
    combineKind);
  if ( !baseSvtData )
    sub_1B68930(v9, v10);
  v12 = *(_QWORD *)&baseSvtData->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&baseSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v17.fields.currentCryptoKey = v12;
  *(_QWORD *)&v17.fields.fakeValue = v11;
  this->fields.baseSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v17, 0LL);
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(baseSvtData->fields.limitCount, 0LL);
  this->fields.materialList = list;
  p_materialList = &this->fields.materialList;
  *((_DWORD *)p_materialList - 1) = v13;
  sub_1B68678((ServantStatusBattleListViewItem_o *)p_materialList, (int32_t)list, v15, v16);
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
  int32_t v13; // w3
  struct System_Collections_Generic_List_int__o *itemList; // x8
  int v15; // w9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_4A0C1C2 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_List_int__Clear__, baseSvtData);
    sub_1B686D4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_4A0C1C2 = 1;
  }
  this->fields.baseSvtEntity = baseSvtData;
  this->fields.kind = 1;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)&this->fields.baseSvtEntity,
    (int32_t)baseSvtData,
    (int32_t)list,
    (int32_t)method);
  if ( !baseSvtData )
    goto LABEL_8;
  v11 = *(_QWORD *)&baseSvtData->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&baseSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v16.fields.currentCryptoKey = v11;
  *(_QWORD *)&v16.fields.fakeValue = v10;
  this->fields.baseSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v16, 0LL);
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(baseSvtData->fields.limitCount, 0LL);
  itemList = this->fields.itemList;
  this->fields.baseSvtlimitCnt = v8;
  if ( !itemList )
LABEL_8:
    sub_1B68930(v8, v9);
  v15 = itemList->fields._version + 1;
  itemList->fields._size = 0;
  itemList->fields._version = v15;
  this->fields.itemEntityList = list;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.itemEntityList, (int32_t)list, v12, v13);
}


void __fastcall CombineEffectComponent__SetSkillCombineInfo_44328696(
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

  if ( (byte_4A0C1C3 & 1) == 0 )
  {
    sub_1B686D4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, baseSvtData);
    byte_4A0C1C3 = 1;
  }
  this->fields.baseSvtEntity = baseSvtData;
  this->fields.kind = 1;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)&this->fields.baseSvtEntity,
    (int32_t)baseSvtData,
    (int32_t)list,
    (int32_t)method);
  if ( !baseSvtData )
    sub_1B68930(v7, v8);
  v10 = *(_QWORD *)&baseSvtData->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&baseSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v10;
  *(_QWORD *)&v15.fields.fakeValue = v9;
  this->fields.baseSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v15, 0LL);
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(baseSvtData->fields.limitCount, 0LL);
  this->fields.itemList = list;
  p_itemList = &this->fields.itemList;
  *((_DWORD *)p_itemList - 3) = v11;
  sub_1B68678((ServantStatusBattleListViewItem_o *)p_itemList, (int32_t)list, v13, v14);
}


void __fastcall CombineEffectComponent__Start(CombineEffectComponent_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall CombineEffectComponent___endAnimation_b__42_0(CombineEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct UnityEngine_GameObject_o **p_effect; // x20
  UnityEngine_Object_o *effect; // x21
  __int64 v6; // x1
  UnityEngine_Object_o *v7; // x21
  int32_t v8; // w2
  int32_t v9; // w3
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4A0C1D3 & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, method);
    sub_1B686D4(&StringLiteral_5450/*"END_FADE"*/, v3);
    byte_4A0C1D3 = 1;
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
    UnityEngine_Object__DestroyImmediate_69172004(v7, 0LL);
    *p_effect = 0LL;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.effect, 0, v8, v9);
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1B68930(0LL, v6);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5450/*"END_FADE"*/, 0LL);
}


void __fastcall CombineEffectComponent___fadeIn_b__34_0(CombineEffectComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4A0C1D2 & 1) == 0 )
  {
    sub_1B686D4(&StringLiteral_5450/*"END_FADE"*/, method);
    byte_4A0C1D2 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1B68930(0LL, method);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5450/*"END_FADE"*/, 0LL);
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

  if ( (byte_4A0C1CF & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, method);
    sub_1B686D4(&AvalonSceneManager_TypeInfo, v3);
    sub_1B686D4(&Method_CombineEffectComponent__endAnimation_b__42_0__, v4);
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4A0C1CF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = AvalonSceneManager_TypeInfo;
  v8 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v7 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v7->static_fields->DEFAULT_FADE_TIME;
  v10 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_CombineEffectComponent__endAnimation_b__42_0__, 0LL);
  if ( !v8 )
    sub_1B68930(v11, v12);
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

  if ( (byte_4A0C1C7 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, method);
    sub_1B686D4(&AvalonSceneManager_TypeInfo, v3);
    sub_1B686D4(&Method_CombineEffectComponent__fadeIn_b__34_0__, v4);
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4A0C1C7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = AvalonSceneManager_TypeInfo;
  v8 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v7 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v7->static_fields->DEFAULT_FADE_TIME;
  v10 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_CombineEffectComponent__fadeIn_b__34_0__, 0LL);
  if ( !v8 )
    sub_1B68930(v11, v12);
  CommonUI__maskFadein(v8, DEFAULT_FADE_TIME, v10, 0LL);
}


void __fastcall CombineEffectComponent__getCardBackImg(
        CombineEffectComponent_o *this,
        int32_t *rarity,
        int32_t *backCardImgId,
        int32_t svtId,
        int32_t svtLimitCnt,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  void *Instance; // x0
  __int64 v17; // x1
  Il2CppObject *Entity; // x24
  int32_t klass_high; // w8
  System_String_o **v20; // x8

  if ( (byte_4A0C1CE & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMasterData_ServantLimitMaster___, rarity);
    sub_1B686D4(&Method_DataManager_GetMasterData_ServantMaster___, v11);
    sub_1B686D4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_1B686D4(&StringLiteral_2771/*"BACKSIDE_SVT_EQUIP_IMAGE_ID"*/, v14);
    sub_1B686D4(&StringLiteral_2772/*"BACKSIDE_SVT_IMAGE_ID"*/, v15);
    byte_4A0C1CE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_ServantMaster___)) == 0LL
    || (Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   svtId,
                   (const MethodInfo_30E44C0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_ServantLimitMaster___)) == 0LL
    || (Instance = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)Instance, svtId, svtLimitCnt, 0LL)) == 0LL
    || (*rarity = *((_DWORD *)Instance + 6), !Entity) )
  {
    sub_1B68930(Instance, v17);
  }
  klass_high = HIDWORD(Entity[5].klass);
  this->fields.cardType = klass_high;
  if ( klass_high == 6 )
    v20 = (System_String_o **)&StringLiteral_2771/*"BACKSIDE_SVT_EQUIP_IMAGE_ID"*/;
  else
    v20 = (System_String_o **)&StringLiteral_2772/*"BACKSIDE_SVT_IMAGE_ID"*/;
  *backCardImgId = ConstantMaster__getValue(*v20, 0LL);
}


void __fastcall CombineEffectComponent__getDispInfo(
        CombineEffectComponent_o *this,
        int32_t *rarity,
        int32_t *classCardId,
        int32_t svtId,
        int32_t svtLimitCnt,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  Il2CppObject *Instance; // x0
  __int64 v16; // x1
  ServantEntity_o *Entity; // x23
  ServantLimitEntity_o *v18; // x21
  Il2CppObject *v19; // x22

  if ( (byte_4A0C1CD & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMasterData_ServantClassMaster___, rarity);
    sub_1B686D4(&Method_DataManager_GetMasterData_ServantLimitMaster___, v10);
    sub_1B686D4(&Method_DataManager_GetMasterData_ServantMaster___, v11);
    sub_1B686D4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_1B686D4(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v13);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_4A0C1CD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_15;
  Entity = (ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                svtId,
                                (const MethodInfo_30E44C0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !Instance )
    goto LABEL_15;
  v18 = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)Instance, svtId, svtLimitCnt, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Entity || !Instance )
    goto LABEL_15;
  v19 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          Entity->fields.classId,
          (const MethodInfo_30E44C0 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  Instance = (Il2CppObject *)ServantEntity__GetOverwriteClassImageId(Entity, 0LL);
  if ( !(_DWORD)Instance )
  {
    if ( !v19 )
      goto LABEL_15;
    Instance = (Il2CppObject *)LODWORD(v19[2].monitor);
  }
  *classCardId = (int)Instance;
  if ( !v18 )
LABEL_15:
    sub_1B68930(Instance, v16);
  *rarity = v18->fields.rarity;
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
  int32_t v18; // w3
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
  int32_t v29; // w3
  Il2CppObject *Component_object; // x23

  if ( (byte_4A0C1CC & 1) == 0 )
  {
    sub_1B686D4(&AtlasManager_TypeInfo, method);
    sub_1B686D4(&Method_UnityEngine_Component_GetComponent_UISprite___, v3);
    sub_1B686D4(&Method_System_Collections_Generic_List_ItemEntity__get_Count__, v4);
    sub_1B686D4(&Method_System_Collections_Generic_List_int__get_Count__, v5);
    sub_1B686D4(&Method_System_Collections_Generic_List_string__get_Item__, v6);
    sub_1B686D4(&Method_System_Collections_Generic_List_ItemEntity__get_Item__, v7);
    sub_1B686D4(&Method_System_Collections_Generic_List_int__get_Item__, v8);
    sub_1B686D4(&StringLiteral_12178/*"START_ANIMATION"*/, v9);
    byte_4A0C1CC = 1;
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
                                                                      (const MethodInfo_34BBFA8 *)Method_System_Collections_Generic_List_ItemEntity__get_Item__);
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
               (const MethodInfo_34BBFA8 *)Method_System_Collections_Generic_List_string__get_Item__);
      NodeFromName = TransformHelper__getNodeFromName(v14, (System_String_o *)Item, 1, 0LL);
      *p_itemNode = NodeFromName;
      sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.itemNode, (int32_t)NodeFromName, v17, v18);
      itemEntityList = (System_Collections_Generic_List_object__o *)*p_itemNode;
      if ( !*p_itemNode )
        goto LABEL_30;
      itemEntityList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__GetComponent_object_(
                                                                      (UnityEngine_Component_o *)itemEntityList,
                                                                      (const MethodInfo_2E407F4 *)Method_UnityEngine_Component_GetComponent_UISprite___);
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
                                                                    (const MethodInfo_349EF64 *)Method_System_Collections_Generic_List_int__get_Item__);
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
                (const MethodInfo_34BBFA8 *)Method_System_Collections_Generic_List_string__get_Item__);
        v27 = TransformHelper__getNodeFromName(v25, (System_String_o *)v26, 1, 0LL);
        *v23 = v27;
        sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.itemNode, (int32_t)v27, v28, v29);
        itemEntityList = (System_Collections_Generic_List_object__o *)*v23;
        if ( *v23 )
        {
          Component_object = UnityEngine_Component__GetComponent_object_(
                               (UnityEngine_Component_o *)itemEntityList,
                               (const MethodInfo_2E407F4 *)Method_UnityEngine_Component_GetComponent_UISprite___);
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
    sub_1B68930(itemEntityList, method);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)itemEntityList, (System_String_o *)StringLiteral_12178/*"START_ANIMATION"*/, 0LL);
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

  if ( (byte_4A0C1C9 & 1) == 0 )
  {
    sub_1B686D4(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__, data);
    sub_1B686D4(&StringLiteral_11322/*"ReverseCardNodeName"*/, v5);
    byte_4A0C1C9 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm
    || (fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(fsm, 0LL)) == 0LL
    || (fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                  (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                                  (System_String_o *)StringLiteral_11322/*"ReverseCardNodeName"*/,
                                  0LL)) == 0LL
    || (Value = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL),
        fsm = (PlayMakerFSM_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__),
        !this->fields.effect)
    || (v8 = (DesignCardManager_o *)fsm,
        transform = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL),
        fsm = (PlayMakerFSM_o *)TransformHelper__getNodeFromName(transform, Value, 1, 0LL),
        !v8) )
  {
    sub_1B68930(fsm, data);
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
  void *materialList; // x0
  __int64 v11; // x20
  __int64 v12; // x21
  int32_t v13; // w20
  int32_t v14; // w21
  bool isExceeded; // w22
  const MethodInfo *v16; // x5
  int32_t v17; // w20
  System_String_o *FrameCardPrefix; // x20
  System_String_o *ExceedFrameCardPath; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  Il2CppObject *v22; // x20
  __int64 v23; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  __int64 v26; // x8
  AssetLoader_LoadEndDataHandler_o *v27; // x21
  int32_t backCardImgId[2]; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16

  if ( (byte_4A0C1CA & 1) == 0 )
  {
    sub_1B686D4(&AssetManager_TypeInfo, method);
    sub_1B686D4(&Method_CombineEffectComponent_SetFeedCallback__, v3);
    sub_1B686D4(&Method_System_Collections_Generic_List_string__Add__, v4);
    sub_1B686D4(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__, v5);
    sub_1B686D4(&AssetLoader_LoadEndDataHandler_TypeInfo, v6);
    sub_1B686D4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__, v8);
    sub_1B686D4(&StringLiteral_1/*""*/, v9);
    byte_4A0C1CA = 1;
  }
  *(_QWORD *)backCardImgId = 0LL;
  materialList = this->fields.materialList;
  if ( !materialList )
    goto LABEL_26;
  materialList = System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)materialList,
                   this->fields.cntIndex,
                   (const MethodInfo_34BBFA8 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
  if ( !materialList )
    goto LABEL_26;
  v12 = *((_QWORD *)materialList + 10);
  v11 = *((_QWORD *)materialList + 11);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v29.fields.currentCryptoKey = v12;
  *(_QWORD *)&v29.fields.fakeValue = v11;
  materialList = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v29, 0LL);
  if ( !this->fields.materialList )
    goto LABEL_26;
  v13 = (int)materialList;
  materialList = System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)this->fields.materialList,
                   this->fields.cntIndex,
                   (const MethodInfo_34BBFA8 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
  if ( !materialList )
    goto LABEL_26;
  materialList = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(
                           *((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)materialList + 6),
                           0LL);
  if ( !this->fields.materialList )
    goto LABEL_26;
  v14 = (int)materialList;
  materialList = System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)this->fields.materialList,
                   this->fields.cntIndex,
                   (const MethodInfo_34BBFA8 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
  if ( !materialList )
    goto LABEL_26;
  isExceeded = UserServantEntity__isExceeded((UserServantEntity_o *)materialList, 0LL);
  CombineEffectComponent__getCardBackImg(this, &backCardImgId[1], backCardImgId, v13, v14, v16);
  v17 = backCardImgId[0];
  this->fields.feedClassCardId = backCardImgId[0];
  if ( isExceeded )
  {
    materialList = this->fields.materialList;
    if ( materialList )
    {
      materialList = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)materialList,
                       this->fields.cntIndex,
                       (const MethodInfo_34BBFA8 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
      if ( materialList )
      {
        FrameCardPrefix = UserServantEntity__getFrameCardPrefix((UserServantEntity_o *)materialList, 0LL);
        materialList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
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
    sub_1B68930(materialList, method);
  }
  materialList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  if ( !materialList )
    goto LABEL_26;
  ExceedFrameCardPath = DesignCardManager__GetDesignCardPath(
                          (DesignCardManager_o *)materialList,
                          v17,
                          backCardImgId[1],
                          0LL);
LABEL_18:
  v22 = (Il2CppObject *)ExceedFrameCardPath;
  materialList = this->fields.releaseAssetPath;
  if ( !materialList )
    goto LABEL_26;
  v23 = *((_QWORD *)materialList + 2);
  v24 = Method_System_Collections_Generic_List_string__Add__;
  ++*((_DWORD *)materialList + 7);
  if ( !v23 )
    goto LABEL_26;
  v25 = *((int *)materialList + 6);
  if ( (unsigned int)v25 >= *(_DWORD *)(v23 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)materialList,
      v22,
      *(const MethodInfo_34BC278 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
  }
  else
  {
    v26 = v23 + 8 * v25;
    *((_DWORD *)materialList + 6) = v25 + 1;
    *(_QWORD *)(v26 + 32) = v22;
    sub_1B68678((ServantStatusBattleListViewItem_o *)(v26 + 32), (int32_t)v22, v20, v21);
  }
  v27 = (AssetLoader_LoadEndDataHandler_o *)sub_1B68920(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v27, (Il2CppObject *)this, Method_CombineEffectComponent_SetFeedCallback__, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage((System_String_o *)v22, v27, 1, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  AssetData_o *data; // x0
  Il2CppObject *Object_object__48415484; // x20
  UnityEngine_GameObject_o *v9; // x20
  struct CombineEffectComponent_o *_4__this; // x8
  UnityEngine_Transform_o *v11; // x21
  UnityEngine_Transform_o *v12; // x21
  UnityEngine_Transform_o *v13; // x21
  UnityEngine_Transform_o *v14; // x20
  struct CombineEffectComponent_o *v15; // x8

  if ( (byte_4A0C1D4 & 1) == 0 )
  {
    sub_1B686D4(&Method_AssetData_GetObject_GameObject____75755192, method);
    sub_1B686D4(&Method_UnityEngine_Object_Instantiate_GameObject___, v3);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v4);
    sub_1B686D4(&StringLiteral_5450/*"END_FADE"*/, v5);
    sub_1B686D4(&StringLiteral_17099/*"bg"*/, v6);
    byte_4A0C1D4 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_22;
  Object_object__48415484 = AssetData__GetObject_object__48415484(
                              data,
                              (System_String_o *)StringLiteral_17099/*"bg"*/,
                              (const MethodInfo_2E2C2FC *)Method_AssetData_GetObject_GameObject____75755192);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  data = (AssetData_o *)UnityEngine_Object__Instantiate_object_(
                          Object_object__48415484,
                          (const MethodInfo_2ECC718 *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
  if ( !byte_4A03907 )
  {
    data = (AssetData_o *)sub_1B686D4(&UnityEngine_Quaternion_TypeInfo, method);
    byte_4A03907 = 1;
  }
  if ( !v12 )
    goto LABEL_22;
  UnityEngine_Transform__set_localRotation(v12, UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion, 0LL);
  data = (AssetData_o *)UnityEngine_GameObject__get_transform(v9, 0LL);
  v13 = (UnityEngine_Transform_o *)data;
  if ( !byte_4A03901 )
  {
    data = (AssetData_o *)sub_1B686D4(&UnityEngine_Vector3_TypeInfo, method);
    byte_4A03901 = 1;
  }
  if ( !v13 )
    goto LABEL_22;
  UnityEngine_Transform__set_localPosition(v13, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  data = (AssetData_o *)UnityEngine_GameObject__get_transform(v9, 0LL);
  v14 = (UnityEngine_Transform_o *)data;
  if ( !byte_4A03906 )
  {
    data = (AssetData_o *)sub_1B686D4(&UnityEngine_Vector3_TypeInfo, method);
    byte_4A03906 = 1;
  }
  if ( !v14
    || (UnityEngine_Transform__set_localScale(v14, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL),
        (v15 = this->fields.__4__this) == 0LL)
    || (data = (AssetData_o *)v15->fields.fsm) == 0LL )
  {
LABEL_22:
    sub_1B68930(data, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)data, (System_String_o *)StringLiteral_5450/*"END_FADE"*/, 0LL);
}