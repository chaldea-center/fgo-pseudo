void __fastcall CombineCommandCodeListViewManager___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  System_String_o *v10; // x0
  System_String_o *v11; // x19
  ListViewSort_o *v12; // x20
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  int v20; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42E8D9B & 1) == 0 )
  {
    sub_B5D5C4(&CombineCommandCodeListViewManager_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&ListViewSort_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&StringLiteral_4224/*"CombineCommandCode"*/, v7, v8, v9);
    byte_42E8D9B = 1;
  }
  v20 = 1;
  v10 = System_Int32__ToString((int32_t)&v20, 0LL);
  v11 = System_String__Concat_44577788((System_String_o *)StringLiteral_4224/*"CombineCommandCode"*/, v10, 0LL);
  v12 = (ListViewSort_o *)sub_B5D694(ListViewSort_TypeInfo);
  ListViewSort___ctor_34028932(v12, v11, 2, 0, 0LL);
  static_fields = (BattleServantConfConponent_o *)CombineCommandCodeListViewManager_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v12;
  sub_B5D560(static_fields, (System_Int32_array **)v12, v14, v15, v16, v17, v18, v19);
}


void __fastcall CombineCommandCodeListViewManager___ctor(
        CombineCommandCodeListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineCommandCodeListViewManager__CreateList(
        CombineCommandCodeListViewManager_o *this,
        int32_t baseSvtId,
        int64_t beforeSelectedUserCommandCodeId,
        int64_t nowEquipedUserCommandCodeId,
        int32_t modeKind,
        int32_t commandCardType,
        const MethodInfo *method)
{
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  int64_t bgTxtSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  CombineCommandCodeListViewManager_c *v85; // x0
  struct ListViewSort_o **p_commandCodeSortInfo; // x8
  struct ListViewSort_o *v87; // x1
  struct ListViewSort_o **p_sort; // x26
  const MethodInfo *v89; // x2
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  BalanceConfig_c *v96; // x8
  struct BalanceConfig_StaticFields *static_fields; // x10
  unsigned int iconScaleKind; // w8
  int CommandCodeFrameMax; // w24
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  UISprite_o *scaleChangeButtonSprite; // x20
  UserServantCommandCodeMaster_o *v102; // x27
  int64_t v103; // x9
  __int64 v104; // x19
  System_Collections_Generic_List_long__o *v105; // x28
  unsigned int v106; // w19
  int v107; // w20
  __int64 v108; // x23
  __int128 v109; // q1
  __int128 v110; // q1
  int v111; // w27
  int64_t v112; // x8
  System_Collections_Generic_Dictionary_long__long__o *v113; // x25
  __int64 v114; // x23
  __int64 v115; // x27
  __int128 v116; // q1
  _OWORD *v117; // x19
  bool v118; // w0
  __int128 v119; // q0
  bool v120; // w28
  int64_t v121; // x0
  __int128 v122; // q1
  int64_t v123; // x0
  int32_t Item; // w21
  __int128 v125; // q1
  int64_t v126; // x20
  bool v127; // w22
  CombineCommandCodeListViewItem_o *v128; // x20
  const MethodInfo *v129; // x7
  __int128 v130; // q1
  const MethodInfo *v131; // x2
  UILabel_o *emptyMessageLabel; // x20
  __int64 *v133; // x8
  UILabel_o *commandCodeInfoLabel; // x20
  System_String_o *v135; // x21
  Il2CppObject *v136; // x22
  Il2CppObject *v137; // x0
  const MethodInfo *v138; // x2
  const MethodInfo *v139; // x1
  __int64 v140; // x0
  int32_t v141; // [xsp+10h] [xbp-1A0h]
  int32_t v142; // [xsp+14h] [xbp-19Ch]
  bool v143; // [xsp+20h] [xbp-190h]
  CombineCommandCodeListViewManager_o *v146; // [xsp+30h] [xbp-180h]
  int v147; // [xsp+38h] [xbp-178h]
  int64_t v148; // [xsp+40h] [xbp-170h]
  int v149; // [xsp+4Ch] [xbp-164h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v150; // [xsp+50h] [xbp-160h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v151; // [xsp+70h] [xbp-140h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v152; // [xsp+90h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v153; // [xsp+B0h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v154; // [xsp+D0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v155; // [xsp+F0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v156; // [xsp+110h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v157; // [xsp+130h] [xbp-80h] BYREF

  if ( (byte_42E8D7F & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, baseSvtId, beforeSelectedUserCommandCodeId, nowEquipedUserCommandCodeId);
    sub_B5D5C4(&CombineCommandCodeListViewItem_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&CombineCommandCodeListViewManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v17, v18, v19);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserServantCommandCodeMaster___, v20, v21, v22);
    sub_B5D5C4(&DataManager_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_long__long__ContainsKey__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_long__long__get_Item__, v29, v30, v31);
    sub_B5D5C4(&int_TypeInfo, v32, v33, v34);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v35, v36, v37);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__Contains__, v38, v39, v40);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v41, v42, v43);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v44, v45, v46);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v47, v48, v49);
    sub_B5D5C4(&StringLiteral_19674/*"img_bg_arts"*/, v50, v51, v52);
    sub_B5D5C4(&StringLiteral_3292/*"COMMAND_CODE_EMPTY"*/, v53, v54, v55);
    sub_B5D5C4(&StringLiteral_19676/*"img_bg_buster"*/, v56, v57, v58);
    sub_B5D5C4(&StringLiteral_19685/*"img_bg_quick"*/, v59, v60, v61);
    sub_B5D5C4(&StringLiteral_12617/*"SUM_INFO"*/, v62, v63, v64);
    byte_42E8D7F = 1;
  }
  bgTxtSprite = (int64_t)this->fields.bgTxtSprite;
  if ( !bgTxtSprite )
    goto LABEL_101;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgTxtSprite, 0LL);
  bgTxtSprite = BgTxtManager__IsActiveBgTxt(0LL);
  if ( !gameObject )
    goto LABEL_101;
  UnityEngine_GameObject__SetActive(gameObject, bgTxtSprite & 1, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  this->fields.selectShowStatusUserCmdCode = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.selectShowStatusUserCmdCode,
    0LL,
    v67,
    v68,
    v69,
    v70,
    v71,
    v72);
  this->fields.selectItem = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.selectItem, 0LL, v73, v74, v75, v76, v77, v78);
  this->fields.nowEquipedUserCommandCodeId = nowEquipedUserCommandCodeId;
  v85 = CombineCommandCodeListViewManager_TypeInfo;
  if ( (BYTE3(CombineCommandCodeListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineCommandCodeListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineCommandCodeListViewManager_TypeInfo);
    v85 = CombineCommandCodeListViewManager_TypeInfo;
  }
  p_commandCodeSortInfo = &v85->static_fields->commandCodeSortInfo;
  v87 = *p_commandCodeSortInfo;
  this->fields.sort = *p_commandCodeSortInfo;
  p_sort = &this->fields.sort;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.sort,
    (System_Int32_array **)v87,
    v79,
    v80,
    v81,
    v82,
    v83,
    v84);
  if ( !this->fields.sort )
    goto LABEL_101;
  this->fields.sort->fields.listViewKind = 3;
  bgTxtSprite = (int64_t)*p_sort;
  if ( !*p_sort )
    goto LABEL_101;
  ListViewSort__Load((ListViewSort_o *)bgTxtSprite, 0LL);
  CombineCommandCodeListViewManager__SetSelectedCommandCodeData(this, 0LL, v89);
  bgTxtSprite = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !bgTxtSprite )
    goto LABEL_101;
  bgTxtSprite = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                           (DataManager_o *)bgTxtSprite,
                           (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !bgTxtSprite )
    goto LABEL_101;
  bgTxtSprite = (int64_t)UserCommandCodeMaster__getList((UserCommandCodeMaster_o *)bgTxtSprite, 0LL);
  v148 = bgTxtSprite;
  v96 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v96 = BalanceConfig_TypeInfo;
  }
  if ( !*p_sort )
    goto LABEL_101;
  static_fields = v96->static_fields;
  iconScaleKind = (*p_sort)->fields.iconScaleKind;
  CommandCodeFrameMax = static_fields->CommandCodeFrameMax;
  this->fields.scaleType = iconScaleKind;
  if ( iconScaleKind < 2 )
  {
    normalSizeSeed = this->fields.normalSizeSeed;
    goto LABEL_22;
  }
  if ( iconScaleKind == 2 )
  {
    normalSizeSeed = this->fields.smallSizeSeed;
    goto LABEL_22;
  }
  if ( iconScaleKind == 3 )
  {
    normalSizeSeed = this->fields.extremelySmallSizeSeed;
LABEL_22:
    this->fields.seed = normalSizeSeed;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.seed,
      (System_Int32_array **)normalSizeSeed,
      v90,
      v91,
      v92,
      v93,
      v94,
      v95);
  }
  bgTxtSprite = (int64_t)this->fields.sort;
  if ( !bgTxtSprite )
    goto LABEL_101;
  scaleChangeButtonSprite = this->fields.scaleChangeButtonSprite;
  bgTxtSprite = (int64_t)ListViewSort__GetScaleKindSpriteName(
                           (ListViewSort_o *)bgTxtSprite,
                           this->fields.scaleType,
                           0LL);
  if ( !scaleChangeButtonSprite )
    goto LABEL_101;
  UISprite__set_spriteName(scaleChangeButtonSprite, (System_String_o *)bgTxtSprite, 0LL);
  v146 = this;
  if ( v148 && *(_QWORD *)(v148 + 24) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    bgTxtSprite = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserServantCommandCodeMaster___);
    if ( bgTxtSprite )
    {
      v102 = (UserServantCommandCodeMaster_o *)bgTxtSprite;
      v141 = commandCardType;
      v142 = modeKind;
      bgTxtSprite = (int64_t)UserServantCommandCodeMaster__GetEquipedCommandCodeList(
                               (UserServantCommandCodeMaster_o *)bgTxtSprite,
                               0LL);
      v103 = v148;
      v143 = 0;
      v104 = *(_QWORD *)(v148 + 24);
      v147 = v104;
      if ( CommandCodeFrameMax <= (int)v104 && (int)v104 >= 1 )
      {
        v105 = (System_Collections_Generic_List_long__o *)bgTxtSprite;
        v106 = 0;
        v107 = 0;
        while ( 1 )
        {
          v108 = *(_QWORD *)(v103 + 8LL * (int)v106 + 32);
          if ( !v108 )
            goto LABEL_101;
          v109 = *(_OWORD *)(v108 + 32);
          *(_OWORD *)&v157.fields.currentCryptoKey = *(_OWORD *)(v108 + 16);
          *(_OWORD *)&v157.fields.fakeValue = v109;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v156 = v157;
          bgTxtSprite = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v156, 0LL);
          if ( bgTxtSprite == nowEquipedUserCommandCodeId )
            goto LABEL_46;
          v110 = *(_OWORD *)(v108 + 32);
          *(_OWORD *)&v157.fields.currentCryptoKey = *(_OWORD *)(v108 + 16);
          *(_OWORD *)&v157.fields.fakeValue = v110;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v155 = v157;
          bgTxtSprite = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v155, 0LL);
          if ( !v105 )
            goto LABEL_101;
          bgTxtSprite = System_Collections_Generic_List_long___Contains(
                          v105,
                          bgTxtSprite,
                          (const MethodInfo_3047BDC *)Method_System_Collections_Generic_List_long__Contains__);
          if ( (bgTxtSprite & 1) == 0 )
          {
LABEL_46:
            v103 = v148;
          }
          else
          {
            v103 = v148;
            if ( ++v107 >= CommandCodeFrameMax )
            {
              v143 = 1;
              goto LABEL_53;
            }
          }
          if ( (int)++v106 >= v147 )
            break;
          if ( v106 >= *(_DWORD *)(v103 + 24) )
            goto LABEL_102;
        }
        v143 = 0;
LABEL_53:
        LODWORD(v104) = v147;
      }
      bgTxtSprite = (int64_t)UserServantCommandCodeMaster__GetEquippedCommandCodeDic(v102, 0LL);
      v112 = v148;
      v111 = v104;
      if ( (int)v104 >= 1 )
      {
        v113 = (System_Collections_Generic_Dictionary_long__long__o *)bgTxtSprite;
        v114 = 0LL;
        while ( (unsigned int)v114 < *(_DWORD *)(v112 + 24) )
        {
          v115 = *(_QWORD *)(v148 + 32 + 8 * v114);
          if ( !v115 )
            goto LABEL_101;
          v116 = *(_OWORD *)(v115 + 32);
          *(_OWORD *)&v157.fields.currentCryptoKey = *(_OWORD *)(v115 + 16);
          *(_OWORD *)&v157.fields.fakeValue = v116;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v154 = v157;
          bgTxtSprite = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v154, 0LL);
          if ( !v113 )
            goto LABEL_101;
          v117 = (_OWORD *)(v115 + 16);
          v118 = System_Collections_Generic_Dictionary_long__long___ContainsKey(
                   v113,
                   bgTxtSprite,
                   (const MethodInfo_2F58E08 *)Method_System_Collections_Generic_Dictionary_long__long__ContainsKey__);
          v119 = *(_OWORD *)(v115 + 32);
          v120 = v118;
          *(_OWORD *)&v153.fields.currentCryptoKey = *(_OWORD *)(v115 + 16);
          *(_OWORD *)&v153.fields.fakeValue = v119;
          v121 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v153, 0LL);
          if ( System_Collections_Generic_Dictionary_long__long___ContainsKey(
                 v113,
                 v121,
                 (const MethodInfo_2F58E08 *)Method_System_Collections_Generic_Dictionary_long__long__ContainsKey__) )
          {
            v122 = *(_OWORD *)(v115 + 32);
            *(_OWORD *)&v157.fields.currentCryptoKey = *v117;
            *(_OWORD *)&v157.fields.fakeValue = v122;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            v152 = v157;
            v123 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v152, 0LL);
            Item = System_Collections_Generic_Dictionary_long__long___get_Item(
                     v113,
                     v123,
                     (const MethodInfo_2F58AD0 *)Method_System_Collections_Generic_Dictionary_long__long__get_Item__);
          }
          else
          {
            Item = 0;
          }
          v125 = *(_OWORD *)(v115 + 32);
          v126 = this->fields.nowEquipedUserCommandCodeId;
          *(_OWORD *)&v157.fields.currentCryptoKey = *v117;
          *(_OWORD *)&v157.fields.fakeValue = v125;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v151 = v157;
          v127 = v126 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v151, 0LL);
          v128 = (CombineCommandCodeListViewItem_o *)sub_B5D694(CombineCommandCodeListViewItem_TypeInfo);
          CombineCommandCodeListViewItem___ctor(
            v128,
            (UserCommandCodeEntity_o *)v115,
            v127,
            v120,
            Item,
            baseSvtId,
            v143,
            v129);
          v130 = *(_OWORD *)(v115 + 32);
          *(_OWORD *)&v157.fields.currentCryptoKey = *v117;
          *(_OWORD *)&v157.fields.fakeValue = v130;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v150 = v157;
          bgTxtSprite = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v150, 0LL);
          v111 = v147;
          if ( !v128 )
            goto LABEL_101;
          this = v146;
          if ( bgTxtSprite == beforeSelectedUserCommandCodeId )
          {
            v128->fields.isSelect = 1;
            CombineCommandCodeListViewManager__SetSelectedCommandCodeData(v146, v128, v131);
          }
          else
          {
            v128->fields.isSelect = 0;
          }
          bgTxtSprite = (int64_t)v146->fields.itemList;
          if ( !bgTxtSprite )
            goto LABEL_101;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)bgTxtSprite,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v128,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
          v112 = v148;
          if ( (int)++v114 >= v147 )
            goto LABEL_80;
        }
LABEL_102:
        v140 = sub_B5D6C8(bgTxtSprite);
        sub_B5D668(v140, 0LL);
      }
LABEL_80:
      bgTxtSprite = (int64_t)this->fields.emptyMessageBase;
      if ( bgTxtSprite )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bgTxtSprite, 0, 0LL);
        commandCardType = v141;
        modeKind = v142;
        goto LABEL_82;
      }
    }
LABEL_101:
    sub_B5D69C(bgTxtSprite, *(_QWORD *)&baseSvtId);
  }
  bgTxtSprite = (int64_t)this->fields.emptyMessageBase;
  if ( !bgTxtSprite )
    goto LABEL_101;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bgTxtSprite, 1, 0LL);
  v111 = 0;
LABEL_82:
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  bgTxtSprite = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3292/*"COMMAND_CODE_EMPTY"*/, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_101;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)bgTxtSprite, 0LL);
  switch ( commandCardType )
  {
    case 1:
      bgTxtSprite = (int64_t)this->fields.commandCardTypeSprite;
      if ( !bgTxtSprite )
        goto LABEL_101;
      v133 = &StringLiteral_19674/*"img_bg_arts"*/;
      goto LABEL_95;
    case 3:
      bgTxtSprite = (int64_t)this->fields.commandCardTypeSprite;
      if ( !bgTxtSprite )
        goto LABEL_101;
      v133 = &StringLiteral_19685/*"img_bg_quick"*/;
      goto LABEL_95;
    case 2:
      bgTxtSprite = (int64_t)this->fields.commandCardTypeSprite;
      if ( !bgTxtSprite )
        goto LABEL_101;
      v133 = &StringLiteral_19676/*"img_bg_buster"*/;
LABEL_95:
      UISprite__set_spriteName((UISprite_o *)bgTxtSprite, (System_String_o *)*v133, 0LL);
      break;
  }
  commandCodeInfoLabel = this->fields.commandCodeInfoLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v135 = LocalizationManager__Get((System_String_o *)StringLiteral_12617/*"SUM_INFO"*/, 0LL);
  LODWORD(v157.fields.currentCryptoKey) = v111;
  v136 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v157);
  v149 = CommandCodeFrameMax;
  v137 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v149);
  bgTxtSprite = (int64_t)System_String__Format_44573324(v135, v136, v137, 0LL);
  if ( !commandCodeInfoLabel )
    goto LABEL_101;
  UILabel__set_text(commandCodeInfoLabel, (System_String_o *)bgTxtSprite, 0LL);
  CombineCommandCodeListViewManager__SetStatusKind(v146, modeKind, v138);
  ListViewManager__SortItem((ListViewManager_o *)v146, -1, 0, -1, 0LL);
  CombineCommandCodeListViewManager__SetFilterButtonImage(v146, v139);
}


void __fastcall CombineCommandCodeListViewManager__DestroyList(
        CombineCommandCodeListViewManager_o *this,
        const MethodInfo *method)
{
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  __int64 v9; // x1
  ListViewSort_o *sort; // x0

  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  this->fields.selectShowStatusUserCmdCode = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.selectShowStatusUserCmdCode, 0LL, v3, v4, v5, v6, v7, v8);
  sort = this->fields.sort;
  if ( !sort )
    sub_B5D69C(0LL, v9);
  ListViewSort__Save(sort, 0LL);
}


void __fastcall CombineCommandCodeListViewManager__EndClickTabChoice(
        CombineCommandCodeListViewManager_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x2

  CombineCommandCodeListViewManager__SetStatusKind(this, 2, method);
  CombineCommandCodeListViewManager__ModifyList(this, 0, v4);
  CombineCommandCodeListViewManager__SetMode_25708528(this, 3, v5);
}


void __fastcall CombineCommandCodeListViewManager__EndClickTabLock(
        CombineCommandCodeListViewManager_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x2

  CombineCommandCodeListViewManager__SetStatusKind(this, 1, method);
  CombineCommandCodeListViewManager__ModifyList(this, 0, v4);
  CombineCommandCodeListViewManager__SetMode_25708528(this, 3, v5);
}


void __fastcall CombineCommandCodeListViewManager__EndClickTabStatus(
        CombineCommandCodeListViewManager_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x2

  CombineCommandCodeListViewManager__SetStatusKind(this, 0, method);
  CombineCommandCodeListViewManager__ModifyList(this, 0, v4);
  CombineCommandCodeListViewManager__SetMode_25708528(this, 3, v5);
}


void __fastcall CombineCommandCodeListViewManager__EndCloseSelectFilterKind(
        CombineCommandCodeListViewManager_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall CombineCommandCodeListViewManager__EndSelectFilterKind(
        CombineCommandCodeListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  const MethodInfo *v12; // x1
  CommonUI_o *Instance; // x20
  System_Action_o *v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1

  if ( (byte_42E8D94 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&Method_CombineCommandCodeListViewManager_EndCloseSelectFilterKind__, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10, v11);
    byte_42E8D94 = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    CombineCommandCodeListViewManager__SetFilterButtonImage(this, v12);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v14,
    (Il2CppObject *)this,
    Method_CombineCommandCodeListViewManager_EndCloseSelectFilterKind__,
    0LL);
  if ( !Instance )
    sub_B5D69C(v15, v16);
  CommonUI__CloseServantFilterSelectMenu(Instance, v14, 0LL);
}


void __fastcall CombineCommandCodeListViewManager__EndSelectSortKind(
        CombineCommandCodeListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v7; // x1

  if ( (byte_42E8D97 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, (_DWORD)method, v3);
    byte_42E8D97 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v7);
  CommonUI__CloseServantSortSelectMenu(Instance, 0LL, 0LL);
}


void __fastcall CombineCommandCodeListViewManager__EndStatusSync(
        CombineCommandCodeListViewManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  CombineCommandCodeListViewManager_RequestCallbackFunc_o *requestCallback; // x19
  BattleServantConfConponent_o *p_requestCallback; // x0

  requestCallback = this->fields.requestCallback;
  if ( requestCallback )
  {
    p_requestCallback = (BattleServantConfConponent_o *)&this->fields.requestCallback;
    p_requestCallback->klass = 0LL;
    sub_B5D560(p_requestCallback, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    CombineCommandCodeListViewManager_RequestCallbackFunc__Invoke(requestCallback, 1, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall CombineCommandCodeListViewManager__GetCommandCodeAmountSortValue(
        CombineCommandCodeListViewManager_o *this,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  CombineCommandCodeListViewManager_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x25
  signed __int64 size; // x22
  int64_t v14; // x21
  unsigned __int64 v15; // x23
  ListViewItem_o *v16; // x8
  __int64 v17; // x11
  __int64 v18; // x11
  CombineCommandCodeListViewItem_o *v19; // x0

  v5 = this;
  if ( (byte_42E8D9A & 1) == 0 )
  {
    sub_B5D5C4(&CombineCommandCodeListViewItem_TypeInfo, commandCodeId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v6, v7, v8);
    this = (CombineCommandCodeListViewManager_o *)sub_B5D5C4(
                                                    &Method_System_Collections_Generic_List_ListViewItem__get_Item__,
                                                    v9,
                                                    v10,
                                                    v11);
    byte_42E8D9A = 1;
  }
  itemList = v5->fields.itemList;
  if ( !itemList )
    goto LABEL_20;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v14 = 0LL;
    v15 = 0LL;
    do
    {
      if ( v15 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v16 = itemList->fields._items->m_Items[v15];
      if ( !v16 )
        break;
      v17 = *(&CombineCommandCodeListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v16->klass->_2.bitflags2 + 1) < (unsigned int)v17
        || (CombineCommandCodeListViewItem_c *)v16->klass->_2.typeHierarchy[v17 - 1] != CombineCommandCodeListViewItem_TypeInfo )
      {
        break;
      }
      v18 = *(&CombineCommandCodeListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v16->klass->_2.bitflags2 + 1) >= (unsigned int)v18 )
      {
        if ( (CombineCommandCodeListViewItem_c *)v16->klass->_2.typeHierarchy[v18 - 1] == CombineCommandCodeListViewItem_TypeInfo )
          v19 = (CombineCommandCodeListViewItem_o *)itemList->fields._items->m_Items[v15];
        else
          v19 = 0LL;
      }
      else
      {
        v19 = 0LL;
      }
      this = (CombineCommandCodeListViewManager_o *)CombineCommandCodeListViewItem__get_CommandCodeId(
                                                      v19,
                                                      *(const MethodInfo **)&commandCodeId);
      ++v15;
      if ( (_DWORD)this == commandCodeId )
        ++v14;
      if ( (__int64)v15 >= size )
        return v14;
      itemList = v5->fields.itemList;
    }
    while ( itemList );
LABEL_20:
    sub_B5D69C(this, *(_QWORD *)&commandCodeId);
  }
  return 0LL;
}


CombineCommandCodeListViewItem_o *__fastcall CombineCommandCodeListViewManager__GetItem(
        CombineCommandCodeListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v10; // x8
  __int64 v11; // x11

  if ( (byte_42E8D85 & 1) == 0 )
  {
    sub_B5D5C4(&CombineCommandCodeListViewItem_TypeInfo, index, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6, v7, v8);
    byte_42E8D85 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v10 = itemList->fields._items->m_Items[index];
  if ( !v10 )
    return 0LL;
  v11 = *(&CombineCommandCodeListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v10->klass->_2.bitflags2 + 1) < (unsigned int)v11 )
    return 0LL;
  if ( (CombineCommandCodeListViewItem_c *)v10->klass->_2.typeHierarchy[v11 - 1] == CombineCommandCodeListViewItem_TypeInfo )
    return (CombineCommandCodeListViewItem_o *)itemList->fields._items->m_Items[index];
  return 0LL;
}


CombineCommandCodeListViewItem_o *__fastcall CombineCommandCodeListViewManager__GetSelectItem(
        CombineCommandCodeListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.selectItem;
}


UserCommandCodeEntity_o *__fastcall CombineCommandCodeListViewManager__GetSelectMaterialUserCmdCode(
        CombineCommandCodeListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.selectShowStatusUserCmdCode;
}


bool __fastcall CombineCommandCodeListViewManager__GetSwapChoiceList(
        CombineCommandCodeListViewManager_o *this,
        System_Int64_array **choiceList,
        System_Int64_array **unchoiceList,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  System_Collections_Generic_List_long__o *v30; // x23
  System_Collections_Generic_List_long__o *v31; // x22
  int64_t v32; // x0
  __int64 v33; // x1
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x19
  signed __int64 size; // x24
  unsigned __int64 v42; // x25
  ListViewItem_o *v43; // x8
  __int64 v44; // x11
  __int64 v45; // x9
  __int128 v46; // q0
  const MethodInfo_3047788 *v47; // x2
  int64_t v48; // x1
  System_Collections_Generic_List_long__o *v49; // x0
  __int128 v50; // q0
  System_Int64_array *v51; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_Int64_array *v58; // x0
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v73; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v74; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v75; // [xsp+50h] [xbp-70h]

  if ( (byte_42E8D8C & 1) == 0 )
  {
    sub_B5D5C4(&CombineCommandCodeListViewItem_TypeInfo, (_DWORD)choiceList, (_DWORD)unchoiceList, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__Add__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__ToArray__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long___ctor__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__get_Count__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v21, v22, v23);
    sub_B5D5C4(&System_Collections_Generic_List_long__TypeInfo, v24, v25, v26);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v27, v28, v29);
    byte_42E8D8C = 1;
  }
  v30 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v30,
    (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
  v31 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v31,
    (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_33;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v42 = 0LL;
    do
    {
      if ( v42 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v43 = itemList->fields._items->m_Items[v42];
      if ( !v43 )
        break;
      v44 = *(&CombineCommandCodeListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v43->klass->_2.bitflags2 + 1) < (unsigned int)v44
        || (CombineCommandCodeListViewItem_c *)v43->klass->_2.typeHierarchy[v44 - 1] != CombineCommandCodeListViewItem_TypeInfo )
      {
        break;
      }
      v45 = *(_QWORD *)&v43[1].fields.selectNum;
      if ( v45 && BYTE6(v43[1].klass) )
      {
        if ( BYTE2(v43[1].klass) )
        {
          v46 = *(_OWORD *)(v45 + 32);
          *(_OWORD *)&v75.fields.currentCryptoKey = *(_OWORD *)(v45 + 16);
          *(_OWORD *)&v75.fields.fakeValue = v46;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v74 = v75;
          v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v74, 0LL);
          if ( !v31 )
            break;
          v47 = (const MethodInfo_3047788 *)Method_System_Collections_Generic_List_long__Add__;
          v48 = v32;
          v49 = v31;
        }
        else
        {
          v50 = *(_OWORD *)(v45 + 32);
          *(_OWORD *)&v75.fields.currentCryptoKey = *(_OWORD *)(v45 + 16);
          *(_OWORD *)&v75.fields.fakeValue = v50;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v73 = v75;
          v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v73, 0LL);
          if ( !v30 )
            break;
          v47 = (const MethodInfo_3047788 *)Method_System_Collections_Generic_List_long__Add__;
          v48 = v32;
          v49 = v30;
        }
        System_Collections_Generic_List_long___Add(v49, v48, v47);
      }
      if ( (__int64)++v42 >= size )
        goto LABEL_28;
      itemList = this->fields.itemList;
    }
    while ( itemList );
LABEL_33:
    sub_B5D69C(v32, v33);
  }
LABEL_28:
  if ( !v30 || !v31 )
    goto LABEL_33;
  if ( v31->fields._size + v30->fields._size < 1 )
  {
    *choiceList = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)choiceList, 0LL, v34, v35, v36, v37, v38, v39);
    *unchoiceList = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)unchoiceList, 0LL, v66, v67, v68, v69, v70, v71);
    return 0;
  }
  else
  {
    v51 = System_Collections_Generic_List_long___ToArray(
            v30,
            (const MethodInfo_3049894 *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v51;
    sub_B5D560((BattleServantConfConponent_o *)choiceList, (System_Int32_array **)v51, v52, v53, v54, v55, v56, v57);
    v58 = System_Collections_Generic_List_long___ToArray(
            v31,
            (const MethodInfo_3049894 *)Method_System_Collections_Generic_List_long__ToArray__);
    *unchoiceList = v58;
    sub_B5D560((BattleServantConfConponent_o *)unchoiceList, (System_Int32_array **)v58, v59, v60, v61, v62, v63, v64);
    return 1;
  }
}


bool __fastcall CombineCommandCodeListViewManager__GetSwapLockList(
        CombineCommandCodeListViewManager_o *this,
        System_Int64_array **lockList,
        System_Int64_array **unlockList,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  System_Collections_Generic_List_long__o *v30; // x23
  System_Collections_Generic_List_long__o *v31; // x22
  int64_t v32; // x0
  __int64 v33; // x1
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x19
  signed __int64 size; // x24
  unsigned __int64 v42; // x25
  ListViewItem_o *v43; // x8
  __int64 v44; // x11
  __int64 v45; // x9
  __int128 v46; // q0
  const MethodInfo_3047788 *v47; // x2
  int64_t v48; // x1
  System_Collections_Generic_List_long__o *v49; // x0
  __int128 v50; // q0
  System_Int64_array *v51; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_Int64_array *v58; // x0
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v73; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v74; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v75; // [xsp+50h] [xbp-70h]

  if ( (byte_42E8D8B & 1) == 0 )
  {
    sub_B5D5C4(&CombineCommandCodeListViewItem_TypeInfo, (_DWORD)lockList, (_DWORD)unlockList, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__Add__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__ToArray__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long___ctor__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__get_Count__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v21, v22, v23);
    sub_B5D5C4(&System_Collections_Generic_List_long__TypeInfo, v24, v25, v26);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v27, v28, v29);
    byte_42E8D8B = 1;
  }
  v30 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v30,
    (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
  v31 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v31,
    (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_33;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v42 = 0LL;
    do
    {
      if ( v42 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v43 = itemList->fields._items->m_Items[v42];
      if ( !v43 )
        break;
      v44 = *(&CombineCommandCodeListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v43->klass->_2.bitflags2 + 1) < (unsigned int)v44
        || (CombineCommandCodeListViewItem_c *)v43->klass->_2.typeHierarchy[v44 - 1] != CombineCommandCodeListViewItem_TypeInfo )
      {
        break;
      }
      v45 = *(_QWORD *)&v43[1].fields.selectNum;
      if ( v45 && BYTE5(v43[1].klass) )
      {
        if ( BYTE1(v43[1].klass) )
        {
          v46 = *(_OWORD *)(v45 + 32);
          *(_OWORD *)&v75.fields.currentCryptoKey = *(_OWORD *)(v45 + 16);
          *(_OWORD *)&v75.fields.fakeValue = v46;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v74 = v75;
          v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v74, 0LL);
          if ( !v31 )
            break;
          v47 = (const MethodInfo_3047788 *)Method_System_Collections_Generic_List_long__Add__;
          v48 = v32;
          v49 = v31;
        }
        else
        {
          v50 = *(_OWORD *)(v45 + 32);
          *(_OWORD *)&v75.fields.currentCryptoKey = *(_OWORD *)(v45 + 16);
          *(_OWORD *)&v75.fields.fakeValue = v50;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v73 = v75;
          v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v73, 0LL);
          if ( !v30 )
            break;
          v47 = (const MethodInfo_3047788 *)Method_System_Collections_Generic_List_long__Add__;
          v48 = v32;
          v49 = v30;
        }
        System_Collections_Generic_List_long___Add(v49, v48, v47);
      }
      if ( (__int64)++v42 >= size )
        goto LABEL_28;
      itemList = this->fields.itemList;
    }
    while ( itemList );
LABEL_33:
    sub_B5D69C(v32, v33);
  }
LABEL_28:
  if ( !v30 || !v31 )
    goto LABEL_33;
  if ( v31->fields._size + v30->fields._size < 1 )
  {
    *lockList = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)lockList, 0LL, v34, v35, v36, v37, v38, v39);
    *unlockList = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)unlockList, 0LL, v66, v67, v68, v69, v70, v71);
    return 0;
  }
  else
  {
    v51 = System_Collections_Generic_List_long___ToArray(
            v30,
            (const MethodInfo_3049894 *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v51;
    sub_B5D560((BattleServantConfConponent_o *)lockList, (System_Int32_array **)v51, v52, v53, v54, v55, v56, v57);
    v58 = System_Collections_Generic_List_long___ToArray(
            v31,
            (const MethodInfo_3049894 *)Method_System_Collections_Generic_List_long__ToArray__);
    *unlockList = v58;
    sub_B5D560((BattleServantConfConponent_o *)unlockList, (System_Int32_array **)v58, v59, v60, v61, v62, v63, v64);
    return 1;
  }
}


void __fastcall CombineCommandCodeListViewManager__InitBackListView(
        CombineCommandCodeListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x2

  CombineCommandCodeListViewManager__StatusRequest(this, 0LL, v2);
  CombineCommandCodeListViewManager__SetStatusKind(this, 0, v4);
}


void __fastcall CombineCommandCodeListViewManager__ModifyItem(
        CombineCommandCodeListViewManager_o *this,
        int64_t userCommandCodeId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x20
  CombineCommandCodeListViewManager_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  CombineCommandCodeListViewManager_o *v28; // x20
  int size; // w23
  __int64 v30; // x24
  CombineCommandCodeListViewItem_o *v31; // x21
  __int64 v32; // x9
  struct UserCommandCodeEntity_o *userCommandCode; // x8
  __int128 v34; // q0
  int64_t v35; // x0
  __int128 v36; // q0
  const MethodInfo *v37; // x2
  UnityEngine_Object_o *viewObject; // x22
  CombineCommandCodeListViewManager_o *v39; // x0
  const MethodInfo *v40; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+20h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+40h] [xbp-70h]

  v4 = userCommandCodeId;
  v5 = this;
  if ( (byte_42E8D83 & 1) == 0 )
  {
    sub_B5D5C4(&CombineCommandCodeListViewItem_TypeInfo, userCommandCodeId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v15, v16, v17);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v21, v22, v23);
    this = (CombineCommandCodeListViewManager_o *)sub_B5D5C4(
                                                    &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                    v24,
                                                    v25,
                                                    v26);
    byte_42E8D83 = 1;
  }
  itemList = v5->fields.itemList;
  if ( itemList )
  {
    if ( v4 < 1 )
    {
      v28 = 0LL;
    }
    else
    {
      this = (CombineCommandCodeListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this
        || (this = (CombineCommandCodeListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                            (DataManager_o *)this,
                                                            (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserCommandCodeMaster___)) == 0LL
        || (this = (CombineCommandCodeListViewManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                                            (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this,
                                                            v4,
                                                            (const MethodInfo_23FB038 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__),
            (itemList = v5->fields.itemList) == 0LL) )
      {
LABEL_34:
        sub_B5D69C(this, userCommandCodeId);
      }
      v28 = this;
    }
    size = itemList->fields._size;
    if ( size >= 1 )
    {
      v30 = 0LL;
      while ( 1 )
      {
        if ( itemList->fields._size <= (unsigned int)v30 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v31 = (CombineCommandCodeListViewItem_o *)itemList->fields._items->m_Items[v30];
        if ( v31 )
        {
          userCommandCodeId = (int64_t)CombineCommandCodeListViewItem_TypeInfo;
          v32 = *(&CombineCommandCodeListViewItem_TypeInfo->_2.bitflags2 + 1);
          if ( *(&v31->klass->_2.bitflags2 + 1) < (unsigned int)v32
            || (CombineCommandCodeListViewItem_c *)v31->klass->_2.typeHierarchy[v32 - 1] != CombineCommandCodeListViewItem_TypeInfo )
          {
            break;
          }
        }
        if ( v28 )
        {
          if ( !v31 )
            goto LABEL_34;
          userCommandCode = v31->fields.userCommandCode;
          if ( !userCommandCode )
            goto LABEL_34;
          v34 = *(_OWORD *)&userCommandCode->fields.id.fields.fakeValue;
          *(_OWORD *)&v43.fields.currentCryptoKey = *(_OWORD *)&userCommandCode->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v43.fields.fakeValue = v34;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v42 = v43;
          v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v42, 0LL);
          v36 = *(_OWORD *)&v28->fields.indicator;
          *(_OWORD *)&v41.fields.currentCryptoKey = *(_OWORD *)&v28->fields.m_CachedPtr;
          *(_OWORD *)&v41.fields.fakeValue = v36;
          if ( v35 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v41, 0LL) )
            CombineCommandCodeListViewItem__Modify(v31, (UserCommandCodeEntity_o *)v28, v37);
        }
        else if ( !v31 )
        {
          goto LABEL_34;
        }
        viewObject = (UnityEngine_Object_o *)v31->fields.viewObject;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (CombineCommandCodeListViewManager_o *)UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (CombineCommandCodeListViewManager_o *)v31->fields.viewObject;
          if ( !this )
            goto LABEL_34;
          this = (CombineCommandCodeListViewManager_o *)((__int64 (__fastcall *)(CombineCommandCodeListViewManager_o *, CombineCommandCodeListViewItem_o *, Il2CppMethodPointer))this->klass->vtable._5_SetSortButtonImage.method)(
                                                          this,
                                                          v31,
                                                          this->klass->vtable._6_GetDragRoot.methodPtr);
        }
        if ( (int)++v30 >= size )
          return;
        itemList = v5->fields.itemList;
        if ( !itemList )
          goto LABEL_34;
      }
      v39 = (CombineCommandCodeListViewManager_o *)sub_B5D990(v31);
      CombineCommandCodeListViewManager__OnClickDecide(v39, v40);
    }
  }
}


void __fastcall CombineCommandCodeListViewManager__ModifyList(
        CombineCommandCodeListViewManager_o *this,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v5; // w1
  int v6; // w2
  __int64 v7; // x3
  char v8; // w1
  int v9; // w2
  __int64 v10; // x3
  char v11; // w1
  int v12; // w2
  __int64 v13; // x3
  char v14; // w1
  int v15; // w2
  __int64 v16; // x3
  char v17; // w1
  int v18; // w2
  __int64 v19; // x3
  char v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int64_t Instance; // x0
  CombineCommandCodeListViewItem_c *v24; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  signed __int64 size; // x25
  CombineCommandCodeListViewItem_c **v27; // x20
  unsigned int v28; // w27
  int64_t v29; // x26
  __int64 v30; // x8
  System_Int32_array ***v31; // x26
  __int64 v32; // t1
  __int128 v33; // q0
  int64_t v34; // x22
  __int64 v35; // x21
  struct System_Collections_Generic_List_ListViewItem__o *v36; // x23
  CombineCommandCodeListViewItem_o *v37; // x23
  __int64 v38; // x9
  struct UserCommandCodeEntity_o *userCommandCode; // x8
  __int128 v40; // q0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Int32_array **v47; // x1
  const MethodInfo *v48; // x1
  __int64 v49; // x0
  unsigned __int64 v50; // x22
  struct System_Collections_Generic_List_ListViewItem__o *v51; // x20
  __int64 v52; // x9
  UnityEngine_Object_o *v53; // x21
  CombineCommandCodeListViewManager_o *v54; // x0
  int64_t v55; // x1
  const MethodInfo *v56; // x2
  __int64 v58; // [xsp+10h] [xbp-C0h]
  int64_t v59; // [xsp+18h] [xbp-B8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v60; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v61; // [xsp+40h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v62; // [xsp+60h] [xbp-70h]

  if ( (byte_42E8D82 & 1) == 0 )
  {
    sub_B5D5C4(&CombineCommandCodeListViewItem_TypeInfo, isIconSizeChange, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v11, v12, v13);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20, v21, v22);
    byte_42E8D82 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_52;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !Instance )
    goto LABEL_52;
  Instance = (int64_t)UserCommandCodeMaster__getList((UserCommandCodeMaster_o *)Instance, 0LL);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_52;
  size = itemList->fields._size;
  if ( !Instance || (v58 = *(_QWORD *)(Instance + 24), (int)v58 < 1) )
  {
LABEL_35:
    if ( (int)size < 1 || !isIconSizeChange )
      return;
    v50 = 0LL;
    while ( 1 )
    {
      v51 = this->fields.itemList;
      if ( !v51 )
        break;
      if ( v50 >= (unsigned int)v51->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v27 = (CombineCommandCodeListViewItem_c **)v51->fields._items->m_Items[v50];
      if ( v27 )
      {
        v52 = *(&CombineCommandCodeListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&(*v27)->_2.bitflags2 + 1) < (unsigned int)v52
          || (CombineCommandCodeListViewItem_c *)(*v27)->_2.typeHierarchy[v52 - 1] != CombineCommandCodeListViewItem_TypeInfo )
        {
          goto LABEL_54;
        }
        v53 = (UnityEngine_Object_o *)v27[13];
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        Instance = UnityEngine_Object__op_Equality(v53, 0LL, 0LL);
        if ( (Instance & 1) == 0 )
        {
          Instance = (int64_t)v27[13];
          if ( !Instance )
            break;
          ListViewObject__SetItemSeed((ListViewObject_o *)Instance, (ListViewItem_o *)v27, this->fields.seed, 0LL);
        }
      }
      if ( (__int64)++v50 >= size )
        return;
    }
LABEL_52:
    sub_B5D69C(Instance, v24);
  }
  if ( !(_DWORD)v58 )
    goto LABEL_34;
  v27 = &CombineCommandCodeListViewItem_TypeInfo;
  v28 = 0;
  v59 = Instance;
  while ( 1 )
  {
    v29 = Instance + 8LL * (int)v28;
    v32 = *(_QWORD *)(v29 + 32);
    v31 = (System_Int32_array ***)(v29 + 32);
    v30 = v32;
    if ( !v32 )
      goto LABEL_52;
    v33 = *(_OWORD *)(v30 + 32);
    *(_OWORD *)&v62.fields.currentCryptoKey = *(_OWORD *)(v30 + 16);
    *(_OWORD *)&v62.fields.fakeValue = v33;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v61 = v62;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v61, 0LL);
    if ( (int)size >= 1 )
      break;
LABEL_32:
    Instance = v59;
    if ( (int)++v28 >= (int)v58 )
      goto LABEL_35;
    if ( v28 >= *(_DWORD *)(v59 + 24) )
      goto LABEL_34;
  }
  v34 = Instance;
  v35 = 0LL;
  while ( 1 )
  {
    v36 = this->fields.itemList;
    if ( !v36 )
      goto LABEL_52;
    if ( v36->fields._size <= (unsigned int)v35 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v37 = (CombineCommandCodeListViewItem_o *)v36->fields._items->m_Items[v35];
    if ( !v37 )
      goto LABEL_52;
    v24 = CombineCommandCodeListViewItem_TypeInfo;
    v38 = *(&CombineCommandCodeListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v37->klass->_2.bitflags2 + 1) < (unsigned int)v38
      || (CombineCommandCodeListViewItem_c *)v37->klass->_2.typeHierarchy[v38 - 1] != CombineCommandCodeListViewItem_TypeInfo )
    {
      break;
    }
    userCommandCode = v37->fields.userCommandCode;
    if ( userCommandCode )
    {
      v40 = *(_OWORD *)&userCommandCode->fields.id.fields.fakeValue;
      *(_OWORD *)&v62.fields.currentCryptoKey = *(_OWORD *)&userCommandCode->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v62.fields.fakeValue = v40;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v60 = v62;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v60, 0LL);
      if ( Instance == v34 )
      {
        if ( v28 < *(_DWORD *)(v59 + 24) )
        {
          v47 = *v31;
          v37->fields.userCommandCode = (struct UserCommandCodeEntity_o *)*v31;
          sub_B5D560((BattleServantConfConponent_o *)&v37->fields.userCommandCode, v47, v41, v42, v43, v44, v45, v46);
          if ( !isIconSizeChange )
          {
            CombineCommandCodeListViewItem__ModifyLockItem(v37, (const MethodInfo *)v24);
            CombineCommandCodeListViewItem__ModifyChoiceItem(v37, v48);
          }
          goto LABEL_32;
        }
LABEL_34:
        v49 = sub_B5D6C8(Instance);
        sub_B5D668(v49, 0LL);
      }
    }
    if ( (int)++v35 >= (int)size )
      goto LABEL_32;
  }
  sub_B5D990(v37);
LABEL_54:
  v54 = (CombineCommandCodeListViewManager_o *)sub_B5D990(v27);
  CombineCommandCodeListViewManager__ModifyItem(v54, v55, v56);
}


void __fastcall CombineCommandCodeListViewManager__OnClickChoiceTab(
        CombineCommandCodeListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  const MethodInfo *v11; // x2
  CombineCommandCodeListViewManager_RequestCallbackFunc_o *v12; // x20
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x2

  if ( (byte_42E8D8F & 1) == 0 )
  {
    sub_B5D5C4(&Method_CombineCommandCodeListViewManager_EndClickTabChoice__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CombineCommandCodeListViewManager_RequestCallbackFunc_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    byte_42E8D8F = 1;
  }
  if ( this->fields.modeKind != 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    if ( this->fields.modeKind )
    {
      v12 = (CombineCommandCodeListViewManager_RequestCallbackFunc_o *)sub_B5D694(CombineCommandCodeListViewManager_RequestCallbackFunc_TypeInfo);
      CombineCommandCodeListViewManager_RequestCallbackFunc___ctor(
        v12,
        (Il2CppObject *)this,
        Method_CombineCommandCodeListViewManager_EndClickTabChoice__,
        0LL);
      CombineCommandCodeListViewManager__StatusRequest(this, v12, v13);
    }
    else
    {
      CombineCommandCodeListViewManager__SetStatusKind(this, 2, v11);
      CombineCommandCodeListViewManager__ModifyList(this, 0, v14);
      CombineCommandCodeListViewManager__SetMode_25708528(this, 3, v15);
    }
  }
}


void __fastcall CombineCommandCodeListViewManager__OnClickCollectLock(
        CombineCommandCodeListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  const MethodInfo *v11; // x2
  CombineCommandCodeListViewManager_RequestCallbackFunc_o *v12; // x20
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x2

  if ( (byte_42E8D8E & 1) == 0 )
  {
    sub_B5D5C4(&Method_CombineCommandCodeListViewManager_EndClickTabLock__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CombineCommandCodeListViewManager_RequestCallbackFunc_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    byte_42E8D8E = 1;
  }
  if ( this->fields.modeKind != 1 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    if ( this->fields.modeKind )
    {
      v12 = (CombineCommandCodeListViewManager_RequestCallbackFunc_o *)sub_B5D694(CombineCommandCodeListViewManager_RequestCallbackFunc_TypeInfo);
      CombineCommandCodeListViewManager_RequestCallbackFunc___ctor(
        v12,
        (Il2CppObject *)this,
        Method_CombineCommandCodeListViewManager_EndClickTabLock__,
        0LL);
      CombineCommandCodeListViewManager__StatusRequest(this, v12, v13);
    }
    else
    {
      CombineCommandCodeListViewManager__SetStatusKind(this, 1, v11);
      CombineCommandCodeListViewManager__ModifyList(this, 0, v14);
      CombineCommandCodeListViewManager__SetMode_25708528(this, 3, v15);
    }
  }
}


void __fastcall CombineCommandCodeListViewManager__OnClickDecide(
        CombineCommandCodeListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  struct CombineCommandCodeListViewItem_o *selectItem; // x8
  struct UserCommandCodeEntity_o *userCommandCode; // x8
  __int128 v19; // q1
  __int64 v20; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *Master_WarQuestSelectionMaster; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v23; // [xsp+20h] [xbp-30h]

  if ( (byte_42E8D84 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_UserCommandCodeMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v8, v9, v10);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&SoundManager_TypeInfo, v14, v15, v16);
    byte_42E8D84 = 1;
  }
  selectItem = this->fields.selectItem;
  if ( selectItem )
  {
    userCommandCode = selectItem->fields.userCommandCode;
    if ( userCommandCode )
    {
      v19 = *(_OWORD *)&userCommandCode->fields.id.fields.fakeValue;
      *(_OWORD *)&v23.fields.currentCryptoKey = *(_OWORD *)&userCommandCode->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v23.fields.fakeValue = v19;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v22 = v23;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v22, 0LL) != this->fields.nowEquipedUserCommandCodeId )
      {
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(0, 0LL);
        if ( this->fields.nowEquipedUserCommandCodeId >= 1 )
        {
          if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          }
          Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserCommandCodeMaster___);
          if ( !Master_WarQuestSelectionMaster )
            goto LABEL_25;
          DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
            Master_WarQuestSelectionMaster,
            this->fields.nowEquipedUserCommandCodeId,
            (const MethodInfo_23FB038 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
        }
        Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this->fields.combineRootComponent;
        if ( Master_WarQuestSelectionMaster )
        {
          CombineRootComponent__ShowSelectedCommandCode((CombineRootComponent_o *)Master_WarQuestSelectionMaster, 0LL);
          return;
        }
LABEL_25:
        sub_B5D69C(Master_WarQuestSelectionMaster, v20);
      }
    }
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(2, 0LL);
}


void __fastcall CombineCommandCodeListViewManager__OnClickFilterKind(
        CombineCommandCodeListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  WebViewManager_o *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v16; // x21
  ServantFilterSelectMenu_CallbackFunc_o *v17; // x22
  __int64 v18; // x0
  __int64 v19; // x1

  if ( (byte_42E8D93 & 1) == 0 )
  {
    sub_B5D5C4(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_CombineCommandCodeListViewManager_EndSelectFilterKind__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&SoundManager_TypeInfo, v11, v12, v13);
    byte_42E8D93 = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v16 = (CommonUI_o *)Instance;
    v17 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_B5D694(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v17,
      (Il2CppObject *)this,
      Method_CombineCommandCodeListViewManager_EndSelectFilterKind__,
      0LL);
    if ( !v16 )
      sub_B5D69C(v18, v19);
    CommonUI__OpenServantFilterSelectMenu_18209116(v16, 6, sort, (ListViewManager_o *)this, v17, -1, 0LL);
  }
}


void __fastcall CombineCommandCodeListViewManager__OnClickListView(
        CombineCommandCodeListViewManager_o *this,
        ListViewObject_o *listviewObject,
        const MethodInfo *method)
{
  ;
}


void __fastcall CombineCommandCodeListViewManager__OnClickListView_25712708(
        CombineCommandCodeListViewManager_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct CombineCommandCodeListViewItem_o *v4; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  __int64 v24; // x9
  _DWORD *ObjectList; // x0
  CombineCommandCodeListViewItem_c *v26; // x1
  struct UserCommandCodeEntity_o *userCommandCode; // x8
  __int128 v28; // q1
  int64_t v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  const MethodInfo *v36; // x2
  _DWORD *v37; // x21
  const MethodInfo *v38; // x2
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  int size; // w24
  unsigned int v41; // w25
  __int64 v42; // x9
  struct UserCommandCodeEntity_o *v43; // x8
  __int128 v44; // q0
  int v45; // w21
  _DWORD *v46; // x20
  __int64 v47; // x22
  unsigned int v48; // w8
  CombineCommandCodeListViewManager_o *v49; // x0
  ListViewItem_o *v50; // x1
  const MethodInfo *v51; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+40h] [xbp-60h]

  v4 = (struct CombineCommandCodeListViewItem_o *)item;
  if ( (byte_42E8D91 & 1) == 0 )
  {
    sub_B5D5C4(&CombineCommandCodeListViewItem_TypeInfo, (_DWORD)item, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_CombineCommandCodeListViewObject__get_Count__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_CombineCommandCodeListViewObject__get_Item__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v15, v16, v17);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&SoundManager_TypeInfo, v21, v22, v23);
    byte_42E8D91 = 1;
  }
  if ( v4
    && ((v24 = *(&CombineCommandCodeListViewItem_TypeInfo->_2.bitflags2 + 1),
         *(&v4->klass->_2.bitflags2 + 1) < (unsigned int)v24)
     || (CombineCommandCodeListViewItem_c *)v4->klass->_2.typeHierarchy[v24 - 1] != CombineCommandCodeListViewItem_TypeInfo) )
  {
LABEL_44:
    v49 = (CombineCommandCodeListViewManager_o *)sub_B5D990(v4);
    CombineCommandCodeListViewManager__OnLongPushListView(v49, v50, v51);
  }
  else
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    if ( !v4 )
      goto LABEL_43;
    userCommandCode = v4->fields.userCommandCode;
    if ( !userCommandCode )
      goto LABEL_43;
    v28 = *(_OWORD *)&userCommandCode->fields.id.fields.fakeValue;
    *(_OWORD *)&v54.fields.currentCryptoKey = *(_OWORD *)&userCommandCode->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v54.fields.fakeValue = v28;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v53 = v54;
    v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v53, 0LL);
    if ( v4->fields.isSelect )
    {
      v4->fields.isSelect = 0;
      this->fields.selectItem = 0LL;
      sub_B5D560((BattleServantConfConponent_o *)&this->fields.selectItem, 0LL, v30, v31, v32, v33, v34, v35);
      CombineCommandCodeListViewManager__SetSelectedCommandCodeData(this, 0LL, v36);
      v37 = 0LL;
    }
    else
    {
      v37 = (_DWORD *)v29;
      v4->fields.isSelect = 1;
      this->fields.selectItem = v4;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.selectItem,
        (System_Int32_array **)v4,
        v30,
        v31,
        v32,
        v33,
        v34,
        v35);
      CombineCommandCodeListViewManager__SetSelectedCommandCodeData(this, v4, v38);
    }
    itemList = this->fields.itemList;
    if ( !itemList )
      goto LABEL_43;
    size = itemList->fields._size;
    if ( size >= 1 )
    {
      v41 = 0;
      do
      {
        if ( itemList->fields._size <= v41 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v4 = (struct CombineCommandCodeListViewItem_o *)itemList->fields._items->m_Items[v41];
        if ( !v4 )
          break;
        v26 = CombineCommandCodeListViewItem_TypeInfo;
        v42 = *(&CombineCommandCodeListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v4->klass->_2.bitflags2 + 1) < (unsigned int)v42
          || (CombineCommandCodeListViewItem_c *)v4->klass->_2.typeHierarchy[v42 - 1] != CombineCommandCodeListViewItem_TypeInfo )
        {
          goto LABEL_44;
        }
        v43 = v4->fields.userCommandCode;
        if ( !v43 )
          break;
        v44 = *(_OWORD *)&v43->fields.id.fields.fakeValue;
        *(_OWORD *)&v54.fields.currentCryptoKey = *(_OWORD *)&v43->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v54.fields.fakeValue = v44;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v52 = v54;
        ObjectList = (_DWORD *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v52, 0LL);
        if ( ObjectList != v37 )
          v4->fields.isSelect = 0;
        if ( (int)++v41 >= size )
          goto LABEL_34;
        itemList = this->fields.itemList;
      }
      while ( itemList );
LABEL_43:
      sub_B5D69C(ObjectList, v26);
    }
LABEL_34:
    ObjectList = CombineCommandCodeListViewManager__get_ObjectList(this, (const MethodInfo *)v26);
    if ( !ObjectList )
      goto LABEL_43;
    v45 = ObjectList[6];
    v46 = ObjectList;
    if ( v45 >= 1 )
    {
      v47 = 0LL;
      v48 = ObjectList[6];
      while ( 1 )
      {
        if ( v48 <= (unsigned int)v47 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        ObjectList = *(_DWORD **)(*((_QWORD *)v46 + 2) + 8 * v47 + 32);
        if ( !ObjectList )
          break;
        (*(void (__fastcall **)(_DWORD *, bool, _QWORD))(*(_QWORD *)ObjectList + 456LL))(
          ObjectList,
          this->fields.isInput,
          *(_QWORD *)(*(_QWORD *)ObjectList + 464LL));
        if ( (int)v47 + 1 >= v45 )
          return;
        v48 = v46[6];
        ++v47;
      }
      goto LABEL_43;
    }
  }
}


void __fastcall CombineCommandCodeListViewManager__OnClickNormalStatus(
        CombineCommandCodeListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  CombineCommandCodeListViewManager_RequestCallbackFunc_o *v11; // x20
  const MethodInfo *v12; // x2

  if ( (byte_42E8D8D & 1) == 0 )
  {
    sub_B5D5C4(&Method_CombineCommandCodeListViewManager_EndClickTabStatus__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CombineCommandCodeListViewManager_RequestCallbackFunc_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    byte_42E8D8D = 1;
  }
  if ( this->fields.modeKind )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v11 = (CombineCommandCodeListViewManager_RequestCallbackFunc_o *)sub_B5D694(CombineCommandCodeListViewManager_RequestCallbackFunc_TypeInfo);
    CombineCommandCodeListViewManager_RequestCallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      Method_CombineCommandCodeListViewManager_EndClickTabStatus__,
      0LL);
    CombineCommandCodeListViewManager__StatusRequest(this, v11, v12);
  }
}


void __fastcall CombineCommandCodeListViewManager__OnClickScaleChange(
        CombineCommandCodeListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  ListViewSort_o *ScaleKindSpriteName; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  unsigned int scaleType; // w8
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  int32_t v15; // w8
  struct ListViewSort_o *sort; // x8
  UISprite_o *scaleChangeButtonSprite; // x20
  const MethodInfo *v18; // x2
  const MethodInfo *v19; // x2

  if ( (byte_42E8D8A & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8D8A = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  scaleType = this->fields.scaleType;
  if ( scaleType < 2 )
  {
    smallSizeSeed = this->fields.smallSizeSeed;
    v15 = 2;
    goto LABEL_12;
  }
  if ( scaleType == 2 )
  {
    smallSizeSeed = this->fields.extremelySmallSizeSeed;
    v15 = 3;
    goto LABEL_12;
  }
  if ( scaleType == 3 )
  {
    smallSizeSeed = this->fields.normalSizeSeed;
    v15 = 1;
LABEL_12:
    this->fields.scaleType = v15;
    this->fields.seed = smallSizeSeed;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.seed,
      (System_Int32_array **)smallSizeSeed,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
  }
  sort = this->fields.sort;
  if ( !sort
    || (sort->fields.iconScaleKind = this->fields.scaleType, (ScaleKindSpriteName = this->fields.sort) == 0LL)
    || (scaleChangeButtonSprite = this->fields.scaleChangeButtonSprite,
        ScaleKindSpriteName = (ListViewSort_o *)ListViewSort__GetScaleKindSpriteName(
                                                  ScaleKindSpriteName,
                                                  this->fields.scaleType,
                                                  0LL),
        !scaleChangeButtonSprite) )
  {
    sub_B5D69C(ScaleKindSpriteName, v6);
  }
  UISprite__set_spriteName(scaleChangeButtonSprite, (System_String_o *)ScaleKindSpriteName, 0LL);
  CombineCommandCodeListViewManager__ModifyList(this, 1, v18);
  CombineCommandCodeListViewManager__SetMode_25708528(this, 3, v19);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall CombineCommandCodeListViewManager__OnClickSortAscendingOrder(
        CombineCommandCodeListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x0
  __int64 v6; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_42E8D98 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8D98 = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_B5D69C(v5, v6);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall CombineCommandCodeListViewManager__OnClickSortKind(
        CombineCommandCodeListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  WebViewManager_o *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v16; // x21
  ServantSortSelectMenu_CallbackFunc_o *v17; // x22
  __int64 v18; // x0
  __int64 v19; // x1

  if ( (byte_42E8D96 & 1) == 0 )
  {
    sub_B5D5C4(&ServantSortSelectMenu_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_CombineCommandCodeListViewManager_EndSelectSortKind__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&SoundManager_TypeInfo, v11, v12, v13);
    byte_42E8D96 = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v16 = (CommonUI_o *)Instance;
    v17 = (ServantSortSelectMenu_CallbackFunc_o *)sub_B5D694(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v17,
      (Il2CppObject *)this,
      Method_CombineCommandCodeListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v16 )
      sub_B5D69C(v18, v19);
    CommonUI__OpenServantSortSelectMenu(v16, 6, sort, 0, v17, 0LL);
  }
}


void __fastcall CombineCommandCodeListViewManager__OnLongPushListView(
        CombineCommandCodeListViewManager_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  CombineCommandCodeListViewItem_c *v9; // x1
  __int64 v10; // x9
  UnityEngine_Behaviour_o *scrollView; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  struct UserCommandCodeEntity_o *v18; // x1
  CombineCommandCodeListViewManager_o *v19; // x0
  const MethodInfo *v20; // x1

  if ( (byte_42E8D92 & 1) == 0 )
  {
    sub_B5D5C4(&CombineCommandCodeListViewItem_TypeInfo, (_DWORD)item, (_DWORD)method, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v6, v7, v8);
    byte_42E8D92 = 1;
  }
  if ( (unsigned int)(this->fields.modeKind - 1) >= 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    if ( item
      && ((v9 = CombineCommandCodeListViewItem_TypeInfo,
           v10 = *(&CombineCommandCodeListViewItem_TypeInfo->_2.bitflags2 + 1),
           *(&item->klass->_2.bitflags2 + 1) < (unsigned int)v10)
       || (CombineCommandCodeListViewItem_c *)item->klass->_2.typeHierarchy[v10 - 1] != CombineCommandCodeListViewItem_TypeInfo) )
    {
      v19 = (CombineCommandCodeListViewManager_o *)sub_B5D990(item);
      CombineCommandCodeListViewManager__GetSelectItem(v19, v20);
    }
    else
    {
      scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
      if ( !scrollView
        || (UnityEngine_Behaviour__set_enabled(scrollView, 0, 0LL), !item)
        || (v18 = *(struct UserCommandCodeEntity_o **)&item[1].fields.selectNum,
            this->fields.selectShowStatusUserCmdCode = v18,
            sub_B5D560(
              (BattleServantConfConponent_o *)&this->fields.selectShowStatusUserCmdCode,
              (System_Int32_array **)v18,
              v12,
              v13,
              v14,
              v15,
              v16,
              v17),
            (scrollView = (UnityEngine_Behaviour_o *)this->fields.combineRootComponent) == 0LL) )
      {
        sub_B5D69C(scrollView, v9);
      }
      CombineRootComponent__ShowCommandCodeStatus((CombineRootComponent_o *)scrollView, 0LL);
    }
  }
}


void __fastcall CombineCommandCodeListViewManager__OnMoveEnd(
        CombineCommandCodeListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int32_t callbackCount; // w8
  bool v6; // vf
  int32_t v7; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v9; // x1
  UIScrollView_o *v10; // x0
  System_Action_o *callbackFunc2; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_42E8D89 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8D89 = 1;
  }
  callbackCount = this->fields.callbackCount;
  v6 = __OFSUB__(callbackCount, 1);
  v7 = callbackCount - 1;
  if ( v7 < 0 == v6 )
  {
    this->fields.callbackCount = v7;
    if ( !v7 )
    {
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v10 = this->fields.scrollView;
        if ( !v10
          || (((void (__fastcall *)(UIScrollView_o *, __int64, Il2CppMethodPointer))v10->klass->vtable._8_UpdateScrollbars.method)(
                v10,
                1LL,
                v10->klass->vtable._9_SetDragAmount.methodPtr),
              (v10 = this->fields.scrollView) == 0LL) )
        {
          sub_B5D69C(v10, v9);
        }
        UIScrollView__UpdatePosition(v10, 0LL);
        callbackFunc2 = this->fields.callbackFunc2;
        this->fields.callbackFunc2 = 0LL;
        sub_B5D560((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v12, v13, v14, v15, v16, v17);
        if ( callbackFunc2 )
          System_Action__Invoke(callbackFunc2, 0LL);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineCommandCodeListViewManager__RequestListObject(
        CombineCommandCodeListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  __int64 v4; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  System_Collections_Generic_List_CombineCommandCodeListViewObject__o *ObjectList; // x0
  __int64 v21; // x1
  int32_t size; // w8
  System_Collections_Generic_List_CombineCommandCodeListViewObject__o *v23; // x21
  int v24; // w24
  __int64 v25; // x25
  unsigned int v26; // w8
  CombineCommandCodeListViewObject_o *v27; // x22
  System_Action_o *v28; // x23
  const MethodInfo *v29; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42E8D88 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, mode, (_DWORD)method, v4);
    sub_B5D5C4(&Method_CombineCommandCodeListViewManager_OnMoveEnd__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_CombineCommandCodeListViewObject__get_Count__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_CombineCommandCodeListViewObject__get_Item__, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_10142/*"OnMoveEnd"*/, v17, v18, v19);
    byte_42E8D88 = 1;
  }
  ObjectList = CombineCommandCodeListViewManager__get_ObjectList(this, *(const MethodInfo **)&mode);
  if ( !ObjectList )
    goto LABEL_14;
  size = ObjectList->fields._size;
  v23 = ObjectList;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10142/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    v24 = ObjectList->fields._size;
    if ( v24 >= 1 )
    {
      v25 = 0LL;
      v26 = ObjectList->fields._size;
      while ( 1 )
      {
        if ( v26 <= (unsigned int)v25 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v27 = v23->fields._items->m_Items[v25];
        v28 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
        System_Action___ctor(v28, (Il2CppObject *)this, Method_CombineCommandCodeListViewManager_OnMoveEnd__, 0LL);
        if ( !v27 )
          break;
        zero = UnityEngine_Vector3__get_zero(0LL);
        CombineCommandCodeListViewObject__Init(
          v27,
          mode,
          v28,
          zero.fields.x,
          *(UnityEngine_Vector3_o *)&zero.fields.y,
          v29);
        if ( (int)v25 + 1 >= v24 )
          return;
        v26 = v23->fields._size;
        ++v25;
      }
LABEL_14:
      sub_B5D69C(ObjectList, v21);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineCommandCodeListViewManager__SetDecideButtonStatus(
        CombineCommandCodeListViewManager_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  struct UICommonButton_o *decideButton; // x0
  __int64 v6; // x1

  decideButton = this->fields.decideButton;
  if ( !decideButton
    || (((void (__fastcall *)(struct UICommonButton_o *, bool, Il2CppMethodPointer))decideButton->klass->vtable._5_set_isEnabled.method)(
          decideButton,
          isEnable,
          decideButton->klass->vtable._6_OnInit.methodPtr),
        (decideButton = this->fields.decideButton) == 0LL) )
  {
    sub_B5D69C(decideButton, isEnable);
  }
  if ( isEnable )
    v6 = 0LL;
  else
    v6 = 3LL;
  ((void (__fastcall *)(struct UICommonButton_o *, __int64, __int64, Il2CppMethodPointer))decideButton->klass->vtable._14_SetState.method)(
    decideButton,
    v6,
    1LL,
    decideButton->klass->vtable._15_OnPress.methodPtr);
}


void __fastcall CombineCommandCodeListViewManager__SetFilterButtonImage(
        CombineCommandCodeListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v10; // x8

  if ( (byte_42E8D95 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_17202/*"btn_filter_on"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_17201/*"btn_filter"*/, v5, v6, v7);
    byte_42E8D95 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !filterSprite) )
  {
    sub_B5D69C(sort, method);
  }
  v10 = (System_String_o **)&StringLiteral_17201/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v10 = (System_String_o **)&StringLiteral_17202/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v10, 0LL);
}


void __fastcall CombineCommandCodeListViewManager__SetMode(
        CombineCommandCodeListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc2 = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  CombineCommandCodeListViewManager__SetMode_25708528(this, mode, v10);
}


void __fastcall CombineCommandCodeListViewManager__SetMode_25708528(
        CombineCommandCodeListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Object_o *scrollView; // x21
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  UnityEngine_Behaviour_o *v9; // x0
  int32_t v10; // w1

  if ( (byte_42E8D87 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, mode, (_DWORD)method, v3);
    byte_42E8D87 = 1;
  }
  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 3, 0LL);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
  {
    v9 = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( !v9 )
      goto LABEL_18;
    if ( UnityEngine_Behaviour__get_enabled(v9, 0LL) )
      goto LABEL_12;
    v9 = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( !v9
      || (UnityEngine_Behaviour__set_enabled(v9, 1, 0LL),
          (v9 = (UnityEngine_Behaviour_o *)this->fields.scrollView) == 0LL) )
    {
LABEL_18:
      sub_B5D69C(v9, v7);
    }
    UIScrollView__UpdatePosition((UIScrollView_o *)v9, 0LL);
  }
LABEL_12:
  if ( mode == 2 )
  {
    v10 = 2;
LABEL_16:
    CombineCommandCodeListViewManager__RequestListObject(this, v10, 0.0, v8);
    return;
  }
  if ( mode == 3 )
  {
    v10 = 3;
    goto LABEL_16;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineCommandCodeListViewManager__SetObjectItem(
        CombineCommandCodeListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  CombineCommandCodeListViewManager_o *v5; // x20
  __int64 v6; // x10
  int32_t initMode; // w20
  const MethodInfo *v8; // x3
  float v9; // s0
  int v10; // s1
  int32_t v13; // w1

  v5 = this;
  if ( (byte_42E8D86 & 1) == 0 )
  {
    this = (CombineCommandCodeListViewManager_o *)sub_B5D5C4(
                                                    &CombineCommandCodeListViewObject_TypeInfo,
                                                    (_DWORD)obj,
                                                    (_DWORD)item,
                                                    method);
    byte_42E8D86 = 1;
  }
  if ( !obj
    || (v6 = *(&CombineCommandCodeListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (CombineCommandCodeListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != CombineCommandCodeListViewObject_TypeInfo )
  {
    sub_B5D69C(this, obj);
  }
  initMode = v5->fields.initMode;
  *(UnityEngine_Vector3_o *)&v9 = UnityEngine_Vector3__get_zero(0LL);
  if ( initMode == 3 )
    v13 = 3;
  else
    v13 = 2;
  CombineCommandCodeListViewObject__Init(
    (CombineCommandCodeListViewObject_o *)obj,
    v13,
    0LL,
    v9,
    *(UnityEngine_Vector3_o *)&v10,
    v8);
}


void __fastcall CombineCommandCodeListViewManager__SetSelectedCommandCodeData(
        CombineCommandCodeListViewManager_o *this,
        CombineCommandCodeListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_Component_o *selectedCommandCode; // x0
  System_String_o *MargeExplanation_26826256; // x21
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  const MethodInfo *v17; // x2
  struct CombineCommandCodeListViewItem_o *selectItem; // x8
  struct UserCommandCodeEntity_o *userCommandCode; // x8
  __int128 v20; // q1
  char v21; // w1
  const MethodInfo *v22; // x2
  __int64 v23; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+20h] [xbp-50h]
  System_String_array *explanationList; // [xsp+40h] [xbp-30h] BYREF
  System_String_array *titleList; // [xsp+48h] [xbp-28h] BYREF
  System_Int32_array *idList; // [xsp+58h] [xbp-18h] BYREF

  if ( (byte_42E8D81 & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, (_DWORD)item, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_1/*""*/, v6, v7, v8);
    byte_42E8D81 = 1;
  }
  idList = 0LL;
  explanationList = 0LL;
  titleList = 0LL;
  if ( !item || !item->fields.userCommandCode )
  {
    selectedCommandCode = (UnityEngine_Component_o *)this->fields.selectedCommandCode;
    if ( selectedCommandCode )
    {
      selectedCommandCode = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(selectedCommandCode, 0LL);
      if ( selectedCommandCode )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)selectedCommandCode, 0, 0LL);
        selectedCommandCode = (UnityEngine_Component_o *)this->fields.skillName;
        if ( selectedCommandCode )
        {
          UILabel__set_text((UILabel_o *)selectedCommandCode, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          selectedCommandCode = (UnityEngine_Component_o *)this->fields.skillMessage;
          if ( selectedCommandCode )
          {
            UILabel__set_text((UILabel_o *)selectedCommandCode, (System_String_o *)StringLiteral_1/*""*/, 0LL);
            CombineCommandCodeListViewManager__SetDecideButtonStatus(this, 0, v22);
            selectedCommandCode = (UnityEngine_Component_o *)this->fields.equippedInfo;
            if ( selectedCommandCode )
              goto LABEL_23;
          }
        }
      }
    }
LABEL_29:
    sub_B5D69C(selectedCommandCode, item);
  }
  selectedCommandCode = (UnityEngine_Component_o *)this->fields.selectedCommandCode;
  if ( !selectedCommandCode )
    goto LABEL_29;
  selectedCommandCode = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(selectedCommandCode, 0LL);
  if ( !selectedCommandCode )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)selectedCommandCode, 1, 0LL);
  selectedCommandCode = (UnityEngine_Component_o *)this->fields.selectedCommandCode;
  if ( !selectedCommandCode )
    goto LABEL_29;
  ServantFaceIconComponent__Set_30855448(
    (ServantFaceIconComponent_o *)selectedCommandCode,
    item->fields.userCommandCode,
    0LL,
    0LL,
    0LL);
  selectedCommandCode = (UnityEngine_Component_o *)item->fields.userCommandCode;
  if ( !selectedCommandCode )
    goto LABEL_29;
  UserCommandCodeEntity__GetSkillInfo(
    (UserCommandCodeEntity_o *)selectedCommandCode,
    &idList,
    &titleList,
    &explanationList,
    0LL);
  MargeExplanation_26826256 = SkillInfo__GetMargeExplanation_26826256(explanationList, 0LL);
  this->fields.selectItem = item;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.selectItem,
    (System_Int32_array **)item,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  if ( !titleList )
    goto LABEL_29;
  if ( !titleList->max_length )
  {
    v23 = sub_B5D6C8(selectedCommandCode);
    sub_B5D668(v23, 0LL);
  }
  selectedCommandCode = (UnityEngine_Component_o *)this->fields.skillName;
  if ( !selectedCommandCode )
    goto LABEL_29;
  UILabel__set_text((UILabel_o *)selectedCommandCode, titleList->m_Items[0], 0LL);
  WrapControlText__textAdjust(this->fields.skillMessage, MargeExplanation_26826256, 22, 0, 0, 0LL);
  selectItem = this->fields.selectItem;
  if ( selectItem && (userCommandCode = selectItem->fields.userCommandCode) != 0LL )
  {
    v20 = *(_OWORD *)&userCommandCode->fields.id.fields.fakeValue;
    *(_OWORD *)&v25.fields.currentCryptoKey = *(_OWORD *)&userCommandCode->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v25.fields.fakeValue = v20;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v24 = v25;
    v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v24, 0LL) != this->fields.nowEquipedUserCommandCodeId;
  }
  else
  {
    v21 = 1;
  }
  CombineCommandCodeListViewManager__SetDecideButtonStatus(this, v21, v17);
  selectedCommandCode = (UnityEngine_Component_o *)this->fields.equippedInfo;
  if ( !selectedCommandCode )
    goto LABEL_29;
  if ( !item->fields.isEquiped )
  {
LABEL_23:
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)selectedCommandCode, 0, 0LL);
    return;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)selectedCommandCode, 1, 0LL);
  CombineUtility__SetCommandCodeEquippedInfoLabel(
    this->fields.equippedLabel,
    this->fields.nameLabel,
    item->fields._EquipedSvtId_k__BackingField,
    item->fields._EquipedSvtId_k__BackingField != item->fields._BaseSvtId_k__BackingField,
    0LL);
}


void __fastcall CombineCommandCodeListViewManager__SetSortButtonImage(
        CombineCommandCodeListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  UnityEngine_Object_o *sortKindLabel; // x20
  __int64 v24; // x1
  ListViewSort_o *sort; // x0
  UILabel_o *v26; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v28; // x8
  int32_t sortKind; // w9
  System_String_o **v30; // x8
  struct ListViewSort_o *v31; // x8
  _BOOL4 isAscendingOrder; // w8
  System_String_o **v33; // x9
  System_String_o **v34; // x10
  System_String_o **v35; // x8
  struct ListViewSort_o *v36; // x8
  System_String_o **v37; // x8

  if ( (byte_42E8D99 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_17230/*"btn_sort_up"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_17314/*"btn_txt_up"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_17270/*"btn_txt_new"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_17260/*"btn_txt_down"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_17277/*"btn_txt_old"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_17227/*"btn_sort_down"*/, v20, v21, v22);
    byte_42E8D99 = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_36;
    v26 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0LL);
    if ( !v26 )
      goto LABEL_36;
    UILabel__set_text(v26, (System_String_o *)sort, 0LL);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0LL, 0LL);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v28 = this->fields.sort;
    if ( v28 )
    {
      sortKind = v28->fields.sortKind;
      if ( sortKind == 11 || sortKind == 1 )
      {
        sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
        if ( sort )
        {
          v30 = (System_String_o **)(v28->fields.isAscendingOrder ? &StringLiteral_17277/*"btn_txt_old"*/ : &StringLiteral_17270/*"btn_txt_new"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v30, 0LL);
          v31 = this->fields.sort;
          if ( v31 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              isAscendingOrder = v31->fields.isAscendingOrder;
              v33 = (System_String_o **)&StringLiteral_17227/*"btn_sort_down"*/;
              v34 = (System_String_o **)&StringLiteral_17230/*"btn_sort_up"*/;
LABEL_32:
              if ( isAscendingOrder )
                v37 = v33;
              else
                v37 = v34;
              UISprite__set_spriteName((UISprite_o *)sort, *v37, 0LL);
              return;
            }
          }
        }
      }
      else
      {
        sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
        if ( sort )
        {
          v35 = (System_String_o **)(v28->fields.isAscendingOrder ? &StringLiteral_17314/*"btn_txt_up"*/ : &StringLiteral_17260/*"btn_txt_down"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v35, 0LL);
          v36 = this->fields.sort;
          if ( v36 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              isAscendingOrder = v36->fields.isAscendingOrder;
              v33 = (System_String_o **)&StringLiteral_17230/*"btn_sort_up"*/;
              v34 = (System_String_o **)&StringLiteral_17227/*"btn_sort_down"*/;
              goto LABEL_32;
            }
          }
        }
      }
    }
LABEL_36:
    sub_B5D69C(sort, v24);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineCommandCodeListViewManager__SetStatusKind(
        CombineCommandCodeListViewManager_o *this,
        int32_t modeKind,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  UnityEngine_Behaviour_o *statusTabButton; // x0
  __int64 *v37; // x8
  __int64 *v38; // x8
  __int64 *v39; // x8
  int32_t v40; // w8
  UILabel_o *v41; // x20
  const MethodInfo *v42; // x2
  struct CombineCommandCodeListViewItem_o *selectItem; // x8
  struct UserCommandCodeEntity_o *userCommandCode; // x8
  __int128 v45; // q1
  bool v46; // w1
  UILabel_o *combineInfoMsgLb; // x20
  __int64 *v48; // x8
  const MethodInfo *v49; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+20h] [xbp-40h]

  if ( (byte_42E8D80 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, modeKind, (_DWORD)method, v3);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_17333/*"button_allchoice_reg"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_17336/*"button_alllock_unreg"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_11877/*"SERVANT_LIST_EXPLANATION_CHOICE"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_11878/*"SERVANT_LIST_EXPLANATION_LOCK"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_17349/*"button_select_reg"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_3230/*"COMBINE_COMMAND_CODE_SELECT_COMMAND_CODE_MSG"*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_17350/*"button_select_unreg"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_17335/*"button_alllock_reg"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_17334/*"button_allchoice_unreg"*/, v33, v34, v35);
    byte_42E8D80 = 1;
  }
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabButton;
  this->fields.modeKind = modeKind;
  if ( !statusTabButton )
    goto LABEL_47;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, void *))statusTabButton->klass[1]._1.namespaze)(
    statusTabButton,
    1LL,
    statusTabButton->klass[1]._1.byval_arg.data);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabButton;
  if ( !statusTabButton )
    goto LABEL_47;
  UnityEngine_Behaviour__set_enabled(statusTabButton, modeKind != 0, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabSprite;
  if ( !statusTabButton )
    goto LABEL_47;
  v37 = &StringLiteral_17349/*"button_select_reg"*/;
  if ( modeKind )
    v37 = &StringLiteral_17350/*"button_select_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v37, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabButton;
  if ( !statusTabButton )
    goto LABEL_47;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))statusTabButton->klass[1]._1.implementedInterfaces)(
    statusTabButton,
    0LL,
    0LL,
    statusTabButton->klass[1]._1.interfaceOffsets);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
  if ( !statusTabButton )
    goto LABEL_47;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, void *))statusTabButton->klass[1]._1.namespaze)(
    statusTabButton,
    1LL,
    statusTabButton->klass[1]._1.byval_arg.data);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
  if ( !statusTabButton )
    goto LABEL_47;
  UnityEngine_Behaviour__set_enabled(statusTabButton, modeKind != 1, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabSprite;
  if ( !statusTabButton )
    goto LABEL_47;
  v38 = &StringLiteral_17335/*"button_alllock_reg"*/;
  if ( modeKind != 1 )
    v38 = &StringLiteral_17336/*"button_alllock_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v38, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
  if ( !statusTabButton )
    goto LABEL_47;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))statusTabButton->klass[1]._1.implementedInterfaces)(
    statusTabButton,
    0LL,
    0LL,
    statusTabButton->klass[1]._1.interfaceOffsets);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
  if ( !statusTabButton )
    goto LABEL_47;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, void *))statusTabButton->klass[1]._1.namespaze)(
    statusTabButton,
    1LL,
    statusTabButton->klass[1]._1.byval_arg.data);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
  if ( !statusTabButton )
    goto LABEL_47;
  UnityEngine_Behaviour__set_enabled(statusTabButton, modeKind != 2, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabSprite;
  if ( !statusTabButton )
    goto LABEL_47;
  v39 = &StringLiteral_17333/*"button_allchoice_reg"*/;
  if ( modeKind != 2 )
    v39 = &StringLiteral_17334/*"button_allchoice_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v39, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
  if ( !statusTabButton )
    goto LABEL_47;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))statusTabButton->klass[1]._1.implementedInterfaces)(
    statusTabButton,
    0LL,
    0LL,
    statusTabButton->klass[1]._1.interfaceOffsets);
  v40 = this->fields.modeKind;
  if ( v40 == 2 )
  {
    combineInfoMsgLb = this->fields.combineInfoMsgLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v48 = &StringLiteral_11877/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
LABEL_42:
    statusTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get((System_String_o *)*v48, 0LL);
    if ( combineInfoMsgLb )
    {
      UILabel__set_text(combineInfoMsgLb, (System_String_o *)statusTabButton, 0LL);
      CombineCommandCodeListViewManager__SetDecideButtonStatus(this, 0, v49);
      return;
    }
    goto LABEL_47;
  }
  if ( v40 == 1 )
  {
    combineInfoMsgLb = this->fields.combineInfoMsgLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v48 = &StringLiteral_11878/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
    goto LABEL_42;
  }
  if ( v40 )
    return;
  v41 = this->fields.combineInfoMsgLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  statusTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3230/*"COMBINE_COMMAND_CODE_SELECT_COMMAND_CODE_MSG"*/, 0LL);
  if ( !v41 )
LABEL_47:
    sub_B5D69C(statusTabButton, *(_QWORD *)&modeKind);
  UILabel__set_text(v41, (System_String_o *)statusTabButton, 0LL);
  selectItem = this->fields.selectItem;
  if ( selectItem && (userCommandCode = selectItem->fields.userCommandCode) != 0LL )
  {
    v45 = *(_OWORD *)&userCommandCode->fields.id.fields.fakeValue;
    *(_OWORD *)&v51.fields.currentCryptoKey = *(_OWORD *)&userCommandCode->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v51.fields.fakeValue = v45;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v50 = v51;
    v46 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v50, 0LL) != this->fields.nowEquipedUserCommandCodeId;
  }
  else
  {
    v46 = 0;
  }
  CombineCommandCodeListViewManager__SetDecideButtonStatus(this, v46, v42);
}


void __fastcall CombineCommandCodeListViewManager__StatusRequest(
        CombineCommandCodeListViewManager_o *this,
        CombineCommandCodeListViewManager_RequestCallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int32_t modeKind; // w8
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  NetworkManager_ResultCallbackFunc_o *v22; // x20
  CommandCodeStatusSyncRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v24; // x1
  System_Int64_array *v25; // x2
  System_Int64_array *v26; // x1
  bool v27; // w3
  bool v28; // w4
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  NetworkManager_ResultCallbackFunc_o *v35; // x20
  System_Int64_array *unchoiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *choiceList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *unlockList; // [xsp+18h] [xbp-28h] BYREF
  System_Int64_array *lockList; // [xsp+28h] [xbp-18h] BYREF

  if ( (byte_42E8D90 & 1) == 0 )
  {
    sub_B5D5C4(&Method_CombineCommandCodeListViewManager_EndStatusSync__, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_NetworkManager_getRequest_CommandCodeStatusSyncRequest___, v6, v7, v8);
    sub_B5D5C4(&NetworkManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v12, v13, v14);
    byte_42E8D90 = 1;
  }
  lockList = 0LL;
  choiceList = 0LL;
  unlockList = 0LL;
  unchoiceList = 0LL;
  modeKind = this->fields.modeKind;
  if ( modeKind == 2 )
  {
    if ( CombineCommandCodeListViewManager__GetSwapChoiceList(this, &choiceList, &unchoiceList, v3) )
    {
      this->fields.requestCallback = callback;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.requestCallback,
        (System_Int32_array **)callback,
        v29,
        v30,
        v31,
        v32,
        v33,
        v34);
      v35 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v35,
        (Il2CppObject *)this,
        Method_CombineCommandCodeListViewManager_EndStatusSync__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Request_WarBoardWallAttackRequest = (CommandCodeStatusSyncRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                              v35,
                                                                              (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_CommandCodeStatusSyncRequest___);
      if ( Request_WarBoardWallAttackRequest )
      {
        v25 = unchoiceList;
        v26 = choiceList;
        v28 = 1;
        v27 = 0;
        goto LABEL_17;
      }
LABEL_21:
      sub_B5D69C(Request_WarBoardWallAttackRequest, v24);
    }
  }
  else if ( modeKind == 1 && CombineCommandCodeListViewManager__GetSwapLockList(this, &lockList, &unlockList, v3) )
  {
    this->fields.requestCallback = callback;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.requestCallback,
      (System_Int32_array **)callback,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
    v22 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v22,
      (Il2CppObject *)this,
      Method_CombineCommandCodeListViewManager_EndStatusSync__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = (CommandCodeStatusSyncRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                            v22,
                                                                            (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_CommandCodeStatusSyncRequest___);
    if ( Request_WarBoardWallAttackRequest )
    {
      v25 = unlockList;
      v26 = lockList;
      v27 = 1;
      v28 = 0;
LABEL_17:
      CommandCodeStatusSyncRequest__beginRequest(Request_WarBoardWallAttackRequest, v26, v25, v27, v28, 0LL);
      return;
    }
    goto LABEL_21;
  }
  if ( callback )
    CombineCommandCodeListViewManager_RequestCallbackFunc__Invoke(callback, 0, 0LL);
}


void __fastcall CombineCommandCodeListViewManager__add_callbackFunc2(
        CombineCommandCodeListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  CombineCommandCodeListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42E8D7B & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E8D7B = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc2, v8, callbackFunc2);
    v10 = callbackFunc2 == (System_Delegate_o *)v9;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (CombineCommandCodeListViewManager_o *)sub_B5D990(v8);
  CombineCommandCodeListViewManager__remove_callbackFunc2(v11, v12, v13);
}


System_Collections_Generic_List_CombineCommandCodeListViewObject__o *__fastcall CombineCommandCodeListViewManager__get_ClippingObjectList(
        CombineCommandCodeListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v23; // x20
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  const MethodInfo *v25; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x21
  signed __int64 size; // x22
  unsigned __int64 v28; // x23
  UnityEngine_Object_o *v29; // x21
  EventMissionProgressRequest_Argument_ProgressData_o *v30; // x21

  if ( (byte_42E8D7E & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_CombineCommandCodeListViewObject___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_CombineCommandCodeListViewObject__Add__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_CombineCommandCodeListViewObject___ctor__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_List_CombineCommandCodeListViewObject__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v20, v21, v22);
    byte_42E8D7E = 1;
  }
  v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_CombineCommandCodeListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v23,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_CombineCommandCodeListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    goto LABEL_21;
  size = objectList->fields._size;
  if ( (int)size >= 1 )
  {
    v28 = 0LL;
    do
    {
      if ( v28 >= (unsigned int)objectList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v29 = (UnityEngine_Object_o *)objectList->fields._items->m_Items[v28];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_Object__op_Equality(
                                                                                         v29,
                                                                                         0LL,
                                                                                         0LL);
      if ( ((unsigned __int8)Component_srcLineSprite & 1) == 0 )
      {
        if ( !v29 )
          break;
        Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                           (UnityEngine_GameObject_o *)v29,
                                                                                           (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_CombineCommandCodeListViewObject___);
        if ( !Component_srcLineSprite )
          break;
        v30 = Component_srcLineSprite;
        Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)CombineCommandCodeListViewObject__GetItem(
                                                                                           (CombineCommandCodeListViewObject_o *)Component_srcLineSprite,
                                                                                           v25);
        if ( !Component_srcLineSprite )
          break;
        v25 = (const MethodInfo *)Component_srcLineSprite;
        if ( !LOBYTE(Component_srcLineSprite[2].monitor)
          || (Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)ListViewManager__ClippingItem_23920288(
                                                                                                 (ListViewManager_o *)this,
                                                                                                 (ListViewItem_o *)Component_srcLineSprite,
                                                                                                 0LL),
              ((unsigned __int8)Component_srcLineSprite & 1) != 0) )
        {
          if ( !v23 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v23,
            v30,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_CombineCommandCodeListViewObject__Add__);
        }
      }
      if ( (__int64)++v28 >= size )
        return (System_Collections_Generic_List_CombineCommandCodeListViewObject__o *)v23;
      objectList = this->fields.objectList;
    }
    while ( objectList );
LABEL_21:
    sub_B5D69C(Component_srcLineSprite, v25);
  }
  return (System_Collections_Generic_List_CombineCommandCodeListViewObject__o *)v23;
}


int32_t __fastcall CombineCommandCodeListViewManager__get_GetModeKind(
        CombineCommandCodeListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.modeKind;
}


System_Collections_Generic_List_CombineCommandCodeListViewObject__o *__fastcall CombineCommandCodeListViewManager__get_ObjectList(
        CombineCommandCodeListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v23; // x20
  srcLineSprite_o *Component_srcLineSprite; // x0
  __int64 v25; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x21
  signed __int64 size; // x22
  unsigned __int64 v28; // x23
  UnityEngine_Object_o *v29; // x21

  if ( (byte_42E8D7D & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_CombineCommandCodeListViewObject___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_CombineCommandCodeListViewObject__Add__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_CombineCommandCodeListViewObject___ctor__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_List_CombineCommandCodeListViewObject__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v20, v21, v22);
    byte_42E8D7D = 1;
  }
  v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_CombineCommandCodeListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v23,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_CombineCommandCodeListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    goto LABEL_17;
  size = objectList->fields._size;
  if ( (int)size >= 1 )
  {
    v28 = 0LL;
    do
    {
      if ( v28 >= (unsigned int)objectList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v29 = (UnityEngine_Object_o *)objectList->fields._items->m_Items[v28];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Component_srcLineSprite = (srcLineSprite_o *)UnityEngine_Object__op_Equality(v29, 0LL, 0LL);
      if ( ((unsigned __int8)Component_srcLineSprite & 1) == 0 )
      {
        if ( !v29 )
          break;
        Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    (UnityEngine_GameObject_o *)v29,
                                    (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_CombineCommandCodeListViewObject___);
        if ( !v23 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v23,
          (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_CombineCommandCodeListViewObject__Add__);
      }
      if ( (__int64)++v28 >= size )
        return (System_Collections_Generic_List_CombineCommandCodeListViewObject__o *)v23;
      objectList = this->fields.objectList;
    }
    while ( objectList );
LABEL_17:
    sub_B5D69C(Component_srcLineSprite, v25);
  }
  return (System_Collections_Generic_List_CombineCommandCodeListViewObject__o *)v23;
}


void __fastcall CombineCommandCodeListViewManager__remove_callbackFunc2(
        CombineCommandCodeListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  CombineCommandCodeListViewManager_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_42E8D7C & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E8D7C = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc2, v8, callbackFunc2);
    v10 = callbackFunc2 == (System_Delegate_o *)v9;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (CombineCommandCodeListViewManager_o *)sub_B5D990(v8);
  CombineCommandCodeListViewManager__get_ObjectList(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineCommandCodeListViewManager_RequestCallbackFunc___ctor(
        CombineCommandCodeListViewManager_RequestCallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B5D560(p_method);
}


System_IAsyncResult_o *__fastcall CombineCommandCodeListViewManager_RequestCallbackFunc__BeginInvoke(
        CombineCommandCodeListViewManager_RequestCallbackFunc_o *this,
        bool isRequest,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = isRequest;
  if ( (byte_42E5EAC & 1) == 0 )
  {
    sub_B5D5C4(&bool_TypeInfo, isRequest, (_DWORD)callback, object);
    byte_42E5EAC = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B5D568(this, v9, callback, object);
}


void __fastcall CombineCommandCodeListViewManager_RequestCallbackFunc__EndInvoke(
        CombineCommandCodeListViewManager_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineCommandCodeListViewManager_RequestCallbackFunc__Invoke(
        CombineCommandCodeListViewManager_RequestCallbackFunc_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  CombineCommandCodeListViewManager_RequestCallbackFunc_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w23
  __int64 class_0; // x0
  __int64 v11; // x3
  __int64 v12; // x8
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, bool, _QWORD); // x0
  CombineCommandCodeListViewManager_RequestCallbackFunc_o *v19; // x8
  __int64 *v20; // x21
  __int64 v21; // x22
  void (__fastcall *v22)(bool, __int64); // x23
  char v23; // w23
  char v24; // w0
  __int64 v25; // x3
  __int64 v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  unsigned __int64 v29; // x10
  _DWORD *v30; // x11
  CombineCommandCodeListViewManager_RequestCallbackFunc_o *v31; // [xsp+8h] [xbp-48h] BYREF

  v31 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v31;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (CombineCommandCodeListViewManager_RequestCallbackFunc_o **)(v3 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v19 = v7[v8];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(bool, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v19->fields.extra_arg, isRequest, method);
      if ( (sub_B5D5F4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22(isRequest, v21);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B5D5EC(v21);
      v24 = sub_B5D9F0(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v26 = *v20;
          v27 = *(_QWORD *)(v21 + 24);
          v28 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v29 = 0LL;
            v30 = (_DWORD *)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *((_QWORD *)v30 - 1) != v27 )
            {
              ++v29;
              v30 += 4;
              if ( v29 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v26 + 16LL * (*v30 + (int)v28) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AF54C0(v20, v27, v28, v25);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B5D674(v16, v21);
        (*v18)(v20, isRequest, v18);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v21 + 72);
        if ( (v24 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v21);
          v12 = *v20;
          if ( *(_WORD *)(*v20 + 298) )
          {
            v13 = 0LL;
            v14 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v14 - 1) != class_0 )
            {
              ++v13;
              v14 += 4;
              if ( v13 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_11;
            }
            v15 = v12 + 16LL * (int)(*v14 + v9) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AF54C0(v20, class_0, v9, v11);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v15)(v20, isRequest, *(_QWORD *)(v15 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 312))(
            v20,
            isRequest,
            *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v22)(v20, isRequest, v21);
    goto LABEL_37;
  }
}