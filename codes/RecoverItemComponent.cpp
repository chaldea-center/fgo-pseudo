void __fastcall RecoverItemComponent___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EC50D & 1) == 0 )
  {
    sub_B5D5C4(&RecoverItemComponent_TypeInfo, v1, v2, v3);
    byte_42EC50D = 1;
  }
  LODWORD(RecoverItemComponent_TypeInfo->static_fields->COLOR_VAL) = (struct RecoverItemComponent_StaticFields)1052770304;
}


void __fastcall RecoverItemComponent___ctor(RecoverItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall RecoverItemComponent__AttachStoneCountRefreshComponent(
        RecoverItemComponent_o *this,
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
  UnityEngine_GameObject_o *gameObject; // x20
  System_Action_int__o *v12; // x21

  if ( (byte_42EC507 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_int___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_int__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_RecoverItemComponent__AttachStoneCountRefreshComponent_b__38_0__, v8, v9, v10);
    byte_42EC507 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v12 = (System_Action_int__o *)sub_B5D694(System_Action_int__TypeInfo);
  System_Action_int____ctor(
    v12,
    (Il2CppObject *)this,
    Method_RecoverItemComponent__AttachStoneCountRefreshComponent_b__38_0__,
    (const MethodInfo_2589D90 *)Method_System_Action_int___ctor__);
  StoneCountRefreshComponent__AttachToGameObject(gameObject, v12, 1, 0LL);
}


void __fastcall RecoverItemComponent__CloseApRecovDlg(
        RecoverItemComponent_o *this,
        bool isRes,
        int32_t useNum,
        const MethodInfo *method)
{
  char v7; // w1
  int v8; // w2
  __int64 v9; // x3
  char v10; // w1
  int v11; // w2
  __int64 v12; // x3
  WebViewManager_o *v13; // x20
  System_Action_o *v14; // x21
  CommonUI_o *Instance; // x0
  __int64 v16; // x1
  System_Action_o *v17; // x1

  if ( (byte_42EC50A & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isRes, useNum, method);
    sub_B5D5C4(&Method_RecoverItemComponent_setRequestInfo__, v7, v8, v9);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10, v11, v12);
    byte_42EC50A = 1;
  }
  if ( !isRes )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      v17 = 0LL;
      goto LABEL_8;
    }
LABEL_9:
    sub_B5D69C(Instance, v16);
  }
  this->fields.spendNum = useNum;
  v13 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_RecoverItemComponent_setRequestInfo__, 0LL);
  if ( !v13 )
    goto LABEL_9;
  Instance = (CommonUI_o *)v13;
  v17 = v14;
LABEL_8:
  CommonUI__CloseApRecoverConfirmDlg(Instance, v17, 0LL);
}


void __fastcall RecoverItemComponent__OnClickItem(RecoverItemComponent_o *this, const MethodInfo *method)
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
  int v65; // w1
  int v66; // w2
  __int64 v67; // x3
  int v68; // w1
  int v69; // w2
  __int64 v70; // x3
  int v71; // w1
  int v72; // w2
  __int64 v73; // x3
  int v74; // w1
  int v75; // w2
  __int64 v76; // x3
  int v77; // w1
  int v78; // w2
  __int64 v79; // x3
  int v80; // w1
  int v81; // w2
  __int64 v82; // x3
  int v83; // w1
  int v84; // w2
  __int64 v85; // x3
  UnityEngine_Object_o *dialog; // x20
  __int64 userEntity; // x0
  __int64 v88; // x1
  struct RecoverDlgComponent_o *v89; // x8
  System_String_o *v90; // x27
  System_String_o *v91; // x21
  Il2CppObject *v92; // x0
  System_Int32_array **v93; // x24
  System_Int32_array **mText; // x23
  System_String_o *v95; // x21
  Il2CppObject *v96; // x0
  struct UILabel_o *itemNameLb; // x8
  System_String_o *v98; // x21
  System_String_o *v99; // x22
  int32_t v100; // w8
  int32_t usrMaxAp; // w9
  System_String_o **v102; // x8
  System_String_o *v103; // x25
  System_String_o *v104; // x25
  System_String_array **v105; // x2
  System_String_array **v106; // x3
  System_Boolean_array **v107; // x4
  System_Int32_array **v108; // x5
  System_Int32_array *v109; // x6
  System_Int32_array *v110; // x7
  System_Object_array *v111; // x26
  System_String_array **v112; // x2
  System_String_array **v113; // x3
  System_Boolean_array **v114; // x4
  System_Int32_array **v115; // x5
  System_Int32_array *v116; // x6
  System_Int32_array *v117; // x7
  System_String_array **v118; // x2
  System_String_array **v119; // x3
  System_Boolean_array **v120; // x4
  System_Int32_array **v121; // x5
  System_Int32_array *v122; // x6
  System_Int32_array *v123; // x7
  System_Int32_array **v124; // x24
  System_String_array **v125; // x2
  System_String_array **v126; // x3
  System_Boolean_array **v127; // x4
  System_Int32_array **v128; // x5
  System_Int32_array *v129; // x6
  System_Int32_array *v130; // x7
  System_Int32_array **v131; // x24
  System_String_array **v132; // x2
  System_String_array **v133; // x3
  System_Boolean_array **v134; // x4
  System_Int32_array **v135; // x5
  System_Int32_array *v136; // x6
  System_Int32_array *v137; // x7
  System_Int32_array **v138; // x24
  System_String_array **v139; // x2
  System_String_array **v140; // x3
  System_Boolean_array **v141; // x4
  System_Int32_array **v142; // x5
  System_Int32_array *v143; // x6
  System_Int32_array *v144; // x7
  System_Int32_array **v145; // x24
  System_String_array **v146; // x2
  System_String_array **v147; // x3
  System_Boolean_array **v148; // x4
  System_Int32_array **v149; // x5
  System_Int32_array *v150; // x6
  System_Int32_array *v151; // x7
  System_Int32_array **v152; // x24
  BattleServantConfConponent_o *v153; // x0
  System_String_o *v154; // x25
  System_String_array **v155; // x2
  System_String_array **v156; // x3
  System_Boolean_array **v157; // x4
  System_Int32_array **v158; // x5
  System_Int32_array *v159; // x6
  System_Int32_array *v160; // x7
  System_Object_array *v161; // x26
  System_String_array **v162; // x2
  System_String_array **v163; // x3
  System_Boolean_array **v164; // x4
  System_Int32_array **v165; // x5
  System_Int32_array *v166; // x6
  System_Int32_array *v167; // x7
  System_String_array **v168; // x2
  System_String_array **v169; // x3
  System_Boolean_array **v170; // x4
  System_Int32_array **v171; // x5
  System_Int32_array *v172; // x6
  System_Int32_array *v173; // x7
  System_Int32_array **v174; // x24
  System_String_array **v175; // x2
  System_String_array **v176; // x3
  System_Boolean_array **v177; // x4
  System_Int32_array **v178; // x5
  System_Int32_array *v179; // x6
  System_Int32_array *v180; // x7
  System_Int32_array **v181; // x24
  System_String_array **v182; // x2
  System_String_array **v183; // x3
  System_Boolean_array **v184; // x4
  System_Int32_array **v185; // x5
  System_Int32_array *v186; // x6
  System_Int32_array *v187; // x7
  System_Int32_array **v188; // x24
  System_String_array **v189; // x2
  System_String_array **v190; // x3
  System_Boolean_array **v191; // x4
  System_Int32_array **v192; // x5
  System_Int32_array *v193; // x6
  System_Int32_array *v194; // x7
  System_Int32_array **v195; // x24
  System_String_array **v196; // x2
  System_String_array **v197; // x3
  System_Boolean_array **v198; // x4
  System_Int32_array **v199; // x5
  System_Int32_array *v200; // x6
  System_Int32_array *v201; // x7
  System_Int32_array **v202; // x24
  System_String_o *v203; // x24
  CommonUI_o *v204; // x23
  CommonConfirmDialog_ClickDelegate_o *v205; // x25
  System_String_o **v206; // x8
  System_String_o *v207; // x25
  System_String_array **v208; // x2
  System_String_array **v209; // x3
  System_Boolean_array **v210; // x4
  System_Int32_array **v211; // x5
  System_Int32_array *v212; // x6
  System_Int32_array *v213; // x7
  System_String_array **v214; // x2
  System_String_array **v215; // x3
  System_Boolean_array **v216; // x4
  System_Int32_array **v217; // x5
  System_Int32_array *v218; // x6
  System_Int32_array *v219; // x7
  System_String_array **v220; // x2
  System_String_array **v221; // x3
  System_Boolean_array **v222; // x4
  System_Int32_array **v223; // x5
  System_Int32_array *v224; // x6
  System_Int32_array *v225; // x7
  System_Int32_array **v226; // x24
  System_String_array **v227; // x2
  System_String_array **v228; // x3
  System_Boolean_array **v229; // x4
  System_Int32_array **v230; // x5
  System_Int32_array *v231; // x6
  System_Int32_array *v232; // x7
  System_Int32_array **v233; // x24
  System_String_array **v234; // x2
  System_String_array **v235; // x3
  System_Boolean_array **v236; // x4
  System_Int32_array **v237; // x5
  System_Int32_array *v238; // x6
  System_Int32_array *v239; // x7
  System_Int32_array **v240; // x24
  System_String_array **v241; // x2
  System_String_array **v242; // x3
  System_Boolean_array **v243; // x4
  System_Int32_array **v244; // x5
  System_Int32_array *v245; // x6
  System_Int32_array *v246; // x7
  System_Int32_array **v247; // x24
  System_String_array **v248; // x2
  System_String_array **v249; // x3
  System_Boolean_array **v250; // x4
  System_Int32_array **v251; // x5
  System_Int32_array *v252; // x6
  System_Int32_array *v253; // x7
  System_Int32_array **v254; // x24
  System_String_o *v255; // x23
  CommonUI_o *v256; // x25
  CommonConfirmDialog_ClickDelegate_o *v257; // x26
  System_String_o *v258; // x0
  System_String_o *v259; // x20
  CommonUI_o *v260; // x21
  System_Action_o *v261; // x22
  System_String_o *v262; // x0
  System_String_o *v263; // x20
  CommonUI_o *Instance; // x21
  System_Action_o *v265; // x22
  WebViewManager_o *v266; // x0
  int32_t targetId; // w20
  int32_t needAp; // w21
  CommonUI_o *v269; // x22
  System_Action_bool__int__o *v270; // x23
  __int64 v271; // x0
  __int64 v272; // x0
  int32_t v273; // [xsp+38h] [xbp-68h] BYREF
  int32_t v274; // [xsp+3Ch] [xbp-64h] BYREF
  int32_t recvSum; // [xsp+40h] [xbp-60h] BYREF
  int32_t usrMaxRp; // [xsp+44h] [xbp-5Ch] BYREF
  int32_t usrCurrentRp; // [xsp+48h] [xbp-58h] BYREF
  int32_t spendNum; // [xsp+4Ch] [xbp-54h] BYREF

  if ( (byte_42EC508 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_bool__int___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_bool__int__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&System_Action_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&BalanceConfig_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&CommonConfirmDialog_ClickDelegate_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&int_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&object___TypeInfo, v23, v24, v25);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_RecoverItemComponent_CloseApRecovDlg__, v29, v30, v31);
    sub_B5D5C4(&Method_RecoverItemComponent_closeNotificationDlg__, v32, v33, v34);
    sub_B5D5C4(&Method_RecoverItemComponent_spendItemDlg__, v35, v36, v37);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v38, v39, v40);
    sub_B5D5C4(&SoundManager_TypeInfo, v41, v42, v43);
    sub_B5D5C4(&StringLiteral_11394/*"RP_RECOVER_CONFIRM_MSG"*/, v44, v45, v46);
    sub_B5D5C4(&StringLiteral_3181/*"CMDSPELL_CURRENT_NUM"*/, v47, v48, v49);
    sub_B5D5C4(&StringLiteral_3322/*"COMMAND_SPELL_TXT"*/, v50, v51, v52);
    sub_B5D5C4(&StringLiteral_1753/*"AP_RECOVER_CONFIRM_MSG"*/, v53, v54, v55);
    sub_B5D5C4(&StringLiteral_11392/*"RP_FULL_MSG"*/, v56, v57, v58);
    sub_B5D5C4(&StringLiteral_14869/*"UNIT_INFO"*/, v59, v60, v61);
    sub_B5D5C4(&StringLiteral_1749/*"AP_ADD_CONFIRM_MSG"*/, v62, v63, v64);
    sub_B5D5C4(&StringLiteral_3328/*"COMMON_CONFIRM_DECIDE"*/, v65, v66, v67);
    sub_B5D5C4(&StringLiteral_3326/*"COMMON_CONFIRM_CANCEL"*/, v68, v69, v70);
    sub_B5D5C4(&StringLiteral_1750/*"AP_ADD_CONFIRM_MSG_OVER"*/, v71, v72, v73);
    sub_B5D5C4(&StringLiteral_1754/*"AP_RECOVER_CONFIRM_MSG_OVER"*/, v74, v75, v76);
    sub_B5D5C4(&StringLiteral_1751/*"AP_FULL_MSG"*/, v77, v78, v79);
    sub_B5D5C4(&StringLiteral_1/*""*/, v80, v81, v82);
    sub_B5D5C4(&StringLiteral_1759/*"AP_RECOVER_STONEPAY_WARNING_MSG"*/, v83, v84, v85);
    byte_42EC508 = 1;
  }
  if ( !this->fields.isEnableSelect )
    return;
  dialog = (UnityEngine_Object_o *)this->fields.dialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  userEntity = UnityEngine_Object__op_Inequality(dialog, 0LL, 0LL);
  if ( (userEntity & 1) == 0 )
    return;
  v89 = this->fields.dialog;
  if ( !v89 )
    goto LABEL_154;
  if ( v89->fields.isClosed )
    return;
  v90 = (System_String_o *)StringLiteral_1/*""*/;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v91 = LocalizationManager__Get((System_String_o *)StringLiteral_14869/*"UNIT_INFO"*/, 0LL);
  spendNum = this->fields.spendNum;
  v92 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
  userEntity = (__int64)System_String__Format(v91, v92, 0LL);
  v93 = (System_Int32_array **)userEntity;
  if ( this->fields.currentType == 1 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    mText = (System_Int32_array **)LocalizationManager__Get((System_String_o *)StringLiteral_3322/*"COMMAND_SPELL_TXT"*/, 0LL);
    if ( this->fields.currentType == 1 )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v95 = LocalizationManager__Get((System_String_o *)StringLiteral_3181/*"CMDSPELL_CURRENT_NUM"*/, 0LL);
      spendNum = this->fields.spendNum;
      v96 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
      v93 = (System_Int32_array **)System_String__Format(v95, v96, 0LL);
    }
  }
  else
  {
    itemNameLb = this->fields.itemNameLb;
    if ( !itemNameLb )
      goto LABEL_154;
    mText = (System_Int32_array **)itemNameLb->fields.mText;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v98 = LocalizationManager__Get((System_String_o *)StringLiteral_3328/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  v99 = LocalizationManager__Get((System_String_o *)StringLiteral_3326/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  if ( !this->fields.isAp )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v154 = LocalizationManager__Get((System_String_o *)StringLiteral_11394/*"RP_RECOVER_CONFIRM_MSG"*/, 0LL);
    userEntity = sub_B5D5DC(object___TypeInfo, 7LL);
    if ( !userEntity )
      goto LABEL_154;
    v161 = (System_Object_array *)userEntity;
    if ( mText )
    {
      userEntity = sub_B5D684(mText, *(_QWORD *)(*(_QWORD *)userEntity + 64LL));
      if ( !userEntity )
        goto LABEL_155;
    }
    if ( v161->max_length )
    {
      v161->m_Items[0] = (Il2CppObject *)mText;
      sub_B5D560((BattleServantConfConponent_o *)v161->m_Items, mText, v155, v156, v157, v158, v159, v160);
      if ( v93 )
      {
        userEntity = sub_B5D684(v93, v161->obj.klass->_1.element_class);
        if ( !userEntity )
          goto LABEL_155;
      }
      if ( v161->max_length > 1 )
      {
        v161->m_Items[1] = (Il2CppObject *)v93;
        sub_B5D560((BattleServantConfConponent_o *)&v161->m_Items[1], v93, v162, v163, v164, v165, v166, v167);
        spendNum = this->fields.recvRpNum;
        userEntity = j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
        v174 = (System_Int32_array **)userEntity;
        if ( userEntity )
        {
          userEntity = sub_B5D684(userEntity, v161->obj.klass->_1.element_class);
          if ( !userEntity )
            goto LABEL_155;
        }
        if ( v161->max_length > 2 )
        {
          v161->m_Items[2] = (Il2CppObject *)v174;
          sub_B5D560((BattleServantConfConponent_o *)&v161->m_Items[2], v174, v168, v169, v170, v171, v172, v173);
          usrCurrentRp = this->fields.usrCurrentRp;
          userEntity = j_il2cpp_value_box_0(int_TypeInfo, &usrCurrentRp);
          v181 = (System_Int32_array **)userEntity;
          if ( userEntity )
          {
            userEntity = sub_B5D684(userEntity, v161->obj.klass->_1.element_class);
            if ( !userEntity )
              goto LABEL_155;
          }
          if ( v161->max_length > 3 )
          {
            v161->m_Items[3] = (Il2CppObject *)v181;
            sub_B5D560((BattleServantConfConponent_o *)&v161->m_Items[3], v181, v175, v176, v177, v178, v179, v180);
            usrMaxRp = this->fields.usrMaxRp;
            userEntity = j_il2cpp_value_box_0(int_TypeInfo, &usrMaxRp);
            v188 = (System_Int32_array **)userEntity;
            if ( userEntity )
            {
              userEntity = sub_B5D684(userEntity, v161->obj.klass->_1.element_class);
              if ( !userEntity )
                goto LABEL_155;
            }
            if ( v161->max_length > 4 )
            {
              v161->m_Items[4] = (Il2CppObject *)v188;
              sub_B5D560((BattleServantConfConponent_o *)&v161->m_Items[4], v188, v182, v183, v184, v185, v186, v187);
              recvSum = this->fields.recvSum;
              userEntity = j_il2cpp_value_box_0(int_TypeInfo, &recvSum);
              v195 = (System_Int32_array **)userEntity;
              if ( userEntity )
              {
                userEntity = sub_B5D684(userEntity, v161->obj.klass->_1.element_class);
                if ( !userEntity )
                  goto LABEL_155;
              }
              if ( v161->max_length > 5 )
              {
                v161->m_Items[5] = (Il2CppObject *)v195;
                sub_B5D560((BattleServantConfConponent_o *)&v161->m_Items[5], v195, v189, v190, v191, v192, v193, v194);
                v274 = this->fields.usrMaxRp;
                userEntity = j_il2cpp_value_box_0(int_TypeInfo, &v274);
                v202 = (System_Int32_array **)userEntity;
                if ( userEntity )
                {
                  userEntity = sub_B5D684(userEntity, v161->obj.klass->_1.element_class);
                  if ( !userEntity )
                    goto LABEL_155;
                }
                if ( v161->max_length > 6 )
                {
                  v161->m_Items[6] = (Il2CppObject *)v202;
                  sub_B5D560(
                    (BattleServantConfConponent_o *)&v161->m_Items[6],
                    v202,
                    v196,
                    v197,
                    v198,
                    v199,
                    v200,
                    v201);
                  userEntity = (__int64)System_String__Format_44656512(v154, v161, 0LL);
                  if ( !this->fields.userEntity )
                    goto LABEL_154;
                  v203 = (System_String_o *)userEntity;
                  if ( UserGameEntity__getRp(this->fields.userEntity, 0LL) < this->fields.usrMaxRp )
                    goto LABEL_88;
                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  v262 = LocalizationManager__Get((System_String_o *)StringLiteral_11392/*"RP_FULL_MSG"*/, 0LL);
                  v263 = System_String__Format(v262, (Il2CppObject *)mText, 0LL);
                  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  v265 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
                  System_Action___ctor(
                    v265,
                    (Il2CppObject *)this,
                    Method_RecoverItemComponent_closeNotificationDlg__,
                    0LL);
                  if ( !Instance )
                    goto LABEL_154;
                  CommonUI__OpenNotificationDialog(
                    Instance,
                    (System_String_o *)StringLiteral_1/*""*/,
                    v263,
                    v265,
                    -1,
                    0,
                    0,
                    0,
                    1,
                    0,
                    1,
                    0,
                    0LL,
                    0LL);
                  return;
                }
              }
            }
          }
        }
      }
    }
LABEL_153:
    v271 = sub_B5D6C8(userEntity);
    sub_B5D668(v271, 0LL);
  }
  v100 = this->fields.recvSum;
  usrMaxAp = this->fields.usrMaxAp;
  if ( !this->fields.isAddAp )
  {
    if ( v100 <= usrMaxAp )
      v206 = (System_String_o **)&StringLiteral_1753/*"AP_RECOVER_CONFIRM_MSG"*/;
    else
      v206 = (System_String_o **)&StringLiteral_1754/*"AP_RECOVER_CONFIRM_MSG_OVER"*/;
    v207 = *v206;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v104 = LocalizationManager__Get(v207, 0LL);
    userEntity = sub_B5D5DC(object___TypeInfo, 8LL);
    if ( !userEntity )
      goto LABEL_154;
    v111 = (System_Object_array *)userEntity;
    if ( mText )
    {
      userEntity = sub_B5D684(mText, *(_QWORD *)(*(_QWORD *)userEntity + 64LL));
      if ( !userEntity )
        goto LABEL_155;
    }
    if ( v111->max_length )
    {
      v111->m_Items[0] = (Il2CppObject *)mText;
      sub_B5D560((BattleServantConfConponent_o *)v111->m_Items, mText, v208, v209, v210, v211, v212, v213);
      if ( v93 )
      {
        userEntity = sub_B5D684(v93, v111->obj.klass->_1.element_class);
        if ( !userEntity )
          goto LABEL_155;
      }
      if ( v111->max_length > 1 )
      {
        v111->m_Items[1] = (Il2CppObject *)v93;
        sub_B5D560((BattleServantConfConponent_o *)&v111->m_Items[1], v93, v214, v215, v216, v217, v218, v219);
        spendNum = this->fields.apRcvRate;
        userEntity = j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
        v226 = (System_Int32_array **)userEntity;
        if ( userEntity )
        {
          userEntity = sub_B5D684(userEntity, v111->obj.klass->_1.element_class);
          if ( !userEntity )
            goto LABEL_155;
        }
        if ( v111->max_length > 2 )
        {
          v111->m_Items[2] = (Il2CppObject *)v226;
          sub_B5D560((BattleServantConfConponent_o *)&v111->m_Items[2], v226, v220, v221, v222, v223, v224, v225);
          usrCurrentRp = this->fields.recvApNum;
          userEntity = j_il2cpp_value_box_0(int_TypeInfo, &usrCurrentRp);
          v233 = (System_Int32_array **)userEntity;
          if ( userEntity )
          {
            userEntity = sub_B5D684(userEntity, v111->obj.klass->_1.element_class);
            if ( !userEntity )
              goto LABEL_155;
          }
          if ( v111->max_length > 3 )
          {
            v111->m_Items[3] = (Il2CppObject *)v233;
            sub_B5D560((BattleServantConfConponent_o *)&v111->m_Items[3], v233, v227, v228, v229, v230, v231, v232);
            usrMaxRp = this->fields.usrCurrentAp;
            userEntity = j_il2cpp_value_box_0(int_TypeInfo, &usrMaxRp);
            v240 = (System_Int32_array **)userEntity;
            if ( userEntity )
            {
              userEntity = sub_B5D684(userEntity, v111->obj.klass->_1.element_class);
              if ( !userEntity )
                goto LABEL_155;
            }
            if ( v111->max_length > 4 )
            {
              v111->m_Items[4] = (Il2CppObject *)v240;
              sub_B5D560((BattleServantConfConponent_o *)&v111->m_Items[4], v240, v234, v235, v236, v237, v238, v239);
              recvSum = this->fields.usrMaxAp;
              userEntity = j_il2cpp_value_box_0(int_TypeInfo, &recvSum);
              v247 = (System_Int32_array **)userEntity;
              if ( userEntity )
              {
                userEntity = sub_B5D684(userEntity, v111->obj.klass->_1.element_class);
                if ( !userEntity )
                  goto LABEL_155;
              }
              if ( v111->max_length > 5 )
              {
                v111->m_Items[5] = (Il2CppObject *)v247;
                sub_B5D560((BattleServantConfConponent_o *)&v111->m_Items[5], v247, v241, v242, v243, v244, v245, v246);
                v274 = this->fields.recvSum;
                userEntity = j_il2cpp_value_box_0(int_TypeInfo, &v274);
                v254 = (System_Int32_array **)userEntity;
                if ( userEntity )
                {
                  userEntity = sub_B5D684(userEntity, v111->obj.klass->_1.element_class);
                  if ( !userEntity )
                    goto LABEL_155;
                }
                if ( v111->max_length > 6 )
                {
                  v111->m_Items[6] = (Il2CppObject *)v254;
                  sub_B5D560(
                    (BattleServantConfConponent_o *)&v111->m_Items[6],
                    v254,
                    v248,
                    v249,
                    v250,
                    v251,
                    v252,
                    v253);
                  v273 = this->fields.usrMaxAp;
                  userEntity = j_il2cpp_value_box_0(int_TypeInfo, &v273);
                  v152 = (System_Int32_array **)userEntity;
                  if ( userEntity )
                  {
                    userEntity = sub_B5D684(userEntity, v111->obj.klass->_1.element_class);
                    if ( !userEntity )
                      goto LABEL_155;
                  }
                  if ( v111->max_length > 7 )
                  {
                    v111->m_Items[7] = (Il2CppObject *)v152;
                    v153 = (BattleServantConfConponent_o *)&v111->m_Items[7];
                    goto LABEL_125;
                  }
                }
              }
            }
          }
        }
      }
    }
    goto LABEL_153;
  }
  if ( v100 <= usrMaxAp )
    v102 = (System_String_o **)&StringLiteral_1749/*"AP_ADD_CONFIRM_MSG"*/;
  else
    v102 = (System_String_o **)&StringLiteral_1750/*"AP_ADD_CONFIRM_MSG_OVER"*/;
  v103 = *v102;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v104 = LocalizationManager__Get(v103, 0LL);
  userEntity = sub_B5D5DC(object___TypeInfo, 7LL);
  if ( !userEntity )
    goto LABEL_154;
  v111 = (System_Object_array *)userEntity;
  if ( mText )
  {
    userEntity = sub_B5D684(mText, *(_QWORD *)(*(_QWORD *)userEntity + 64LL));
    if ( !userEntity )
      goto LABEL_155;
  }
  if ( !v111->max_length )
    goto LABEL_153;
  v111->m_Items[0] = (Il2CppObject *)mText;
  sub_B5D560((BattleServantConfConponent_o *)v111->m_Items, mText, v105, v106, v107, v108, v109, v110);
  if ( v93 )
  {
    userEntity = sub_B5D684(v93, v111->obj.klass->_1.element_class);
    if ( !userEntity )
      goto LABEL_155;
  }
  if ( v111->max_length <= 1 )
    goto LABEL_153;
  v111->m_Items[1] = (Il2CppObject *)v93;
  sub_B5D560((BattleServantConfConponent_o *)&v111->m_Items[1], v93, v112, v113, v114, v115, v116, v117);
  spendNum = this->fields.recvApNum;
  userEntity = j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
  v124 = (System_Int32_array **)userEntity;
  if ( userEntity )
  {
    userEntity = sub_B5D684(userEntity, v111->obj.klass->_1.element_class);
    if ( !userEntity )
      goto LABEL_155;
  }
  if ( v111->max_length <= 2 )
    goto LABEL_153;
  v111->m_Items[2] = (Il2CppObject *)v124;
  sub_B5D560((BattleServantConfConponent_o *)&v111->m_Items[2], v124, v118, v119, v120, v121, v122, v123);
  usrCurrentRp = this->fields.usrCurrentAp;
  userEntity = j_il2cpp_value_box_0(int_TypeInfo, &usrCurrentRp);
  v131 = (System_Int32_array **)userEntity;
  if ( userEntity )
  {
    userEntity = sub_B5D684(userEntity, v111->obj.klass->_1.element_class);
    if ( !userEntity )
      goto LABEL_155;
  }
  if ( v111->max_length <= 3 )
    goto LABEL_153;
  v111->m_Items[3] = (Il2CppObject *)v131;
  sub_B5D560((BattleServantConfConponent_o *)&v111->m_Items[3], v131, v125, v126, v127, v128, v129, v130);
  usrMaxRp = this->fields.usrMaxAp;
  userEntity = j_il2cpp_value_box_0(int_TypeInfo, &usrMaxRp);
  v138 = (System_Int32_array **)userEntity;
  if ( userEntity )
  {
    userEntity = sub_B5D684(userEntity, v111->obj.klass->_1.element_class);
    if ( !userEntity )
      goto LABEL_155;
  }
  if ( v111->max_length <= 4 )
    goto LABEL_153;
  v111->m_Items[4] = (Il2CppObject *)v138;
  sub_B5D560((BattleServantConfConponent_o *)&v111->m_Items[4], v138, v132, v133, v134, v135, v136, v137);
  recvSum = this->fields.recvSum;
  userEntity = j_il2cpp_value_box_0(int_TypeInfo, &recvSum);
  v145 = (System_Int32_array **)userEntity;
  if ( userEntity )
  {
    userEntity = sub_B5D684(userEntity, v111->obj.klass->_1.element_class);
    if ( !userEntity )
      goto LABEL_155;
  }
  if ( v111->max_length <= 5 )
    goto LABEL_153;
  v111->m_Items[5] = (Il2CppObject *)v145;
  sub_B5D560((BattleServantConfConponent_o *)&v111->m_Items[5], v145, v139, v140, v141, v142, v143, v144);
  v274 = this->fields.usrMaxAp;
  userEntity = j_il2cpp_value_box_0(int_TypeInfo, &v274);
  v152 = (System_Int32_array **)userEntity;
  if ( userEntity )
  {
    userEntity = sub_B5D684(userEntity, v111->obj.klass->_1.element_class);
    if ( !userEntity )
    {
LABEL_155:
      v272 = sub_B5D6BC(userEntity);
      sub_B5D668(v272, 0LL);
    }
  }
  if ( v111->max_length <= 6 )
    goto LABEL_153;
  v111->m_Items[6] = (Il2CppObject *)v152;
  v153 = (BattleServantConfConponent_o *)&v111->m_Items[6];
LABEL_125:
  sub_B5D560(v153, v152, v146, v147, v148, v149, v150, v151);
  v203 = System_String__Format_44656512(v104, v111, 0LL);
  userEntity = (__int64)this->fields.userEntity;
  if ( !userEntity )
    goto LABEL_154;
  if ( UserGameEntity__getAct((UserGameEntity_o *)userEntity, 0LL) < this->fields.usrMaxAp )
  {
    if ( this->fields.currentType == 2 )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v255 = LocalizationManager__Get((System_String_o *)StringLiteral_1759/*"AP_RECOVER_STONEPAY_WARNING_MSG"*/, 0LL);
      v256 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v257 = (CommonConfirmDialog_ClickDelegate_o *)sub_B5D694(CommonConfirmDialog_ClickDelegate_TypeInfo);
      CommonConfirmDialog_ClickDelegate___ctor(
        v257,
        (Il2CppObject *)this,
        Method_RecoverItemComponent_spendItemDlg__,
        0LL);
      userEntity = (__int64)BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      }
      if ( v256 )
      {
        CommonUI__OpenConfirmDecideDlgAddMsgFrame(
          v256,
          v90,
          v203,
          v255,
          v98,
          v99,
          v257,
          BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
          0.0,
          86.0,
          0,
          1,
          0,
          240,
          0,
          0LL);
        return;
      }
LABEL_154:
      sub_B5D69C(userEntity, v88);
    }
    if ( this->fields.isAddAp || this->fields.apRcvRate != 100 || this->fields.spendNum >= 2 )
    {
      v266 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      targetId = this->fields.targetId;
      needAp = this->fields.needAp;
      v269 = (CommonUI_o *)v266;
      v270 = (System_Action_bool__int__o *)sub_B5D694(System_Action_bool__int__TypeInfo);
      System_Action_bool__int____ctor(
        v270,
        (Il2CppObject *)this,
        Method_RecoverItemComponent_CloseApRecovDlg__,
        (const MethodInfo_2597088 *)Method_System_Action_bool__int___ctor__);
      if ( !v269 )
        goto LABEL_154;
      CommonUI__OpenApRecoverConfirmDlg(v269, targetId, needAp, v270, 0LL);
      return;
    }
LABEL_88:
    v204 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v205 = (CommonConfirmDialog_ClickDelegate_o *)sub_B5D694(CommonConfirmDialog_ClickDelegate_TypeInfo);
    CommonConfirmDialog_ClickDelegate___ctor(
      v205,
      (Il2CppObject *)this,
      Method_RecoverItemComponent_spendItemDlg__,
      0LL);
    userEntity = (__int64)BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    }
    if ( v204 )
    {
      CommonUI__OpenConfirmDecideDlg(
        v204,
        v90,
        v203,
        v98,
        v99,
        v205,
        BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
        0.0,
        15.0,
        0,
        1,
        0,
        240,
        0,
        1,
        0,
        0LL);
      return;
    }
    goto LABEL_154;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v258 = LocalizationManager__Get((System_String_o *)StringLiteral_1751/*"AP_FULL_MSG"*/, 0LL);
  v259 = System_String__Format(v258, (Il2CppObject *)mText, 0LL);
  v260 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v261 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v261, (Il2CppObject *)this, Method_RecoverItemComponent_closeNotificationDlg__, 0LL);
  if ( !v260 )
    goto LABEL_154;
  CommonUI__OpenNotificationDialog(
    v260,
    (System_String_o *)StringLiteral_1/*""*/,
    v259,
    v261,
    -1,
    0,
    0,
    0,
    1,
    0,
    0,
    0,
    0LL,
    0LL);
}


void __fastcall RecoverItemComponent___AttachStoneCountRefreshComponent_b__38_0(
        RecoverItemComponent_o *this,
        int32_t stoneCount,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UILabel_o *currentNumLb; // x19
  Il2CppObject *v10; // x0
  System_String_o *v11; // x0
  __int64 v12; // x1
  int32_t v13; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42EC50E & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, stoneCount, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_23838/*"{0:N0}"*/, v6, v7, v8);
    byte_42EC50E = 1;
  }
  currentNumLb = this->fields.currentNumLb;
  v13 = stoneCount;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v13);
  v11 = System_String__Format((System_String_o *)StringLiteral_23838/*"{0:N0}"*/, v10, 0LL);
  if ( !currentNumLb )
    sub_B5D69C(v11, v12);
  UILabel__set_text(currentNumLb, v11, 0LL);
}


void __fastcall RecoverItemComponent__add_callbackFunc(
        RecoverItemComponent_o *this,
        RecoverItemComponent_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct RecoverItemComponent_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct RecoverItemComponent_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  RecoverItemComponent_o *v12; // x0
  RecoverItemComponent_CallbackFunc_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42EC503 & 1) == 0 )
  {
    sub_B5D5C4(&RecoverItemComponent_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EC503 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Combine(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (RecoverItemComponent_CallbackFunc_c *)v9->klass != RecoverItemComponent_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_B5D990(v9);
  RecoverItemComponent__remove_callbackFunc(v12, v13, v14);
}


void __fastcall RecoverItemComponent__closeNotificationDlg(RecoverItemComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_42EC50C & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, (_DWORD)method, v2, v3);
    byte_42EC50C = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v5);
  CommonUI__CloseNotificationDialog(Instance, 0LL);
}


void __fastcall RecoverItemComponent__remove_callbackFunc(
        RecoverItemComponent_o *this,
        RecoverItemComponent_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct RecoverItemComponent_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct RecoverItemComponent_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  RecoverItemComponent_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_42EC504 & 1) == 0 )
  {
    sub_B5D5C4(&RecoverItemComponent_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EC504 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Remove(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (RecoverItemComponent_CallbackFunc_c *)v9->klass != RecoverItemComponent_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_B5D990(v9);
  RecoverItemComponent__AttachStoneCountRefreshComponent(v12, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecoverItemComponent__setAPRecvItemInfo(
        RecoverItemComponent_o *this,
        RecoverEntity_o *data,
        int32_t needAp,
        RecoverDlgComponent_o *dlg,
        RecoverItemComponent_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  RecoverItemComponent_o *v12; // x19
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  int v52; // w1
  int v53; // w2
  __int64 v54; // x3
  int v55; // w1
  int v56; // w2
  __int64 v57; // x3
  int v58; // w1
  int v59; // w2
  __int64 v60; // x3
  int v61; // w1
  int v62; // w2
  __int64 v63; // x3
  int v64; // w1
  int v65; // w2
  __int64 v66; // x3
  int v67; // w1
  int v68; // w2
  __int64 v69; // x3
  int v70; // w1
  int v71; // w2
  __int64 v72; // x3
  int32_t targetId; // w8
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  System_Int32_array **SelfUserGame; // x0
  RecoverItemComponent_o **p_userEntity; // x23
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  struct UserGameEntity_o *userEntity; // x8
  int32_t actMax; // w8
  int32_t *p_spendNum; // x20
  UILabel_o *currentInfoLb; // x24
  UILabel_o *spendInfoLb; // x24
  int32_t currentType; // w8
  RecoverItemComponent_o *v94; // x21
  RecoverItemComponent_o *v95; // x22
  int recvTarget; // w24
  UILabel_o *v97; // x21
  Il2CppObject *v98; // x0
  UILabel_o *v99; // x21
  const MethodInfo *v100; // x1
  System_String_o *v101; // x20
  Il2CppObject *v102; // x0
  System_String_o *v103; // x0
  UILabel_o *v104; // x20
  Il2CppObject *v105; // x21
  System_String_o *v106; // x22
  Il2CppObject *v107; // x23
  Il2CppObject *v108; // x0
  bool v109; // cc
  int v110; // w8
  const MethodInfo *v111; // x1
  ItemEntity_o *RecvItemData; // x0
  ItemEntity_o *v113; // x24
  int32_t num; // w27
  UILabel_o *v115; // x22
  UILabel_o *v116; // x22
  WarEntity_o *v117; // x0
  CommandSpellEntity_o *v118; // x22
  int32_t type; // w8
  struct UnityEngine_GameObject_o *cmdSpellBg; // x27
  float v121; // s1
  double v122; // d1
  System_String_o *v123; // x23
  Il2CppObject *v124; // x0
  System_String_o *v125; // x0
  UILabel_o *itemDetailLb; // x23
  Il2CppObject *v127; // x24
  System_String_o *v128; // x25
  Il2CppObject *v129; // x26
  Il2CppObject *v130; // x0
  int monitor; // w22
  int32_t v132; // w0
  int32_t v133; // w8
  BalanceConfig_c *v134; // x0
  int usrMaxAp; // s2
  float v136; // s2
  float v137; // s0
  double v138; // d1
  int32_t v139; // w0
  int32_t v140; // w0
  int32_t v141; // w8
  int32_t v142; // w9
  System_String_o *v143; // x23
  Il2CppObject *v144; // x0
  System_String_o *v145; // x0
  UILabel_o *v146; // x23
  Il2CppObject *v147; // x25
  System_String_o *v148; // x26
  Il2CppObject *v149; // x27
  Il2CppObject *v150; // x0
  int value; // w23
  int32_t v152; // w0
  System_String_o *v153; // x21
  Il2CppObject *v154; // x0
  System_String_o *v155; // x0
  UILabel_o *v156; // x21
  Il2CppObject *v157; // x23
  System_String_o *v158; // x24
  Il2CppObject *v159; // x0
  UILabel_o *v160; // x21
  Il2CppObject *v161; // x0
  UILabel_o *v162; // x21
  int v163; // w8
  System_String_o *v164; // x21
  Il2CppObject *v165; // x0
  System_String_o *v166; // x0
  UILabel_o *v167; // x21
  Il2CppObject *v168; // x22
  System_String_o *v169; // x23
  Il2CppObject *v170; // x0
  UILabel_o *currentNumLb; // x21
  UILabel_o *spendNumLb; // x21
  char v173; // w9
  __int64 v174; // x0
  int32_t v175; // [xsp+0h] [xbp-70h]
  int32_t v176; // [xsp+4h] [xbp-6Ch] BYREF
  int32_t recvApNum; // [xsp+8h] [xbp-68h] BYREF
  int32_t apRcvRate; // [xsp+Ch] [xbp-64h] BYREF
  int32_t spendNum; // [xsp+10h] [xbp-60h] BYREF
  int32_t CommandSpell; // [xsp+14h] [xbp-5Ch] BYREF
  UserItemEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF

  v12 = this;
  if ( (byte_42EC505 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)data, needAp, dlg);
    sub_B5D5C4(&Method_DataManager_GetMasterData_CommandSpellMaster___, v13, v14, v15);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ItemMaster___, v16, v17, v18);
    sub_B5D5C4(&Method_DataManager_GetMasterData_StoneShopMaster___, v19, v20, v21);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserItemMaster___, v22, v23, v24);
    sub_B5D5C4(&Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__GetEntity__, v25, v26, v27);
    sub_B5D5C4(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__, v28, v29, v30);
    sub_B5D5C4(&int_TypeInfo, v31, v32, v33);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v34, v35, v36);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v37, v38, v39);
    sub_B5D5C4(&StringLiteral_3181/*"CMDSPELL_CURRENT_NUM"*/, v40, v41, v42);
    sub_B5D5C4(&StringLiteral_1679/*"ADD_RECOVER_CMDSPELL_TXT"*/, v43, v44, v45);
    sub_B5D5C4(&StringLiteral_3183/*"CMDSPELL_SPEND_NUM_TXT"*/, v46, v47, v48);
    sub_B5D5C4(&StringLiteral_23838/*"{0:N0}"*/, v49, v50, v51);
    sub_B5D5C4(&StringLiteral_755/*"-"*/, v52, v53, v54);
    sub_B5D5C4(&StringLiteral_14869/*"UNIT_INFO"*/, v55, v56, v57);
    sub_B5D5C4(&StringLiteral_12443/*"SPEND_NUM_TXT"*/, v58, v59, v60);
    sub_B5D5C4(&StringLiteral_3519/*"CURRENT_NUM_TXT"*/, v61, v62, v63);
    sub_B5D5C4(&StringLiteral_1680/*"ADD_RECOVER_NUM_TXT"*/, v64, v65, v66);
    sub_B5D5C4(&StringLiteral_1756/*"AP_RECOVER_NUM_TXT"*/, v67, v68, v69);
    this = (RecoverItemComponent_o *)sub_B5D5C4(&StringLiteral_3182/*"CMDSPELL_CURRENT_NUM_TXT"*/, v70, v71, v72);
    byte_42EC505 = 1;
  }
  entity = 0LL;
  CommandSpell = 0;
  if ( !data )
    goto LABEL_128;
  v12->fields.currentType = data->fields.recoverType;
  v12->fields.recvTarget = data->fields.target;
  targetId = data->fields.targetId;
  v12->fields.isEnableSelect = 0;
  v12->fields.targetId = targetId;
  v12->fields.dialog = dlg;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v12->fields.dialog,
    (System_Int32_array **)dlg,
    *(System_String_array ***)&needAp,
    (System_String_array **)dlg,
    (System_Boolean_array **)callback,
    (System_Int32_array **)method,
    v6,
    v7);
  v12->fields.callbackFunc = callback;
  v12->fields.needAp = needAp;
  *(_WORD *)&v12->fields.isAp = 1;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v12->fields.callbackFunc,
    (System_Int32_array **)callback,
    v74,
    v75,
    v76,
    v77,
    v78,
    v79);
  this = (RecoverItemComponent_o *)v12->fields.maskImg;
  if ( !this )
    goto LABEL_128;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  SelfUserGame = (System_Int32_array **)UserGameMaster__getSelfUserGame(0LL);
  v12->fields.userEntity = (struct UserGameEntity_o *)SelfUserGame;
  p_userEntity = (RecoverItemComponent_o **)&v12->fields.userEntity;
  sub_B5D560((BattleServantConfConponent_o *)&v12->fields.userEntity, SelfUserGame, v82, v83, v84, v85, v86, v87);
  this = (RecoverItemComponent_o *)v12->fields.userEntity;
  if ( !this )
    goto LABEL_128;
  this = (RecoverItemComponent_o *)UserGameEntity__getAct((UserGameEntity_o *)this, 0LL);
  userEntity = v12->fields.userEntity;
  v12->fields.usrCurrentAp = (int)this;
  if ( !userEntity )
    goto LABEL_128;
  actMax = userEntity->fields.actMax;
  v12->fields.spendNum = 1;
  p_spendNum = &v12->fields.spendNum;
  this = (RecoverItemComponent_o *)v12->fields.itemNameLb;
  v12->fields.usrMaxAp = actMax;
  v12->fields.recvApNum = actMax;
  v12->fields.apRcvRate = 100;
  if ( !this )
    goto LABEL_128;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_755/*"-"*/, 0LL);
  this = (RecoverItemComponent_o *)v12->fields.currentNumLb;
  if ( !this )
    goto LABEL_128;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_755/*"-"*/, 0LL);
  this = (RecoverItemComponent_o *)v12->fields.spendNumLb;
  if ( !this )
    goto LABEL_128;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_755/*"-"*/, 0LL);
  this = (RecoverItemComponent_o *)v12->fields.itemDetailLb;
  if ( !this )
    goto LABEL_128;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_755/*"-"*/, 0LL);
  currentInfoLb = v12->fields.currentInfoLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3519/*"CURRENT_NUM_TXT"*/, 0LL);
  if ( !currentInfoLb )
    goto LABEL_128;
  UILabel__set_text(currentInfoLb, (System_String_o *)this, 0LL);
  spendInfoLb = v12->fields.spendInfoLb;
  this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12443/*"SPEND_NUM_TXT"*/, 0LL);
  if ( !spendInfoLb )
    goto LABEL_128;
  UILabel__set_text(spendInfoLb, (System_String_o *)this, 0LL);
  currentType = v12->fields.currentType;
  if ( currentType == 1 )
  {
    this = (RecoverItemComponent_o *)v12->fields.itemIconInfo;
    if ( !this )
      goto LABEL_128;
    this = (RecoverItemComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_128;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    this = (RecoverItemComponent_o *)v12->fields.cmdSpellBg;
    if ( !this )
      goto LABEL_128;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    v115 = v12->fields.currentInfoLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3182/*"CMDSPELL_CURRENT_NUM_TXT"*/, 0LL);
    if ( !v115 )
      goto LABEL_128;
    UILabel__set_text(v115, (System_String_o *)this, 0LL);
    v116 = v12->fields.spendInfoLb;
    this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3183/*"CMDSPELL_SPEND_NUM_TXT"*/, 0LL);
    if ( !v116 )
      goto LABEL_128;
    UILabel__set_text(v116, (System_String_o *)this, 0LL);
    this = (RecoverItemComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_128;
    this = (RecoverItemComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                       (DataManager_o *)this,
                                       (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CommandSpellMaster___);
    if ( !this )
      goto LABEL_128;
    v117 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)this,
             v12->fields.targetId,
             (const MethodInfo_23FAE10 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
    if ( !v117 )
      goto LABEL_127;
    v118 = (CommandSpellEntity_o *)v117;
    this = (RecoverItemComponent_o *)v12->fields.cmdSpellIcon;
    if ( !this )
      goto LABEL_128;
    CommandSpellIconComponent__SetData((CommandSpellIconComponent_o *)this, v12->fields.userEntity, 0LL);
    this = (RecoverItemComponent_o *)v12->fields.itemNameLb;
    if ( !this )
      goto LABEL_128;
    UILabel__set_text((UILabel_o *)this, v118->fields.name, 0LL);
    this = *p_userEntity;
    if ( !*p_userEntity )
      goto LABEL_128;
    CommandSpell = UserGameEntity__getCommandSpell((UserGameEntity_o *)this, 0LL);
    *p_spendNum = v118->fields.consume;
    this = (RecoverItemComponent_o *)CommandSpellEntity__getValues(v118, 0LL);
    if ( !this )
      goto LABEL_128;
    if ( LODWORD(this->fields.itemIconInfo) )
    {
      type = v118->fields.type;
      cmdSpellBg = this->fields.cmdSpellBg;
      if ( type == 3 )
      {
        if ( !cmdSpellBg )
          goto LABEL_128;
        if ( !LODWORD(cmdSpellBg[1].klass) )
          goto LABEL_129;
        v121 = (float)((float)SLODWORD(cmdSpellBg[1].monitor) / 1000.0) * 100.0;
        v122 = v121 == INFINITY ? -v121 : v121;
        v12->fields.apRcvRate = (int)v122;
        if ( !LODWORD(cmdSpellBg[1].klass) )
          goto LABEL_129;
        v12->fields.recvApNum = UnityEngine_Mathf__CeilToInt(
                                  (float)((float)SLODWORD(cmdSpellBg[1].monitor) / 1000.0) * (float)v12->fields.usrMaxAp,
                                  0LL);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v123 = LocalizationManager__Get((System_String_o *)StringLiteral_3181/*"CMDSPELL_CURRENT_NUM"*/, 0LL);
        spendNum = v12->fields.spendNum;
        v124 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
        v125 = System_String__Format(v123, v124, 0LL);
        itemDetailLb = v12->fields.itemDetailLb;
        v127 = (Il2CppObject *)v125;
        v128 = LocalizationManager__Get((System_String_o *)StringLiteral_1756/*"AP_RECOVER_NUM_TXT"*/, 0LL);
        apRcvRate = v12->fields.apRcvRate;
        v129 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &apRcvRate);
        recvApNum = v12->fields.recvApNum;
        v130 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &recvApNum);
        this = (RecoverItemComponent_o *)System_String__Format_44578852(v128, v127, v129, v130, 0LL);
        if ( !itemDetailLb )
          goto LABEL_128;
        UILabel__set_text(itemDetailLb, (System_String_o *)this, 0LL);
        type = v118->fields.type;
      }
      if ( type != 4 )
      {
LABEL_120:
        currentNumLb = v12->fields.currentNumLb;
        this = (RecoverItemComponent_o *)System_Int32__ToString((int32_t)&CommandSpell, 0LL);
        if ( currentNumLb )
        {
          UILabel__set_text(currentNumLb, (System_String_o *)this, 0LL);
          spendNumLb = v12->fields.spendNumLb;
          this = (RecoverItemComponent_o *)System_Int32__ToString((int)v12 + 120, 0LL);
          if ( spendNumLb )
          {
            UILabel__set_text(spendNumLb, (System_String_o *)this, 0LL);
            v109 = CommandSpell < v12->fields.spendNum;
            v110 = v12->fields.recvApNum + v12->fields.usrCurrentAp;
            goto LABEL_123;
          }
        }
        goto LABEL_128;
      }
      if ( !cmdSpellBg )
        goto LABEL_128;
      if ( LODWORD(cmdSpellBg[1].klass) )
      {
        monitor = (int)cmdSpellBg[1].monitor;
        if ( needAp < 1 )
        {
          v132 = *p_spendNum;
        }
        else
        {
          v132 = UnityEngine_Mathf__CeilToInt(
                   fmaxf((float)(needAp - v12->fields.usrCurrentAp) / (float)monitor, 1.0),
                   0LL);
          v12->fields.spendNum = v132;
        }
        v12->fields.recvApNum = v132 * monitor;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v164 = LocalizationManager__Get((System_String_o *)StringLiteral_3181/*"CMDSPELL_CURRENT_NUM"*/, 0LL);
        spendNum = v12->fields.spendNum;
        v165 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
        v166 = System_String__Format(v164, v165, 0LL);
        v167 = v12->fields.itemDetailLb;
        v168 = (Il2CppObject *)v166;
        v169 = LocalizationManager__Get((System_String_o *)StringLiteral_1679/*"ADD_RECOVER_CMDSPELL_TXT"*/, 0LL);
        apRcvRate = v12->fields.recvApNum;
        v170 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &apRcvRate);
        this = (RecoverItemComponent_o *)System_String__Format_44573324(v169, v168, v170, 0LL);
        if ( !v167 )
          goto LABEL_128;
        UILabel__set_text(v167, (System_String_o *)this, 0LL);
        v12->fields.isAddAp = 1;
        goto LABEL_120;
      }
    }
LABEL_129:
    v174 = sub_B5D6C8(this);
    sub_B5D668(v174, 0LL);
  }
  if ( currentType == 3 )
  {
    this = (RecoverItemComponent_o *)v12->fields.itemIconInfo;
    if ( this )
    {
      this = (RecoverItemComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        this = (RecoverItemComponent_o *)v12->fields.cmdSpellBg;
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
          RecvItemData = RecoverEntity__getRecvItemData(data, v111);
          if ( !RecvItemData )
            goto LABEL_127;
          v113 = RecvItemData;
          this = (RecoverItemComponent_o *)v12->fields.itemIconInfo;
          if ( this )
          {
            ItemIconComponent__SetItemImage_28497040(
              (ItemIconComponent_o *)this,
              v113->fields.imageId,
              v113->fields.bgImageId,
              v113->fields.type,
              0,
              0LL);
            this = (RecoverItemComponent_o *)v12->fields.itemIconInfo;
            if ( this )
            {
              this = (RecoverItemComponent_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
              if ( this )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
                this = (RecoverItemComponent_o *)v12->fields.itemNameLb;
                if ( this )
                {
                  UILabel__set_text((UILabel_o *)this, v113->fields.name, 0LL);
                  *p_spendNum = 1;
                  this = (RecoverItemComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( this )
                  {
                    this = (RecoverItemComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                       (DataManager_o *)this,
                                                       (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserItemMaster___);
                    if ( *p_userEntity )
                    {
                      if ( this )
                      {
                        this = (RecoverItemComponent_o *)UserItemMaster__TryGetEntity(
                                                           (UserItemMaster_o *)this,
                                                           &entity,
                                                           *(_QWORD *)&(*p_userEntity)->fields.m_CachedPtr,
                                                           v12->fields.targetId,
                                                           0LL);
                        if ( ((unsigned __int8)this & 1) != 0 )
                        {
                          if ( !entity )
                            goto LABEL_128;
                          num = entity->fields.num;
                        }
                        else
                        {
                          num = 0;
                        }
                        v133 = v113->fields.type;
                        if ( v133 == 3 )
                        {
                          v134 = BalanceConfig_TypeInfo;
                          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !BalanceConfig_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                            v134 = BalanceConfig_TypeInfo;
                          }
                          usrMaxAp = v12->fields.usrMaxAp;
                          v12->fields.spendNum = v134->static_fields->SpendApRecvItemNum;
                          v136 = (float)usrMaxAp;
                          v137 = (float)v113->fields.value / 1000.0;
                          v138 = -(float)(v137 * 100.0);
                          if ( (float)(v137 * 100.0) != INFINITY )
                            v138 = (float)(v137 * 100.0);
                          v12->fields.apRcvRate = (int)v138;
                          v139 = UnityEngine_Mathf__CeilToInt(v137 * v136, 0LL);
                          v12->fields.recvApNum = v139;
                          if ( needAp >= 1 )
                          {
                            v140 = UnityEngine_Mathf__CeilToInt(
                                     fmaxf((float)(needAp - v12->fields.usrCurrentAp) / (float)v139, 1.0),
                                     0LL);
                            v141 = v12->fields.apRcvRate;
                            v142 = v12->fields.recvApNum;
                            v12->fields.spendNum = v140;
                            v12->fields.apRcvRate = v141 * v140;
                            v12->fields.recvApNum = v142 * v140;
                          }
                          v175 = num;
                          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !LocalizationManager_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          }
                          v143 = LocalizationManager__Get((System_String_o *)StringLiteral_14869/*"UNIT_INFO"*/, 0LL);
                          spendNum = v12->fields.spendNum;
                          v144 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
                          v145 = System_String__Format(v143, v144, 0LL);
                          v146 = v12->fields.itemDetailLb;
                          v147 = (Il2CppObject *)v145;
                          v148 = LocalizationManager__Get((System_String_o *)StringLiteral_1756/*"AP_RECOVER_NUM_TXT"*/, 0LL);
                          apRcvRate = v12->fields.apRcvRate;
                          v149 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &apRcvRate);
                          recvApNum = v12->fields.recvApNum;
                          v150 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &recvApNum);
                          this = (RecoverItemComponent_o *)System_String__Format_44578852(v148, v147, v149, v150, 0LL);
                          if ( !v146 )
                            goto LABEL_128;
                          UILabel__set_text(v146, (System_String_o *)this, 0LL);
                          v133 = v113->fields.type;
                          num = v175;
                        }
                        if ( v133 == 4 )
                        {
                          value = v113->fields.value;
                          if ( needAp < 1 )
                          {
                            *p_spendNum = 1;
                          }
                          else
                          {
                            v152 = UnityEngine_Mathf__CeilToInt(
                                     fmaxf((float)(needAp - v12->fields.usrCurrentAp) / (float)value, 1.0),
                                     0LL);
                            v12->fields.spendNum = v152;
                            value *= v152;
                          }
                          v12->fields.recvApNum = value;
                          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !LocalizationManager_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          }
                          v153 = LocalizationManager__Get((System_String_o *)StringLiteral_14869/*"UNIT_INFO"*/, 0LL);
                          spendNum = v12->fields.spendNum;
                          v154 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
                          v155 = System_String__Format(v153, v154, 0LL);
                          v156 = v12->fields.itemDetailLb;
                          v157 = (Il2CppObject *)v155;
                          v158 = LocalizationManager__Get((System_String_o *)StringLiteral_1680/*"ADD_RECOVER_NUM_TXT"*/, 0LL);
                          apRcvRate = v12->fields.recvApNum;
                          v159 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &apRcvRate);
                          this = (RecoverItemComponent_o *)System_String__Format_44573324(v158, v157, v159, 0LL);
                          if ( !v156 )
                            goto LABEL_128;
                          UILabel__set_text(v156, (System_String_o *)this, 0LL);
                          v12->fields.isAddAp = 1;
                        }
                        v160 = v12->fields.currentNumLb;
                        spendNum = num;
                        v161 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
                        this = (RecoverItemComponent_o *)System_String__Format(
                                                           (System_String_o *)StringLiteral_23838/*"{0:N0}"*/,
                                                           v161,
                                                           0LL);
                        if ( v160 )
                        {
                          UILabel__set_text(v160, (System_String_o *)this, 0LL);
                          v162 = v12->fields.spendNumLb;
                          this = (RecoverItemComponent_o *)System_Int32__ToString((int)v12 + 120, 0LL);
                          if ( v162 )
                          {
                            UILabel__set_text(v162, (System_String_o *)this, 0LL);
                            v163 = v12->fields.recvApNum + v12->fields.usrCurrentAp;
                            v12->fields.isEnableSelect = num >= v12->fields.spendNum;
                            v12->fields.recvSum = v163;
                            v12->fields.targetId = data->fields.id;
                            goto LABEL_127;
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
LABEL_128:
    sub_B5D69C(this, data);
  }
  if ( currentType != 2 )
    goto LABEL_127;
  this = (RecoverItemComponent_o *)v12->fields.itemIconInfo;
  if ( !this )
    goto LABEL_128;
  this = (RecoverItemComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_128;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  this = (RecoverItemComponent_o *)v12->fields.cmdSpellBg;
  if ( !this )
    goto LABEL_128;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (RecoverItemComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_128;
  this = (RecoverItemComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)this,
                                     (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !this )
    goto LABEL_128;
  this = (RecoverItemComponent_o *)ItemMaster__GetEntityByType((ItemMaster_o *)this, 2, 0LL);
  if ( !this )
    goto LABEL_128;
  v94 = this;
  this = (RecoverItemComponent_o *)v12->fields.itemIconInfo;
  if ( !this )
    goto LABEL_128;
  ItemIconComponent__SetItemImage_28497040(
    (ItemIconComponent_o *)this,
    (int32_t)v94->fields.cmdSpellIcon,
    HIDWORD(v94->fields.cmdSpellIcon),
    (int32_t)v94->fields.itemNameLb,
    0,
    0LL);
  this = (RecoverItemComponent_o *)v12->fields.itemIconInfo;
  if ( !this )
    goto LABEL_128;
  this = (RecoverItemComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_128;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  this = (RecoverItemComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_128;
  this = (RecoverItemComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)this,
                                     (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_StoneShopMaster___);
  if ( !this )
    goto LABEL_128;
  this = (RecoverItemComponent_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                     (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                     v12->fields.targetId,
                                     (const MethodInfo_23FAE10 *)Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__GetEntity__);
  if ( !v12->fields.itemNameLb )
    goto LABEL_128;
  v95 = this;
  UILabel__set_text(v12->fields.itemNameLb, (System_String_o *)v94->fields.itemIconInfo, 0LL);
  if ( !*p_userEntity )
    goto LABEL_128;
  recvTarget = (*p_userEntity)->fields.recvTarget;
  if ( v95 )
    *p_spendNum = HIDWORD(v95->fields.cmdSpellIcon);
  v97 = v12->fields.currentNumLb;
  spendNum = recvTarget;
  v98 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
  this = (RecoverItemComponent_o *)System_String__Format((System_String_o *)StringLiteral_23838/*"{0:N0}"*/, v98, 0LL);
  if ( !v97 )
    goto LABEL_128;
  UILabel__set_text(v97, (System_String_o *)this, 0LL);
  v99 = v12->fields.spendNumLb;
  this = (RecoverItemComponent_o *)System_Int32__ToString((int)v12 + 120, 0LL);
  if ( !v99 )
    goto LABEL_128;
  UILabel__set_text(v99, (System_String_o *)this, 0LL);
  RecoverItemComponent__AttachStoneCountRefreshComponent(v12, v100);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v101 = LocalizationManager__Get((System_String_o *)StringLiteral_14869/*"UNIT_INFO"*/, 0LL);
  apRcvRate = v12->fields.spendNum;
  v102 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &apRcvRate);
  v103 = System_String__Format(v101, v102, 0LL);
  v104 = v12->fields.itemDetailLb;
  v105 = (Il2CppObject *)v103;
  v106 = LocalizationManager__Get((System_String_o *)StringLiteral_1756/*"AP_RECOVER_NUM_TXT"*/, 0LL);
  recvApNum = v12->fields.apRcvRate;
  v107 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &recvApNum);
  v176 = v12->fields.recvApNum;
  v108 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v176);
  this = (RecoverItemComponent_o *)System_String__Format_44578852(v106, v105, v107, v108, 0LL);
  if ( !v104 )
    goto LABEL_128;
  UILabel__set_text(v104, (System_String_o *)this, 0LL);
  v109 = recvTarget < v12->fields.spendNum;
  v110 = v12->fields.usrMaxAp + v12->fields.usrCurrentAp;
LABEL_123:
  v173 = !v109;
  v12->fields.isEnableSelect = v173;
  v12->fields.recvSum = v110;
LABEL_127:
  RecoverItemComponent__setEnableSelectItem(v12, (const MethodInfo *)data);
}


void __fastcall RecoverItemComponent__setEnableSelectItem(RecoverItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskImg; // x0

  if ( !this->fields.isEnableSelect )
  {
    maskImg = this->fields.maskImg;
    if ( !maskImg )
      sub_B5D69C(0LL, method);
    UnityEngine_GameObject__SetActive(maskImg, 1, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecoverItemComponent__setRPRecvItemInfo(
        RecoverItemComponent_o *this,
        RecoverEntity_o *data,
        int32_t needRp,
        RecoverDlgComponent_o *dlg,
        RecoverItemComponent_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  RecoverItemComponent_o *v12; // x19
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  int v52; // w1
  int v53; // w2
  __int64 v54; // x3
  int v55; // w1
  int v56; // w2
  __int64 v57; // x3
  int v58; // w1
  int v59; // w2
  __int64 v60; // x3
  int v61; // w1
  int v62; // w2
  __int64 v63; // x3
  int v64; // w1
  int v65; // w2
  __int64 v66; // x3
  int v67; // w1
  int v68; // w2
  __int64 v69; // x3
  int32_t targetId; // w8
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  System_Int32_array **SelfUserGame; // x0
  RecoverItemComponent_o **p_userEntity; // x23
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  BalanceConfig_c *v85; // x0
  int32_t UerGameRpMax; // w8
  int32_t *p_spendNum; // x20
  UILabel_o *currentInfoLb; // x24
  UILabel_o *spendInfoLb; // x24
  int32_t currentType; // w8
  RecoverItemComponent_o *v91; // x21
  RecoverItemComponent_o *v92; // x22
  int recvTarget; // w23
  UILabel_o *v94; // x21
  Il2CppObject *v95; // x0
  UILabel_o *v96; // x21
  const MethodInfo *v97; // x1
  System_String_o *v98; // x20
  Il2CppObject *v99; // x0
  System_String_o *v100; // x0
  UILabel_o *v101; // x20
  Il2CppObject *v102; // x21
  System_String_o *v103; // x22
  Il2CppObject *v104; // x0
  bool v105; // cc
  int v106; // w8
  const MethodInfo *v107; // x1
  ItemEntity_o *RecvItemData; // x0
  ItemEntity_o *v109; // x24
  int32_t num; // w26
  UILabel_o *v111; // x22
  UILabel_o *v112; // x22
  WarEntity_o *v113; // x0
  CommandSpellEntity_o *v114; // x22
  struct UnityEngine_GameObject_o *cmdSpellBg; // x8
  int monitor; // w22
  int32_t v117; // w0
  int value; // w23
  int32_t v119; // w0
  System_String_o *v120; // x21
  Il2CppObject *v121; // x0
  System_String_o *v122; // x0
  UILabel_o *v123; // x21
  Il2CppObject *v124; // x23
  System_String_o *v125; // x24
  Il2CppObject *v126; // x0
  UILabel_o *v127; // x21
  Il2CppObject *v128; // x0
  UILabel_o *v129; // x21
  int v130; // w8
  System_String_o *v131; // x21
  Il2CppObject *v132; // x0
  System_String_o *v133; // x0
  UILabel_o *itemDetailLb; // x21
  Il2CppObject *v135; // x22
  System_String_o *v136; // x23
  Il2CppObject *v137; // x0
  UILabel_o *currentNumLb; // x21
  UILabel_o *spendNumLb; // x21
  char v140; // w9
  __int64 v141; // x0
  int32_t v142; // [xsp+8h] [xbp-58h] BYREF
  int32_t recvRpNum; // [xsp+Ch] [xbp-54h] BYREF
  int32_t spendNum; // [xsp+10h] [xbp-50h] BYREF
  int32_t CommandSpell; // [xsp+14h] [xbp-4Ch] BYREF
  UserItemEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF

  v12 = this;
  if ( (byte_42EC506 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)data, needRp, dlg);
    sub_B5D5C4(&Method_DataManager_GetMasterData_CommandSpellMaster___, v13, v14, v15);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ItemMaster___, v16, v17, v18);
    sub_B5D5C4(&Method_DataManager_GetMasterData_StoneShopMaster___, v19, v20, v21);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserItemMaster___, v22, v23, v24);
    sub_B5D5C4(&Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__GetEntity__, v25, v26, v27);
    sub_B5D5C4(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__, v28, v29, v30);
    sub_B5D5C4(&int_TypeInfo, v31, v32, v33);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v34, v35, v36);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v37, v38, v39);
    sub_B5D5C4(&StringLiteral_3181/*"CMDSPELL_CURRENT_NUM"*/, v40, v41, v42);
    sub_B5D5C4(&StringLiteral_3183/*"CMDSPELL_SPEND_NUM_TXT"*/, v43, v44, v45);
    sub_B5D5C4(&StringLiteral_23838/*"{0:N0}"*/, v46, v47, v48);
    sub_B5D5C4(&StringLiteral_755/*"-"*/, v49, v50, v51);
    sub_B5D5C4(&StringLiteral_14869/*"UNIT_INFO"*/, v52, v53, v54);
    sub_B5D5C4(&StringLiteral_12443/*"SPEND_NUM_TXT"*/, v55, v56, v57);
    sub_B5D5C4(&StringLiteral_3519/*"CURRENT_NUM_TXT"*/, v58, v59, v60);
    sub_B5D5C4(&StringLiteral_11393/*"RP_RECOVER_CMDSPELL_TXT"*/, v61, v62, v63);
    sub_B5D5C4(&StringLiteral_11395/*"RP_RECOVER_NUM_TXT"*/, v64, v65, v66);
    this = (RecoverItemComponent_o *)sub_B5D5C4(&StringLiteral_3182/*"CMDSPELL_CURRENT_NUM_TXT"*/, v67, v68, v69);
    byte_42EC506 = 1;
  }
  entity = 0LL;
  CommandSpell = 0;
  if ( !data )
    goto LABEL_100;
  v12->fields.currentType = data->fields.recoverType;
  v12->fields.recvTarget = data->fields.target;
  targetId = data->fields.targetId;
  v12->fields.isEnableSelect = 0;
  v12->fields.targetId = targetId;
  v12->fields.dialog = dlg;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v12->fields.dialog,
    (System_Int32_array **)dlg,
    *(System_String_array ***)&needRp,
    (System_String_array **)dlg,
    (System_Boolean_array **)callback,
    (System_Int32_array **)method,
    v6,
    v7);
  v12->fields.callbackFunc = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v12->fields.callbackFunc,
    (System_Int32_array **)callback,
    v71,
    v72,
    v73,
    v74,
    v75,
    v76);
  this = (RecoverItemComponent_o *)v12->fields.maskImg;
  if ( !this )
    goto LABEL_100;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  SelfUserGame = (System_Int32_array **)UserGameMaster__getSelfUserGame(0LL);
  v12->fields.userEntity = (struct UserGameEntity_o *)SelfUserGame;
  p_userEntity = (RecoverItemComponent_o **)&v12->fields.userEntity;
  sub_B5D560((BattleServantConfConponent_o *)&v12->fields.userEntity, SelfUserGame, v79, v80, v81, v82, v83, v84);
  this = (RecoverItemComponent_o *)v12->fields.userEntity;
  if ( !this )
    goto LABEL_100;
  v12->fields.usrCurrentRp = UserGameEntity__getRp((UserGameEntity_o *)this, 0LL);
  v85 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v85 = BalanceConfig_TypeInfo;
  }
  UerGameRpMax = v85->static_fields->UerGameRpMax;
  v12->fields.spendNum = 1;
  p_spendNum = &v12->fields.spendNum;
  this = (RecoverItemComponent_o *)v12->fields.itemNameLb;
  v12->fields.isAp = 0;
  v12->fields.usrMaxRp = UerGameRpMax;
  v12->fields.recvRpNum = UerGameRpMax;
  if ( !this )
    goto LABEL_100;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_755/*"-"*/, 0LL);
  this = (RecoverItemComponent_o *)v12->fields.currentNumLb;
  if ( !this )
    goto LABEL_100;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_755/*"-"*/, 0LL);
  this = (RecoverItemComponent_o *)v12->fields.spendNumLb;
  if ( !this )
    goto LABEL_100;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_755/*"-"*/, 0LL);
  this = (RecoverItemComponent_o *)v12->fields.itemDetailLb;
  if ( !this )
    goto LABEL_100;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_755/*"-"*/, 0LL);
  currentInfoLb = v12->fields.currentInfoLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3519/*"CURRENT_NUM_TXT"*/, 0LL);
  if ( !currentInfoLb )
    goto LABEL_100;
  UILabel__set_text(currentInfoLb, (System_String_o *)this, 0LL);
  spendInfoLb = v12->fields.spendInfoLb;
  this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12443/*"SPEND_NUM_TXT"*/, 0LL);
  if ( !spendInfoLb )
    goto LABEL_100;
  UILabel__set_text(spendInfoLb, (System_String_o *)this, 0LL);
  currentType = v12->fields.currentType;
  if ( currentType == 1 )
  {
    this = (RecoverItemComponent_o *)v12->fields.itemIconInfo;
    if ( this )
    {
      this = (RecoverItemComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        this = (RecoverItemComponent_o *)v12->fields.cmdSpellBg;
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
          v111 = v12->fields.currentInfoLb;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3182/*"CMDSPELL_CURRENT_NUM_TXT"*/, 0LL);
          if ( v111 )
          {
            UILabel__set_text(v111, (System_String_o *)this, 0LL);
            v112 = v12->fields.spendInfoLb;
            this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3183/*"CMDSPELL_SPEND_NUM_TXT"*/, 0LL);
            if ( v112 )
            {
              UILabel__set_text(v112, (System_String_o *)this, 0LL);
              this = (RecoverItemComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( this )
              {
                this = (RecoverItemComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                   (DataManager_o *)this,
                                                   (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CommandSpellMaster___);
                if ( this )
                {
                  v113 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                           (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                           v12->fields.targetId,
                           (const MethodInfo_23FAE10 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
                  if ( !v113 )
                    goto LABEL_99;
                  v114 = (CommandSpellEntity_o *)v113;
                  this = (RecoverItemComponent_o *)v12->fields.cmdSpellIcon;
                  if ( this )
                  {
                    CommandSpellIconComponent__SetData((CommandSpellIconComponent_o *)this, v12->fields.userEntity, 0LL);
                    this = (RecoverItemComponent_o *)v12->fields.itemNameLb;
                    if ( this )
                    {
                      UILabel__set_text((UILabel_o *)this, v114->fields.name, 0LL);
                      this = *p_userEntity;
                      if ( *p_userEntity )
                      {
                        CommandSpell = UserGameEntity__getCommandSpell((UserGameEntity_o *)this, 0LL);
                        *p_spendNum = v114->fields.consume;
                        this = (RecoverItemComponent_o *)CommandSpellEntity__getValues(v114, 0LL);
                        if ( this )
                        {
                          if ( !LODWORD(this->fields.itemIconInfo) )
                            goto LABEL_101;
                          cmdSpellBg = this->fields.cmdSpellBg;
                          if ( !cmdSpellBg )
                            goto LABEL_100;
                          if ( !LODWORD(cmdSpellBg[1].klass) )
                          {
LABEL_101:
                            v141 = sub_B5D6C8(this);
                            sub_B5D668(v141, 0LL);
                          }
                          monitor = (int)cmdSpellBg[1].monitor;
                          if ( needRp < 1 )
                          {
                            v117 = *p_spendNum;
                          }
                          else
                          {
                            v117 = UnityEngine_Mathf__CeilToInt(
                                     fmaxf((float)(needRp - v12->fields.usrCurrentRp) / (float)monitor, 1.0),
                                     0LL);
                            v12->fields.spendNum = v117;
                          }
                          v12->fields.recvRpNum = v117 * monitor;
                          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !LocalizationManager_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          }
                          v131 = LocalizationManager__Get((System_String_o *)StringLiteral_3181/*"CMDSPELL_CURRENT_NUM"*/, 0LL);
                          spendNum = v12->fields.spendNum;
                          v132 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
                          v133 = System_String__Format(v131, v132, 0LL);
                          itemDetailLb = v12->fields.itemDetailLb;
                          v135 = (Il2CppObject *)v133;
                          v136 = LocalizationManager__Get((System_String_o *)StringLiteral_11393/*"RP_RECOVER_CMDSPELL_TXT"*/, 0LL);
                          recvRpNum = v12->fields.recvRpNum;
                          v137 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &recvRpNum);
                          this = (RecoverItemComponent_o *)System_String__Format_44573324(v136, v135, v137, 0LL);
                          if ( itemDetailLb )
                          {
                            UILabel__set_text(itemDetailLb, (System_String_o *)this, 0LL);
                            currentNumLb = v12->fields.currentNumLb;
                            this = (RecoverItemComponent_o *)System_Int32__ToString((int32_t)&CommandSpell, 0LL);
                            if ( currentNumLb )
                            {
                              UILabel__set_text(currentNumLb, (System_String_o *)this, 0LL);
                              spendNumLb = v12->fields.spendNumLb;
                              this = (RecoverItemComponent_o *)System_Int32__ToString((int)v12 + 120, 0LL);
                              if ( spendNumLb )
                              {
                                UILabel__set_text(spendNumLb, (System_String_o *)this, 0LL);
                                v105 = CommandSpell < v12->fields.spendNum;
                                v106 = v12->fields.recvRpNum + v12->fields.usrCurrentRp;
                                goto LABEL_95;
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
      }
    }
    goto LABEL_100;
  }
  if ( currentType == 3 )
  {
    this = (RecoverItemComponent_o *)v12->fields.itemIconInfo;
    if ( this )
    {
      this = (RecoverItemComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        this = (RecoverItemComponent_o *)v12->fields.cmdSpellBg;
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
          RecvItemData = RecoverEntity__getRecvItemData(data, v107);
          if ( !RecvItemData )
            goto LABEL_99;
          v109 = RecvItemData;
          this = (RecoverItemComponent_o *)v12->fields.itemIconInfo;
          if ( this )
          {
            ItemIconComponent__SetItemImage_28497040(
              (ItemIconComponent_o *)this,
              v109->fields.imageId,
              v109->fields.bgImageId,
              v109->fields.type,
              0,
              0LL);
            this = (RecoverItemComponent_o *)v12->fields.itemIconInfo;
            if ( this )
            {
              this = (RecoverItemComponent_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
              if ( this )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
                this = (RecoverItemComponent_o *)v12->fields.itemNameLb;
                if ( this )
                {
                  UILabel__set_text((UILabel_o *)this, v109->fields.name, 0LL);
                  this = (RecoverItemComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( this )
                  {
                    this = (RecoverItemComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                       (DataManager_o *)this,
                                                       (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserItemMaster___);
                    if ( *p_userEntity )
                    {
                      if ( this )
                      {
                        UserItemMaster__TryGetEntity(
                          (UserItemMaster_o *)this,
                          &entity,
                          *(_QWORD *)&(*p_userEntity)->fields.m_CachedPtr,
                          v12->fields.targetId,
                          0LL);
                        v12->fields.spendNum = 1;
                        if ( entity )
                          num = entity->fields.num;
                        else
                          num = 0;
                        value = v109->fields.value;
                        if ( needRp < 1 )
                        {
                          *p_spendNum = 1;
                        }
                        else
                        {
                          v119 = UnityEngine_Mathf__CeilToInt(
                                   fmaxf((float)(needRp - v12->fields.usrCurrentRp) / (float)value, 1.0),
                                   0LL);
                          v12->fields.spendNum = v119;
                          value *= v119;
                        }
                        v12->fields.recvRpNum = value;
                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        v120 = LocalizationManager__Get((System_String_o *)StringLiteral_14869/*"UNIT_INFO"*/, 0LL);
                        spendNum = v12->fields.spendNum;
                        v121 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
                        v122 = System_String__Format(v120, v121, 0LL);
                        v123 = v12->fields.itemDetailLb;
                        v124 = (Il2CppObject *)v122;
                        v125 = LocalizationManager__Get((System_String_o *)StringLiteral_11395/*"RP_RECOVER_NUM_TXT"*/, 0LL);
                        recvRpNum = v12->fields.recvRpNum;
                        v126 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &recvRpNum);
                        this = (RecoverItemComponent_o *)System_String__Format_44573324(v125, v124, v126, 0LL);
                        if ( v123 )
                        {
                          UILabel__set_text(v123, (System_String_o *)this, 0LL);
                          v127 = v12->fields.currentNumLb;
                          v142 = num;
                          v128 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v142);
                          this = (RecoverItemComponent_o *)System_String__Format(
                                                             (System_String_o *)StringLiteral_23838/*"{0:N0}"*/,
                                                             v128,
                                                             0LL);
                          if ( v127 )
                          {
                            UILabel__set_text(v127, (System_String_o *)this, 0LL);
                            v129 = v12->fields.spendNumLb;
                            this = (RecoverItemComponent_o *)System_Int32__ToString((int)v12 + 120, 0LL);
                            if ( v129 )
                            {
                              UILabel__set_text(v129, (System_String_o *)this, 0LL);
                              v130 = v12->fields.recvRpNum + v12->fields.usrCurrentRp;
                              v12->fields.isEnableSelect = num >= v12->fields.spendNum;
                              v12->fields.recvSum = v130;
                              v12->fields.targetId = data->fields.id;
                              goto LABEL_99;
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
    }
    goto LABEL_100;
  }
  if ( currentType != 2 )
    goto LABEL_99;
  this = (RecoverItemComponent_o *)v12->fields.itemIconInfo;
  if ( !this )
    goto LABEL_100;
  this = (RecoverItemComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_100;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  this = (RecoverItemComponent_o *)v12->fields.cmdSpellBg;
  if ( !this )
    goto LABEL_100;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (RecoverItemComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_100;
  this = (RecoverItemComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)this,
                                     (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !this )
    goto LABEL_100;
  this = (RecoverItemComponent_o *)ItemMaster__GetEntityByType((ItemMaster_o *)this, 2, 0LL);
  if ( !this )
    goto LABEL_100;
  v91 = this;
  this = (RecoverItemComponent_o *)v12->fields.itemIconInfo;
  if ( !this )
    goto LABEL_100;
  ItemIconComponent__SetItemImage_28497040(
    (ItemIconComponent_o *)this,
    (int32_t)v91->fields.cmdSpellIcon,
    HIDWORD(v91->fields.cmdSpellIcon),
    (int32_t)v91->fields.itemNameLb,
    0,
    0LL);
  this = (RecoverItemComponent_o *)v12->fields.itemIconInfo;
  if ( !this )
    goto LABEL_100;
  this = (RecoverItemComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_100;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  this = (RecoverItemComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_100;
  this = (RecoverItemComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)this,
                                     (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_StoneShopMaster___);
  if ( !this )
    goto LABEL_100;
  this = (RecoverItemComponent_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                     (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                     v12->fields.targetId,
                                     (const MethodInfo_23FAE10 *)Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__GetEntity__);
  if ( !v12->fields.itemNameLb )
    goto LABEL_100;
  v92 = this;
  UILabel__set_text(v12->fields.itemNameLb, (System_String_o *)v91->fields.itemIconInfo, 0LL);
  if ( !*p_userEntity )
    goto LABEL_100;
  recvTarget = (*p_userEntity)->fields.recvTarget;
  if ( v92 )
    *p_spendNum = HIDWORD(v92->fields.cmdSpellIcon);
  v94 = v12->fields.currentNumLb;
  spendNum = recvTarget;
  v95 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
  this = (RecoverItemComponent_o *)System_String__Format((System_String_o *)StringLiteral_23838/*"{0:N0}"*/, v95, 0LL);
  if ( !v94 )
    goto LABEL_100;
  UILabel__set_text(v94, (System_String_o *)this, 0LL);
  v96 = v12->fields.spendNumLb;
  this = (RecoverItemComponent_o *)System_Int32__ToString((int)v12 + 120, 0LL);
  if ( !v96 )
    goto LABEL_100;
  UILabel__set_text(v96, (System_String_o *)this, 0LL);
  RecoverItemComponent__AttachStoneCountRefreshComponent(v12, v97);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v98 = LocalizationManager__Get((System_String_o *)StringLiteral_14869/*"UNIT_INFO"*/, 0LL);
  recvRpNum = v12->fields.spendNum;
  v99 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &recvRpNum);
  v100 = System_String__Format(v98, v99, 0LL);
  v101 = v12->fields.itemDetailLb;
  v102 = (Il2CppObject *)v100;
  v103 = LocalizationManager__Get((System_String_o *)StringLiteral_11395/*"RP_RECOVER_NUM_TXT"*/, 0LL);
  v142 = v12->fields.recvRpNum;
  v104 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v142);
  this = (RecoverItemComponent_o *)System_String__Format_44573324(v103, v102, v104, 0LL);
  if ( !v101 )
LABEL_100:
    sub_B5D69C(this, data);
  UILabel__set_text(v101, (System_String_o *)this, 0LL);
  v105 = recvTarget < v12->fields.spendNum;
  v106 = v12->fields.recvRpNum + v12->fields.usrCurrentRp;
LABEL_95:
  v140 = !v105;
  v12->fields.isEnableSelect = v140;
  v12->fields.recvSum = v106;
LABEL_99:
  RecoverItemComponent__setEnableSelectItem(v12, (const MethodInfo *)data);
}


void __fastcall RecoverItemComponent__setRequestInfo(RecoverItemComponent_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
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
  DataManager_o *Instance; // x0
  __int64 v37; // x1
  int v38; // w2
  __int64 v39; // x3
  System_Collections_Generic_List_string__c *klass; // x8
  RecoverItemComponent_CallbackFunc_o *callbackFunc; // x20
  CommonUI_o *v42; // x19
  System_String_o *v43; // x20
  RecoverItemComponent___c_c *v44; // x8
  struct RecoverItemComponent___c_StaticFields *static_fields; // x9
  System_Action_o *_9__43_0; // x22
  System_String_o *v47; // x21
  Il2CppObject *v48; // x23
  struct RecoverItemComponent___c_StaticFields *v49; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7

  if ( (byte_42EC50B & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMaster___, v9, v10, v11);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16, v17);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v18, v19, v20);
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_RecoverItemComponent___c__setRequestInfo_b__43_0__, v24, v25, v26);
    sub_B5D5C4(&RecoverItemComponent___c_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_11396/*"RP_UNRECOVERABLE_MESSAGE"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_1/*""*/, v33, v34, v35);
    byte_42EC50B = 1;
  }
  if ( this->fields.recvTarget != 2 )
    goto LABEL_16;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    Instance,
    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMaster___);
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_42E4B1E )
  {
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v37, v38, v39);
    byte_42E4B1E = 1;
  }
  Instance = (DataManager_o *)TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    Instance = (DataManager_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = Instance[1].fields.saveNameList->klass;
  if ( !klass || (Instance = *(DataManager_o **)&klass->_2.instance_size) == 0LL )
LABEL_32:
    sub_B5D69C(Instance, v37);
  if ( !ScrPlayerStatus__IsBPActive((ScrPlayerStatus_o *)Instance, 0LL) )
  {
    v42 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11396/*"RP_UNRECOVERABLE_MESSAGE"*/, 0LL);
    v43 = (System_String_o *)Instance;
    v44 = RecoverItemComponent___c_TypeInfo;
    if ( (BYTE3(RecoverItemComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !RecoverItemComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(RecoverItemComponent___c_TypeInfo);
      v44 = RecoverItemComponent___c_TypeInfo;
    }
    static_fields = v44->static_fields;
    _9__43_0 = static_fields->__9__43_0;
    v47 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !_9__43_0 )
    {
      if ( (BYTE3(v44->vtable._0_Equals.methodPtr) & 4) != 0 && !v44->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v44);
        static_fields = RecoverItemComponent___c_TypeInfo->static_fields;
      }
      v48 = (Il2CppObject *)static_fields->__9;
      _9__43_0 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(_9__43_0, v48, Method_RecoverItemComponent___c__setRequestInfo_b__43_0__, 0LL);
      v49 = RecoverItemComponent___c_TypeInfo->static_fields;
      v49->__9__43_0 = _9__43_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v49->__9__43_0,
        (System_Int32_array **)_9__43_0,
        v50,
        v51,
        v52,
        v53,
        v54,
        v55);
    }
    if ( v42 )
    {
      CommonUI__OpenNotificationDialog(v42, v47, v43, _9__43_0, -1, 0, 0, 0, 1, 0, 1, 0, 0LL, 0LL);
      return;
    }
    goto LABEL_32;
  }
LABEL_16:
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    this->fields.callbackFunc = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
    RecoverItemComponent_CallbackFunc__Invoke(
      callbackFunc,
      this->fields.currentType,
      this->fields.targetId,
      this->fields.spendNum,
      0LL);
  }
}


void __fastcall RecoverItemComponent__spendItemDlg(RecoverItemComponent_o *this, bool isRes, const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  CommonUI_o *Instance; // x0
  __int64 v13; // x1
  CommonUI_o *v14; // x21
  System_Action_o *v15; // x20

  if ( (byte_42EC509 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isRes, (_DWORD)method, v3);
    sub_B5D5C4(&Method_RecoverItemComponent_setRequestInfo__, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10, v11);
    byte_42EC509 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = Instance;
  if ( isRes )
  {
    v15 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v15, (Il2CppObject *)this, Method_RecoverItemComponent_setRequestInfo__, 0LL);
    if ( v14 )
    {
      CommonUI__CloseConfirmDialog_18202348(v14, v15, 0LL);
      return;
    }
LABEL_8:
    sub_B5D69C(Instance, v13);
  }
  if ( !Instance )
    goto LABEL_8;
  CommonUI__CloseConfirmDialog(Instance, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecoverItemComponent_CallbackFunc___ctor(
        RecoverItemComponent_CallbackFunc_o *this,
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
  sub_B5D560(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall RecoverItemComponent_CallbackFunc__BeginInvoke(
        RecoverItemComponent_CallbackFunc_o *this,
        int32_t type,
        int32_t id,
        int32_t num,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  __int64 v14[4]; // [xsp+0h] [xbp-50h] BYREF
  int32_t v15; // [xsp+24h] [xbp-2Ch] BYREF
  int32_t v16; // [xsp+28h] [xbp-28h] BYREF
  int32_t v17; // [xsp+2Ch] [xbp-24h] BYREF

  v17 = type;
  v15 = num;
  v16 = id;
  if ( (byte_42E7F45 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, type, id, *(_QWORD *)&num);
    sub_B5D5C4(&RecoverType_Type_TypeInfo, v10, v11, v12);
    byte_42E7F45 = 1;
  }
  v14[3] = 0LL;
  v14[0] = j_il2cpp_value_box_0(RecoverType_Type_TypeInfo, &v17);
  v14[1] = j_il2cpp_value_box_0(int_TypeInfo, &v16);
  v14[2] = j_il2cpp_value_box_0(int_TypeInfo, &v15);
  return (System_IAsyncResult_o *)sub_B5D568(this, v14, callback, object);
}


void __fastcall RecoverItemComponent_CallbackFunc__EndInvoke(
        RecoverItemComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecoverItemComponent_CallbackFunc__Invoke(
        RecoverItemComponent_CallbackFunc_o *this,
        int32_t type,
        int32_t id,
        int32_t num,
        const MethodInfo *method)
{
  __int64 v5; // x8
  __int64 v9; // x26
  RecoverItemComponent_CallbackFunc_o **v10; // x27
  __int64 v11; // x28
  unsigned int v12; // w25
  __int64 class_0; // x0
  __int64 v14; // x3
  __int64 v15; // x8
  unsigned int v16; // w24
  unsigned __int64 v17; // x10
  _DWORD *v18; // x11
  __int64 v19; // x0
  __int64 v20; // x0
  __int64 v21; // x0
  void (__fastcall **v22)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD); // x0
  RecoverItemComponent_CallbackFunc_o *v23; // x8
  __int64 *v24; // x23
  __int64 v25; // x24
  void (__fastcall *v26)(unsigned int *, _QWORD, _QWORD, __int64); // x25
  char v27; // w25
  char v28; // w0
  __int64 v29; // x3
  unsigned int v30; // w25
  __int64 v31; // x8
  __int64 v32; // x1
  __int64 v33; // x2
  unsigned __int64 v34; // x10
  _DWORD *v35; // x11
  unsigned int v36; // [xsp+4h] [xbp-5Ch] BYREF
  RecoverItemComponent_CallbackFunc_o *v37; // [xsp+8h] [xbp-58h] BYREF

  v37 = this;
  v36 = type;
  v5 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v5 )
  {
    v10 = &v37;
    v9 = 1LL;
    goto LABEL_5;
  }
  v9 = *(_QWORD *)(v5 + 24);
  if ( v9 )
  {
    v10 = (RecoverItemComponent_CallbackFunc_o **)(v5 + 32);
LABEL_5:
    v11 = 0LL;
    while ( 1 )
    {
      v23 = v10[v11];
      v24 = *(__int64 **)&v23->fields.method;
      v25 = *(_QWORD *)&v23->fields.extra_arg;
      v26 = *(void (__fastcall **)(unsigned int *, _QWORD, _QWORD, __int64))&v23->fields.method_ptr;
      if ( *(__int16 *)(v25 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v23->fields.extra_arg, *(_QWORD *)&type, *(_QWORD *)&id);
      if ( (sub_B5D5F4(v25) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v25 + 74) != 3 )
        goto LABEL_36;
      v26((unsigned int *)v36, (unsigned int)id, (unsigned int)num, v25);
LABEL_38:
      if ( ++v11 == v9 )
        return;
    }
    if ( !v24 )
    {
      v26(&v36 - 4, (unsigned int)id, (unsigned int)num, v25);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v25 + 72) != -1 && (*(_BYTE *)(*v24 + 277) & 1) == 0 && this->fields.m_target )
    {
      v27 = sub_B5D5EC(v25);
      v28 = sub_B5D9F0(v25);
      if ( (v27 & 1) != 0 )
      {
        v30 = v36;
        if ( (v28 & 1) != 0 )
        {
          v31 = *v24;
          v32 = *(_QWORD *)(v25 + 24);
          v33 = *(unsigned __int16 *)(v25 + 72);
          if ( *(_WORD *)(*v24 + 298) )
          {
            v34 = 0LL;
            v35 = (_DWORD *)(*(_QWORD *)(v31 + 176) + 8LL);
            while ( *((_QWORD *)v35 - 1) != v32 )
            {
              ++v34;
              v35 += 4;
              if ( v34 >= *(unsigned __int16 *)(*v24 + 298) )
                goto LABEL_35;
            }
            v21 = v31 + 16LL * (*v35 + (int)v33) + 312;
          }
          else
          {
LABEL_35:
            v21 = sub_AF54C0(v24, v32, v33, v29);
          }
          v20 = *(_QWORD *)(v21 + 8);
        }
        else
        {
          v20 = *(_QWORD *)(*v24 + 16LL * *(unsigned __int16 *)(v25 + 72) + 320);
        }
        v22 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD))sub_B5D674(v20, v25);
        (*v22)(v24, v30, (unsigned int)id, (unsigned int)num, v22);
      }
      else
      {
        v12 = *(unsigned __int16 *)(v25 + 72);
        if ( (v28 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v25);
          v15 = *v24;
          v16 = v36;
          if ( *(_WORD *)(*v24 + 298) )
          {
            v17 = 0LL;
            v18 = (_DWORD *)(*(_QWORD *)(v15 + 176) + 8LL);
            while ( *((_QWORD *)v18 - 1) != class_0 )
            {
              ++v17;
              v18 += 4;
              if ( v17 >= *(unsigned __int16 *)(*v24 + 298) )
                goto LABEL_11;
            }
            v19 = v15 + 16LL * (int)(*v18 + v12) + 312;
          }
          else
          {
LABEL_11:
            v19 = sub_AF54C0(v24, class_0, v12, v14);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD))v19)(
            v24,
            v16,
            (unsigned int)id,
            (unsigned int)num,
            *(_QWORD *)(v19 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD))(*v24
                                                                            + 16LL * *(unsigned __int16 *)(v25 + 72)
                                                                            + 312))(
            v24,
            v36,
            (unsigned int)id,
            (unsigned int)num,
            *(_QWORD *)(*v24 + 16LL * *(unsigned __int16 *)(v25 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, _QWORD, _QWORD, __int64))v26)(
      v24,
      v36,
      (unsigned int)id,
      (unsigned int)num,
      v25);
    goto LABEL_38;
  }
}


void __fastcall RecoverItemComponent___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E7F43 & 1) == 0 )
  {
    sub_B5D5C4(&RecoverItemComponent___c_TypeInfo, v1, v2, v3);
    byte_42E7F43 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(RecoverItemComponent___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)RecoverItemComponent___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
}


void __fastcall RecoverItemComponent___c___ctor(RecoverItemComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall RecoverItemComponent___c___setRequestInfo_b__43_0(
        RecoverItemComponent___c_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  CommonUI_o *Instance; // x0
  __int64 v8; // x1

  if ( (byte_42E7F44 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5, v6);
    byte_42E7F44 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseRecoverItemListDialog(Instance, 0LL),
        (Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
    sub_B5D69C(Instance, v8);
  }
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0, 0LL);
}