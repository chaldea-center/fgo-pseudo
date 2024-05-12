void __fastcall CombineCommandCodeListViewManager___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x0
  System_String_o *v2; // x19
  ListViewSort_o *v3; // x20
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  int v11; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_438B79C & 1) == 0 )
  {
    sub_B775C4(&CombineCommandCodeListViewManager_TypeInfo);
    sub_B775C4(&ListViewSort_TypeInfo);
    sub_B775C4(&StringLiteral_4284/*"CombineCommandCode"*/);
    byte_438B79C = 1;
  }
  v11 = 1;
  v1 = System_Int32__ToString((int32_t)&v11, 0LL);
  v2 = System_String__Concat_44901936((System_String_o *)StringLiteral_4284/*"CombineCommandCode"*/, v1, 0LL);
  v3 = (ListViewSort_o *)sub_B77694(ListViewSort_TypeInfo);
  ListViewSort___ctor_34308400(v3, v2, 2, 0, 0LL);
  static_fields = (BattleServantConfConponent_o *)CombineCommandCodeListViewManager_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v3;
  sub_B77560(static_fields, (System_Int32_array **)v3, v5, v6, v7, v8, v9, v10);
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
  int64_t bgTxtSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  CombineCommandCodeListViewManager_c *v31; // x0
  struct ListViewSort_o **p_commandCodeSortInfo; // x8
  struct ListViewSort_o *v33; // x1
  struct ListViewSort_o **p_sort; // x26
  const MethodInfo *v35; // x2
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  BalanceConfig_c *v42; // x8
  struct BalanceConfig_StaticFields *static_fields; // x10
  unsigned int iconScaleKind; // w8
  int CommandCodeFrameMax; // w24
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  UISprite_o *scaleChangeButtonSprite; // x20
  UserServantCommandCodeMaster_o *v48; // x27
  int64_t v49; // x9
  __int64 v50; // x19
  System_Collections_Generic_List_long__o *v51; // x28
  unsigned int v52; // w19
  int v53; // w20
  __int64 v54; // x23
  __int128 v55; // q1
  __int128 v56; // q1
  int v57; // w27
  int64_t v58; // x8
  System_Collections_Generic_Dictionary_long__long__o *v59; // x25
  __int64 v60; // x23
  __int64 v61; // x27
  __int128 v62; // q1
  _OWORD *v63; // x19
  bool v64; // w0
  __int128 v65; // q0
  bool v66; // w28
  int64_t v67; // x0
  __int128 v68; // q1
  int64_t v69; // x0
  int32_t Item; // w21
  __int128 v71; // q1
  int64_t v72; // x20
  bool v73; // w22
  CombineCommandCodeListViewItem_o *v74; // x20
  const MethodInfo *v75; // x7
  __int128 v76; // q1
  const MethodInfo *v77; // x2
  UILabel_o *emptyMessageLabel; // x20
  __int64 *v79; // x8
  UILabel_o *commandCodeInfoLabel; // x20
  System_String_o *v81; // x21
  __int64 v82; // x2
  Il2CppObject *v83; // x22
  __int64 v84; // x2
  Il2CppObject *v85; // x0
  const MethodInfo *v86; // x2
  const MethodInfo *v87; // x1
  __int64 v88; // x0
  int32_t v89; // [xsp+10h] [xbp-1A0h]
  int32_t v90; // [xsp+14h] [xbp-19Ch]
  bool v91; // [xsp+20h] [xbp-190h]
  CombineCommandCodeListViewManager_o *v94; // [xsp+30h] [xbp-180h]
  int v95; // [xsp+38h] [xbp-178h]
  int64_t v96; // [xsp+40h] [xbp-170h]
  int v97; // [xsp+4Ch] [xbp-164h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v98; // [xsp+50h] [xbp-160h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v99; // [xsp+70h] [xbp-140h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v100; // [xsp+90h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v101; // [xsp+B0h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v102; // [xsp+D0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v103; // [xsp+F0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v104; // [xsp+110h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v105; // [xsp+130h] [xbp-80h] BYREF

  if ( (byte_438B780 & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&CombineCommandCodeListViewItem_TypeInfo);
    sub_B775C4(&CombineCommandCodeListViewManager_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_UserServantCommandCodeMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_long__long__ContainsKey__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_long__long__get_Item__);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_long__Contains__);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&StringLiteral_19823/*"img_bg_arts"*/);
    sub_B775C4(&StringLiteral_3352/*"COMMAND_CODE_EMPTY"*/);
    sub_B775C4(&StringLiteral_19825/*"img_bg_buster"*/);
    sub_B775C4(&StringLiteral_19834/*"img_bg_quick"*/);
    sub_B775C4(&StringLiteral_12702/*"SUM_INFO"*/);
    byte_438B780 = 1;
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
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.selectShowStatusUserCmdCode,
    0LL,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  this->fields.selectItem = 0LL;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.selectItem, 0LL, v19, v20, v21, v22, v23, v24);
  this->fields.nowEquipedUserCommandCodeId = nowEquipedUserCommandCodeId;
  v31 = CombineCommandCodeListViewManager_TypeInfo;
  if ( (BYTE3(CombineCommandCodeListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineCommandCodeListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineCommandCodeListViewManager_TypeInfo);
    v31 = CombineCommandCodeListViewManager_TypeInfo;
  }
  p_commandCodeSortInfo = &v31->static_fields->commandCodeSortInfo;
  v33 = *p_commandCodeSortInfo;
  this->fields.sort = *p_commandCodeSortInfo;
  p_sort = &this->fields.sort;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.sort,
    (System_Int32_array **)v33,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  if ( !this->fields.sort )
    goto LABEL_101;
  this->fields.sort->fields.listViewKind = 3;
  bgTxtSprite = (int64_t)*p_sort;
  if ( !*p_sort )
    goto LABEL_101;
  ListViewSort__Load((ListViewSort_o *)bgTxtSprite, 0LL);
  CombineCommandCodeListViewManager__SetSelectedCommandCodeData(this, 0LL, v35);
  bgTxtSprite = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !bgTxtSprite )
    goto LABEL_101;
  bgTxtSprite = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                           (DataManager_o *)bgTxtSprite,
                           (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !bgTxtSprite )
    goto LABEL_101;
  bgTxtSprite = (int64_t)UserCommandCodeMaster__getList((UserCommandCodeMaster_o *)bgTxtSprite, 0LL);
  v96 = bgTxtSprite;
  v42 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v42 = BalanceConfig_TypeInfo;
  }
  if ( !*p_sort )
    goto LABEL_101;
  static_fields = v42->static_fields;
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
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.seed,
      (System_Int32_array **)normalSizeSeed,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
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
  v94 = this;
  if ( v96 && *(_QWORD *)(v96 + 24) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    bgTxtSprite = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_UserServantCommandCodeMaster___);
    if ( bgTxtSprite )
    {
      v48 = (UserServantCommandCodeMaster_o *)bgTxtSprite;
      v89 = commandCardType;
      v90 = modeKind;
      bgTxtSprite = (int64_t)UserServantCommandCodeMaster__GetEquipedCommandCodeList(
                               (UserServantCommandCodeMaster_o *)bgTxtSprite,
                               0LL);
      v49 = v96;
      v91 = 0;
      v50 = *(_QWORD *)(v96 + 24);
      v95 = v50;
      if ( CommandCodeFrameMax <= (int)v50 && (int)v50 >= 1 )
      {
        v51 = (System_Collections_Generic_List_long__o *)bgTxtSprite;
        v52 = 0;
        v53 = 0;
        while ( 1 )
        {
          v54 = *(_QWORD *)(v49 + 8LL * (int)v52 + 32);
          if ( !v54 )
            goto LABEL_101;
          v55 = *(_OWORD *)(v54 + 32);
          *(_OWORD *)&v105.fields.currentCryptoKey = *(_OWORD *)(v54 + 16);
          *(_OWORD *)&v105.fields.fakeValue = v55;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v104 = v105;
          bgTxtSprite = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v104, 0LL);
          if ( bgTxtSprite == nowEquipedUserCommandCodeId )
            goto LABEL_46;
          v56 = *(_OWORD *)(v54 + 32);
          *(_OWORD *)&v105.fields.currentCryptoKey = *(_OWORD *)(v54 + 16);
          *(_OWORD *)&v105.fields.fakeValue = v56;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v103 = v105;
          bgTxtSprite = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v103, 0LL);
          if ( !v51 )
            goto LABEL_101;
          bgTxtSprite = System_Collections_Generic_List_long___Contains(
                          v51,
                          bgTxtSprite,
                          (const MethodInfo_30EC1EC *)Method_System_Collections_Generic_List_long__Contains__);
          if ( (bgTxtSprite & 1) == 0 )
          {
LABEL_46:
            v49 = v96;
          }
          else
          {
            v49 = v96;
            if ( ++v53 >= CommandCodeFrameMax )
            {
              v91 = 1;
              goto LABEL_53;
            }
          }
          if ( (int)++v52 >= v95 )
            break;
          if ( v52 >= *(_DWORD *)(v49 + 24) )
            goto LABEL_102;
        }
        v91 = 0;
LABEL_53:
        LODWORD(v50) = v95;
      }
      bgTxtSprite = (int64_t)UserServantCommandCodeMaster__GetEquippedCommandCodeDic(v48, 0LL);
      v58 = v96;
      v57 = v50;
      if ( (int)v50 >= 1 )
      {
        v59 = (System_Collections_Generic_Dictionary_long__long__o *)bgTxtSprite;
        v60 = 0LL;
        while ( (unsigned int)v60 < *(_DWORD *)(v58 + 24) )
        {
          v61 = *(_QWORD *)(v96 + 32 + 8 * v60);
          if ( !v61 )
            goto LABEL_101;
          v62 = *(_OWORD *)(v61 + 32);
          *(_OWORD *)&v105.fields.currentCryptoKey = *(_OWORD *)(v61 + 16);
          *(_OWORD *)&v105.fields.fakeValue = v62;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v102 = v105;
          bgTxtSprite = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v102, 0LL);
          if ( !v59 )
            goto LABEL_101;
          v63 = (_OWORD *)(v61 + 16);
          v64 = System_Collections_Generic_Dictionary_long__long___ContainsKey(
                  v59,
                  bgTxtSprite,
                  (const MethodInfo_2FCA550 *)Method_System_Collections_Generic_Dictionary_long__long__ContainsKey__);
          v65 = *(_OWORD *)(v61 + 32);
          v66 = v64;
          *(_OWORD *)&v101.fields.currentCryptoKey = *(_OWORD *)(v61 + 16);
          *(_OWORD *)&v101.fields.fakeValue = v65;
          v67 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v101, 0LL);
          if ( System_Collections_Generic_Dictionary_long__long___ContainsKey(
                 v59,
                 v67,
                 (const MethodInfo_2FCA550 *)Method_System_Collections_Generic_Dictionary_long__long__ContainsKey__) )
          {
            v68 = *(_OWORD *)(v61 + 32);
            *(_OWORD *)&v105.fields.currentCryptoKey = *v63;
            *(_OWORD *)&v105.fields.fakeValue = v68;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            v100 = v105;
            v69 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v100, 0LL);
            Item = System_Collections_Generic_Dictionary_long__long___get_Item(
                     v59,
                     v69,
                     (const MethodInfo_2FCA218 *)Method_System_Collections_Generic_Dictionary_long__long__get_Item__);
          }
          else
          {
            Item = 0;
          }
          v71 = *(_OWORD *)(v61 + 32);
          v72 = this->fields.nowEquipedUserCommandCodeId;
          *(_OWORD *)&v105.fields.currentCryptoKey = *v63;
          *(_OWORD *)&v105.fields.fakeValue = v71;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v99 = v105;
          v73 = v72 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v99, 0LL);
          v74 = (CombineCommandCodeListViewItem_o *)sub_B77694(CombineCommandCodeListViewItem_TypeInfo);
          CombineCommandCodeListViewItem___ctor(
            v74,
            (UserCommandCodeEntity_o *)v61,
            v73,
            v66,
            Item,
            baseSvtId,
            v91,
            v75);
          v76 = *(_OWORD *)(v61 + 32);
          *(_OWORD *)&v105.fields.currentCryptoKey = *v63;
          *(_OWORD *)&v105.fields.fakeValue = v76;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v98 = v105;
          bgTxtSprite = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v98, 0LL);
          v57 = v95;
          if ( !v74 )
            goto LABEL_101;
          this = v94;
          if ( bgTxtSprite == beforeSelectedUserCommandCodeId )
          {
            v74->fields.isSelect = 1;
            CombineCommandCodeListViewManager__SetSelectedCommandCodeData(v94, v74, v77);
          }
          else
          {
            v74->fields.isSelect = 0;
          }
          bgTxtSprite = (int64_t)v94->fields.itemList;
          if ( !bgTxtSprite )
            goto LABEL_101;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)bgTxtSprite,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v74,
            (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
          v58 = v96;
          if ( (int)++v60 >= v95 )
            goto LABEL_80;
        }
LABEL_102:
        v88 = sub_B776C8(bgTxtSprite);
        sub_B77668(v88, 0LL);
      }
LABEL_80:
      bgTxtSprite = (int64_t)this->fields.emptyMessageBase;
      if ( bgTxtSprite )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bgTxtSprite, 0, 0LL);
        commandCardType = v89;
        modeKind = v90;
        goto LABEL_82;
      }
    }
LABEL_101:
    sub_B7769C(bgTxtSprite, *(_QWORD *)&baseSvtId);
  }
  bgTxtSprite = (int64_t)this->fields.emptyMessageBase;
  if ( !bgTxtSprite )
    goto LABEL_101;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bgTxtSprite, 1, 0LL);
  v57 = 0;
LABEL_82:
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  bgTxtSprite = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3352/*"COMMAND_CODE_EMPTY"*/, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_101;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)bgTxtSprite, 0LL);
  switch ( commandCardType )
  {
    case 1:
      bgTxtSprite = (int64_t)this->fields.commandCardTypeSprite;
      if ( !bgTxtSprite )
        goto LABEL_101;
      v79 = &StringLiteral_19823/*"img_bg_arts"*/;
      goto LABEL_95;
    case 3:
      bgTxtSprite = (int64_t)this->fields.commandCardTypeSprite;
      if ( !bgTxtSprite )
        goto LABEL_101;
      v79 = &StringLiteral_19834/*"img_bg_quick"*/;
      goto LABEL_95;
    case 2:
      bgTxtSprite = (int64_t)this->fields.commandCardTypeSprite;
      if ( !bgTxtSprite )
        goto LABEL_101;
      v79 = &StringLiteral_19825/*"img_bg_buster"*/;
LABEL_95:
      UISprite__set_spriteName((UISprite_o *)bgTxtSprite, (System_String_o *)*v79, 0LL);
      break;
  }
  commandCodeInfoLabel = this->fields.commandCodeInfoLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v81 = LocalizationManager__Get((System_String_o *)StringLiteral_12702/*"SUM_INFO"*/, 0LL);
  LODWORD(v105.fields.currentCryptoKey) = v57;
  v83 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v105, v82);
  v97 = CommandCodeFrameMax;
  v85 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v97, v84);
  bgTxtSprite = (int64_t)System_String__Format_44897472(v81, v83, v85, 0LL);
  if ( !commandCodeInfoLabel )
    goto LABEL_101;
  UILabel__set_text(commandCodeInfoLabel, (System_String_o *)bgTxtSprite, 0LL);
  CombineCommandCodeListViewManager__SetStatusKind(v94, modeKind, v86);
  ListViewManager__SortItem((ListViewManager_o *)v94, -1, 0, -1, 0LL);
  CombineCommandCodeListViewManager__SetFilterButtonImage(v94, v87);
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
  sub_B77560((BattleServantConfConponent_o *)&this->fields.selectShowStatusUserCmdCode, 0LL, v3, v4, v5, v6, v7, v8);
  sort = this->fields.sort;
  if ( !sort )
    sub_B7769C(0LL, v9);
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
  CombineCommandCodeListViewManager__SetMode_25900432(this, 3, v5);
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
  CombineCommandCodeListViewManager__SetMode_25900432(this, 3, v5);
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
  CombineCommandCodeListViewManager__SetMode_25900432(this, 3, v5);
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
  const MethodInfo *v5; // x1
  CommonUI_o *Instance; // x20
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_438B795 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_CombineCommandCodeListViewManager_EndCloseSelectFilterKind__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_438B795 = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    CombineCommandCodeListViewManager__SetFilterButtonImage(this, v5);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(
    v7,
    (Il2CppObject *)this,
    Method_CombineCommandCodeListViewManager_EndCloseSelectFilterKind__,
    0LL);
  if ( !Instance )
    sub_B7769C(v8, v9);
  CommonUI__CloseServantFilterSelectMenu(Instance, v7, 0LL);
}


void __fastcall CombineCommandCodeListViewManager__EndSelectSortKind(
        CombineCommandCodeListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_438B798 & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_438B798 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B7769C(0LL, v6);
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
    sub_B77560(p_requestCallback, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    CombineCommandCodeListViewManager_RequestCallbackFunc__Invoke(requestCallback, 1, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall CombineCommandCodeListViewManager__GetCommandCodeAmountSortValue(
        CombineCommandCodeListViewManager_o *this,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  CombineCommandCodeListViewManager_o *v4; // x20
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x25
  signed __int64 size; // x22
  int64_t v7; // x21
  unsigned __int64 v8; // x23
  ListViewItem_o *v9; // x8
  __int64 v10; // x11
  __int64 v11; // x11
  CombineCommandCodeListViewItem_o *v12; // x0

  v4 = this;
  if ( (byte_438B79B & 1) == 0 )
  {
    sub_B775C4(&CombineCommandCodeListViewItem_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    this = (CombineCommandCodeListViewManager_o *)sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_438B79B = 1;
  }
  itemList = v4->fields.itemList;
  if ( !itemList )
    goto LABEL_20;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v7 = 0LL;
    v8 = 0LL;
    do
    {
      if ( v8 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      v9 = itemList->fields._items->m_Items[v8];
      if ( !v9 )
        break;
      v10 = *(&CombineCommandCodeListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v9->klass->_2.bitflags2 + 1) < (unsigned int)v10
        || (CombineCommandCodeListViewItem_c *)v9->klass->_2.typeHierarchy[v10 - 1] != CombineCommandCodeListViewItem_TypeInfo )
      {
        break;
      }
      v11 = *(&CombineCommandCodeListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v9->klass->_2.bitflags2 + 1) >= (unsigned int)v11 )
      {
        if ( (CombineCommandCodeListViewItem_c *)v9->klass->_2.typeHierarchy[v11 - 1] == CombineCommandCodeListViewItem_TypeInfo )
          v12 = (CombineCommandCodeListViewItem_o *)itemList->fields._items->m_Items[v8];
        else
          v12 = 0LL;
      }
      else
      {
        v12 = 0LL;
      }
      this = (CombineCommandCodeListViewManager_o *)CombineCommandCodeListViewItem__get_CommandCodeId(
                                                      v12,
                                                      *(const MethodInfo **)&commandCodeId);
      ++v8;
      if ( (_DWORD)this == commandCodeId )
        ++v7;
      if ( (__int64)v8 >= size )
        return v7;
      itemList = v4->fields.itemList;
    }
    while ( itemList );
LABEL_20:
    sub_B7769C(this, *(_QWORD *)&commandCodeId);
  }
  return 0LL;
}


CombineCommandCodeListViewItem_o *__fastcall CombineCommandCodeListViewManager__GetItem(
        CombineCommandCodeListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v6; // x8
  __int64 v7; // x11

  if ( (byte_438B786 & 1) == 0 )
  {
    sub_B775C4(&CombineCommandCodeListViewItem_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_438B786 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
  v6 = itemList->fields._items->m_Items[index];
  if ( !v6 )
    return 0LL;
  v7 = *(&CombineCommandCodeListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v6->klass->_2.bitflags2 + 1) < (unsigned int)v7 )
    return 0LL;
  if ( (CombineCommandCodeListViewItem_c *)v6->klass->_2.typeHierarchy[v7 - 1] == CombineCommandCodeListViewItem_TypeInfo )
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
  System_Collections_Generic_List_long__o *v6; // x23
  System_Collections_Generic_List_long__o *v7; // x22
  int64_t v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x19
  signed __int64 size; // x24
  unsigned __int64 v18; // x25
  ListViewItem_o *v19; // x8
  __int64 v20; // x11
  __int64 v21; // x9
  __int128 v22; // q0
  const MethodInfo_30EBD98 *v23; // x2
  int64_t v24; // x1
  System_Collections_Generic_List_long__o *v25; // x0
  __int128 v26; // q0
  System_Int64_array *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Int64_array *v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+50h] [xbp-70h]

  if ( (byte_438B78D & 1) == 0 )
  {
    sub_B775C4(&CombineCommandCodeListViewItem_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_long__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_long___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B775C4(&System_Collections_Generic_List_long__TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_438B78D = 1;
  }
  v6 = (System_Collections_Generic_List_long__o *)sub_B77694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v6,
    (const MethodInfo_30EB03C *)Method_System_Collections_Generic_List_long___ctor__);
  v7 = (System_Collections_Generic_List_long__o *)sub_B77694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_30EB03C *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_33;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v18 = 0LL;
    do
    {
      if ( v18 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      v19 = itemList->fields._items->m_Items[v18];
      if ( !v19 )
        break;
      v20 = *(&CombineCommandCodeListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v19->klass->_2.bitflags2 + 1) < (unsigned int)v20
        || (CombineCommandCodeListViewItem_c *)v19->klass->_2.typeHierarchy[v20 - 1] != CombineCommandCodeListViewItem_TypeInfo )
      {
        break;
      }
      v21 = *(_QWORD *)&v19[1].fields.selectNum;
      if ( v21 && BYTE6(v19[1].klass) )
      {
        if ( BYTE2(v19[1].klass) )
        {
          v22 = *(_OWORD *)(v21 + 32);
          *(_OWORD *)&v51.fields.currentCryptoKey = *(_OWORD *)(v21 + 16);
          *(_OWORD *)&v51.fields.fakeValue = v22;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v50 = v51;
          v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v50, 0LL);
          if ( !v7 )
            break;
          v23 = (const MethodInfo_30EBD98 *)Method_System_Collections_Generic_List_long__Add__;
          v24 = v8;
          v25 = v7;
        }
        else
        {
          v26 = *(_OWORD *)(v21 + 32);
          *(_OWORD *)&v51.fields.currentCryptoKey = *(_OWORD *)(v21 + 16);
          *(_OWORD *)&v51.fields.fakeValue = v26;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v49 = v51;
          v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v49, 0LL);
          if ( !v6 )
            break;
          v23 = (const MethodInfo_30EBD98 *)Method_System_Collections_Generic_List_long__Add__;
          v24 = v8;
          v25 = v6;
        }
        System_Collections_Generic_List_long___Add(v25, v24, v23);
      }
      if ( (__int64)++v18 >= size )
        goto LABEL_28;
      itemList = this->fields.itemList;
    }
    while ( itemList );
LABEL_33:
    sub_B7769C(v8, v9);
  }
LABEL_28:
  if ( !v6 || !v7 )
    goto LABEL_33;
  if ( v7->fields._size + v6->fields._size < 1 )
  {
    *choiceList = 0LL;
    sub_B77560((BattleServantConfConponent_o *)choiceList, 0LL, v10, v11, v12, v13, v14, v15);
    *unchoiceList = 0LL;
    sub_B77560((BattleServantConfConponent_o *)unchoiceList, 0LL, v42, v43, v44, v45, v46, v47);
    return 0;
  }
  else
  {
    v27 = System_Collections_Generic_List_long___ToArray(
            v6,
            (const MethodInfo_30EDEA4 *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v27;
    sub_B77560((BattleServantConfConponent_o *)choiceList, (System_Int32_array **)v27, v28, v29, v30, v31, v32, v33);
    v34 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_30EDEA4 *)Method_System_Collections_Generic_List_long__ToArray__);
    *unchoiceList = v34;
    sub_B77560((BattleServantConfConponent_o *)unchoiceList, (System_Int32_array **)v34, v35, v36, v37, v38, v39, v40);
    return 1;
  }
}


bool __fastcall CombineCommandCodeListViewManager__GetSwapLockList(
        CombineCommandCodeListViewManager_o *this,
        System_Int64_array **lockList,
        System_Int64_array **unlockList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v6; // x23
  System_Collections_Generic_List_long__o *v7; // x22
  int64_t v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x19
  signed __int64 size; // x24
  unsigned __int64 v18; // x25
  ListViewItem_o *v19; // x8
  __int64 v20; // x11
  __int64 v21; // x9
  __int128 v22; // q0
  const MethodInfo_30EBD98 *v23; // x2
  int64_t v24; // x1
  System_Collections_Generic_List_long__o *v25; // x0
  __int128 v26; // q0
  System_Int64_array *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Int64_array *v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+50h] [xbp-70h]

  if ( (byte_438B78C & 1) == 0 )
  {
    sub_B775C4(&CombineCommandCodeListViewItem_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_long__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_long___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B775C4(&System_Collections_Generic_List_long__TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_438B78C = 1;
  }
  v6 = (System_Collections_Generic_List_long__o *)sub_B77694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v6,
    (const MethodInfo_30EB03C *)Method_System_Collections_Generic_List_long___ctor__);
  v7 = (System_Collections_Generic_List_long__o *)sub_B77694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_30EB03C *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_33;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v18 = 0LL;
    do
    {
      if ( v18 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      v19 = itemList->fields._items->m_Items[v18];
      if ( !v19 )
        break;
      v20 = *(&CombineCommandCodeListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v19->klass->_2.bitflags2 + 1) < (unsigned int)v20
        || (CombineCommandCodeListViewItem_c *)v19->klass->_2.typeHierarchy[v20 - 1] != CombineCommandCodeListViewItem_TypeInfo )
      {
        break;
      }
      v21 = *(_QWORD *)&v19[1].fields.selectNum;
      if ( v21 && BYTE5(v19[1].klass) )
      {
        if ( BYTE1(v19[1].klass) )
        {
          v22 = *(_OWORD *)(v21 + 32);
          *(_OWORD *)&v51.fields.currentCryptoKey = *(_OWORD *)(v21 + 16);
          *(_OWORD *)&v51.fields.fakeValue = v22;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v50 = v51;
          v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v50, 0LL);
          if ( !v7 )
            break;
          v23 = (const MethodInfo_30EBD98 *)Method_System_Collections_Generic_List_long__Add__;
          v24 = v8;
          v25 = v7;
        }
        else
        {
          v26 = *(_OWORD *)(v21 + 32);
          *(_OWORD *)&v51.fields.currentCryptoKey = *(_OWORD *)(v21 + 16);
          *(_OWORD *)&v51.fields.fakeValue = v26;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v49 = v51;
          v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v49, 0LL);
          if ( !v6 )
            break;
          v23 = (const MethodInfo_30EBD98 *)Method_System_Collections_Generic_List_long__Add__;
          v24 = v8;
          v25 = v6;
        }
        System_Collections_Generic_List_long___Add(v25, v24, v23);
      }
      if ( (__int64)++v18 >= size )
        goto LABEL_28;
      itemList = this->fields.itemList;
    }
    while ( itemList );
LABEL_33:
    sub_B7769C(v8, v9);
  }
LABEL_28:
  if ( !v6 || !v7 )
    goto LABEL_33;
  if ( v7->fields._size + v6->fields._size < 1 )
  {
    *lockList = 0LL;
    sub_B77560((BattleServantConfConponent_o *)lockList, 0LL, v10, v11, v12, v13, v14, v15);
    *unlockList = 0LL;
    sub_B77560((BattleServantConfConponent_o *)unlockList, 0LL, v42, v43, v44, v45, v46, v47);
    return 0;
  }
  else
  {
    v27 = System_Collections_Generic_List_long___ToArray(
            v6,
            (const MethodInfo_30EDEA4 *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v27;
    sub_B77560((BattleServantConfConponent_o *)lockList, (System_Int32_array **)v27, v28, v29, v30, v31, v32, v33);
    v34 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_30EDEA4 *)Method_System_Collections_Generic_List_long__ToArray__);
    *unlockList = v34;
    sub_B77560((BattleServantConfConponent_o *)unlockList, (System_Int32_array **)v34, v35, v36, v37, v38, v39, v40);
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
  __int64 v3; // x20
  CombineCommandCodeListViewManager_o *v4; // x19
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  CombineCommandCodeListViewManager_o *v6; // x20
  int size; // w23
  __int64 v8; // x24
  CombineCommandCodeListViewItem_o *v9; // x21
  __int64 v10; // x9
  struct UserCommandCodeEntity_o *userCommandCode; // x8
  __int128 v12; // q0
  int64_t v13; // x0
  __int128 v14; // q0
  const MethodInfo *v15; // x2
  UnityEngine_Object_o *viewObject; // x22
  CombineCommandCodeListViewManager_o *v17; // x0
  const MethodInfo *v18; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+20h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+40h] [xbp-70h]

  v3 = userCommandCodeId;
  v4 = this;
  if ( (byte_438B784 & 1) == 0 )
  {
    sub_B775C4(&CombineCommandCodeListViewItem_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_B775C4(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    this = (CombineCommandCodeListViewManager_o *)sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438B784 = 1;
  }
  itemList = v4->fields.itemList;
  if ( itemList )
  {
    if ( v3 < 1 )
    {
      v6 = 0LL;
    }
    else
    {
      this = (CombineCommandCodeListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this
        || (this = (CombineCommandCodeListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                            (DataManager_o *)this,
                                                            (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___)) == 0LL
        || (this = (CombineCommandCodeListViewManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                                            (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this,
                                                            v3,
                                                            (const MethodInfo_21FBABC *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__),
            (itemList = v4->fields.itemList) == 0LL) )
      {
LABEL_34:
        sub_B7769C(this, userCommandCodeId);
      }
      v6 = this;
    }
    size = itemList->fields._size;
    if ( size >= 1 )
    {
      v8 = 0LL;
      while ( 1 )
      {
        if ( itemList->fields._size <= (unsigned int)v8 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
        v9 = (CombineCommandCodeListViewItem_o *)itemList->fields._items->m_Items[v8];
        if ( v9 )
        {
          userCommandCodeId = (int64_t)CombineCommandCodeListViewItem_TypeInfo;
          v10 = *(&CombineCommandCodeListViewItem_TypeInfo->_2.bitflags2 + 1);
          if ( *(&v9->klass->_2.bitflags2 + 1) < (unsigned int)v10
            || (CombineCommandCodeListViewItem_c *)v9->klass->_2.typeHierarchy[v10 - 1] != CombineCommandCodeListViewItem_TypeInfo )
          {
            break;
          }
        }
        if ( v6 )
        {
          if ( !v9 )
            goto LABEL_34;
          userCommandCode = v9->fields.userCommandCode;
          if ( !userCommandCode )
            goto LABEL_34;
          v12 = *(_OWORD *)&userCommandCode->fields.id.fields.fakeValue;
          *(_OWORD *)&v21.fields.currentCryptoKey = *(_OWORD *)&userCommandCode->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v21.fields.fakeValue = v12;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v20 = v21;
          v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v20, 0LL);
          v14 = *(_OWORD *)&v6->fields.indicator;
          *(_OWORD *)&v19.fields.currentCryptoKey = *(_OWORD *)&v6->fields.m_CachedPtr;
          *(_OWORD *)&v19.fields.fakeValue = v14;
          if ( v13 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v19, 0LL) )
            CombineCommandCodeListViewItem__Modify(v9, (UserCommandCodeEntity_o *)v6, v15);
        }
        else if ( !v9 )
        {
          goto LABEL_34;
        }
        viewObject = (UnityEngine_Object_o *)v9->fields.viewObject;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (CombineCommandCodeListViewManager_o *)UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (CombineCommandCodeListViewManager_o *)v9->fields.viewObject;
          if ( !this )
            goto LABEL_34;
          this = (CombineCommandCodeListViewManager_o *)((__int64 (__fastcall *)(CombineCommandCodeListViewManager_o *, CombineCommandCodeListViewItem_o *, Il2CppMethodPointer))this->klass->vtable._5_SetSortButtonImage.method)(
                                                          this,
                                                          v9,
                                                          this->klass->vtable._6_GetDragRoot.methodPtr);
        }
        if ( (int)++v8 >= size )
          return;
        itemList = v4->fields.itemList;
        if ( !itemList )
          goto LABEL_34;
      }
      v17 = (CombineCommandCodeListViewManager_o *)sub_B77990(v9);
      CombineCommandCodeListViewManager__OnClickDecide(v17, v18);
    }
  }
}


void __fastcall CombineCommandCodeListViewManager__ModifyList(
        CombineCommandCodeListViewManager_o *this,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  CombineCommandCodeListViewItem_c *v5; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  signed __int64 size; // x25
  CombineCommandCodeListViewItem_c **v8; // x20
  unsigned int v9; // w27
  int64_t v10; // x26
  __int64 v11; // x8
  System_Int32_array ***v12; // x26
  __int64 v13; // t1
  __int128 v14; // q0
  int64_t v15; // x22
  __int64 v16; // x21
  struct System_Collections_Generic_List_ListViewItem__o *v17; // x23
  CombineCommandCodeListViewItem_o *v18; // x23
  __int64 v19; // x9
  struct UserCommandCodeEntity_o *userCommandCode; // x8
  __int128 v21; // q0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Int32_array **v28; // x1
  const MethodInfo *v29; // x1
  __int64 v30; // x0
  unsigned __int64 v31; // x22
  struct System_Collections_Generic_List_ListViewItem__o *v32; // x20
  __int64 v33; // x9
  UnityEngine_Object_o *v34; // x21
  CombineCommandCodeListViewManager_o *v35; // x0
  int64_t v36; // x1
  const MethodInfo *v37; // x2
  __int64 v39; // [xsp+10h] [xbp-C0h]
  int64_t v40; // [xsp+18h] [xbp-B8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+40h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+60h] [xbp-70h]

  if ( (byte_438B783 & 1) == 0 )
  {
    sub_B775C4(&CombineCommandCodeListViewItem_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438B783 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_52;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !Instance )
    goto LABEL_52;
  Instance = (int64_t)UserCommandCodeMaster__getList((UserCommandCodeMaster_o *)Instance, 0LL);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_52;
  size = itemList->fields._size;
  if ( !Instance || (v39 = *(_QWORD *)(Instance + 24), (int)v39 < 1) )
  {
LABEL_35:
    if ( (int)size < 1 || !isIconSizeChange )
      return;
    v31 = 0LL;
    while ( 1 )
    {
      v32 = this->fields.itemList;
      if ( !v32 )
        break;
      if ( v31 >= (unsigned int)v32->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      v8 = (CombineCommandCodeListViewItem_c **)v32->fields._items->m_Items[v31];
      if ( v8 )
      {
        v33 = *(&CombineCommandCodeListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&(*v8)->_2.bitflags2 + 1) < (unsigned int)v33
          || (CombineCommandCodeListViewItem_c *)(*v8)->_2.typeHierarchy[v33 - 1] != CombineCommandCodeListViewItem_TypeInfo )
        {
          goto LABEL_54;
        }
        v34 = (UnityEngine_Object_o *)v8[13];
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        Instance = UnityEngine_Object__op_Equality(v34, 0LL, 0LL);
        if ( (Instance & 1) == 0 )
        {
          Instance = (int64_t)v8[13];
          if ( !Instance )
            break;
          ListViewObject__SetItemSeed((ListViewObject_o *)Instance, (ListViewItem_o *)v8, this->fields.seed, 0LL);
        }
      }
      if ( (__int64)++v31 >= size )
        return;
    }
LABEL_52:
    sub_B7769C(Instance, v5);
  }
  if ( !(_DWORD)v39 )
    goto LABEL_34;
  v8 = &CombineCommandCodeListViewItem_TypeInfo;
  v9 = 0;
  v40 = Instance;
  while ( 1 )
  {
    v10 = Instance + 8LL * (int)v9;
    v13 = *(_QWORD *)(v10 + 32);
    v12 = (System_Int32_array ***)(v10 + 32);
    v11 = v13;
    if ( !v13 )
      goto LABEL_52;
    v14 = *(_OWORD *)(v11 + 32);
    *(_OWORD *)&v43.fields.currentCryptoKey = *(_OWORD *)(v11 + 16);
    *(_OWORD *)&v43.fields.fakeValue = v14;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v42 = v43;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v42, 0LL);
    if ( (int)size >= 1 )
      break;
LABEL_32:
    Instance = v40;
    if ( (int)++v9 >= (int)v39 )
      goto LABEL_35;
    if ( v9 >= *(_DWORD *)(v40 + 24) )
      goto LABEL_34;
  }
  v15 = Instance;
  v16 = 0LL;
  while ( 1 )
  {
    v17 = this->fields.itemList;
    if ( !v17 )
      goto LABEL_52;
    if ( v17->fields._size <= (unsigned int)v16 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
    v18 = (CombineCommandCodeListViewItem_o *)v17->fields._items->m_Items[v16];
    if ( !v18 )
      goto LABEL_52;
    v5 = CombineCommandCodeListViewItem_TypeInfo;
    v19 = *(&CombineCommandCodeListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v18->klass->_2.bitflags2 + 1) < (unsigned int)v19
      || (CombineCommandCodeListViewItem_c *)v18->klass->_2.typeHierarchy[v19 - 1] != CombineCommandCodeListViewItem_TypeInfo )
    {
      break;
    }
    userCommandCode = v18->fields.userCommandCode;
    if ( userCommandCode )
    {
      v21 = *(_OWORD *)&userCommandCode->fields.id.fields.fakeValue;
      *(_OWORD *)&v43.fields.currentCryptoKey = *(_OWORD *)&userCommandCode->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v43.fields.fakeValue = v21;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v41 = v43;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v41, 0LL);
      if ( Instance == v15 )
      {
        if ( v9 < *(_DWORD *)(v40 + 24) )
        {
          v28 = *v12;
          v18->fields.userCommandCode = (struct UserCommandCodeEntity_o *)*v12;
          sub_B77560((BattleServantConfConponent_o *)&v18->fields.userCommandCode, v28, v22, v23, v24, v25, v26, v27);
          if ( !isIconSizeChange )
          {
            CombineCommandCodeListViewItem__ModifyLockItem(v18, (const MethodInfo *)v5);
            CombineCommandCodeListViewItem__ModifyChoiceItem(v18, v29);
          }
          goto LABEL_32;
        }
LABEL_34:
        v30 = sub_B776C8(Instance);
        sub_B77668(v30, 0LL);
      }
    }
    if ( (int)++v16 >= (int)size )
      goto LABEL_32;
  }
  sub_B77990(v18);
LABEL_54:
  v35 = (CombineCommandCodeListViewManager_o *)sub_B77990(v8);
  CombineCommandCodeListViewManager__ModifyItem(v35, v36, v37);
}


void __fastcall CombineCommandCodeListViewManager__OnClickChoiceTab(
        CombineCommandCodeListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  CombineCommandCodeListViewManager_RequestCallbackFunc_o *v4; // x20
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x2

  if ( (byte_438B790 & 1) == 0 )
  {
    sub_B775C4(&Method_CombineCommandCodeListViewManager_EndClickTabChoice__);
    sub_B775C4(&CombineCommandCodeListViewManager_RequestCallbackFunc_TypeInfo);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438B790 = 1;
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
      v4 = (CombineCommandCodeListViewManager_RequestCallbackFunc_o *)sub_B77694(CombineCommandCodeListViewManager_RequestCallbackFunc_TypeInfo);
      CombineCommandCodeListViewManager_RequestCallbackFunc___ctor(
        v4,
        (Il2CppObject *)this,
        Method_CombineCommandCodeListViewManager_EndClickTabChoice__,
        0LL);
      CombineCommandCodeListViewManager__StatusRequest(this, v4, v5);
    }
    else
    {
      CombineCommandCodeListViewManager__SetStatusKind(this, 2, v3);
      CombineCommandCodeListViewManager__ModifyList(this, 0, v6);
      CombineCommandCodeListViewManager__SetMode_25900432(this, 3, v7);
    }
  }
}


void __fastcall CombineCommandCodeListViewManager__OnClickCollectLock(
        CombineCommandCodeListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  CombineCommandCodeListViewManager_RequestCallbackFunc_o *v4; // x20
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x2

  if ( (byte_438B78F & 1) == 0 )
  {
    sub_B775C4(&Method_CombineCommandCodeListViewManager_EndClickTabLock__);
    sub_B775C4(&CombineCommandCodeListViewManager_RequestCallbackFunc_TypeInfo);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438B78F = 1;
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
      v4 = (CombineCommandCodeListViewManager_RequestCallbackFunc_o *)sub_B77694(CombineCommandCodeListViewManager_RequestCallbackFunc_TypeInfo);
      CombineCommandCodeListViewManager_RequestCallbackFunc___ctor(
        v4,
        (Il2CppObject *)this,
        Method_CombineCommandCodeListViewManager_EndClickTabLock__,
        0LL);
      CombineCommandCodeListViewManager__StatusRequest(this, v4, v5);
    }
    else
    {
      CombineCommandCodeListViewManager__SetStatusKind(this, 1, v3);
      CombineCommandCodeListViewManager__ModifyList(this, 0, v6);
      CombineCommandCodeListViewManager__SetMode_25900432(this, 3, v7);
    }
  }
}


void __fastcall CombineCommandCodeListViewManager__OnClickDecide(
        CombineCommandCodeListViewManager_o *this,
        const MethodInfo *method)
{
  struct CombineCommandCodeListViewItem_o *selectItem; // x8
  struct UserCommandCodeEntity_o *userCommandCode; // x8
  __int128 v5; // q1
  __int64 v6; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *Master_WarQuestSelectionMaster; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v9; // [xsp+20h] [xbp-30h]

  if ( (byte_438B785 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_UserCommandCodeMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438B785 = 1;
  }
  selectItem = this->fields.selectItem;
  if ( selectItem )
  {
    userCommandCode = selectItem->fields.userCommandCode;
    if ( userCommandCode )
    {
      v5 = *(_OWORD *)&userCommandCode->fields.id.fields.fakeValue;
      *(_OWORD *)&v9.fields.currentCryptoKey = *(_OWORD *)&userCommandCode->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v9.fields.fakeValue = v5;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v8 = v9;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v8, 0LL) != this->fields.nowEquipedUserCommandCodeId )
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
          Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_UserCommandCodeMaster___);
          if ( !Master_WarQuestSelectionMaster )
            goto LABEL_25;
          DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
            Master_WarQuestSelectionMaster,
            this->fields.nowEquipedUserCommandCodeId,
            (const MethodInfo_21FBABC *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
        }
        Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this->fields.combineRootComponent;
        if ( Master_WarQuestSelectionMaster )
        {
          CombineRootComponent__ShowSelectedCommandCode((CombineRootComponent_o *)Master_WarQuestSelectionMaster, 0LL);
          return;
        }
LABEL_25:
        sub_B7769C(Master_WarQuestSelectionMaster, v6);
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
  WebViewManager_o *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v5; // x21
  ServantFilterSelectMenu_CallbackFunc_o *v6; // x22
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_438B794 & 1) == 0 )
  {
    sub_B775C4(&ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    sub_B775C4(&Method_CombineCommandCodeListViewManager_EndSelectFilterKind__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438B794 = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v5 = (CommonUI_o *)Instance;
    v6 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_B77694(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v6,
      (Il2CppObject *)this,
      Method_CombineCommandCodeListViewManager_EndSelectFilterKind__,
      0LL);
    if ( !v5 )
      sub_B7769C(v7, v8);
    CommonUI__OpenServantFilterSelectMenu_18063096(v5, 6, sort, (ListViewManager_o *)this, v6, -1, 0LL);
  }
}


void __fastcall CombineCommandCodeListViewManager__OnClickListView(
        CombineCommandCodeListViewManager_o *this,
        ListViewObject_o *listviewObject,
        const MethodInfo *method)
{
  ;
}


void __fastcall CombineCommandCodeListViewManager__OnClickListView_25904544(
        CombineCommandCodeListViewManager_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x9
  _DWORD *ObjectList; // x0
  CombineCommandCodeListViewItem_c *v7; // x1
  __int64 v8; // x8
  __int128 v9; // q1
  int64_t v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  const MethodInfo *v17; // x2
  _DWORD *v18; // x21
  const MethodInfo *v19; // x2
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  int size; // w24
  unsigned int v22; // w25
  __int64 v23; // x9
  __int64 v24; // x8
  __int128 v25; // q0
  int v26; // w21
  _DWORD *v27; // x20
  __int64 v28; // x22
  unsigned int v29; // w8
  CombineCommandCodeListViewManager_o *v30; // x0
  ListViewItem_o *v31; // x1
  const MethodInfo *v32; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+40h] [xbp-60h]

  if ( (byte_438B792 & 1) == 0 )
  {
    sub_B775C4(&CombineCommandCodeListViewItem_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_CombineCommandCodeListViewObject__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_CombineCommandCodeListViewObject__get_Item__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438B792 = 1;
  }
  if ( item
    && ((v5 = *(&CombineCommandCodeListViewItem_TypeInfo->_2.bitflags2 + 1),
         *(&item->klass->_2.bitflags2 + 1) < (unsigned int)v5)
     || (CombineCommandCodeListViewItem_c *)item->klass->_2.typeHierarchy[v5 - 1] != CombineCommandCodeListViewItem_TypeInfo) )
  {
LABEL_44:
    v30 = (CombineCommandCodeListViewManager_o *)sub_B77990(item);
    CombineCommandCodeListViewManager__OnLongPushListView(v30, v31, v32);
  }
  else
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    if ( !item )
      goto LABEL_43;
    v8 = *(_QWORD *)&item[1].fields.selectNum;
    if ( !v8 )
      goto LABEL_43;
    v9 = *(_OWORD *)(v8 + 32);
    *(_OWORD *)&v35.fields.currentCryptoKey = *(_OWORD *)(v8 + 16);
    *(_OWORD *)&v35.fields.fakeValue = v9;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v34 = v35;
    v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v34, 0LL);
    if ( BYTE3(item[1].klass) )
    {
      BYTE3(item[1].klass) = 0;
      this->fields.selectItem = 0LL;
      sub_B77560((BattleServantConfConponent_o *)&this->fields.selectItem, 0LL, v11, v12, v13, v14, v15, v16);
      CombineCommandCodeListViewManager__SetSelectedCommandCodeData(this, 0LL, v17);
      v18 = 0LL;
    }
    else
    {
      v18 = (_DWORD *)v10;
      BYTE3(item[1].klass) = 1;
      this->fields.selectItem = (struct CombineCommandCodeListViewItem_o *)item;
      sub_B77560(
        (BattleServantConfConponent_o *)&this->fields.selectItem,
        (System_Int32_array **)item,
        v11,
        v12,
        v13,
        v14,
        v15,
        v16);
      CombineCommandCodeListViewManager__SetSelectedCommandCodeData(this, (CombineCommandCodeListViewItem_o *)item, v19);
    }
    itemList = this->fields.itemList;
    if ( !itemList )
      goto LABEL_43;
    size = itemList->fields._size;
    if ( size >= 1 )
    {
      v22 = 0;
      do
      {
        if ( itemList->fields._size <= v22 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
        item = itemList->fields._items->m_Items[v22];
        if ( !item )
          break;
        v7 = CombineCommandCodeListViewItem_TypeInfo;
        v23 = *(&CombineCommandCodeListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&item->klass->_2.bitflags2 + 1) < (unsigned int)v23
          || (CombineCommandCodeListViewItem_c *)item->klass->_2.typeHierarchy[v23 - 1] != CombineCommandCodeListViewItem_TypeInfo )
        {
          goto LABEL_44;
        }
        v24 = *(_QWORD *)&item[1].fields.selectNum;
        if ( !v24 )
          break;
        v25 = *(_OWORD *)(v24 + 32);
        *(_OWORD *)&v35.fields.currentCryptoKey = *(_OWORD *)(v24 + 16);
        *(_OWORD *)&v35.fields.fakeValue = v25;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v33 = v35;
        ObjectList = (_DWORD *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v33, 0LL);
        if ( ObjectList != v18 )
          BYTE3(item[1].klass) = 0;
        if ( (int)++v22 >= size )
          goto LABEL_34;
        itemList = this->fields.itemList;
      }
      while ( itemList );
LABEL_43:
      sub_B7769C(ObjectList, v7);
    }
LABEL_34:
    ObjectList = CombineCommandCodeListViewManager__get_ObjectList(this, (const MethodInfo *)v7);
    if ( !ObjectList )
      goto LABEL_43;
    v26 = ObjectList[6];
    v27 = ObjectList;
    if ( v26 >= 1 )
    {
      v28 = 0LL;
      v29 = ObjectList[6];
      while ( 1 )
      {
        if ( v29 <= (unsigned int)v28 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
        ObjectList = *(_DWORD **)(*((_QWORD *)v27 + 2) + 8 * v28 + 32);
        if ( !ObjectList )
          break;
        (*(void (__fastcall **)(_DWORD *, bool, _QWORD))(*(_QWORD *)ObjectList + 456LL))(
          ObjectList,
          this->fields.isInput,
          *(_QWORD *)(*(_QWORD *)ObjectList + 464LL));
        if ( (int)v28 + 1 >= v26 )
          return;
        v29 = v27[6];
        ++v28;
      }
      goto LABEL_43;
    }
  }
}


void __fastcall CombineCommandCodeListViewManager__OnClickNormalStatus(
        CombineCommandCodeListViewManager_o *this,
        const MethodInfo *method)
{
  CombineCommandCodeListViewManager_RequestCallbackFunc_o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_438B78E & 1) == 0 )
  {
    sub_B775C4(&Method_CombineCommandCodeListViewManager_EndClickTabStatus__);
    sub_B775C4(&CombineCommandCodeListViewManager_RequestCallbackFunc_TypeInfo);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438B78E = 1;
  }
  if ( this->fields.modeKind )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v3 = (CombineCommandCodeListViewManager_RequestCallbackFunc_o *)sub_B77694(CombineCommandCodeListViewManager_RequestCallbackFunc_TypeInfo);
    CombineCommandCodeListViewManager_RequestCallbackFunc___ctor(
      v3,
      (Il2CppObject *)this,
      Method_CombineCommandCodeListViewManager_EndClickTabStatus__,
      0LL);
    CombineCommandCodeListViewManager__StatusRequest(this, v3, v4);
  }
}


void __fastcall CombineCommandCodeListViewManager__OnClickScaleChange(
        CombineCommandCodeListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *ScaleKindSpriteName; // x0
  __int64 v4; // x1
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  unsigned int scaleType; // w8
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  int32_t v13; // w8
  struct ListViewSort_o *sort; // x8
  UISprite_o *scaleChangeButtonSprite; // x20
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x2

  if ( (byte_438B78B & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438B78B = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  scaleType = this->fields.scaleType;
  if ( scaleType < 2 )
  {
    smallSizeSeed = this->fields.smallSizeSeed;
    v13 = 2;
    goto LABEL_12;
  }
  if ( scaleType == 2 )
  {
    smallSizeSeed = this->fields.extremelySmallSizeSeed;
    v13 = 3;
    goto LABEL_12;
  }
  if ( scaleType == 3 )
  {
    smallSizeSeed = this->fields.normalSizeSeed;
    v13 = 1;
LABEL_12:
    this->fields.scaleType = v13;
    this->fields.seed = smallSizeSeed;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.seed,
      (System_Int32_array **)smallSizeSeed,
      v5,
      v6,
      v7,
      v8,
      v9,
      v10);
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
    sub_B7769C(ScaleKindSpriteName, v4);
  }
  UISprite__set_spriteName(scaleChangeButtonSprite, (System_String_o *)ScaleKindSpriteName, 0LL);
  CombineCommandCodeListViewManager__ModifyList(this, 1, v16);
  CombineCommandCodeListViewManager__SetMode_25900432(this, 3, v17);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall CombineCommandCodeListViewManager__OnClickSortAscendingOrder(
        CombineCommandCodeListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_438B799 & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438B799 = 1;
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
      sub_B7769C(v3, v4);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall CombineCommandCodeListViewManager__OnClickSortKind(
        CombineCommandCodeListViewManager_o *this,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v5; // x21
  ServantSortSelectMenu_CallbackFunc_o *v6; // x22
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_438B797 & 1) == 0 )
  {
    sub_B775C4(&ServantSortSelectMenu_CallbackFunc_TypeInfo);
    sub_B775C4(&Method_CombineCommandCodeListViewManager_EndSelectSortKind__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438B797 = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v5 = (CommonUI_o *)Instance;
    v6 = (ServantSortSelectMenu_CallbackFunc_o *)sub_B77694(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v6,
      (Il2CppObject *)this,
      Method_CombineCommandCodeListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v5 )
      sub_B7769C(v7, v8);
    CommonUI__OpenServantSortSelectMenu(v5, 6, sort, 0, v6, 0LL);
  }
}


void __fastcall CombineCommandCodeListViewManager__OnLongPushListView(
        CombineCommandCodeListViewManager_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  CombineCommandCodeListViewItem_c *v5; // x1
  __int64 v6; // x9
  UnityEngine_Behaviour_o *scrollView; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct UserCommandCodeEntity_o *v14; // x1
  CombineCommandCodeListViewManager_o *v15; // x0
  const MethodInfo *v16; // x1

  if ( (byte_438B793 & 1) == 0 )
  {
    sub_B775C4(&CombineCommandCodeListViewItem_TypeInfo);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438B793 = 1;
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
      && ((v5 = CombineCommandCodeListViewItem_TypeInfo,
           v6 = *(&CombineCommandCodeListViewItem_TypeInfo->_2.bitflags2 + 1),
           *(&item->klass->_2.bitflags2 + 1) < (unsigned int)v6)
       || (CombineCommandCodeListViewItem_c *)item->klass->_2.typeHierarchy[v6 - 1] != CombineCommandCodeListViewItem_TypeInfo) )
    {
      v15 = (CombineCommandCodeListViewManager_o *)sub_B77990(item);
      CombineCommandCodeListViewManager__GetSelectItem(v15, v16);
    }
    else
    {
      scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
      if ( !scrollView
        || (UnityEngine_Behaviour__set_enabled(scrollView, 0, 0LL), !item)
        || (v14 = *(struct UserCommandCodeEntity_o **)&item[1].fields.selectNum,
            this->fields.selectShowStatusUserCmdCode = v14,
            sub_B77560(
              (BattleServantConfConponent_o *)&this->fields.selectShowStatusUserCmdCode,
              (System_Int32_array **)v14,
              v8,
              v9,
              v10,
              v11,
              v12,
              v13),
            (scrollView = (UnityEngine_Behaviour_o *)this->fields.combineRootComponent) == 0LL) )
      {
        sub_B7769C(scrollView, v5);
      }
      CombineRootComponent__ShowCommandCodeStatus((CombineRootComponent_o *)scrollView, 0LL);
    }
  }
}


void __fastcall CombineCommandCodeListViewManager__OnMoveEnd(
        CombineCommandCodeListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  UIScrollView_o *v8; // x0
  System_Action_o *callbackFunc2; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_438B78A & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438B78A = 1;
  }
  callbackCount = this->fields.callbackCount;
  v4 = __OFSUB__(callbackCount, 1);
  v5 = callbackCount - 1;
  if ( v5 < 0 == v4 )
  {
    this->fields.callbackCount = v5;
    if ( !v5 )
    {
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v8 = this->fields.scrollView;
        if ( !v8
          || (((void (__fastcall *)(UIScrollView_o *, __int64, Il2CppMethodPointer))v8->klass->vtable._8_UpdateScrollbars.method)(
                v8,
                1LL,
                v8->klass->vtable._9_SetDragAmount.methodPtr),
              (v8 = this->fields.scrollView) == 0LL) )
        {
          sub_B7769C(v8, v7);
        }
        UIScrollView__UpdatePosition(v8, 0LL);
        callbackFunc2 = this->fields.callbackFunc2;
        this->fields.callbackFunc2 = 0LL;
        sub_B77560((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v10, v11, v12, v13, v14, v15);
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
  System_Collections_Generic_List_CombineCommandCodeListViewObject__o *ObjectList; // x0
  __int64 v8; // x1
  int32_t size; // w8
  System_Collections_Generic_List_CombineCommandCodeListViewObject__o *v10; // x21
  int v11; // w24
  __int64 v12; // x25
  unsigned int v13; // w8
  CombineCommandCodeListViewObject_o *v14; // x22
  System_Action_o *v15; // x23

  if ( (byte_438B789 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_CombineCommandCodeListViewManager_OnMoveEnd__);
    sub_B775C4(&Method_System_Collections_Generic_List_CombineCommandCodeListViewObject__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_CombineCommandCodeListViewObject__get_Item__);
    sub_B775C4(&StringLiteral_10218/*"OnMoveEnd"*/);
    byte_438B789 = 1;
  }
  ObjectList = CombineCommandCodeListViewManager__get_ObjectList(this, *(const MethodInfo **)&mode);
  if ( !ObjectList )
    goto LABEL_14;
  size = ObjectList->fields._size;
  v10 = ObjectList;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10218/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    v11 = ObjectList->fields._size;
    if ( v11 >= 1 )
    {
      v12 = 0LL;
      v13 = ObjectList->fields._size;
      while ( 1 )
      {
        if ( v13 <= (unsigned int)v12 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
        v14 = v10->fields._items->m_Items[v12];
        v15 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
        System_Action___ctor(v15, (Il2CppObject *)this, Method_CombineCommandCodeListViewManager_OnMoveEnd__, 0LL);
        if ( !v14 )
          break;
        CombineCommandCodeListViewObject__Init_25293116(v14, mode, v15, 0LL);
        if ( (int)v12 + 1 >= v11 )
          return;
        v13 = v10->fields._size;
        ++v12;
      }
LABEL_14:
      sub_B7769C(ObjectList, v8);
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
    sub_B7769C(decideButton, isEnable);
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
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v5; // x8

  if ( (byte_438B796 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_17332/*"btn_filter_on"*/);
    sub_B775C4(&StringLiteral_17331/*"btn_filter"*/);
    byte_438B796 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !filterSprite) )
  {
    sub_B7769C(sort, method);
  }
  v5 = (System_String_o **)&StringLiteral_17331/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v5 = (System_String_o **)&StringLiteral_17332/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v5, 0LL);
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
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  CombineCommandCodeListViewManager__SetMode_25900432(this, mode, v10);
}


void __fastcall CombineCommandCodeListViewManager__SetMode_25900432(
        CombineCommandCodeListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  UnityEngine_Object_o *scrollView; // x21
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  UnityEngine_Behaviour_o *v8; // x0
  int32_t v9; // w1

  if ( (byte_438B788 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438B788 = 1;
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
    v8 = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( !v8 )
      goto LABEL_18;
    if ( UnityEngine_Behaviour__get_enabled(v8, 0LL) )
      goto LABEL_12;
    v8 = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( !v8
      || (UnityEngine_Behaviour__set_enabled(v8, 1, 0LL),
          (v8 = (UnityEngine_Behaviour_o *)this->fields.scrollView) == 0LL) )
    {
LABEL_18:
      sub_B7769C(v8, v6);
    }
    UIScrollView__UpdatePosition((UIScrollView_o *)v8, 0LL);
  }
LABEL_12:
  if ( mode == 2 )
  {
    v9 = 2;
LABEL_16:
    CombineCommandCodeListViewManager__RequestListObject(this, v9, 0.0, v7);
    return;
  }
  if ( mode == 3 )
  {
    v9 = 3;
    goto LABEL_16;
  }
}


void __fastcall CombineCommandCodeListViewManager__SetObjectItem(
        CombineCommandCodeListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  CombineCommandCodeListViewManager_o *v5; // x20
  __int64 v6; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_438B787 & 1) == 0 )
  {
    this = (CombineCommandCodeListViewManager_o *)sub_B775C4(&CombineCommandCodeListViewObject_TypeInfo);
    byte_438B787 = 1;
  }
  if ( !obj
    || (v6 = *(&CombineCommandCodeListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (CombineCommandCodeListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != CombineCommandCodeListViewObject_TypeInfo )
  {
    sub_B7769C(this, obj);
  }
  if ( v5->fields.initMode == 3 )
    v7 = 3;
  else
    v7 = 2;
  CombineCommandCodeListViewObject__Init_25293180((CombineCommandCodeListViewObject_o *)obj, v7, 0LL);
}


void __fastcall CombineCommandCodeListViewManager__SetSelectedCommandCodeData(
        CombineCommandCodeListViewManager_o *this,
        CombineCommandCodeListViewItem_o *item,
        const MethodInfo *method)
{
  UnityEngine_Component_o *selectedCommandCode; // x0
  System_String_o *MargeExplanation_26848244; // x21
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  const MethodInfo *v13; // x2
  struct CombineCommandCodeListViewItem_o *selectItem; // x8
  struct UserCommandCodeEntity_o *userCommandCode; // x8
  __int128 v16; // q1
  char v17; // w1
  const MethodInfo *v18; // x2
  __int64 v19; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+20h] [xbp-50h]
  System_String_array *explanationList; // [xsp+40h] [xbp-30h] BYREF
  System_String_array *titleList; // [xsp+48h] [xbp-28h] BYREF
  System_Int32_array *idList; // [xsp+58h] [xbp-18h] BYREF

  if ( (byte_438B782 & 1) == 0 )
  {
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438B782 = 1;
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
            CombineCommandCodeListViewManager__SetDecideButtonStatus(this, 0, v18);
            selectedCommandCode = (UnityEngine_Component_o *)this->fields.equippedInfo;
            if ( selectedCommandCode )
              goto LABEL_23;
          }
        }
      }
    }
LABEL_29:
    sub_B7769C(selectedCommandCode, item);
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
  ServantFaceIconComponent__Set_31764288(
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
  MargeExplanation_26848244 = SkillInfo__GetMargeExplanation_26848244(explanationList, 0LL);
  this->fields.selectItem = item;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.selectItem,
    (System_Int32_array **)item,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  if ( !titleList )
    goto LABEL_29;
  if ( !titleList->max_length )
  {
    v19 = sub_B776C8(selectedCommandCode);
    sub_B77668(v19, 0LL);
  }
  selectedCommandCode = (UnityEngine_Component_o *)this->fields.skillName;
  if ( !selectedCommandCode )
    goto LABEL_29;
  UILabel__set_text((UILabel_o *)selectedCommandCode, titleList->m_Items[0], 0LL);
  WrapControlText__textAdjust(this->fields.skillMessage, MargeExplanation_26848244, 22, 0, 0, 0LL);
  selectItem = this->fields.selectItem;
  if ( selectItem && (userCommandCode = selectItem->fields.userCommandCode) != 0LL )
  {
    v16 = *(_OWORD *)&userCommandCode->fields.id.fields.fakeValue;
    *(_OWORD *)&v21.fields.currentCryptoKey = *(_OWORD *)&userCommandCode->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v21.fields.fakeValue = v16;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v20 = v21;
    v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v20, 0LL) != this->fields.nowEquipedUserCommandCodeId;
  }
  else
  {
    v17 = 1;
  }
  CombineCommandCodeListViewManager__SetDecideButtonStatus(this, v17, v13);
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
  UnityEngine_Object_o *sortKindLabel; // x20
  __int64 v4; // x1
  ListViewSort_o *sort; // x0
  UILabel_o *v6; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v8; // x8
  int32_t sortKind; // w9
  System_String_o **v10; // x8
  struct ListViewSort_o *v11; // x8
  _BOOL4 isAscendingOrder; // w8
  System_String_o **v13; // x9
  System_String_o **v14; // x10
  System_String_o **v15; // x8
  struct ListViewSort_o *v16; // x8
  System_String_o **v17; // x8

  if ( (byte_438B79A & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_17360/*"btn_sort_up"*/);
    sub_B775C4(&StringLiteral_17444/*"btn_txt_up"*/);
    sub_B775C4(&StringLiteral_17400/*"btn_txt_new"*/);
    sub_B775C4(&StringLiteral_17390/*"btn_txt_down"*/);
    sub_B775C4(&StringLiteral_17407/*"btn_txt_old"*/);
    sub_B775C4(&StringLiteral_17357/*"btn_sort_down"*/);
    byte_438B79A = 1;
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
    v6 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0LL);
    if ( !v6 )
      goto LABEL_36;
    UILabel__set_text(v6, (System_String_o *)sort, 0LL);
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
    v8 = this->fields.sort;
    if ( v8 )
    {
      sortKind = v8->fields.sortKind;
      if ( sortKind == 11 || sortKind == 1 )
      {
        sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
        if ( sort )
        {
          v10 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17407/*"btn_txt_old"*/ : &StringLiteral_17400/*"btn_txt_new"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v10, 0LL);
          v11 = this->fields.sort;
          if ( v11 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              isAscendingOrder = v11->fields.isAscendingOrder;
              v13 = (System_String_o **)&StringLiteral_17357/*"btn_sort_down"*/;
              v14 = (System_String_o **)&StringLiteral_17360/*"btn_sort_up"*/;
LABEL_32:
              if ( isAscendingOrder )
                v17 = v13;
              else
                v17 = v14;
              UISprite__set_spriteName((UISprite_o *)sort, *v17, 0LL);
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
          v15 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17444/*"btn_txt_up"*/ : &StringLiteral_17390/*"btn_txt_down"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v15, 0LL);
          v16 = this->fields.sort;
          if ( v16 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              isAscendingOrder = v16->fields.isAscendingOrder;
              v13 = (System_String_o **)&StringLiteral_17360/*"btn_sort_up"*/;
              v14 = (System_String_o **)&StringLiteral_17357/*"btn_sort_down"*/;
              goto LABEL_32;
            }
          }
        }
      }
    }
LABEL_36:
    sub_B7769C(sort, v4);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineCommandCodeListViewManager__SetStatusKind(
        CombineCommandCodeListViewManager_o *this,
        int32_t modeKind,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *statusTabButton; // x0
  __int64 *v6; // x8
  __int64 *v7; // x8
  __int64 *v8; // x8
  int32_t v9; // w8
  UILabel_o *v10; // x20
  const MethodInfo *v11; // x2
  struct CombineCommandCodeListViewItem_o *selectItem; // x8
  struct UserCommandCodeEntity_o *userCommandCode; // x8
  __int128 v14; // q1
  bool v15; // w1
  UILabel_o *combineInfoMsgLb; // x20
  __int64 *v17; // x8
  const MethodInfo *v18; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+20h] [xbp-40h]

  if ( (byte_438B781 & 1) == 0 )
  {
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&StringLiteral_17463/*"button_allchoice_reg"*/);
    sub_B775C4(&StringLiteral_17466/*"button_alllock_unreg"*/);
    sub_B775C4(&StringLiteral_11962/*"SERVANT_LIST_EXPLANATION_CHOICE"*/);
    sub_B775C4(&StringLiteral_11963/*"SERVANT_LIST_EXPLANATION_LOCK"*/);
    sub_B775C4(&StringLiteral_17479/*"button_select_reg"*/);
    sub_B775C4(&StringLiteral_3290/*"COMBINE_COMMAND_CODE_SELECT_COMMAND_CODE_MSG"*/);
    sub_B775C4(&StringLiteral_17480/*"button_select_unreg"*/);
    sub_B775C4(&StringLiteral_17465/*"button_alllock_reg"*/);
    sub_B775C4(&StringLiteral_17464/*"button_allchoice_unreg"*/);
    byte_438B781 = 1;
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
  v6 = &StringLiteral_17479/*"button_select_reg"*/;
  if ( modeKind )
    v6 = &StringLiteral_17480/*"button_select_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v6, 0LL);
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
  v7 = &StringLiteral_17465/*"button_alllock_reg"*/;
  if ( modeKind != 1 )
    v7 = &StringLiteral_17466/*"button_alllock_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v7, 0LL);
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
  v8 = &StringLiteral_17463/*"button_allchoice_reg"*/;
  if ( modeKind != 2 )
    v8 = &StringLiteral_17464/*"button_allchoice_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v8, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
  if ( !statusTabButton )
    goto LABEL_47;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))statusTabButton->klass[1]._1.implementedInterfaces)(
    statusTabButton,
    0LL,
    0LL,
    statusTabButton->klass[1]._1.interfaceOffsets);
  v9 = this->fields.modeKind;
  if ( v9 == 2 )
  {
    combineInfoMsgLb = this->fields.combineInfoMsgLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v17 = &StringLiteral_11962/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
LABEL_42:
    statusTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get((System_String_o *)*v17, 0LL);
    if ( combineInfoMsgLb )
    {
      UILabel__set_text(combineInfoMsgLb, (System_String_o *)statusTabButton, 0LL);
      CombineCommandCodeListViewManager__SetDecideButtonStatus(this, 0, v18);
      return;
    }
    goto LABEL_47;
  }
  if ( v9 == 1 )
  {
    combineInfoMsgLb = this->fields.combineInfoMsgLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v17 = &StringLiteral_11963/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
    goto LABEL_42;
  }
  if ( v9 )
    return;
  v10 = this->fields.combineInfoMsgLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  statusTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3290/*"COMBINE_COMMAND_CODE_SELECT_COMMAND_CODE_MSG"*/, 0LL);
  if ( !v10 )
LABEL_47:
    sub_B7769C(statusTabButton, *(_QWORD *)&modeKind);
  UILabel__set_text(v10, (System_String_o *)statusTabButton, 0LL);
  selectItem = this->fields.selectItem;
  if ( selectItem && (userCommandCode = selectItem->fields.userCommandCode) != 0LL )
  {
    v14 = *(_OWORD *)&userCommandCode->fields.id.fields.fakeValue;
    *(_OWORD *)&v20.fields.currentCryptoKey = *(_OWORD *)&userCommandCode->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v20.fields.fakeValue = v14;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v19 = v20;
    v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v19, 0LL) != this->fields.nowEquipedUserCommandCodeId;
  }
  else
  {
    v15 = 0;
  }
  CombineCommandCodeListViewManager__SetDecideButtonStatus(this, v15, v11);
}


void __fastcall CombineCommandCodeListViewManager__StatusRequest(
        CombineCommandCodeListViewManager_o *this,
        CombineCommandCodeListViewManager_RequestCallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t modeKind; // w8
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  NetworkManager_ResultCallbackFunc_o *v13; // x20
  CommandCodeStatusSyncRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v15; // x1
  System_Int64_array *v16; // x2
  System_Int64_array *v17; // x1
  bool v18; // w3
  bool v19; // w4
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  NetworkManager_ResultCallbackFunc_o *v26; // x20
  System_Int64_array *unchoiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *choiceList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *unlockList; // [xsp+18h] [xbp-28h] BYREF
  System_Int64_array *lockList; // [xsp+28h] [xbp-18h] BYREF

  if ( (byte_438B791 & 1) == 0 )
  {
    sub_B775C4(&Method_CombineCommandCodeListViewManager_EndStatusSync__);
    sub_B775C4(&Method_NetworkManager_getRequest_CommandCodeStatusSyncRequest___);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_438B791 = 1;
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
      sub_B77560(
        (BattleServantConfConponent_o *)&this->fields.requestCallback,
        (System_Int32_array **)callback,
        v20,
        v21,
        v22,
        v23,
        v24,
        v25);
      v26 = (NetworkManager_ResultCallbackFunc_o *)sub_B77694(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v26,
        (Il2CppObject *)this,
        Method_CombineCommandCodeListViewManager_EndStatusSync__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Request_WarBoardWallAttackRequest = (CommandCodeStatusSyncRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                              v26,
                                                                              (const MethodInfo_1DF8BE8 *)Method_NetworkManager_getRequest_CommandCodeStatusSyncRequest___);
      if ( Request_WarBoardWallAttackRequest )
      {
        v16 = unchoiceList;
        v17 = choiceList;
        v19 = 1;
        v18 = 0;
        goto LABEL_17;
      }
LABEL_21:
      sub_B7769C(Request_WarBoardWallAttackRequest, v15);
    }
  }
  else if ( modeKind == 1 && CombineCommandCodeListViewManager__GetSwapLockList(this, &lockList, &unlockList, v3) )
  {
    this->fields.requestCallback = callback;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.requestCallback,
      (System_Int32_array **)callback,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
    v13 = (NetworkManager_ResultCallbackFunc_o *)sub_B77694(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      Method_CombineCommandCodeListViewManager_EndStatusSync__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = (CommandCodeStatusSyncRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                            v13,
                                                                            (const MethodInfo_1DF8BE8 *)Method_NetworkManager_getRequest_CommandCodeStatusSyncRequest___);
    if ( Request_WarBoardWallAttackRequest )
    {
      v16 = unlockList;
      v17 = lockList;
      v18 = 1;
      v19 = 0;
LABEL_17:
      CommandCodeStatusSyncRequest__beginRequest(Request_WarBoardWallAttackRequest, v17, v16, v18, v19, 0LL);
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
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  CombineCommandCodeListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_438B77C & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    byte_438B77C = 1;
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
    v8 = sub_B6BFDC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (CombineCommandCodeListViewManager_o *)sub_B77990(v7);
  CombineCommandCodeListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_CombineCommandCodeListViewObject__o *__fastcall CombineCommandCodeListViewManager__get_ClippingObjectList(
        CombineCommandCodeListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v5; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x21
  signed __int64 size; // x22
  unsigned __int64 v8; // x23
  UnityEngine_Object_o *v9; // x21
  EventMissionProgressRequest_Argument_ProgressData_o *v10; // x21

  if ( (byte_438B77F & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_CombineCommandCodeListViewObject___);
    sub_B775C4(&Method_System_Collections_Generic_List_CombineCommandCodeListViewObject__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_CombineCommandCodeListViewObject___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_B775C4(&System_Collections_Generic_List_CombineCommandCodeListViewObject__TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438B77F = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_CombineCommandCodeListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_CombineCommandCodeListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    goto LABEL_21;
  size = objectList->fields._size;
  if ( (int)size >= 1 )
  {
    v8 = 0LL;
    do
    {
      if ( v8 >= (unsigned int)objectList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      v9 = (UnityEngine_Object_o *)objectList->fields._items->m_Items[v8];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_Object__op_Equality(
                                                                                         v9,
                                                                                         0LL,
                                                                                         0LL);
      if ( ((unsigned __int8)Component_srcLineSprite & 1) == 0 )
      {
        if ( !v9 )
          break;
        Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                           (UnityEngine_GameObject_o *)v9,
                                                                                           (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_CombineCommandCodeListViewObject___);
        if ( !Component_srcLineSprite )
          break;
        v10 = Component_srcLineSprite;
        Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)CombineCommandCodeListViewObject__GetItem(
                                                                                           (CombineCommandCodeListViewObject_o *)Component_srcLineSprite,
                                                                                           0LL);
        if ( !Component_srcLineSprite )
          break;
        v5 = Component_srcLineSprite;
        if ( !LOBYTE(Component_srcLineSprite[2].monitor)
          || (Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)ListViewManager__ClippingItem_24185472(
                                                                                                 (ListViewManager_o *)this,
                                                                                                 (ListViewItem_o *)Component_srcLineSprite,
                                                                                                 0LL),
              ((unsigned __int8)Component_srcLineSprite & 1) != 0) )
        {
          if ( !v3 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v3,
            v10,
            (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_CombineCommandCodeListViewObject__Add__);
        }
      }
      if ( (__int64)++v8 >= size )
        return (System_Collections_Generic_List_CombineCommandCodeListViewObject__o *)v3;
      objectList = this->fields.objectList;
    }
    while ( objectList );
LABEL_21:
    sub_B7769C(Component_srcLineSprite, v5);
  }
  return (System_Collections_Generic_List_CombineCommandCodeListViewObject__o *)v3;
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  srcLineSprite_o *Component_srcLineSprite; // x0
  __int64 v5; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x21
  signed __int64 size; // x22
  unsigned __int64 v8; // x23
  UnityEngine_Object_o *v9; // x21

  if ( (byte_438B77E & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_CombineCommandCodeListViewObject___);
    sub_B775C4(&Method_System_Collections_Generic_List_CombineCommandCodeListViewObject__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_CombineCommandCodeListViewObject___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_B775C4(&System_Collections_Generic_List_CombineCommandCodeListViewObject__TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438B77E = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_CombineCommandCodeListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_CombineCommandCodeListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    goto LABEL_17;
  size = objectList->fields._size;
  if ( (int)size >= 1 )
  {
    v8 = 0LL;
    do
    {
      if ( v8 >= (unsigned int)objectList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      v9 = (UnityEngine_Object_o *)objectList->fields._items->m_Items[v8];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Component_srcLineSprite = (srcLineSprite_o *)UnityEngine_Object__op_Equality(v9, 0LL, 0LL);
      if ( ((unsigned __int8)Component_srcLineSprite & 1) == 0 )
      {
        if ( !v9 )
          break;
        Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    (UnityEngine_GameObject_o *)v9,
                                    (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_CombineCommandCodeListViewObject___);
        if ( !v3 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v3,
          (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_CombineCommandCodeListViewObject__Add__);
      }
      if ( (__int64)++v8 >= size )
        return (System_Collections_Generic_List_CombineCommandCodeListViewObject__o *)v3;
      objectList = this->fields.objectList;
    }
    while ( objectList );
LABEL_17:
    sub_B7769C(Component_srcLineSprite, v5);
  }
  return (System_Collections_Generic_List_CombineCommandCodeListViewObject__o *)v3;
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

  if ( (byte_438B77D & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    byte_438B77D = 1;
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
    v8 = sub_B6BFDC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (CombineCommandCodeListViewManager_o *)sub_B77990(v7);
  CombineCommandCodeListViewManager__get_ObjectList(v10, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineCommandCodeListViewManager_RequestCallbackFunc___ctor(
        CombineCommandCodeListViewManager_RequestCallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B77560(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
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
  if ( (byte_4389071 & 1) == 0 )
  {
    sub_B775C4(&bool_TypeInfo);
    byte_4389071 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback);
  return (System_IAsyncResult_o *)sub_B77568(this, v9, callback, object);
}


void __fastcall CombineCommandCodeListViewManager_RequestCallbackFunc__EndInvoke(
        CombineCommandCodeListViewManager_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7756C(result, 0LL, method);
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
  __int64 v11; // x8
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, bool, _QWORD); // x0
  CombineCommandCodeListViewManager_RequestCallbackFunc_o *v18; // x8
  __int64 *v19; // x21
  __int64 v20; // x22
  void (__fastcall *v21)(bool, __int64); // x23
  char v22; // w23
  char v23; // w0
  __int64 v24; // x8
  __int64 v25; // x1
  __int64 v26; // x2
  unsigned __int64 v27; // x10
  _DWORD *v28; // x11
  CombineCommandCodeListViewManager_RequestCallbackFunc_o *v29; // [xsp+8h] [xbp-48h] BYREF

  v29 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v29;
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
      v18 = v7[v8];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(bool, __int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B77680(*(_QWORD *)&v18->fields.extra_arg, isRequest);
      if ( (sub_B775F4(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) != 1 )
        goto LABEL_36;
      v21(isRequest, v20);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v19 && *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B775EC(v20);
      v23 = sub_B779F0(v20);
      if ( (v22 & 1) != 0 )
      {
        if ( (v23 & 1) != 0 )
        {
          v24 = *v19;
          v25 = *(_QWORD *)(v20 + 24);
          v26 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v27 = 0LL;
            v28 = (_DWORD *)(*(_QWORD *)(v24 + 176) + 8LL);
            while ( *((_QWORD *)v28 - 1) != v25 )
            {
              ++v27;
              v28 += 4;
              if ( v27 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_35;
            }
            v16 = v24 + 16LL * (*v28 + (int)v26) + 312;
          }
          else
          {
LABEL_35:
            v16 = sub_B0F4C0(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B77674(v15, v20);
        (*v17)(v19, isRequest, v17);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v20 + 72);
        if ( (v23 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v20);
          v11 = *v19;
          if ( *(_WORD *)(*v19 + 298) )
          {
            v12 = 0LL;
            v13 = (_DWORD *)(*(_QWORD *)(v11 + 176) + 8LL);
            while ( *((_QWORD *)v13 - 1) != class_0 )
            {
              ++v12;
              v13 += 4;
              if ( v12 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_11;
            }
            v14 = v11 + 16LL * (int)(*v13 + v9) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_B0F4C0(v19, class_0, v9);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v14)(v19, isRequest, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            isRequest,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v21)(v19, isRequest, v20);
    goto LABEL_37;
  }
}