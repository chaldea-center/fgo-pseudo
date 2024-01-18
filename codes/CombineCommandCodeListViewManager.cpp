void __fastcall CombineCommandCodeListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *v4; // x0
  System_String_o *v5; // x19
  ListViewSort_o *v6; // x20
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  int v14; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4186176 & 1) == 0 )
  {
    sub_B2C35C(&CombineCommandCodeListViewManager_TypeInfo, v1);
    sub_B2C35C(&ListViewSort_TypeInfo, v2);
    sub_B2C35C(&StringLiteral_4155/*"CombineCommandCode"*/, v3);
    byte_4186176 = 1;
  }
  v14 = 1;
  v4 = System_Int32__ToString((int32_t)&v14, 0LL);
  v5 = System_String__Concat_44305532((System_String_o *)StringLiteral_4155/*"CombineCommandCode"*/, v4, 0LL);
  v6 = (ListViewSort_o *)sub_B2C42C(ListViewSort_TypeInfo);
  ListViewSort___ctor_33914184(v6, v5, 2, 0, 0LL);
  static_fields = (BattleServantConfConponent_o *)CombineCommandCodeListViewManager_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v6;
  sub_B2C2F8(static_fields, (System_Int32_array **)v6, v8, v9, v10, v11, v12, v13);
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
  int64_t bgTxtSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  CombineCommandCodeListViewManager_c *v49; // x0
  struct ListViewSort_o **p_commandCodeSortInfo; // x8
  struct ListViewSort_o *v51; // x1
  struct ListViewSort_o **p_sort; // x26
  const MethodInfo *v53; // x2
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  BalanceConfig_c *v60; // x8
  struct BalanceConfig_StaticFields *static_fields; // x10
  unsigned int iconScaleKind; // w8
  int CommandCodeFrameMax; // w24
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  UISprite_o *scaleChangeButtonSprite; // x20
  UserServantCommandCodeMaster_o *v66; // x27
  int64_t v67; // x9
  __int64 v68; // x19
  System_Collections_Generic_List_long__o *v69; // x28
  unsigned int v70; // w19
  int v71; // w20
  __int64 v72; // x23
  __int128 v73; // q1
  __int128 v74; // q1
  int v75; // w27
  int64_t v76; // x8
  System_Collections_Generic_Dictionary_long__long__o *v77; // x25
  __int64 v78; // x23
  __int64 v79; // x27
  __int128 v80; // q1
  _OWORD *v81; // x19
  bool v82; // w0
  __int128 v83; // q0
  bool v84; // w28
  int64_t v85; // x0
  __int128 v86; // q1
  int64_t v87; // x0
  int32_t Item; // w21
  __int128 v89; // q1
  int64_t v90; // x20
  bool v91; // w22
  CombineCommandCodeListViewItem_o *v92; // x20
  __int128 v93; // q1
  const MethodInfo *v94; // x2
  UILabel_o *emptyMessageLabel; // x20
  __int64 *v96; // x8
  UILabel_o *commandCodeInfoLabel; // x20
  System_String_o *v98; // x21
  Il2CppObject *v99; // x22
  Il2CppObject *v100; // x0
  const MethodInfo *v101; // x2
  const MethodInfo *v102; // x1
  __int64 v103; // x0
  int32_t v104; // [xsp+10h] [xbp-1A0h]
  int32_t v105; // [xsp+14h] [xbp-19Ch]
  bool v106; // [xsp+20h] [xbp-190h]
  CombineCommandCodeListViewManager_o *v109; // [xsp+30h] [xbp-180h]
  int v110; // [xsp+38h] [xbp-178h]
  int64_t v111; // [xsp+40h] [xbp-170h]
  int v112; // [xsp+4Ch] [xbp-164h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v113; // [xsp+50h] [xbp-160h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v114; // [xsp+70h] [xbp-140h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v115; // [xsp+90h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v116; // [xsp+B0h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v117; // [xsp+D0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v118; // [xsp+F0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v119; // [xsp+110h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v120; // [xsp+130h] [xbp-80h] BYREF

  if ( (byte_418615A & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, *(_QWORD *)&baseSvtId);
    sub_B2C35C(&CombineCommandCodeListViewItem_TypeInfo, v11);
    sub_B2C35C(&CombineCommandCodeListViewManager_TypeInfo, v12);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v13);
    sub_B2C35C(&Method_DataManager_GetMaster_UserServantCommandCodeMaster___, v14);
    sub_B2C35C(&DataManager_TypeInfo, v15);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_long__long__ContainsKey__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_long__long__get_Item__, v17);
    sub_B2C35C(&int_TypeInfo, v18);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__Add__, v19);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__Contains__, v20);
    sub_B2C35C(&LocalizationManager_TypeInfo, v21);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v22);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23);
    sub_B2C35C(&StringLiteral_19429/*"img_bg_arts"*/, v24);
    sub_B2C35C(&StringLiteral_3227/*"COMMAND_CODE_EMPTY"*/, v25);
    sub_B2C35C(&StringLiteral_19431/*"img_bg_buster"*/, v26);
    sub_B2C35C(&StringLiteral_19440/*"img_bg_quick"*/, v27);
    sub_B2C35C(&StringLiteral_12469/*"SUM_INFO"*/, v28);
    byte_418615A = 1;
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.selectShowStatusUserCmdCode,
    0LL,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  this->fields.selectItem = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.selectItem, 0LL, v37, v38, v39, v40, v41, v42);
  this->fields.nowEquipedUserCommandCodeId = nowEquipedUserCommandCodeId;
  v49 = CombineCommandCodeListViewManager_TypeInfo;
  if ( (BYTE3(CombineCommandCodeListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineCommandCodeListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineCommandCodeListViewManager_TypeInfo);
    v49 = CombineCommandCodeListViewManager_TypeInfo;
  }
  p_commandCodeSortInfo = &v49->static_fields->commandCodeSortInfo;
  v51 = *p_commandCodeSortInfo;
  this->fields.sort = *p_commandCodeSortInfo;
  p_sort = &this->fields.sort;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.sort,
    (System_Int32_array **)v51,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  if ( !this->fields.sort )
    goto LABEL_101;
  this->fields.sort->fields.listViewKind = 3;
  bgTxtSprite = (int64_t)*p_sort;
  if ( !*p_sort )
    goto LABEL_101;
  ListViewSort__Load((ListViewSort_o *)bgTxtSprite, 0LL);
  CombineCommandCodeListViewManager__SetSelectedCommandCodeData(this, 0LL, v53);
  bgTxtSprite = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !bgTxtSprite )
    goto LABEL_101;
  bgTxtSprite = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                           (DataManager_o *)bgTxtSprite,
                           (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !bgTxtSprite )
    goto LABEL_101;
  bgTxtSprite = (int64_t)UserCommandCodeMaster__getList((UserCommandCodeMaster_o *)bgTxtSprite, 0LL);
  v111 = bgTxtSprite;
  v60 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v60 = BalanceConfig_TypeInfo;
  }
  if ( !*p_sort )
    goto LABEL_101;
  static_fields = v60->static_fields;
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
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.seed,
      (System_Int32_array **)normalSizeSeed,
      v54,
      v55,
      v56,
      v57,
      v58,
      v59);
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
  v109 = this;
  if ( v111 && *(_QWORD *)(v111 + 24) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    bgTxtSprite = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserServantCommandCodeMaster___);
    if ( bgTxtSprite )
    {
      v66 = (UserServantCommandCodeMaster_o *)bgTxtSprite;
      v104 = commandCardType;
      v105 = modeKind;
      bgTxtSprite = (int64_t)UserServantCommandCodeMaster__GetEquipedCommandCodeList(
                               (UserServantCommandCodeMaster_o *)bgTxtSprite,
                               0LL);
      v67 = v111;
      v106 = 0;
      v68 = *(_QWORD *)(v111 + 24);
      v110 = v68;
      if ( CommandCodeFrameMax <= (int)v68 && (int)v68 >= 1 )
      {
        v69 = (System_Collections_Generic_List_long__o *)bgTxtSprite;
        v70 = 0;
        v71 = 0;
        while ( 1 )
        {
          v72 = *(_QWORD *)(v67 + 8LL * (int)v70 + 32);
          if ( !v72 )
            goto LABEL_101;
          v73 = *(_OWORD *)(v72 + 32);
          *(_OWORD *)&v120.fields.currentCryptoKey = *(_OWORD *)(v72 + 16);
          *(_OWORD *)&v120.fields.fakeValue = v73;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v119 = v120;
          bgTxtSprite = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v119, 0LL);
          if ( bgTxtSprite == nowEquipedUserCommandCodeId )
            goto LABEL_46;
          v74 = *(_OWORD *)(v72 + 32);
          *(_OWORD *)&v120.fields.currentCryptoKey = *(_OWORD *)(v72 + 16);
          *(_OWORD *)&v120.fields.fakeValue = v74;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v118 = v120;
          bgTxtSprite = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v118, 0LL);
          if ( !v69 )
            goto LABEL_101;
          bgTxtSprite = System_Collections_Generic_List_long___Contains(
                          v69,
                          bgTxtSprite,
                          (const MethodInfo_2F6D3FC *)Method_System_Collections_Generic_List_long__Contains__);
          if ( (bgTxtSprite & 1) == 0 )
          {
LABEL_46:
            v67 = v111;
          }
          else
          {
            v67 = v111;
            if ( ++v71 >= CommandCodeFrameMax )
            {
              v106 = 1;
              goto LABEL_53;
            }
          }
          if ( (int)++v70 >= v110 )
            break;
          if ( v70 >= *(_DWORD *)(v67 + 24) )
            goto LABEL_102;
        }
        v106 = 0;
LABEL_53:
        LODWORD(v68) = v110;
      }
      bgTxtSprite = (int64_t)UserServantCommandCodeMaster__GetEquippedCommandCodeDic(v66, 0LL);
      v76 = v111;
      v75 = v68;
      if ( (int)v68 >= 1 )
      {
        v77 = (System_Collections_Generic_Dictionary_long__long__o *)bgTxtSprite;
        v78 = 0LL;
        while ( (unsigned int)v78 < *(_DWORD *)(v76 + 24) )
        {
          v79 = *(_QWORD *)(v111 + 32 + 8 * v78);
          if ( !v79 )
            goto LABEL_101;
          v80 = *(_OWORD *)(v79 + 32);
          *(_OWORD *)&v120.fields.currentCryptoKey = *(_OWORD *)(v79 + 16);
          *(_OWORD *)&v120.fields.fakeValue = v80;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v117 = v120;
          bgTxtSprite = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v117, 0LL);
          if ( !v77 )
            goto LABEL_101;
          v81 = (_OWORD *)(v79 + 16);
          v82 = System_Collections_Generic_Dictionary_long__long___ContainsKey(
                  v77,
                  bgTxtSprite,
                  (const MethodInfo_2E55830 *)Method_System_Collections_Generic_Dictionary_long__long__ContainsKey__);
          v83 = *(_OWORD *)(v79 + 32);
          v84 = v82;
          *(_OWORD *)&v116.fields.currentCryptoKey = *(_OWORD *)(v79 + 16);
          *(_OWORD *)&v116.fields.fakeValue = v83;
          v85 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v116, 0LL);
          if ( System_Collections_Generic_Dictionary_long__long___ContainsKey(
                 v77,
                 v85,
                 (const MethodInfo_2E55830 *)Method_System_Collections_Generic_Dictionary_long__long__ContainsKey__) )
          {
            v86 = *(_OWORD *)(v79 + 32);
            *(_OWORD *)&v120.fields.currentCryptoKey = *v81;
            *(_OWORD *)&v120.fields.fakeValue = v86;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            v115 = v120;
            v87 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v115, 0LL);
            Item = System_Collections_Generic_Dictionary_long__long___get_Item(
                     v77,
                     v87,
                     (const MethodInfo_2E554F8 *)Method_System_Collections_Generic_Dictionary_long__long__get_Item__);
          }
          else
          {
            Item = 0;
          }
          v89 = *(_OWORD *)(v79 + 32);
          v90 = this->fields.nowEquipedUserCommandCodeId;
          *(_OWORD *)&v120.fields.currentCryptoKey = *v81;
          *(_OWORD *)&v120.fields.fakeValue = v89;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v114 = v120;
          v91 = v90 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v114, 0LL);
          v92 = (CombineCommandCodeListViewItem_o *)sub_B2C42C(CombineCommandCodeListViewItem_TypeInfo);
          CombineCommandCodeListViewItem___ctor(
            v92,
            (UserCommandCodeEntity_o *)v79,
            v91,
            v84,
            Item,
            baseSvtId,
            v106,
            0LL);
          v93 = *(_OWORD *)(v79 + 32);
          *(_OWORD *)&v120.fields.currentCryptoKey = *v81;
          *(_OWORD *)&v120.fields.fakeValue = v93;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v113 = v120;
          bgTxtSprite = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v113, 0LL);
          v75 = v110;
          if ( !v92 )
            goto LABEL_101;
          this = v109;
          if ( bgTxtSprite == beforeSelectedUserCommandCodeId )
          {
            v92->fields.isSelect = 1;
            CombineCommandCodeListViewManager__SetSelectedCommandCodeData(v109, v92, v94);
          }
          else
          {
            v92->fields.isSelect = 0;
          }
          bgTxtSprite = (int64_t)v109->fields.itemList;
          if ( !bgTxtSprite )
            goto LABEL_101;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)bgTxtSprite,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v92,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
          v76 = v111;
          if ( (int)++v78 >= v110 )
            goto LABEL_80;
        }
LABEL_102:
        v103 = sub_B2C460(bgTxtSprite);
        sub_B2C400(v103, 0LL);
      }
LABEL_80:
      bgTxtSprite = (int64_t)this->fields.emptyMessageBase;
      if ( bgTxtSprite )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bgTxtSprite, 0, 0LL);
        commandCardType = v104;
        modeKind = v105;
        goto LABEL_82;
      }
    }
LABEL_101:
    sub_B2C434(bgTxtSprite, *(_QWORD *)&baseSvtId);
  }
  bgTxtSprite = (int64_t)this->fields.emptyMessageBase;
  if ( !bgTxtSprite )
    goto LABEL_101;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bgTxtSprite, 1, 0LL);
  v75 = 0;
LABEL_82:
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  bgTxtSprite = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3227/*"COMMAND_CODE_EMPTY"*/, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_101;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)bgTxtSprite, 0LL);
  switch ( commandCardType )
  {
    case 1:
      bgTxtSprite = (int64_t)this->fields.commandCardTypeSprite;
      if ( !bgTxtSprite )
        goto LABEL_101;
      v96 = &StringLiteral_19429/*"img_bg_arts"*/;
      goto LABEL_95;
    case 3:
      bgTxtSprite = (int64_t)this->fields.commandCardTypeSprite;
      if ( !bgTxtSprite )
        goto LABEL_101;
      v96 = &StringLiteral_19440/*"img_bg_quick"*/;
      goto LABEL_95;
    case 2:
      bgTxtSprite = (int64_t)this->fields.commandCardTypeSprite;
      if ( !bgTxtSprite )
        goto LABEL_101;
      v96 = &StringLiteral_19431/*"img_bg_buster"*/;
LABEL_95:
      UISprite__set_spriteName((UISprite_o *)bgTxtSprite, (System_String_o *)*v96, 0LL);
      break;
  }
  commandCodeInfoLabel = this->fields.commandCodeInfoLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v98 = LocalizationManager__Get((System_String_o *)StringLiteral_12469/*"SUM_INFO"*/, 0LL);
  LODWORD(v120.fields.currentCryptoKey) = v75;
  v99 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v120);
  v112 = CommandCodeFrameMax;
  v100 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v112);
  bgTxtSprite = (int64_t)System_String__Format_44301068(v98, v99, v100, 0LL);
  if ( !commandCodeInfoLabel )
    goto LABEL_101;
  UILabel__set_text(commandCodeInfoLabel, (System_String_o *)bgTxtSprite, 0LL);
  CombineCommandCodeListViewManager__SetStatusKind(v109, modeKind, v101);
  ListViewManager__SortItem((ListViewManager_o *)v109, -1, 0, -1, 0LL);
  CombineCommandCodeListViewManager__SetFilterButtonImage(v109, v102);
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
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.selectShowStatusUserCmdCode, 0LL, v3, v4, v5, v6, v7, v8);
  sort = this->fields.sort;
  if ( !sort )
    sub_B2C434(0LL, v9);
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
  CombineCommandCodeListViewManager__SetMode_21941680(this, 3, v5);
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
  CombineCommandCodeListViewManager__SetMode_21941680(this, 3, v5);
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
  CombineCommandCodeListViewManager__SetMode_21941680(this, 3, v5);
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
  __int64 v6; // x1
  const MethodInfo *v7; // x1
  CommonUI_o *Instance; // x20
  System_Action_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_418616F & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isDecide);
    sub_B2C35C(&Method_CombineCommandCodeListViewManager_EndCloseSelectFilterKind__, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_418616F = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    CombineCommandCodeListViewManager__SetFilterButtonImage(this, v7);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v9,
    (Il2CppObject *)this,
    Method_CombineCommandCodeListViewManager_EndCloseSelectFilterKind__,
    0LL);
  if ( !Instance )
    sub_B2C434(v10, v11);
  CommonUI__CloseServantFilterSelectMenu(Instance, v9, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineCommandCodeListViewManager__EndSelectSortKind(
        CombineCommandCodeListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4186172 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4186172 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v6);
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
    sub_B2C2F8(p_requestCallback, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
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
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x25
  signed __int64 size; // x22
  int64_t v9; // x21
  unsigned __int64 v10; // x23
  ListViewItem_o *v11; // x8
  __int64 v12; // x11
  __int64 v13; // x11
  CombineCommandCodeListViewItem_o *v14; // x0

  v4 = this;
  if ( (byte_4186175 & 1) == 0 )
  {
    sub_B2C35C(&CombineCommandCodeListViewItem_TypeInfo, *(_QWORD *)&commandCodeId);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v5);
    this = (CombineCommandCodeListViewManager_o *)sub_B2C35C(
                                                    &Method_System_Collections_Generic_List_ListViewItem__get_Item__,
                                                    v6);
    byte_4186175 = 1;
  }
  itemList = v4->fields.itemList;
  if ( !itemList )
    goto LABEL_20;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v9 = 0LL;
    v10 = 0LL;
    do
    {
      if ( v10 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v11 = itemList->fields._items->m_Items[v10];
      if ( !v11 )
        break;
      v12 = *(&CombineCommandCodeListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v11->klass->_2.bitflags2 + 1) < (unsigned int)v12
        || (CombineCommandCodeListViewItem_c *)v11->klass->_2.typeHierarchy[v12 - 1] != CombineCommandCodeListViewItem_TypeInfo )
      {
        break;
      }
      v13 = *(&CombineCommandCodeListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v11->klass->_2.bitflags2 + 1) >= (unsigned int)v13 )
      {
        if ( (CombineCommandCodeListViewItem_c *)v11->klass->_2.typeHierarchy[v13 - 1] == CombineCommandCodeListViewItem_TypeInfo )
          v14 = (CombineCommandCodeListViewItem_o *)itemList->fields._items->m_Items[v10];
        else
          v14 = 0LL;
      }
      else
      {
        v14 = 0LL;
      }
      this = (CombineCommandCodeListViewManager_o *)CombineCommandCodeListViewItem__get_CommandCodeId(v14, 0LL);
      ++v10;
      if ( (_DWORD)this == commandCodeId )
        ++v9;
      if ( (__int64)v10 >= size )
        return v9;
      itemList = v4->fields.itemList;
    }
    while ( itemList );
LABEL_20:
    sub_B2C434(this, *(_QWORD *)&commandCodeId);
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
CombineCommandCodeListViewItem_o *__fastcall CombineCommandCodeListViewManager__GetItem(
        CombineCommandCodeListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v7; // x8
  __int64 v8; // x11

  if ( (byte_4186160 & 1) == 0 )
  {
    sub_B2C35C(&CombineCommandCodeListViewItem_TypeInfo, *(_QWORD *)&index);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    byte_4186160 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  v7 = itemList->fields._items->m_Items[index];
  if ( !v7 )
    return 0LL;
  v8 = *(&CombineCommandCodeListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v7->klass->_2.bitflags2 + 1) < (unsigned int)v8 )
    return 0LL;
  if ( (CombineCommandCodeListViewItem_c *)v7->klass->_2.typeHierarchy[v8 - 1] == CombineCommandCodeListViewItem_TypeInfo )
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_long__o *v14; // x23
  System_Collections_Generic_List_long__o *v15; // x22
  int64_t v16; // x0
  __int64 v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x19
  signed __int64 size; // x24
  unsigned __int64 v26; // x25
  ListViewItem_o *v27; // x8
  __int64 v28; // x11
  __int64 v29; // x9
  __int128 v30; // q0
  const MethodInfo_2F6CFA8 *v31; // x2
  int64_t v32; // x1
  System_Collections_Generic_List_long__o *v33; // x0
  __int128 v34; // q0
  System_Int64_array *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Int64_array *v42; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v57; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+50h] [xbp-70h]

  if ( (byte_4186167 & 1) == 0 )
  {
    sub_B2C35C(&CombineCommandCodeListViewItem_TypeInfo, choiceList);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__ToArray__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_long___ctor__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__get_Count__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v11);
    sub_B2C35C(&System_Collections_Generic_List_long__TypeInfo, v12);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    byte_4186167 = 1;
  }
  v14 = (System_Collections_Generic_List_long__o *)sub_B2C42C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v14,
    (const MethodInfo_2F6C24C *)Method_System_Collections_Generic_List_long___ctor__);
  v15 = (System_Collections_Generic_List_long__o *)sub_B2C42C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_2F6C24C *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_33;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v26 = 0LL;
    do
    {
      if ( v26 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v27 = itemList->fields._items->m_Items[v26];
      if ( !v27 )
        break;
      v28 = *(&CombineCommandCodeListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v27->klass->_2.bitflags2 + 1) < (unsigned int)v28
        || (CombineCommandCodeListViewItem_c *)v27->klass->_2.typeHierarchy[v28 - 1] != CombineCommandCodeListViewItem_TypeInfo )
      {
        break;
      }
      v29 = *(_QWORD *)&v27[1].fields.selectNum;
      if ( v29 && BYTE6(v27[1].klass) )
      {
        if ( BYTE2(v27[1].klass) )
        {
          v30 = *(_OWORD *)(v29 + 32);
          *(_OWORD *)&v59.fields.currentCryptoKey = *(_OWORD *)(v29 + 16);
          *(_OWORD *)&v59.fields.fakeValue = v30;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v58 = v59;
          v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v58, 0LL);
          if ( !v15 )
            break;
          v31 = (const MethodInfo_2F6CFA8 *)Method_System_Collections_Generic_List_long__Add__;
          v32 = v16;
          v33 = v15;
        }
        else
        {
          v34 = *(_OWORD *)(v29 + 32);
          *(_OWORD *)&v59.fields.currentCryptoKey = *(_OWORD *)(v29 + 16);
          *(_OWORD *)&v59.fields.fakeValue = v34;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v57 = v59;
          v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v57, 0LL);
          if ( !v14 )
            break;
          v31 = (const MethodInfo_2F6CFA8 *)Method_System_Collections_Generic_List_long__Add__;
          v32 = v16;
          v33 = v14;
        }
        System_Collections_Generic_List_long___Add(v33, v32, v31);
      }
      if ( (__int64)++v26 >= size )
        goto LABEL_28;
      itemList = this->fields.itemList;
    }
    while ( itemList );
LABEL_33:
    sub_B2C434(v16, v17);
  }
LABEL_28:
  if ( !v14 || !v15 )
    goto LABEL_33;
  if ( v15->fields._size + v14->fields._size < 1 )
  {
    *choiceList = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)choiceList, 0LL, v18, v19, v20, v21, v22, v23);
    *unchoiceList = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)unchoiceList, 0LL, v50, v51, v52, v53, v54, v55);
    return 0;
  }
  else
  {
    v35 = System_Collections_Generic_List_long___ToArray(
            v14,
            (const MethodInfo_2F6F0B4 *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v35;
    sub_B2C2F8((BattleServantConfConponent_o *)choiceList, (System_Int32_array **)v35, v36, v37, v38, v39, v40, v41);
    v42 = System_Collections_Generic_List_long___ToArray(
            v15,
            (const MethodInfo_2F6F0B4 *)Method_System_Collections_Generic_List_long__ToArray__);
    *unchoiceList = v42;
    sub_B2C2F8((BattleServantConfConponent_o *)unchoiceList, (System_Int32_array **)v42, v43, v44, v45, v46, v47, v48);
    return 1;
  }
}


bool __fastcall CombineCommandCodeListViewManager__GetSwapLockList(
        CombineCommandCodeListViewManager_o *this,
        System_Int64_array **lockList,
        System_Int64_array **unlockList,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_long__o *v14; // x23
  System_Collections_Generic_List_long__o *v15; // x22
  int64_t v16; // x0
  __int64 v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x19
  signed __int64 size; // x24
  unsigned __int64 v26; // x25
  ListViewItem_o *v27; // x8
  __int64 v28; // x11
  __int64 v29; // x9
  __int128 v30; // q0
  const MethodInfo_2F6CFA8 *v31; // x2
  int64_t v32; // x1
  System_Collections_Generic_List_long__o *v33; // x0
  __int128 v34; // q0
  System_Int64_array *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Int64_array *v42; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v57; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+50h] [xbp-70h]

  if ( (byte_4186166 & 1) == 0 )
  {
    sub_B2C35C(&CombineCommandCodeListViewItem_TypeInfo, lockList);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__ToArray__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_long___ctor__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__get_Count__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v11);
    sub_B2C35C(&System_Collections_Generic_List_long__TypeInfo, v12);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    byte_4186166 = 1;
  }
  v14 = (System_Collections_Generic_List_long__o *)sub_B2C42C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v14,
    (const MethodInfo_2F6C24C *)Method_System_Collections_Generic_List_long___ctor__);
  v15 = (System_Collections_Generic_List_long__o *)sub_B2C42C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_2F6C24C *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_33;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v26 = 0LL;
    do
    {
      if ( v26 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v27 = itemList->fields._items->m_Items[v26];
      if ( !v27 )
        break;
      v28 = *(&CombineCommandCodeListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v27->klass->_2.bitflags2 + 1) < (unsigned int)v28
        || (CombineCommandCodeListViewItem_c *)v27->klass->_2.typeHierarchy[v28 - 1] != CombineCommandCodeListViewItem_TypeInfo )
      {
        break;
      }
      v29 = *(_QWORD *)&v27[1].fields.selectNum;
      if ( v29 && BYTE5(v27[1].klass) )
      {
        if ( BYTE1(v27[1].klass) )
        {
          v30 = *(_OWORD *)(v29 + 32);
          *(_OWORD *)&v59.fields.currentCryptoKey = *(_OWORD *)(v29 + 16);
          *(_OWORD *)&v59.fields.fakeValue = v30;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v58 = v59;
          v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v58, 0LL);
          if ( !v15 )
            break;
          v31 = (const MethodInfo_2F6CFA8 *)Method_System_Collections_Generic_List_long__Add__;
          v32 = v16;
          v33 = v15;
        }
        else
        {
          v34 = *(_OWORD *)(v29 + 32);
          *(_OWORD *)&v59.fields.currentCryptoKey = *(_OWORD *)(v29 + 16);
          *(_OWORD *)&v59.fields.fakeValue = v34;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v57 = v59;
          v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v57, 0LL);
          if ( !v14 )
            break;
          v31 = (const MethodInfo_2F6CFA8 *)Method_System_Collections_Generic_List_long__Add__;
          v32 = v16;
          v33 = v14;
        }
        System_Collections_Generic_List_long___Add(v33, v32, v31);
      }
      if ( (__int64)++v26 >= size )
        goto LABEL_28;
      itemList = this->fields.itemList;
    }
    while ( itemList );
LABEL_33:
    sub_B2C434(v16, v17);
  }
LABEL_28:
  if ( !v14 || !v15 )
    goto LABEL_33;
  if ( v15->fields._size + v14->fields._size < 1 )
  {
    *lockList = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)lockList, 0LL, v18, v19, v20, v21, v22, v23);
    *unlockList = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)unlockList, 0LL, v50, v51, v52, v53, v54, v55);
    return 0;
  }
  else
  {
    v35 = System_Collections_Generic_List_long___ToArray(
            v14,
            (const MethodInfo_2F6F0B4 *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v35;
    sub_B2C2F8((BattleServantConfConponent_o *)lockList, (System_Int32_array **)v35, v36, v37, v38, v39, v40, v41);
    v42 = System_Collections_Generic_List_long___ToArray(
            v15,
            (const MethodInfo_2F6F0B4 *)Method_System_Collections_Generic_List_long__ToArray__);
    *unlockList = v42;
    sub_B2C2F8((BattleServantConfConponent_o *)unlockList, (System_Int32_array **)v42, v43, v44, v45, v46, v47, v48);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  CombineCommandCodeListViewManager_o *v13; // x20
  int size; // w23
  __int64 v15; // x24
  CombineCommandCodeListViewItem_o *v16; // x21
  __int64 v17; // x9
  struct UserCommandCodeEntity_o *userCommandCode; // x8
  __int128 v19; // q0
  int64_t v20; // x0
  __int128 v21; // q0
  UnityEngine_Object_o *viewObject; // x22
  CombineCommandCodeListViewManager_o *v23; // x0
  const MethodInfo *v24; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+20h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+40h] [xbp-70h]

  v3 = userCommandCodeId;
  v4 = this;
  if ( (byte_418615E & 1) == 0 )
  {
    sub_B2C35C(&CombineCommandCodeListViewItem_TypeInfo, userCommandCodeId);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v5);
    sub_B2C35C(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v8);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v9);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10);
    this = (CombineCommandCodeListViewManager_o *)sub_B2C35C(
                                                    &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                    v11);
    byte_418615E = 1;
  }
  itemList = v4->fields.itemList;
  if ( itemList )
  {
    if ( v3 < 1 )
    {
      v13 = 0LL;
    }
    else
    {
      this = (CombineCommandCodeListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this
        || (this = (CombineCommandCodeListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                            (DataManager_o *)this,
                                                            (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserCommandCodeMaster___)) == 0LL
        || (this = (CombineCommandCodeListViewManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                                            (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this,
                                                            v3,
                                                            (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__),
            (itemList = v4->fields.itemList) == 0LL) )
      {
LABEL_34:
        sub_B2C434(this, userCommandCodeId);
      }
      v13 = this;
    }
    size = itemList->fields._size;
    if ( size >= 1 )
    {
      v15 = 0LL;
      while ( 1 )
      {
        if ( itemList->fields._size <= (unsigned int)v15 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        v16 = (CombineCommandCodeListViewItem_o *)itemList->fields._items->m_Items[v15];
        if ( v16 )
        {
          userCommandCodeId = (int64_t)CombineCommandCodeListViewItem_TypeInfo;
          v17 = *(&CombineCommandCodeListViewItem_TypeInfo->_2.bitflags2 + 1);
          if ( *(&v16->klass->_2.bitflags2 + 1) < (unsigned int)v17
            || (CombineCommandCodeListViewItem_c *)v16->klass->_2.typeHierarchy[v17 - 1] != CombineCommandCodeListViewItem_TypeInfo )
          {
            break;
          }
        }
        if ( v13 )
        {
          if ( !v16 )
            goto LABEL_34;
          userCommandCode = v16->fields.userCommandCode;
          if ( !userCommandCode )
            goto LABEL_34;
          v19 = *(_OWORD *)&userCommandCode->fields.id.fields.fakeValue;
          *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)&userCommandCode->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v27.fields.fakeValue = v19;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v26 = v27;
          v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v26, 0LL);
          v21 = *(_OWORD *)&v13->fields.indicator;
          *(_OWORD *)&v25.fields.currentCryptoKey = *(_OWORD *)&v13->fields.m_CachedPtr;
          *(_OWORD *)&v25.fields.fakeValue = v21;
          if ( v20 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v25, 0LL) )
            CombineCommandCodeListViewItem__Modify(v16, (UserCommandCodeEntity_o *)v13, 0LL);
        }
        else if ( !v16 )
        {
          goto LABEL_34;
        }
        viewObject = (UnityEngine_Object_o *)v16->fields.viewObject;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (CombineCommandCodeListViewManager_o *)UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (CombineCommandCodeListViewManager_o *)v16->fields.viewObject;
          if ( !this )
            goto LABEL_34;
          this = (CombineCommandCodeListViewManager_o *)((__int64 (__fastcall *)(CombineCommandCodeListViewManager_o *, CombineCommandCodeListViewItem_o *, Il2CppMethodPointer))this->klass->vtable._5_SetSortButtonImage.method)(
                                                          this,
                                                          v16,
                                                          this->klass->vtable._6_GetDragRoot.methodPtr);
        }
        if ( (int)++v15 >= size )
          return;
        itemList = v4->fields.itemList;
        if ( !itemList )
          goto LABEL_34;
      }
      v23 = (CombineCommandCodeListViewManager_o *)sub_B2C728(v16);
      CombineCommandCodeListViewManager__OnClickDecide(v23, v24);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int64_t Instance; // x0
  CombineCommandCodeListViewItem_c *v11; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  signed __int64 size; // x25
  CombineCommandCodeListViewItem_c **v14; // x20
  unsigned int v15; // w27
  int64_t v16; // x26
  __int64 v17; // x8
  System_Int32_array ***v18; // x26
  __int64 v19; // t1
  __int128 v20; // q0
  int64_t v21; // x22
  __int64 v22; // x21
  struct System_Collections_Generic_List_ListViewItem__o *v23; // x23
  CombineCommandCodeListViewItem_o *v24; // x23
  __int64 v25; // x9
  struct UserCommandCodeEntity_o *userCommandCode; // x8
  __int128 v27; // q0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Int32_array **v34; // x1
  __int64 v35; // x0
  unsigned __int64 v36; // x22
  struct System_Collections_Generic_List_ListViewItem__o *v37; // x20
  __int64 v38; // x9
  UnityEngine_Object_o *v39; // x21
  CombineCommandCodeListViewManager_o *v40; // x0
  int64_t v41; // x1
  const MethodInfo *v42; // x2
  __int64 v44; // [xsp+10h] [xbp-C0h]
  int64_t v45; // [xsp+18h] [xbp-B8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v47; // [xsp+40h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+60h] [xbp-70h]

  if ( (byte_418615D & 1) == 0 )
  {
    sub_B2C35C(&CombineCommandCodeListViewItem_TypeInfo, isIconSizeChange);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_418615D = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_52;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !Instance )
    goto LABEL_52;
  Instance = (int64_t)UserCommandCodeMaster__getList((UserCommandCodeMaster_o *)Instance, 0LL);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_52;
  size = itemList->fields._size;
  if ( !Instance || (v44 = *(_QWORD *)(Instance + 24), (int)v44 < 1) )
  {
LABEL_35:
    if ( (int)size < 1 || !isIconSizeChange )
      return;
    v36 = 0LL;
    while ( 1 )
    {
      v37 = this->fields.itemList;
      if ( !v37 )
        break;
      if ( v36 >= (unsigned int)v37->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v14 = (CombineCommandCodeListViewItem_c **)v37->fields._items->m_Items[v36];
      if ( v14 )
      {
        v38 = *(&CombineCommandCodeListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&(*v14)->_2.bitflags2 + 1) < (unsigned int)v38
          || (CombineCommandCodeListViewItem_c *)(*v14)->_2.typeHierarchy[v38 - 1] != CombineCommandCodeListViewItem_TypeInfo )
        {
          goto LABEL_54;
        }
        v39 = (UnityEngine_Object_o *)v14[13];
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        Instance = UnityEngine_Object__op_Equality(v39, 0LL, 0LL);
        if ( (Instance & 1) == 0 )
        {
          Instance = (int64_t)v14[13];
          if ( !Instance )
            break;
          ListViewObject__SetItemSeed((ListViewObject_o *)Instance, (ListViewItem_o *)v14, this->fields.seed, 0LL);
        }
      }
      if ( (__int64)++v36 >= size )
        return;
    }
LABEL_52:
    sub_B2C434(Instance, v11);
  }
  if ( !(_DWORD)v44 )
    goto LABEL_34;
  v14 = &CombineCommandCodeListViewItem_TypeInfo;
  v15 = 0;
  v45 = Instance;
  while ( 1 )
  {
    v16 = Instance + 8LL * (int)v15;
    v19 = *(_QWORD *)(v16 + 32);
    v18 = (System_Int32_array ***)(v16 + 32);
    v17 = v19;
    if ( !v19 )
      goto LABEL_52;
    v20 = *(_OWORD *)(v17 + 32);
    *(_OWORD *)&v48.fields.currentCryptoKey = *(_OWORD *)(v17 + 16);
    *(_OWORD *)&v48.fields.fakeValue = v20;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v47 = v48;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v47, 0LL);
    if ( (int)size >= 1 )
      break;
LABEL_32:
    Instance = v45;
    if ( (int)++v15 >= (int)v44 )
      goto LABEL_35;
    if ( v15 >= *(_DWORD *)(v45 + 24) )
      goto LABEL_34;
  }
  v21 = Instance;
  v22 = 0LL;
  while ( 1 )
  {
    v23 = this->fields.itemList;
    if ( !v23 )
      goto LABEL_52;
    if ( v23->fields._size <= (unsigned int)v22 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    v24 = (CombineCommandCodeListViewItem_o *)v23->fields._items->m_Items[v22];
    if ( !v24 )
      goto LABEL_52;
    v11 = CombineCommandCodeListViewItem_TypeInfo;
    v25 = *(&CombineCommandCodeListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v24->klass->_2.bitflags2 + 1) < (unsigned int)v25
      || (CombineCommandCodeListViewItem_c *)v24->klass->_2.typeHierarchy[v25 - 1] != CombineCommandCodeListViewItem_TypeInfo )
    {
      break;
    }
    userCommandCode = v24->fields.userCommandCode;
    if ( userCommandCode )
    {
      v27 = *(_OWORD *)&userCommandCode->fields.id.fields.fakeValue;
      *(_OWORD *)&v48.fields.currentCryptoKey = *(_OWORD *)&userCommandCode->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v48.fields.fakeValue = v27;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v46 = v48;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v46, 0LL);
      if ( Instance == v21 )
      {
        if ( v15 < *(_DWORD *)(v45 + 24) )
        {
          v34 = *v18;
          v24->fields.userCommandCode = (struct UserCommandCodeEntity_o *)*v18;
          sub_B2C2F8((BattleServantConfConponent_o *)&v24->fields.userCommandCode, v34, v28, v29, v30, v31, v32, v33);
          if ( !isIconSizeChange )
          {
            CombineCommandCodeListViewItem__ModifyLockItem(v24, 0LL);
            CombineCommandCodeListViewItem__ModifyChoiceItem(v24, 0LL);
          }
          goto LABEL_32;
        }
LABEL_34:
        v35 = sub_B2C460(Instance);
        sub_B2C400(v35, 0LL);
      }
    }
    if ( (int)++v22 >= (int)size )
      goto LABEL_32;
  }
  sub_B2C728(v24);
LABEL_54:
  v40 = (CombineCommandCodeListViewManager_o *)sub_B2C728(v14);
  CombineCommandCodeListViewManager__ModifyItem(v40, v41, v42);
}


void __fastcall CombineCommandCodeListViewManager__OnClickChoiceTab(
        CombineCommandCodeListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  CombineCommandCodeListViewManager_RequestCallbackFunc_o *v6; // x20
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x2

  if ( (byte_418616A & 1) == 0 )
  {
    sub_B2C35C(&Method_CombineCommandCodeListViewManager_EndClickTabChoice__, method);
    sub_B2C35C(&CombineCommandCodeListViewManager_RequestCallbackFunc_TypeInfo, v3);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    byte_418616A = 1;
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
      v6 = (CombineCommandCodeListViewManager_RequestCallbackFunc_o *)sub_B2C42C(CombineCommandCodeListViewManager_RequestCallbackFunc_TypeInfo);
      CombineCommandCodeListViewManager_RequestCallbackFunc___ctor(
        v6,
        (Il2CppObject *)this,
        Method_CombineCommandCodeListViewManager_EndClickTabChoice__,
        0LL);
      CombineCommandCodeListViewManager__StatusRequest(this, v6, v7);
    }
    else
    {
      CombineCommandCodeListViewManager__SetStatusKind(this, 2, v5);
      CombineCommandCodeListViewManager__ModifyList(this, 0, v8);
      CombineCommandCodeListViewManager__SetMode_21941680(this, 3, v9);
    }
  }
}


void __fastcall CombineCommandCodeListViewManager__OnClickCollectLock(
        CombineCommandCodeListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  CombineCommandCodeListViewManager_RequestCallbackFunc_o *v6; // x20
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x2

  if ( (byte_4186169 & 1) == 0 )
  {
    sub_B2C35C(&Method_CombineCommandCodeListViewManager_EndClickTabLock__, method);
    sub_B2C35C(&CombineCommandCodeListViewManager_RequestCallbackFunc_TypeInfo, v3);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    byte_4186169 = 1;
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
      v6 = (CombineCommandCodeListViewManager_RequestCallbackFunc_o *)sub_B2C42C(CombineCommandCodeListViewManager_RequestCallbackFunc_TypeInfo);
      CombineCommandCodeListViewManager_RequestCallbackFunc___ctor(
        v6,
        (Il2CppObject *)this,
        Method_CombineCommandCodeListViewManager_EndClickTabLock__,
        0LL);
      CombineCommandCodeListViewManager__StatusRequest(this, v6, v7);
    }
    else
    {
      CombineCommandCodeListViewManager__SetStatusKind(this, 1, v5);
      CombineCommandCodeListViewManager__ModifyList(this, 0, v8);
      CombineCommandCodeListViewManager__SetMode_21941680(this, 3, v9);
    }
  }
}


void __fastcall CombineCommandCodeListViewManager__OnClickDecide(
        CombineCommandCodeListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct CombineCommandCodeListViewItem_o *selectItem; // x8
  struct UserCommandCodeEntity_o *userCommandCode; // x8
  __int128 v9; // q1
  __int64 v10; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *Master_WarQuestSelectionMaster; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+20h] [xbp-30h]

  if ( (byte_418615F & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_UserCommandCodeMaster___, method);
    sub_B2C35C(&DataManager_TypeInfo, v3);
    sub_B2C35C(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v4);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
    sub_B2C35C(&SoundManager_TypeInfo, v6);
    byte_418615F = 1;
  }
  selectItem = this->fields.selectItem;
  if ( selectItem )
  {
    userCommandCode = selectItem->fields.userCommandCode;
    if ( userCommandCode )
    {
      v9 = *(_OWORD *)&userCommandCode->fields.id.fields.fakeValue;
      *(_OWORD *)&v13.fields.currentCryptoKey = *(_OWORD *)&userCommandCode->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v13.fields.fakeValue = v9;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v12 = v13;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v12, 0LL) != this->fields.nowEquipedUserCommandCodeId )
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
          Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserCommandCodeMaster___);
          if ( !Master_WarQuestSelectionMaster )
            goto LABEL_25;
          DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
            Master_WarQuestSelectionMaster,
            this->fields.nowEquipedUserCommandCodeId,
            (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
        }
        Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this->fields.combineRootComponent;
        if ( Master_WarQuestSelectionMaster )
        {
          CombineRootComponent__ShowSelectedCommandCode((CombineRootComponent_o *)Master_WarQuestSelectionMaster, 0LL);
          return;
        }
LABEL_25:
        sub_B2C434(Master_WarQuestSelectionMaster, v10);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v8; // x21
  ServantFilterSelectMenu_CallbackFunc_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_418616E & 1) == 0 )
  {
    sub_B2C35C(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, method);
    sub_B2C35C(&Method_CombineCommandCodeListViewManager_EndSelectFilterKind__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B2C35C(&SoundManager_TypeInfo, v5);
    byte_418616E = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v8 = (CommonUI_o *)Instance;
    v9 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_B2C42C(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_CombineCommandCodeListViewManager_EndSelectFilterKind__,
      0LL);
    if ( !v8 )
      sub_B2C434(v10, v11);
    CommonUI__OpenServantFilterSelectMenu_17978356(v8, 6, sort, (ListViewManager_o *)this, v9, -1, 0LL);
  }
}


void __fastcall CombineCommandCodeListViewManager__OnClickListView(
        CombineCommandCodeListViewManager_o *this,
        ListViewObject_o *listviewObject,
        const MethodInfo *method)
{
  ;
}


void __fastcall CombineCommandCodeListViewManager__OnClickListView_21945860(
        CombineCommandCodeListViewManager_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  struct CombineCommandCodeListViewItem_o *v3; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x9
  _DWORD *ObjectList; // x0
  CombineCommandCodeListViewItem_c *v13; // x1
  struct UserCommandCodeEntity_o *userCommandCode; // x8
  __int128 v15; // q1
  int64_t v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  const MethodInfo *v23; // x2
  _DWORD *v24; // x21
  const MethodInfo *v25; // x2
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  int size; // w24
  unsigned int v28; // w25
  __int64 v29; // x9
  struct UserCommandCodeEntity_o *v30; // x8
  __int128 v31; // q0
  int v32; // w21
  _DWORD *v33; // x20
  __int64 v34; // x22
  unsigned int v35; // w8
  CombineCommandCodeListViewManager_o *v36; // x0
  ListViewItem_o *v37; // x1
  const MethodInfo *v38; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+40h] [xbp-60h]

  v3 = (struct CombineCommandCodeListViewItem_o *)item;
  if ( (byte_418616C & 1) == 0 )
  {
    sub_B2C35C(&CombineCommandCodeListViewItem_TypeInfo, item);
    sub_B2C35C(&Method_System_Collections_Generic_List_CombineCommandCodeListViewObject__get_Count__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_CombineCommandCodeListViewObject__get_Item__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v8);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    sub_B2C35C(&SoundManager_TypeInfo, v10);
    byte_418616C = 1;
  }
  if ( v3
    && ((v11 = *(&CombineCommandCodeListViewItem_TypeInfo->_2.bitflags2 + 1),
         *(&v3->klass->_2.bitflags2 + 1) < (unsigned int)v11)
     || (CombineCommandCodeListViewItem_c *)v3->klass->_2.typeHierarchy[v11 - 1] != CombineCommandCodeListViewItem_TypeInfo) )
  {
LABEL_44:
    v36 = (CombineCommandCodeListViewManager_o *)sub_B2C728(v3);
    CombineCommandCodeListViewManager__OnLongPushListView(v36, v37, v38);
  }
  else
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    if ( !v3 )
      goto LABEL_43;
    userCommandCode = v3->fields.userCommandCode;
    if ( !userCommandCode )
      goto LABEL_43;
    v15 = *(_OWORD *)&userCommandCode->fields.id.fields.fakeValue;
    *(_OWORD *)&v41.fields.currentCryptoKey = *(_OWORD *)&userCommandCode->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v41.fields.fakeValue = v15;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v40 = v41;
    v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v40, 0LL);
    if ( v3->fields.isSelect )
    {
      v3->fields.isSelect = 0;
      this->fields.selectItem = 0LL;
      sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.selectItem, 0LL, v17, v18, v19, v20, v21, v22);
      CombineCommandCodeListViewManager__SetSelectedCommandCodeData(this, 0LL, v23);
      v24 = 0LL;
    }
    else
    {
      v24 = (_DWORD *)v16;
      v3->fields.isSelect = 1;
      this->fields.selectItem = v3;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.selectItem,
        (System_Int32_array **)v3,
        v17,
        v18,
        v19,
        v20,
        v21,
        v22);
      CombineCommandCodeListViewManager__SetSelectedCommandCodeData(this, v3, v25);
    }
    itemList = this->fields.itemList;
    if ( !itemList )
      goto LABEL_43;
    size = itemList->fields._size;
    if ( size >= 1 )
    {
      v28 = 0;
      do
      {
        if ( itemList->fields._size <= v28 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        v3 = (struct CombineCommandCodeListViewItem_o *)itemList->fields._items->m_Items[v28];
        if ( !v3 )
          break;
        v13 = CombineCommandCodeListViewItem_TypeInfo;
        v29 = *(&CombineCommandCodeListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v3->klass->_2.bitflags2 + 1) < (unsigned int)v29
          || (CombineCommandCodeListViewItem_c *)v3->klass->_2.typeHierarchy[v29 - 1] != CombineCommandCodeListViewItem_TypeInfo )
        {
          goto LABEL_44;
        }
        v30 = v3->fields.userCommandCode;
        if ( !v30 )
          break;
        v31 = *(_OWORD *)&v30->fields.id.fields.fakeValue;
        *(_OWORD *)&v41.fields.currentCryptoKey = *(_OWORD *)&v30->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v41.fields.fakeValue = v31;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v39 = v41;
        ObjectList = (_DWORD *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v39, 0LL);
        if ( ObjectList != v24 )
          v3->fields.isSelect = 0;
        if ( (int)++v28 >= size )
          goto LABEL_34;
        itemList = this->fields.itemList;
      }
      while ( itemList );
LABEL_43:
      sub_B2C434(ObjectList, v13);
    }
LABEL_34:
    ObjectList = CombineCommandCodeListViewManager__get_ObjectList(this, (const MethodInfo *)v13);
    if ( !ObjectList )
      goto LABEL_43;
    v32 = ObjectList[6];
    v33 = ObjectList;
    if ( v32 >= 1 )
    {
      v34 = 0LL;
      v35 = ObjectList[6];
      while ( 1 )
      {
        if ( v35 <= (unsigned int)v34 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        ObjectList = *(_DWORD **)(*((_QWORD *)v33 + 2) + 8 * v34 + 32);
        if ( !ObjectList )
          break;
        (*(void (__fastcall **)(_DWORD *, bool, _QWORD))(*(_QWORD *)ObjectList + 456LL))(
          ObjectList,
          this->fields.isInput,
          *(_QWORD *)(*(_QWORD *)ObjectList + 464LL));
        if ( (int)v34 + 1 >= v32 )
          return;
        v35 = v33[6];
        ++v34;
      }
      goto LABEL_43;
    }
  }
}


void __fastcall CombineCommandCodeListViewManager__OnClickNormalStatus(
        CombineCommandCodeListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  CombineCommandCodeListViewManager_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_4186168 & 1) == 0 )
  {
    sub_B2C35C(&Method_CombineCommandCodeListViewManager_EndClickTabStatus__, method);
    sub_B2C35C(&CombineCommandCodeListViewManager_RequestCallbackFunc_TypeInfo, v3);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    byte_4186168 = 1;
  }
  if ( this->fields.modeKind )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v5 = (CombineCommandCodeListViewManager_RequestCallbackFunc_o *)sub_B2C42C(CombineCommandCodeListViewManager_RequestCallbackFunc_TypeInfo);
    CombineCommandCodeListViewManager_RequestCallbackFunc___ctor(
      v5,
      (Il2CppObject *)this,
      Method_CombineCommandCodeListViewManager_EndClickTabStatus__,
      0LL);
    CombineCommandCodeListViewManager__StatusRequest(this, v5, v6);
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

  if ( (byte_4186165 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4186165 = 1;
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
    sub_B2C2F8(
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
    sub_B2C434(ScaleKindSpriteName, v4);
  }
  UISprite__set_spriteName(scaleChangeButtonSprite, (System_String_o *)ScaleKindSpriteName, 0LL);
  CombineCommandCodeListViewManager__ModifyList(this, 1, v16);
  CombineCommandCodeListViewManager__SetMode_21941680(this, 3, v17);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall CombineCommandCodeListViewManager__OnClickSortAscendingOrder(
        CombineCommandCodeListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_4186173 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4186173 = 1;
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
      sub_B2C434(v3, v4);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall CombineCommandCodeListViewManager__OnClickSortKind(
        CombineCommandCodeListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v8; // x21
  ServantSortSelectMenu_CallbackFunc_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_4186171 & 1) == 0 )
  {
    sub_B2C35C(&ServantSortSelectMenu_CallbackFunc_TypeInfo, method);
    sub_B2C35C(&Method_CombineCommandCodeListViewManager_EndSelectSortKind__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B2C35C(&SoundManager_TypeInfo, v5);
    byte_4186171 = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v8 = (CommonUI_o *)Instance;
    v9 = (ServantSortSelectMenu_CallbackFunc_o *)sub_B2C42C(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_CombineCommandCodeListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v8 )
      sub_B2C434(v10, v11);
    CommonUI__OpenServantSortSelectMenu(v8, 6, sort, 0, v9, 0LL);
  }
}


void __fastcall CombineCommandCodeListViewManager__OnLongPushListView(
        CombineCommandCodeListViewManager_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  CombineCommandCodeListViewItem_c *v6; // x1
  __int64 v7; // x9
  UnityEngine_Behaviour_o *scrollView; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  struct UserCommandCodeEntity_o *v15; // x1
  CombineCommandCodeListViewManager_o *v16; // x0
  const MethodInfo *v17; // x1

  if ( (byte_418616D & 1) == 0 )
  {
    sub_B2C35C(&CombineCommandCodeListViewItem_TypeInfo, item);
    sub_B2C35C(&SoundManager_TypeInfo, v5);
    byte_418616D = 1;
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
      && ((v6 = CombineCommandCodeListViewItem_TypeInfo,
           v7 = *(&CombineCommandCodeListViewItem_TypeInfo->_2.bitflags2 + 1),
           *(&item->klass->_2.bitflags2 + 1) < (unsigned int)v7)
       || (CombineCommandCodeListViewItem_c *)item->klass->_2.typeHierarchy[v7 - 1] != CombineCommandCodeListViewItem_TypeInfo) )
    {
      v16 = (CombineCommandCodeListViewManager_o *)sub_B2C728(item);
      CombineCommandCodeListViewManager__GetSelectItem(v16, v17);
    }
    else
    {
      scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
      if ( !scrollView
        || (UnityEngine_Behaviour__set_enabled(scrollView, 0, 0LL), !item)
        || (v15 = *(struct UserCommandCodeEntity_o **)&item[1].fields.selectNum,
            this->fields.selectShowStatusUserCmdCode = v15,
            sub_B2C2F8(
              (BattleServantConfConponent_o *)&this->fields.selectShowStatusUserCmdCode,
              (System_Int32_array **)v15,
              v9,
              v10,
              v11,
              v12,
              v13,
              v14),
            (scrollView = (UnityEngine_Behaviour_o *)this->fields.combineRootComponent) == 0LL) )
      {
        sub_B2C434(scrollView, v6);
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

  if ( (byte_4186164 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4186164 = 1;
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
          sub_B2C434(v8, v7);
        }
        UIScrollView__UpdatePosition(v8, 0LL);
        callbackFunc2 = this->fields.callbackFunc2;
        this->fields.callbackFunc2 = 0LL;
        sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v10, v11, v12, v13, v14, v15);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_CombineCommandCodeListViewObject__o *ObjectList; // x0
  __int64 v12; // x1
  int32_t size; // w8
  System_Collections_Generic_List_CombineCommandCodeListViewObject__o *v14; // x21
  int v15; // w24
  __int64 v16; // x25
  unsigned int v17; // w8
  CombineCommandCodeListViewObject_o *v18; // x22
  System_Action_o *v19; // x23
  const MethodInfo *v20; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_4186163 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B2C35C(&Method_CombineCommandCodeListViewManager_OnMoveEnd__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_CombineCommandCodeListViewObject__get_Count__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_CombineCommandCodeListViewObject__get_Item__, v9);
    sub_B2C35C(&StringLiteral_10036/*"OnMoveEnd"*/, v10);
    byte_4186163 = 1;
  }
  ObjectList = CombineCommandCodeListViewManager__get_ObjectList(this, *(const MethodInfo **)&mode);
  if ( !ObjectList )
    goto LABEL_14;
  size = ObjectList->fields._size;
  v14 = ObjectList;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10036/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    v15 = ObjectList->fields._size;
    if ( v15 >= 1 )
    {
      v16 = 0LL;
      v17 = ObjectList->fields._size;
      while ( 1 )
      {
        if ( v17 <= (unsigned int)v16 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        v18 = v14->fields._items->m_Items[v16];
        v19 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
        System_Action___ctor(v19, (Il2CppObject *)this, Method_CombineCommandCodeListViewManager_OnMoveEnd__, 0LL);
        if ( !v18 )
          break;
        zero = UnityEngine_Vector3__get_zero(0LL);
        CombineCommandCodeListViewObject__Init(
          v18,
          mode,
          v19,
          zero.fields.x,
          *(UnityEngine_Vector3_o *)&zero.fields.y,
          v20);
        if ( (int)v16 + 1 >= v15 )
          return;
        v17 = v14->fields._size;
        ++v16;
      }
LABEL_14:
      sub_B2C434(ObjectList, v12);
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
    sub_B2C434(decideButton, isEnable);
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
  __int64 v3; // x1
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v6; // x8

  if ( (byte_4186170 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_16993/*"btn_filter_on"*/, method);
    sub_B2C35C(&StringLiteral_16992/*"btn_filter"*/, v3);
    byte_4186170 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !filterSprite) )
  {
    sub_B2C434(sort, method);
  }
  v6 = (System_String_o **)&StringLiteral_16992/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v6 = (System_String_o **)&StringLiteral_16993/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v6, 0LL);
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  CombineCommandCodeListViewManager__SetMode_21941680(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineCommandCodeListViewManager__SetMode_21941680(
        CombineCommandCodeListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  UnityEngine_Object_o *scrollView; // x21
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  UnityEngine_Behaviour_o *v8; // x0
  int32_t v9; // w1

  if ( (byte_4186162 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, *(_QWORD *)&mode);
    byte_4186162 = 1;
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
      sub_B2C434(v8, v6);
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
  if ( (byte_4186161 & 1) == 0 )
  {
    this = (CombineCommandCodeListViewManager_o *)sub_B2C35C(&CombineCommandCodeListViewObject_TypeInfo, obj);
    byte_4186161 = 1;
  }
  if ( !obj
    || (v6 = *(&CombineCommandCodeListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (CombineCommandCodeListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != CombineCommandCodeListViewObject_TypeInfo )
  {
    sub_B2C434(this, obj);
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
  __int64 v5; // x1
  UnityEngine_Component_o *selectedCommandCode; // x0
  System_String_o *MargeExplanation_23791504; // x21
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  const MethodInfo *v14; // x2
  struct CombineCommandCodeListViewItem_o *selectItem; // x8
  struct UserCommandCodeEntity_o *userCommandCode; // x8
  __int128 v17; // q1
  char v18; // w1
  const MethodInfo *v19; // x2
  __int64 v20; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+20h] [xbp-50h]
  System_String_array *explanationList; // [xsp+40h] [xbp-30h] BYREF
  System_String_array *titleList; // [xsp+48h] [xbp-28h] BYREF
  System_Int32_array *idList; // [xsp+58h] [xbp-18h] BYREF

  if ( (byte_418615C & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, item);
    sub_B2C35C(&StringLiteral_1/*""*/, v5);
    byte_418615C = 1;
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
            CombineCommandCodeListViewManager__SetDecideButtonStatus(this, 0, v19);
            selectedCommandCode = (UnityEngine_Component_o *)this->fields.equippedInfo;
            if ( selectedCommandCode )
              goto LABEL_23;
          }
        }
      }
    }
LABEL_29:
    sub_B2C434(selectedCommandCode, item);
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
  ServantFaceIconComponent__Set_30799200(
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
  MargeExplanation_23791504 = SkillInfo__GetMargeExplanation_23791504(explanationList, 0LL);
  this->fields.selectItem = item;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.selectItem,
    (System_Int32_array **)item,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  if ( !titleList )
    goto LABEL_29;
  if ( !titleList->max_length )
  {
    v20 = sub_B2C460(selectedCommandCode);
    sub_B2C400(v20, 0LL);
  }
  selectedCommandCode = (UnityEngine_Component_o *)this->fields.skillName;
  if ( !selectedCommandCode )
    goto LABEL_29;
  UILabel__set_text((UILabel_o *)selectedCommandCode, titleList->m_Items[0], 0LL);
  WrapControlText__textAdjust(this->fields.skillMessage, MargeExplanation_23791504, 22, 0, 0, 0LL);
  selectItem = this->fields.selectItem;
  if ( selectItem && (userCommandCode = selectItem->fields.userCommandCode) != 0LL )
  {
    v17 = *(_OWORD *)&userCommandCode->fields.id.fields.fakeValue;
    *(_OWORD *)&v22.fields.currentCryptoKey = *(_OWORD *)&userCommandCode->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v22.fields.fakeValue = v17;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v21 = v22;
    v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v21, 0LL) != this->fields.nowEquipedUserCommandCodeId;
  }
  else
  {
    v18 = 1;
  }
  CombineCommandCodeListViewManager__SetDecideButtonStatus(this, v18, v14);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Object_o *sortKindLabel; // x20
  __int64 v10; // x1
  ListViewSort_o *sort; // x0
  UILabel_o *v12; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v14; // x8
  int32_t sortKind; // w9
  System_String_o **v16; // x8
  struct ListViewSort_o *v17; // x8
  _BOOL4 isAscendingOrder; // w8
  System_String_o **v19; // x9
  System_String_o **v20; // x10
  System_String_o **v21; // x8
  struct ListViewSort_o *v22; // x8
  System_String_o **v23; // x8

  if ( (byte_4186174 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&StringLiteral_17021/*"btn_sort_up"*/, v3);
    sub_B2C35C(&StringLiteral_17104/*"btn_txt_up"*/, v4);
    sub_B2C35C(&StringLiteral_17061/*"btn_txt_new"*/, v5);
    sub_B2C35C(&StringLiteral_17051/*"btn_txt_down"*/, v6);
    sub_B2C35C(&StringLiteral_17068/*"btn_txt_old"*/, v7);
    sub_B2C35C(&StringLiteral_17018/*"btn_sort_down"*/, v8);
    byte_4186174 = 1;
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
    v12 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0LL);
    if ( !v12 )
      goto LABEL_36;
    UILabel__set_text(v12, (System_String_o *)sort, 0LL);
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
    v14 = this->fields.sort;
    if ( v14 )
    {
      sortKind = v14->fields.sortKind;
      if ( sortKind == 11 || sortKind == 1 )
      {
        sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
        if ( sort )
        {
          v16 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17068/*"btn_txt_old"*/ : &StringLiteral_17061/*"btn_txt_new"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v16, 0LL);
          v17 = this->fields.sort;
          if ( v17 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              isAscendingOrder = v17->fields.isAscendingOrder;
              v19 = (System_String_o **)&StringLiteral_17018/*"btn_sort_down"*/;
              v20 = (System_String_o **)&StringLiteral_17021/*"btn_sort_up"*/;
LABEL_32:
              if ( isAscendingOrder )
                v23 = v19;
              else
                v23 = v20;
              UISprite__set_spriteName((UISprite_o *)sort, *v23, 0LL);
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
          v21 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17104/*"btn_txt_up"*/ : &StringLiteral_17051/*"btn_txt_down"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v21, 0LL);
          v22 = this->fields.sort;
          if ( v22 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              isAscendingOrder = v22->fields.isAscendingOrder;
              v19 = (System_String_o **)&StringLiteral_17021/*"btn_sort_up"*/;
              v20 = (System_String_o **)&StringLiteral_17018/*"btn_sort_down"*/;
              goto LABEL_32;
            }
          }
        }
      }
    }
LABEL_36:
    sub_B2C434(sort, v10);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineCommandCodeListViewManager__SetStatusKind(
        CombineCommandCodeListViewManager_o *this,
        int32_t modeKind,
        const MethodInfo *method)
{
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
  UnityEngine_Behaviour_o *statusTabButton; // x0
  System_String_o **v16; // x8
  System_String_o **v17; // x8
  System_String_o **v18; // x8
  int32_t v19; // w8
  UILabel_o *v20; // x20
  const MethodInfo *v21; // x2
  struct CombineCommandCodeListViewItem_o *selectItem; // x8
  struct UserCommandCodeEntity_o *userCommandCode; // x8
  __int128 v24; // q1
  bool v25; // w1
  UILabel_o *combineInfoMsgLb; // x20
  __int64 *v27; // x8
  const MethodInfo *v28; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+20h] [xbp-40h]

  if ( (byte_418615B & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, *(_QWORD *)&modeKind);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_17123/*"button_allchoice_reg"*/, v6);
    sub_B2C35C(&StringLiteral_17126/*"button_alllock_unreg"*/, v7);
    sub_B2C35C(&StringLiteral_11738/*"SERVANT_LIST_EXPLANATION_CHOICE"*/, v8);
    sub_B2C35C(&StringLiteral_11739/*"SERVANT_LIST_EXPLANATION_LOCK"*/, v9);
    sub_B2C35C(&StringLiteral_17139/*"button_select_reg"*/, v10);
    sub_B2C35C(&StringLiteral_3165/*"COMBINE_COMMAND_CODE_SELECT_COMMAND_CODE_MSG"*/, v11);
    sub_B2C35C(&StringLiteral_17140/*"button_select_unreg"*/, v12);
    sub_B2C35C(&StringLiteral_17125/*"button_alllock_reg"*/, v13);
    sub_B2C35C(&StringLiteral_17124/*"button_allchoice_unreg"*/, v14);
    byte_418615B = 1;
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
  v16 = (System_String_o **)&StringLiteral_17139/*"button_select_reg"*/;
  if ( modeKind )
    v16 = (System_String_o **)&StringLiteral_17140/*"button_select_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, *v16, 0LL);
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
  v17 = (System_String_o **)&StringLiteral_17125/*"button_alllock_reg"*/;
  if ( modeKind != 1 )
    v17 = (System_String_o **)&StringLiteral_17126/*"button_alllock_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, *v17, 0LL);
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
  v18 = (System_String_o **)&StringLiteral_17123/*"button_allchoice_reg"*/;
  if ( modeKind != 2 )
    v18 = (System_String_o **)&StringLiteral_17124/*"button_allchoice_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, *v18, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
  if ( !statusTabButton )
    goto LABEL_47;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))statusTabButton->klass[1]._1.implementedInterfaces)(
    statusTabButton,
    0LL,
    0LL,
    statusTabButton->klass[1]._1.interfaceOffsets);
  v19 = this->fields.modeKind;
  if ( v19 == 2 )
  {
    combineInfoMsgLb = this->fields.combineInfoMsgLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v27 = &StringLiteral_11738/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
LABEL_42:
    statusTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get((System_String_o *)*v27, 0LL);
    if ( combineInfoMsgLb )
    {
      UILabel__set_text(combineInfoMsgLb, (System_String_o *)statusTabButton, 0LL);
      CombineCommandCodeListViewManager__SetDecideButtonStatus(this, 0, v28);
      return;
    }
    goto LABEL_47;
  }
  if ( v19 == 1 )
  {
    combineInfoMsgLb = this->fields.combineInfoMsgLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v27 = &StringLiteral_11739/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
    goto LABEL_42;
  }
  if ( v19 )
    return;
  v20 = this->fields.combineInfoMsgLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  statusTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3165/*"COMBINE_COMMAND_CODE_SELECT_COMMAND_CODE_MSG"*/, 0LL);
  if ( !v20 )
LABEL_47:
    sub_B2C434(statusTabButton, *(_QWORD *)&modeKind);
  UILabel__set_text(v20, (System_String_o *)statusTabButton, 0LL);
  selectItem = this->fields.selectItem;
  if ( selectItem && (userCommandCode = selectItem->fields.userCommandCode) != 0LL )
  {
    v24 = *(_OWORD *)&userCommandCode->fields.id.fields.fakeValue;
    *(_OWORD *)&v30.fields.currentCryptoKey = *(_OWORD *)&userCommandCode->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v30.fields.fakeValue = v24;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v29 = v30;
    v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v29, 0LL) != this->fields.nowEquipedUserCommandCodeId;
  }
  else
  {
    v25 = 0;
  }
  CombineCommandCodeListViewManager__SetDecideButtonStatus(this, v25, v21);
}


void __fastcall CombineCommandCodeListViewManager__StatusRequest(
        CombineCommandCodeListViewManager_o *this,
        CombineCommandCodeListViewManager_RequestCallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t modeKind; // w8
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  NetworkManager_ResultCallbackFunc_o *v16; // x20
  CommandCodeStatusSyncRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v18; // x1
  System_Int64_array *v19; // x2
  System_Int64_array *v20; // x1
  bool v21; // w3
  bool v22; // w4
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  NetworkManager_ResultCallbackFunc_o *v29; // x20
  System_Int64_array *unchoiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *choiceList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *unlockList; // [xsp+18h] [xbp-28h] BYREF
  System_Int64_array *lockList; // [xsp+28h] [xbp-18h] BYREF

  if ( (byte_418616B & 1) == 0 )
  {
    sub_B2C35C(&Method_CombineCommandCodeListViewManager_EndStatusSync__, callback);
    sub_B2C35C(&Method_NetworkManager_getRequest_CommandCodeStatusSyncRequest___, v6);
    sub_B2C35C(&NetworkManager_TypeInfo, v7);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v8);
    byte_418616B = 1;
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
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.requestCallback,
        (System_Int32_array **)callback,
        v23,
        v24,
        v25,
        v26,
        v27,
        v28);
      v29 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v29,
        (Il2CppObject *)this,
        Method_CombineCommandCodeListViewManager_EndStatusSync__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Request_WarBoardWallAttackRequest = (CommandCodeStatusSyncRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                              v29,
                                                                              (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_CommandCodeStatusSyncRequest___);
      if ( Request_WarBoardWallAttackRequest )
      {
        v19 = unchoiceList;
        v20 = choiceList;
        v22 = 1;
        v21 = 0;
        goto LABEL_17;
      }
LABEL_21:
      sub_B2C434(Request_WarBoardWallAttackRequest, v18);
    }
  }
  else if ( modeKind == 1 && CombineCommandCodeListViewManager__GetSwapLockList(this, &lockList, &unlockList, v3) )
  {
    this->fields.requestCallback = callback;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.requestCallback,
      (System_Int32_array **)callback,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
    v16 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v16,
      (Il2CppObject *)this,
      Method_CombineCommandCodeListViewManager_EndStatusSync__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = (CommandCodeStatusSyncRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                            v16,
                                                                            (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_CommandCodeStatusSyncRequest___);
    if ( Request_WarBoardWallAttackRequest )
    {
      v19 = unlockList;
      v20 = lockList;
      v21 = 1;
      v22 = 0;
LABEL_17:
      CommandCodeStatusSyncRequest__beginRequest(Request_WarBoardWallAttackRequest, v20, v19, v21, v22, 0LL);
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

  if ( (byte_4186156 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, value);
    byte_4186156 = 1;
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
    v8 = sub_B20D74(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (CombineCommandCodeListViewManager_o *)sub_B2C728(v7);
  CombineCommandCodeListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_CombineCommandCodeListViewObject__o *__fastcall CombineCommandCodeListViewManager__get_ClippingObjectList(
        CombineCommandCodeListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x20
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  const MethodInfo *v11; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x21
  signed __int64 size; // x22
  unsigned __int64 v14; // x23
  UnityEngine_Object_o *v15; // x21
  EventMissionProgressRequest_Argument_ProgressData_o *v16; // x21

  if ( (byte_4186159 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_CombineCommandCodeListViewObject___, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_CombineCommandCodeListViewObject__Add__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_CombineCommandCodeListViewObject___ctor__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6);
    sub_B2C35C(&System_Collections_Generic_List_CombineCommandCodeListViewObject__TypeInfo, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    byte_4186159 = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_CombineCommandCodeListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_CombineCommandCodeListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    goto LABEL_21;
  size = objectList->fields._size;
  if ( (int)size >= 1 )
  {
    v14 = 0LL;
    do
    {
      if ( v14 >= (unsigned int)objectList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v15 = (UnityEngine_Object_o *)objectList->fields._items->m_Items[v14];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_Object__op_Equality(
                                                                                         v15,
                                                                                         0LL,
                                                                                         0LL);
      if ( ((unsigned __int8)Component_srcLineSprite & 1) == 0 )
      {
        if ( !v15 )
          break;
        Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                           (UnityEngine_GameObject_o *)v15,
                                                                                           (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_CombineCommandCodeListViewObject___);
        if ( !Component_srcLineSprite )
          break;
        v16 = Component_srcLineSprite;
        Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)CombineCommandCodeListViewObject__GetItem(
                                                                                           (CombineCommandCodeListViewObject_o *)Component_srcLineSprite,
                                                                                           v11);
        if ( !Component_srcLineSprite )
          break;
        v11 = (const MethodInfo *)Component_srcLineSprite;
        if ( !LOBYTE(Component_srcLineSprite[2].monitor)
          || (Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)ListViewManager__ClippingItem_24147020(
                                                                                                 (ListViewManager_o *)this,
                                                                                                 (ListViewItem_o *)Component_srcLineSprite,
                                                                                                 0LL),
              ((unsigned __int8)Component_srcLineSprite & 1) != 0) )
        {
          if ( !v9 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v9,
            v16,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_CombineCommandCodeListViewObject__Add__);
        }
      }
      if ( (__int64)++v14 >= size )
        return (System_Collections_Generic_List_CombineCommandCodeListViewObject__o *)v9;
      objectList = this->fields.objectList;
    }
    while ( objectList );
LABEL_21:
    sub_B2C434(Component_srcLineSprite, v11);
  }
  return (System_Collections_Generic_List_CombineCommandCodeListViewObject__o *)v9;
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x20
  srcLineSprite_o *Component_srcLineSprite; // x0
  __int64 v11; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x21
  signed __int64 size; // x22
  unsigned __int64 v14; // x23
  UnityEngine_Object_o *v15; // x21

  if ( (byte_4186158 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_CombineCommandCodeListViewObject___, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_CombineCommandCodeListViewObject__Add__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_CombineCommandCodeListViewObject___ctor__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6);
    sub_B2C35C(&System_Collections_Generic_List_CombineCommandCodeListViewObject__TypeInfo, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    byte_4186158 = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_CombineCommandCodeListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_CombineCommandCodeListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    goto LABEL_17;
  size = objectList->fields._size;
  if ( (int)size >= 1 )
  {
    v14 = 0LL;
    do
    {
      if ( v14 >= (unsigned int)objectList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v15 = (UnityEngine_Object_o *)objectList->fields._items->m_Items[v14];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Component_srcLineSprite = (srcLineSprite_o *)UnityEngine_Object__op_Equality(v15, 0LL, 0LL);
      if ( ((unsigned __int8)Component_srcLineSprite & 1) == 0 )
      {
        if ( !v15 )
          break;
        Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    (UnityEngine_GameObject_o *)v15,
                                    (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_CombineCommandCodeListViewObject___);
        if ( !v9 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v9,
          (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_CombineCommandCodeListViewObject__Add__);
      }
      if ( (__int64)++v14 >= size )
        return (System_Collections_Generic_List_CombineCommandCodeListViewObject__o *)v9;
      objectList = this->fields.objectList;
    }
    while ( objectList );
LABEL_17:
    sub_B2C434(Component_srcLineSprite, v11);
  }
  return (System_Collections_Generic_List_CombineCommandCodeListViewObject__o *)v9;
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

  if ( (byte_4186157 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, value);
    byte_4186157 = 1;
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
    v8 = sub_B20D74(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (CombineCommandCodeListViewManager_o *)sub_B2C728(v7);
  CombineCommandCodeListViewManager__get_ObjectList(v10, v11);
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
  sub_B2C2F8(p_method, object);
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_4184F16 & 1) == 0 )
  {
    sub_B2C35C(&bool_TypeInfo, isRequest);
    byte_4184F16 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B2C300(this, v9, callback, object);
}


void __fastcall CombineCommandCodeListViewManager_RequestCallbackFunc__EndInvoke(
        CombineCommandCodeListViewManager_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineCommandCodeListViewManager_RequestCallbackFunc__Invoke(
        CombineCommandCodeListViewManager_RequestCallbackFunc_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  CombineCommandCodeListViewManager_RequestCallbackFunc_o **v8; // x25
  __int64 v9; // x26
  unsigned int v10; // w23
  __int64 class_0; // x0
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, bool, _QWORD); // x0
  CombineCommandCodeListViewManager_RequestCallbackFunc_o *v20; // x8
  __int64 *v21; // x21
  __int64 v22; // x22
  void (__fastcall *v23)(bool, __int64); // x23
  char v24; // w23
  char v25; // w0
  __int64 v26; // x3
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  CombineCommandCodeListViewManager_RequestCallbackFunc_o *v32; // [xsp+8h] [xbp-48h] BYREF

  v32 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v32;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (CombineCommandCodeListViewManager_RequestCallbackFunc_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(bool, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v20->fields.extra_arg, isRequest, method, v3);
      if ( (sub_B2C38C(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 1 )
        goto LABEL_36;
      v23(isRequest, v22);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v21 && *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B2C384(v22);
      v25 = sub_B2C788(v22);
      if ( (v24 & 1) != 0 )
      {
        if ( (v25 & 1) != 0 )
        {
          v27 = *v21;
          v28 = *(_QWORD *)(v22 + 24);
          v29 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_AC5258(v21, v28, v29, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B2C40C(v17, v22);
        (*v19)(v21, isRequest, v19);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v13 = *v21;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v13 + 16LL * (int)(*v15 + v10) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AC5258(v21, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v16)(v21, isRequest, *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            isRequest,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v23)(v21, isRequest, v22);
    goto LABEL_37;
  }
}