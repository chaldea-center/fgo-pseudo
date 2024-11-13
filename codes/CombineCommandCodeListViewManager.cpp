void __fastcall CombineCommandCodeListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  System_String_o *v7; // x0
  System_String_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  ListViewSort_o *v12; // x20
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int v19; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B19A04 & 1) == 0 )
  {
    sub_1BCA7E0(&CombineCommandCodeListViewManager_TypeInfo, v1, v2);
    sub_1BCA7E0(&ListViewSort_TypeInfo, v3, v4);
    sub_1BCA7E0(&StringLiteral_4670/*"CombineCommandCode"*/, v5, v6);
    byte_4B19A04 = 1;
  }
  v19 = 1;
  v7 = System_Int32__ToString((int32_t)&v19, 0LL);
  v8 = System_String__Concat_62401220((System_String_o *)StringLiteral_4670/*"CombineCommandCode"*/, v7, 0LL);
  v12 = (ListViewSort_o *)sub_1BCAA2C(ListViewSort_TypeInfo, v9, v10, v11);
  ListViewSort___ctor_41480716(v12, v8, 2, 0, 0LL);
  CombineCommandCodeListViewManager_TypeInfo->static_fields->commandCodeSortInfo = v12;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)CombineCommandCodeListViewManager_TypeInfo->static_fields,
    (int64_t)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
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
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  int64_t bgTxtSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  __int64 v61; // x1
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  CombineCommandCodeListViewManager_c *v68; // x0
  struct ListViewSort_o **p_commandCodeSortInfo; // x8
  struct ListViewSort_o *v70; // x1
  struct ListViewSort_o **p_sort; // x26
  const MethodInfo *v72; // x2
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7
  BalanceConfig_c *v79; // x8
  int64_t v80; // x24
  struct BalanceConfig_StaticFields *static_fields; // x10
  unsigned int iconScaleKind; // w8
  int CommandCodeFrameMax; // w26
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  UISprite_o *scaleChangeButtonSprite; // x20
  UserServantCommandCodeMaster_o *v86; // x27
  __int64 v87; // x19
  int v88; // w20
  System_Collections_Generic_List_long__o *v89; // x28
  int v90; // w19
  int v91; // w21
  __int64 v92; // x29
  __int128 v93; // q0
  __int128 v94; // q0
  __int64 v95; // x1
  int v96; // w27
  System_Collections_Generic_Dictionary_long__long__o *v97; // x25
  unsigned int v98; // w22
  __int64 v99; // x27
  __int128 v100; // q0
  _OWORD *v101; // x19
  bool v102; // w0
  __int128 v103; // q1
  bool v104; // w28
  int64_t v105; // x0
  __int64 v106; // x1
  __int128 v107; // q0
  int64_t v108; // x0
  int32_t Item; // w20
  __int128 v110; // q0
  int64_t v111; // x21
  bool v112; // w21
  __int64 v113; // x1
  __int64 v114; // x2
  __int64 v115; // x3
  CombineCommandCodeListViewItem_o *v116; // x29
  const MethodInfo *v117; // x7
  __int64 v118; // x1
  __int128 v119; // q0
  const MethodInfo *v120; // x2
  int32_t v121; // w3
  System_String_o *v122; // x4
  BattleSetupInfo_o *v123; // x5
  FollowerInfo_o *v124; // x6
  PartyListViewItem_o *v125; // x7
  __int64 v126; // x8
  _QWORD *v127; // x9
  __int64 v128; // x10
  __int64 v129; // x8
  UILabel_o *emptyMessageLabel; // x20
  __int64 *v131; // x8
  UILabel_o *commandCodeInfoLabel; // x21
  System_String_o *v133; // x20
  Il2CppObject *v134; // x22
  Il2CppObject *v135; // x0
  const MethodInfo *v136; // x2
  const MethodInfo *v137; // x1
  int32_t v138; // [xsp+8h] [xbp-198h]
  char isMax; // [xsp+14h] [xbp-18Ch]
  int v140; // [xsp+18h] [xbp-188h]
  CombineCommandCodeListViewManager_o *v143; // [xsp+30h] [xbp-170h]
  int v144; // [xsp+3Ch] [xbp-164h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v145; // [xsp+40h] [xbp-160h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v146; // [xsp+60h] [xbp-140h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v147; // [xsp+80h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v148; // [xsp+A0h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v149; // [xsp+C0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v150; // [xsp+E0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v151; // [xsp+100h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v152; // [xsp+120h] [xbp-80h] BYREF

  if ( (byte_4B199E7 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, *(_QWORD *)&baseSvtId, beforeSelectedUserCommandCodeId);
    sub_1BCA7E0(&CombineCommandCodeListViewItem_TypeInfo, v11, v12);
    sub_1BCA7E0(&CombineCommandCodeListViewManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v15, v16);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantCommandCodeMaster___, v17, v18);
    sub_1BCA7E0(&DataManager_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_long__long__ContainsKey__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_long__long__get_Item__, v23, v24);
    sub_1BCA7E0(&int_TypeInfo, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__Add__, v27, v28);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__Contains__, v29, v30);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v31, v32);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v33, v34);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v35, v36);
    sub_1BCA7E0(&StringLiteral_20464/*"img_bg_arts"*/, v37, v38);
    sub_1BCA7E0(&StringLiteral_3751/*"COMMAND_CODE_EMPTY"*/, v39, v40);
    sub_1BCA7E0(&StringLiteral_20466/*"img_bg_buster"*/, v41, v42);
    sub_1BCA7E0(&StringLiteral_20476/*"img_bg_quick"*/, v43, v44);
    sub_1BCA7E0(&StringLiteral_12532/*"SUM_INFO"*/, v45, v46);
    byte_4B199E7 = 1;
  }
  bgTxtSprite = (int64_t)this->fields.bgTxtSprite;
  if ( !bgTxtSprite )
    goto LABEL_92;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgTxtSprite, 0LL);
  bgTxtSprite = BgTxtManager__IsActiveBgTxt(0LL);
  if ( !gameObject )
    goto LABEL_92;
  UnityEngine_GameObject__SetActive(gameObject, bgTxtSprite & 1, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  this->fields.selectShowStatusUserCmdCode = 0LL;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.selectShowStatusUserCmdCode,
    0LL,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  this->fields.selectItem = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.selectItem, 0LL, v55, v56, v57, v58, v59, v60);
  this->fields.nowEquipedUserCommandCodeId = nowEquipedUserCommandCodeId;
  v68 = CombineCommandCodeListViewManager_TypeInfo;
  if ( !CombineCommandCodeListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineCommandCodeListViewManager_TypeInfo, v61);
    v68 = CombineCommandCodeListViewManager_TypeInfo;
  }
  p_commandCodeSortInfo = &v68->static_fields->commandCodeSortInfo;
  v70 = *p_commandCodeSortInfo;
  this->fields.sort = *p_commandCodeSortInfo;
  p_sort = &this->fields.sort;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.sort, (int64_t)v70, v62, v63, v64, v65, v66, v67);
  bgTxtSprite = (int64_t)this->fields.sort;
  if ( !bgTxtSprite )
    goto LABEL_92;
  *(_DWORD *)(bgTxtSprite + 128) = 3;
  ListViewSort__Load((ListViewSort_o *)bgTxtSprite, 0LL);
  CombineCommandCodeListViewManager__SetSelectedCommandCodeData(this, 0LL, v72);
  bgTxtSprite = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !bgTxtSprite )
    goto LABEL_92;
  bgTxtSprite = (int64_t)DataManager__GetMasterData_object_(
                           (DataManager_o *)bgTxtSprite,
                           (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !bgTxtSprite )
    goto LABEL_92;
  bgTxtSprite = (int64_t)UserCommandCodeMaster__getList((UserCommandCodeMaster_o *)bgTxtSprite, 0LL);
  v79 = BalanceConfig_TypeInfo;
  v80 = bgTxtSprite;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, *(_QWORD *)&baseSvtId);
    v79 = BalanceConfig_TypeInfo;
  }
  if ( !*p_sort )
    goto LABEL_92;
  static_fields = v79->static_fields;
  iconScaleKind = (*p_sort)->fields.iconScaleKind;
  CommandCodeFrameMax = static_fields->CommandCodeFrameMax;
  this->fields.scaleType = iconScaleKind;
  if ( iconScaleKind < 2 )
  {
    normalSizeSeed = this->fields.normalSizeSeed;
    goto LABEL_19;
  }
  if ( iconScaleKind == 2 )
  {
    normalSizeSeed = this->fields.smallSizeSeed;
    goto LABEL_19;
  }
  if ( iconScaleKind == 3 )
  {
    normalSizeSeed = this->fields.extremelySmallSizeSeed;
LABEL_19:
    this->fields.seed = normalSizeSeed;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.seed, (int64_t)normalSizeSeed, v73, v74, v75, v76, v77, v78);
  }
  bgTxtSprite = (int64_t)this->fields.sort;
  if ( !bgTxtSprite )
    goto LABEL_92;
  scaleChangeButtonSprite = this->fields.scaleChangeButtonSprite;
  bgTxtSprite = (int64_t)ListViewSort__GetScaleKindSpriteName(
                           (ListViewSort_o *)bgTxtSprite,
                           this->fields.scaleType,
                           0LL);
  if ( !scaleChangeButtonSprite )
    goto LABEL_92;
  UISprite__set_spriteName(scaleChangeButtonSprite, (System_String_o *)bgTxtSprite, 0LL);
  v143 = this;
  if ( v80 && *(_QWORD *)(v80 + 24) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&baseSvtId);
    bgTxtSprite = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantCommandCodeMaster___);
    if ( bgTxtSprite )
    {
      v86 = (UserServantCommandCodeMaster_o *)bgTxtSprite;
      v138 = commandCardType;
      bgTxtSprite = (int64_t)UserServantCommandCodeMaster__GetEquipedCommandCodeList(
                               (UserServantCommandCodeMaster_o *)bgTxtSprite,
                               0LL);
      v87 = *(_QWORD *)(v80 + 24);
      isMax = 0;
      v140 = v87;
      if ( CommandCodeFrameMax <= (int)v87 )
      {
        v88 = v87 - 1;
        if ( (int)v87 >= 1 )
        {
          v89 = (System_Collections_Generic_List_long__o *)bgTxtSprite;
          v90 = 0;
          v91 = 0;
          while ( 1 )
          {
            v92 = *(_QWORD *)(v80 + 8LL * v90 + 32);
            if ( !v92 )
              goto LABEL_92;
            v93 = *(_OWORD *)(v92 + 32);
            *(_OWORD *)&v152.fields.currentCryptoKey = *(_OWORD *)(v92 + 16);
            *(_OWORD *)&v152.fields.fakeValue = v93;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(
                CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                *(_QWORD *)&baseSvtId);
            v151 = v152;
            bgTxtSprite = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v151, 0LL);
            if ( bgTxtSprite != nowEquipedUserCommandCodeId )
            {
              v94 = *(_OWORD *)(v92 + 32);
              *(_OWORD *)&v152.fields.currentCryptoKey = *(_OWORD *)(v92 + 16);
              *(_OWORD *)&v152.fields.fakeValue = v94;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(
                  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                  *(_QWORD *)&baseSvtId);
              v150 = v152;
              bgTxtSprite = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v150, 0LL);
              if ( !v89 )
                goto LABEL_92;
              bgTxtSprite = System_Collections_Generic_List_long___Contains(
                              v89,
                              bgTxtSprite,
                              (const MethodInfo_358A008 *)Method_System_Collections_Generic_List_long__Contains__);
              if ( (bgTxtSprite & 1) != 0 && ++v91 >= CommandCodeFrameMax )
                break;
            }
            if ( v88 == v90 )
            {
              isMax = 0;
              goto LABEL_46;
            }
            if ( (unsigned int)++v90 >= *(_DWORD *)(v80 + 24) )
              goto LABEL_41;
          }
          isMax = 1;
LABEL_46:
          this = v143;
          LODWORD(v87) = v140;
        }
      }
      bgTxtSprite = (int64_t)UserServantCommandCodeMaster__GetEquippedCommandCodeDic(v86, 0LL);
      v96 = v87;
      if ( (int)v87 >= 1 )
      {
        v97 = (System_Collections_Generic_Dictionary_long__long__o *)bgTxtSprite;
        v98 = 0;
        while ( v98 < *(_DWORD *)(v80 + 24) )
        {
          v99 = *(_QWORD *)(v80 + 8LL * (int)v98 + 32);
          if ( !v99 )
            goto LABEL_92;
          v100 = *(_OWORD *)(v99 + 32);
          *(_OWORD *)&v152.fields.currentCryptoKey = *(_OWORD *)(v99 + 16);
          *(_OWORD *)&v152.fields.fakeValue = v100;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(
              CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
              *(_QWORD *)&baseSvtId);
          v149 = v152;
          bgTxtSprite = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v149, 0LL);
          if ( !v97 )
            goto LABEL_92;
          v101 = (_OWORD *)(v99 + 16);
          v102 = System_Collections_Generic_Dictionary_long__long___ContainsKey(
                   v97,
                   bgTxtSprite,
                   (const MethodInfo_32412A8 *)Method_System_Collections_Generic_Dictionary_long__long__ContainsKey__);
          v103 = *(_OWORD *)(v99 + 32);
          v104 = v102;
          *(_OWORD *)&v148.fields.currentCryptoKey = *(_OWORD *)(v99 + 16);
          *(_OWORD *)&v148.fields.fakeValue = v103;
          v105 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v148, 0LL);
          if ( System_Collections_Generic_Dictionary_long__long___ContainsKey(
                 v97,
                 v105,
                 (const MethodInfo_32412A8 *)Method_System_Collections_Generic_Dictionary_long__long__ContainsKey__) )
          {
            v107 = *(_OWORD *)(v99 + 32);
            *(_OWORD *)&v152.fields.currentCryptoKey = *v101;
            *(_OWORD *)&v152.fields.fakeValue = v107;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v106);
            v147 = v152;
            v108 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v147, 0LL);
            Item = System_Collections_Generic_Dictionary_long__long___get_Item(
                     v97,
                     v108,
                     (const MethodInfo_3241014 *)Method_System_Collections_Generic_Dictionary_long__long__get_Item__);
          }
          else
          {
            Item = 0;
          }
          v110 = *(_OWORD *)(v99 + 32);
          v111 = this->fields.nowEquipedUserCommandCodeId;
          *(_OWORD *)&v152.fields.currentCryptoKey = *v101;
          *(_OWORD *)&v152.fields.fakeValue = v110;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v106);
          v146 = v152;
          v112 = v111 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v146, 0LL);
          v116 = (CombineCommandCodeListViewItem_o *)sub_1BCAA2C(
                                                       CombineCommandCodeListViewItem_TypeInfo,
                                                       v113,
                                                       v114,
                                                       v115);
          CombineCommandCodeListViewItem___ctor(
            v116,
            (UserCommandCodeEntity_o *)v99,
            v112,
            v104,
            Item,
            baseSvtId,
            isMax,
            v117);
          v119 = *(_OWORD *)(v99 + 32);
          *(_OWORD *)&v152.fields.currentCryptoKey = *v101;
          *(_OWORD *)&v152.fields.fakeValue = v119;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v118);
          v145 = v152;
          bgTxtSprite = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v145, 0LL);
          this = v143;
          v96 = v140;
          if ( !v116 )
            goto LABEL_92;
          if ( bgTxtSprite == beforeSelectedUserCommandCodeId )
          {
            v116->fields.isSelect = 1;
            CombineCommandCodeListViewManager__SetSelectedCommandCodeData(v143, v116, v120);
          }
          else
          {
            v116->fields.isSelect = 0;
          }
          bgTxtSprite = (int64_t)v143->fields.itemList;
          if ( !bgTxtSprite )
            goto LABEL_92;
          v126 = *(_QWORD *)(bgTxtSprite + 16);
          v127 = Method_System_Collections_Generic_List_ListViewItem__Add__;
          ++*(_DWORD *)(bgTxtSprite + 28);
          if ( !v126 )
            goto LABEL_92;
          v128 = *(int *)(bgTxtSprite + 24);
          if ( (unsigned int)v128 >= *(_DWORD *)(v126 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)bgTxtSprite,
              (Il2CppObject *)v116,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v127[4] + 192LL) + 112LL));
          }
          else
          {
            v129 = v126 + 8 * v128;
            *(_DWORD *)(bgTxtSprite + 24) = v128 + 1;
            *(_QWORD *)(v129 + 32) = v116;
            sub_1BCA784(
              (PartyOrganizationUtility_o *)(v129 + 32),
              (int64_t)v116,
              (int64_t)v120,
              v121,
              v122,
              v123,
              v124,
              v125);
          }
          if ( v140 == ++v98 )
            goto LABEL_73;
        }
LABEL_41:
        sub_1BCAA44(bgTxtSprite, *(_QWORD *)&baseSvtId);
      }
LABEL_73:
      bgTxtSprite = (int64_t)this->fields.emptyMessageBase;
      if ( bgTxtSprite )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bgTxtSprite, 0, 0LL);
        commandCardType = v138;
        goto LABEL_75;
      }
    }
LABEL_92:
    sub_1BCAA3C(bgTxtSprite, *(_QWORD *)&baseSvtId);
  }
  bgTxtSprite = (int64_t)this->fields.emptyMessageBase;
  if ( !bgTxtSprite )
    goto LABEL_92;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bgTxtSprite, 1, 0LL);
  v96 = 0;
LABEL_75:
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v95);
  bgTxtSprite = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3751/*"COMMAND_CODE_EMPTY"*/, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_92;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)bgTxtSprite, 0LL);
  switch ( commandCardType )
  {
    case 1:
      bgTxtSprite = (int64_t)v143->fields.commandCardTypeSprite;
      if ( !bgTxtSprite )
        goto LABEL_92;
      v131 = &StringLiteral_20464/*"img_bg_arts"*/;
      break;
    case 3:
      bgTxtSprite = (int64_t)v143->fields.commandCardTypeSprite;
      if ( !bgTxtSprite )
        goto LABEL_92;
      v131 = &StringLiteral_20476/*"img_bg_quick"*/;
      break;
    case 2:
      bgTxtSprite = (int64_t)v143->fields.commandCardTypeSprite;
      if ( !bgTxtSprite )
        goto LABEL_92;
      v131 = &StringLiteral_20466/*"img_bg_buster"*/;
      break;
    default:
      goto LABEL_88;
  }
  UISprite__set_spriteName((UISprite_o *)bgTxtSprite, (System_String_o *)*v131, 0LL);
LABEL_88:
  commandCodeInfoLabel = v143->fields.commandCodeInfoLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&baseSvtId);
  v133 = LocalizationManager__Get((System_String_o *)StringLiteral_12532/*"SUM_INFO"*/, 0LL);
  LODWORD(v152.fields.currentCryptoKey) = v96;
  v134 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v152);
  v144 = CommandCodeFrameMax;
  v135 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v144);
  bgTxtSprite = (int64_t)System_String__Format_62415592(v133, v134, v135, 0LL);
  if ( !commandCodeInfoLabel )
    goto LABEL_92;
  UILabel__set_text(commandCodeInfoLabel, (System_String_o *)bgTxtSprite, 0LL);
  CombineCommandCodeListViewManager__SetStatusKind(v143, modeKind, v136);
  ListViewManager__SortItem((ListViewManager_o *)v143, -1, 0, -1, 0LL);
  CombineCommandCodeListViewManager__SetFilterButtonImage(v143, v137);
}


void __fastcall CombineCommandCodeListViewManager__DestroyList(
        CombineCommandCodeListViewManager_o *this,
        const MethodInfo *method)
{
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7
  __int64 v9; // x1
  ListViewSort_o *sort; // x0

  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  this->fields.selectShowStatusUserCmdCode = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.selectShowStatusUserCmdCode, 0LL, v3, v4, v5, v6, v7, v8);
  sort = this->fields.sort;
  if ( !sort )
    sub_1BCAA3C(0LL, v9);
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
  CombineCommandCodeListViewManager__SetMode_45591408(this, 3, v5);
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
  CombineCommandCodeListViewManager__SetMode_45591408(this, 3, v5);
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
  CombineCommandCodeListViewManager__SetMode_45591408(this, 3, v5);
}


void __fastcall CombineCommandCodeListViewManager__EndCloseSelectFilterKind(
        CombineCommandCodeListViewManager_o *this,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineCommandCodeListViewManager__EndSelectFilterKind(
        CombineCommandCodeListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  const MethodInfo *v9; // x1
  Il2CppObject *Instance; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  System_Action_o *v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1

  if ( (byte_4B199FC & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, method);
    sub_1BCA7E0(&Method_CombineCommandCodeListViewManager_EndCloseSelectFilterKind__, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7, v8);
    byte_4B199FC = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    CombineCommandCodeListViewManager__SetFilterButtonImage(this, v9);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v11, v12, v13);
  System_Action___ctor(
    v14,
    (Il2CppObject *)this,
    Method_CombineCommandCodeListViewManager_EndCloseSelectFilterKind__,
    0LL);
  if ( !Instance )
    sub_1BCAA3C(v15, v16);
  CommonUI__CloseServantFilterSelectMenu((CommonUI_o *)Instance, v14, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineCommandCodeListViewManager__EndSelectSortKind(
        CombineCommandCodeListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4B199FF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, method);
    byte_4B199FF = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v6);
  CommonUI__CloseServantSortSelectMenu((CommonUI_o *)Instance, 0LL, 0LL);
}


void __fastcall CombineCommandCodeListViewManager__EndStatusSync(
        CombineCommandCodeListViewManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct CombineCommandCodeListViewManager_RequestCallbackFunc_o *requestCallback; // x19
  PartyOrganizationUtility_o *p_requestCallback; // x0

  requestCallback = this->fields.requestCallback;
  if ( requestCallback )
  {
    p_requestCallback = (PartyOrganizationUtility_o *)&this->fields.requestCallback;
    p_requestCallback->klass = 0LL;
    sub_1BCA784(p_requestCallback, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))requestCallback->fields.m_target)(
      requestCallback->fields.original_method_info,
      1LL,
      *(_QWORD *)&requestCallback->fields.extra_arg);
  }
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall CombineCommandCodeListViewManager__GetCommandCodeAmountSortValue(
        CombineCommandCodeListViewManager_o *this,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w23
  int32_t v11; // w22
  int64_t v12; // x21
  __int64 methodPtr_low; // x10

  if ( (byte_4B19A02 & 1) == 0 )
  {
    sub_1BCA7E0(&CombineCommandCodeListViewItem_TypeInfo, *(_QWORD *)&commandCodeId, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v7, v8);
    byte_4B19A02 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_13;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v11 = 0;
    v12 = 0LL;
    do
    {
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemList,
                                                                v11,
                                                                (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        break;
      methodPtr_low = LOBYTE(CombineCommandCodeListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (CombineCommandCodeListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineCommandCodeListViewItem_TypeInfo )
      {
        break;
      }
      ++v11;
      if ( CombineCommandCodeListViewItem__get_CommandCodeId(
             (CombineCommandCodeListViewItem_o *)itemList,
             *(const MethodInfo **)&commandCodeId) == commandCodeId )
        ++v12;
      if ( size == v11 )
        return v12;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    }
    while ( itemList );
LABEL_13:
    sub_1BCAA3C(itemList, *(_QWORD *)&commandCodeId);
  }
  return 0LL;
}


bool __fastcall CombineCommandCodeListViewManager__GetFocusItemIndex(
        CombineCommandCodeListViewManager_o *this,
        int32_t *index,
        System_Collections_Generic_List_ListViewItem__o *list,
        int32_t sum,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x2
  int32_t v10; // w22
  __int64 methodPtr_low; // x10

  if ( (byte_4B19A03 & 1) == 0 )
  {
    sub_1BCA7E0(&CombineCommandCodeListViewItem_TypeInfo, index, list);
    this = (CombineCommandCodeListViewManager_o *)sub_1BCA7E0(
                                                    &Method_System_Collections_Generic_List_ListViewItem__get_Item__,
                                                    v8,
                                                    v9);
    byte_4B19A03 = 1;
  }
  *index = -1;
  if ( sum >= 1 )
  {
    if ( !list )
LABEL_14:
      sub_1BCAA3C(this, index);
    v10 = 0;
    while ( 1 )
    {
      this = (CombineCommandCodeListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                      (System_Collections_Generic_List_object__o *)list,
                                                      v10,
                                                      (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !this )
        goto LABEL_14;
      methodPtr_low = LOBYTE(CombineCommandCodeListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (CombineCommandCodeListViewItem_c *)this->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineCommandCodeListViewItem_TypeInfo )
      {
        goto LABEL_14;
      }
      if ( HIBYTE(this->fields.clipRange.fields.x) )
        break;
      if ( sum == ++v10 )
        return 1;
    }
    *index = v10;
  }
  return 1;
}


// local variable allocation has failed, the output may be wrong!
CombineCommandCodeListViewItem_o *__fastcall CombineCommandCodeListViewManager__GetItem(
        CombineCommandCodeListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  CombineCommandCodeListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4B199ED & 1) == 0 )
  {
    sub_1BCA7E0(&CombineCommandCodeListViewItem_TypeInfo, *(_QWORD *)&index, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5, v6);
    byte_4B199ED = 1;
  }
  result = (CombineCommandCodeListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (CombineCommandCodeListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)result,
                                                   index,
                                                   (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      methodPtr_low = LOBYTE(CombineCommandCodeListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      {
        if ( (CombineCommandCodeListViewItem_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineCommandCodeListViewItem_TypeInfo )
          return 0LL;
      }
      else
      {
        return 0LL;
      }
    }
  }
  return result;
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
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  System_Collections_Generic_List_long__o *v23; // x23
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  System_Collections_Generic_List_long__o *v27; // x22
  int64_t v28; // x1
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t itemList; // x0
  int v36; // w25
  int32_t v37; // w24
  __int64 methodPtr_low; // x10
  __int64 v39; // x8
  __int128 v40; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x8
  __int128 v45; // q0
  struct System_Int64_array *v46; // x8
  _QWORD *v47; // x9
  __int64 v48; // x10
  __int64 v49; // x8
  System_Collections_Generic_List_long__o *v50; // x0
  int v51; // w21
  System_Int64_array *v52; // x0
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  System_Int64_array *v59; // x1
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  System_Int64_array **v66; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v68; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v69; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v70; // [xsp+40h] [xbp-80h]

  if ( (byte_4B199F4 & 1) == 0 )
  {
    sub_1BCA7E0(&CombineCommandCodeListViewItem_TypeInfo, choiceList, unchoiceList);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__Add__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__ToArray__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long___ctor__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__get_Count__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v17, v18);
    sub_1BCA7E0(&System_Collections_Generic_List_long__TypeInfo, v19, v20);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v21, v22);
    byte_4B199F4 = 1;
  }
  v23 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     choiceList,
                                                     unchoiceList,
                                                     method);
  System_Collections_Generic_List_long____ctor(
    v23,
    (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
  v27 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     v24,
                                                     v25,
                                                     v26);
  System_Collections_Generic_List_long____ctor(
    v27,
    (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v36 = *(_DWORD *)(itemList + 24);
  if ( v36 >= 1 )
  {
    v37 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v37,
                            (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      methodPtr_low = LOBYTE(CombineCommandCodeListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low
        || *(CombineCommandCodeListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * methodPtr_low - 8) != CombineCommandCodeListViewItem_TypeInfo )
      {
        goto LABEL_37;
      }
      v39 = *(_QWORD *)(itemList + 128);
      if ( v39 && *(_BYTE *)(itemList + 118) )
      {
        if ( *(_BYTE *)(itemList + 114) )
        {
          v40 = *(_OWORD *)(v39 + 32);
          *(_OWORD *)&v70.fields.currentCryptoKey = *(_OWORD *)(v39 + 16);
          *(_OWORD *)&v70.fields.fakeValue = v40;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v28);
          v69 = v70;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v69, 0LL);
          if ( !v27 )
            goto LABEL_37;
          items = v27->fields._items;
          v42 = Method_System_Collections_Generic_List_long__Add__;
          ++v27->fields._version;
          if ( !items )
            goto LABEL_37;
          size = v27->fields._size;
          v28 = itemList;
          if ( (unsigned int)size >= items->max_length )
          {
            v49 = v42[4];
            v50 = v27;
LABEL_27:
            System_Collections_Generic_List_long___AddWithResize(
              v50,
              v28,
              *(const MethodInfo_3589C90 **)(*(_QWORD *)(v49 + 192) + 112LL));
            goto LABEL_28;
          }
          v44 = &items->obj.klass + size;
          v27->fields._size = size + 1;
        }
        else
        {
          v45 = *(_OWORD *)(v39 + 32);
          *(_OWORD *)&v70.fields.currentCryptoKey = *(_OWORD *)(v39 + 16);
          *(_OWORD *)&v70.fields.fakeValue = v45;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v28);
          v68 = v70;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v68, 0LL);
          if ( !v23 )
            goto LABEL_37;
          v46 = v23->fields._items;
          v47 = Method_System_Collections_Generic_List_long__Add__;
          ++v23->fields._version;
          if ( !v46 )
            goto LABEL_37;
          v48 = v23->fields._size;
          v28 = itemList;
          if ( (unsigned int)v48 >= v46->max_length )
          {
            v49 = v47[4];
            v50 = v23;
            goto LABEL_27;
          }
          v44 = &v46->obj.klass + v48;
          v23->fields._size = v48 + 1;
        }
        v44[4] = (Il2CppClass *)v28;
      }
LABEL_28:
      if ( v36 == ++v37 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v23 || !v27 )
LABEL_37:
    sub_1BCAA3C(itemList, v28);
  v51 = v27->fields._size + v23->fields._size;
  if ( v51 < 1 )
  {
    *choiceList = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)choiceList, 0LL, v29, v30, v31, v32, v33, v34);
    v66 = unchoiceList;
    v59 = 0LL;
    *unchoiceList = 0LL;
  }
  else
  {
    v52 = System_Collections_Generic_List_long___ToArray(
            v23,
            (const MethodInfo_358B748 *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v52;
    sub_1BCA784((PartyOrganizationUtility_o *)choiceList, (int64_t)v52, v53, v54, v55, v56, v57, v58);
    v59 = System_Collections_Generic_List_long___ToArray(
            v27,
            (const MethodInfo_358B748 *)Method_System_Collections_Generic_List_long__ToArray__);
    *unchoiceList = v59;
    v66 = unchoiceList;
  }
  sub_1BCA784((PartyOrganizationUtility_o *)v66, (int64_t)v59, v60, v61, v62, v63, v64, v65);
  return v51 > 0;
}


bool __fastcall CombineCommandCodeListViewManager__GetSwapLockList(
        CombineCommandCodeListViewManager_o *this,
        System_Int64_array **lockList,
        System_Int64_array **unlockList,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  System_Collections_Generic_List_long__o *v23; // x23
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  System_Collections_Generic_List_long__o *v27; // x22
  int64_t v28; // x1
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t itemList; // x0
  int v36; // w25
  int32_t v37; // w24
  __int64 methodPtr_low; // x10
  __int64 v39; // x8
  __int128 v40; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x8
  __int128 v45; // q0
  struct System_Int64_array *v46; // x8
  _QWORD *v47; // x9
  __int64 v48; // x10
  __int64 v49; // x8
  System_Collections_Generic_List_long__o *v50; // x0
  int v51; // w21
  System_Int64_array *v52; // x0
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  System_Int64_array *v59; // x1
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  System_Int64_array **v66; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v68; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v69; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v70; // [xsp+40h] [xbp-80h]

  if ( (byte_4B199F3 & 1) == 0 )
  {
    sub_1BCA7E0(&CombineCommandCodeListViewItem_TypeInfo, lockList, unlockList);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__Add__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__ToArray__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long___ctor__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__get_Count__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v17, v18);
    sub_1BCA7E0(&System_Collections_Generic_List_long__TypeInfo, v19, v20);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v21, v22);
    byte_4B199F3 = 1;
  }
  v23 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     lockList,
                                                     unlockList,
                                                     method);
  System_Collections_Generic_List_long____ctor(
    v23,
    (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
  v27 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     v24,
                                                     v25,
                                                     v26);
  System_Collections_Generic_List_long____ctor(
    v27,
    (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v36 = *(_DWORD *)(itemList + 24);
  if ( v36 >= 1 )
  {
    v37 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v37,
                            (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      methodPtr_low = LOBYTE(CombineCommandCodeListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low
        || *(CombineCommandCodeListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * methodPtr_low - 8) != CombineCommandCodeListViewItem_TypeInfo )
      {
        goto LABEL_37;
      }
      v39 = *(_QWORD *)(itemList + 128);
      if ( v39 && *(_BYTE *)(itemList + 117) )
      {
        if ( *(_BYTE *)(itemList + 113) )
        {
          v40 = *(_OWORD *)(v39 + 32);
          *(_OWORD *)&v70.fields.currentCryptoKey = *(_OWORD *)(v39 + 16);
          *(_OWORD *)&v70.fields.fakeValue = v40;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v28);
          v69 = v70;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v69, 0LL);
          if ( !v27 )
            goto LABEL_37;
          items = v27->fields._items;
          v42 = Method_System_Collections_Generic_List_long__Add__;
          ++v27->fields._version;
          if ( !items )
            goto LABEL_37;
          size = v27->fields._size;
          v28 = itemList;
          if ( (unsigned int)size >= items->max_length )
          {
            v49 = v42[4];
            v50 = v27;
LABEL_27:
            System_Collections_Generic_List_long___AddWithResize(
              v50,
              v28,
              *(const MethodInfo_3589C90 **)(*(_QWORD *)(v49 + 192) + 112LL));
            goto LABEL_28;
          }
          v44 = &items->obj.klass + size;
          v27->fields._size = size + 1;
        }
        else
        {
          v45 = *(_OWORD *)(v39 + 32);
          *(_OWORD *)&v70.fields.currentCryptoKey = *(_OWORD *)(v39 + 16);
          *(_OWORD *)&v70.fields.fakeValue = v45;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v28);
          v68 = v70;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v68, 0LL);
          if ( !v23 )
            goto LABEL_37;
          v46 = v23->fields._items;
          v47 = Method_System_Collections_Generic_List_long__Add__;
          ++v23->fields._version;
          if ( !v46 )
            goto LABEL_37;
          v48 = v23->fields._size;
          v28 = itemList;
          if ( (unsigned int)v48 >= v46->max_length )
          {
            v49 = v47[4];
            v50 = v23;
            goto LABEL_27;
          }
          v44 = &v46->obj.klass + v48;
          v23->fields._size = v48 + 1;
        }
        v44[4] = (Il2CppClass *)v28;
      }
LABEL_28:
      if ( v36 == ++v37 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v23 || !v27 )
LABEL_37:
    sub_1BCAA3C(itemList, v28);
  v51 = v27->fields._size + v23->fields._size;
  if ( v51 < 1 )
  {
    *lockList = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)lockList, 0LL, v29, v30, v31, v32, v33, v34);
    v66 = unlockList;
    v59 = 0LL;
    *unlockList = 0LL;
  }
  else
  {
    v52 = System_Collections_Generic_List_long___ToArray(
            v23,
            (const MethodInfo_358B748 *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v52;
    sub_1BCA784((PartyOrganizationUtility_o *)lockList, (int64_t)v52, v53, v54, v55, v56, v57, v58);
    v59 = System_Collections_Generic_List_long___ToArray(
            v27,
            (const MethodInfo_358B748 *)Method_System_Collections_Generic_List_long__ToArray__);
    *unlockList = v59;
    v66 = unlockList;
  }
  sub_1BCA784((PartyOrganizationUtility_o *)v66, (int64_t)v59, v60, v61, v62, v63, v64, v65);
  return v51 > 0;
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
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_object__o *itemList; // x8
  DataManager_o *Instance; // x0
  CombineCommandCodeListViewItem_c *v21; // x1
  DataManager_o *v22; // x20
  int size; // w24
  int32_t v24; // w21
  CombineCommandCodeListViewItem_o *v25; // x22
  __int64 methodPtr_low; // x9
  Il2CppClass *writeMasterDataThread; // x8
  Il2CppType byval_arg; // q0
  int64_t v29; // x0
  __int128 v30; // q1
  const MethodInfo *v31; // x2
  UnityEngine_Object_o *viewObject; // x23
  CombineCommandCodeListViewManager_o *v33; // x0
  const MethodInfo *v34; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+40h] [xbp-80h]

  if ( (byte_4B199EB & 1) == 0 )
  {
    sub_1BCA7E0(&CombineCommandCodeListViewItem_TypeInfo, userCommandCodeId, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v11, v12);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v13, v14);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18);
    byte_4B199EB = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( itemList )
  {
    if ( userCommandCodeId < 1 )
    {
      v22 = 0LL;
    }
    else
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance
        || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                          Instance,
                                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___)) == 0LL
        || (Instance = (DataManager_o *)DataMasterBase_object__object__long___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                          userCommandCodeId,
                                          (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__),
            (itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList) == 0LL) )
      {
LABEL_28:
        sub_1BCAA3C(Instance, v21);
      }
      v22 = Instance;
    }
    size = itemList->fields._size;
    if ( size >= 1 )
    {
      v24 = 0;
      while ( 1 )
      {
        Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                      itemList,
                                      v24,
                                      (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( !Instance )
          goto LABEL_28;
        v21 = CombineCommandCodeListViewItem_TypeInfo;
        v25 = (CombineCommandCodeListViewItem_o *)Instance;
        methodPtr_low = LOBYTE(CombineCommandCodeListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Instance->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
          || (CombineCommandCodeListViewItem_c *)Instance->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineCommandCodeListViewItem_TypeInfo )
        {
          break;
        }
        if ( v22 )
        {
          writeMasterDataThread = (Il2CppClass *)Instance->fields.writeMasterDataThread;
          if ( !writeMasterDataThread )
            goto LABEL_28;
          byval_arg = writeMasterDataThread->_1.byval_arg;
          *(_OWORD *)&v37.fields.currentCryptoKey = *(_OWORD *)&writeMasterDataThread->_1.name;
          *(Il2CppType *)&v37.fields.fakeValue = byval_arg;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(
              CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
              CombineCommandCodeListViewItem_TypeInfo);
          v36 = v37;
          v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v36, 0LL);
          v30 = *(_OWORD *)&v22->fields._DispLog;
          *(SingletonMonoBehaviour_DataManager__Fields *)&v35.fields.currentCryptoKey = v22->fields.SingletonMonoBehaviour_DataManager__Fields;
          *(_OWORD *)&v35.fields.fakeValue = v30;
          if ( v29 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v35, 0LL) )
            CombineCommandCodeListViewItem__Modify(v25, (UserCommandCodeEntity_o *)v22, v31);
        }
        viewObject = (UnityEngine_Object_o *)v25->fields.viewObject;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
        Instance = (DataManager_o *)UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          Instance = (DataManager_o *)v25->fields.viewObject;
          if ( !Instance )
            goto LABEL_28;
          Instance = (DataManager_o *)((__int64 (__fastcall *)(DataManager_o *, CombineCommandCodeListViewItem_o *, void *))Instance->klass[1]._1.namespaze)(
                                        Instance,
                                        v25,
                                        Instance->klass[1]._1.byval_arg.data);
        }
        if ( size == ++v24 )
          return;
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( !itemList )
          goto LABEL_28;
      }
      sub_1BCACFC(Instance);
      CombineCommandCodeListViewManager__OnClickDecide(v33, v34);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineCommandCodeListViewManager__ModifyList(
        CombineCommandCodeListViewManager_o *this,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  DataManager_o *Instance; // x0
  CombineCommandCodeListViewItem_c *v17; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int size; // w26
  unsigned int v20; // w28
  DataManager_c **v21; // x21
  DataManager_c *v22; // x8
  ListViewItem_o *v23; // x21
  DataManager_c *v24; // t1
  Il2CppType byval_arg; // q0
  int64_t v26; // x0
  DataManager_o *v27; // x22
  int32_t v28; // w24
  DataManager_o *v29; // x23
  __int64 v30; // x9
  struct System_Threading_Thread_o *writeMasterDataThread; // x8
  __int128 v32; // q0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  int64_t klass; // x1
  const MethodInfo *v40; // x1
  int32_t v41; // w20
  Il2CppObject *Item; // x0
  __int64 methodPtr_low; // x9
  UnityEngine_Object_o *monitor; // x22
  CombineCommandCodeListViewManager_o *v45; // x0
  int64_t v46; // x1
  const MethodInfo *v47; // x2
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // [xsp+10h] [xbp-D0h]
  DataManager_o *v50; // [xsp+18h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+60h] [xbp-80h]

  if ( (byte_4B199EA & 1) == 0 )
  {
    sub_1BCA7E0(&CombineCommandCodeListViewItem_TypeInfo, isIconSizeChange, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v8, v9);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v10, v11);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15);
    byte_4B199EA = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !Instance )
    goto LABEL_45;
  Instance = (DataManager_o *)UserCommandCodeMaster__getList((UserCommandCodeMaster_o *)Instance, 0LL);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_45;
  size = itemList->fields._size;
  if ( !Instance
    || (m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource, (int)m_CancellationTokenSource < 1) )
  {
LABEL_31:
    if ( size < 1 || !isIconSizeChange )
      return;
    v41 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.itemList;
      if ( !Instance )
        break;
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)Instance,
               v41,
               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( Item )
      {
        v23 = (ListViewItem_o *)Item;
        methodPtr_low = LOBYTE(CombineCommandCodeListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
          || (CombineCommandCodeListViewItem_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineCommandCodeListViewItem_TypeInfo )
        {
          goto LABEL_47;
        }
        monitor = (UnityEngine_Object_o *)Item[6].monitor;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, CombineCommandCodeListViewItem_TypeInfo);
        if ( !UnityEngine_Object__op_Equality(monitor, 0LL, 0LL) )
        {
          Instance = (DataManager_o *)v23->fields.viewObject;
          if ( !Instance )
            break;
          ListViewObject__SetItemSeed((ListViewObject_o *)Instance, v23, this->fields.seed, 0LL);
        }
      }
      if ( size == ++v41 )
        return;
    }
LABEL_45:
    sub_1BCAA3C(Instance, v17);
  }
  if ( !(_DWORD)m_CancellationTokenSource )
    goto LABEL_30;
  v20 = 0;
  v50 = Instance;
  while ( 1 )
  {
    v21 = &Instance->klass + (int)v20;
    v24 = v21[4];
    v23 = (ListViewItem_o *)(v21 + 4);
    v22 = v24;
    if ( !v24 )
      goto LABEL_45;
    byval_arg = v22->_1.byval_arg;
    *(_OWORD *)&v53.fields.currentCryptoKey = *(_OWORD *)&v22->_1.name;
    *(Il2CppType *)&v53.fields.fakeValue = byval_arg;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v17);
    v52 = v53;
    v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v52, 0LL);
    if ( size >= 1 )
      break;
LABEL_28:
    Instance = v50;
    if ( ++v20 == (_DWORD)m_CancellationTokenSource )
      goto LABEL_31;
    if ( v20 >= LODWORD(v50->fields.m_CancellationTokenSource) )
      goto LABEL_30;
  }
  v27 = (DataManager_o *)v26;
  v28 = 0;
  while ( 1 )
  {
    Instance = (DataManager_o *)this->fields.itemList;
    if ( !Instance )
      goto LABEL_45;
    Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                  (System_Collections_Generic_List_object__o *)Instance,
                                  v28,
                                  (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( !Instance )
      goto LABEL_45;
    v17 = CombineCommandCodeListViewItem_TypeInfo;
    v29 = Instance;
    v30 = LOBYTE(CombineCommandCodeListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(Instance->klass->vtable._0_Equals.methodPtr) < (unsigned int)v30
      || (CombineCommandCodeListViewItem_c *)Instance->klass->_2.typeHierarchy[v30 - 1] != CombineCommandCodeListViewItem_TypeInfo )
    {
      break;
    }
    writeMasterDataThread = Instance->fields.writeMasterDataThread;
    if ( writeMasterDataThread )
    {
      v32 = *(_OWORD *)&writeMasterDataThread->fields.pending_exception;
      *(_OWORD *)&v53.fields.currentCryptoKey = *(_OWORD *)&writeMasterDataThread->fields.internal_thread;
      *(_OWORD *)&v53.fields.fakeValue = v32;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(
          CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
          CombineCommandCodeListViewItem_TypeInfo);
      v51 = v53;
      Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v51, 0LL);
      if ( Instance == v27 )
      {
        if ( v20 < LODWORD(v50->fields.m_CancellationTokenSource) )
        {
          klass = (int64_t)v23->klass;
          v29->fields.writeMasterDataThread = (struct System_Threading_Thread_o *)v23->klass;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&v29->fields.writeMasterDataThread,
            klass,
            v33,
            v34,
            v35,
            v36,
            v37,
            v38);
          if ( !isIconSizeChange )
          {
            CombineCommandCodeListViewItem__ModifyLockItem(
              (CombineCommandCodeListViewItem_o *)v29,
              (const MethodInfo *)v17);
            CombineCommandCodeListViewItem__ModifyChoiceItem((CombineCommandCodeListViewItem_o *)v29, v40);
          }
          goto LABEL_28;
        }
LABEL_30:
        sub_1BCAA44(Instance, v17);
      }
    }
    if ( size == ++v28 )
      goto LABEL_28;
  }
  sub_1BCACFC(Instance);
LABEL_47:
  sub_1BCACFC(v23);
  CombineCommandCodeListViewManager__ModifyItem(v45, v46, v47);
}


void __fastcall CombineCommandCodeListViewManager__OnClickChoiceTab(
        CombineCommandCodeListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  __int64 v12; // x3
  CombineCommandCodeListViewManager_RequestCallbackFunc_o *v13; // x20
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x2

  if ( (byte_4B199F7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CombineCommandCodeListViewManager_EndClickTabChoice__, method, v2);
    sub_1BCA7E0(&Method_CombineCommandCodeListViewManager_OnClickChoiceTab__, v4, v5);
    sub_1BCA7E0(&CombineCommandCodeListViewManager_RequestCallbackFunc_TypeInfo, v6, v7);
    byte_4B199F7 = 1;
  }
  if ( this->fields.modeKind != 2 )
  {
    v8 = Method_CombineCommandCodeListViewManager_OnClickChoiceTab__;
    if ( (*((_BYTE *)Method_CombineCommandCodeListViewManager_OnClickChoiceTab__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_CombineCommandCodeListViewManager_OnClickChoiceTab__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
    if ( this->fields.modeKind )
    {
      v13 = (CombineCommandCodeListViewManager_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                                         CombineCommandCodeListViewManager_RequestCallbackFunc_TypeInfo,
                                                                         v10,
                                                                         v11,
                                                                         v12);
      CombineCommandCodeListViewManager_RequestCallbackFunc___ctor(
        v13,
        (Il2CppObject *)this,
        Method_CombineCommandCodeListViewManager_EndClickTabChoice__,
        v14);
      CombineCommandCodeListViewManager__StatusRequest(this, v13, v15);
    }
    else
    {
      CombineCommandCodeListViewManager__SetStatusKind(this, 2, v11);
      CombineCommandCodeListViewManager__ModifyList(this, 0, v16);
      CombineCommandCodeListViewManager__SetMode_45591408(this, 3, v17);
    }
  }
}


void __fastcall CombineCommandCodeListViewManager__OnClickCollectLock(
        CombineCommandCodeListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  __int64 v12; // x3
  CombineCommandCodeListViewManager_RequestCallbackFunc_o *v13; // x20
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x2

  if ( (byte_4B199F6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CombineCommandCodeListViewManager_EndClickTabLock__, method, v2);
    sub_1BCA7E0(&Method_CombineCommandCodeListViewManager_OnClickCollectLock__, v4, v5);
    sub_1BCA7E0(&CombineCommandCodeListViewManager_RequestCallbackFunc_TypeInfo, v6, v7);
    byte_4B199F6 = 1;
  }
  if ( this->fields.modeKind != 1 )
  {
    v8 = Method_CombineCommandCodeListViewManager_OnClickCollectLock__;
    if ( (*((_BYTE *)Method_CombineCommandCodeListViewManager_OnClickCollectLock__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_CombineCommandCodeListViewManager_OnClickCollectLock__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
    if ( this->fields.modeKind )
    {
      v13 = (CombineCommandCodeListViewManager_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                                         CombineCommandCodeListViewManager_RequestCallbackFunc_TypeInfo,
                                                                         v10,
                                                                         v11,
                                                                         v12);
      CombineCommandCodeListViewManager_RequestCallbackFunc___ctor(
        v13,
        (Il2CppObject *)this,
        Method_CombineCommandCodeListViewManager_EndClickTabLock__,
        v14);
      CombineCommandCodeListViewManager__StatusRequest(this, v13, v15);
    }
    else
    {
      CombineCommandCodeListViewManager__SetStatusKind(this, 1, v11);
      CombineCommandCodeListViewManager__ModifyList(this, 0, v16);
      CombineCommandCodeListViewManager__SetMode_45591408(this, 3, v17);
    }
  }
}


void __fastcall CombineCommandCodeListViewManager__OnClickDecide(
        CombineCommandCodeListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  struct CombineCommandCodeListViewItem_o *selectItem; // x8
  struct UserCommandCodeEntity_o *userCommandCode; // x8
  __int128 v14; // q1
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0
  _QWORD *v17; // x0
  System_Reflection_MethodBase_o *v18; // x0
  __int64 v19; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+20h] [xbp-40h]

  if ( (byte_4B199EC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CombineCommandCodeListViewManager_OnClickDecide__, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserCommandCodeMaster___, v4, v5);
    sub_1BCA7E0(&DataManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v8, v9);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10, v11);
    byte_4B199EC = 1;
  }
  selectItem = this->fields.selectItem;
  if ( selectItem )
  {
    userCommandCode = selectItem->fields.userCommandCode;
    if ( userCommandCode )
    {
      v14 = *(_OWORD *)&userCommandCode->fields.id.fields.fakeValue;
      *(_OWORD *)&v22.fields.currentCryptoKey = *(_OWORD *)&userCommandCode->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v22.fields.fakeValue = v14;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
      v21 = v22;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v21, 0LL) != this->fields.nowEquipedUserCommandCodeId )
      {
        v17 = Method_CombineCommandCodeListViewManager_OnClickDecide__;
        if ( (*((_BYTE *)Method_CombineCommandCodeListViewManager_OnClickDecide__ + 83) & 2) != 0 )
          v17 = (_QWORD *)sub_1BCA7F8(Method_CombineCommandCodeListViewManager_OnClickDecide__);
        v18 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v17, v17[4]);
        OverwriteAssetSoundName__PlaySystemSe(v18, 0, 0LL);
        if ( this->fields.nowEquipedUserCommandCodeId >= 1 )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v19);
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserCommandCodeMaster___);
          if ( !Master_object )
            goto LABEL_21;
          DataMasterBase_object__object__long___GetEntity(
            Master_object,
            this->fields.nowEquipedUserCommandCodeId,
            (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
        }
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.combineRootComponent;
        if ( Master_object )
        {
          CombineRootComponent__ShowSelectedCommandCode((CombineRootComponent_o *)Master_object, 0LL);
          return;
        }
LABEL_21:
        sub_1BCAA3C(Master_object, v19);
      }
    }
  }
  v15 = Method_CombineCommandCodeListViewManager_OnClickDecide__;
  if ( (*((_BYTE *)Method_CombineCommandCodeListViewManager_OnClickDecide__ + 83) & 2) != 0 )
    v15 = (_QWORD *)sub_1BCA7F8(Method_CombineCommandCodeListViewManager_OnClickDecide__);
  v16 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v15, v15[4]);
  OverwriteAssetSoundName__PlaySystemSe(v16, 2, 0LL);
}


void __fastcall CombineCommandCodeListViewManager__OnClickFilterKind(
        CombineCommandCodeListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  Il2CppObject *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v14; // x21
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  ServantFilterSelectMenu_CallbackFunc_o *v18; // x22
  __int64 v19; // x0
  __int64 v20; // x1

  if ( (byte_4B199FB & 1) == 0 )
  {
    sub_1BCA7E0(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_CombineCommandCodeListViewManager_EndSelectFilterKind__, v4, v5);
    sub_1BCA7E0(&Method_CombineCommandCodeListViewManager_OnClickFilterKind__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    byte_4B199FB = 1;
  }
  if ( this->fields.isInput )
  {
    v10 = Method_CombineCommandCodeListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_CombineCommandCodeListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v10 = (_QWORD *)sub_1BCA7F8(Method_CombineCommandCodeListViewManager_OnClickFilterKind__);
    v11 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v10, v10[4]);
    OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v14 = (CommonUI_o *)Instance;
    v18 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1BCAA2C(
                                                      ServantFilterSelectMenu_CallbackFunc_TypeInfo,
                                                      v15,
                                                      v16,
                                                      v17);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v18,
      (Il2CppObject *)this,
      Method_CombineCommandCodeListViewManager_EndSelectFilterKind__,
      0LL);
    if ( !v14 )
      sub_1BCAA3C(v19, v20);
    CommonUI__OpenServantFilterSelectMenu_30773292(v14, 6, sort, (ListViewManager_o *)this, v18, -1, 0LL);
  }
}


void __fastcall CombineCommandCodeListViewManager__OnClickListView(
        CombineCommandCodeListViewManager_o *this,
        ListViewObject_o *listviewObject,
        const MethodInfo *method)
{
  ;
}


void __fastcall CombineCommandCodeListViewManager__OnClickListView_45595756(
        CombineCommandCodeListViewManager_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  int64_t v3; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 methodPtr_low; // x9
  _QWORD *v18; // x0
  System_Reflection_MethodBase_o *v19; // x0
  System_Collections_Generic_List_object__o *itemList; // x0
  CombineCommandCodeListViewItem_c *v21; // x1
  __int64 v22; // x8
  __int128 v23; // q1
  int64_t v24; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  const MethodInfo *v31; // x2
  int64_t v32; // x21
  const MethodInfo *v33; // x2
  int size; // w25
  System_Collections_Generic_List_object__o *v35; // x22
  __int64 v36; // x9
  _OWORD *monitor; // x8
  __int128 v38; // q0
  int v39; // w22
  System_Collections_Generic_List_object__o *v40; // x20
  int32_t v41; // w21
  CombineCommandCodeListViewManager_o *v42; // x0
  ListViewItem_o *v43; // x1
  const MethodInfo *v44; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v45; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+20h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v47; // [xsp+40h] [xbp-70h]

  v3 = (int64_t)item;
  if ( (byte_4B199F9 & 1) == 0 )
  {
    sub_1BCA7E0(&CombineCommandCodeListViewItem_TypeInfo, item, method);
    sub_1BCA7E0(&Method_CombineCommandCodeListViewManager_OnClickListView__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_CombineCommandCodeListViewObject__get_Count__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_CombineCommandCodeListViewObject__get_Item__, v13, v14);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v15, v16);
    byte_4B199F9 = 1;
  }
  if ( v3 )
  {
    methodPtr_low = LOBYTE(CombineCommandCodeListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v3 + 304LL) < (unsigned int)methodPtr_low
      || *(CombineCommandCodeListViewItem_c **)(*(_QWORD *)(*(_QWORD *)v3 + 200LL) + 8 * methodPtr_low - 8) != CombineCommandCodeListViewItem_TypeInfo )
    {
LABEL_36:
      sub_1BCACFC(v3);
      CombineCommandCodeListViewManager__OnLongPushListView(v42, v43, v44);
      return;
    }
  }
  v18 = Method_CombineCommandCodeListViewManager_OnClickListView__;
  if ( (*((_BYTE *)Method_CombineCommandCodeListViewManager_OnClickListView__ + 83) & 2) != 0 )
    v18 = (_QWORD *)sub_1BCA7F8(Method_CombineCommandCodeListViewManager_OnClickListView__);
  v19 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v18, v18[4]);
  OverwriteAssetSoundName__PlaySystemSe(v19, 0, 0LL);
  if ( !v3 )
    goto LABEL_28;
  v22 = *(_QWORD *)(v3 + 128);
  if ( !v22 )
    goto LABEL_28;
  v23 = *(_OWORD *)(v22 + 32);
  *(_OWORD *)&v47.fields.currentCryptoKey = *(_OWORD *)(v22 + 16);
  *(_OWORD *)&v47.fields.fakeValue = v23;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v21);
  v46 = v47;
  v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v46, 0LL);
  if ( *(_BYTE *)(v3 + 115) )
  {
    *(_BYTE *)(v3 + 115) = 0;
    this->fields.selectItem = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.selectItem, 0LL, v25, v26, v27, v28, v29, v30);
    CombineCommandCodeListViewManager__SetSelectedCommandCodeData(this, 0LL, v31);
    v32 = 0LL;
  }
  else
  {
    v32 = v24;
    *(_BYTE *)(v3 + 115) = 1;
    this->fields.selectItem = (struct CombineCommandCodeListViewItem_o *)v3;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.selectItem, v3, v25, v26, v27, v28, v29, v30);
    CombineCommandCodeListViewManager__SetSelectedCommandCodeData(this, (CombineCommandCodeListViewItem_o *)v3, v33);
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_28;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v3 = 0LL;
    while ( 1 )
    {
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemList,
                                                                v3,
                                                                (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_28;
      v21 = CombineCommandCodeListViewItem_TypeInfo;
      v35 = itemList;
      v36 = LOBYTE(CombineCommandCodeListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)v36
        || (CombineCommandCodeListViewItem_c *)itemList->klass->_2.typeHierarchy[v36 - 1] != CombineCommandCodeListViewItem_TypeInfo )
      {
        break;
      }
      monitor = itemList[3].monitor;
      if ( !monitor )
        goto LABEL_28;
      v38 = monitor[2];
      *(_OWORD *)&v47.fields.currentCryptoKey = monitor[1];
      *(_OWORD *)&v47.fields.fakeValue = v38;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(
          CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
          CombineCommandCodeListViewItem_TypeInfo);
      v45 = v47;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v45, 0LL) != v32 )
        BYTE3(v35[2].fields._syncRoot) = 0;
      v3 = (unsigned int)(v3 + 1);
      if ( size == (_DWORD)v3 )
        goto LABEL_29;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !itemList )
        goto LABEL_28;
    }
    sub_1BCACFC(itemList);
    goto LABEL_36;
  }
LABEL_29:
  itemList = (System_Collections_Generic_List_object__o *)CombineCommandCodeListViewManager__get_ObjectList(
                                                            this,
                                                            (const MethodInfo *)v21);
  if ( !itemList )
LABEL_28:
    sub_1BCAA3C(itemList, v21);
  v39 = itemList->fields._size;
  v40 = itemList;
  if ( v39 >= 1 )
  {
    v41 = 0;
    while ( 1 )
    {
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                v40,
                                                                v41,
                                                                (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_CombineCommandCodeListViewObject__get_Item__);
      if ( !itemList )
        break;
      ((void (__fastcall *)(System_Collections_Generic_List_object__o *, bool, Il2CppMethodPointer))itemList->klass->vtable._9_unknown.method)(
        itemList,
        this->fields.isInput,
        itemList->klass->vtable._10_System_Collections_Generic_ICollection_T__get_IsReadOnly.methodPtr);
      if ( v39 == ++v41 )
        return;
    }
    goto LABEL_28;
  }
}


void __fastcall CombineCommandCodeListViewManager__OnClickNormalStatus(
        CombineCommandCodeListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  CombineCommandCodeListViewManager_RequestCallbackFunc_o *v13; // x20
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x2

  if ( (byte_4B199F5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CombineCommandCodeListViewManager_EndClickTabStatus__, method, v2);
    sub_1BCA7E0(&Method_CombineCommandCodeListViewManager_OnClickNormalStatus__, v4, v5);
    sub_1BCA7E0(&CombineCommandCodeListViewManager_RequestCallbackFunc_TypeInfo, v6, v7);
    byte_4B199F5 = 1;
  }
  if ( this->fields.modeKind )
  {
    v8 = Method_CombineCommandCodeListViewManager_OnClickNormalStatus__;
    if ( (*((_BYTE *)Method_CombineCommandCodeListViewManager_OnClickNormalStatus__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_CombineCommandCodeListViewManager_OnClickNormalStatus__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
    v13 = (CombineCommandCodeListViewManager_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                                       CombineCommandCodeListViewManager_RequestCallbackFunc_TypeInfo,
                                                                       v10,
                                                                       v11,
                                                                       v12);
    CombineCommandCodeListViewManager_RequestCallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      Method_CombineCommandCodeListViewManager_EndClickTabStatus__,
      v14);
    CombineCommandCodeListViewManager__StatusRequest(this, v13, v15);
  }
}


void __fastcall CombineCommandCodeListViewManager__OnClickScaleChange(
        CombineCommandCodeListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  unsigned int scaleType; // w8
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  CombineCommandCodeListViewManager_o *v15; // x0
  int v16; // w8
  struct ListViewItemSeed_o **p_seed; // x0
  ListViewSort_o *sort; // x0
  int32_t v19; // w1
  UISprite_o *scaleChangeButtonSprite; // x20
  const MethodInfo *v21; // x2
  const MethodInfo *v22; // x2

  if ( (byte_4B199F2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CombineCommandCodeListViewManager_OnClickScaleChange__, method, v2);
    byte_4B199F2 = 1;
  }
  v4 = Method_CombineCommandCodeListViewManager_OnClickScaleChange__;
  if ( (*((_BYTE *)Method_CombineCommandCodeListViewManager_OnClickScaleChange__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BCA7F8(Method_CombineCommandCodeListViewManager_OnClickScaleChange__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
  scaleType = this->fields.scaleType;
  if ( scaleType < 2 )
  {
    smallSizeSeed = this->fields.smallSizeSeed;
    v15 = this;
    v16 = 2;
    goto LABEL_11;
  }
  if ( scaleType == 2 )
  {
    smallSizeSeed = this->fields.extremelySmallSizeSeed;
    v15 = this;
    v16 = 3;
    goto LABEL_11;
  }
  if ( scaleType == 3 )
  {
    smallSizeSeed = this->fields.normalSizeSeed;
    v15 = this;
    v16 = 1;
LABEL_11:
    v15->fields.seed = smallSizeSeed;
    p_seed = &v15->fields.seed;
    *((_DWORD *)p_seed + 110) = v16;
    sub_1BCA784((PartyOrganizationUtility_o *)p_seed, (int64_t)smallSizeSeed, v7, v8, v9, v10, v11, v12);
  }
  sort = this->fields.sort;
  if ( !sort
    || (v19 = this->fields.scaleType,
        sort->fields.iconScaleKind = v19,
        scaleChangeButtonSprite = this->fields.scaleChangeButtonSprite,
        sort = (ListViewSort_o *)ListViewSort__GetScaleKindSpriteName(sort, v19, 0LL),
        !scaleChangeButtonSprite) )
  {
    sub_1BCAA3C(sort, v6);
  }
  UISprite__set_spriteName(scaleChangeButtonSprite, (System_String_o *)sort, 0LL);
  CombineCommandCodeListViewManager__ModifyList(this, 1, v21);
  CombineCommandCodeListViewManager__SetMode_45591408(this, 3, v22);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall CombineCommandCodeListViewManager__OnClickSortAscendingOrder(
        CombineCommandCodeListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x0
  __int64 v7; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_4B19A00 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CombineCommandCodeListViewManager_OnClickSortAscendingOrder__, method, v2);
    byte_4B19A00 = 1;
  }
  if ( this->fields.isInput )
  {
    v4 = Method_CombineCommandCodeListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_CombineCommandCodeListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_CombineCommandCodeListViewManager_OnClickSortAscendingOrder__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1BCAA3C(v6, v7);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall CombineCommandCodeListViewManager__OnClickSortKind(
        CombineCommandCodeListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  Il2CppObject *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v14; // x21
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  ServantSortSelectMenu_CallbackFunc_o *v18; // x22
  __int64 v19; // x0
  __int64 v20; // x1

  if ( (byte_4B199FE & 1) == 0 )
  {
    sub_1BCA7E0(&ServantSortSelectMenu_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_CombineCommandCodeListViewManager_EndSelectSortKind__, v4, v5);
    sub_1BCA7E0(&Method_CombineCommandCodeListViewManager_OnClickSortKind__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    byte_4B199FE = 1;
  }
  if ( this->fields.isInput )
  {
    v10 = Method_CombineCommandCodeListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_CombineCommandCodeListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v10 = (_QWORD *)sub_1BCA7F8(Method_CombineCommandCodeListViewManager_OnClickSortKind__);
    v11 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v10, v10[4]);
    OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v14 = (CommonUI_o *)Instance;
    v18 = (ServantSortSelectMenu_CallbackFunc_o *)sub_1BCAA2C(
                                                    ServantSortSelectMenu_CallbackFunc_TypeInfo,
                                                    v15,
                                                    v16,
                                                    v17);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v18,
      (Il2CppObject *)this,
      Method_CombineCommandCodeListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v14 )
      sub_1BCAA3C(v19, v20);
    CommonUI__OpenServantSortSelectMenu(v14, 6, sort, 0, v18, 0LL);
  }
}


void __fastcall CombineCommandCodeListViewManager__OnLongPushListView(
        CombineCommandCodeListViewManager_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  CombineCommandCodeListViewItem_c *v9; // x1
  __int64 methodPtr_low; // x9
  UnityEngine_Behaviour_o *scrollView; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  struct UserCommandCodeEntity_o *v18; // x1
  CombineCommandCodeListViewManager_o *v19; // x0
  const MethodInfo *v20; // x1

  if ( (byte_4B199FA & 1) == 0 )
  {
    sub_1BCA7E0(&CombineCommandCodeListViewItem_TypeInfo, item, method);
    sub_1BCA7E0(&Method_CombineCommandCodeListViewManager_OnLongPushListView__, v5, v6);
    byte_4B199FA = 1;
  }
  if ( (unsigned int)(this->fields.modeKind - 1) >= 2 )
  {
    v7 = Method_CombineCommandCodeListViewManager_OnLongPushListView__;
    if ( (*((_BYTE *)Method_CombineCommandCodeListViewManager_OnLongPushListView__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1BCA7F8(Method_CombineCommandCodeListViewManager_OnLongPushListView__);
    v8 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
    if ( item
      && ((v9 = CombineCommandCodeListViewItem_TypeInfo,
           methodPtr_low = LOBYTE(CombineCommandCodeListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
           LOBYTE(item->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
       || (CombineCommandCodeListViewItem_c *)item->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineCommandCodeListViewItem_TypeInfo) )
    {
      sub_1BCACFC(item);
      CombineCommandCodeListViewManager__GetSelectItem(v19, v20);
    }
    else
    {
      scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
      if ( !scrollView
        || (UnityEngine_Behaviour__set_enabled(scrollView, 0, 0LL), !item)
        || (v18 = *(struct UserCommandCodeEntity_o **)&item[1].fields.selectNum,
            this->fields.selectShowStatusUserCmdCode = v18,
            sub_1BCA784(
              (PartyOrganizationUtility_o *)&this->fields.selectShowStatusUserCmdCode,
              (int64_t)v18,
              v12,
              v13,
              v14,
              v15,
              v16,
              v17),
            (scrollView = (UnityEngine_Behaviour_o *)this->fields.combineRootComponent) == 0LL) )
      {
        sub_1BCAA3C(scrollView, v9);
      }
      CombineRootComponent__ShowCommandCodeStatus((CombineRootComponent_o *)scrollView, 0LL);
    }
  }
}


void __fastcall CombineCommandCodeListViewManager__OnMoveEnd(
        CombineCommandCodeListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t callbackCount; // w8
  bool v5; // vf
  int32_t v6; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v8; // x1
  UIScrollView_o *v9; // x0
  struct System_Action_o *callbackFunc2; // x20
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4B199F1 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B199F1 = 1;
  }
  callbackCount = this->fields.callbackCount;
  v5 = __OFSUB__(callbackCount, 1);
  v6 = callbackCount - 1;
  if ( v6 < 0 == v5 )
  {
    this->fields.callbackCount = v6;
    if ( !v6 )
    {
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v9 = this->fields.scrollView;
        if ( !v9
          || (((void (__fastcall *)(UIScrollView_o *, __int64, Il2CppMethodPointer))v9->klass->vtable._8_UpdateScrollbars.method)(
                v9,
                1LL,
                v9->klass->vtable._9_SetDragAmount.methodPtr),
              (v9 = this->fields.scrollView) == 0LL) )
        {
          sub_1BCAA3C(v9, v8);
        }
        UIScrollView__UpdatePosition(v9, 0LL);
        callbackFunc2 = this->fields.callbackFunc2;
        this->fields.callbackFunc2 = 0LL;
        sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.callbackFunc2, 0LL, v11, v12, v13, v14, v15, v16);
        if ( callbackFunc2 )
          ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackFunc2->fields.m_target)(
            callbackFunc2->fields.original_method_info,
            *(_QWORD *)&callbackFunc2->fields.extra_arg);
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
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_List_CombineCommandCodeListViewObject__o *ObjectList; // x0
  __int64 v16; // x1
  int32_t size; // w25
  System_Collections_Generic_List_object__o *v18; // x21
  int32_t v19; // w22
  Il2CppObject *Item; // x23
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  System_Action_o *v24; // x24
  const MethodInfo *v25; // x3

  if ( (byte_4B199F0 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&mode, method);
    sub_1BCA7E0(&Method_CombineCommandCodeListViewManager_OnMoveEnd__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_CombineCommandCodeListViewObject__get_Count__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_CombineCommandCodeListViewObject__get_Item__, v11, v12);
    sub_1BCA7E0(&StringLiteral_10069/*"OnMoveEnd"*/, v13, v14);
    byte_4B199F0 = 1;
  }
  ObjectList = CombineCommandCodeListViewManager__get_ObjectList(this, *(const MethodInfo **)&mode);
  if ( !ObjectList )
    goto LABEL_10;
  size = ObjectList->fields._size;
  v18 = (System_Collections_Generic_List_object__o *)ObjectList;
  if ( size >= 1 )
  {
    v19 = 0;
    this->fields.callbackCount = size;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v18,
               v19,
               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_CombineCommandCodeListViewObject__get_Item__);
      v24 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v21, v22, v23);
      System_Action___ctor(v24, (Il2CppObject *)this, Method_CombineCommandCodeListViewManager_OnMoveEnd__, 0LL);
      if ( !Item )
        break;
      CombineCommandCodeListViewObject__Init_45592032((CombineCommandCodeListViewObject_o *)Item, mode, v24, v25);
      if ( size == ++v19 )
        return;
    }
LABEL_10:
    sub_1BCAA3C(ObjectList, v16);
  }
  this->fields.callbackCount = 1;
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_10069/*"OnMoveEnd"*/,
    delay,
    0LL);
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
    sub_1BCAA3C(decideButton, isEnable);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v8; // x8

  if ( (byte_4B199FD & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17688/*"btn_filter_on"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_17687/*"btn_filter"*/, v4, v5);
    byte_4B199FD = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !filterSprite) )
  {
    sub_1BCAA3C(sort, method);
  }
  v8 = (System_String_o **)&StringLiteral_17687/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v8 = (System_String_o **)&StringLiteral_17688/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v8, 0LL);
}


void __fastcall CombineCommandCodeListViewManager__SetMode(
        CombineCommandCodeListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc2 = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc2,
    (int64_t)callback,
    (int64_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  CombineCommandCodeListViewManager__SetMode_45591408(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineCommandCodeListViewManager__SetMode_45591408(
        CombineCommandCodeListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *scrollView; // x21
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  UnityEngine_Behaviour_o *v9; // x0
  int32_t v10; // w1

  if ( (byte_4B199EF & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, *(_QWORD *)&mode, method);
    byte_4B199EF = 1;
  }
  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 3, 0LL);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
  {
    v9 = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( !v9 )
      goto LABEL_17;
    if ( UnityEngine_Behaviour__get_enabled(v9, 0LL) )
      goto LABEL_11;
    v9 = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( !v9
      || (UnityEngine_Behaviour__set_enabled(v9, 1, 0LL),
          (v9 = (UnityEngine_Behaviour_o *)this->fields.scrollView) == 0LL) )
    {
LABEL_17:
      sub_1BCAA3C(v9, v7);
    }
    UIScrollView__UpdatePosition((UIScrollView_o *)v9, 0LL);
  }
LABEL_11:
  if ( (mode & 0xFFFFFFFE) == 2 )
  {
    if ( mode == 2 )
      v10 = 2;
    else
      v10 = 3;
    CombineCommandCodeListViewManager__RequestListObject(this, v10, 0.0, v8);
  }
}


void __fastcall CombineCommandCodeListViewManager__SetObjectItem(
        CombineCommandCodeListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  CombineCommandCodeListViewManager_o *v5; // x20
  __int64 methodPtr_low; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4B199EE & 1) == 0 )
  {
    this = (CombineCommandCodeListViewManager_o *)sub_1BCA7E0(&CombineCommandCodeListViewObject_TypeInfo, obj, item);
    byte_4B199EE = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(CombineCommandCodeListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (CombineCommandCodeListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineCommandCodeListViewObject_TypeInfo )
  {
    sub_1BCAA3C(this, obj);
  }
  if ( v5->fields.initMode == 3 )
    v7 = 3;
  else
    v7 = 2;
  CombineCommandCodeListViewObject__Init_45591284(
    (CombineCommandCodeListViewObject_o *)obj,
    v7,
    (const MethodInfo *)item);
}


void __fastcall CombineCommandCodeListViewManager__SetSelectedCommandCodeData(
        CombineCommandCodeListViewManager_o *this,
        CombineCommandCodeListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Component_o *selectedCommandCode; // x0
  System_String_o *MargeExplanation_41264548; // x21
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  __int64 v15; // x1
  const MethodInfo *v16; // x2
  struct CombineCommandCodeListViewItem_o *selectItem; // x8
  struct UserCommandCodeEntity_o *userCommandCode; // x8
  __int128 v19; // q1
  char v20; // w1
  const MethodInfo *v21; // x2
  const MethodInfo *v22; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v23; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+20h] [xbp-60h]
  System_String_array *explanationList; // [xsp+48h] [xbp-38h] BYREF
  System_String_array *titleList; // [xsp+50h] [xbp-30h] BYREF
  System_Int32_array *idList; // [xsp+58h] [xbp-28h] BYREF

  if ( (byte_4B199E9 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, item, method);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v5, v6);
    byte_4B199E9 = 1;
  }
  titleList = 0LL;
  idList = 0LL;
  explanationList = 0LL;
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
            CombineCommandCodeListViewManager__SetDecideButtonStatus(this, 0, v21);
            selectedCommandCode = (UnityEngine_Component_o *)this->fields.equippedInfo;
            if ( selectedCommandCode )
              goto LABEL_22;
          }
        }
      }
    }
LABEL_28:
    sub_1BCAA3C(selectedCommandCode, item);
  }
  selectedCommandCode = (UnityEngine_Component_o *)this->fields.selectedCommandCode;
  if ( !selectedCommandCode )
    goto LABEL_28;
  selectedCommandCode = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(selectedCommandCode, 0LL);
  if ( !selectedCommandCode )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)selectedCommandCode, 1, 0LL);
  selectedCommandCode = (UnityEngine_Component_o *)this->fields.selectedCommandCode;
  if ( !selectedCommandCode )
    goto LABEL_28;
  ServantFaceIconComponent__Set_38937964(
    (ServantFaceIconComponent_o *)selectedCommandCode,
    item->fields.userCommandCode,
    0LL,
    0LL,
    0LL);
  selectedCommandCode = (UnityEngine_Component_o *)item->fields.userCommandCode;
  if ( !selectedCommandCode )
    goto LABEL_28;
  UserCommandCodeEntity__GetSkillInfo(
    (UserCommandCodeEntity_o *)selectedCommandCode,
    &idList,
    &titleList,
    &explanationList,
    0LL);
  MargeExplanation_41264548 = SkillInfo__GetMargeExplanation_41264548(explanationList, 0LL);
  this->fields.selectItem = item;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.selectItem, (int64_t)item, v9, v10, v11, v12, v13, v14);
  if ( !titleList )
    goto LABEL_28;
  if ( !titleList->max_length )
    sub_1BCAA44(selectedCommandCode, item);
  selectedCommandCode = (UnityEngine_Component_o *)this->fields.skillName;
  if ( !selectedCommandCode )
    goto LABEL_28;
  UILabel__set_text((UILabel_o *)selectedCommandCode, titleList->m_Items[0], 0LL);
  WrapControlText__textAdjust(this->fields.skillMessage, MargeExplanation_41264548, 22, 0, 0, 0LL);
  selectItem = this->fields.selectItem;
  if ( selectItem && (userCommandCode = selectItem->fields.userCommandCode) != 0LL )
  {
    v19 = *(_OWORD *)&userCommandCode->fields.id.fields.fakeValue;
    *(_OWORD *)&v24.fields.currentCryptoKey = *(_OWORD *)&userCommandCode->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v24.fields.fakeValue = v19;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v15);
    v23 = v24;
    v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v23, 0LL) != this->fields.nowEquipedUserCommandCodeId;
  }
  else
  {
    v20 = 1;
  }
  CombineCommandCodeListViewManager__SetDecideButtonStatus(this, v20, v16);
  selectedCommandCode = (UnityEngine_Component_o *)this->fields.equippedInfo;
  if ( !selectedCommandCode )
    goto LABEL_28;
  if ( !item->fields.isEquiped )
  {
LABEL_22:
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)selectedCommandCode, 0, 0LL);
    return;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)selectedCommandCode, 1, 0LL);
  CombineUtility__SetCommandCodeEquippedInfoLabel(
    this->fields.equippedLabel,
    this->fields.nameLabel,
    item->fields._EquipedSvtId_k__BackingField,
    item->fields._EquipedSvtId_k__BackingField != item->fields._BaseSvtId_k__BackingField,
    v22);
}


void __fastcall CombineCommandCodeListViewManager__SetSortButtonImage(
        CombineCommandCodeListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  UnityEngine_Object_o *sortKindLabel; // x20
  __int64 v17; // x1
  ListViewSort_o *sort; // x0
  UILabel_o *v19; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v21; // x8
  int32_t sortKind; // w9
  System_String_o **v23; // x8
  struct ListViewSort_o *v24; // x8
  System_String_o **v25; // x9
  System_String_o **v26; // x10
  System_String_o **v27; // x8
  System_String_o **v28; // x8

  if ( (byte_4B19A01 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_17718/*"btn_sort_up"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_17806/*"btn_txt_up"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_17761/*"btn_txt_new"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_17751/*"btn_txt_down"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_17768/*"btn_txt_old"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_17715/*"btn_sort_down"*/, v14, v15);
    byte_4B19A01 = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_34;
    v19 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0LL);
    if ( !v19 )
      goto LABEL_34;
    UILabel__set_text(v19, (System_String_o *)sort, 0LL);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0LL, 0LL);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v21 = this->fields.sort;
    if ( v21 )
    {
      sortKind = v21->fields.sortKind;
      if ( sortKind == 11 || sortKind == 1 )
      {
        sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
        if ( sort )
        {
          v23 = (System_String_o **)(v21->fields.isAscendingOrder ? &StringLiteral_17768/*"btn_txt_old"*/ : &StringLiteral_17761/*"btn_txt_new"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v23, 0LL);
          v24 = this->fields.sort;
          if ( v24 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v25 = (System_String_o **)&StringLiteral_17715/*"btn_sort_down"*/;
              v26 = (System_String_o **)&StringLiteral_17718/*"btn_sort_up"*/;
LABEL_30:
              if ( v24->fields.isAscendingOrder )
                v28 = v25;
              else
                v28 = v26;
              UISprite__set_spriteName((UISprite_o *)sort, *v28, 0LL);
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
          v27 = (System_String_o **)(v21->fields.isAscendingOrder ? &StringLiteral_17806/*"btn_txt_up"*/ : &StringLiteral_17751/*"btn_txt_down"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v27, 0LL);
          v24 = this->fields.sort;
          if ( v24 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v25 = (System_String_o **)&StringLiteral_17718/*"btn_sort_up"*/;
              v26 = (System_String_o **)&StringLiteral_17715/*"btn_sort_down"*/;
              goto LABEL_30;
            }
          }
        }
      }
    }
LABEL_34:
    sub_1BCAA3C(sort, v17);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineCommandCodeListViewManager__SetStatusKind(
        CombineCommandCodeListViewManager_o *this,
        int32_t modeKind,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  UnityEngine_Behaviour_o *statusTabButton; // x0
  __int64 *v26; // x8
  __int64 *v27; // x8
  __int64 *v28; // x8
  __int64 v29; // x1
  int32_t v30; // w8
  UILabel_o *v31; // x20
  __int64 v32; // x1
  const MethodInfo *v33; // x2
  struct CombineCommandCodeListViewItem_o *selectItem; // x8
  struct UserCommandCodeEntity_o *userCommandCode; // x8
  __int128 v36; // q1
  bool v37; // w1
  UILabel_o *combineInfoMsgLb; // x20
  __int64 *v39; // x8
  const MethodInfo *v40; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+20h] [xbp-40h]

  if ( (byte_4B199E8 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, *(_QWORD *)&modeKind, method);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_17825/*"button_allchoice_reg"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_17828/*"button_alllock_unreg"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_11761/*"SERVANT_LIST_EXPLANATION_CHOICE"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_11762/*"SERVANT_LIST_EXPLANATION_LOCK"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_17841/*"button_select_reg"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_3689/*"COMBINE_COMMAND_CODE_SELECT_COMMAND_CODE_MSG"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_17842/*"button_select_unreg"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_17827/*"button_alllock_reg"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_17826/*"button_allchoice_unreg"*/, v23, v24);
    byte_4B199E8 = 1;
  }
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabButton;
  this->fields.modeKind = modeKind;
  if ( !statusTabButton )
    goto LABEL_43;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, void *))statusTabButton->klass[1]._1.namespaze)(
    statusTabButton,
    1LL,
    statusTabButton->klass[1]._1.byval_arg.data);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabButton;
  if ( !statusTabButton )
    goto LABEL_43;
  UnityEngine_Behaviour__set_enabled(statusTabButton, modeKind != 0, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabSprite;
  if ( !statusTabButton )
    goto LABEL_43;
  v26 = &StringLiteral_17841/*"button_select_reg"*/;
  if ( modeKind )
    v26 = &StringLiteral_17842/*"button_select_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v26, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabButton;
  if ( !statusTabButton )
    goto LABEL_43;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))statusTabButton->klass[1]._1.implementedInterfaces)(
    statusTabButton,
    0LL,
    0LL,
    statusTabButton->klass[1]._1.interfaceOffsets);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
  if ( !statusTabButton )
    goto LABEL_43;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, void *))statusTabButton->klass[1]._1.namespaze)(
    statusTabButton,
    1LL,
    statusTabButton->klass[1]._1.byval_arg.data);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
  if ( !statusTabButton )
    goto LABEL_43;
  UnityEngine_Behaviour__set_enabled(statusTabButton, modeKind != 1, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabSprite;
  if ( !statusTabButton )
    goto LABEL_43;
  v27 = &StringLiteral_17827/*"button_alllock_reg"*/;
  if ( modeKind != 1 )
    v27 = &StringLiteral_17828/*"button_alllock_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v27, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
  if ( !statusTabButton )
    goto LABEL_43;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))statusTabButton->klass[1]._1.implementedInterfaces)(
    statusTabButton,
    0LL,
    0LL,
    statusTabButton->klass[1]._1.interfaceOffsets);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
  if ( !statusTabButton )
    goto LABEL_43;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, void *))statusTabButton->klass[1]._1.namespaze)(
    statusTabButton,
    1LL,
    statusTabButton->klass[1]._1.byval_arg.data);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
  if ( !statusTabButton )
    goto LABEL_43;
  UnityEngine_Behaviour__set_enabled(statusTabButton, modeKind != 2, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabSprite;
  if ( !statusTabButton )
    goto LABEL_43;
  v28 = &StringLiteral_17825/*"button_allchoice_reg"*/;
  if ( modeKind != 2 )
    v28 = &StringLiteral_17826/*"button_allchoice_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v28, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
  if ( !statusTabButton )
    goto LABEL_43;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))statusTabButton->klass[1]._1.implementedInterfaces)(
    statusTabButton,
    0LL,
    0LL,
    statusTabButton->klass[1]._1.interfaceOffsets);
  v30 = this->fields.modeKind;
  if ( v30 == 2 )
  {
    combineInfoMsgLb = this->fields.combineInfoMsgLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v29);
    v39 = &StringLiteral_11761/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
LABEL_38:
    statusTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get((System_String_o *)*v39, 0LL);
    if ( combineInfoMsgLb )
    {
      UILabel__set_text(combineInfoMsgLb, (System_String_o *)statusTabButton, 0LL);
      CombineCommandCodeListViewManager__SetDecideButtonStatus(this, 0, v40);
      return;
    }
    goto LABEL_43;
  }
  if ( v30 == 1 )
  {
    combineInfoMsgLb = this->fields.combineInfoMsgLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v29);
    v39 = &StringLiteral_11762/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
    goto LABEL_38;
  }
  if ( v30 )
    return;
  v31 = this->fields.combineInfoMsgLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v29);
  statusTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3689/*"COMBINE_COMMAND_CODE_SELECT_COMMAND_CODE_MSG"*/, 0LL);
  if ( !v31 )
LABEL_43:
    sub_1BCAA3C(statusTabButton, *(_QWORD *)&modeKind);
  UILabel__set_text(v31, (System_String_o *)statusTabButton, 0LL);
  selectItem = this->fields.selectItem;
  if ( selectItem && (userCommandCode = selectItem->fields.userCommandCode) != 0LL )
  {
    v36 = *(_OWORD *)&userCommandCode->fields.id.fields.fakeValue;
    *(_OWORD *)&v42.fields.currentCryptoKey = *(_OWORD *)&userCommandCode->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v42.fields.fakeValue = v36;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v32);
    v41 = v42;
    v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v41, 0LL) != this->fields.nowEquipedUserCommandCodeId;
  }
  else
  {
    v37 = 0;
  }
  CombineCommandCodeListViewManager__SetDecideButtonStatus(this, v37, v33);
}


void __fastcall CombineCommandCodeListViewManager__StatusRequest(
        CombineCommandCodeListViewManager_o *this,
        CombineCommandCodeListViewManager_RequestCallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  int32_t modeKind; // w8
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  NetworkManager_ResultCallbackFunc_o *v22; // x20
  __int64 v23; // x1
  Il2CppObject *Request_object; // x0
  __int64 v25; // x1
  System_Int64_array *v26; // x1
  System_Int64_array *v27; // x2
  bool v28; // w3
  bool v29; // w4
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  NetworkManager_ResultCallbackFunc_o *v39; // x20
  __int64 v40; // x1
  System_Int64_array *v41; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4B199F8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CombineCommandCodeListViewManager_EndStatusSync__, callback, method);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_CommandCodeStatusSyncRequest___, v6, v7);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v10, v11);
    byte_4B199F8 = 1;
  }
  unlockList = 0LL;
  lockList = 0LL;
  v41 = 0LL;
  choiceList = 0LL;
  modeKind = this->fields.modeKind;
  if ( modeKind == 2 )
  {
    if ( CombineCommandCodeListViewManager__GetSwapChoiceList(this, &choiceList, &v41, v3) )
    {
      this->fields.requestCallback = callback;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.requestCallback,
        (int64_t)callback,
        v30,
        v31,
        v32,
        v33,
        v34,
        v35);
      v39 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(
                                                     NetworkManager_ResultCallbackFunc_TypeInfo,
                                                     v36,
                                                     v37,
                                                     v38);
      NetworkManager_ResultCallbackFunc___ctor(
        v39,
        (Il2CppObject *)this,
        Method_CombineCommandCodeListViewManager_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v40);
      Request_object = NetworkManager__getRequest_object_(
                         v39,
                         (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_CommandCodeStatusSyncRequest___);
      if ( Request_object )
      {
        v27 = v41;
        v26 = choiceList;
        v29 = 1;
        v28 = 0;
        goto LABEL_15;
      }
LABEL_19:
      sub_1BCAA3C(Request_object, v25);
    }
  }
  else if ( modeKind == 1 && CombineCommandCodeListViewManager__GetSwapLockList(this, &lockList, &unlockList, v3) )
  {
    this->fields.requestCallback = callback;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.requestCallback,
      (int64_t)callback,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    v22 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(NetworkManager_ResultCallbackFunc_TypeInfo, v19, v20, v21);
    NetworkManager_ResultCallbackFunc___ctor(
      v22,
      (Il2CppObject *)this,
      Method_CombineCommandCodeListViewManager_EndStatusSync__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v23);
    Request_object = NetworkManager__getRequest_object_(
                       v22,
                       (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_CommandCodeStatusSyncRequest___);
    if ( Request_object )
    {
      v27 = unlockList;
      v26 = lockList;
      v28 = 1;
      v29 = 0;
LABEL_15:
      CommandCodeStatusSyncRequest__beginRequest(
        (CommandCodeStatusSyncRequest_o *)Request_object,
        v26,
        v27,
        v28,
        v29,
        0LL);
      return;
    }
    goto LABEL_19;
  }
  if ( callback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))callback->fields.m_target)(
      callback->fields.original_method_info,
      0LL,
      *(_QWORD *)&callback->fields.extra_arg);
}


void __fastcall CombineCommandCodeListViewManager__add_callbackFunc2(
        CombineCommandCodeListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  CombineCommandCodeListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4B199E3 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, value, method);
    byte_4B199E3 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1C05CD0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BCACFC(v7);
  CombineCommandCodeListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_CombineCommandCodeListViewObject__o *__fastcall CombineCommandCodeListViewManager__get_ClippingObjectList(
        CombineCommandCodeListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_Generic_List_object__o *v17; // x20
  const MethodInfo *v18; // x1
  System_Collections_Generic_List_object__o *objectList; // x0
  int size; // w23
  int32_t v21; // w21
  __int64 v22; // x1
  Il2CppObject *Item; // x22
  Il2CppObject *v24; // x22
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 v33; // x10
  Il2CppClass **v34; // x0

  if ( (byte_4B199E6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_CombineCommandCodeListViewObject___, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_CombineCommandCodeListViewObject__Add__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_CombineCommandCodeListViewObject___ctor__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Count__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Item__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_CombineCommandCodeListViewObject__TypeInfo, v13, v14);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v15, v16);
    byte_4B199E6 = 1;
  }
  v17 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_CombineCommandCodeListViewObject__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_CombineCommandCodeListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
    goto LABEL_21;
  size = objectList->fields._size;
  if ( size >= 1 )
  {
    v21 = 0;
    do
    {
      Item = System_Collections_Generic_List_object___get_Item(
               objectList,
               v21,
               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Equality(
                                                                  (UnityEngine_Object_o *)Item,
                                                                  0LL,
                                                                  0LL);
      if ( ((unsigned __int8)objectList & 1) == 0 )
      {
        if ( !Item )
          break;
        objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                    (UnityEngine_GameObject_o *)Item,
                                                                    (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_CombineCommandCodeListViewObject___);
        if ( !objectList )
          break;
        v24 = (Il2CppObject *)objectList;
        objectList = (System_Collections_Generic_List_object__o *)CombineCommandCodeListViewObject__GetItem(
                                                                    (CombineCommandCodeListViewObject_o *)objectList,
                                                                    v18);
        if ( !objectList )
          break;
        v18 = (const MethodInfo *)objectList;
        if ( !LOBYTE(objectList[2].monitor)
          || (objectList = (System_Collections_Generic_List_object__o *)ListViewManager__ClippingItem_41463120(
                                                                          (ListViewManager_o *)this,
                                                                          (ListViewItem_o *)objectList,
                                                                          0LL),
              ((unsigned __int8)objectList & 1) != 0) )
        {
          if ( !v17 )
            break;
          items = v17->fields._items;
          v32 = Method_System_Collections_Generic_List_CombineCommandCodeListViewObject__Add__;
          ++v17->fields._version;
          if ( !items )
            break;
          v33 = v17->fields._size;
          if ( (unsigned int)v33 >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v17,
              v24,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
          }
          else
          {
            v34 = &items->obj.klass + v33;
            v17->fields._size = v33 + 1;
            v34[4] = (Il2CppClass *)v24;
            sub_1BCA784((PartyOrganizationUtility_o *)(v34 + 4), (int64_t)v24, v25, v26, v27, v28, v29, v30);
          }
        }
      }
      if ( size == ++v21 )
        return (System_Collections_Generic_List_CombineCommandCodeListViewObject__o *)v17;
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    }
    while ( objectList );
LABEL_21:
    sub_1BCAA3C(objectList, v18);
  }
  return (System_Collections_Generic_List_CombineCommandCodeListViewObject__o *)v17;
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_Generic_List_object__o *v17; // x20
  __int64 v18; // x1
  int64_t objectList; // x0
  int v20; // w23
  int32_t v21; // w21
  __int64 v22; // x1
  Il2CppObject *Item; // x22
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  int64_t v33; // x1
  Il2CppClass **v34; // x0

  if ( (byte_4B199E5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_CombineCommandCodeListViewObject___, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_CombineCommandCodeListViewObject__Add__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_CombineCommandCodeListViewObject___ctor__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Count__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Item__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_CombineCommandCodeListViewObject__TypeInfo, v13, v14);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v15, v16);
    byte_4B199E5 = 1;
  }
  v17 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_CombineCommandCodeListViewObject__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_CombineCommandCodeListViewObject___ctor__);
  objectList = (int64_t)this->fields.objectList;
  if ( !objectList )
    goto LABEL_17;
  v20 = *(_DWORD *)(objectList + 24);
  if ( v20 >= 1 )
  {
    v21 = 0;
    do
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)objectList,
               v21,
               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
      objectList = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0LL, 0LL);
      if ( (objectList & 1) == 0 )
      {
        if ( !Item )
          break;
        objectList = (int64_t)UnityEngine_GameObject__GetComponent_object_(
                                (UnityEngine_GameObject_o *)Item,
                                (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_CombineCommandCodeListViewObject___);
        if ( !v17 )
          break;
        items = v17->fields._items;
        v31 = Method_System_Collections_Generic_List_CombineCommandCodeListViewObject__Add__;
        ++v17->fields._version;
        if ( !items )
          break;
        size = v17->fields._size;
        v33 = objectList;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v17,
            (Il2CppObject *)objectList,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
        }
        else
        {
          v34 = &items->obj.klass + size;
          v17->fields._size = size + 1;
          v34[4] = (Il2CppClass *)v33;
          sub_1BCA784((PartyOrganizationUtility_o *)(v34 + 4), v33, v24, v25, v26, v27, v28, v29);
        }
      }
      if ( v20 == ++v21 )
        return (System_Collections_Generic_List_CombineCommandCodeListViewObject__o *)v17;
      objectList = (int64_t)this->fields.objectList;
    }
    while ( objectList );
LABEL_17:
    sub_1BCAA3C(objectList, v18);
  }
  return (System_Collections_Generic_List_CombineCommandCodeListViewObject__o *)v17;
}


void __fastcall CombineCommandCodeListViewManager__remove_callbackFunc2(
        CombineCommandCodeListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  CombineCommandCodeListViewManager_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4B199E4 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, value, method);
    byte_4B199E4 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1C05CD0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BCACFC(v7);
  CombineCommandCodeListViewManager__get_ObjectList(v10, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineCommandCodeListViewManager_RequestCallbackFunc___ctor(
        CombineCommandCodeListViewManager_RequestCallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A11228;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A111E0;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall CombineCommandCodeListViewManager_RequestCallbackFunc__BeginInvoke(
        CombineCommandCodeListViewManager_RequestCallbackFunc_o *this,
        bool isRequest,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isRequest;
  if ( (byte_4B19A05 & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, isRequest, callback);
    byte_4B19A05 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v9, callback, object);
}


void __fastcall CombineCommandCodeListViewManager_RequestCallbackFunc__EndInvoke(
        CombineCommandCodeListViewManager_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
}


void __fastcall CombineCommandCodeListViewManager_RequestCallbackFunc__Invoke(
        CombineCommandCodeListViewManager_RequestCallbackFunc_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    isRequest,
    *(_QWORD *)&this->fields.extra_arg);
}